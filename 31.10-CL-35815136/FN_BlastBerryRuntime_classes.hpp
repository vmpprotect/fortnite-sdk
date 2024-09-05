#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BlastBerryRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_6[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY
		bool bLastTeamMemberAlive; // 0x108(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x109(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlastBerryRuntime.FortControllerComponent_BlastBerry");
			return ret;
		}

		void ServerRequestDeathFromDBNO(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF75124BEF4(relative to base address)
		void OnRep_LastTeamMemberAlive(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75124BE28(relative to base address)
		void LocalHandlePreRespawn(FVector RespawnLocation, FRotator RespawnRotation, float RespawnCameraDist); // Flags: Native|Event|Protected|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF75124BAD8(relative to base address)
		void HandleViewTargetChanged(AFortPlayerController* InController, AActor* OldViewTarget, AActor* NewViewTarget); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75124B9A8(relative to base address)
		void HandlePlayerRespawnTimeUpdated(AFortPlayerStateAthena* PlayerState, float ServerTimeForRespawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75124B790(relative to base address)
		void HandleDBNOChanged(AFortPawn* Pawn, bool bIsDBNO); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75124B634(relative to base address)
		void HandleBotPawnRespawned(AAIController* BotController, AFortPawn* BotPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75124B4AC(relative to base address)
		float GetTimeRemainingForNextTeamMateRespawn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75124B3C4(relative to base address)
		bool GetLastTeamMemberAlive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C21AF8C(relative to base address)
		void ClientNotifyWaitingForRespawn(); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74E217D18(relative to base address)
		void ClientNotifyTeammateRevived(AFortPlayerStateAthena* PlayerState); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74FCB13CC(relative to base address)
		void ClientNotifyTeammateRespawned(AFortPlayerStateAthena* PlayerState); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF7506AF3E8(relative to base address)
		void ClientNotifyRespawnReward(TEnumAsByte<EBlastBerryRespawnRewardType> RewardType, float RewardTime); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF75124B1E4(relative to base address)
		void ClientNotifyEnemyTeamEliminated(); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74E4850C4(relative to base address)
		void ClientHandlePreRespawn(FVector RespawnLocation, FRotator RespawnRotation, float RespawnCameraDist); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient, Memory Exec: 0x7FF75124AF20(relative to base address)
		void CleanupPossessedPawn(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75124AF0C(relative to base address)
	};


	// Class BlastBerryRuntime.FortAthenaMutator_BlastBerry
	// Inherited from AFortAthenaMutator_GameModeBase -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x30 (0x4B8 - 0x488)
	class AFortAthenaMutator_BlastBerry : public AFortAthenaMutator_GameModeBase	
	{
	public:
		FScalableFloat DBNOReviveTime; // 0x488(0x28)
		unsigned char UnknownData00_7[0x8]; // 0x4B0(0x8) UNKNOWN PROPERTY

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

		void BlastBerrySetTeamLives(int32_t TeamLives); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void BlastBerryForceRespawn(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class BlastBerryRuntime.FortGameStateComponent_BlastBerryManager
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x558 (0x5F8 - 0xA0)
	class UFortGameStateComponent_BlastBerryManager : public UFortGameStateComponent	
	{
	public:
		FMulticastInlineDelegate OnPlayerPawnRespawned; // 0xA0(0x10)
		FMulticastInlineDelegate OnLocalTeamLivesChanged; // 0xB0(0x10)
		FMulticastInlineDelegate OnLocalTimeUntilTeamLivesRechargeChanged; // 0xC0(0x10)
		FMulticastInlineDelegate OnRespawnsEnabled; // 0xD0(0x10)
		FMulticastInlineDelegate OnRespawnsDisabled; // 0xE0(0x10)
		FMulticastInlineDelegate OnTimeUntilRespawnsDisabledUpdated; // 0xF0(0x10)
		FMulticastInlineDelegate OnConsumedRemainingTeamLives; // 0x100(0x10)
		float ServerTimeForRespawnsDisabled; // 0x110(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x114(0x4) UNKNOWN PROPERTY
		TArray<AFortPlayerStateAthena*> RespawnPendingPlayerStates; // 0x118(0x10)
		EAthenaGamePhaseStep CurrentGamePhaseStep; // 0x128(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x129(0x3) UNKNOWN PROPERTY
		int32_t CurrentSafeZonePhaseIndex; // 0x12C(0x4)
		FScalableFloat MaxTeamLives; // 0x130(0x28)
		FScalableFloat TeamLivesRechargeDuration; // 0x158(0x28)
		FScalableFloat RespawnHeight; // 0x180(0x28)
		FScalableFloat RespawnRange; // 0x1A8(0x28)
		FScalableFloat RespawnCameraDistance; // 0x1D0(0x28)
		FScalableFloat UseAdvancedSpawnBehavior; // 0x1F8(0x28)
		FScalableFloat UseSoloSpawnEQS; // 0x220(0x28)
		FScalableFloat SoloDisableEQSRadius; // 0x248(0x28)
		FScalableFloat SoloSpawnMaxDistanceFromDeathLocation; // 0x270(0x28)
		FScalableFloat AdvancedSpawnSafeZonePredictionTime; // 0x298(0x28)
		FScalableFloat AdvancedSpawnSafeZoneRadiusBuffer; // 0x2C0(0x28)
		FScalableFloat AdvancedSpawnGroupProximityDistance; // 0x2E8(0x28)
		FScalableFloat WaveRespawnEnabled; // 0x310(0x28)
		FScalableFloat WaveRespawnDelay; // 0x338(0x28)
		FScalableFloat IndividualRespawnDelay; // 0x360(0x28)
		FScalableFloat RespawnDownedTimeReward; // 0x388(0x28)
		FScalableFloat RespawnEliminationTimeReward; // 0x3B0(0x28)
		FScalableFloat RespawnTeamWipeTimeReward; // 0x3D8(0x28)
		UEnvQuery* SoloRespawnLocationQueryTemplate; // 0x400(0x8)
		TArray<FBlastBerryTeamLives> TeamLives; // 0x408(0x10)
		TArray<FBlastBerryTeamLives> PreviousTeamLives; // 0x418(0x10)
		unsigned char UnknownData02_6[0xF0]; // 0x428(0xF0) UNKNOWN PROPERTY
		TMap<AFortPlayerStateAthena*, FTimerHandle> ActiveViewTargetValidationTimersMap; // 0x518(0x50)
		TMap<AFortPlayerStateAthena*, FBlastBerrySoloRespawnData> SoloRespawnDataMap; // 0x568(0x50)
		unsigned char UnknownData03_7[0x40]; // 0x5B8(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlastBerryRuntime.FortGameStateComponent_BlastBerryManager");
			return ret;
		}

		void ValidateRespawningViewTarget(TWeakObjectPtr<AFortPlayerStateAthena*> WeakPS); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75124C004(relative to base address)
		void UpdateTeamInfo(char TeamID, bool bSendNotifications); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75124BF40(relative to base address)
		void OnSafeZoneUpdated(FFortSafeZonePhaseUpdatedEvent& Event); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75124BE64(relative to base address)
		void OnRep_TeamLives(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75124BE50(relative to base address)
		void OnRep_ServerTimeForRespawnsDisabled(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75124BE3C(relative to base address)
		void OnGamePhaseStepChanged(FFortGamePhaseStepUpdatedEvent& Event); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75124BD9C(relative to base address)
		bool IsWaveRespawnEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75124BAB4(relative to base address)
		void HandleWaveRespawnTimerFinished(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75124BAA0(relative to base address)
		void HandleTeamLifeRecharged(char TeamID); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75124B928(relative to base address)
		void HandlePlayerRespawnTimeUpdated(AFortPlayerStateAthena* PlayerState, float ServerTimeForRespawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75124B864(relative to base address)
		void HandleBotPawnRespawned(AAIController* BotController, AFortPawn* BotPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75124B570(relative to base address)
		float GetTimeUntilTeamLivesRecharge(char TeamID); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75124B414(relative to base address)
		float GetTimeUntilRespawnDisabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75124B3EC(relative to base address)
		int32_t GetTeamLivesRemaining(char TeamID); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75124B338(relative to base address)
		float GetRespawnDelay(AFortPlayerStateAthena* PS); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75124B2AC(relative to base address)
		bool AreRespawnsActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75124AEE8(relative to base address)
	};


	// Class BlastBerryRuntime.FortQueryContext_BlastBerryAllEnemies
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_BlastBerryAllEnemies : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlastBerryRuntime.FortQueryContext_BlastBerryAllEnemies");
			return ret;
		}
	};


	// Class BlastBerryRuntime.FortQueryContext_BlastBerryDeathLocation
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_BlastBerryDeathLocation : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlastBerryRuntime.FortQueryContext_BlastBerryDeathLocation");
			return ret;
		}
	};


	// Class BlastBerryRuntime.FortQueryContext_BlastBerryDefaultSpawnLocation
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_BlastBerryDefaultSpawnLocation : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlastBerryRuntime.FortQueryContext_BlastBerryDefaultSpawnLocation");
			return ret;
		}
	};

}
