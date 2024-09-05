#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AnimationLayeringRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AnimationLayeringRuntime.BoneMaskDefinitionDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UBoneMaskDefinitionDataAsset : public UDataAsset	
	{
	public:
		FBoneMaskDefinition BoneMaskDefinition; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationLayeringRuntime.BoneMaskDefinitionDataAsset");
			return ret;
		}
	};


	// Class AnimationLayeringRuntime.BoneMaskFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBoneMaskFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationLayeringRuntime.BoneMaskFunctionLibrary");
			return ret;
		}

		void BP_BoneMask_UpdateBodyPartWeightsMulti(FBoneMask& BoneMask, TArray& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465ECF8
		void BP_BoneMask_UpdateBodyPartWeights(FBoneMask& BoneMask, FName Name, float LocalSpaceWeight, float MeshSpaceWeight); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465EC18
		void BP_BoneMask_UpdateBodyPartMeshSpaceWeight(FBoneMask& BoneMask, FName Name, float MeshSpaceWeight); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465EB38
		void BP_BoneMask_UpdateBodyPartLocalSpaceWeight(FBoneMask& BoneMask, FName Name, float LocalSpaceWeight); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465EA58
		void BP_BoneMask_GetBodyPartWeights(FBoneMask& BoneMask, FName Name, float& LocalSpaceWeight, float& MeshSpaceWeight); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465E978
	};

}
