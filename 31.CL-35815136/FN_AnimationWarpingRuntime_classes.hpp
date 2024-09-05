#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AnimationWarpingRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AnimationWarpingRuntime.AnimationWarpingLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAnimationWarpingLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationWarpingRuntime.AnimationWarpingLibrary");
			return ret;
		}

		FTransform GetOffsetRootTransform(FAnimNodeReference& Node); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521CC17C(relative to base address)
		bool GetCurveValueFromAnimation(UAnimSequenceBase* Animation, FName CurveName, float Time, float& OutValue); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521CBF8C(relative to base address)
	};

}
