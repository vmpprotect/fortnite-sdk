#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BlendStack
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		float GetCurrentBlendStackAnimAssetTime(FAnimNodeReference& Node); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414648558
		UAnimationAsset GetCurrentBlendStackAnimAsset(FAnimNodeReference& Node); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414648478
		void ForceBlendNextUpdate(FBlendStackAnimNodeReference& BlendStackNode); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414648398
		void ConvertToBlendStackNodePure(FAnimNodeReference& Node, FBlendStackAnimNodeReference& BlendStackNode, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4146482B8
		FBlendStackAnimNodeReference ConvertToBlendStackNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4146481D8
		void BlendTo(FAnimUpdateContext& Context, FBlendStackAnimNodeReference& BlendStackNode, UAnimationAsset AnimationAsset, float AnimationTime, bool bLoop, bool bMirrored, float BlendTime, FVector BlendParameters, float WantedPlayRate, float ActivationDelay); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4146480F8
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

		void GetProperties(FBlendStackInputAnimNodeReference& BlendStackInputNode, UAnimationAsset& AnimationAsset, float& AccumulatedTime); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4146487F8
		void ConvertToBlendStackInputNodePure(FAnimNodeReference& Node, FBlendStackInputAnimNodeReference& BlendStackInputNode, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414648718
		FBlendStackInputAnimNodeReference ConvertToBlendStackInputNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414648638
	};

}
