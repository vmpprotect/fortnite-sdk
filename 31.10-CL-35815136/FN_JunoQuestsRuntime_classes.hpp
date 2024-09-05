#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoQuestsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		void SetJunoFTUEQuestTrackingEnabled(bool bEnabled, bool bSaveSetting); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74DA0C510(relative to base address)
	};


	// Class JunoQuestsRuntime.JunoControllerComponent_FTUEQuestTracker
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UJunoControllerComponent_FTUEQuestTracker : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTrackedFTUEQuestsEnabled; // 0xB8(0x10)
		TArray<TWeakObjectPtr> TrackedFTUEQuests; // 0xC8(0x10)
		TArray<FFTUEQuestBundleWithRequiredTag> FTUEQuestBundles; // 0xD8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoQuestsRuntime.JunoControllerComponent_FTUEQuestTracker");
			return ret;
		}

		void SetTrackingEnabled(bool bEnabled, bool bSaveSetting); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AF4D60(relative to base address)
		void OnQuestCompleted(TScriptInterface<Class>& QuestInstance); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751AF4CD0(relative to base address)
		void OnCurrentQuestsChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751AF4CBC(relative to base address)
		bool IsTrackingEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AF4C98(relative to base address)
	};

}
