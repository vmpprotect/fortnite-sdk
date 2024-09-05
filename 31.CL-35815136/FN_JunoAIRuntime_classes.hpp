#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoAIRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoAIRuntime.JunoAIBotController
	// Inherited from AFortAthenaAIBotController -> AAIController -> AController -> AActor -> UObject
	// Size: 0x1F8 (0x18E0 - 0x16E8)
	class AJunoAIBotController : public AFortAthenaAIBotController	
	{
	public:
		UJunoAIInventoryComponent* JunoAIInventoryComponent; // 0x16E8(0x8)
		TArray<FItemAndCount> DefaultItemsToAdd; // 0x16F0(0x10)
		unsigned char UnknownData00_6[0x90]; // 0x1700(0x90) UNKNOWN PROPERTY
		FScalableFloat EnableDurabilityOnInventory; // 0x1790(0x28)
		FScalableFloat UseRoleCheckForDurability; // 0x17B8(0x28)
		FGameplayTagQuery RequiredRoleForDurability; // 0x17E0(0x48)
		bool bUseFocusedActorEyeLocationForFocalPoint; // 0x1828(0x1)
		bool bUseValidItemsPerType; // 0x1829(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x182A(0x6) UNKNOWN PROPERTY
		FScalableFloat EffectivenessMultiplierForWeaponSelectionOnPickedOrAddedItem; // 0x1830(0x28)
		TMap<FGameplayTag, FValidItemSlotConfiguration> ValidItemsTablePerType; // 0x1858(0x50)
		UFortItemDefinition* AutomaticallyEquippedWeaponOnDurabilityBreak; // 0x18A8(0x8)
		FScalableFloat DurabilityMultiplier; // 0x18B0(0x28)
		FGameplayTag TagToApplyWhenAddingFallbackItemForDurabilityBreak; // 0x18D8(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x18DC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAIBotController");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoAIBotEvaluator_FallbackBehavior
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x80 (0x220 - 0x1A0)
	class UJunoAIBotEvaluator_FallbackBehavior : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x1A0(0x18) UNKNOWN PROPERTY
		FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x1B8(0x48)
		UClass* NavigationQueryFilterClass; // 0x200(0x8)
		bool bFallbackToPointWithNoCustomNavigationQueryFilter; // 0x208(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x209(0x3) UNKNOWN PROPERTY
		FName BestTargetActorName; // 0x20C(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x210(0x4) UNKNOWN PROPERTY
		FName EnableKeyName; // 0x214(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x218(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAIBotEvaluator_FallbackBehavior");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoAIBotEvaluator_FTUENPC
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0xC0 (0x168 - 0xA8)
	class UJunoAIBotEvaluator_FTUENPC : public UFortAthenaAIBotEvaluator	
	{
	public:
		unsigned char UnknownData00_3[0x24]; // 0xA8(0x24) UNKNOWN PROPERTY
		FName TeleportDestinationKeyName; // 0xCC(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xD0(0x4) UNKNOWN PROPERTY
		FName ShouldTeleportKeyName; // 0xD4(0x4)
		unsigned char UnknownData02_6[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY
		FJunoAIFTUERuntimeConfiguration FTUERuntimeConfiguration; // 0xE0(0x88)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAIBotEvaluator_FTUENPC");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoAIBotEvaluator_HardRemovalStart
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x88 (0x228 - 0x1A0)
	class UJunoAIBotEvaluator_HardRemovalStart : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x1A0(0x18) UNKNOWN PROPERTY
		FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x1B8(0x48)
		FScalableFloat RequestHardRemovalOnSuccess; // 0x200(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAIBotEvaluator_HardRemovalStart");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoAIBotEvaluator_UnderThunderBehavior
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x110 (0x2B0 - 0x1A0)
	class UJunoAIBotEvaluator_UnderThunderBehavior : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x1A0(0x30) UNKNOWN PROPERTY
		FScalableFloat IsEnabled; // 0x1D0(0x28)
		FScalableFloat UseTagForShelterCheck; // 0x1F8(0x28)
		FGameplayTag TagToCheckForSheltered; // 0x220(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x224(0x4) UNKNOWN PROPERTY
		TArray<TEnumAsByte> ShelterQueryTypes; // 0x228(0x10)
		FScalableFloat MaxShelterDistance; // 0x238(0x28)
		FScalableFloat MinDistanceFromShelterLocationToKeepItValid; // 0x260(0x28)
		FGameplayTagContainer ShelterCollidingActorRequiresAnyTag; // 0x288(0x20)
		FGameplayTag TagToApplyForShelteredNPC; // 0x2A8(0x4)
		FGameplayTag TagToApplyForNonShelteredNPC; // 0x2AC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAIBotEvaluator_UnderThunderBehavior");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoAIBotEvaluator_UnstuckFailsafe
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x110 (0x1B8 - 0xA8)
	class UJunoAIBotEvaluator_UnstuckFailsafe : public UFortAthenaAIBotEvaluator	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY
		FName TeleportDestinationKeyName; // 0xC0(0x4)
		FName ShouldTeleportKeyName; // 0xC4(0x4)
		unsigned char UnknownData01_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		FJunoAIUnstuckFailsafeConfiguration Configuration; // 0xD0(0xE8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAIBotEvaluator_UnstuckFailsafe");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoAIEvaluator_RequestedMoodReaction
	// Inherited from UFortAthenaAIEvaluator -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoAIEvaluator_RequestedMoodReaction : public UFortAthenaAIEvaluator	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAIEvaluator_RequestedMoodReaction");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoAIFriendshipPawnComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x358 (0x400 - 0xA8)
	class UJunoAIFriendshipPawnComponent : public UFortPawnComponent	
	{
	public:
		bool bAutoEnableFriendshipChanges; // 0xA8(0x1)
		bool bAutoDisableFriendshipChangesWhenConverted; // 0xA9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY
		UDataTable* VerbsDatatable; // 0xB0(0x8)
		FScalableFloat MaxDistanceFromPlayerToReact; // 0xB8(0x28)
		FScalableFloat MinimumFriendship; // 0xE0(0x28)
		FScalableFloat MaximumFriendship; // 0x108(0x28)
		TMap<FGameplayTag, FGameplayTag> MoodReactionOnFriendshipStateIncrease; // 0x130(0x50)
		TMap<FGameplayTag, FGameplayTag> MoodReactionOnFriendshipStateDecrease; // 0x180(0x50)
		unsigned char UnknownData01_6[0x1B8]; // 0x1D0(0x1B8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnFriendshipValueRequestedChangeDelegate; // 0x388(0x10)
		unsigned char UnknownData02_6[0x18]; // 0x398(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnFriendshipValueChangedDelegate; // 0x3B0(0x10)
		unsigned char UnknownData03_6[0x18]; // 0x3C0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnFriendshipStateChangedDelegate; // 0x3D8(0x10)
		unsigned char UnknownData04_6[0x4]; // 0x3E8(0x4) UNKNOWN PROPERTY
		float FriendshipValue; // 0x3EC(0x4)
		FGameplayTag FriendshipState; // 0x3F0(0x4)
		unsigned char UnknownData05_7[0xC]; // 0x3F4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAIFriendshipPawnComponent");
			return ret;
		}

		void HandleUnconverted(AFortPawn* UnconvertedPawn, EUnconvertReason UnconvertReason); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C4A434(relative to base address)
		void HandleConverted(AFortPawn* InstigatorPawn, AFortPawn* ConvertedPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C4A370(relative to base address)
		float GetFriendshipValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D87404(relative to base address)
		FGameplayTag GetFriendshipState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751622BF0(relative to base address)
		bool EnableFriendshipChanges(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C49A34(relative to base address)
		bool DisableFriendshipChanges(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C49A10(relative to base address)
		bool AreFriendshipChangesEnabled(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C499F8(relative to base address)
	};


	// Class JunoAIRuntime.JunoAIInventoryComponent
	// Inherited from UJunoInventoryComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x320 - 0x310)
	class UJunoAIInventoryComponent : public UJunoInventoryComponent	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x310(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAIInventoryComponent");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoAIMerchantComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class UJunoAIMerchantComponent : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0xA8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAIMerchantComponent");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoAIRuntimeAnalytics
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoAIRuntimeAnalytics : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAIRuntimeAnalytics");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoBTTask_FTUENPC
	// Inherited from UFortBTTask_ExecuteGameplayAbility -> UBTTask_GameplayTaskBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0xF8 - 0xF0)
	class UJunoBTTask_FTUENPC : public UFortBTTask_ExecuteGameplayAbility	
	{
	public:
		FName FTUENPCStatusKeyName; // 0xF0(0x4)
		FName ShouldTeleportKeyName; // 0xF4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoBTTask_FTUENPC");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoBTTask_ReactToVerb
	// Inherited from UFortAthenaBTTask_ReactToVerb -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0x88 - 0x80)
	class UJunoBTTask_ReactToVerb : public UFortAthenaBTTask_ReactToVerb	
	{
	public:
		FName MoodReactionTagKeyName; // 0x80(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x84(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoBTTask_ReactToVerb");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoBTTask_RunMoodReaction
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x48 (0xB8 - 0x70)
	class UJunoBTTask_RunMoodReaction : public UBTTaskNode	
	{
	public:
		bool bRunMoodComponentRequest; // 0x70(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		TArray<FRandomizedMoodReactionConfig> PossibleMoodReactions; // 0x78(0x10)
		FScalableFloat MaximumDuration; // 0x88(0x28)
		FName ExecutionStatusKeyName; // 0xB0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoBTTask_RunMoodReaction");
			return ret;
		}
	};


	// Class JunoAIRuntime.FJunoAICampManagementVisitorWorldConditionSchema
	// Inherited from UJunoCampWorldConditionSchema -> UWorldConditionSchema -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UFJunoAICampManagementVisitorWorldConditionSchema : public UJunoCampWorldConditionSchema	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.FJunoAICampManagementVisitorWorldConditionSchema");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoAICampManagementRewardsWorldConditionSchema
	// Inherited from UJunoCampWorldConditionSchema -> UWorldConditionSchema -> UObject
	// Size: 0x8 (0x48 - 0x40)
	class UJunoAICampManagementRewardsWorldConditionSchema : public UJunoCampWorldConditionSchema	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAICampManagementRewardsWorldConditionSchema");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoCampAIManagementComponent
	// Inherited from UJunoCampComponentBase -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xCA0 (0xD40 - 0xA0)
	class UJunoCampAIManagementComponent : public UJunoCampComponentBase	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		FJunoCampAICachedRecruitmentData CachedAndReplicatedRecruitmentData; // 0xB8(0x30)
		unsigned char UnknownData01_6[0x68]; // 0xE8(0x68) UNKNOWN PROPERTY
		TMap<FGameplayTag, TWeakObjectPtr> UniqueAIIdentifierToSpawnedAIs; // 0x150(0x50)
		unsigned char UnknownData02_6[0xE8]; // 0x1A0(0xE8) UNKNOWN PROPERTY
		TArray<TScriptInterface> NPCPointProviders; // 0x288(0x10)
		UFortAthenaLivingWorldEncounterInstance* NPCEncounter; // 0x298(0x8)
		TArray<TScriptInterface> CreaturePointProviders; // 0x2A0(0x10)
		UFortAthenaLivingWorldEncounterInstance* CreatureEncounter; // 0x2B0(0x8)
		FJunoAICampManagementVisitorsConfigurationDigested VisitorsConfigurationDigested; // 0x2B8(0x18)
		TArray<FJunoAICampManagementFixedNPCsPickingConfiguration> CachedFixedNPCsConfigurationAtCurrentAwesomenessLevel; // 0x2D0(0x10)
		FJunoAICampManagementVisitorsPickingConfiguration CachedVisitorsPickingConfigurationAtCurrentAwesomenessLevel; // 0x2E0(0x28)
		TArray<FGameplayTag> NonSpawnedCreaturesIdentifiersWaitingForSpawnCondition; // 0x308(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x318(0x8) UNKNOWN PROPERTY
		FJunoAICampManagementLWMConfiguration NPCLWMConfiguration; // 0x320(0x3A0)
		FJunoAICampManagementLWMConfiguration CreaturesLWMConfiguration; // 0x6C0(0x3A0)
		FJunoAICampManagementVisitorsConfiguration VisitorsConfiguration; // 0xA60(0x30)
		TMap<int32_t, UDataTable*> AwesomenessLevelToFixedNPCsConfiguration; // 0xA90(0x50)
		TMap<int32_t, FDataTableRowHandle> AwesomenessLevelToVisitorsPickingConfiguration; // 0xAE0(0x50)
		TMap<int32_t, UDataTable*> AwesomenessLevelToNPCRewards; // 0xB30(0x50)
		FScalableFloat InitialIngameHoursDelayBeforeFirstRewardRoll; // 0xB80(0x28)
		FScalableFloat MinimumIngameHoursBetweenRewardRolls; // 0xBA8(0x28)
		FScalableFloat ResetDelayBetweenRollsOnLevelChange; // 0xBD0(0x28)
		FScalableFloat PassiveResourceGatheringTime; // 0xBF8(0x28)
		FScalableFloat MultiplierForSimulatedGeneration; // 0xC20(0x28)
		FScalableFloat MaximumAllocableSOPerAIForSimulation; // 0xC48(0x28)
		FNavAgentSelector SupportedAgents; // 0xC70(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xC74(0x4) UNKNOWN PROPERTY
		FScalableFloat ShouldCheckWCForRemoteRecruitment; // 0xC78(0x28)
		FScalableFloat RequireNPCToBeInVisitorsListForRemoteRecruitment; // 0xCA0(0x28)
		FScalableFloat SpawnDelayFromCampSpawn; // 0xCC8(0x28)
		FScalableFloat MinDistanceFromPlayersToAddVisitors; // 0xCF0(0x28)
		FScalableFloat MinDistanceFromPlayersToAddFixedNPCs; // 0xD18(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoCampAIManagementComponent");
			return ret;
		}

		bool RequestCreatureTemporaryDespawn(FGameplayTag& UniqueAIIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C4A4F8(relative to base address)
		void HandleAwesomeLevelReady(FJunoCampAwesomeStatsData& AwesomeData); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751C4A2EC(relative to base address)
		void HandleAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751C4A25C(relative to base address)
		void HandleAISpawned(AActor* SpawnedAIPawn, UFortAthenaLivingWorldEventData* EventData); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751C4A198(relative to base address)
		void HandleAIDespawned(AActor* DespawnedAIPawn, UFortAthenaLivingWorldEventData* EventData); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751C4A0D4(relative to base address)
		void HandleAIControllerFullySpawned(AAIController* Controller, AFortPawn* Pawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751C49D68(relative to base address)
		void HandleAIControllerChanged(APawn* Pawn, AController* OldController, AController* NewController); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751C49B80(relative to base address)
		AFortPawn GetSpawnedAIFromUniqueAIIdentifier(FGameplayTag& UniqueAIIdentifier); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C49A8C(relative to base address)
		FJunoCampAICachedRecruitmentData GetCachedAndReplicatedRecruitmentData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C49A58(relative to base address)
	};


	// Class JunoAIRuntime.JunoCaveLivingWorldEventData
	// Inherited from UFortAthenaLivingWorldEventData -> UDataAsset -> UObject
	// Size: 0x58 (0x1B0 - 0x158)
	class UJunoCaveLivingWorldEventData : public UFortAthenaLivingWorldEventData	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		FScalableFloat CaveRoomDistanceMin; // 0x160(0x28)
		FScalableFloat CaveRoomDistanceMax; // 0x188(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoCaveLivingWorldEventData");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoCreatureInCampLivingWorldStaticPointProvider
	// Inherited from AFortAthenaLivingWorldStaticPointProvider -> AActor -> UObject
	// Size: 0x8 (0x390 - 0x388)
	class AJunoCreatureInCampLivingWorldStaticPointProvider : public AFortAthenaLivingWorldStaticPointProvider	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x388(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoCreatureInCampLivingWorldStaticPointProvider");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoCreaturePawnComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x218 (0x2C0 - 0xA8)
	class UJunoCreaturePawnComponent : public UFortPawnComponent	
	{
	public:
		FGameplayTag HUDKeyTag; // 0xA8(0x4)
		FAIFriendshipContinuousChangeConfiguration ContinuousFriendshipChangeConfigurationWhenNoInteractions; // 0xAC(0xC)
		FScalableFloat MaxNoInteractionTimeForNPCBeforeFriendshipChangeInJunoGameTimeHours; // 0xB8(0x28)
		FAIFriendshipContinuousChangeConfiguration ContinuousFriendshipChangeConfigurationWithNoRecruitmentObject; // 0xE0(0xC)
		FAIFriendshipContinuousChangeConfiguration ContinuousFriendshipChangeConfigurationWithSoftRemovedCamp; // 0xEC(0xC)
		FScalableFloat ConvertedOverrideTileGenerationRadius; // 0xF8(0x28)
		FScalableFloat ConvertedOverrideTileRemovalRadius; // 0x120(0x28)
		FScalableFloat AutomaticFriendshipResetDelay; // 0x148(0x28)
		FGameplayTagQuery ValidFriendshipStateQueryForAutomaticReset; // 0x170(0x48)
		FMulticastInlineDelegate OnJunoCreatureRecruitedToCampDelegate; // 0x1B8(0x10)
		FMulticastInlineDelegate OnJunoCreatureCustomNameChangedDelegate; // 0x1C8(0x10)
		FText CachedAndReplicatedCustomName; // 0x1D8(0x10)
		unsigned char UnknownData00_7[0xD8]; // 0x1E8(0xD8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoCreaturePawnComponent");
			return ret;
		}

		void OnRep_CachedCustomName(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF751C4DA64(relative to base address)
		void NotifyPetting(AFortPawn* Instigator); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C4D9E4(relative to base address)
		void NotifyFeeding(AFortPawn* Instigator, UFortItemDefinition* ItemBeingFed); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C4D708(relative to base address)
		void HandleUnconverted(AFortPawn* UnconvertedPawn, EUnconvertReason UnconvertReason); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C4D644(relative to base address)
		void HandleDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF751C4CCB8(relative to base address)
		void HandleConverted(AFortPawn* InstigatorPawn, AFortPawn* ConvertedPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C4CBF4(relative to base address)
		FText GetCustomName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C4CBBC(relative to base address)
		FGuid GetAssignedRecruitmentObjectId(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C4CBA0(relative to base address)
		UJunoCampRecruitmentObjectComponent GetAssignedAndSpawnedRecruitmentObject(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C4CB7C(relative to base address)
		bool AssignNewCustomName(FJunoRecruitmentObjectAssignedData& AssignedData, AFortPlayerController* InstigatorController); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C4C910(relative to base address)
	};


	// Class JunoAIRuntime.JunoNPCPawnComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x2B8 (0x360 - 0xA8)
	class UJunoNPCPawnComponent : public UFortPawnComponent	
	{
	public:
		FMulticastInlineDelegate OnJunoNPCPawnComponentChangedSoftRemovedReason; // 0xA8(0x10)
		unsigned char UnknownData00_6[0x118]; // 0xB8(0x118) UNKNOWN PROPERTY
		TArray<UClass*> PreFTUESkillSetClasses; // 0x1D0(0x10)
		UFortAthenaAIRuntimeParameters_AIBotConvert* CachedAIBotConvertParameters; // 0x1E0(0x8)
		unsigned char UnknownData01_6[0x58]; // 0x1E8(0x58) UNKNOWN PROPERTY
		TMap<FGameplayTag, FText> AIRoleToDisplayText; // 0x240(0x50)
		TArray<UClass*> FTUESkillSetClasses; // 0x290(0x10)
		FGameplayTagContainer FTUETagsToAdd; // 0x2A0(0x20)
		FScalableFloat FTUEOverrideTileGenerationRadius; // 0x2C0(0x28)
		FScalableFloat FTUEOverrideTileRemovalRadius; // 0x2E8(0x28)
		FScalableFloat TimeToGoInHardRemovalStartStateBeforeHardRemovalInRealSeconds; // 0x310(0x28)
		FScalableFloat TimeForVisitorsToGoInHardRemovalStartStateBeforeHardRemovalInRealSeconds; // 0x338(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoNPCPawnComponent");
			return ret;
		}

		void HandleDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF751C4D11C(relative to base address)
		FGameplayTagContainer GetSoftRemovedReasons(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C4CBD8(relative to base address)
		FText GetAIRoleDisplayText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C4CB48(relative to base address)
		FGameplayTag GetAIRole(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA50438(relative to base address)
		FText ConvertAIRoleToDisplayText(FGameplayTag& AIRole); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C4CAA8(relative to base address)
	};


	// Class JunoAIRuntime.JunoQueryContext_AICamp_AssignedRecruitmentObject
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoQueryContext_AICamp_AssignedRecruitmentObject : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoQueryContext_AICamp_AssignedRecruitmentObject");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoQueryContext_AICamp_LastOrCurrentAssignedRecruitmentObject_Location
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoQueryContext_AICamp_LastOrCurrentAssignedRecruitmentObject_Location : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoQueryContext_AICamp_LastOrCurrentAssignedRecruitmentObject_Location");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoAIFTUEEndWorldConditionSchema
	// Inherited from UWorldConditionSchema -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UJunoAIFTUEEndWorldConditionSchema : public UWorldConditionSchema	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAIFTUEEndWorldConditionSchema");
			return ret;
		}
	};


	// Class JunoAIRuntime.PlayspaceComponent_Root_JunoAIManagement
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xAB0 (0xBA8 - 0xF8)
	class UPlayspaceComponent_Root_JunoAIManagement : public UFortPlayspaceComponent	
	{
	public:
		FJunoAIFollowerLWMConfiguration LWMConfiguration; // 0xF8(0x3A0)
		FJunoAITemporaryGlobalEncounterLWMConfiguration TemporaryGlobalEncounterLWMConfiguration; // 0x498(0x398)
		FSoftDataRegistryOrTable FTUEConfigurationsTable; // 0x830(0x30)
		FScalableFloat MaxNoInteractionTimeForNPCBeforeSoftRemovalInJunoGameTimeHours; // 0x860(0x28)
		FScalableFloat TimeBeforeSoftRemovedNPCBecomesHardRemovedInJunoGameTimeHours; // 0x888(0x28)
		FScalableFloat TimeToRemoveStaleFollowersFromDisconnectedPlayersInRealHours; // 0x8B0(0x28)
		FScalableFloat SecondsToWaitBeforeRemovingStaleFollowers; // 0x8D8(0x28)
		FScalableFloat TimeBeforeSoftRemovedCreatureBecomesHardRemovedInJunoGameTimeHours; // 0x900(0x28)
		FScalableFloat MinFriendshipValueBeforeSoftRemoval; // 0x928(0x28)
		FScalableFloat GlobalRecruitableNPCsCap; // 0x950(0x28)
		FScalableFloat GlobalRecruitableCreaturesCap; // 0x978(0x28)
		UDataTable* BannedDescriptorTagsTable; // 0x9A0(0x8)
		unsigned char UnknownData00_6[0x30]; // 0x9A8(0x30) UNKNOWN PROPERTY
		TArray<FJunoAIFollowerManagedData> ManagedFollowers; // 0x9D8(0x10)
		TScriptInterface<Class> TemporaryGlobalEncounterPointProvider; // 0x9E8(0x10)
		UFortAthenaLivingWorldEncounterInstance* TemporaryGlobalEncounter; // 0x9F8(0x8)
		TMap<FGameplayTag, FJunoAIFTUEConfiguration> DigestedFTUEConfigurations; // 0xA00(0x50)
		TMap<FGameplayTag, FFTUERuntimeData> FTUERuntimeDatas; // 0xA50(0x50)
		unsigned char UnknownData01_6[0x70]; // 0xAA0(0x70) UNKNOWN PROPERTY
		TMap<FGameplayTag, FJunoAIWorldNPCSpawningData> WorldAssignedNPCs; // 0xB10(0x50)
		unsigned char UnknownData02_7[0x48]; // 0xB60(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.PlayspaceComponent_Root_JunoAIManagement");
			return ret;
		}

		void HandleFTUENPCSpawned(AActor* FTUENPC, UFortAthenaLivingWorldEventData* EventData); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C4D580(relative to base address)
	};


	// Class JunoAIRuntime.JunoAISafetyBubbleComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xA8 (0x148 - 0xA0)
	class UJunoAISafetyBubbleComponent : public UActorComponent	
	{
	public:
		TArray<FFortAthenaLivingWorldEventTagDensityRegistration> TagsData; // 0xA0(0x10)
		FScalableFloat InGameHoursDuration; // 0xB0(0x28)
		FScalableFloat SafetyBubbleRadius; // 0xD8(0x28)
		unsigned char UnknownData00_7[0x48]; // 0x100(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAISafetyBubbleComponent");
			return ret;
		}

		void OnTimeOfDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751C68D0C(relative to base address)
	};


	// Class JunoAIRuntime.EnvQueryTest_JunoIsNearBuilding
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0xA0 (0x298 - 0x1F8)
	class UEnvQueryTest_JunoIsNearBuilding : public UEnvQueryTest	
	{
	public:
		FEnvOverlapData OverlapData; // 0x1F8(0x30)
		FAIDataProviderBoolValue GenerateOnlyInsideClusterBounds; // 0x228(0x38)
		FAIDataProviderFloatValue MinimumBuildingClusterVolume; // 0x260(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.EnvQueryTest_JunoIsNearBuilding");
			return ret;
		}
	};


	// Class JunoAIRuntime.EnvQueryTest_JunoIsUnderCeiling
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x68 (0x260 - 0x1F8)
	class UEnvQueryTest_JunoIsUnderCeiling : public UEnvQueryTest	
	{
	public:
		FEnvOverlapData SweepData; // 0x1F8(0x30)
		FAIDataProviderFloatValue SweepHeight; // 0x228(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.EnvQueryTest_JunoIsUnderCeiling");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoAIBotEvaluator_ReactToVerb
	// Inherited from UFortAthenaAIBotEvaluator_ReactToVerb -> UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x10 (0x3F0 - 0x3E0)
	class UJunoAIBotEvaluator_ReactToVerb : public UFortAthenaAIBotEvaluator_ReactToVerb	
	{
	public:
		FName MoodReactionTagKeyName; // 0x3E0(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x3E4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAIBotEvaluator_ReactToVerb");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoAICheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoAICheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoAICheatManager");
			return ret;
		}

		void JunoPauseTargetAI(bool bPause); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74C079284(relative to base address)
		void JunoEnableRecruitedCreaturePermaDeath(bool bEnable); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74C079284(relative to base address)
		void JunoEnableHostileCreatures(bool bEnable); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74C079284(relative to base address)
		void JunoEnableFriendlyNPCs(bool bEnable); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74C079284(relative to base address)
		void JunoEnableFriendlyCreatures(bool bEnable); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74C079284(relative to base address)
		void JunoEnableEliteHostileCreatures(bool bEnable); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74C079284(relative to base address)
	};


	// Class JunoAIRuntime.PlayspaceComponent_JunoAISafetyBubble
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x108 - 0xF8)
	class UPlayspaceComponent_JunoAISafetyBubble : public UFortPlayspaceComponent	
	{
	public:
		UClass* SafetyBubbleComponent; // 0xF8(0x8)
		bool bPreventSafetyBubbleInCamp; // 0x100(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x101(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.PlayspaceComponent_JunoAISafetyBubble");
			return ret;
		}
	};


	// Class JunoAIRuntime.AITask_JunoMoveTo
	// Inherited from UAITask_MoveTo -> UAITask -> UGameplayTask -> UObject
	// Size: 0x18 (0x130 - 0x118)
	class UAITask_JunoMoveTo : public UAITask_MoveTo	
	{
	public:
		FJunoMoveConfig MoveConfig; // 0x118(0xC)
		TWeakObjectPtr<AActor*> BlockedByActor; // 0x124(0x8)
		unsigned char UnknownData00_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.AITask_JunoMoveTo");
			return ret;
		}
	};


	// Class JunoAIRuntime.BTTask_JunoMoveTo
	// Inherited from UFortAthenaBTTask_MoveTo -> UBTTask_MoveTo -> UBTTask_BlackboardBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0xB8 (0x1F8 - 0x140)
	class UBTTask_JunoMoveTo : public UFortAthenaBTTask_MoveTo	
	{
	public:
		bool bOnUnreachableGoalFindBlockingBuilding : 1; // 0x140:0(0x1)
		bool bAssignFoundBlockingBuildingAsTarget : 1; // 0x140:1(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x141(0x7) UNKNOWN PROPERTY
		FScalableFloat BlockingBuildingTraceDistance; // 0x148(0x28)
		FScalableFloat BlockingBuildingTraceCooldown; // 0x170(0x28)
		FBlackboardKeySelector BlockedByBuildingKeySelector; // 0x198(0x28)
		FBlackboardKeySelector LastBlockingBuildingTraceTimeKeySelector; // 0x1C0(0x28)
		TEnumAsByte<EPathObstacleAction> PathObstacleAction; // 0x1E8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1E9(0x3) UNKNOWN PROPERTY
		bool bApplyCostLimit : 1; // 0x1EC:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x1ED(0x3) UNKNOWN PROPERTY
		float PathingCostLimitFactor; // 0x1F0(0x4)
		float PathingMinimumCostLimit; // 0x1F4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.BTTask_JunoMoveTo");
			return ret;
		}
	};


	// Class JunoAIRuntime.JunoWorldCondition_AIWorldSettings_State
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UJunoWorldCondition_AIWorldSettings_State : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x28(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAIRuntime.JunoWorldCondition_AIWorldSettings_State");
			return ret;
		}
	};

}
