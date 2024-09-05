#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JamFabricRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JamFabricRuntime.JamFabricBridgePlayspaceComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UJamFabricBridgePlayspaceComponent : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		UClass* DeviceCableManagerClass; // 0xA8(0x8)
		UClass* FabricPatchWrapperClass; // 0xB0(0x8)
		FGameplayTag FabricMusicEventTag; // 0xB8(0x4)
		FGameplayTag FabricControlsJamTag; // 0xBC(0x4)
		UJamFabricPatchWrapper* FabricPatchWrapperInstance; // 0xC0(0x8)
		EJamFabricSyncType SyncType; // 0xC8(0x1)
		unsigned char UnknownData01_7[0x2F]; // 0xC9(0x2F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent");
			return ret;
		}

		void OnRep_SyncType(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751924F70(relative to base address)
		void OnPlayspaceVolumeReplicated(APlayspace* Playspace); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751924EF0(relative to base address)
		void OnFabricTempoChanged(int32_t CurrentTempo); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751924E70(relative to base address)
		void OnFabricPlayStateChanged(EFabricMetasoundPlayState CurrentState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751924DEC(relative to base address)
		void OnFabricMusicEventPriorityChanged(EFabricMetasoundMusicEventPriority CurrentMusicEventPriority); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751924D70(relative to base address)
		void OnFabricMusicEventGroupChanged(FName& CurrentMusicEventGroup); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751924CF4(relative to base address)
		void OnFabricModeChanged(EMusicKeyMode CurrentMode); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751924C74(relative to base address)
		void OnFabricKeyChanged(EMusicKey CurrentKey); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751924BF4(relative to base address)
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
