#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AnimationBudgetAllocator
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary");
			return ret;
		}

		void SetAnimationBudgetParameters(UObject* WorldContextObject, FAnimationBudgetAllocatorParameters& InParameters); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE95EFC(relative to base address)
		void EnableAnimationBudget(UObject* WorldContextObject, bool bEnabled); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF74CE95DF4(relative to base address)
	};


	// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
	// Inherited from USkeletalMeshComponent -> USkinnedMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xF20 - 0xEF8)
	class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0xEF8(0x20) UNKNOWN PROPERTY
		bool bAutoRegisterWithBudgetAllocator : 1; // 0xF18:0(0x1)
		bool bAutoCalculateSignificance : 1; // 0xF18:1(0x1)
		bool bShouldUseActorRenderedFlag : 1; // 0xF18:2(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xF19(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted");
			return ret;
		}

		void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE9602C(relative to base address)
	};

}
