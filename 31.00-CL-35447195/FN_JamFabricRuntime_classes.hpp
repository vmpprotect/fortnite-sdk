#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JamFabricRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JamFabricRuntime.JamFabricBridgePlayspaceComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UJamFabricBridgePlayspaceComponent : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		UClass DeviceCableManagerClass; // 0xA8(0x8)
		UClass FabricPatchWrapperClass; // 0xB0(0x8)
		FGameplayTag FabricMusicEventTag; // 0xB8(0x4)
		FGameplayTag FabricControlsJamTag; // 0xBC(0x4)
		UJamFabricPatchWrapper FabricPatchWrapperInstance; // 0xC0(0x8)
		EJamFabricSyncType SyncType; // 0xC8(0x1)
		unsigned char UnknownData03_7[0x2F]; // 0xC9(0x2F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent");
			return ret;
		}

		void OnRep_SyncType(); // Flags: Final|Native|Protected 0x7FF414DDAB00
		void OnPlayspaceVolumeReplicated(APlayspace Playspace); // Flags: Final|Native|Protected 0x7FF414DDAA20
		void OnFabricTempoChanged(int32_t CurrentTempo); // Flags: Final|Native|Protected 0x7FF414DDA940
		void OnFabricPlayStateChanged(EFabricMetasoundPlayState CurrentState); // Flags: Final|Native|Protected 0x7FF414DDA860
		void OnFabricMusicEventPriorityChanged(EFabricMetasoundMusicEventPriority CurrentMusicEventPriority); // Flags: Final|Native|Protected 0x7FF414DDA780
		void OnFabricMusicEventGroupChanged(FName& CurrentMusicEventGroup); // Flags: Final|Native|Protected|HasOutParms 0x7FF414DDA6A0
		void OnFabricModeChanged(EMusicKeyMode CurrentMode); // Flags: Final|Native|Protected 0x7FF414DDA5C0
		void OnFabricKeyChanged(EMusicKey CurrentKey); // Flags: Final|Native|Protected 0x7FF414DDA4E0
	};


	// Class JamFabricRuntime.JamFabricPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x0 (0x788 - 0x788)
	class UJamFabricPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JamFabricRuntime.JamFabricPatchWrapper");
			return ret;
		}
	};

}
