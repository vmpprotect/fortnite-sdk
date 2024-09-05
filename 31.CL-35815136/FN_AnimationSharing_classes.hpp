#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AnimationSharing
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AnimationSharing.AnimationSharingStateProcessor
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UAnimationSharingStateProcessor : public UObject	
	{
	public:
		TWeakObjectPtr<UEnum*> AnimationStateEnum; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationSharing.AnimationSharingStateProcessor");
			return ret;
		}

		void ProcessActorState(int32_t& OutState, AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF74E047B90(relative to base address)
		UEnum GetAnimationStateEnum(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74E047ACC(relative to base address)
	};


	// Class AnimationSharing.AnimSharingStateInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x28 (0x3E0 - 0x3B8)
	class UAnimSharingStateInstance : public UAnimInstance	
	{
	public:
		UAnimSequence* AnimationToPlay; // 0x3B8(0x8)
		float PermutationTimeOffset; // 0x3C0(0x4)
		float PlayRate; // 0x3C4(0x4)
		bool bStateBool; // 0x3C8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x3C9(0x7) UNKNOWN PROPERTY
		UAnimSharingInstance* Instance; // 0x3D0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x3D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationSharing.AnimSharingStateInstance");
			return ret;
		}

		void GetInstancedActors(TArray<AActor*>& Actors); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E047AF4(relative to base address)
	};


	// Class AnimationSharing.AnimSharingTransitionInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x18 (0x3D0 - 0x3B8)
	class UAnimSharingTransitionInstance : public UAnimInstance	
	{
	public:
		TWeakObjectPtr<USkeletalMeshComponent*> FromComponent; // 0x3B8(0x8)
		TWeakObjectPtr<USkeletalMeshComponent*> ToComponent; // 0x3C0(0x8)
		float BlendTime; // 0x3C8(0x4)
		bool bBlendBool; // 0x3CC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x3CD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationSharing.AnimSharingTransitionInstance");
			return ret;
		}
	};


	// Class AnimationSharing.AnimSharingAdditiveInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x18 (0x3D0 - 0x3B8)
	class UAnimSharingAdditiveInstance : public UAnimInstance	
	{
	public:
		TWeakObjectPtr<USkeletalMeshComponent*> BaseComponent; // 0x3B8(0x8)
		TWeakObjectPtr<UAnimSequence*> AdditiveAnimation; // 0x3C0(0x8)
		float Alpha; // 0x3C8(0x4)
		bool bStateBool; // 0x3CC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x3CD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationSharing.AnimSharingAdditiveInstance");
			return ret;
		}
	};


	// Class AnimationSharing.AnimSharingInstance
	// Inherited from UObject
	// Size: 0xF8 (0x120 - 0x28)
	class UAnimSharingInstance : public UObject	
	{
	public:
		TArray<AActor*> RegisteredActors; // 0x28(0x10)
		unsigned char UnknownData00_6[0x50]; // 0x38(0x50) UNKNOWN PROPERTY
		UAnimationSharingStateProcessor* StateProcessor; // 0x88(0x8)
		unsigned char UnknownData01_6[0x38]; // 0x90(0x38) UNKNOWN PROPERTY
		TArray<UAnimSequence*> UsedAnimationSequences; // 0xC8(0x10)
		unsigned char UnknownData02_6[0x10]; // 0xD8(0x10) UNKNOWN PROPERTY
		UEnum* StateEnum; // 0xE8(0x8)
		AActor* SharingActor; // 0xF0(0x8)
		unsigned char UnknownData03_7[0x28]; // 0xF8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationSharing.AnimSharingInstance");
			return ret;
		}
	};


	// Class AnimationSharing.AnimationSharingManager
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UAnimationSharingManager : public UObject	
	{
	public:
		TArray<USkeleton*> Skeletons; // 0x28(0x10)
		TArray<UAnimSharingInstance*> PerSkeletonData; // 0x38(0x10)
		unsigned char UnknownData00_7[0x40]; // 0x48(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationSharing.AnimationSharingManager");
			return ret;
		}

		void RegisterActorWithSkeletonBP(AActor* InActor, USkeleton* SharingSkeleton); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E047DF4(relative to base address)
		UAnimationSharingManager GetAnimationSharingManager(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E047A4C(relative to base address)
		bool CreateAnimationSharingManager(UObject* WorldContextObject, UAnimationSharingSetup* Setup); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E04796C(relative to base address)
		bool AnimationSharingEnabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74E047950(relative to base address)
	};


	// Class AnimationSharing.AnimationSharingSetup
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UAnimationSharingSetup : public UObject	
	{
	public:
		TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28(0x10)
		FAnimationSharingScalability ScalabilitySettings; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationSharing.AnimationSharingSetup");
			return ret;
		}
	};

}
