#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VKEditGameplay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VKEditGameplay.VKEditGameplayAssetsToCook
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UVKEditGameplayAssetsToCook : public UPrimaryDataAsset	
	{
	public:
		TArray Assets; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKEditGameplay.VKEditGameplayAssetsToCook");
			return ret;
		}
	};


	// Class VKEditGameplay.PlayspaceComponent_PlaysetRootSpawner
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0x140 - 0xF8)
	class UPlayspaceComponent_PlaysetRootSpawner : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0xF8(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKEditGameplay.PlayspaceComponent_PlaysetRootSpawner");
			return ret;
		}
	};


	// Class VKEditGameplay.PlayspaceComponent_VKEditCreativeToolsPermission
	// Inherited from UPlayspaceComponent_CreativeToolsPermission -> UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UPlayspaceComponent_VKEditCreativeToolsPermission : public UPlayspaceComponent_CreativeToolsPermission	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKEditGameplay.PlayspaceComponent_VKEditCreativeToolsPermission");
			return ret;
		}
	};


	// Class VKEditGameplay.VKEditPlayspace
	// Inherited from AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0x130 (0x7D0 - 0x6A0)
	class AVKEditPlayspace : public AFortPlayspace	
	{
	public:
		unsigned char UnknownData01_3[0x50]; // 0x6A0(0x50) UNKNOWN PROPERTY
		TWeakObjectPtr EditorOnlyMinigameSettingsMachineClassToSpawn; // 0x6F0(0x20)
		TWeakObjectPtr EditorOnlyWorldManagerClassToSpawn; // 0x710(0x20)
		UFortLevelStreamComponent LevelStreamComponent; // 0x730(0x8)
		UFortProjectEditComponent ProjectEditComponent; // 0x738(0x8)
		UPlayspaceComponent_PlayStopPauseManager PlayStopPauseManager; // 0x740(0x8)
		UPlayspaceComponent_EditConnectionManager EditConnectionManager; // 0x748(0x8)
		UPlayspaceComponent_LiveEdit LiveEditComponent; // 0x750(0x8)
		UPlayspaceComponent_VKEditCreativeToolsPermission CreativeToolsPermission; // 0x758(0x8)
		UPlayspaceComponent_CreativeLoadingStateProxy CreativeLoadingStateProxy; // 0x760(0x8)
		UPlayspaceComponent_SpatialGameplay SpatialGameplayComponent; // 0x768(0x8)
		UFortVolumeObjectTrackingComponent ObjectTrackingComponent; // 0x770(0x8)
		UPlayspaceComponent_DeviceTracking DeviceTrackerComponent; // 0x778(0x8)
		UPlayspaceComponent_CreativeInventory CreativeInventoryComponent; // 0x780(0x8)
		UPlayspaceComponent_ActorMemoryTracker ActorMemoryTrackerComponent; // 0x788(0x8)
		UPlayspaceComponent_GlobalMemoryTracker GlobalMemoryTrackerComponent; // 0x790(0x8)
		UFortCreativeDynamicXpComponent FortCreativeDynamicXp; // 0x798(0x8)
		UPlayspaceComponent_CreativeModifyEmotes CreativeModifyEmotesComponent; // 0x7A0(0x8)
		UFortPlayspaceComponent_WorldTimeOfDayOverride WorldTimeOfDayOverrideComponent; // 0x7A8(0x8)
		UFortPlayspaceComponent_NaniteSettingsOverride NaniteSettingsOverrideComponent; // 0x7B0(0x8)
		UFortPlayspaceComponent_TeamManagement TeamManagementComponent; // 0x7B8(0x8)
		UPlayspaceComponent_PlaysetRootSpawner PlaysetRootSpawnerComponent; // 0x7C0(0x8)
		UPlayspaceComponent_PlayerPawnOverrides PlayerPawnOverridesComponent; // 0x7C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKEditGameplay.VKEditPlayspace");
			return ret;
		}

		void OnClientActivatedContent(FUniqueNetIdRepl& ClientNetId); // Flags: Final|Native|Private|HasOutParms|Const 0x7FF414DE7C20
	};


	// Class VKEditGameplay.PlayspaceComponent_EditConnectionManager
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xE8 (0x1E0 - 0xF8)
	class UPlayspaceComponent_EditConnectionManager : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData02_3[0xC0]; // 0xF8(0xC0) UNKNOWN PROPERTY
		int32_t EditConnections; // 0x1B8(0x4)
		EVkEditStatus VkEditStatus; // 0x1BC(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1BD(0x3) UNKNOWN PROPERTY
		FGameplayTagContainer UITagsToHide; // 0x1C0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager");
			return ret;
		}

		void OnRep_VkEditStatus(); // Flags: Final|Native|Protected|Const 0x7FF414DE7DE0
		void OnRep_EditConnections(); // Flags: Final|Native|Protected|Const 0x7FF414DE7D00
	};

}
