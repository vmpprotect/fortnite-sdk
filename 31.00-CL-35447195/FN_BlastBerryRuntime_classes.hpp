#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BlastBerryRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class BlastBerryRuntime.FortControllerComponent_BlastBerry
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x110 - 0xA8)
	class UFortControllerComponent_BlastBerry : public UFortControllerComponent	
	{
	public:
		FMulticastInlineDelegate OnLastTeamMemberAliveChanged; // 0xA8(0x10)
		FMulticastInlineDelegate OnTeammateRespawned; // 0xB8(0x10)
		FMulticastInlineDelegate OnTeammateRevived; // 0xC8(0x10)
		FMulticastInlineDelegate OnEnemyTeamEliminated; // 0xD8(0x10)
		FMulticastInlineDelegate OnRespawnReward; // 0xE8(0x10)
		unsigned char UnknownData02_6[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY
		bool bLastTeamMemberAlive; // 0x108(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x109(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlastBerryRuntime.FortControllerComponent_BlastBerry");
			return ret;
		}

		void ServerRequestDeathFromDBNO(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF414CCE1B8
		void OnRep_LastTeamMemberAlive(); // Flags: Final|Native|Protected 0x7FF414CCE0D8
		void LocalHandlePreRespawn(FVector RespawnLocation, FRotator RespawnRotation, float RespawnCameraDist); // Flags: Native|Event|Protected|HasDefaults|BlueprintEvent 0x7FF414CCDFF8
		void HandlePlayerRespawnTimeUpdated(AFortPlayerStateAthena PlayerState, float ServerTimeForRespawn); // Flags: Final|Native|Protected 0x7FF414CCDF18
		void HandleDBNOChanged(AFortPawn Pawn, bool bIsDBNO); // Flags: Final|Native|Protected 0x7FF414CCDE38
		void HandleBotPawnRespawned(AAIController BotController, AFortPawn BotPawn); // Flags: Final|Native|Protected 0x7FF414CCDD58
		float GetTimeRemainingForNextTeamMateRespawn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CCDC78
		bool GetLastTeamMemberAlive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CCDB98
		void ClientNotifyWaitingForRespawn(); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414CCDAB8
		void ClientNotifyTeammateRevived(AFortPlayerStateAthena PlayerState); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414CCD9D8
		void ClientNotifyTeammateRespawned(AFortPlayerStateAthena PlayerState); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414CCD8F8
		void ClientNotifyRespawnReward(TEnumAsByte RewardType, float RewardTime); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414CCD818
		void ClientNotifyEnemyTeamEliminated(); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414CCD738
		void ClientHandlePreRespawn(FVector RespawnLocation, FRotator RespawnRotation, float RespawnCameraDist); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 0x7FF414CCD658
		void CleanupPossessedPawn(); // Flags: Final|Native|Protected 0x7FF414CCD578
	};


	// Class BlastBerryRuntime.FortAthenaMutator_BlastBerry
	// Inherited from AFortAthenaMutator_GameModeBase -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x30 (0x4B8 - 0x488)
	class AFortAthenaMutator_BlastBerry : public AFortAthenaMutator_GameModeBase	
	{
	public:
		FScalableFloat DBNOReviveTime; // 0x488(0x28)
		unsigned char UnknownData01_7[0x8]; // 0x4B0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlastBerryRuntime.FortAthenaMutator_BlastBerry");
			return ret;
		}
	};


	// Class BlastBerryRuntime.FortCheatManager_BlastBerry
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortCheatManager_BlastBerry : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlastBerryRuntime.FortCheatManager_BlastBerry");
			return ret;
		}

		void BlastBerrySetTeamLives(int32_t TeamLives); // Flags: Final|Exec|Native|Public 0x7FF414CCE378
		void BlastBerryForceRespawn(); // Flags: Final|Exec|Native|Public 0x7FF414CCE298
	};


	// Class BlastBerryRuntime.FortGameStateComponent_BlastBerryManager
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x400 (0x4A0 - 0xA0)
	class UFortGameStateComponent_BlastBerryManager : public UFortGameStateComponent	
	{
	public:
		FMulticastInlineDelegate OnPlayerPawnRespawned; // 0xA0(0x10)
		FMulticastInlineDelegate OnLocalTeamLivesChanged; // 0xB0(0x10)
		FMulticastInlineDelegate OnRespawnsEnabled; // 0xC0(0x10)
		FMulticastInlineDelegate OnRespawnsDisabled; // 0xD0(0x10)
		FMulticastInlineDelegate OnTimeUntilRespawnsDisabledUpdated; // 0xE0(0x10)
		FMulticastInlineDelegate OnConsumedRemainingTeamLives; // 0xF0(0x10)
		float ServerTimeForRespawnsDisabled; // 0x100(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		TArray RespawnPendingPlayerStates; // 0x108(0x10)
		EAthenaGamePhaseStep CurrentGamePhaseStep; // 0x118(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x119(0x3) UNKNOWN PROPERTY
		int32_t CurrentSafeZonePhaseIndex; // 0x11C(0x4)
		FScalableFloat MaxTeamLives; // 0x120(0x28)
		FScalableFloat RespawnHeight; // 0x148(0x28)
		FScalableFloat RespawnRange; // 0x170(0x28)
		FScalableFloat RespawnCameraDistance; // 0x198(0x28)
		FScalableFloat UseAdvancedSpawnBehavior; // 0x1C0(0x28)
		FScalableFloat AdvancedSpawnSafeZonePredictionTime; // 0x1E8(0x28)
		FScalableFloat AdvancedSpawnSafeZoneRadiusBuffer; // 0x210(0x28)
		FScalableFloat AdvancedSpawnGroupProximityDistance; // 0x238(0x28)
		FScalableFloat WaveRespawnEnabled; // 0x260(0x28)
		FScalableFloat WaveRespawnDelay; // 0x288(0x28)
		FScalableFloat IndividualRespawnDelay; // 0x2B0(0x28)
		FScalableFloat RespawnDownedTimeReward; // 0x2D8(0x28)
		FScalableFloat RespawnEliminationTimeReward; // 0x300(0x28)
		FScalableFloat RespawnTeamWipeTimeReward; // 0x328(0x28)
		TArray TeamLives; // 0x350(0x10)
		TArray PreviousTeamLives; // 0x360(0x10)
		unsigned char UnknownData06_6[0xA0]; // 0x370(0xA0) UNKNOWN PROPERTY
		TMap ActiveViewTargetValidationTimersMap; // 0x410(0x50)
		unsigned char UnknownData07_7[0x40]; // 0x460(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlastBerryRuntime.FortGameStateComponent_BlastBerryManager");
			return ret;
		}

		void ValidateRespawningViewTarget(TWeakObjectPtr WeakPS); // Flags: Final|Native|Protected 0x7FF414CCEFB8
		void UpdateTeamInfo(char TeamID, bool bSendNotifications); // Flags: Final|Native|Protected 0x7FF414CCEED8
		void OnSafeZoneUpdated(FFortSafeZonePhaseUpdatedEvent& Event); // Flags: Final|Native|Protected|HasOutParms 0x7FF414CCEDF8
		void OnRep_TeamLives(); // Flags: Final|Native|Protected 0x7FF414CCED18
		void OnRep_ServerTimeForRespawnsDisabled(); // Flags: Final|Native|Protected 0x7FF414CCEC38
		void OnGamePhaseStepChanged(FFortGamePhaseStepUpdatedEvent& Event); // Flags: Final|Native|Protected|HasOutParms 0x7FF414CCEB58
		bool IsWaveRespawnEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CCEA78
		void HandleWaveRespawnTimerFinished(); // Flags: Final|Native|Protected 0x7FF414CCE998
		void HandlePlayerRespawnTimeUpdated(AFortPlayerStateAthena PlayerState, float ServerTimeForRespawn); // Flags: Final|Native|Protected 0x7FF414CCE8B8
		void HandleBotPawnRespawned(AAIController BotController, AFortPawn BotPawn); // Flags: Final|Native|Protected 0x7FF414CCE7D8
		float GetTimeUntilRespawnDisabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CCE6F8
		int32_t GetTeamLivesRemaining(char TeamID); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CCE618
		float GetRespawnDelay(AFortPlayerStateAthena PS); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CCE538
		bool AreRespawnsActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CCE458
	};

}
