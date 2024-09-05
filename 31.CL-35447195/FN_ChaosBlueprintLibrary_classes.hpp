#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ChaosBlueprintLibrary
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void ClothControllerWriteToSimulation(UCustomCharacterPartAnimInstance CharacterPartAnimInstance, FString& ClothingAssetName, FClothCoreSettings& ClothCoreSettings, FClothParameters& ClothSettings, FVector& WindVelocity, FClothParameters& OutWorldSpaceClothSettings, FVector& OutWorldSpaceWindVelocity); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EC7540
	};

}
