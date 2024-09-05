#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoCraftingBaseRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoCraftingBaseRuntime.JunoCraftingBaseSettings
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UJunoCraftingBaseSettings : public UPrimaryDataAsset	
	{
	public:
		UDataTable JunoCraftingIngredientsShopUIDataTable; // 0x30(0x8)
		UJunoCraftingCategoryUIData CraftingCategoryUIData; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCraftingBaseRuntime.JunoCraftingBaseSettings");
			return ret;
		}

		UJunoCraftingBaseSettings Get(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414CC0A78
	};


	// Class JunoCraftingBaseRuntime.JunoCraftingCategoryUIData
	// Inherited from UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UJunoCraftingCategoryUIData : public UDataAsset	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		TArray Entries; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCraftingBaseRuntime.JunoCraftingCategoryUIData");
			return ret;
		}
	};

}
