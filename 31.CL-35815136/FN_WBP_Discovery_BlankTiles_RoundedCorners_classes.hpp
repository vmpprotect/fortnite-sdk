#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WBP_Discovery_BlankTiles_RoundedCorners
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/WBP_Discovery_BlankTiles_RoundedCorners.WBP_Discovery_BlankTiles_RoundedCorners_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x300 - 0x2B0)
	class UWBP_Discovery_BlankTiles_RoundedCorners_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UTileView* TileView_BlankTiles; // 0x2B8(0x8)
		UWBP_Discovery_NoResultsMessage_C* WBP_Discovery_NoResultsMessage; // 0x2C0(0x8)
		FText FlavorSubtitleOverride; // 0x2C8(0x10)
		FVector2D EntrySize; // 0x2D8(0x10)
		int32_t Entries_Count; // 0x2E8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2EC(0x4) UNKNOWN PROPERTY
		FText FlavorTitleOverride; // 0x2F0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/WBP_Discovery_BlankTiles_RoundedCorners.WBP_Discovery_BlankTiles_RoundedCorners_C");
			return ret;
		}

		void SetMessageTextOverrides(FText InTitle); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetEntryTileSize(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_Discovery_BlankTiles_RoundedCorners(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
