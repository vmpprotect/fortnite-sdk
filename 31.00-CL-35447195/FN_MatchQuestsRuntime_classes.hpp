#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MatchQuestsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MatchQuestsRuntime.FortGameStateComponent_SquadMatchQuests
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB8 (0x158 - 0xA0)
	class UFortGameStateComponent_SquadMatchQuests : public UFortGameStateComponent	
	{
	public:
		unsigned char UnknownData03_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		FDataRegistryType DataRegistryType_ActiveMatchQuestBuckets; // 0xB8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		TArray ActiveBuckets; // 0xC0(0x10)
		TMap SquadQuestsMap; // 0xD0(0x50)
		unsigned char UnknownData05_7[0x38]; // 0x120(0x38) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x30]; // 0xA0(0x30) UNKNOWN PROPERTY
		TArray QuestOffering; // 0xD0(0x10)
		TArray SquadSelections; // 0xE0(0x10)
		unsigned char UnknownData03_7[0x40]; // 0xF0(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchQuestsRuntime.FortPlayerStateComponent_MatchQuests");
			return ret;
		}

		void TryToGrantSelectedQuest(FFortGamePhaseUpdatedEvent& FortGamePhaseUpdatedEvent); // Flags: Final|Native|Private|HasOutParms 0x7FF414BFB8D8
		void Server_SetSelectedQuest(TScriptInterface Quest); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414BFB7F8
		void OnRep_SquadSelections(); // Flags: Final|Native|Private|Const 0x7FF414BFB718
		void OnRep_QuestOffering(); // Flags: Final|Native|Private|Const 0x7FF414BFB638
		void OnLandedFromBus(AFortPlayerControllerZone PlayerController); // Flags: Final|Native|Private 0x7FF414BFB558
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
		unsigned char UnknownData01_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

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

		void MatchQuests_RollNewOffer(); // Flags: Final|Exec|Native|Private|Const 0x7FF414BFBE18
		void MatchQuests_LogSquadSelections(); // Flags: Final|Exec|Native|Private|Const 0x7FF414BFBD38
		void MatchQuests_LogRNGSeeds(); // Flags: Final|Exec|Native|Private 0x7FF414BFBC58
		void MatchQuests_LogReportSimulatedRolls(int32_t RollsToSimulate); // Flags: Final|Exec|Native|Private|Const 0x7FF414BFBB78
		void MatchQuests_LogAvailableQuestsPool(); // Flags: Final|Exec|Native|Private 0x7FF414BFBA98
		void MatchQuests_ForceQuestInOffer(FString QuestName); // Flags: Final|Exec|Native|Private|Const 0x7FF414BFB9B8
	};

}
