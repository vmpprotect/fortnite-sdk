#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WBP_Discovery_BlankTiles_RoundedCorners
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/WBP_Discovery_BlankTiles_RoundedCorners.WBP_Discovery_BlankTiles_RoundedCorners_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x308 - 0x2B8)
	class UWBP_Discovery_BlankTiles_RoundedCorners_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UTileView TileView_BlankTiles; // 0x2C0(0x8)
		UWBP_Discovery_NoResultsMessage_C WBP_Discovery_NoResultsMessage; // 0x2C8(0x8)
		FText FlavorSubtitleOverride; // 0x2D0(0x10)
		FVector2D EntrySize; // 0x2E0(0x10)
		int32_t Entries_Count; // 0x2F0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2F4(0x4) UNKNOWN PROPERTY
		FText FlavorTitleOverride; // 0x2F8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/WBP_Discovery_BlankTiles_RoundedCorners.WBP_Discovery_BlankTiles_RoundedCorners_C");
			return ret;
		}

		void SetMessageTextOverrides(FText InTitle); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D63334C00
		void SetEntryTileSize(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D63334B00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D63334A00
		void ExecuteUbergraph_WBP_Discovery_BlankTiles_RoundedCorners(int32_t EntryPoint); // Flags: Final 0x15D63334900
	};

}
