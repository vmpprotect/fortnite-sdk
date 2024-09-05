#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PerformanceCaptureCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PerformanceCaptureCore.CaptureCharacter
	// Inherited from ASkeletalMeshActor -> AActor -> UObject
	// Size: 0x20 (0x330 - 0x310)
	class ACaptureCharacter : public ASkeletalMeshActor	
	{
	public:
		ACapturePerformer* SourcePerformer; // 0x310(0x8)
		UIKRetargeter* RetargetAsset; // 0x318(0x8)
		bool bForceAllSkeletalMeshesToFollowLeader; // 0x320(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x321(0x7) UNKNOWN PROPERTY
		URetargetComponent* RetargetComponent; // 0x328(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PerformanceCaptureCore.CaptureCharacter");
			return ret;
		}

		void SetSourcePerformer(ACapturePerformer* InPerformer); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7520777B8(relative to base address)
		void SetRetargetAsset(UIKRetargeter* InRetargetAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75207769C(relative to base address)
		void SetForceAllSkeletalMeshesToFollowLeader(bool InFollowLeader); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75207735C(relative to base address)
		void SetCustomRetargetProfile(FRetargetProfile InProfile); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752076F80(relative to base address)
		FRetargetProfile GetCustomRetargetProfile(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752076DEC(relative to base address)
	};


	// Class PerformanceCaptureCore.CapturePerformer
	// Inherited from ASkeletalMeshActor -> AActor -> UObject
	// Size: 0x10 (0x320 - 0x310)
	class ACapturePerformer : public ASkeletalMeshActor	
	{
	public:
		FLiveLinkSubjectName SubjectName; // 0x310(0x4)
		bool bForceAllMeshesToFollowLeader; // 0x314(0x1)
		bool bEvaluateAnimation; // 0x315(0x1)
		unsigned char UnknownData00_7[0xA]; // 0x316(0xA) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PerformanceCaptureCore.CapturePerformer");
			return ret;
		}

		void SetMocapMesh(USkeletalMesh* MocapMesh); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752077610(relative to base address)
		void SetLiveLinkSubject(FLiveLinkSubjectName Subject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7520773E8(relative to base address)
		void SetEvaluateLiveLinkData(bool bEvaluateLinkLink); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752077250(relative to base address)
		FLiveLinkSubjectName GetLiveLinkSubject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752076EE0(relative to base address)
		bool GetEvaluateLiveLinkData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF752076EBC(relative to base address)
	};


	// Class PerformanceCaptureCore.PerformerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UPerformerComponent : public UActorComponent	
	{
	public:
		FLiveLinkSubjectName SubjectName; // 0xA0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		FComponentReference ControlledSkeletalMesh; // 0xA8(0x28)
		bool bEvaluateAnimation; // 0xD0(0x1)
		bool bForceOtherMeshesToFollowControlledMesh; // 0xD1(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xD2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PerformanceCaptureCore.PerformerComponent");
			return ret;
		}

		void SetLiveLinkSubject(FLiveLinkSubjectName Subject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752077500(relative to base address)
		void SetEvaluateLiveLinkData(bool bEvaluateLinkLink); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7520772DC(relative to base address)
		FLiveLinkSubjectName GetLiveLinkSubject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFEA96C(relative to base address)
		bool GetEvaluateLiveLinkData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74F6A3958(relative to base address)
	};


	// Class PerformanceCaptureCore.RetargetAnimInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x1D8 (0x590 - 0x3B8)
	class URetargetAnimInstance : public UAnimInstance	
	{
	public:
		FAnimNode_RetargetPoseFromMesh RetargetNode; // 0x3B8(0x1D8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PerformanceCaptureCore.RetargetAnimInstance");
			return ret;
		}
	};


	// Class PerformanceCaptureCore.RetargetComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x168 (0x208 - 0xA0)
	class URetargetComponent : public UActorComponent	
	{
	public:
		FComponentReference SourceSkeletalMeshComponent; // 0xA0(0x28)
		FComponentReference ControlledSkeletalMeshComponent; // 0xC8(0x28)
		bool bForceOtherMeshesToFollowControlledMesh; // 0xF0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
		UIKRetargeter* RetargetAsset; // 0xF8(0x8)
		FRetargetProfile CustomRetargetProfile; // 0x100(0x100)
		unsigned char UnknownData01_7[0x8]; // 0x200(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PerformanceCaptureCore.RetargetComponent");
			return ret;
		}

		void SetSourcePerformerMesh(USkeletalMeshComponent* InPerformerMesh); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752077838(relative to base address)
		void SetRetargetAsset(UIKRetargeter* InRetargetAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752077738(relative to base address)
		void SetCustomRetargetProfile(FRetargetProfile InProfile); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7520770E8(relative to base address)
		void SetControlledMesh(USkeletalMeshComponent* InControlledMesh); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752076F00(relative to base address)
		FRetargetProfile GetCustomRetargetProfile(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752076E58(relative to base address)
	};

}
