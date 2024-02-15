// Copyright Epic Games, Inc. All Rights Reserved.

#include "TP_ThirdPersonCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include <UMG/Public/Components/WidgetComponent.h>
#include "../Public/PlayerNameWidget.h"
#include "../Public/NetPlayerState.h"
#include <UMG/Public/Components/TextBlock.h>
#include "../Public/GenAiGameInstance.h"
#include "EngineUtils.h"


//////////////////////////////////////////////////////////////////////////
// ATP_ThirdPersonCharacter

ATP_ThirdPersonCharacter::ATP_ThirdPersonCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	widgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("widgetComp"));
	widgetComp->SetupAttachment(GetCapsuleComponent());
	widgetComp->SetRelativeLocation(FVector(0, 0, 110));
	widgetComp->SetWidgetSpace(EWidgetSpace::Screen);

	ConstructorHelpers::FClassFinder<UPlayerNameWidget> tempPlayerNameWB(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprints/Widget/InGame/WB_PlayerName.WB_PlayerName_C'"));
	if (tempPlayerNameWB.Succeeded()) {
		PlayerNameWBFactory = tempPlayerNameWB.Class;
	}
	widgetComp->SetWidgetClass(PlayerNameWBFactory);
}

void ATP_ThirdPersonCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	SetNickName();
	UpdateNickName();
}

void ATP_ThirdPersonCharacter::UpdateNickName()
{
	if (auto gi = GetGameInstance<UGenAiGameInstance>()) {
		if (auto ps = GetPlayerState<ANetPlayerState>()) {
			if (!gi->GetGiPlayerName().Equals("None")) {
				ps->ServerSetMyName(gi->GetGiPlayerName());
			}
		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Purple, FString::Printf(TEXT("gi is null")), true, FVector2D(1, 1));
	}
}

void ATP_ThirdPersonCharacter::SetNickName()
{
	GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Purple, FString::Printf(TEXT("SetNickName!!")), true, FVector2D(1, 1));
	APlayerState* ps = GetPlayerState();
	if (ensure(playerNameWB)) {
		if (ensureMsgf(ps, TEXT("log"))) {
			if (ensureMsgf(!ps->GetPlayerName().IsEmpty(), TEXT("log"))) {
				GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Purple, FString::Printf(TEXT("gi : %s"), *ps->GetPlayerName()), true, FVector2D(1, 1));
				playerNameWB->PlayerNameTxt->SetText(FText::FromString(ps->GetPlayerName()));
			}
		}
	}
}

void ATP_ThirdPersonCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	SetNickName();
	UpdateNickName();
}

void ATP_ThirdPersonCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	playerNameWB = Cast<UPlayerNameWidget>(widgetComp->GetWidget());
	/*if (ensure(playerNameWB)) {
		GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Purple, FString::Printf(TEXT("GetUserName: %s"), *GetUserName()), true, FVector2D(1, 1));
		playerNameWB->PlayerNameTxt->SetText(FText::FromString(GetUserName()));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Purple, FString::Printf(TEXT("GetUserName: not")), true, FVector2D(1, 1));

	}*/
	GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Purple, FString::Printf(TEXT("HI Character")), true, FVector2D(1, 1));

	/*UWorld* World = GetWorld();
	World->GameStateSetEvent.AddUObject(this, );
	World->
	FTimerHandle ChangeHandler;
	GetWorldTimerManager().SetTimer(ChangeHandler, this, &ATP_ThirdPersonCharacter::SetNickName, 0.5f, false);*/
	
}

void ATP_ThirdPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

//////////////////////////////////////////////////////////////////////////
// Input

void ATP_ThirdPersonCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ATP_ThirdPersonCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ATP_ThirdPersonCharacter::Look);

	}

}

void ATP_ThirdPersonCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ATP_ThirdPersonCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}




