#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PerformanceCaptureCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PerformanceCaptureCore.CaptureCharacter
	// Inherited from ASkeletalMeshActor -> AActor -> UObject
	// Size: 0x20 (0x330 - 0x310)
	class ACaptureCharacter : public ASkeletalMeshActor	
	{
	public:
		ACapturePerformer SourcePerformer; // 0x310(0x8)
		UIKRetargeter RetargetAsset; // 0x318(0x8)
		bool bForceAllSkeletalMeshesToFollowLeader; // 0x320(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x321(0x7) UNKNOWN PROPERTY
		URetargetComponent RetargetComponent; // 0x328(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PerformanceCaptureCore.CaptureCharacter");
			return ret;
		}

		void SetSourcePerformer(ACapturePerformer InPerformer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB4920
		void SetRetargetAsset(UIKRetargeter InRetargetAsset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB4840
		void SetForceAllSkeletalMeshesToFollowLeader(bool InFollowLeader); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB4760
		void SetCustomRetargetProfile(FRetargetProfile InProfile); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB4680
		FRetargetProfile GetCustomRetargetProfile(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB45A0
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
		unsigned char UnknownData01_7[0xA]; // 0x316(0xA) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PerformanceCaptureCore.CapturePerformer");
			return ret;
		}

		void SetMocapMesh(USkeletalMesh MocapMesh); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB4D80
		void SetLiveLinkSubject(FLiveLinkSubjectName Subject); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB4CA0
		void SetEvaluateLiveLinkData(bool bEvaluateLinkLink); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB4BC0
		FLiveLinkSubjectName GetLiveLinkSubject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EB4AE0
		bool GetEvaluateLiveLinkData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EB4A00
	};


	// Class PerformanceCaptureCore.PerformerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UPerformerComponent : public UActorComponent	
	{
	public:
		FLiveLinkSubjectName SubjectName; // 0xA0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		FComponentReference ControlledSkeletalMesh; // 0xA8(0x28)
		bool bEvaluateAnimation; // 0xD0(0x1)
		bool bForceOtherMeshesToFollowControlledMesh; // 0xD1(0x1)
		unsigned char UnknownData03_7[0x6]; // 0xD2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PerformanceCaptureCore.PerformerComponent");
			return ret;
		}

		void SetLiveLinkSubject(FLiveLinkSubjectName Subject); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB5100
		void SetEvaluateLiveLinkData(bool bEvaluateLinkLink); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB5020
		FLiveLinkSubjectName GetLiveLinkSubject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EB4F40
		bool GetEvaluateLiveLinkData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EB4E60
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
		unsigned char UnknownData02_6[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
		UIKRetargeter RetargetAsset; // 0xF8(0x8)
		FRetargetProfile CustomRetargetProfile; // 0x100(0x100)
		unsigned char UnknownData03_7[0x8]; // 0x200(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PerformanceCaptureCore.RetargetComponent");
			return ret;
		}

		void SetSourcePerformerMesh(USkeletalMeshComponent InPerformerMesh); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB5560
		void SetRetargetAsset(UIKRetargeter InRetargetAsset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB5480
		void SetCustomRetargetProfile(FRetargetProfile InProfile); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB53A0
		void SetControlledMesh(USkeletalMeshComponent InControlledMesh); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB52C0
		FRetargetProfile GetCustomRetargetProfile(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB51E0
	};

}
