#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DynamicRollTablesRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DynamicRollTablesRuntime.FortControllerComponent_DynamicRollPlayerComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xF8 (0x1A0 - 0xA8)
	class UFortControllerComponent_DynamicRollPlayerComponent : public UFortControllerComponent	
	{
	public:
		UClass* AssociatedManagerClass; // 0xA8(0x8)
		FScalableFloat Enabled; // 0xB0(0x28)
		UFortGamestateComponent_DynamicRollTableManager* TableManager; // 0xD8(0x8)
		unsigned char UnknownData00_6[0x64]; // 0xE0(0x64) UNKNOWN PROPERTY
		FRandomStream SeededRNG; // 0x144(0x8)
		unsigned char UnknownData01_7[0x54]; // 0x14C(0x54) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicRollTablesRuntime.FortControllerComponent_DynamicRollPlayerComponent");
			return ret;
		}

		TArray AuthorityRollChoices(int32_t NumChoices, TArray<UFortItemDefinition*>& IgnoreItems); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75068BE20(relative to base address)
	};


	// Class DynamicRollTablesRuntime.FortGamestateComponent_DynamicRollTableManager
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x238 (0x2D8 - 0xA0)
	class UFortGamestateComponent_DynamicRollTableManager : public UFortGameStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0xA0(0x30) UNKNOWN PROPERTY
		FDataRegistryType DataRegistryType_BaseWeights; // 0xD0(0x4)
		FDataRegistryType DataRegistryType_WeightModifiers; // 0xD4(0x4)
		FScalableFloat Enabled; // 0xD8(0x28)
		unsigned char UnknownData01_7[0x1D8]; // 0x100(0x1D8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicRollTablesRuntime.FortGamestateComponent_DynamicRollTableManager");
			return ret;
		}

		void HandlePlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75068BF38(relative to base address)
	};

}
