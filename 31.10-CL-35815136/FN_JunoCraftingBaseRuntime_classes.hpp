#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoCraftingBaseRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoCraftingBaseRuntime.JunoCraftingBaseSettings
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UJunoCraftingBaseSettings : public UPrimaryDataAsset	
	{
	public:
		UDataTable* JunoCraftingIngredientsShopUIDataTable; // 0x30(0x8)
		UDataTable* JunoBuildingFrontendUIDataTable; // 0x38(0x8)
		UDataTable* JunoPropFrontendUIDataTable; // 0x40(0x8)
		UJunoCraftingCategoryUIData* CraftingCategoryUIData; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCraftingBaseRuntime.JunoCraftingBaseSettings");
			return ret;
		}

		UJunoCraftingBaseSettings Get(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7510EA7C8(relative to base address)
	};


	// Class JunoCraftingBaseRuntime.JunoCraftingCategoryUIData
	// Inherited from UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UJunoCraftingCategoryUIData : public UDataAsset	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		TArray<FJunoCraftingCategoryUIDataEntry> Entries; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCraftingBaseRuntime.JunoCraftingCategoryUIData");
			return ret;
		}
	};

}
