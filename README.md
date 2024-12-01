# 석사 학위 논문
[생성형 AI 기반의 3D 모델링을 활용한 메타버스 콘텐츠 프로토타입 설계 및 구현 : 언리얼 엔진을 중심으로](https://www.riss.kr/search/detail/DetailView.do?p_mat_type=be54d9b8bc7cdb09&control_no=529b0ed5482b700fffe0bdc3ef48d419&keyword=%EC%8B%A0%EC%84%A4%EB%B9%88)

# 한국컴퓨터게임학회지 논문
[Design and Implementation of Metaverse Content Prototype Using Generative AI-based 3D Modeling](https://www.kci.go.kr/kciportal/ci/sereArticleSearch/ciSereArtiView.kci?sereArticleSearchBean.artiId=ART003093391)

시연 영상 : https://youtu.be/C0XIUy_qUfc

# 시스템 흐름
![시스템 흐름](https://github.com/user-attachments/assets/05ae3bff-c817-4d25-b44c-46c513a80297)

# DB ERD
![db 구성](https://github.com/user-attachments/assets/4b3ac833-44b1-4908-b3be-8bdccc70aafe)

## Point 1. 데이터베이스 연동
[HttpRequestActor.cpp](https://github.com/micalia/GenAi_Housing/blob/main/Source/GenAi_Housing/Private/HttpRequestActor.cpp#L135)
![db](https://github.com/user-attachments/assets/210a8ab1-ed7e-48da-a298-be11df67b061)

## Point 2. DB에 저장돼 있던 특정 유저의 방 오브젝트(FBXMeshActor) 정보 파싱
[CustomFBXImportManager.cpp](https://github.com/micalia/GenAi_Housing/blob/main/Source/GenAi_Housing/Private/CustomFBXImportManager.cpp#L141)
<br>
![roomInfo](https://github.com/user-attachments/assets/9acf9416-c8c9-44b1-94e9-017e5f36f84d)

## Point 3. TQueue자료형을 활용하여 오브젝트(FBXMeshActor)들을 순차적으로 모델링 다운 및 임포트 처리
[GenAiPlayerController.cpp](https://github.com/micalia/GenAi_Housing/blob/main/Source/GenAi_Housing/Private/GenAiPlayerController.cpp#L126)

## Point 4. TArray를 활용한 TMap Replicate 구현
[CustomFBXImportManager.cpp](https://github.com/micalia/GenAi_Housing/blob/main/Source/GenAi_Housing/Private/CustomFBXImportManager.cpp#L237)
![GenAi_MapReplicate](https://github.com/user-attachments/assets/e078e2c4-b7fc-4284-935b-4e677f087f5c)

------------
![Preview](https://github.com/user-attachments/assets/fa2d3dd1-2de2-4cca-bb78-8f093ab61f8f)
