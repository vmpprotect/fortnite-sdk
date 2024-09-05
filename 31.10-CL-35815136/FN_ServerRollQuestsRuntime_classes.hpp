#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ServerRollQuestsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ServerRollQuestsRuntime.FortGameStateComponent_ServerRollQuests
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class UFortGameStateComponent_ServerRollQuests : public UGameStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		FDataRegistryType DataRegistryType_ServerRollQuests; // 0xB8(0x4)
		unsigned char UnknownData01_7[0x64]; // 0xBC(0x64) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ServerRollQuestsRuntime.FortGameStateComponent_ServerRollQuests");
			return ret;
		}

		void PopulateMap(UDataRegistry* ServerRollQuestsRegistry, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750F23CE0(relative to base address)
		void HandlePlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& GameplayTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74E74DDA8(relative to base address)
	};

}
