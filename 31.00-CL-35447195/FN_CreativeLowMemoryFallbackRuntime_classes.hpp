#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CreativeLowMemoryFallbackRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0xF0 (0x120 - 0x30)
	class UCreativeLowMemoryFallbackSettings : public UDeveloperSettings	
	{
	public:
		TWeakObjectPtr WarningToastIcon; // 0x30(0x20)
		FCreativeLowMemoryFallbackUserFacingText DefaultText; // 0x50(0x30)
		TMap PlaylistOverrideThresholds; // 0x80(0x50)
		TMap PlaylistOverrideText; // 0xD0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackSettings");
			return ret;
		}
	};


	// Class CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackWorldSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UCreativeLowMemoryFallbackWorldSubsystem : public UWorldSubsystem	
	{
	public:
		FCreativeLowMemoryFallbackFreeMemoryThresholds CurrentThresholds; // 0x30(0xC)
		unsigned char UnknownData01_7[0x2C]; // 0x3C(0x2C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackWorldSubsystem");
			return ret;
		}

		void OnPlaylistDataChanged(AFortGameStateAthena GameState, UFortPlaylist Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF414D97A40
	};

}
