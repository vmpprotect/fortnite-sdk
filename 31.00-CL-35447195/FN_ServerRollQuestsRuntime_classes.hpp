#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ServerRollQuestsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ServerRollQuestsRuntime.FortGameStateComponent_ServerRollQuests
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class UFortGameStateComponent_ServerRollQuests : public UGameStateComponent	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		FDataRegistryType DataRegistryType_ServerRollQuests; // 0xB8(0x4)
		unsigned char UnknownData03_7[0x64]; // 0xBC(0x64) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ServerRollQuestsRuntime.FortGameStateComponent_ServerRollQuests");
			return ret;
		}

		void PopulateMap(UDataRegistry ServerRollQuestsRegistry, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF414BFB478
		void HandlePlaylistDataReady(AFortGameStateAthena GameState, UFortPlaylist Playlist, FGameplayTagContainer& GameplayTags); // Flags: Final|Native|Private|HasOutParms 0x7FF414BFB398
	};

}
