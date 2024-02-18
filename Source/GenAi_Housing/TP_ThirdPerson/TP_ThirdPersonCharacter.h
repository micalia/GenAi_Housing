// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "../Public/NameWidgetInterface.h"
#include "TP_ThirdPersonCharacter.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnPlayerNameDelegate);

UCLASS(config=Game)
class ATP_ThirdPersonCharacter : public ACharacter, public INameWidgetInterface
{
	GENERATED_BODY()

public:
	ATP_ThirdPersonCharacter();
private:
	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;


public:
	FOnPlayerNameDelegate OnPlayerName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class UNameWidgetComponent* widgetComp;

	UPROPERTY()
		TSubclassOf<class UPlayerNameWidget> PlayerNameWBFactory;
	UPROPERTY()
		class UPlayerNameWidget* playerNameWB;

	void TestWorld();
	//void SetNickName();
	void NameWidgetUpdate();
protected:
	virtual void PossessedBy(AController* NewController) override;
	void UpdateNickName();

	virtual void OnRep_PlayerState();

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			
	virtual void SetUpCharacterNameWidget(class UPlayerNameWidget* InWidget, class AActor* InPlayer) override;
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();
	virtual void Tick(float DeltaTime);
public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	FORCEINLINE void SetUserName(FString name) { UserName = name; }
	FORCEINLINE FString GetUserName() { return UserName; }

	UFUNCTION(Server, Reliable)
	void SetPlayerNameOnServer(const FString& InCustomPlayerName);

	UPROPERTY(ReplicatedUsing = OnRep_SetPlayerName, BlueprintReadOnly)
	FString CustomPlayerName;
	void SetUpLocal(class UPlayerNameWidget* InNameWidget);

	UFUNCTION()
	void OnRep_SetPlayerName();
private:
	FString UserName;
};

