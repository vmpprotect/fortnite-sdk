#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BlendStack
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class BlendStack.BlendStackAnimNodeLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBlendStackAnimNodeLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlendStack.BlendStackAnimNodeLibrary");
			return ret;
		}

		float GetCurrentBlendStackAnimAssetTime(FAnimNodeReference& Node); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DC22704(relative to base address)
		UAnimationAsset GetCurrentBlendStackAnimAsset(FAnimNodeReference& Node); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DC22618(relative to base address)
		void ForceBlendNextUpdate(FBlendStackAnimNodeReference& BlendStackNode); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC22574(relative to base address)
		void ConvertToBlendStackNodePure(FAnimNodeReference& Node, FBlendStackAnimNodeReference& BlendStackNode, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DC223B4(relative to base address)
		FBlendStackAnimNodeReference ConvertToBlendStackNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC22288(relative to base address)
		void BlendTo(FAnimUpdateContext& Context, FBlendStackAnimNodeReference& BlendStackNode, UAnimationAsset* AnimationAsset, float AnimationTime, bool bLoop, bool bMirrored, float BlendTime, FVector BlendParameters, float WantedPlayRate, float ActivationDelay); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC21714(relative to base address)
	};


	// Class BlendStack.BlendStackInputAnimNodeLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBlendStackInputAnimNodeLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlendStack.BlendStackInputAnimNodeLibrary");
			return ret;
		}

		void GetProperties(FBlendStackInputAnimNodeReference& BlendStackInputNode, UAnimationAsset* AnimationAsset, float& AccumulatedTime); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC227D0(relative to base address)
		void ConvertToBlendStackInputNodePure(FAnimNodeReference& Node, FBlendStackInputAnimNodeReference& BlendStackInputNode, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DC220C8(relative to base address)
		FBlendStackInputAnimNodeReference ConvertToBlendStackInputNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC21F9C(relative to base address)
	};

}
