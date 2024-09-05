#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AnimationBudgetAllocator
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void SetAnimationBudgetParameters(UObject WorldContextObject, FAnimationBudgetAllocatorParameters& InParameters); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF4145A5158
		void EnableAnimationBudget(UObject WorldContextObject, bool bEnabled); // Flags: Final|Native|Static|Private|BlueprintCallable 0x7FF4145A5078
	};


	// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
	// Inherited from USkeletalMeshComponent -> USkinnedMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xF20 - 0xEF8)
	class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0xEF8(0x20) UNKNOWN PROPERTY
		bool bAutoRegisterWithBudgetAllocator : 1; // 0xF18:0(0x1)
		bool bAutoCalculateSignificance : 1; // 0xF18:1(0x1)
		bool bShouldUseActorRenderedFlag : 1; // 0xF18:2(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xF19(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted");
			return ret;
		}

		void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145A5238
	};

}
