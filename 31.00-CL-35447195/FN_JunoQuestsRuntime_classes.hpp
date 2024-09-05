#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoQuestsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoQuestsRuntime.JunoQuestCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoQuestCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoQuestsRuntime.JunoQuestCheatManager");
			return ret;
		}

		void SetJunoFTUEQuestTrackingEnabled(bool bEnabled, bool bSaveSetting); // Flags: Final|Exec|Native|Public 0x7FF414E03DE0
	};


	// Class JunoQuestsRuntime.JunoControllerComponent_FTUEQuestTracker
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UJunoControllerComponent_FTUEQuestTracker : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTrackedFTUEQuestsEnabled; // 0xB8(0x10)
		TArray TrackedFTUEQuests; // 0xC8(0x10)
		TArray FTUEQuestBundles; // 0xD8(0x10)
		unsigned char UnknownData03_7[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoQuestsRuntime.JunoControllerComponent_FTUEQuestTracker");
			return ret;
		}

		void SetTrackingEnabled(bool bEnabled, bool bSaveSetting); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414E04160
		void OnQuestCompleted(TScriptInterface& QuestInstance); // Flags: Final|Native|Protected|HasOutParms 0x7FF414E04080
		void OnCurrentQuestsChanged(); // Flags: Final|Native|Protected 0x7FF414E03FA0
		bool IsTrackingEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E03EC0
	};

}
