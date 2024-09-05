#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AnimationLayeringRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		void BP_BoneMask_UpdateBodyPartWeightsMulti(FBoneMask& BoneMask, TArray<FBoneMaskUpdateMultiParam>& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF616A0(relative to base address)
		void BP_BoneMask_UpdateBodyPartWeights(FBoneMask& BoneMask, FName Name, float LocalSpaceWeight, float MeshSpaceWeight); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF613A4(relative to base address)
		void BP_BoneMask_UpdateBodyPartMeshSpaceWeight(FBoneMask& BoneMask, FName Name, float MeshSpaceWeight); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF61164(relative to base address)
		void BP_BoneMask_UpdateBodyPartLocalSpaceWeight(FBoneMask& BoneMask, FName Name, float LocalSpaceWeight); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF61164(relative to base address)
		void BP_BoneMask_GetBodyPartWeights(FBoneMask& BoneMask, FName Name, float& LocalSpaceWeight, float& MeshSpaceWeight); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF60F10(relative to base address)
	};

}
