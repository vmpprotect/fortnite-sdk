#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DynamicRollTablesRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DynamicRollTablesRuntime.FortControllerComponent_DynamicRollPlayerComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xF8 (0x1A0 - 0xA8)
	class UFortControllerComponent_DynamicRollPlayerComponent : public UFortControllerComponent	
	{
	public:
		UClass AssociatedManagerClass; // 0xA8(0x8)
		FScalableFloat Enabled; // 0xB0(0x28)
		UFortGamestateComponent_DynamicRollTableManager TableManager; // 0xD8(0x8)
		unsigned char UnknownData02_6[0x64]; // 0xE0(0x64) UNKNOWN PROPERTY
		FRandomStream SeededRNG; // 0x144(0x8)
		unsigned char UnknownData03_7[0x54]; // 0x14C(0x54) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicRollTablesRuntime.FortControllerComponent_DynamicRollPlayerComponent");
			return ret;
		}

		TArray AuthorityRollChoices(int32_t NumChoices, TArray& IgnoreItems); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BD5A78
	};


	// Class DynamicRollTablesRuntime.FortGamestateComponent_DynamicRollTableManager
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x238 (0x2D8 - 0xA0)
	class UFortGamestateComponent_DynamicRollTableManager : public UFortGameStateComponent	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0xA0(0x30) UNKNOWN PROPERTY
		FDataRegistryType DataRegistryType_BaseWeights; // 0xD0(0x4)
		FDataRegistryType DataRegistryType_WeightModifiers; // 0xD4(0x4)
		FScalableFloat Enabled; // 0xD8(0x28)
		unsigned char UnknownData03_7[0x1D8]; // 0x100(0x1D8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicRollTablesRuntime.FortGamestateComponent_DynamicRollTableManager");
			return ret;
		}

		void HandlePlaylistDataReady(AFortGameStateAthena GameState, UFortPlaylist Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF414BD5B58
	};

}
