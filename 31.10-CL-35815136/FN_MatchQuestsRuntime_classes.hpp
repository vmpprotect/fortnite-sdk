#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MatchQuestsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MatchQuestsRuntime.FortGameStateComponent_SquadMatchQuests
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB8 (0x158 - 0xA0)
	class UFortGameStateComponent_SquadMatchQuests : public UFortGameStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		FDataRegistryType DataRegistryType_ActiveMatchQuestBuckets; // 0xB8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		TArray<FGameplayTag> ActiveBuckets; // 0xC0(0x10)
		TMap<char, FSquadMatchQuests> SquadQuestsMap; // 0xD0(0x50)
		unsigned char UnknownData02_7[0x38]; // 0x120(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchQuestsRuntime.FortGameStateComponent_SquadMatchQuests");
			return ret;
		}
	};


	// Class MatchQuestsRuntime.FortPlayerStateComponent_MatchQuests
	// Inherited from UFortPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x90 (0x130 - 0xA0)
	class UFortPlayerStateComponent_MatchQuests : public UFortPlayerStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0xA0(0x30) UNKNOWN PROPERTY
		TArray<TScriptInterface> QuestOffering; // 0xD0(0x10)
		TArray<FSquadMemberSelection> SquadSelections; // 0xE0(0x10)
		unsigned char UnknownData01_7[0x40]; // 0xF0(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchQuestsRuntime.FortPlayerStateComponent_MatchQuests");
			return ret;
		}

		void TryToGrantSelectedQuest(FFortGamePhaseUpdatedEvent& FortGamePhaseUpdatedEvent); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74E74D514(relative to base address)
		void Server_SetSelectedQuest(TScriptInterface<Class> Quest); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF750F25350(relative to base address)
		void OnRep_SquadSelections(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF750F2533C(relative to base address)
		void OnRep_QuestOffering(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF750F25328(relative to base address)
		void OnLandedFromBus(AFortPlayerControllerZone* PlayerController); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C088608(relative to base address)
	};


	// Class MatchQuestsRuntime.FortQuestDefinitionComponent_MatchQuests
	// Inherited from UFortQuestDefinitionComponent -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UFortQuestDefinitionComponent_MatchQuests : public UFortQuestDefinitionComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchQuestsRuntime.FortQuestDefinitionComponent_MatchQuests");
			return ret;
		}
	};


	// Class MatchQuestsRuntime.FortQuestItemComponent_MatchQuests
	// Inherited from UFortQuestItemComponent -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortQuestItemComponent_MatchQuests : public UFortQuestItemComponent	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchQuestsRuntime.FortQuestItemComponent_MatchQuests");
			return ret;
		}
	};


	// Class MatchQuestsRuntime.MatchQuestsCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMatchQuestsCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchQuestsRuntime.MatchQuestsCheatManager");
			return ret;
		}

		void MatchQuests_RollNewOffer(); // Flags: Final|Exec|Native|Private|Const, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void MatchQuests_LogSquadSelections(); // Flags: Final|Exec|Native|Private|Const, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void MatchQuests_LogRNGSeeds(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void MatchQuests_LogReportSimulatedRolls(int32_t RollsToSimulate); // Flags: Final|Exec|Native|Private|Const, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void MatchQuests_LogAvailableQuestsPool(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void MatchQuests_ForceQuestInOffer(FString QuestName); // Flags: Final|Exec|Native|Private|Const, Memory Exec: 0x7FF74C7B3138(relative to base address)
	};

}
