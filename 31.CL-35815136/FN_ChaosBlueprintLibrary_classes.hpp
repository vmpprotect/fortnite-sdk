#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ChaosBlueprintLibrary
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ChaosBlueprintLibrary.ChaosBlueprintLibraryBPLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UChaosBlueprintLibraryBPLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosBlueprintLibrary.ChaosBlueprintLibraryBPLibrary");
			return ret;
		}

		void ClothControllerWriteToSimulation(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, FString& ClothingAssetName, FClothCoreSettings& ClothCoreSettings, FClothParameters& ClothSettings, FVector& WindVelocity, FClothParameters& OutWorldSpaceClothSettings, FVector& OutWorldSpaceWindVelocity); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7506FE95C(relative to base address)
	};

}
