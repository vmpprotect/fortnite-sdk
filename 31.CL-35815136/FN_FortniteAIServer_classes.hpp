#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortniteAIServer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FortniteAIServer.FortAthenaAIBotEvaluator_ApproachNearbyPawns
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x130 (0x2D0 - 0x1A0)
	class UFortAthenaAIBotEvaluator_ApproachNearbyPawns : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x1A0(0x20) UNKNOWN PROPERTY
		FScalableFloat MaxApproaches; // 0x1C0(0x28)
		unsigned char UnknownData01_6[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
		FFortNearbyActorsPerceptionConfiguration PerceptionConfiguration; // 0x1F0(0xD0)
		FName EnableKeyName; // 0x2C0(0x4)
		unsigned char UnknownData02_7[0xC]; // 0x2C4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_ApproachNearbyPawns");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Harvest
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x1A0 (0x340 - 0x1A0)
	class UFortAthenaAIBotEvaluator_Harvest : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		unsigned char UnknownData00_3[0x50]; // 0x1A0(0x50) UNKNOWN PROPERTY
		UClass* ProjectionNavigationQueryFilterClass; // 0x1F0(0x8)
		UClass* ValidNavigationQueryFilterClassOverride; // 0x1F8(0x8)
		FScalableFloat MaximumTimeToHelpFromLastPlayerDamage; // 0x200(0x28)
		FScalableFloat KeepTargetTimeOnWeaponTrigger; // 0x228(0x28)
		FScalableFloat AmountOfTimesPlayerBuiltStructuresNeedToBeDamaged; // 0x250(0x28)
		FScalableFloat TimeToTrackDamagedActors; // 0x278(0x28)
		FScalableFloat MaxDistanceFromActorForFallbackNoHarvestBehaviour; // 0x2A0(0x28)
		FScalableFloat ExtraExtentForPlayerHitChecks; // 0x2C8(0x28)
		TArray<UClass*> GEsToApplyOnFallbackBehaviorTrigger; // 0x2F0(0x10)
		TArray<UClass*> GEsToApplyOnCannotDamageBehaviorTrigger; // 0x300(0x10)
		FName HarvestTargetKeyName; // 0x310(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x314(0x4) UNKNOWN PROPERTY
		FName HarvestTargetHitPointKeyName; // 0x318(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x31C(0x4) UNKNOWN PROPERTY
		FName HarvestDestinationKeyName; // 0x320(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x324(0x4) UNKNOWN PROPERTY
		FName FallbackBehaviorKeyName; // 0x328(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY
		FName CannotDamageKeyName; // 0x330(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x334(0x4) UNKNOWN PROPERTY
		FName WeaponTriggerMeleeKeyName; // 0x338(0x4)
		unsigned char UnknownData06_7[0x4]; // 0x33C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Harvest");
			return ret;
		}

		void HandleUnconverted(AFortPawn* UnconvertedPawn, EUnconvertReason UnconvertReason); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FAFBBB8(relative to base address)
		void HandleConverted(AFortPawn* InstigatorPawn, AFortPawn* ConvertedPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FAFBAF8(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_MoveAway
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x108 (0x2A8 - 0x1A0)
	class UFortAthenaAIBotEvaluator_MoveAway : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		unsigned char UnknownData00_3[0x70]; // 0x1A0(0x70) UNKNOWN PROPERTY
		FScalableFloat MaxSecondsToReactToBump; // 0x210(0x28)
		FScalableFloat MaxSecondsToReactToBox; // 0x238(0x28)
		FScalableFloat MinSecondsBetweenInstantReactions; // 0x260(0x28)
		UEnvQuery* FindAwayLocationFromPawnQueryTemplate; // 0x288(0x8)
		TEnumAsByte<EEnvQueryRunMode> FindAwayLocationFromPawnRunMode; // 0x290(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x291(0x7) UNKNOWN PROPERTY
		UEnvQuery* FindAwayLocationFromBoxQueryTemplate; // 0x298(0x8)
		TEnumAsByte<EEnvQueryRunMode> FindAwayLocationFromBoxRunMode; // 0x2A0(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x2A1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_MoveAway");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjectCommand
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0xA0 (0x240 - 0x1A0)
	class UFortAthenaAIBotEvaluator_SmartObjectCommand : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		UFortAthenaAIRuntimeParameters_SmartObjectBase* SmartObjectRuntimeParameters; // 0x1A0(0x8)
		USmartObjectSubsystem* SmartObjectSubsystem; // 0x1A8(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x1B0(0x8) UNKNOWN PROPERTY
		FFortAIActiveCommandSOUsageData RunningCommandData; // 0x1B8(0x10)
		FBotEvaluatorCommandCooldown CommandOnCooldown; // 0x1C8(0x18)
		FGameplayTag EvaluationTag; // 0x1E0(0x4)
		bool bEvaluateSOValidityAfterChosen; // 0x1E4(0x1)
		bool bEnableEntryLocationsSupport; // 0x1E5(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x1E6(0x2) UNKNOWN PROPERTY
		FScalableFloat SingleCommandCooldown; // 0x1E8(0x28)
		UClass* OverridenFilterClassForEntryPoints; // 0x210(0x8)
		FName SmartObjectExecutionStatusKeyName; // 0x218(0x4)
		FName SmartObjectMovementStateKeyName; // 0x21C(0x4)
		FName SmartObjectDestinationKeyName; // 0x220(0x4)
		FName SmartObjectDestinationRotationKeyName; // 0x224(0x4)
		FName SmartObjectShouldMoveKeyName; // 0x228(0x4)
		FName SmartObjectUrgencyKeyName; // 0x22C(0x4)
		unsigned char UnknownData02_7[0x10]; // 0x230(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjectCommand");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjectConverted
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x58 (0x1F8 - 0x1A0)
	class UFortAthenaAIBotEvaluator_SmartObjectConverted : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		UFortAthenaAIRuntimeParameters_SmartObjectBase* SmartObjectRuntimeParameters; // 0x1A0(0x8)
		USmartObjectSubsystem* SmartObjectSubsystem; // 0x1A8(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x1B0(0x8) UNKNOWN PROPERTY
		FBotEvaluatorSmartObjectConvertedData RunningData; // 0x1B8(0x8)
		FGameplayTag EvaluationTag; // 0x1C0(0x4)
		bool bEvaluateSOValidityAfterChosen; // 0x1C4(0x1)
		bool bEnableEntryLocationsSupport; // 0x1C5(0x1)
		bool bIgnoreCooldowns; // 0x1C6(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x1C7(0x1) UNKNOWN PROPERTY
		UClass* OverridenFilterClassForEntryPoints; // 0x1C8(0x8)
		FName SmartObjectExecutionStatusKeyName; // 0x1D0(0x4)
		FName SmartObjectMovementStateKeyName; // 0x1D4(0x4)
		FName SmartObjectDestinationKeyName; // 0x1D8(0x4)
		FName SmartObjectDestinationRotationKeyName; // 0x1DC(0x4)
		FName SmartObjectShouldMoveKeyName; // 0x1E0(0x4)
		FName SmartObjectUrgencyKeyName; // 0x1E4(0x4)
		unsigned char UnknownData02_7[0x10]; // 0x1E8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjectConverted");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_TargetContext
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x88 (0x130 - 0xA8)
	class UFortAthenaAIBotEvaluator_TargetContext : public UFortAthenaAIBotEvaluator	
	{
	public:
		FGameplayTagQuery TokenPositionTagQuery; // 0xA8(0x48)
		FName TargetContextReachableKeyName; // 0xF0(0x4)
		FName TargetContextReachableInStraightLineKeyName; // 0xF4(0x4)
		FName TargetContextInsideLeashKeyName; // 0xF8(0x4)
		FName TargetContextLeashExitTimeKeyName; // 0xFC(0x4)
		FName TargetActorName; // 0x100(0x4)
		FName LastRangedWeaponFireAbilityAgainstTimeKeyName; // 0x104(0x4)
		UFortAICombatTokenConsumerComponent* CachedTokenConsumerComponent; // 0x108(0x8)
		float HorizontalProjectionForReachability; // 0x110(0x4)
		float VerticalProjectionForReachability; // 0x114(0x4)
		unsigned char UnknownData00_7[0x18]; // 0x118(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_TargetContext");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_TokenPosition
	// Inherited from UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x128 (0x2B0 - 0x188)
	class UFortAthenaAIBotEvaluator_TokenPosition : public UFortAthenaAIEvaluator_Movement	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x188(0x10) UNKNOWN PROPERTY
		TArray<FPositioningEQS> EQSs; // 0x198(0x10)
		float TokenPositionCooldown; // 0x1A8(0x4)
		float TokenPositionCooldownVariation; // 0x1AC(0x4)
		FValueOrBBKey_Float NewTokenPositionCooldown; // 0x1B0(0xC)
		FValueOrBBKey_Float NewTokenPositionCooldownVariation; // 0x1BC(0xC)
		FValueOrBBKey_Float DistanceToleranceForReturningToPosition; // 0x1C8(0xC)
		FValueOrBBKey_Bool CanAcquirePositionInEnter; // 0x1D4(0xC)
		FValueOrBBKey_Float DistanceForDestinationAsTarget; // 0x1E0(0xC)
		FValueOrBBKey_Bool DestinationAsTargetOnceOnly; // 0x1EC(0xC)
		FValueOrBBKey_Bool CanAddNewPositionToProvider; // 0x1F8(0xC)
		FValueOrBBKey_Float AcceptableDistanceForReservation; // 0x204(0xC)
		FGameplayTagQuery GeneratedTokenPositionTagQuery; // 0x210(0x48)
		unsigned char UnknownData01_6[0x30]; // 0x258(0x30) UNKNOWN PROPERTY
		UFortAICombatTokenConsumerComponent* CachedTokenConsumerComponent; // 0x288(0x8)
		TWeakObjectPtr<UFortAICombatTokenProviderComponent*> CachedTokenProviderComponent; // 0x290(0x8)
		int32_t RunningEQSRequestID; // 0x298(0x4)
		bool bPositionRequested; // 0x29C(0x1)
		bool bPositionAcquiredInEnter; // 0x29D(0x1)
		bool bMoveToTargetFinished; // 0x29E(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x29F(0x1) UNKNOWN PROPERTY
		float PositionAcquiredFromQueryTimestamp; // 0x2A0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x2A4(0x4) UNKNOWN PROPERTY
		FName WeaponKeyName; // 0x2A8(0x4)
		FName TargetActorName; // 0x2AC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_TokenPosition");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIEvaluator_AbovePhysicsObject
	// Inherited from UFortAthenaAIEvaluator -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UFortAthenaAIEvaluator_AbovePhysicsObject : public UFortAthenaAIEvaluator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIEvaluator_AbovePhysicsObject");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_ModifyTokenNumber
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x70 (0xE0 - 0x70)
	class UFortAthenaBTService_ModifyTokenNumber : public UBTService	
	{
	public:
		FGameplayTagQuery TokenTagQuery; // 0x70(0x48)
		FScalableFloat NewTokenAmount; // 0xB8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_ModifyTokenNumber");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_ModulateSpeedOnDistance
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x28 (0x98 - 0x70)
	class UFortAthenaBTService_ModulateSpeedOnDistance : public UBTService	
	{
	public:
		FName TooFarFromLeaderKeyName; // 0x70(0x4)
		FName FollowGroupLeaderDestinationKeyName; // 0x74(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x78(0x4) UNKNOWN PROPERTY
		FValueOrBBKey_Float TargetSpeed; // 0x7C(0xC)
		FValueOrBBKey_Float MaxSpeed; // 0x88(0xC)
		unsigned char UnknownData01_7[0x4]; // 0x94(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_ModulateSpeedOnDistance");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_MovementStyle
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0xC0 (0x130 - 0x70)
	class UFortAthenaBTService_MovementStyle : public UBTService	
	{
	public:
		TEnumAsByte<EFortMovementStyle> MovementStyle; // 0x70(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		FValueOrBBKey_Enum NewMovementStyle; // 0x78(0x28)
		FGameplayTagQuery TagCondition; // 0xA0(0x48)
		FBlackboardKeySelector BlackboardCondition; // 0xE8(0x28)
		unsigned char UnknownData01_7[0x20]; // 0x110(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_MovementStyle");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_SetInTacticalAction
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UFortAthenaBTService_SetInTacticalAction : public UBTService	
	{
	public:
		FValueOrBBKey_Bool ShouldSetInTacticalAction; // 0x70(0xC)
		unsigned char UnknownData00_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_SetInTacticalAction");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_TokenQuery
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x68 (0xD8 - 0x70)
	class UFortAthenaBTService_TokenQuery : public UBTService	
	{
	public:
		TArray<FEquippedItemTagAssociationData> EquippedItemTagAssociationDatas; // 0x70(0x10)
		FGameplayTagQuery DefaultTokenSystemTagQuery; // 0x80(0x48)
		EFortAthenaBTServiceTokenQueryAction BecomeRelevantTokenAction; // 0xC8(0x1)
		EFortAthenaBTServiceTokenQueryAction CeaseRelevantTokenAction; // 0xC9(0x1)
		EFortAthenaBTServiceTokenQueryAction WeaponChangeTokenAction; // 0xCA(0x1)
		EFortAthenaBTServiceTokenQueryAction TargetChangeTokenAction; // 0xCB(0x1)
		FName WeaponKeyName; // 0xCC(0x4)
		FName TargetActorName; // 0xD0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_TokenQuery");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTWorldConditionSchema
	// Inherited from UWorldConditionSchema -> UObject
	// Size: 0x18 (0x50 - 0x38)
	class UFortBTWorldConditionSchema : public UWorldConditionSchema	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x38(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTWorldConditionSchema");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_WorldCondition
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x70 (0xE0 - 0x70)
	class UFortAthenaBTService_WorldCondition : public UBTService	
	{
	public:
		FWorldConditionQueryDefinition Conditions; // 0x70(0x18)
		FName ConditionsResultName; // 0x88(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		FWorldConditionQueryState QueryState; // 0x90(0x30)
		AAIController* CachedOwnerController; // 0xC0(0x8)
		AActor* CachedOwnerPawn; // 0xC8(0x8)
		unsigned char UnknownData01_7[0x10]; // 0xD0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_WorldCondition");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_Harvest
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x50 (0xC0 - 0x70)
	class UFortAthenaBTTask_Harvest : public UBTTaskNode	
	{
	public:
		FName HarvestExecutionStatusKeyName; // 0x70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FName HarvestTargetKeyName; // 0x78(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		FName HarvestTargetHitPointKeyName; // 0x80(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		FName HarvestDestinationKeyName; // 0x88(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		FName WeaponTriggerMeleeKeyName; // 0x90(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
		FScalableFloat MeleeSwingDelay; // 0x98(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_Harvest");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_ReactToVerb
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UFortAthenaBTTask_ReactToVerb : public UBTTaskNode	
	{
	public:
		FName ReactToVerbExecutionStatusKeyName; // 0x70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FName GameplayEffectReactionKeyName; // 0x78(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_ReactToVerb");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_VehicleSwitchSeat
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFortAthenaBTTask_VehicleSwitchSeat : public UBTTaskNode	
	{
	public:
		TEnumAsByte<SwitchSeatType> SwitchSeatType; // 0x70(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_VehicleSwitchSeat");
			return ret;
		}
	};


	// Class FortniteAIServer.FortStateTreeConditionSchema
	// Inherited from UWorldConditionSchema -> UObject
	// Size: 0x18 (0x50 - 0x38)
	class UFortStateTreeConditionSchema : public UWorldConditionSchema	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x38(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortStateTreeConditionSchema");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_AIBotVehicleSeatStatus
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x8 (0x70 - 0x68)
	class UFortBTDecorator_AIBotVehicleSeatStatus : public UBTDecorator	
	{
	public:
		TEnumAsByte<SeatStatusType> SeatType; // 0x68(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_AIBotVehicleSeatStatus");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_HasToken
	// Inherited from UBTDecorator_BlackboardBase -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x48 (0xD8 - 0x90)
	class UFortBTDecorator_HasToken : public UBTDecorator_BlackboardBase	
	{
	public:
		FGameplayTagQuery TokenQuery; // 0x90(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_HasToken");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTService_AIEvaluatorsInjector
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x18 (0x88 - 0x70)
	class UFortBTService_AIEvaluatorsInjector : public UBTService	
	{
	public:
		TArray<FFortBTService_InjectionTagKey> InjectionTagsKeys; // 0x70(0x10)
		FName InjectionItemKeyName; // 0x80(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x84(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTService_AIEvaluatorsInjector");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTService_ClearGoalAndAssignment
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UFortBTService_ClearGoalAndAssignment : public UBTService	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTService_ClearGoalAndAssignment");
			return ret;
		}
	};


	// Class FortniteAIServer.FortGameFeatureAction_AddInjectionSupportingBehavior
	// Inherited from UFortGameInstanceGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UFortGameFeatureAction_AddInjectionSupportingBehavior : public UFortGameInstanceGameFeatureAction	
	{
	public:
		TArray<TWeakObjectPtr> InjectionSupportingBehaviors; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortGameFeatureAction_AddInjectionSupportingBehavior");
			return ret;
		}
	};


	// Class FortniteAIServer.FortGameFeatureAction_InjectAIBehavior
	// Inherited from UFortGameInstanceGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UFortGameFeatureAction_InjectAIBehavior : public UFortGameInstanceGameFeatureAction	
	{
	public:
		TArray<FFortAISpawnerTagQueryInjectedBehavior> InjectedBehaviors; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortGameFeatureAction_InjectAIBehavior");
			return ret;
		}
	};


	// Class FortniteAIServer.FortInjectedBehaviorsComponent
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UFortInjectedBehaviorsComponent : public UFortGameStateComponent	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0xA0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortInjectedBehaviorsComponent");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_ClosestLocationInsideLeash
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFortQueryContext_ClosestLocationInsideLeash : public UEnvQueryContext	
	{
	public:
		UClass* NavFilterClass; // 0x28(0x8)
		bool bUseInnerRadius; // 0x30(0x1)
		bool bForcePositionOnLeash; // 0x31(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x32(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_ClosestLocationInsideLeash");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_NearbyFactionMembers
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UFortQueryContext_NearbyFactionMembers : public UEnvQueryContext	
	{
	public:
		FScalableFloat NearbyFactionMemberDistance; // 0x28(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_NearbyFactionMembers");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_PlayspaceVolume
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortQueryContext_PlayspaceVolume : public UEnvQueryContext	
	{
	public:
		UClass* QueryLocationContext; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_PlayspaceVolume");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_QuerierController
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_QuerierController : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_QuerierController");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_TokenReservedPosition
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortQueryContext_TokenReservedPosition : public UEnvQueryContext	
	{
	public:
		UClass* TokenProviderContext; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_TokenReservedPosition");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_CoverPositionProvider
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UFortQueryGenerator_CoverPositionProvider : public UEnvQueryGenerator	
	{
	public:
		UClass* CoverPositionProviderContext; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_CoverPositionProvider");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_Floodfill
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x110 (0x160 - 0x50)
	class UFortQueryGenerator_Floodfill : public UEnvQueryGenerator	
	{
	public:
		UClass* CenterContext; // 0x50(0x8)
		FAIDataProviderIntValue MaximumNodeSearchProvider; // 0x58(0x38)
		FAIDataProviderFloatValue MaximumSearchRadiusProvider; // 0x90(0x38)
		FAIDataProviderFloatValue PointDensityProvider; // 0xC8(0x38)
		FAIDataProviderIntValue MaximumNumberOfPointProvider; // 0x100(0x38)
		UClass* FilterOverride; // 0x138(0x8)
		FVector ProjectExtent; // 0x140(0x18)
		FNavigationFilterFlags ExtraExcludeFlags; // 0x158(0x4)
		EFortQueryGeneratorFloodfillBehavior Behavior; // 0x15C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_Floodfill");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_GridInBox
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0xB8 (0x140 - 0x88)
	class UFortQueryGenerator_GridInBox : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		FAIDataProviderFloatValue BoxWidth; // 0x88(0x38)
		FAIDataProviderFloatValue BoxLength; // 0xC0(0x38)
		FAIDataProviderFloatValue SpaceBetween; // 0xF8(0x38)
		UClass* GenerateAround; // 0x130(0x8)
		UClass* BoxExtentsContext; // 0x138(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_GridInBox");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_GridInVolume
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x40 (0xC8 - 0x88)
	class UFortQueryGenerator_GridInVolume : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		FAIDataProviderFloatValue SpaceBetween; // 0x88(0x38)
		UClass* GenerateInVolume; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_GridInVolume");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_OnRectangle
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x130 (0x1B8 - 0x88)
	class UFortQueryGenerator_OnRectangle : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		FAIDataProviderFloatValue RectangleWidth; // 0x88(0x38)
		FAIDataProviderFloatValue RectangleLength; // 0xC0(0x38)
		EQueryGeneratorRectSpacingMethod SpacingMethod; // 0xF8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY
		FAIDataProviderIntValue NumberOfPointsOnWidth; // 0x100(0x38)
		FAIDataProviderIntValue NumberOfPointsOnLength; // 0x138(0x38)
		FAIDataProviderFloatValue SpaceBetween; // 0x170(0x38)
		UClass* LocationContext; // 0x1A8(0x8)
		UClass* RotationContext; // 0x1B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_OnRectangle");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_PointsOnLine
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0xE8 (0x170 - 0x88)
	class UFortQueryGenerator_PointsOnLine : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		UClass* GenerateFrom; // 0x88(0x8)
		FAIDataProviderFloatValue DistanceToFirstPoint; // 0x90(0x38)
		FAIDataProviderFloatValue DistanceBetweenPoints; // 0xC8(0x38)
		FAIDataProviderFloatValue MaxDistance; // 0x100(0x38)
		FEnvTraceData TraceData; // 0x138(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_PointsOnLine");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_PointsOutsideBox
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x128 (0x1B0 - 0x88)
	class UFortQueryGenerator_PointsOutsideBox : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		FAIDataProviderFloatValue SpaceBetween; // 0x88(0x38)
		FAIDataProviderFloatValue NumberOfRingsAroundVolume; // 0xC0(0x38)
		FAIDataProviderFloatValue ExtraXExtent; // 0xF8(0x38)
		FAIDataProviderFloatValue ExtraYExtent; // 0x130(0x38)
		FAIDataProviderFloatValue ExtraZExtent; // 0x168(0x38)
		UClass* GenerateInBoxCenter; // 0x1A0(0x8)
		UClass* GenerateInBoxExtent; // 0x1A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_PointsOutsideBox");
			return ret;
		}
	};


	// Class FortniteAIServer.FortTokenGenerator_TokenHintPositions
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0xC8 (0x118 - 0x50)
	class UFortTokenGenerator_TokenHintPositions : public UEnvQueryGenerator	
	{
	public:
		UClass* Center; // 0x50(0x8)
		FAIDataProviderFloatValue MaximumDistanceProvider; // 0x58(0x38)
		FAIDataProviderFloatValue HintPositionVerticalOffsetProvider; // 0x90(0x38)
		FScalableFloat MaximumDistance; // 0xC8(0x28)
		FScalableFloat HintPositionVerticalOffset; // 0xF0(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortTokenGenerator_TokenHintPositions");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_TokenProviderPositions
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x50 (0xA0 - 0x50)
	class UFortQueryGenerator_TokenProviderPositions : public UEnvQueryGenerator	
	{
	public:
		UClass* TokenProviderContext; // 0x50(0x8)
		FGameplayTagQuery GameplayTagQuery; // 0x58(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_TokenProviderPositions");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_TokenReservedPositions
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0xB0 (0x100 - 0x50)
	class UFortQueryGenerator_TokenReservedPositions : public UEnvQueryGenerator	
	{
	public:
		UClass* ActorContext; // 0x50(0x8)
		FGameplayTagQuery GameplayTagQuery; // 0x58(0x48)
		FAIDataProviderFloatValue MaximumDistanceFromQueryActorProvider; // 0xA0(0x38)
		FScalableFloat MaximumDistanceFromQueryActor; // 0xD8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_TokenReservedPositions");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_CoverPosition
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x10 (0x208 - 0x1F8)
	class UFortQueryTest_CoverPosition : public UEnvQueryTest	
	{
	public:
		UClass* CoverPositionProviderContext; // 0x1F8(0x8)
		UClass* TargetContext; // 0x200(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_CoverPosition");
			return ret;
		}
	};


	// Class FortniteAIServer.FortWorldConditionTimeOfDayState
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UFortWorldConditionTimeOfDayState : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0x28(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortWorldConditionTimeOfDayState");
			return ret;
		}

		void HandleTimeOfDayPhaseChange(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FAFEAE8(relative to base address)
	};


	// Class FortniteAIServer.PFWNPCReactions_Container
	// Inherited from UPersistenceFrameworkContainer -> UObject
	// Size: 0x20 (0x160 - 0x140)
	class UPFWNPCReactions_Container : public UPersistenceFrameworkContainer	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x140(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.PFWNPCReactions_Container");
			return ret;
		}
	};


	// Class FortniteAIServer.PFWNPCReactions_Module
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UPFWNPCReactions_Module : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.PFWNPCReactions_Module");
			return ret;
		}
	};


	// Class FortniteAIServer.PFWNPCReactions_Trigger
	// Inherited from UPersistenceFrameworkSaveTrigger_Manual -> UPersistenceFrameworkSaveTrigger -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UPFWNPCReactions_Trigger : public UPersistenceFrameworkSaveTrigger_Manual	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.PFWNPCReactions_Trigger");
			return ret;
		}
	};


	// Class FortniteAIServer.PFWNPCReactions_FilteredListContainer
	// Inherited from UPersistenceFrameworkFilteredListContainer -> UObject
	// Size: 0xC0 (0x210 - 0x150)
	class UPFWNPCReactions_FilteredListContainer : public UPersistenceFrameworkFilteredListContainer	
	{
	public:
		unsigned char UnknownData00_1[0xC0]; // 0x150(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.PFWNPCReactions_FilteredListContainer");
			return ret;
		}
	};


	// Class FortniteAIServer.FortGameFeatureAction_InjectAIEvaluators
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFortGameFeatureAction_InjectAIEvaluators : public UGameFeatureAction	
	{
	public:
		TArray<FGameFeatureFortAIEvaluatorEntry> AIEvaluatorList; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortGameFeatureAction_InjectAIEvaluators");
			return ret;
		}
	};


	// Class FortniteAIServer.FortEnvQueryGenerator_ProjectedPoints
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x90 - 0x88)
	class UFortEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		FName OverridenAgentNameForNavmesh; // 0x88(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortEnvQueryGenerator_ProjectedPoints");
			return ret;
		}
	};


	// Class FortniteAIServer.FortEnvQueryGenerator_SimpleGrid
	// Inherited from UFortEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0xB0 (0x140 - 0x90)
	class UFortEnvQueryGenerator_SimpleGrid : public UFortEnvQueryGenerator_ProjectedPoints	
	{
	public:
		FAIDataProviderFloatValue GridSize; // 0x90(0x38)
		FAIDataProviderFloatValue SpaceBetween; // 0xC8(0x38)
		FAIDataProviderFloatValue RandomDisplacementRatio; // 0x100(0x38)
		UClass* GenerateAround; // 0x138(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortEnvQueryGenerator_SimpleGrid");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTService_ContextOverride
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UFortBTService_ContextOverride : public UBTService	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTService_ContextOverride");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTContext_MoveUrgency
	// Inherited from UFortBTService_ContextOverride -> UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x30 (0xA0 - 0x70)
	class UFortBTContext_MoveUrgency : public UFortBTService_ContextOverride	
	{
	public:
		FValueOrBBKey_Enum MoveUrgencyValue; // 0x70(0x28)
		TEnumAsByte<EFortMovementUrgency> MoveUrgency; // 0x98(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTContext_MoveUrgency");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTContext_SkipNotPerceivedGoals
	// Inherited from UFortBTService_ContextOverride -> UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UFortBTContext_SkipNotPerceivedGoals : public UFortBTService_ContextOverride	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTContext_SkipNotPerceivedGoals");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTContext_SuppressGoalUpdate
	// Inherited from UFortBTService_ContextOverride -> UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFortBTContext_SuppressGoalUpdate : public UFortBTService_ContextOverride	
	{
	public:
		bool bUnregisterFromGoalManager; // 0x70(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTContext_SuppressGoalUpdate");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_Affiliation
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x58 (0xC0 - 0x68)
	class UFortBTDecorator_Affiliation : public UBTDecorator	
	{
	public:
		FBlackboardKeySelector FirstActorKey; // 0x68(0x28)
		FBlackboardKeySelector SecondActorKey; // 0x90(0x28)
		uint32_t AcceptedAffiliations; // 0xB8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_Affiliation");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_CanBeConsideredAirborne
	// Inherited from UBTDecorator_BlackboardBase -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UFortBTDecorator_CanBeConsideredAirborne : public UBTDecorator_BlackboardBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_CanBeConsideredAirborne");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_DistanceBetween
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x80 (0xE8 - 0x68)
	class UFortBTDecorator_DistanceBetween : public UBTDecorator	
	{
	public:
		TEnumAsByte<EArithmeticKeyOperation> Operator; // 0x68(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		FBlackboardKeySelector BlackboardKeyA; // 0x70(0x28)
		FBlackboardKeySelector BlackboardKeyB; // 0x98(0x28)
		FValueOrBBKey_Float SpecifiedDistance; // 0xC0(0xC)
		bool bUseSelf : 1; // 0xCC:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0xCD(0x3) UNKNOWN PROPERTY
		FValueOrBBKey_Bool bCalculateAs2D; // 0xD0(0xC)
		FValueOrBBKey_Float DistanceCalculationUpdateRate; // 0xDC(0xC)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_DistanceBetween");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_GameplayAbility_CanActivate
	// Inherited from UFortBTDecorator_QueryGameplayAbility -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x168 - 0x168)
	class UFortBTDecorator_GameplayAbility_CanActivate : public UFortBTDecorator_QueryGameplayAbility	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_GameplayAbility_CanActivate");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_GameplayAbility_CanHitTarget
	// Inherited from UFortBTDecorator_QueryGameplayAbility -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x10 (0x178 - 0x168)
	class UFortBTDecorator_GameplayAbility_CanHitTarget : public UFortBTDecorator_QueryGameplayAbility	
	{
	public:
		FValueOrBBKey_Bool UseIdealYawRotationToTargetValue; // 0x168(0xC)
		bool UseIdealYawRotationToTarget : 1; // 0x174:0(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x175(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_GameplayAbility_CanHitTarget");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_GameplayAbility_CompareDistance
	// Inherited from UFortBTDecorator_QueryGameplayAbility -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x10 (0x178 - 0x168)
	class UFortBTDecorator_GameplayAbility_CompareDistance : public UFortBTDecorator_QueryGameplayAbility	
	{
	public:
		TArray<FDistanceToTargetComparison> DistanceComparisons; // 0x168(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_GameplayAbility_CompareDistance");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags
	// Inherited from UFortBTDecorator_QueryGameplayAbility -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x168 - 0x168)
	class UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags : public UFortBTDecorator_QueryGameplayAbility	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_GameplayAbility_HasGameplayAbility
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0xC8 (0x130 - 0x68)
	class UFortBTDecorator_GameplayAbility_HasGameplayAbility : public UBTDecorator	
	{
	public:
		FValueOrBBKey_Object AbilityOwningActor; // 0x68(0x18)
		FValueOrBBKey_GameplayTagContainer GameplayAbilityTagContainer; // 0x80(0x28)
		FValueOrBBKey_Bool OnlyTestActiveAbility; // 0xA8(0xC)
		unsigned char UnknownData00_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FBlackboardKeySelector AbilityOwningActorKey; // 0xB8(0x28)
		FGameplayTagContainer GameplayAbilityTag; // 0xE0(0x20)
		FBlackboardKeySelector GameplayAbilityTagBlackboardKey; // 0x100(0x28)
		bool bOnlyTestActiveAbility; // 0x128(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x129(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_GameplayAbility_HasGameplayAbility");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_GameplayAbility_HasNearbyPawns
	// Inherited from UFortBTDecorator_QueryGameplayAbility -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x30 (0x198 - 0x168)
	class UFortBTDecorator_GameplayAbility_HasNearbyPawns : public UFortBTDecorator_QueryGameplayAbility	
	{
	public:
		FValueOrBBKey_Float NearbyPawnDistanceValue; // 0x168(0xC)
		FValueOrBBKey_Bool FilterAIPawns; // 0x174(0xC)
		FValueOrBBKey_Bool FilterPlayerPawns; // 0x180(0xC)
		float NearbyPawnDistance; // 0x18C(0x4)
		bool bFilterAIPawns; // 0x190(0x1)
		bool bFilterPlayerPawns; // 0x191(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x192(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_GameplayAbility_HasNearbyPawns");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_GameplayAbility_IsClosestPawnInRange
	// Inherited from UFortBTDecorator_QueryGameplayAbility -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x30 (0x198 - 0x168)
	class UFortBTDecorator_GameplayAbility_IsClosestPawnInRange : public UFortBTDecorator_QueryGameplayAbility	
	{
	public:
		FValueOrBBKey_Float NearbyPawnDistanceValue; // 0x168(0xC)
		FValueOrBBKey_Bool FilterAIPawns; // 0x174(0xC)
		FValueOrBBKey_Bool FilterPlayerPawns; // 0x180(0xC)
		float NearbyPawnDistance; // 0x18C(0x4)
		bool bFilterAIPawns; // 0x190(0x1)
		bool bFilterPlayerPawns; // 0x191(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x192(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsClosestPawnInRange");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_GameplayAbility_IsOnCooldown
	// Inherited from UFortBTDecorator_QueryGameplayAbility -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x168 - 0x168)
	class UFortBTDecorator_GameplayAbility_IsOnCooldown : public UFortBTDecorator_QueryGameplayAbility	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsOnCooldown");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget
	// Inherited from UFortBTDecorator_QueryGameplayAbility -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x168 - 0x168)
	class UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget : public UFortBTDecorator_QueryGameplayAbility	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange
	// Inherited from UFortBTDecorator_QueryGameplayAbility -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x168 - 0x168)
	class UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange : public UFortBTDecorator_QueryGameplayAbility	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_IsGoalPawn
	// Inherited from UBTDecorator_BlackboardBase -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UFortBTDecorator_IsGoalPawn : public UBTDecorator_BlackboardBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_IsGoalPawn");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_IsInBotEndGame
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x68 - 0x68)
	class UFortBTDecorator_IsInBotEndGame : public UBTDecorator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_IsInBotEndGame");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_IsMoving
	// Inherited from UFortBTDecorator_QueryGameplayAbility -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x70 (0x1D8 - 0x168)
	class UFortBTDecorator_IsMoving : public UFortBTDecorator_QueryGameplayAbility	
	{
	public:
		FValueOrBBKey_Float UpdateIntervalValue; // 0x168(0xC)
		FValueOrBBKey_Float MinTimeValue; // 0x174(0xC)
		bool bUseMinDist; // 0x180(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x181(0x3) UNKNOWN PROPERTY
		FValueOrBBKey_Float UseMinDistToTargetTime; // 0x184(0xC)
		FDistanceToTargetComparison MinDistanceComparison; // 0x190(0x38)
		float UpdateInterval; // 0x1C8(0x4)
		float MinTime; // 0x1CC(0x4)
		float MinDistMinTime; // 0x1D0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1D4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_IsMoving");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_IsTakerAirborne
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x68 - 0x68)
	class UFortBTDecorator_IsTakerAirborne : public UBTDecorator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_IsTakerAirborne");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTDecorator_WeaponStatus
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x30 (0x98 - 0x68)
	class UFortBTDecorator_WeaponStatus : public UBTDecorator	
	{
	public:
		float WeaponStatusUpdateRate; // 0x68(0x4)
		bool bTestIfCurrentWeaponIsValid : 1; // 0x6C:0(0x1)
		bool bCurrentWeaponShouldBeValid : 1; // 0x6C:1(0x1)
		bool bTestAllowedCurrentWeaponTags : 1; // 0x6C:2(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		FGameplayTagContainer AllowedCurrentWeaponTags; // 0x70(0x20)
		bool bTestIfCurrentWeaponIsReloading : 1; // 0x90:0(0x1)
		bool bCurrentWeaponShouldBeReloading : 1; // 0x90:1(0x1)
		bool bTestIfCurrentWeaponHasAmmoInMagazine : 1; // 0x90:2(0x1)
		bool bCurrentWeaponShouldHaveAmmoInMagazine : 1; // 0x90:3(0x1)
		bool bTestIfCurrentWeaponHasExtraAmmo : 1; // 0x90:4(0x1)
		bool bCurrentWeaponShouldHaveExtraAmmo : 1; // 0x90:5(0x1)
		bool bAllInterestedTestsMustPass : 1; // 0x90:6(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x91(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTDecorator_WeaponStatus");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTService_ActivateAbility
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x60 (0xD0 - 0x70)
	class UFortBTService_ActivateAbility : public UBTService	
	{
	public:
		FGameplayTagContainer AbilityTags; // 0x70(0x20)
		bool bRequireCanHitTargetWithAbility; // 0x90(0x1)
		bool bPawnTargetsOnly; // 0x91(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x92(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer ProhibitedTargetTags; // 0x98(0x20)
		bool bCanActivateWhenMoving; // 0xB8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		TArray<FDistanceToTargetComparison> DistanceChecks; // 0xC0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTService_ActivateAbility");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTService_UpdateBotMissionBuilding
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x50 (0xC0 - 0x70)
	class UFortBTService_UpdateBotMissionBuilding : public UBTService	
	{
	public:
		FBlackboardKeySelector InterestLocationKey; // 0x70(0x28)
		FBlackboardKeySelector BuildOrderKey; // 0x98(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTService_UpdateBotMissionBuilding");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTService_UpdateBotMissionGoal
	// Inherited from UBTService_BlackboardBase -> UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x8 (0xA0 - 0x98)
	class UFortBTService_UpdateBotMissionGoal : public UBTService_BlackboardBase	
	{
	public:
		bool bRequireInteraction : 1; // 0x98:0(0x1)
		bool bRequireInteractionOrLocator : 1; // 0x98:1(0x1)
		bool bRequireEncounter : 1; // 0x98:2(0x1)
		bool bPickClosest : 1; // 0x98:3(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTService_UpdateBotMissionGoal");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTTask_BotMissionBuild
	// Inherited from UBTTask_BlackboardBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x0 (0x98 - 0x98)
	class UFortBTTask_BotMissionBuild : public UBTTask_BlackboardBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTTask_BotMissionBuild");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTTask_BotMissionInteract
	// Inherited from UBTTask_BlackboardBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x0 (0x98 - 0x98)
	class UFortBTTask_BotMissionInteract : public UBTTask_BlackboardBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTTask_BotMissionInteract");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTTask_ExecuteGameplayAbility
	// Inherited from UBTTask_GameplayTaskBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x70 (0xF0 - 0x80)
	class UFortBTTask_ExecuteGameplayAbility : public UBTTask_GameplayTaskBase	
	{
	public:
		FValueOrBBKey_GameplayTagContainer GameplayAbilityTagContainer; // 0x80(0x28)
		FGameplayTagContainer GameplayAbilityTag; // 0xA8(0x20)
		FBlackboardKeySelector GameplayAbilityTagBlackboardKey; // 0xC8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTTask_ExecuteGameplayAbility");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTTask_GameMoveTo
	// Inherited from UBTTask_MoveTo -> UBTTask_BlackboardBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x70 (0x1A0 - 0x130)
	class UFortBTTask_GameMoveTo : public UBTTask_MoveTo	
	{
	public:
		FBlackboardKeySelector FocalPointWhileMoving; // 0x130(0x28)
		TEnumAsByte<EPathObstacleAction> PathObstacleAction; // 0x158(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x159(0x7) UNKNOWN PROPERTY
		UClass* PushBumpedPawnClass; // 0x160(0x8)
		FGameplayTag NavFilterTag; // 0x168(0x4)
		bool bDetectUnexpectedPathBlockingObstacles : 1; // 0x16C:0(0x1)
		bool bEnableSlowdownAtGoal : 1; // 0x16C:1(0x1)
		bool bStopAtGoal : 1; // 0x16C:2(0x1)
		bool bFinishMoveOnOverlap : 1; // 0x16C:3(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x16D(0x3) UNKNOWN PROPERTY
		FBlackboardKeySelector AcceptableRadiusKey; // 0x170(0x28)
		bool bDeimosFlavor : 1; // 0x198:0(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x199(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTTask_GameMoveTo");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTTask_GameMoveDirectlyToward
	// Inherited from UFortBTTask_GameMoveTo -> UBTTask_MoveTo -> UBTTask_BlackboardBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x0 (0x1A0 - 0x1A0)
	class UFortBTTask_GameMoveDirectlyToward : public UFortBTTask_GameMoveTo	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTTask_GameMoveDirectlyToward");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTTask_RequestUndermining
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UFortBTTask_RequestUndermining : public UBTTaskNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTTask_RequestUndermining");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTTask_RotateToFaceBBEntryWithTags
	// Inherited from UBTTask_RotateToFaceBBEntry -> UBTTask_BlackboardBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UFortBTTask_RotateToFaceBBEntryWithTags : public UBTTask_RotateToFaceBBEntry	
	{
	public:
		FGameplayTagContainer TagsToApply; // 0xA8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTTask_RotateToFaceBBEntryWithTags");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTTask_RunDynamicStateTree
	// Inherited from UBTTask_RunDynamicStateTree -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x0 (0xC8 - 0xC8)
	class UFortBTTask_RunDynamicStateTree : public UBTTask_RunDynamicStateTree	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTTask_RunDynamicStateTree");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTTask_SetFrustrationDiscouragement
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFortBTTask_SetFrustrationDiscouragement : public UBTTaskNode	
	{
	public:
		float DiscouragementDuration; // 0x70(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTTask_SetFrustrationDiscouragement");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTTask_Sleep
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UFortBTTask_Sleep : public UBTTaskNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTTask_Sleep");
			return ret;
		}
	};


	// Class FortniteAIServer.FortBTTask_TakerMoveToNavmesh
	// Inherited from UBTTask_MoveTo -> UBTTask_BlackboardBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x0 (0x130 - 0x130)
	class UFortBTTask_TakerMoveToNavmesh : public UBTTask_MoveTo	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortBTTask_TakerMoveToNavmesh");
			return ret;
		}
	};


	// Class FortniteAIServer.FortEQSPrevisActor
	// Inherited from AActor -> UObject
	// Size: 0x38 (0x2C8 - 0x290)
	class AFortEQSPrevisActor : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x290(0x10) UNKNOWN PROPERTY
		USceneComponent* SceneRoot; // 0x2A0(0x8)
		FGameplayTagContainer GameplayTags; // 0x2A8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortEQSPrevisActor");
			return ret;
		}

		void SetQueryTemplate(UEnvQuery* InPrevisQueryTemplate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void PrepForPrevis(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FortniteAIServer.FortQueryContext_AIPawnSpawnLocation
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_AIPawnSpawnLocation : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_AIPawnSpawnLocation");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_AllBots
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UFortQueryContext_AllBots : public UEnvQueryContext	
	{
	public:
		bool bIncludeOnlyAthenaGameParticipantBots; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery BotTagQuery; // 0x30(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_AllBots");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_AllEnemies
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_AllEnemies : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_AllEnemies");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_AllGoals
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_AllGoals : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_AllGoals");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_AllPlayers
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_AllPlayers : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_AllPlayers");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_AllPOIVolumes
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x48 (0x70 - 0x28)
	class UFortQueryContext_AllPOIVolumes : public UEnvQueryContext	
	{
	public:
		FGameplayTagQuery VolumeLocationTagQuery; // 0x28(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_AllPOIVolumes");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneCenter
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_AthenaCurrentSafeZoneCenter : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneCenter");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_AthenaSafeZonePredictedLocation
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_AthenaSafeZonePredictedLocation : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_AthenaSafeZonePredictedLocation");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_BlackboardKeyLeader
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_BlackboardKeyLeader : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_BlackboardKeyLeader");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_BuildingRifts
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_BuildingRifts : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_BuildingRifts");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_EncounterFallbackTarget
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_EncounterFallbackTarget : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_EncounterFallbackTarget");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_EncounterGoalsCenterLocation
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_EncounterGoalsCenterLocation : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_EncounterGoalsCenterLocation");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_EncounterGoalsOnGround
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_EncounterGoalsOnGround : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_EncounterGoalsOnGround");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_EncounterPrimaryAssignmentGoals
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_EncounterPrimaryAssignmentGoals : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_EncounterPrimaryAssignmentGoals");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_EncounterProvidedQueryLocations
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_EncounterProvidedQueryLocations : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_EncounterProvidedQueryLocations");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_EncounterQueryActor
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_EncounterQueryActor : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_EncounterQueryActor");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_EncounterRandomDirection
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_EncounterRandomDirection : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_EncounterRandomDirection");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_EncounterTargetObjective
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_EncounterTargetObjective : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_EncounterTargetObjective");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_Goal
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_Goal : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_Goal");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_GoalProviderRootAssignmentGoals
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_GoalProviderRootAssignmentGoals : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_GoalProviderRootAssignmentGoals");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_Goal_SpawnLocation
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_Goal_SpawnLocation : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_Goal_SpawnLocation");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_NearbyAIPawns
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_NearbyAIPawns : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_NearbyAIPawns");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_NearbyAIPawnsMoveDestinations
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_NearbyAIPawnsMoveDestinations : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_NearbyAIPawnsMoveDestinations");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawns
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_NearbyFriendlyAIPawns : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawns");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_NearbyFriends
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_NearbyFriends : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_NearbyFriends");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_PlayerSpawnPad
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_PlayerSpawnPad : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_PlayerSpawnPad");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_RandomDirectionXY
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_RandomDirectionXY : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_RandomDirectionXY");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_StWStormShield
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_StWStormShield : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_StWStormShield");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_TwoPointSolverPointA
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_TwoPointSolverPointA : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_TwoPointSolverPointA");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_TwoPointSolverRotationA
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_TwoPointSolverRotationA : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_TwoPointSolverRotationA");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryData_CurvesAroundLine
	// Inherited from UDataAsset -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UFortQueryData_CurvesAroundLine : public UDataAsset	
	{
	public:
		FFortPointsOnCurve PointsOnSideA; // 0x30(0x30)
		FFortPointsOnCurve PointsOnSideB; // 0x60(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryData_CurvesAroundLine");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_ActorsAround
	// Inherited from UEnvQueryGenerator_ActorsOfClass -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x0 (0xD0 - 0xD0)
	class UFortQueryGenerator_ActorsAround : public UEnvQueryGenerator_ActorsOfClass	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_ActorsAround");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_Allies
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortQueryGenerator_Allies : public UEnvQueryGenerator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_Allies");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_AssignmentGoal
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortQueryGenerator_AssignmentGoal : public UEnvQueryGenerator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_AssignmentGoal");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_BuildingRifts
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortQueryGenerator_BuildingRifts : public UEnvQueryGenerator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_BuildingRifts");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_Buildings
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x1D8 (0x228 - 0x50)
	class UFortQueryGenerator_Buildings : public UEnvQueryGenerator	
	{
	public:
		FFortAIAssignmentIdentifier AssignmentIdentifier; // 0x50(0x30)
		UFortAIAssignmentSettings* AssignmentSettings; // 0x80(0x8)
		UClass* BuildingGridVolumeCenter; // 0x88(0x8)
		FAIDataProviderIntValue HorizontalBuildingCellRadius; // 0x90(0x38)
		FAIDataProviderIntValue BuildingCellsAbove; // 0xC8(0x38)
		FAIDataProviderIntValue BuildingCellsBelow; // 0x100(0x38)
		FAIDataProviderBoolValue bIncludeWalls; // 0x138(0x38)
		FAIDataProviderBoolValue bIncludeFloors; // 0x170(0x38)
		TArray<EFloorPatternType> FloorPatternsToIgnore; // 0x1A8(0x10)
		FAIDataProviderBoolValue bIncludeCenterCell; // 0x1B8(0x38)
		FAIDataProviderIntValue MaxBuildingActorsPerVolumeCenterToCollect; // 0x1F0(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_Buildings");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_BuildingsOnCachedPath
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0xB0 (0x100 - 0x50)
	class UFortQueryGenerator_BuildingsOnCachedPath : public UEnvQueryGenerator	
	{
	public:
		UClass* CachedPathSource; // 0x50(0x8)
		FAIDataProviderBoolValue bIncludeWalls; // 0x58(0x38)
		FAIDataProviderBoolValue bIncludeFloors; // 0x90(0x38)
		FAIDataProviderBoolValue bIncludeCenterCell; // 0xC8(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_BuildingsOnCachedPath");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_EncounterTargets
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortQueryGenerator_EncounterTargets : public UEnvQueryGenerator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_EncounterTargets");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_Enemies
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x80 (0xD0 - 0x50)
	class UFortQueryGenerator_Enemies : public UEnvQueryGenerator	
	{
	public:
		bool bPerceivedEnemiesOnly; // 0x50(0x1)
		bool bSleepCapableAIUsePerceivedEnemiesOnly; // 0x51(0x1)
		bool bIgnoreDBNOPawns; // 0x52(0x1)
		bool bIgnoreSleepingAIs; // 0x53(0x1)
		bool bAddEnemiesFromAbilityRange; // 0x54(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x55(0x3) UNKNOWN PROPERTY
		FGameplayTagContainer AbilityTags; // 0x58(0x20)
		FGameplayTagContainer DistanceTags; // 0x78(0x20)
		FAIDataProviderFloatValue MaxTimeSincePerceived; // 0x98(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_Enemies");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_GoalActorsOfClass
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x48 (0x98 - 0x50)
	class UFortQueryGenerator_GoalActorsOfClass : public UEnvQueryGenerator	
	{
	public:
		UClass* SearchedActorClass; // 0x50(0x8)
		FAIDataProviderFloatValue SearchRadius; // 0x58(0x38)
		UClass* SearchCenter; // 0x90(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_GoalActorsOfClass");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_GoalOnCircle
	// Inherited from UEnvQueryGenerator_OnCircle -> UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x40 (0x260 - 0x220)
	class UFortQueryGenerator_GoalOnCircle : public UEnvQueryGenerator_OnCircle	
	{
	public:
		bool bIncludeCenterActorInGeneratedGoals; // 0x220(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x221(0x7) UNKNOWN PROPERTY
		UFortAIAssignmentSettings* OptionalAssignmentSettings; // 0x228(0x8)
		FFortAIAssignmentIdentifier OptionalAssignmentIdentifier; // 0x230(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_GoalOnCircle");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_GoalPlayerPawns
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UFortQueryGenerator_GoalPlayerPawns : public UEnvQueryGenerator	
	{
	public:
		bool bOnlyAthenaGameParticipants; // 0x50(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_GoalPlayerPawns");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_GoalTrackableAIObjects
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x80 (0xD0 - 0x50)
	class UFortQueryGenerator_GoalTrackableAIObjects : public UEnvQueryGenerator	
	{
	public:
		FFortAIAssignmentIdentifier AssignmentIdentifier; // 0x50(0x30)
		UClass* SearchedActorClass; // 0x80(0x8)
		FGameplayTag RequiredTag; // 0x88(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		FAIDataProviderFloatValue SearchRadius; // 0x90(0x38)
		UClass* SearchCenter; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_GoalTrackableAIObjects");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_HotspotSlots
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x50 (0xA0 - 0x50)
	class UFortQueryGenerator_HotspotSlots : public UEnvQueryGenerator	
	{
	public:
		UClass* GenerateAround; // 0x50(0x8)
		FAIDataProviderFloatValue Radius; // 0x58(0x38)
		bool bUseTetherZone : 1; // 0x90:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		UClass* HotspotClass; // 0x98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_HotspotSlots");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_InfluenceMapPoints
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x48 (0xD0 - 0x88)
	class UFortQueryGenerator_InfluenceMapPoints : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		FAIDataProviderIntValue Density; // 0x88(0x38)
		bool bOnlyFlatSurface : 1; // 0xC0:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY
		UClass* GenerateAround; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_InfluenceMapPoints");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_LootGoalsAthena
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0xD8 (0x128 - 0x50)
	class UFortQueryGenerator_LootGoalsAthena : public UEnvQueryGenerator	
	{
	public:
		FFortAIAssignmentIdentifier AssignmentIdentifier; // 0x50(0x30)
		UFortAIAssignmentSettings* AssignmentSettings; // 0x80(0x8)
		FAIDataProviderFloatValue HorizontalHalfExtents; // 0x88(0x38)
		FAIDataProviderFloatValue VerticalHalfExtents; // 0xC0(0x38)
		UClass* SearchCenter; // 0xF8(0x8)
		bool bAvailableLootOnly : 1; // 0x100:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer ExcludedAILootGameplayTags; // 0x108(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_LootGoalsAthena");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_MissionPlacementActors
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x48 (0x98 - 0x50)
	class UFortQueryGenerator_MissionPlacementActors : public UEnvQueryGenerator	
	{
	public:
		FGameplayTagQuery MissionPlacementActorTagQuery; // 0x50(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_MissionPlacementActors");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_MutatorActorQueryResults
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortQueryGenerator_MutatorActorQueryResults : public UEnvQueryGenerator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_MutatorActorQueryResults");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_MutatorBaseQueryResults
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortQueryGenerator_MutatorBaseQueryResults : public UEnvQueryGenerator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_MutatorBaseQueryResults");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_PerceivedActors
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0xD8 (0x128 - 0x50)
	class UFortQueryGenerator_PerceivedActors : public UEnvQueryGenerator	
	{
	public:
		bool bGenerateHostileActorGoal; // 0x50(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		FFortQueryGenerator_PerceivedActors_Settings HostileActorSettings; // 0x58(0x40)
		bool bGenerateNeutralActorGoal; // 0x98(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
		FFortQueryGenerator_PerceivedActors_Settings NeutralActorSettings; // 0xA0(0x40)
		bool bGenerateFriendlyActorGoal; // 0xE0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xE1(0x7) UNKNOWN PROPERTY
		FFortQueryGenerator_PerceivedActors_Settings FriendlyActorSettings; // 0xE8(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_PerceivedActors");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_PointsAroundLine
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x98 (0x120 - 0x88)
	class UFortQueryGenerator_PointsAroundLine : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		UClass* GenerateAround; // 0x88(0x8)
		FAIDataProviderIntValue MaxPointsPerClusterLocation; // 0x90(0x38)
		FAIDataProviderFloatValue ClusterRadius; // 0xC8(0x38)
		TWeakObjectPtr<UFortQueryData_CurvesAroundLine*> CurvesAroundLineAsset; // 0x100(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_PointsAroundLine");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_PointsFromNavGraph
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x150 (0x1D8 - 0x88)
	class UFortQueryGenerator_PointsFromNavGraph : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		FAIDataProviderFloatValue MinPathDistance; // 0x88(0x38)
		FAIDataProviderFloatValue MaxPathDistance; // 0xC0(0x38)
		FAIDataProviderIntValue Density; // 0xF8(0x38)
		FAIDataProviderFloatValue ExploreDirectionYaw; // 0x130(0x38)
		FEnvDirection ExploreDirection; // 0x168(0x20)
		float ExploreAngleDot; // 0x188(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x18C(0x4) UNKNOWN PROPERTY
		FAIDataProviderFloatValue ExploreInnerRadius; // 0x190(0x38)
		bool bLimitExplorationDirection : 1; // 0x1C8:0(0x1)
		bool bOnlyFlatSurface : 1; // 0x1C8:1(0x1)
		bool bUseParameterizedDirection : 1; // 0x1C8:2(0x1)
		bool bUseHeightCheck : 1; // 0x1C8:3(0x1)
		bool bFilterAllowTerrain : 1; // 0x1C8:4(0x1)
		bool bFilterAllowBuildings : 1; // 0x1C8:5(0x1)
		bool bFilterAllowDropdown : 1; // 0x1C8:6(0x1)
		bool bFilterAllowClimbup : 1; // 0x1C8:7(0x1)
		bool bFilterAllowSmash : 1; // 0x1C9:0(0x1)
		unsigned char UnknownData01_5[0x2]; // 0x1CA(0x2) UNKNOWN PROPERTY
		TEnumAsByte<EFortPointsFromNavGraphGoalPathDistanceFilterOperator> PathDistanceFilterOperator; // 0x1CC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1CD(0x3) UNKNOWN PROPERTY
		UClass* GenerateAround; // 0x1D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_PointsFromNavGraph");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_PointsInVolume
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x48 (0x98 - 0x50)
	class UFortQueryGenerator_PointsInVolume : public UEnvQueryGenerator	
	{
	public:
		FAIDataProviderIntValue NumberOfPoints; // 0x50(0x38)
		TEnumAsByte<EFortNamedNavmesh> NavMeshToUse; // 0x88(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x89(0x7) UNKNOWN PROPERTY
		UClass* GenerateIn; // 0x90(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_PointsInVolume");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_PointsOnBuildingActors
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x1C8 (0x250 - 0x88)
	class UFortQueryGenerator_PointsOnBuildingActors : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		FAIDataProviderFloatValue BoundingBoxExtentXY; // 0x88(0x38)
		FAIDataProviderFloatValue BoundingBoxExtentZ; // 0xC0(0x38)
		FAIDataProviderFloatValue PointDensity; // 0xF8(0x38)
		FAIDataProviderIntValue MaxGeneratedPoints; // 0x130(0x38)
		FFortTaggedActorOctreeFilter ActorLookupFilter; // 0x168(0xA8)
		FAIDataProviderFloatValue RandomChanceToSkip; // 0x210(0x38)
		UClass* GenerateAround; // 0x248(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_PointsOnBuildingActors");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_PointsOnBuildingGrid
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x80 (0x108 - 0x88)
	class UFortQueryGenerator_PointsOnBuildingGrid : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		FAIDataProviderIntValue HorizontalGridSize; // 0x88(0x38)
		FAIDataProviderIntValue VerticalGridSize; // 0xC0(0x38)
		bool bStartGridFromBottom; // 0xF8(0x1)
		bool bUsePointInVerticalCenterOfCell; // 0xF9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xFA(0x6) UNKNOWN PROPERTY
		UClass* GenerateAround; // 0x100(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_PointsOnBuildingGrid");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_PointsOnWaterShoreLine
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x60 (0xE8 - 0x88)
	class UFortQueryGenerator_PointsOnWaterShoreLine : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		UClass* GenerateAround; // 0x88(0x8)
		TWeakObjectPtr<UFortQueryData_CurvesAroundLine*> CurvesAroundLineAsset; // 0x90(0x20)
		FAIDataProviderFloatValue SegmentMaximumVerticalDegreeAngle; // 0xB0(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_PointsOnWaterShoreLine");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_RandomPointsInBoundingVolume
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x40 (0xC8 - 0x88)
	class UFortQueryGenerator_RandomPointsInBoundingVolume : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		UClass* GenerateIn; // 0x88(0x8)
		FAIDataProviderFloatValue RandomPointsCount; // 0x90(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_RandomPointsInBoundingVolume");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_SpecificAssignmentGoals
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x40 (0x90 - 0x50)
	class UFortQueryGenerator_SpecificAssignmentGoals : public UEnvQueryGenerator	
	{
	public:
		FFortAIAssignmentIdentifier AssignmentIdentifier; // 0x50(0x30)
		UFortAIAssignmentSettings* AssignmentSettings; // 0x80(0x8)
		UClass* GoalProvider; // 0x88(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_SpecificAssignmentGoals");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_SquadMembers
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x118 (0x168 - 0x50)
	class UFortQueryGenerator_SquadMembers : public UEnvQueryGenerator	
	{
	public:
		FAIDataProviderBoolValue LookingForHumanPlayers; // 0x50(0x38)
		FAIDataProviderBoolValue LookingForPlayerBots; // 0x88(0x38)
		FAIDataProviderBoolValue LookingForNpcs; // 0xC0(0x38)
		FAIDataProviderBoolValue LookingForAiPawns; // 0xF8(0x38)
		FAIDataProviderBoolValue IncludeSelf; // 0x130(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_SquadMembers");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_TerrainDonut
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0xF0 (0x140 - 0x50)
	class UFortQueryGenerator_TerrainDonut : public UEnvQueryGenerator	
	{
	public:
		UClass* Center; // 0x50(0x8)
		FAIDataProviderFloatValue Radius; // 0x58(0x38)
		FAIDataProviderFloatValue RadiusWidth; // 0x90(0x38)
		FAIDataProviderFloatValue SpacingArc; // 0xC8(0x38)
		FAIDataProviderIntValue NumRings; // 0x100(0x38)
		bool bFilterAllowTerrain : 1; // 0x138:0(0x1)
		bool bFilterAllowBuildings : 1; // 0x138:1(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x139(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_TerrainDonut");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryGenerator_ValidSpawnRiftActors
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x38 (0x88 - 0x50)
	class UFortQueryGenerator_ValidSpawnRiftActors : public UEnvQueryGenerator	
	{
	public:
		FAIDataProviderIntValue NumAIForGroup; // 0x50(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryGenerator_ValidSpawnRiftActors");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryItemType_PointOrSlot
	// Inherited from UEnvQueryItemType_Point -> UEnvQueryItemType_VectorBase -> UEnvQueryItemType -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortQueryItemType_PointOrSlot : public UEnvQueryItemType_Point	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryItemType_PointOrSlot");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalBase
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x70 (0x268 - 0x1F8)
	class UFortQueryTest_GoalBase : public UEnvQueryTest	
	{
	public:
		bool bScoreEnemies : 1; // 0x1F8:0(0x1)
		bool bScoreEncounterGoals : 1; // 0x1F8:1(0x1)
		bool bScoreWorldGoals : 1; // 0x1F8:2(0x1)
		bool bScoreSpecificAssignments : 1; // 0x1F8:3(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY
		TArray<FFortAIAssignmentIdentifier> AssignmentIDs; // 0x200(0x10)
		TArray<FFortAIAssignmentIdentifier> ProhibitedAssignmentIDs; // 0x210(0x10)
		FGameplayTagQuery GoalActorTagQuery; // 0x220(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalBase");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_AssignmentTypeInterest
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x1C0 (0x428 - 0x268)
	class UFortQueryTest_AssignmentTypeInterest : public UFortQueryTest_GoalBase	
	{
	public:
		FAIDataProviderFloatValue InvalidTypeStartInterest; // 0x268(0x38)
		FAIDataProviderFloatValue InvalidTypeEndInterest; // 0x2A0(0x38)
		FAIDataProviderFloatValue InvalidTypeTimeBeforeLerp; // 0x2D8(0x38)
		FAIDataProviderFloatValue InvalidTypeLerpDuration; // 0x310(0x38)
		FAIDataProviderFloatValue ValidTypeStartInterest; // 0x348(0x38)
		FAIDataProviderFloatValue ValidTypeEndInterest; // 0x380(0x38)
		FAIDataProviderFloatValue ValidTypeTimeBeforeLerp; // 0x3B8(0x38)
		FAIDataProviderFloatValue ValidTypeLerpDuration; // 0x3F0(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_AssignmentTypeInterest");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_BuildingCriteria
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x650 (0x8B8 - 0x268)
	class UFortQueryTest_BuildingCriteria : public UFortQueryTest_GoalBase	
	{
	public:
		FAIDataProviderFloatValue ScoreForGroundSupportedFloor; // 0x268(0x38)
		FAIDataProviderFloatValue ScoreForBeingGroundSupported; // 0x2A0(0x38)
		FAIDataProviderFloatValue ScoreForTraps; // 0x2D8(0x38)
		FAIDataProviderFloatValue ScoreForWalls; // 0x310(0x38)
		FAIDataProviderFloatValue ScoreForNavigableOpening; // 0x348(0x38)
		FFortAIAssignmentIdentifier RootAssignmentID; // 0x380(0x30)
		FAIDataProviderBoolValue bPreferCloserToRootAssignment; // 0x3B0(0x38)
		FAIDataProviderFloatValue ScoreForDistanceFromClosestRootAssignmentGoal; // 0x3E8(0x38)
		FAIDataProviderFloatValue MinDistanceForDistanceScoring; // 0x420(0x38)
		FAIDataProviderFloatValue MaxDistanceForDistanceScoring; // 0x458(0x38)
		FAIDataProviderFloatValue MaxHealthScore; // 0x490(0x38)
		FAIDataProviderBoolValue bPreferHigherHealth; // 0x4C8(0x38)
		FAIDataProviderFloatValue ClampMaxHealthValue; // 0x500(0x38)
		FAIDataProviderFloatValue ClampMinHealthValue; // 0x538(0x38)
		FAIDataProviderBoolValue bPreferHigherHealthPercentage; // 0x570(0x38)
		FAIDataProviderFloatValue MaxHealthPercentageScore; // 0x5A8(0x38)
		FAIDataProviderBoolValue bWantsBuildingRepairableByOwner; // 0x5E0(0x38)
		FAIDataProviderFloatValue RepairableBuildingScore; // 0x618(0x38)
		FAIDataProviderFloatValue NotRepairableBuildingScore; // 0x650(0x38)
		FAIDataProviderFloatValue NeedsRepairBuildingScore; // 0x688(0x38)
		FAIDataProviderFloatValue DoesntNeedsRepairBuildingScore; // 0x6C0(0x38)
		FAIDataProviderBoolValue bWantsDamagedByFriendly; // 0x6F8(0x38)
		FAIDataProviderFloatValue DamagedByFriendlyMaxLifespan; // 0x730(0x38)
		FAIDataProviderFloatValue DamagedByFriendlyMinDamage; // 0x768(0x38)
		FAIDataProviderFloatValue DamagedByFriendlyScore; // 0x7A0(0x38)
		FAIDataProviderBoolValue bWantsDamagedByEnemy; // 0x7D8(0x38)
		FAIDataProviderFloatValue DamagedByEnemyMaxLifespan; // 0x810(0x38)
		FAIDataProviderFloatValue DamagedByEnemyMinDamage; // 0x848(0x38)
		FAIDataProviderFloatValue DamagedByEnemyScore; // 0x880(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_BuildingCriteria");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_CanAttackTarget
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x268 - 0x268)
	class UFortQueryTest_CanAttackTarget : public UFortQueryTest_GoalBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_CanAttackTarget");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_CanBeDamaged
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x268 - 0x268)
	class UFortQueryTest_CanBeDamaged : public UFortQueryTest_GoalBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_CanBeDamaged");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_CanHitWithGameplayAbility
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x30 (0x228 - 0x1F8)
	class UFortQueryTest_CanHitWithGameplayAbility : public UEnvQueryTest	
	{
	public:
		UClass* AIsUsingAbility; // 0x1F8(0x8)
		UClass* AbilityTargets; // 0x200(0x8)
		FGameplayTagContainer GameplayAbilityTag; // 0x208(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_CanHitWithGameplayAbility");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_CurieState
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x48 (0x240 - 0x1F8)
	class UFortQueryTest_CurieState : public UEnvQueryTest	
	{
	public:
		FGameplayTagQuery CurieStateQuery; // 0x1F8(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_CurieState");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_DecoyDistance
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x200 - 0x1F8)
	class UFortQueryTest_DecoyDistance : public UEnvQueryTest	
	{
	public:
		UClass* DistanceTo; // 0x1F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_DecoyDistance");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_DeltaDistance
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x10 (0x208 - 0x1F8)
	class UFortQueryTest_DeltaDistance : public UEnvQueryTest	
	{
	public:
		UClass* LocationProviderContext; // 0x1F8(0x8)
		bool bUseDistance2D; // 0x200(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x201(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_DeltaDistance");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_DistanceToActorBound
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x10 (0x208 - 0x1F8)
	class UFortQueryTest_DistanceToActorBound : public UEnvQueryTest	
	{
	public:
		UClass* DistanceTo; // 0x1F8(0x8)
		bool bUse2DDistance; // 0x200(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x201(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_DistanceToActorBound");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_DistanceToIndestructibleBuilding
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x1F8 - 0x1F8)
	class UFortQueryTest_DistanceToIndestructibleBuilding : public UEnvQueryTest	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_DistanceToIndestructibleBuilding");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_EnvironmentalDanger
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x200 - 0x1F8)
	class UFortQueryTest_EnvironmentalDanger : public UEnvQueryTest	
	{
	public:
		bool bUse3DBoundsCheck; // 0x1F8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1F9(0x3) UNKNOWN PROPERTY
		FGameplayTag DangerSourceActorRegistryTag; // 0x1FC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_EnvironmentalDanger");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GameplayTagsPerDifficulty
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x10 (0x208 - 0x1F8)
	class UFortQueryTest_GameplayTagsPerDifficulty : public UEnvQueryTest	
	{
	public:
		TArray<FFortGameplayTagQueryPerDifficulty> TagQueriesPerDifficulty; // 0x1F8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GameplayTagsPerDifficulty");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalActorDot
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x18 (0x280 - 0x268)
	class UFortQueryTest_GoalActorDot : public UFortQueryTest_GoalBase	
	{
	public:
		UClass* LineATo; // 0x268(0x8)
		UClass* LineBTo; // 0x270(0x8)
		EFortTestGoalActorDot TestMode; // 0x278(0x1)
		bool bAbsoluteValue; // 0x279(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x27A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalActorDot");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalActorTimeSinceSpawn
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x268 - 0x268)
	class UFortQueryTest_GoalActorTimeSinceSpawn : public UFortQueryTest_GoalBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalActorTimeSinceSpawn");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalDiscouragement
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x38 (0x2A0 - 0x268)
	class UFortQueryTest_GoalDiscouragement : public UFortQueryTest_GoalBase	
	{
	public:
		FAIDataProviderBoolValue DisableDiscouragementWhenUndermining; // 0x268(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalDiscouragement");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalDistance
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x18 (0x280 - 0x268)
	class UFortQueryTest_GoalDistance : public UFortQueryTest_GoalBase	
	{
	public:
		EDistanceMode DistanceMode; // 0x268(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x269(0x7) UNKNOWN PROPERTY
		UClass* DistanceTo; // 0x270(0x8)
		TEnumAsByte<EEnvTestDistance> TestMode; // 0x278(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x279(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalDistance");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalDistanceRanges
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x28 (0x290 - 0x268)
	class UFortQueryTest_GoalDistanceRanges : public UFortQueryTest_GoalBase	
	{
	public:
		EDistanceMode DistanceMode; // 0x268(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x269(0x7) UNKNOWN PROPERTY
		UClass* DistanceTo; // 0x270(0x8)
		TEnumAsByte<EEnvTestDistance> ScreeningTestMode; // 0x278(0x1)
		TEnumAsByte<EEnvTestDistance> TestMode; // 0x279(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x27A(0x6) UNKNOWN PROPERTY
		TArray<FGoalDistanceData> GoalDistanceDataRanges; // 0x280(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalDistanceRanges");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalFrustrationDiscouragement
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x268 - 0x268)
	class UFortQueryTest_GoalFrustrationDiscouragement : public UFortQueryTest_GoalBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalFrustrationDiscouragement");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalGameplayTags
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x58 (0x2C0 - 0x268)
	class UFortQueryTest_GoalGameplayTags : public UFortQueryTest_GoalBase	
	{
	public:
		bool bShouldLookupQueryByTag; // 0x268(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x269(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery TagQueryToMatch; // 0x270(0x48)
		FGameplayTag QueryLookupTag; // 0x2B8(0x4)
		bool bShouldPassWhenQueryNotFound; // 0x2BC(0x1)
		bool bRequireAllProvidedTagQueriesPass; // 0x2BD(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x2BE(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalGameplayTags");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalMarkedByPlayer
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x80 (0x2E8 - 0x268)
	class UFortQueryTest_GoalMarkedByPlayer : public UFortQueryTest_GoalBase	
	{
	public:
		FGameplayTagQuery OwnerTagQuery; // 0x268(0x48)
		FAIDataProviderBoolValue OnlyConverterMarkedTargets; // 0x2B0(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalMarkedByPlayer");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalNumberOfAIAssigned
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x270 - 0x268)
	class UFortQueryTest_GoalNumberOfAIAssigned : public UFortQueryTest_GoalBase	
	{
	public:
		ECountAIAssignedToType TypeOfMatchToCount; // 0x268(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x269(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalNumberOfAIAssigned");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalOverallDamageCaused
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x268 - 0x268)
	class UFortQueryTest_GoalOverallDamageCaused : public UFortQueryTest_GoalBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalOverallDamageCaused");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalPickupFilter
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x270 - 0x268)
	class UFortQueryTest_GoalPickupFilter : public UFortQueryTest_GoalBase	
	{
	public:
		float MaxLifetime; // 0x268(0x4)
		EFortPickupSpawnSource RequiredPickupSpawnSource; // 0x26C(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x26D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalPickupFilter");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalProject
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x38 (0x2A0 - 0x268)
	class UFortQueryTest_GoalProject : public UFortQueryTest_GoalBase	
	{
	public:
		FEnvTraceData ProjectionData; // 0x268(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalProject");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalStickiness
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x118 (0x380 - 0x268)
	class UFortQueryTest_GoalStickiness : public UFortQueryTest_GoalBase	
	{
	public:
		FAIDataProviderFloatValue StartValueForGoal; // 0x268(0x38)
		FAIDataProviderFloatValue EndValueForGoal; // 0x2A0(0x38)
		FAIDataProviderFloatValue TimeBeforeValueLerp; // 0x2D8(0x38)
		FAIDataProviderFloatValue ValueLerpDuration; // 0x310(0x38)
		FAIDataProviderBoolValue ApplyStickinessToAllGoalsWithSameActor; // 0x348(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalStickiness");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalType
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x268 - 0x268)
	class UFortQueryTest_GoalType : public UFortQueryTest_GoalBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalType");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_GoalWithinTetheredBounds
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x268 - 0x268)
	class UFortQueryTest_GoalWithinTetheredBounds : public UFortQueryTest_GoalBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_GoalWithinTetheredBounds");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_HasNearbyBuildings
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x10 (0x208 - 0x1F8)
	class UFortQueryTest_HasNearbyBuildings : public UEnvQueryTest	
	{
	public:
		bool bIncludeCenter : 1; // 0x1F8:0(0x1)
		bool bIncludeFloors : 1; // 0x1F8:1(0x1)
		bool bIncludeFloorsAbove : 1; // 0x1F8:2(0x1)
		bool bIncludeWalls : 1; // 0x1F8:3(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x1F9(0x3) UNKNOWN PROPERTY
		int32_t ExtentXY; // 0x1FC(0x4)
		int32_t ExtentZ; // 0x200(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x204(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_HasNearbyBuildings");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_HasNearbyEncounterGoals
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x40 (0x238 - 0x1F8)
	class UFortQueryTest_HasNearbyEncounterGoals : public UEnvQueryTest	
	{
	public:
		bool bOnlyActiveEncounters : 1; // 0x1F8:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY
		FAIDataProviderFloatValue TestDistance; // 0x200(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_HasNearbyEncounterGoals");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_Health
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x200 - 0x1F8)
	class UFortQueryTest_Health : public UEnvQueryTest	
	{
	public:
		bool bUsePercentHealth; // 0x1F8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_Health");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_HealthAndShield
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0xF8 (0x2F0 - 0x1F8)
	class UFortQueryTest_HealthAndShield : public UEnvQueryTest	
	{
	public:
		bool bConsiderHealth; // 0x1F8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY
		FAIDataProviderFloatValue HealthMin; // 0x200(0x38)
		FAIDataProviderFloatValue HealthMax; // 0x238(0x38)
		bool bHealthAsPercent; // 0x270(0x1)
		bool bConsiderShield; // 0x271(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x272(0x6) UNKNOWN PROPERTY
		FAIDataProviderFloatValue ShieldMin; // 0x278(0x38)
		FAIDataProviderFloatValue ShieldMax; // 0x2B0(0x38)
		bool bShieldAsPercent; // 0x2E8(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x2E9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_HealthAndShield");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_HotspotSlotOrientation
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x40 (0x238 - 0x1F8)
	class UFortQueryTest_HotspotSlotOrientation : public UEnvQueryTest	
	{
	public:
		UClass* FaceToward; // 0x1F8(0x8)
		FAIDataProviderFloatValue DotThreshold; // 0x200(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_HotspotSlotOrientation");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_HotspotSlotState
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x200 - 0x1F8)
	class UFortQueryTest_HotspotSlotState : public UEnvQueryTest	
	{
	public:
		EAIHotSpotSlot SlotState; // 0x1F8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_HotspotSlotState");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_InfluenceScore
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x1F8 - 0x1F8)
	class UFortQueryTest_InfluenceScore : public UEnvQueryTest	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_InfluenceScore");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_InsideAIBotLeash
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x1F8 - 0x1F8)
	class UFortQueryTest_InsideAIBotLeash : public UEnvQueryTest	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_InsideAIBotLeash");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_InsideAthenaLeash
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x1F8 - 0x1F8)
	class UFortQueryTest_InsideAthenaLeash : public UEnvQueryTest	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_InsideAthenaLeash");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_InsideAthenaSafeZone
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x48 (0x240 - 0x1F8)
	class UFortQueryTest_InsideAthenaSafeZone : public UEnvQueryTest	
	{
	public:
		bool bUseCurrentSafeZoneIndicatorRadius; // 0x1F8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY
		FAIDataProviderIntValue SafeZoneIndex; // 0x200(0x38)
		bool bNextSafeZone; // 0x238(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x239(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_InsideAthenaSafeZone");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_InsideBuilding
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x1F8 - 0x1F8)
	class UFortQueryTest_InsideBuilding : public UEnvQueryTest	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_InsideBuilding");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_InsideWater
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x200 - 0x1F8)
	class UFortQueryTest_InsideWater : public UEnvQueryTest	
	{
	public:
		float TestRadius; // 0x1F8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1FC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_InsideWater");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_IsCloseToHotspotSlot
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x48 (0x240 - 0x1F8)
	class UFortQueryTest_IsCloseToHotspotSlot : public UEnvQueryTest	
	{
	public:
		UClass* HotspotClass; // 0x1F8(0x8)
		FAIDataProviderFloatValue Radius; // 0x200(0x38)
		bool bIgnoreItemsWithSlotData; // 0x238(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x239(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_IsCloseToHotspotSlot");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_IsCloseToPatrolWard
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x200 - 0x1F8)
	class UFortQueryTest_IsCloseToPatrolWard : public UEnvQueryTest	
	{
	public:
		EWardAffectType WardEffectTypeFilter; // 0x1F8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_IsCloseToPatrolWard");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_IsGoalForAssignment
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x38 (0x230 - 0x1F8)
	class UFortQueryTest_IsGoalForAssignment : public UEnvQueryTest	
	{
	public:
		bool bRetrieveRootAssignmentFromOwner; // 0x1F8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY
		FFortAIAssignmentIdentifier RootAssignmentID; // 0x200(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_IsGoalForAssignment");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_IsGoalHostile
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0xB8 (0x320 - 0x268)
	class UFortQueryTest_IsGoalHostile : public UFortQueryTest_GoalBase	
	{
	public:
		FGameplayTagQuery OwnerTagQuery; // 0x268(0x48)
		FGameplayTagQuery EnemyPawnTagsToConsider; // 0x2B0(0x48)
		FGameplayTagContainer BuildingTagsToConsider; // 0x2F8(0x20)
		bool bConsiderDefenders; // 0x318(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x319(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_IsGoalHostile");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_IsInLeaderLOS
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x58 (0x250 - 0x1F8)
	class UFortQueryTest_IsInLeaderLOS : public UEnvQueryTest	
	{
	public:
		FGameplayTagQuery OwnerTagQuery; // 0x1F8(0x48)
		bool bRequireLOSRayCast; // 0x240(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x241(0x3) UNKNOWN PROPERTY
		float RayCastLeaderVerticalOffset; // 0x244(0x4)
		float RayCastItemVerticalOffset; // 0x248(0x4)
		float MinDotProduct; // 0x24C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_IsInLeaderLOS");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_IsObstructed
	// Inherited from UEnvQueryTest_Trace -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0xE0 (0x3C0 - 0x2E0)
	class UFortQueryTest_IsObstructed : public UEnvQueryTest_Trace	
	{
	public:
		FAIDataProviderBoolValue OverrideContextLocationXWithItemLocationX; // 0x2E0(0x38)
		FAIDataProviderBoolValue OverrideContextLocationYWithItemLocationY; // 0x318(0x38)
		FAIDataProviderBoolValue OverrideContextLocationZWithItemLocationZ; // 0x350(0x38)
		FAIDataProviderBoolValue OverrideItemLocationZWithContextLocationZ; // 0x388(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_IsObstructed");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_IsObstructedOverlap
	// Inherited from UEnvQueryTest_Trace -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0xA8 (0x388 - 0x2E0)
	class UFortQueryTest_IsObstructedOverlap : public UEnvQueryTest_Trace	
	{
	public:
		FAIDataProviderBoolValue OverrideContextLocationXWithItemLocationX; // 0x2E0(0x38)
		FAIDataProviderBoolValue OverrideContextLocationYWithItemLocationY; // 0x318(0x38)
		FAIDataProviderBoolValue OverrideContextLocationZWithItemLocationZ; // 0x350(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_IsObstructedOverlap");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_MissionGameplayTagMatch
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x68 (0x260 - 0x1F8)
	class UFortQueryTest_MissionGameplayTagMatch : public UEnvQueryTest	
	{
	public:
		FGameplayTagQuery MissionPlacementActorTagQuery; // 0x1F8(0x48)
		FGameplayTagContainer GameplayTagsToMatch; // 0x240(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_MissionGameplayTagMatch");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_MissionSameMap
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x48 (0x240 - 0x1F8)
	class UFortQueryTest_MissionSameMap : public UEnvQueryTest	
	{
	public:
		FGameplayTagQuery MissionPlacementActorTagQuery; // 0x1F8(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_MissionSameMap");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_NavGraphDistance
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x200 - 0x1F8)
	class UFortQueryTest_NavGraphDistance : public UEnvQueryTest	
	{
	public:
		UClass* DistanceTo; // 0x1F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_NavGraphDistance");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_OnFlatSurface
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x18 (0x210 - 0x1F8)
	class UFortQueryTest_OnFlatSurface : public UEnvQueryTest	
	{
	public:
		float Radius; // 0x1F8(0x4)
		float ToleranceZ; // 0x1FC(0x4)
		float TraceOffsetUp; // 0x200(0x4)
		float TraceOffsetDown; // 0x204(0x4)
		uint32_t NumberOfIteration; // 0x208(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x20C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_OnFlatSurface");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_OnFlatSurfaceNoNavMesh
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x20 (0x218 - 0x1F8)
	class UFortQueryTest_OnFlatSurfaceNoNavMesh : public UEnvQueryTest	
	{
	public:
		float Radius; // 0x1F8(0x4)
		float ZTolerance; // 0x1FC(0x4)
		float NormalTolerance; // 0x200(0x4)
		float TraceOffset; // 0x204(0x4)
		TArray<UClass*> ActorClassesToIgnoreInTrace; // 0x208(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_OnFlatSurfaceNoNavMesh");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_PathfindingBatch
	// Inherited from UEnvQueryTest_PathfindingBatch -> UEnvQueryTest_Pathfinding -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UFortQueryTest_PathfindingBatch : public UEnvQueryTest_PathfindingBatch	
	{
	public:
		FGameplayTag NavFilterTag; // 0x2B8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2BC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_PathfindingBatch");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_PawnHealth
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x270 - 0x268)
	class UFortQueryTest_PawnHealth : public UFortQueryTest_GoalBase	
	{
	public:
		bool bUsePercentHealth; // 0x268(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x269(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_PawnHealth");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_PawnIsDBNO
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x268 - 0x268)
	class UFortQueryTest_PawnIsDBNO : public UFortQueryTest_GoalBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_PawnIsDBNO");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_PerceptionAge
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x10 (0x208 - 0x1F8)
	class UFortQueryTest_PerceptionAge : public UEnvQueryTest	
	{
	public:
		TEnumAsByte<ECorePerceptionTypes> Sense; // 0x1F8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY
		UClass* SenseClass; // 0x200(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_PerceptionAge");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_PerceptionAll
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x210 (0x478 - 0x268)
	class UFortQueryTest_PerceptionAll : public UFortQueryTest_GoalBase	
	{
	public:
		FAIDataProviderFloatValue SenseScores; // 0x268(0x150)
		TMap<UClass*, FAIDataProviderFloatValue> AdditionalSenseScores; // 0x3B8(0x50)
		FAIDataProviderFloatValue MinSenseAge; // 0x408(0x38)
		FAIDataProviderFloatValue MaxSenseAge; // 0x440(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_PerceptionAll");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_PerceptionExists
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x10 (0x208 - 0x1F8)
	class UFortQueryTest_PerceptionExists : public UEnvQueryTest	
	{
	public:
		TEnumAsByte<ECorePerceptionTypes> Sense; // 0x1F8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY
		UClass* SenseClass; // 0x200(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_PerceptionExists");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_PickupDropper
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x118 (0x380 - 0x268)
	class UFortQueryTest_PickupDropper : public UFortQueryTest_GoalBase	
	{
	public:
		FAIDataProviderFloatValue ValueConverterDroppedPickup; // 0x268(0x38)
		FAIDataProviderFloatValue ValueOtherDroppedPickupInitial; // 0x2A0(0x38)
		FAIDataProviderFloatValue ValueOtherDroppedPickupFinal; // 0x2D8(0x38)
		FAIDataProviderFloatValue TimeOtherDroppedPickupFinal; // 0x310(0x38)
		FAIDataProviderBoolValue LerpFromInitialToFinal; // 0x348(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_PickupDropper");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_PointInBuildingFoundation
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x28 (0x220 - 0x1F8)
	class UFortQueryTest_PointInBuildingFoundation : public UEnvQueryTest	
	{
	public:
		UClass* BuildingFoundationContext; // 0x1F8(0x8)
		UClass* BuildingFoundationClass; // 0x200(0x8)
		FVector BoundingBoxScale; // 0x208(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_PointInBuildingFoundation");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_PrimaryAssignment
	// Inherited from UFortQueryTest_GoalBase -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x120 (0x388 - 0x268)
	class UFortQueryTest_PrimaryAssignment : public UFortQueryTest_GoalBase	
	{
	public:
		bool bUseItemActorLocation; // 0x268(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x269(0x7) UNKNOWN PROPERTY
		FAIDataProviderFloatValue DistanceClose; // 0x270(0x38)
		FAIDataProviderFloatValue DistanceFar; // 0x2A8(0x38)
		FAIDataProviderFloatValue PercentValueClose; // 0x2E0(0x38)
		FAIDataProviderFloatValue PercentValueRegular; // 0x318(0x38)
		FAIDataProviderFloatValue PercentValueFar; // 0x350(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_PrimaryAssignment");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_ProjectOnNavMesh
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x1F8 - 0x1F8)
	class UFortQueryTest_ProjectOnNavMesh : public UEnvQueryTest	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_ProjectOnNavMesh");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_Random
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x200 - 0x1F8)
	class UFortQueryTest_Random : public UEnvQueryTest	
	{
	public:
		bool bUseRandomSeedForAI : 1; // 0x1F8:0(0x1)
		bool bUseRandomSeedForOthers : 1; // 0x1F8:1(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_Random");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_TowardNextAthenaSafeZone
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x58 (0x250 - 0x1F8)
	class UFortQueryTest_TowardNextAthenaSafeZone : public UEnvQueryTest	
	{
	public:
		FAIDataProviderIntValue SafeZoneIndex; // 0x1F8(0x38)
		bool bCheckAcceptanceAngleTowardNextCenter; // 0x230(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x231(0x3) UNKNOWN PROPERTY
		float AcceptanceAngleTowardNextCenter; // 0x234(0x4)
		TArray<int32_t> ExclusionSafeZoneIndex; // 0x238(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x248(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_TowardNextAthenaSafeZone");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_ValidSurface
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x120 (0x318 - 0x1F8)
	class UFortQueryTest_ValidSurface : public UEnvQueryTest	
	{
	public:
		FAIDataProviderFloatValue Radius; // 0x1F8(0x38)
		FAIDataProviderFloatValue TraceOffsetUp; // 0x230(0x38)
		FAIDataProviderFloatValue TraceOffsetDown; // 0x268(0x38)
		TEnumAsByte<ECollisionChannel> TraceCollisionChannel; // 0x2A0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2A1(0x7) UNKNOWN PROPERTY
		FAIDataProviderFloatValue FlatSurfaceToleranceZ; // 0x2A8(0x38)
		TArray<TWeakObjectPtr> SurfaceMaterials; // 0x2E0(0x10)
		bool bAreSurfaceMaterialsValid; // 0x2F0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2F1(0x7) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> ValidHitActorClasses; // 0x2F8(0x10)
		TArray<TWeakObjectPtr> InvalidHitActorClasses; // 0x308(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_ValidSurface");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_WithinHotfixVolumeBounds
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x28 (0x220 - 0x1F8)
	class UFortQueryTest_WithinHotfixVolumeBounds : public UEnvQueryTest	
	{
	public:
		UDataTable* BoundsTable; // 0x1F8(0x8)
		FVector BoundsExtentBuffer; // 0x200(0x18)
		bool bXYOnly; // 0x218(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x219(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_WithinHotfixVolumeBounds");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryTest_WithinTaggedArea
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x68 (0x260 - 0x1F8)
	class UFortQueryTest_WithinTaggedArea : public UEnvQueryTest	
	{
	public:
		FGameplayTagQuery TagQuery; // 0x1F8(0x48)
		FVector AreaExtentBuffer; // 0x240(0x18)
		bool bAssumeInfiniteHeightForArea; // 0x258(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x259(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryTest_WithinTaggedArea");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_BotAmbushPlayer
	// Inherited from UBTTask_Wait -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x90 (0x118 - 0x88)
	class UFortAthenaBTTask_BotAmbushPlayer : public UBTTask_Wait	
	{
	public:
		float FacingPrecision; // 0x88(0x4)
		float WeaponCooldown; // 0x8C(0x4)
		bool bClearBlackboardOnFinished; // 0x90(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		FBlackboardKeySelector TargetedPlayerKeySelector; // 0x98(0x28)
		FBlackboardKeySelector MaxLocationErrorKeySelector; // 0xC0(0x28)
		FBlackboardKeySelector MinLocationErrorKeySelector; // 0xE8(0x28)
		unsigned char UnknownData01_7[0x8]; // 0x110(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_BotAmbushPlayer");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTDecorator_BehaviorControls
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x8 (0x70 - 0x68)
	class UFortAthenaBTDecorator_BehaviorControls : public UBTDecorator	
	{
	public:
		EBehaviorTreeBranches BehaviorTreeBranch; // 0x68(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTDecorator_BehaviorControls");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_AimDownSight
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UFortAthenaAIBotEvaluator_AimDownSight : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName WeaponKeyName; // 0xA8(0x4)
		FName ThrowableAttacksName; // 0xAC(0x4)
		FName TargetActorName; // 0xB0(0x4)
		FName UrgentMovementName; // 0xB4(0x4)
		bool bSkipTargetChecks; // 0xB8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0xC0(0x8)
		unsigned char UnknownData01_7[0x10]; // 0xC8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_AimDownSight");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Ambush
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x68 (0x208 - 0x1A0)
	class UFortAthenaAIBotEvaluator_Ambush : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName LastKnownPositionName; // 0x1A0(0x4)
		FName DestinationKeyName; // 0x1A4(0x4)
		FName MoveToDestinationKeyName; // 0x1A8(0x4)
		FName AggressivenessName; // 0x1AC(0x4)
		unsigned char UnknownData00_7[0x58]; // 0x1B0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Ambush");
			return ret;
		}

		void OnAssignedPerksChangedEvent(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FB5F1B4(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Attack
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x18 (0x1B8 - 0x1A0)
	class UFortAthenaAIBotEvaluator_Attack : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x1A0(0x4) UNKNOWN PROPERTY
		FName WeaponKeyName; // 0x1A4(0x4)
		FName MoveToDestinationKeyName; // 0x1A8(0x4)
		FName TargetActorName; // 0x1AC(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x1B0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Attack");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_AvoidThreat
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x28 (0x1C8 - 0x1A0)
	class UFortAthenaAIBotEvaluator_AvoidThreat : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName AvoidThreatKeyName; // 0x1A0(0x4)
		FName AvoidThreatMovementStateKeyName; // 0x1A4(0x4)
		FName AvoidThreatDestinationKeyName; // 0x1A8(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x1AC(0xC) UNKNOWN PROPERTY
		AActor* CurrentThreatActorAvoiding; // 0x1B8(0x8)
		UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet; // 0x1C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_AvoidThreat");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Bunker
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0xB8 (0x258 - 0x1A0)
	class UFortAthenaAIBotEvaluator_Bunker : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName BuildExecutionStatusKeyName; // 0x1A0(0x4)
		FName HealingStatusKeyName; // 0x1A4(0x4)
		FGameplayTagContainer DangerTags; // 0x1A8(0x20)
		unsigned char UnknownData00_7[0x90]; // 0x1C8(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Bunker");
			return ret;
		}

		void OnAssignedPerksChangedEvent(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FB5F1C8(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_CanMove
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UFortAthenaAIBotEvaluator_CanMove : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName CanMoveKeyName; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_CanMove");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_CharacterLaunched
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UFortAthenaAIBotEvaluator_CharacterLaunched : public UFortAthenaAIBotEvaluator	
	{
	public:
		bool bSteerInSameDirectionAsLaunchVelocity; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		FName CharacterLaunchedExecutionStatusKeyName; // 0xAC(0x4)
		FName SteerDirectionKeyName; // 0xB0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FVector LastLaunchVelocity; // 0xB8(0x18)
		UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet; // 0xD0(0x8)
		float LastZiplineTimestamp; // 0xD8(0x4)
		unsigned char UnknownData02_7[0x14]; // 0xDC(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_CharacterLaunched");
			return ret;
		}

		void OnZiplineStateChanged(bool bIsZiplining, AFortPlayerPawn* FortPlayerPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FB5F7D4(relative to base address)
		void OnCharacterLaunchChanged(UFortMovementComp_Character* MovementComponent, FVector& LaunchVelocity); // Flags: Final|Native|Private|HasOutParms|HasDefaults, Memory Exec: 0x7FF74FB5F1F0(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Conversation
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x1F8 (0x2A0 - 0xA8)
	class UFortAthenaAIBotEvaluator_Conversation : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName IsInConversationStateName; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TArray<FName> ExecutionStatusesToCheckedToAvoidStoppingWhenNearActorNames; // 0xB0(0x10)
		unsigned char UnknownData01_6[0x10]; // 0xC0(0x10) UNKNOWN PROPERTY
		TArray<FName> ExecutionStatusesToCheckForAllowToAvoidStoppingWhenNearActorNames; // 0xD0(0x10)
		unsigned char UnknownData02_6[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY
		TArray<FName> MovementStatusesToCheckedToAvoidStoppingWhenNearActorNames; // 0xF0(0x10)
		unsigned char UnknownData03_6[0x10]; // 0x100(0x10) UNKNOWN PROPERTY
		bool bForceStopIfNoPlayerNearby; // 0x110(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
		FScalableFloat HolsterWeaponOnConversationEnter; // 0x118(0x28)
		FGameplayTagQuery RequiredTagQueryToStopNearActor; // 0x140(0x48)
		UFortAthenaAIRuntimeParameters_Conversation* ConversationRuntimeParameters; // 0x188(0x8)
		AActor* ActorToFocus; // 0x190(0x8)
		unsigned char UnknownData05_7[0x108]; // 0x198(0x108) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Conversation");
			return ret;
		}

		void OnPlayerPawnSpawned(AAIController* Controller, AFortPawn* Pawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FB5F590(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Converted
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x1D8 (0x378 - 0x1A0)
	class UFortAthenaAIBotEvaluator_Converted : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName ShouldMoveTowardsConverterName; // 0x1A0(0x4)
		FName ShouldTeleportTowardsConverterName; // 0x1A4(0x4)
		FName ConvertedAllowPatrolAroundName; // 0x1A8(0x4)
		FName ConvertedAllowScanAroundWhenWaitingName; // 0x1AC(0x4)
		FName ConvertedDestinationName; // 0x1B0(0x4)
		FName CrouchExecutionStatusName; // 0x1B4(0x4)
		FVector TeleportLocationProjectionExtent; // 0x1B8(0x18)
		FVector MovingFromLosLocationProjectionExtent; // 0x1D0(0x18)
		FScalableFloat AmountOfTimesNonHostilePawnNeedsToBeDamagedForTargeting; // 0x1E8(0x28)
		FScalableFloat TimeToTrackDamagedActors; // 0x210(0x28)
		FScalableFloat NearbyPlayerDistanceForTeleportTowardsConverter; // 0x238(0x28)
		FScalableFloat PlayerFOVForNearbyPlayersVisibility; // 0x260(0x28)
		UEnvQuery* TeleportToConverterQueryTemplate; // 0x288(0x8)
		TEnumAsByte<EEnvQueryRunMode> TeleportToConverterRunMode; // 0x290(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x291(0x7) UNKNOWN PROPERTY
		TArray<FMimicConverterAbilityData> AbilitiesToMimic; // 0x298(0x10)
		FGameplayTagQuery RequiredTagQueryToTargetConverterDamagedPawn; // 0x2A8(0x48)
		unsigned char UnknownData01_6[0x68]; // 0x2F0(0x68) UNKNOWN PROPERTY
		AFortPawn* ConverterPawn; // 0x358(0x8)
		UFortAthenaAIRuntimeParameters_AIBotConvert* CachedAIBotConvertParameters; // 0x360(0x8)
		unsigned char UnknownData02_7[0x10]; // 0x368(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Converted");
			return ret;
		}

		void OnUnconvertedEvent(AFortPawn* UnconvertedPawn, EUnconvertReason UnconvertReason); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FB5F718(relative to base address)
		void OnConvertedEvent(AFortPawn* InstigatorPawn, AFortPawn* ConvertedPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FB5F2F8(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_DanceOnKill
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UFortAthenaAIBotEvaluator_DanceOnKill : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName LastKillPositionKeyName; // 0xA8(0x4)
		FName LastKillTimeKeyName; // 0xAC(0x4)
		FName LastKillWasABotKeyName; // 0xB0(0x4)
		FName PlayEmoteExecutionStatusKeyName; // 0xB4(0x4)
		unsigned char UnknownData00_6[0x10]; // 0xB8(0x10) UNKNOWN PROPERTY
		UFortAthenaAIBotEmoteDigestedSkillSet* CacheEmoteDigestedSkillSet; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_DanceOnKill");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_TagQuery
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class UFortAthenaAIBotEvaluator_TagQuery : public UFortAthenaAIBotEvaluator	
	{
	public:
		FGameplayTagQuery TagQuery; // 0xA8(0x48)
		UAbilitySystemComponent* CachedAbilitySystemComponent; // 0xF0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_TagQuery");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_DangerDetection
	// Inherited from UFortAthenaAIBotEvaluator_TagQuery -> UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x50 (0x148 - 0xF8)
	class UFortAthenaAIBotEvaluator_DangerDetection : public UFortAthenaAIBotEvaluator_TagQuery	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY
		UClass* DangerNavAreaClass; // 0x108(0x8)
		float TimeToCheckForDangerAfterValidQuery; // 0x110(0x4)
		float MaxRadiusToSearchForSafePlace; // 0x114(0x4)
		FName DangerZoneDetectedExecutionStatusName; // 0x118(0x4)
		FName DangerZoneDetectedSafeLocationKeyName; // 0x11C(0x4)
		unsigned char UnknownData01_6[0x8]; // 0x120(0x8) UNKNOWN PROPERTY
		UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet; // 0x128(0x8)
		UAthenaAIServiceZoneManager* CacheZoneManager; // 0x130(0x8)
		unsigned char UnknownData02_7[0x10]; // 0x138(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_DangerDetection");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_DBNO
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x60 (0x200 - 0x1A0)
	class UFortAthenaAIBotEvaluator_DBNO : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName DBNODestinationKeyName; // 0x1A0(0x4)
		unsigned char UnknownData00_6[0x2]; // 0x1A4(0x2) UNKNOWN PROPERTY
		bool bAllowReachSquadmates : 1; // 0x1A6:0(0x1)
		bool bAllowReachSameFactionNPCs : 1; // 0x1A6:1(0x1)
		unsigned char UnknownData01_5[0x1]; // 0x1A7(0x1) UNKNOWN PROPERTY
		TArray<AFortPlayerPawnAthena*> AllyPawns; // 0x1A8(0x10)
		FVector CachedCurrentDestination; // 0x1B8(0x18)
		UFortAthenaAIBotDBNODigestedSkillSet* DBNOSkillSet; // 0x1D0(0x8)
		UFortAthenaAICoverComponent* CachedCoverComponent; // 0x1D8(0x8)
		UFortAthenaAIRuntimeParameters_DBNOBehavior* DBNOBehaviorRuntimeParameters; // 0x1E0(0x8)
		unsigned char UnknownData02_7[0x18]; // 0x1E8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_DBNO");
			return ret;
		}

		void OnAllyPawnDBNOStateChanged(AFortPawn* InPlayer, bool bInIsDBNO); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FB5F0EC(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_DefensiveBuilding
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UFortAthenaAIBotEvaluator_DefensiveBuilding : public UFortAthenaAIBotEvaluator	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		UFortAthenaAIBotBuildingDigestedSkillSet* CachedBuildingDigestedSkillSet; // 0xB0(0x8)
		UFortAthenaAIBotBuildingComponent* CachedBuildingComponent; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_DefensiveBuilding");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Escalate
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x168 (0x210 - 0xA8)
	class UFortAthenaAIBotEvaluator_Escalate : public UFortAthenaAIBotEvaluator	
	{
	public:
		unsigned char UnknownData00_3[0xF8]; // 0xA8(0xF8) UNKNOWN PROPERTY
		UFortAthenaAIRuntimeParameters_EscalateBehavior* EscalateRuntimeParameters; // 0x1A0(0x8)
		TArray<FEscalateTargetData> EscalateTargetDatas; // 0x1A8(0x10)
		unsigned char UnknownData01_7[0x58]; // 0x1B8(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Escalate");
			return ret;
		}

		void OnPlayerPawnSpawned(AAIController* Controller, AFortPawn* Pawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FB5F654(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Escape
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x30 (0x1D0 - 0x1A0)
	class UFortAthenaAIBotEvaluator_Escape : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FGameplayTagContainer EscapeTags; // 0x1A0(0x20)
		float CooldownBetweenAggressivenessChanges; // 0x1C0(0x4)
		FName AggressivenessName; // 0x1C4(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Escape");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_EvasiveManeuvers
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x1E8 (0x290 - 0xA8)
	class UFortAthenaAIBotEvaluator_EvasiveManeuvers : public UFortAthenaAIBotEvaluator	
	{
	public:
		unsigned char UnknownData00_3[0xA8]; // 0xA8(0xA8) UNKNOWN PROPERTY
		FName CrouchExecutionStatusName; // 0x150(0x4)
		FName JumpExecutionStatusName; // 0x154(0x4)
		FName JetpackStrafeExecutionStatusName; // 0x158(0x4)
		FName DodgeName; // 0x15C(0x4)
		FName DestinationKeyName; // 0x160(0x4)
		FName UrgentMoveKeyName; // 0x164(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x168(0xC) UNKNOWN PROPERTY
		bool bDoCrouching; // 0x174(0x1)
		bool bDoDodging; // 0x175(0x1)
		bool bDoJumping; // 0x176(0x1)
		bool bDoJumpingDistanceCheck; // 0x177(0x1)
		bool bDoJetpackStrafing; // 0x178(0x1)
		bool bDoJetpackStrafingDistanceCheck; // 0x179(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x17A(0x2) UNKNOWN PROPERTY
		float JetpackStrafingRequiredFuelPercent; // 0x17C(0x4)
		float JetpackStrafeNavPadding; // 0x180(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x184(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery RequiredTagQuery; // 0x188(0x48)
		FGameplayTagQuery JetpackRequiredTagQuery; // 0x1D0(0x48)
		FGameplayTagQuery JumpRequiredTagQuery; // 0x218(0x48)
		UClass* ForcedPerkClass; // 0x260(0x8)
		UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet; // 0x268(0x8)
		UFortAIControllerPerksComponent* CachedPerksComponent; // 0x270(0x8)
		unsigned char UnknownData04_7[0x18]; // 0x278(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_EvasiveManeuvers");
			return ret;
		}

		void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> MovementResult); // Flags: Final|Native|Public, Memory Exec: 0x7FF74FB5F3B8(relative to base address)
		void OnAssignedPerksChangedEvent(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FB5F1DC(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Flanking
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x78 (0x218 - 0x1A0)
	class UFortAthenaAIBotEvaluator_Flanking : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		AFortAIDirector* CachedAIDirector; // 0x1A0(0x8)
		UFortAthenaAIBotRangeAttackDigestedSkillSet* CachedRangeAttackDigestedSkillSet; // 0x1A8(0x8)
		FName FlankingExecutionStatusKeyName; // 0x1B0(0x4)
		FName FlankingMovementStateKeyName; // 0x1B4(0x4)
		FName FlankingDestinationKeyName; // 0x1B8(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x1BC(0xC) UNKNOWN PROPERTY
		TArray<FFlankingLocationInfo> LocationsToEvaluate; // 0x1C8(0x10)
		TArray<FFlankingLocationInfo> BestLocations; // 0x1D8(0x10)
		TArray<TWeakObjectPtr> ActorsInArea; // 0x1E8(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x1F8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Flanking");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Flee
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x38 (0x1D8 - 0x1A0)
	class UFortAthenaAIBotEvaluator_Flee : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		float MinDistanceFromTarget; // 0x1A0(0x4)
		float MinValidDistanceForFleeLocation; // 0x1A4(0x4)
		float FleeDistance; // 0x1A8(0x4)
		float MaxDistanceFromTargetWhenFleeing; // 0x1AC(0x4)
		float MinDistanceHysteresisWhenChangingTarget; // 0x1B0(0x4)
		FName FleeKeyName; // 0x1B4(0x4)
		FName FleeMovementStateKeyName; // 0x1B8(0x4)
		FName FleeDestinationKeyName; // 0x1BC(0x4)
		FName FleeActorKeyName; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x1C4(0xC) UNKNOWN PROPERTY
		AActor* CurrentActorFleeingFrom; // 0x1D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Flee");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_FreeFalling
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x108 (0x1B0 - 0xA8)
	class UFortAthenaAIBotEvaluator_FreeFalling : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName DiveExecutionStatusKeyName; // 0xA8(0x4)
		FName DiveDestinationKeyName; // 0xAC(0x4)
		FName GlideExecutionStatusKeyName; // 0xB0(0x4)
		FName GlideDestinationKeyName; // 0xB4(0x4)
		FName JumpOffBusDestinationName; // 0xB8(0x4)
		unsigned char UnknownData00_6[0xA]; // 0xBC(0xA) UNKNOWN PROPERTY
		bool bRandomlySelectFreeFallingMode; // 0xC6(0x1)
		unsigned char UnknownData01_6[0x1]; // 0xC7(0x1) UNKNOWN PROPERTY
		FScalableFloat IdleWeight; // 0xC8(0x28)
		FScalableFloat RandomWeight; // 0xF0(0x28)
		FScalableFloat TowardNearestAllyWeight; // 0x118(0x28)
		EFreeFallingMode FreeFallingMode; // 0x140(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x141(0x3) UNKNOWN PROPERTY
		float MaxOffsetRangeFromNearestAlly; // 0x144(0x4)
		bool bShouldRecomputeDestinationWhenTowardNearestAlly : 1; // 0x148:0(0x1)
		bool bShouldSearchAllyInSquad : 1; // 0x148:1(0x1)
		bool bShouldSearchAllyInTeam : 1; // 0x148:2(0x1)
		bool bGlideAllowed : 1; // 0x148:3(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x149(0x3) UNKNOWN PROPERTY
		float SkyTubeDivingStuckTimeThreshold; // 0x14C(0x4)
		unsigned char UnknownData04_6[0x20]; // 0x150(0x20) UNKNOWN PROPERTY
		AFortPlayerStateAthena* NearestAlly; // 0x170(0x8)
		FVector CachedLatestDestination; // 0x178(0x18)
		UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet; // 0x190(0x8)
		unsigned char UnknownData05_6[0x8]; // 0x198(0x8) UNKNOWN PROPERTY
		AFortSkyTube* CachedSkyTube; // 0x1A0(0x8)
		unsigned char UnknownData06_7[0x8]; // 0x1A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_FreeFalling");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Ground
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x90 (0x138 - 0xA8)
	class UFortAthenaAIBotEvaluator_Ground : public UFortAthenaAIBotEvaluator	
	{
	public:
		FVector SurfaceTypeRaycastDir; // 0xA8(0x18)
		unsigned char UnknownData00_6[0x70]; // 0xC0(0x70) UNKNOWN PROPERTY
		UFortAthenaAIRuntimeParameters_Behavior* CachedBehaviorRuntimeParameters; // 0x130(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Ground");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_HandleFocusing
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x140 (0x1E8 - 0xA8)
	class UFortAthenaAIBotEvaluator_HandleFocusing : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName TargetActorName; // 0xA8(0x4)
		FName InteractActorName; // 0xAC(0x4)
		FName TargetLocationName; // 0xB0(0x4)
		FName FocusActorName; // 0xB4(0x4)
		FName FocalPointName; // 0xB8(0x4)
		FName WeaponFireName; // 0xBC(0x4)
		FName RangeAttackIsReadyToFireName; // 0xC0(0x4)
		FName WeaponTriggerMeleeName; // 0xC4(0x4)
		FName LastKnownPositionName; // 0xC8(0x4)
		FName TacticalSprintExecutionStatusName; // 0xCC(0x4)
		unsigned char UnknownData00_6[0x18]; // 0xD0(0x18) UNKNOWN PROPERTY
		FValueOrBBKey_Enum FocusingBehavior; // 0xE8(0x28)
		FValueOrBBKey_Enum NoRangedWeaponFocusBehavior; // 0x110(0x28)
		FValueOrBBKey_Bool bPrioritizeThreatOverCurrentTarget; // 0x138(0xC)
		FValueOrBBKey_Bool bUseTargetActorKeyAsFocusTarget; // 0x144(0xC)
		FValueOrBBKey_Bool bFocusOnTargetLocation; // 0x150(0xC)
		FValueOrBBKey_Float AmbushMaxLKPLookAtAngleDegree; // 0x15C(0xC)
		FValueOrBBKey_Bool bStopFocusingWhenMoving; // 0x168(0xC)
		FValueOrBBKey_Float ResumeFocusingWhenMovingDist; // 0x174(0xC)
		FValueOrBBKey_Float StopFocusingWhenMovingDist; // 0x180(0xC)
		FValueOrBBKey_Bool bResumeFocusWhileSliding; // 0x18C(0xC)
		UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0x198(0x8)
		UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet; // 0x1A0(0x8)
		AActor* LastTargetedThreat; // 0x1A8(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x1B0(0x8) UNKNOWN PROPERTY
		AActor* FocusActor; // 0x1B8(0x8)
		unsigned char UnknownData02_7[0x28]; // 0x1C0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_HandleFocusing");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Heal
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x78 (0x120 - 0xA8)
	class UFortAthenaAIBotEvaluator_Heal : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName HealingObjectKeyName; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FName CanHealWhileMovingKeyName; // 0xB0(0x4)
		unsigned char UnknownData01_6[0xC]; // 0xB4(0xC) UNKNOWN PROPERTY
		FGameplayTagQuery RequiredTagQuery; // 0xC0(0x48)
		bool bAllowEvaluationRetry; // 0x108(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x109(0x7) UNKNOWN PROPERTY
		UFortAthenaAIBotHealingDigestedSkillSet* HealingSkillSet; // 0x110(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x118(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Heal");
			return ret;
		}

		void HandlePlayerHealthOrShieldChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FB79B28(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_HitAndRun
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0xF8 (0x298 - 0x1A0)
	class UFortAthenaAIBotEvaluator_HitAndRun : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FScalableFloat AttackDurationBeforeEvade; // 0x1A0(0x28)
		FScalableFloat MeleeAttackMaxDistToEvade; // 0x1C8(0x28)
		FScalableFloat ClampEvadeDistanceEnable; // 0x1F0(0x28)
		FScalableFloat MinDistanceToEvade; // 0x218(0x28)
		FScalableFloat MaxDistanceToEvade; // 0x240(0x28)
		FName EvadeKeyName; // 0x268(0x4)
		FName EvadeMovementStateKeyName; // 0x26C(0x4)
		FName EvadeDestinationKeyName; // 0x270(0x4)
		FName WeaponTriggerMeleeName; // 0x274(0x4)
		unsigned char UnknownData00_6[0x10]; // 0x278(0x10) UNKNOWN PROPERTY
		float MeleeAttackMaxDistToEvadeSqr; // 0x288(0x4)
		float MaxDistanceToEvadeSqr; // 0x28C(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x290(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_HitAndRun");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_HolsterWeapon
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UFortAthenaAIBotEvaluator_HolsterWeapon : public UFortAthenaAIBotEvaluator	
	{
	public:
		TArray<FName> ExecutionStatusesToCheckedNames; // 0xA8(0x10)
		unsigned char UnknownData00_6[0x10]; // 0xB8(0x10) UNKNOWN PROPERTY
		UFortAthenaAIRuntimeParameters_NPCBehavior* CachedNPCBehaviorParameters; // 0xC8(0x8)
		UFortAthenaAIRuntimeParameters_AIBotConvert* CachedConvertParameters; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_HolsterWeapon");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Investigate
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0xC0 (0x260 - 0x1A0)
	class UFortAthenaAIBotEvaluator_Investigate : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName LastKnownPositionName; // 0x1A0(0x4)
		FName DestinationKeyName; // 0x1A4(0x4)
		FName MoveToDestinationKeyName; // 0x1A8(0x4)
		FName AggressivenessName; // 0x1AC(0x4)
		FName CautiousKeyName; // 0x1B0(0x4)
		FName AlertLevelName; // 0x1B4(0x4)
		UClass* SearchQueryFilterClass; // 0x1B8(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x1C0(0x10) UNKNOWN PROPERTY
		UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0x1D0(0x8)
		UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet; // 0x1D8(0x8)
		UFortAthenaAIBotUnstuckDigestedSkillSet* CachedUnstuckSkillSet; // 0x1E0(0x8)
		unsigned char UnknownData01_6[0x48]; // 0x1E8(0x48) UNKNOWN PROPERTY
		AActor* InvestigatingSupportingActor; // 0x230(0x8)
		ABuildingSMActor* UnderminingBuildingActor; // 0x238(0x8)
		AActor* ExcludeReachingTarget; // 0x240(0x8)
		unsigned char UnknownData02_7[0x18]; // 0x248(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Investigate");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_JumpOffBus
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UFortAthenaAIBotEvaluator_JumpOffBus : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName JumpOffBusDestinationName; // 0xA8(0x4)
		FName JumpOffBusDestinationVolumeKeyName; // 0xAC(0x4)
		unsigned char UnknownData00_6[0x20]; // 0xB0(0x20) UNKNOWN PROPERTY
		AFortPoiVolume* BusDroppingVolume; // 0xD0(0x8)
		AFortGameStateAthena* CachedAthenaGameState; // 0xD8(0x8)
		UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet; // 0xE0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_JumpOffBus");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_MeleeAttack
	// Inherited from UFortAthenaAIBotEvaluator_Attack -> UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x50 (0x208 - 0x1B8)
	class UFortAthenaAIBotEvaluator_MeleeAttack : public UFortAthenaAIBotEvaluator_Attack	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x1B8(0x4) UNKNOWN PROPERTY
		FName WeaponTriggerMeleeName; // 0x1BC(0x4)
		FName ThrowableAttacksAllowedName; // 0x1C0(0x4)
		FName TraversalBlockMeleeAttackName; // 0x1C4(0x4)
		FName TargetContextReachableKeyName; // 0x1C8(0x4)
		FName TargetContextInsideLeashKeyName; // 0x1CC(0x4)
		unsigned char UnknownData01_6[0x18]; // 0x1D0(0x18) UNKNOWN PROPERTY
		UFortAthenaAIBotAttackingDigestedSkillSet* AttackingSkillSet; // 0x1E8(0x8)
		FValueOrBBKey_Bool ShouldValidateWeaponType; // 0x1F0(0xC)
		unsigned char UnknownData02_7[0xC]; // 0x1FC(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_MeleeAttack");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Observe
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UFortAthenaAIBotEvaluator_Observe : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName AggressivenessName; // 0xA8(0x4)
		FName ObserveDestinationKeyName; // 0xAC(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xB0(0x4) UNKNOWN PROPERTY
		bool bContinueMovementOnStart; // 0xB4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY
		float MaxMovementDuration; // 0xB8(0x4)
		unsigned char UnknownData02_7[0xC]; // 0xBC(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Observe");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_PathExists
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UFortAthenaAIBotEvaluator_PathExists : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName PathExistsKeyName; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FName GoalKeyName; // 0xB0(0x4)
		float AcceptableRadius; // 0xB4(0x4)
		UClass* FilterClass; // 0xB8(0x8)
		TEnumAsByte<EPathTestQueryType> PathQueryType; // 0xC0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		bool bProjectGoalLocation : 1; // 0xC4:0(0x1)
		bool bReachTestIncludesAgentRadius : 1; // 0xC4:1(0x1)
		bool bReachTestIncludesGoalRadius : 1; // 0xC4:2(0x1)
		unsigned char UnknownData02_7[0x3]; // 0xC5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_PathExists");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_PatrolAround
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x98 (0x238 - 0x1A0)
	class UFortAthenaAIBotEvaluator_PatrolAround : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x1A0(0x48)
		UClass* NavigationQueryFilterClass; // 0x1E8(0x8)
		bool bFallbackToPointWithNoCustomNavigationQueryFilter; // 0x1F0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1F1(0x3) UNKNOWN PROPERTY
		FName PatrolDestinationName; // 0x1F4(0x4)
		FName PatrolExecutionStatusName; // 0x1F8(0x4)
		FName PatrolMovementStateName; // 0x1FC(0x4)
		FName BestTargetActorName; // 0x200(0x4)
		FName EnableKeyName; // 0x204(0x4)
		unsigned char UnknownData01_6[0x8]; // 0x208(0x8) UNKNOWN PROPERTY
		AFortGameModeAthena* CacheAthenaGameMode; // 0x210(0x8)
		unsigned char UnknownData02_7[0x20]; // 0x218(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_PatrolAround");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_PlayEmote
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x20 (0x1C0 - 0x1A0)
	class UFortAthenaAIBotEvaluator_PlayEmote : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName PlayEmoteExecutionStatusKeyName; // 0x1A0(0x4)
		FName PlayEmoteDestinationKeyName; // 0x1A4(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x1A8(0x8) UNKNOWN PROPERTY
		AActor* ExcludeReachingTarget; // 0x1B0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x1B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_PlayEmote");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_PropagateAwareness
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x88 (0x130 - 0xA8)
	class UFortAthenaAIBotEvaluator_PropagateAwareness : public UFortAthenaAIBotEvaluator	
	{
	public:
		FGameplayTagQuery AwarenessTagQuery; // 0xA8(0x48)
		UClass* AwarenessGameplayEffectClass; // 0xF0(0x8)
		TArray<AFortPlayerPawnAthena*> AwareAllyPawns; // 0xF8(0x10)
		TArray<AFortPlayerPawnAthena*> AlreadyTestedPawns; // 0x108(0x10)
		UFortAthenaAIBotPropagateAwarenessDigestedSkillSet* PropagateAwarenessSkillSet; // 0x118(0x8)
		UFortAthenaAIRuntimeParameters_BehaviorTreeControl* BehaviorControlsRuntimeParameters; // 0x120(0x8)
		UFortAthenaAIRuntimeParameters_AffiliationBase* AffiliationRuntimeParameters; // 0x128(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_PropagateAwareness");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_RangeAttack
	// Inherited from UFortAthenaAIBotEvaluator_Attack -> UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x1A0 (0x358 - 0x1B8)
	class UFortAthenaAIBotEvaluator_RangeAttack : public UFortAthenaAIBotEvaluator_Attack	
	{
	public:
		unsigned char UnknownData00_3[0x40]; // 0x1B8(0x40) UNKNOWN PROPERTY
		FName WeaponReloadName; // 0x1F8(0x4)
		FName WeaponFireName; // 0x1FC(0x4)
		FName RangeAttackIsReadyToFireName; // 0x200(0x4)
		FName WeaponTargetingName; // 0x204(0x4)
		FName AggressivenessName; // 0x208(0x4)
		FName HasLoSOnThreatName; // 0x20C(0x4)
		FName UrgentMovementKeyName; // 0x210(0x4)
		FName IsManningTurretKeyName; // 0x214(0x4)
		FName BlockWeaponActionsKeyName; // 0x218(0x4)
		unsigned char UnknownData01_6[0x12]; // 0x21C(0x12) UNKNOWN PROPERTY
		bool bAlwaysAllowTargetingEvaluation; // 0x22E(0x1)
		bool bSkipADSEvaluation; // 0x22F(0x1)
		FValueOrBBKey_Bool SkipADSEvaluation; // 0x230(0xC)
		bool bConsiderLoF; // 0x23C(0x1)
		bool bShouldValidateRangedWeapon; // 0x23D(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x23E(0x2) UNKNOWN PROPERTY
		float RangeReachHysteresisRatio; // 0x240(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x244(0x4) UNKNOWN PROPERTY
		FValueOrBBKey_Bool ResetCanFireNextTimeOnEnter; // 0x248(0xC)
		unsigned char UnknownData04_6[0x1C]; // 0x254(0x1C) UNKNOWN PROPERTY
		UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet; // 0x270(0x8)
		UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0x278(0x8)
		UFortAthenaAIBotPerceptionDigestedSkillSet* CachePerceptionDigestedSkillSet; // 0x280(0x8)
		UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet; // 0x288(0x8)
		TWeakObjectPtr<UAthenaAIServiceZoneManager*> CacheZoneManager; // 0x290(0x8)
		TWeakObjectPtr<UAthenaAIServiceCover*> CachedAIServiceCover; // 0x298(0x8)
		AActor* ExcludeReachingTarget; // 0x2A0(0x8)
		unsigned char UnknownData05_7[0xB0]; // 0x2A8(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_RangeAttack");
			return ret;
		}

		void FindShootingPosition_Async(int32_t RequestID, float DistanceFromTarget, float WeaponIdealAttackRange, FVector& TargetPosition); // Flags: Final|Native|Protected|HasOutParms|HasDefaults, Memory Exec: 0x7FF74FB799A8(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_ReachBeacon
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x20 (0x1C0 - 0x1A0)
	class UFortAthenaAIBotEvaluator_ReachBeacon : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName ReachBeaconStatusKeyName; // 0x1A0(0x4)
		FName ReachBeaconMovementStateKeyName; // 0x1A4(0x4)
		FName ReachBeaconTargetKeyName; // 0x1A8(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x1AC(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortAthenaBeaconComponent*> CurrentBeacon; // 0x1B4(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x1BC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReachBeacon");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_ReactToVerb
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x240 (0x3E0 - 0x1A0)
	class UFortAthenaAIBotEvaluator_ReactToVerb : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		unsigned char UnknownData00_3[0x68]; // 0x1A0(0x68) UNKNOWN PROPERTY
		UFortAthenaAIBotReactToVerbDigestedSkillSet* CacheReactToVerbDigestedSkillSet; // 0x208(0x8)
		UDataTable* VerbReactions; // 0x210(0x8)
		FScalableFloat MinDistanceFromPlayerToReact; // 0x218(0x28)
		FScalableFloat MaxReactionEmoteDuration; // 0x240(0x28)
		FScalableFloat MaxReactionWaitTime; // 0x268(0x28)
		FFortNearbyActorsPerceptionConfiguration PerceptionConfiguration; // 0x290(0xD0)
		bool bIsHighPriorityEvaluator; // 0x360(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x361(0x7) UNKNOWN PROPERTY
		FScalableFloat ReactToEmotes; // 0x368(0x28)
		FName ReactToVerbTargetActorKeyName; // 0x390(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x394(0x4) UNKNOWN PROPERTY
		FName ReactToVerbShouldMoveKeyName; // 0x398(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x39C(0x4) UNKNOWN PROPERTY
		FName GameplayEffectReactionKeyName; // 0x3A0(0x4)
		unsigned char UnknownData04_6[0x2C]; // 0x3A4(0x2C) UNKNOWN PROPERTY
		FPersistenceFrameworkSaveControl SaveControl; // 0x3D0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReactToVerb");
			return ret;
		}

		void HandlePawnStoppedEmote(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74C8E74BC(relative to base address)
		void HandlePawnStartedEmote(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74C8E74BC(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_RecoverLineOfSight
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x68 (0x208 - 0x1A0)
	class UFortAthenaAIBotEvaluator_RecoverLineOfSight : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FScalableFloat RecoveringLineOfSightMaxDuration; // 0x1A0(0x28)
		TArray<FName> ExecutionStatusToListenKeyNames; // 0x1C8(0x10)
		FName RecoverLineOfSightExecutionStatusKeyName; // 0x1D8(0x4)
		FName RecoverLineOfSightMovementStateKeyName; // 0x1DC(0x4)
		FName RecoverLineOfSightDestinationKeyName; // 0x1E0(0x4)
		unsigned char UnknownData00_7[0x24]; // 0x1E4(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_RecoverLineOfSight");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_ReloadWeapon
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UFortAthenaAIBotEvaluator_ReloadWeapon : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName WeaponKeyName; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x2]; // 0xAC(0x2) UNKNOWN PROPERTY
		bool bCanReloadWeaponsInInventory; // 0xAE(0x1)
		unsigned char UnknownData01_7[0x1]; // 0xAF(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReloadWeapon");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Retreat
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x30 (0x1D0 - 0x1A0)
	class UFortAthenaAIBotEvaluator_Retreat : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName RetreatDestinationName; // 0x1A0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
		UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet; // 0x1A8(0x8)
		UFortAthenaAICoverComponent* CachedCoverComponent; // 0x1B0(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x1B8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Retreat");
			return ret;
		}

		void HandlePlayerHealthOrShieldChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FB79B3C(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Revive
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x68 (0x208 - 0x1A0)
	class UFortAthenaAIBotEvaluator_Revive : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FScalableFloat LastReviveTargetExpiration; // 0x1A0(0x28)
		FName ReviveTargetKeyName; // 0x1C8(0x4)
		FName ReviveLastTargetKeyName; // 0x1CC(0x4)
		UFortAthenaAIRuntimeParameters_ReviveBehavior* ReviveBehaviorRuntimeParameters; // 0x1D0(0x8)
		AFortPlayerPawnAthena* CurrentReviveTarget; // 0x1D8(0x8)
		TArray<AFortPlayerPawnAthena*> DBNOAllyPawns; // 0x1E0(0x10)
		UFortAthenaAIBotReviveDigestedSkillSet* ReviveSkillSet; // 0x1F0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x1F8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Revive");
			return ret;
		}

		void OnCurrentTargetRevived(AFortPlayerPawn* RevivedPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FB79D2C(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel
	// Inherited from UFortAthenaAIBotEvaluator_TagQuery -> UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x78 (0x170 - 0xF8)
	class UFortAthenaAIBotEvaluator_SandTunnel : public UFortAthenaAIBotEvaluator_TagQuery	
	{
	public:
		FName JumpExecutionStatusName; // 0xF8(0x4)
		FName LootInteractionExecutionStatusName; // 0xFC(0x4)
		FName WeaponTriggerMeleeName; // 0x100(0x4)
		FName WeaponFireName; // 0x104(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x108(0x8) UNKNOWN PROPERTY
		FGameplayTagQuery BuriedTagQuery; // 0x110(0x48)
		UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet; // 0x158(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x160(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel");
			return ret;
		}

		void OnBotControllerAlertLevelChanged(AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FB79C28(relative to base address)
		void Jump(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FB79B50(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x78 (0x218 - 0x1A0)
	class UFortAthenaAIBotEvaluator_SelectNextDynamicPOI : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName DynamicPOIExecutionStatusKeyName; // 0x1A0(0x4)
		FName DynamicPOILocationKeyName; // 0x1A4(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x1A8(0x8) UNKNOWN PROPERTY
		AFortTeamInfoAthena* CachedTeamInfo; // 0x1B0(0x8)
		UFortGameStateComponent_BattleRoyaleGamePhaseLogic* CachedGamePhaseLogic; // 0x1B8(0x8)
		unsigned char UnknownData01_6[0x38]; // 0x1C0(0x38) UNKNOWN PROPERTY
		FTimerHandle NextSearchTimerHandle; // 0x1F8(0x8)
		TArray<FFailedToReachPOI> FailedBotPOIList; // 0x200(0x10)
		int32_t CachedSelectedBotPOIID; // 0x210(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x214(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI");
			return ret;
		}

		void ReachingPositionFail_Async(int32_t RequestID); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FB79EC8(relative to base address)
		void OnSafeZonePhaseChanged(FFortSafeZonePhaseUpdatedEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74FB79E38(relative to base address)
		void OnGamePhaseLogicReady(FFortBattleRoyaleGamePhaseLogicComponentReadyEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74FB79DAC(relative to base address)
		void OnAgentDied(AFortAthenaAIBotController* BotController, AFortPawn* FortPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FB79B64(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextPOI
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x38 (0x1D8 - 0x1A0)
	class UFortAthenaAIBotEvaluator_SelectNextPOI : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName NextPOIKeyName; // 0x1A0(0x4)
		FName MarkerLocationKeyName; // 0x1A4(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x1A8(0x8) UNKNOWN PROPERTY
		AFortPoiVolume* StartingGroundPOI; // 0x1B0(0x8)
		bool bCheckForStartingGroundPOI; // 0x1B8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1B9(0x3) UNKNOWN PROPERTY
		float CurrentPOICompletionTime; // 0x1BC(0x4)
		float DurationInsideCurrentPOI; // 0x1C0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		AFortTeamInfoAthena* CachedTeamInfo; // 0x1C8(0x8)
		UFortAthenaAIBotLootingDigestedSkillSet* CachedLootingSkillSet; // 0x1D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextPOI");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_SelectVehicle
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0xE0 (0x280 - 0x1A0)
	class UFortAthenaAIBotEvaluator_SelectVehicle : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName VehicleDestinationKeyName; // 0x1A0(0x4)
		FName SelectVehicleMovementStateKeyName; // 0x1A4(0x4)
		FName SelectVehicleStatusKeyName; // 0x1A8(0x4)
		FName SelectedVehicleKeyName; // 0x1AC(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x1B0(0x8) UNKNOWN PROPERTY
		FScalableFloat Enabled; // 0x1B8(0x28)
		float VehicleSearchRadius; // 0x1E0(0x4)
		bool bCanEnterOnlyWithHisConverter; // 0x1E4(0x1)
		bool bCanEnterAsDriver; // 0x1E5(0x1)
		bool bCanEnterVehiclesInWater; // 0x1E6(0x1)
		bool bCanEnterOutOfFuelVehicles; // 0x1E7(0x1)
		bool bCanEnterWithPlayerDriver; // 0x1E8(0x1)
		bool bCanEnterWithPlayerOnAnySeat; // 0x1E9(0x1)
		bool bCanEnterOnlyMatchingPatrols; // 0x1EA(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x1EB(0x5) UNKNOWN PROPERTY
		FGameplayTagQuery VehiclesFilterTagQuery; // 0x1F0(0x48)
		FGameplayTagQuery SeatsFilterTagQuery; // 0x238(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectVehicle");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjects
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x118 (0x2B8 - 0x1A0)
	class UFortAthenaAIBotEvaluator_SmartObjects : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FGameplayTag EvaluationTag; // 0x1A0(0x4)
		bool bEvaluateSOValidityAfterChosen; // 0x1A4(0x1)
		bool bEnableEntryLocationsSupport; // 0x1A5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1A6(0x2) UNKNOWN PROPERTY
		FWorldConditionQueryDefinition CanRunPrecondition; // 0x1A8(0x18)
		FScalableFloat MaximumEntryLocationsChecksPerEvaluation; // 0x1C0(0x28)
		FScalableFloat EntryLocationFailuresBlacklistedTime; // 0x1E8(0x28)
		UCurveFloat* DistanceToWeightCurveForSlotPicking; // 0x210(0x8)
		UClass* OverridenFilterClassForEntryPoints; // 0x218(0x8)
		TArray<FName> ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames; // 0x220(0x10)
		FName SmartObjectExecutionStatusKeyName; // 0x230(0x4)
		FName SmartObjectMovementStateKeyName; // 0x234(0x4)
		FName SmartObjectDestinationKeyName; // 0x238(0x4)
		FName SmartObjectDestinationRotationKeyName; // 0x23C(0x4)
		FName SmartObjectShouldMoveKeyName; // 0x240(0x4)
		FName SmartObjectUrgencyKeyName; // 0x244(0x4)
		unsigned char UnknownData01_6[0x20]; // 0x248(0x20) UNKNOWN PROPERTY
		UFortAthenaAIRuntimeParameters_SmartObjectBase* SmartObjectRuntimeParameters; // 0x268(0x8)
		USmartObjectSubsystem* SmartObjectSubsystem; // 0x270(0x8)
		FWorldConditionQueryState CanRunPreconditionQueryState; // 0x278(0x30)
		unsigned char UnknownData02_7[0x10]; // 0x2A8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjects");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Sprinting
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x98 (0x140 - 0xA8)
	class UFortAthenaAIBotEvaluator_Sprinting : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName AllowSprintKeyName; // 0xA8(0x4)
		FName AllowSlideKeyName; // 0xAC(0x4)
		FName JumpExecutionStatusName; // 0xB0(0x4)
		FName TacticalSprintExecutionStatusName; // 0xB4(0x4)
		FName SlideExecutionStatusName; // 0xB8(0x4)
		FName UrgentMovementKeyName; // 0xBC(0x4)
		FName RangeAttackExecutionStatusName; // 0xC0(0x4)
		FName MeleeAttackExecutionStatusName; // 0xC4(0x4)
		FName ThrowableAttackExecutionStatusName; // 0xC8(0x4)
		FValueOrBBKey_Bool ValidateSprintingBeforeTacticalSprinting; // 0xCC(0xC)
		FValueOrBBKey_Bool CanTacticalSprintJump; // 0xD8(0xC)
		unsigned char UnknownData00_6[0x12]; // 0xE4(0x12) UNKNOWN PROPERTY
		bool bSprintOnlyInWater; // 0xF6(0x1)
		bool bSprintOnlyInUrgentMode; // 0xF7(0x1)
		UFortAthenaAIBotMovementDigestedSkillSet* MovementSkillSet; // 0xF8(0x8)
		UFortAthenaAIBotAimingDigestedSkillSet* AimingSkillSet; // 0x100(0x8)
		float TacticalSprintTriggerChance; // 0x108(0x4)
		float TacticalSprintTriggerChanceInUrgentMovement; // 0x10C(0x4)
		float TacticalSprintJumpTriggerChance; // 0x110(0x4)
		unsigned char UnknownData01_7[0x2C]; // 0x114(0x2C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Sprinting");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_StealWall
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0xA8 (0x150 - 0xA8)
	class UFortAthenaAIBotEvaluator_StealWall : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName StealWallBuildTypeName; // 0xA8(0x4)
		FName StealWallBuildGridCoordName; // 0xAC(0x4)
		FName TargetActorName; // 0xB0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0xB4(0xC) UNKNOWN PROPERTY
		UFortAthenaAIBotBuildingDigestedSkillSet* CacheBuildingDigestedSkillSet; // 0xC0(0x8)
		ABuildingActor* CurrentBuildingTarget; // 0xC8(0x8)
		unsigned char UnknownData01_7[0x80]; // 0xD0(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_StealWall");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_StepBack
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x30 (0x1D0 - 0x1A0)
	class UFortAthenaAIBotEvaluator_StepBack : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		UFortAthenaAIBotRangeAttackDigestedSkillSet* CachedRangeAttackDigestedSkillSet; // 0x1A0(0x8)
		UAthenaAIServiceCover* CachedAIServiceCover; // 0x1A8(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x1B0(0x8) UNKNOWN PROPERTY
		FName StepBackExecutionStatusKeyName; // 0x1B8(0x4)
		FName StepBackMovementStateKeyName; // 0x1BC(0x4)
		FName StepBackDestinationKeyName; // 0x1C0(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x1C4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_StepBack");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Storm
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x60 (0x200 - 0x1A0)
	class UFortAthenaAIBotEvaluator_Storm : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName StormDestinationName; // 0x1A0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x1A4(0xC) UNKNOWN PROPERTY
		AFortGameModeAthena* CacheAthenaGameMode; // 0x1B0(0x8)
		UBehaviorTreeComponent* CachedBTComp; // 0x1B8(0x8)
		UFortGameStateComponent_BattleRoyaleGamePhaseLogic* CachedGamePhaseLogic; // 0x1C0(0x8)
		unsigned char UnknownData01_7[0x38]; // 0x1C8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Storm");
			return ret;
		}

		void OnSafeZoneStateChanged(EFortSafeZoneState NewState); // Flags: Final|Native|Public, Memory Exec: 0x7FF74FB94344(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_TagQueryToBBKey
	// Inherited from UFortAthenaAIBotEvaluator_TagQuery -> UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x8 (0x100 - 0xF8)
	class UFortAthenaAIBotEvaluator_TagQueryToBBKey : public UFortAthenaAIBotEvaluator_TagQuery	
	{
	public:
		FName LinkedBBKeyName; // 0xF8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_TagQueryToBBKey");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_TakeCover
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x90 (0x230 - 0x1A0)
	class UFortAthenaAIBotEvaluator_TakeCover : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet; // 0x1A0(0x8)
		UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0x1A8(0x8)
		UAthenaAIServiceCover* CachedAIServiceCover; // 0x1B0(0x8)
		FName DestinationKeyName; // 0x1B8(0x4)
		FName MoveToDestinationKeyName; // 0x1BC(0x4)
		FName HealingStatusKeyName; // 0x1C0(0x4)
		FName WeaponFireName; // 0x1C4(0x4)
		FName TargetActorName; // 0x1C8(0x4)
		FName BunkerStatusKeyName; // 0x1CC(0x4)
		unsigned char UnknownData00_6[0x10]; // 0x1D0(0x10) UNKNOWN PROPERTY
		ABuildingActor* CachedCoverBuildingActor; // 0x1E0(0x8)
		TArray<ABuildingActor*> ExcludedBuildingActors; // 0x1E8(0x10)
		unsigned char UnknownData01_7[0x38]; // 0x1F8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_TakeCover");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_ThrowableAttack
	// Inherited from UFortAthenaAIBotEvaluator_Attack -> UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x50 (0x208 - 0x1B8)
	class UFortAthenaAIBotEvaluator_ThrowableAttack : public UFortAthenaAIBotEvaluator_Attack	
	{
	public:
		FName WeaponTriggerThrowableName; // 0x1B8(0x4)
		FName ThrowableAttackIsReadyToThrowName; // 0x1BC(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x1C0(0x8) UNKNOWN PROPERTY
		UFortAthenaAIBotAttackingDigestedSkillSet* AttackingSkillSet; // 0x1C8(0x8)
		UFortAthenaAIBotRangeAttackDigestedSkillSet* RangeAttackSkillSet; // 0x1D0(0x8)
		UFortAthenaAIBotAimingDigestedSkillSet* AimingSkillSet; // 0x1D8(0x8)
		UFortWorldItem* ChosenWeapon; // 0x1E0(0x8)
		AFortPawn* CachedFortPawn; // 0x1E8(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x1F0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_ThrowableAttack");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_TrapOnPathDetected
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UFortAthenaAIBotEvaluator_TrapOnPathDetected : public UFortAthenaAIBotEvaluator	
	{
	public:
		UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0xA8(0x8)
		FName TrapOnPathKeyName; // 0xB0(0x4)
		FName TrapActorOnPathKeyName; // 0xB4(0x4)
		FName TargetActorName; // 0xB8(0x4)
		FName AlertLevelName; // 0xBC(0x4)
		FName RangeAttackExecutionStatusName; // 0xC0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0xC4(0xC) UNKNOWN PROPERTY
		ABuildingTrap* CurrentTrapTarget; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_TrapOnPathDetected");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_VehicleCombatNavigation
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0xB0 (0x250 - 0x1A0)
	class UFortAthenaAIBotEvaluator_VehicleCombatNavigation : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FValueOrBBKey_Float ExecutionDuration; // 0x1A0(0xC)
		FValueOrBBKey_Float ExecutionDurationDeviation; // 0x1AC(0xC)
		FValueOrBBKey_Float CooldownDuration; // 0x1B8(0xC)
		FValueOrBBKey_Float CooldownDurationDeviation; // 0x1C4(0xC)
		FValueOrBBKey_Float OddsToStart; // 0x1D0(0xC)
		FValueOrBBKey_Float OddsToStartWhenTargetMatchesOptionalTags; // 0x1DC(0xC)
		FValueOrBBKey_Float OddsToGoOnCooldown; // 0x1E8(0xC)
		FValueOrBBKey_Float OddsToGoOnCooldownWhenTargetMatchesOptionalTags; // 0x1F4(0xC)
		FValueOrBBKey_GameplayTagContainer OptionalTargetTagsToMatch; // 0x200(0x28)
		unsigned char UnknownData00_7[0x28]; // 0x228(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_VehicleCombatNavigation");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_VehicleEscalate
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UFortAthenaAIBotEvaluator_VehicleEscalate : public UFortAthenaAIBotEvaluator	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_VehicleEscalate");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_VehicleLeaveSeat
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UFortAthenaAIBotEvaluator_VehicleLeaveSeat : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName LeaveSeatStatusKeyName; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x2]; // 0xAC(0x2) UNKNOWN PROPERTY
		bool bLeaveSeatWhenPlayerInVehicle; // 0xAE(0x1)
		bool bLeaveSeatWhenConverterLeave; // 0xAF(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_VehicleLeaveSeat");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_VehicleSwitchSeat
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UFortAthenaAIBotEvaluator_VehicleSwitchSeat : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName SwitchSeatStatusKeyName; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FValueOrBBKey_Bool bSwitchToDriverSeatIfEmpty; // 0xB0(0xC)
		bool bSwitchToEmptyDriverSeat; // 0xBC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xBD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_VehicleSwitchSeat");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_WaitForPassengers
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UFortAthenaAIBotEvaluator_WaitForPassengers : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName WaitForPassengersStatusKeyName; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_WaitForPassengers");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Warmup
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UFortAthenaAIBotEvaluator_Warmup : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName WarmupPlayEmoteExecutionStatusKeyName; // 0xA8(0x4)
		FName WarmupLootAndShootExecutionStatusKeyName; // 0xAC(0x4)
		FName WarmupIdleExecutionStatusKeyName; // 0xB0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0xB4(0xC) UNKNOWN PROPERTY
		UFortAthenaAIBotWarmupDigestedSkillSet* CacheWarmupDigestedSkillSet; // 0xC0(0x8)
		unsigned char UnknownData01_7[0x10]; // 0xC8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Warmup");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_WeaponSelection
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x40 (0xE8 - 0xA8)
	class UFortAthenaAIBotEvaluator_WeaponSelection : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName ThrowableAttackIsReadyToThrowName; // 0xA8(0x4)
		FName WeaponKeyName; // 0xAC(0x4)
		FName TargetActorName; // 0xB0(0x4)
		FName IsManningTurretKeyName; // 0xB4(0x4)
		FName UseItemSelectNewWeaponKeyName; // 0xB8(0x4)
		unsigned char UnknownData00_6[0x14]; // 0xBC(0x14) UNKNOWN PROPERTY
		UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet; // 0xD0(0x8)
		UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet; // 0xD8(0x8)
		UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0xE0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_WeaponSelection");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIBotEvaluator_Zipline
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0xB0 (0x250 - 0x1A0)
	class UFortAthenaAIBotEvaluator_Zipline : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName CurrentDestinationKeyName; // 0x1A0(0x4)
		FName ZiplineTargetKeyName; // 0x1A4(0x4)
		FName LastZiplineUsedName; // 0x1A8(0x4)
		FName ZiplineMoveExecutionStatusKeyName; // 0x1AC(0x4)
		FName ZiplineEntryLocationKeyName; // 0x1B0(0x4)
		FName ZiplineExitLocationKeyName; // 0x1B4(0x4)
		FName ZiplineLastUsageTimeName; // 0x1B8(0x4)
		FName ZiplineUsageExecutionStatusName; // 0x1BC(0x4)
		FScalableFloat WaitTimeBetweenZiplineRandomChoices; // 0x1C0(0x28)
		FScalableFloat ProbabilityToUseZipline; // 0x1E8(0x28)
		unsigned char UnknownData00_7[0x40]; // 0x210(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIBotEvaluator_Zipline");
			return ret;
		}

		void OnZiplineStateChanged(bool bIsZiplining, AFortPlayerPawn* FortPlayerPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FB943C4(relative to base address)
	};


	// Class FortniteAIServer.FortEvaluatorBlueprintBaseWorldConditionSchema
	// Inherited from UWorldConditionSchema -> UObject
	// Size: 0x30 (0x68 - 0x38)
	class UFortEvaluatorBlueprintBaseWorldConditionSchema : public UWorldConditionSchema	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x38(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortEvaluatorBlueprintBaseWorldConditionSchema");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase
	// Inherited from UFortAthenaAIEvaluator -> UObject
	// Size: 0x188 (0x228 - 0xA0)
	class UFortAthenaAIEvaluator_BlueprintBase : public UFortAthenaAIEvaluator	
	{
	public:
		bool bBlockWeaponActions; // 0xA0(0x1)
		bool bGameplayAbilityEvaluator; // 0xA1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xA2(0x6) UNKNOWN PROPERTY
		FGameplayAbilityEvaluatorModule GameplayAbilityEvaluatorModule; // 0xA8(0x28)
		bool bCooldownEvaluator; // 0xD0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD1(0x3) UNKNOWN PROPERTY
		float Cooldown; // 0xD4(0x4)
		float CooldownVariation; // 0xD8(0x4)
		TEnumAsByte<ECooldownType> CooldownType; // 0xDC(0x1)
		bool bDistanceEvaluator; // 0xDD(0x1)
		unsigned char UnknownData02_6[0x2]; // 0xDE(0x2) UNKNOWN PROPERTY
		float StartDistance; // 0xE0(0x4)
		float OngoingDistance; // 0xE4(0x4)
		FName DistanceTargetKeyName; // 0xE8(0x4)
		bool bDurationEvaluator; // 0xEC(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xED(0x3) UNKNOWN PROPERTY
		float duration; // 0xF0(0x4)
		float DurationVariation; // 0xF4(0x4)
		bool bTokenEvaluator; // 0xF8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery TokenQuery; // 0x100(0x48)
		FName TokenTargetKeyName; // 0x148(0x4)
		bool bWorldConditionEvaluator; // 0x14C(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x14D(0x3) UNKNOWN PROPERTY
		FWorldConditionQueryDefinition StartingWorldConditions; // 0x150(0x18)
		FWorldConditionQueryDefinition OngoingWorldConditions; // 0x168(0x18)
		FName StartingWorldConditionTargetKeyName; // 0x180(0x4)
		FName OngoingWorldConditionTargetKeyName; // 0x184(0x4)
		FWorldConditionQueryState StartingQueryState; // 0x188(0x30)
		FWorldConditionQueryState OngoingQueryState; // 0x1B8(0x30)
		UFortAICombatTokenConsumerComponent* CachedTokenConsumerComponent; // 0x1E8(0x8)
		unsigned char UnknownData06_6[0x8]; // 0x1F0(0x8) UNKNOWN PROPERTY
		bool bEvaluateOnBlackboardKeyChange; // 0x1F8(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY
		TArray<FName> ListeningBlackboardKeyNames; // 0x200(0x10)
		unsigned char UnknownData08_7[0x18]; // 0x210(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase");
			return ret;
		}

		void TaskEvaluate(UBehaviorTreeComponent* OwnerComp); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExit(UBehaviorTreeComponent* OwnerComp); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnter(UBehaviorTreeComponent* OwnerComp); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBlackboardKeyValueChanged(UBehaviorTreeComponent* OwnerComp, FName ChangedKeyName); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetTime(UBehaviorTreeComponent* OwnerComp); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FB942B0(relative to base address)
		bool EvaluateStartingConditions(UBehaviorTreeComponent* OwnerComp); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74FB9421C(relative to base address)
		bool EvaluateOngoingConditions(UBehaviorTreeComponent* OwnerComp); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74FB94188(relative to base address)
		void AddTimeout(float TimeoutLength, float TimeoutLengthVariation); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74FB940C4(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaAIEvaluator_DormantUntilPhase
	// Inherited from UFortAthenaAIEvaluator -> UObject
	// Size: 0xA8 (0x148 - 0xA0)
	class UFortAthenaAIEvaluator_DormantUntilPhase : public UFortAthenaAIEvaluator	
	{
	public:
		FScalableFloat bIsEnabled; // 0xA0(0x28)
		bool bDisabledInCreative; // 0xC8(0x1)
		EAthenaGamePhaseStep RequiredGamePhaseStep; // 0xC9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xCA(0x6) UNKNOWN PROPERTY
		FScalableFloat DelayAfterPhase; // 0xD0(0x28)
		FScalableFloat RandomDeviationAfterPhase; // 0xF8(0x28)
		unsigned char UnknownData01_7[0x28]; // 0x120(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIEvaluator_DormantUntilPhase");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIEvaluator_FleeEnvDanger
	// Inherited from UFortAthenaAIEvaluator -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UFortAthenaAIEvaluator_FleeEnvDanger : public UFortAthenaAIEvaluator	
	{
	public:
		float MaximumCheckDistance; // 0xA0(0x4)
		float AdditionalFleeDistance; // 0xA4(0x4)
		FName EnvironmentalDangerExecutionStatusName; // 0xA8(0x4)
		FName EnvironmentalDangerFleeDirectionFromKeyName; // 0xAC(0x4)
		FName EnvironmentalDangerFleeDirectionToKeyName; // 0xB0(0x4)
		FName EnvironmentalDangerFleeDistanceKeyName; // 0xB4(0x4)
		unsigned char UnknownData00_6[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		AAIController* CachedController; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIEvaluator_FleeEnvDanger");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIEvaluator_FollowGroupLeader
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x38 (0x1D8 - 0x1A0)
	class UFortAthenaAIEvaluator_FollowGroupLeader : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FValueOrBBKey_Bool bBotsSkipSafeToReachLocationCheck; // 0x1A0(0xC)
		FName FollowGroupLeaderStatusKeyName; // 0x1AC(0x4)
		FName FollowGroupLeaderMovementStateKeyName; // 0x1B0(0x4)
		FName FollowGroupLeaderDestinationKeyName; // 0x1B4(0x4)
		FName TooFarFromLeaderKeyName; // 0x1B8(0x4)
		FName HasLeaderToFollowKeyName; // 0x1BC(0x4)
		unsigned char UnknownData00_6[0x10]; // 0x1C0(0x10) UNKNOWN PROPERTY
		UFortPawnComponent_AIGroup* CachedAIGroupComponent; // 0x1D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIEvaluator_FollowGroupLeader");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIEvaluator_Leash
	// Inherited from UFortAthenaAIEvaluator -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UFortAthenaAIEvaluator_Leash : public UFortAthenaAIEvaluator	
	{
	public:
		FName GoalIsInsideLeashKeyName; // 0xA0(0x4)
		FName AIIsInsideLeashKeyName; // 0xA4(0x4)
		FName LeashCenterLocationKeyName; // 0xA8(0x4)
		unsigned char UnknownData00_6[0xC]; // 0xAC(0xC) UNKNOWN PROPERTY
		UFortAthenaLeashComponent* CachedLeashComponent; // 0xB8(0x8)
		UFortAIGoalComponent* CachedAIGoalComponent; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIEvaluator_Leash");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIEvaluator_NearbyActorsPerception
	// Inherited from UFortAthenaAIEvaluator -> UObject
	// Size: 0x1B0 (0x250 - 0xA0)
	class UFortAthenaAIEvaluator_NearbyActorsPerception : public UFortAthenaAIEvaluator	
	{
	public:
		FName FoundNearbyActorKeyName; // 0xA0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		FScalableFloat MinimumUpdateInterval; // 0xA8(0x28)
		int32_t RequiredTypes; // 0xD0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		FScalableFloat MinimumDistanceToActors; // 0xD8(0x28)
		TArray<TEnumAsByte> RequiredAttitudes; // 0x100(0x10)
		bool bRequireLoS; // 0x110(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery RequiredTagsQuery; // 0x118(0x48)
		unsigned char UnknownData03_7[0xE8]; // 0x160(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIEvaluator_NearbyActorsPerception");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIEvaluator_SmartObjects
	// Inherited from UFortAthenaAIEvaluator -> UObject
	// Size: 0xC8 (0x168 - 0xA0)
	class UFortAthenaAIEvaluator_SmartObjects : public UFortAthenaAIEvaluator	
	{
	public:
		UFortAthenaAIRuntimeParameters_SmartObjectBase* SmartObjectRuntimeParameters; // 0xA0(0x8)
		USmartObjectSubsystem* SmartObjectSubsystem; // 0xA8(0x8)
		unsigned char UnknownData00_6[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY
		FGameplayTag EvaluationTag; // 0xB8(0x4)
		bool bEvaluateSOValidityAfterChosen; // 0xBC(0x1)
		bool bEnableEntryLocationsSupport; // 0xBD(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xBE(0x2) UNKNOWN PROPERTY
		FScalableFloat MaximumEntryLocationsChecksPerEvaluation; // 0xC0(0x28)
		FScalableFloat EntryLocationFailuresBlacklistedTime; // 0xE8(0x28)
		UCurveFloat* DistanceToWeightCurveForSlotPicking; // 0x110(0x8)
		UClass* OverridenFilterClassForEntryPoints; // 0x118(0x8)
		TArray<FName> ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames; // 0x120(0x10)
		unsigned char UnknownData02_6[0x10]; // 0x130(0x10) UNKNOWN PROPERTY
		FName SmartObjectExecutionStatusKeyName; // 0x140(0x4)
		FName SmartObjectMovementStateKeyName; // 0x144(0x4)
		FName SmartObjectDestinationKeyName; // 0x148(0x4)
		FName SmartObjectDestinationRotationKeyName; // 0x14C(0x4)
		FName SmartObjectShouldMoveKeyName; // 0x150(0x4)
		FName SmartObjectUrgencyKeyName; // 0x154(0x4)
		unsigned char UnknownData03_7[0x10]; // 0x158(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIEvaluator_SmartObjects");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAIEvaluator_SpeechBubble
	// Inherited from UFortAthenaAIEvaluator_NearbyActorsPerception -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x8 (0x250 - 0x248)
	class UFortAthenaAIEvaluator_SpeechBubble : public UFortAthenaAIEvaluator_NearbyActorsPerception	
	{
	public:
		UFortPawnComponent_SpeechBubble* CachedSpeechBubbleComponent; // 0x248(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAIEvaluator_SpeechBubble");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTContext_SuppressAutomaticAttackCheck
	// Inherited from UFortBTService_ContextOverride -> UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UFortAthenaBTContext_SuppressAutomaticAttackCheck : public UFortBTService_ContextOverride	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTContext_SuppressAutomaticAttackCheck");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_AgentOffNavMesh
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x38 (0xA8 - 0x70)
	class UFortAthenaBTService_AgentOffNavMesh : public UBTService	
	{
	public:
		FName AgentIsOffNavMeshKeyName; // 0x70(0x4)
		bool bEvaluateOnTick; // 0x74(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x75(0x3) UNKNOWN PROPERTY
		FScalableFloat TickInterval; // 0x78(0x28)
		bool bEvaluateOnMoveRequestFinished; // 0xA0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_AgentOffNavMesh");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_AIEvaluator
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UFortAthenaBTService_AIEvaluator : public UBTService	
	{
	public:
		FGameplayTag InjectionTag; // 0x70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		UClass* AIEvaluatorClass; // 0x78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_AIEvaluator");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_ApplyGameplayTags
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x20 (0x90 - 0x70)
	class UFortAthenaBTService_ApplyGameplayTags : public UBTService	
	{
	public:
		FGameplayTagContainer GameplayTagsToApply; // 0x70(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_ApplyGameplayTags");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_ApplyPatrolTags
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UFortAthenaBTService_ApplyPatrolTags : public UBTService	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_ApplyPatrolTags");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_BuildConstruction
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x18 (0x88 - 0x70)
	class UFortAthenaBTService_BuildConstruction : public UBTService	
	{
	public:
		FName StealWallBuildName; // 0x70(0x4)
		FName StealWallBuildTypeName; // 0x74(0x4)
		FName StealWallBuildGridCoordName; // 0x78(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x7C(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_BuildConstruction");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_Clamber
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x38 (0xA8 - 0x70)
	class UFortAthenaBTService_Clamber : public UBTService	
	{
	public:
		FName ClamberExecutionStatusName; // 0x70(0x4)
		FName ClamberOriginLocationName; // 0x74(0x4)
		FName ClamberDestinationLocationName; // 0x78(0x4)
		FName ClamberAbilityStatusName; // 0x7C(0x4)
		FName JumpExecutionStatusName; // 0x80(0x4)
		FName CrouchExecutionStatusName; // 0x84(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x88(0xC) UNKNOWN PROPERTY
		uint32_t FirstJumpRetryMaxCount; // 0x94(0x4)
		uint32_t ClamberAttemptRetryMaxCount; // 0x98(0x4)
		float FirstJumpRetryDelay; // 0x9C(0x4)
		float FirstJumpClamberMaxStartDelay; // 0xA0(0x4)
		float ClamberRetryDelay; // 0xA4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_Clamber");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_CopyBlackboardVariable
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x58 (0xC8 - 0x70)
	class UFortAthenaBTService_CopyBlackboardVariable : public UBTService	
	{
	public:
		FBlackboardKeySelector SourceBlackboardKey; // 0x70(0x28)
		FBlackboardKeySelector DestinationBlackboardKey; // 0x98(0x28)
		bool bCopyOnBecomeRelevant : 1; // 0xC0:0(0x1)
		bool bCopyOnCeaseRelevant : 1; // 0xC0:1(0x1)
		bool bCopyWhenSourceValueChange : 1; // 0xC0:2(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_CopyBlackboardVariable");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_Crouch
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFortAthenaBTService_Crouch : public UBTService	
	{
	public:
		FName CrouchExecutionStatusName; // 0x70(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_Crouch");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_DontForgetCurrentThreat
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UFortAthenaBTService_DontForgetCurrentThreat : public UBTService	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_DontForgetCurrentThreat");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_Escape
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UFortAthenaBTService_Escape : public UBTService	
	{
	public:
		FName EscapeKeyName; // 0x70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FName EscapeFromStormKeyName; // 0x78(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_Escape");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_Interact
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0xD0 (0x140 - 0x70)
	class UFortAthenaBTService_Interact : public UBTService	
	{
	public:
		FBlackboardKeySelector InteractExecutionStatusKeySelector; // 0x70(0x28)
		FBlackboardKeySelector InteractContextInfoKeySelector; // 0x98(0x28)
		FBlackboardKeySelector InteractObjectKeySelector; // 0xC0(0x28)
		FBlackboardKeySelector ExecutionStatusKeySelector; // 0xE8(0x28)
		FBlackboardKeySelector MovementStateKeySelector; // 0x110(0x28)
		TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted; // 0x138(0x1)
		bool bRequireDistanceCheck; // 0x139(0x1)
		bool bRequireBlockedCheck; // 0x13A(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x13B(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_Interact");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_Jump
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x18 (0x88 - 0x70)
	class UFortAthenaBTService_Jump : public UBTService	
	{
	public:
		FName JumpExecutionStatusName; // 0x70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FName CrouchExecutionStatusName; // 0x78(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		float JumpInputReleaseDelay; // 0x80(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x84(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_Jump");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_JetpackStrafe
	// Inherited from UFortAthenaBTService_Jump -> UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x10 (0x98 - 0x88)
	class UFortAthenaBTService_JetpackStrafe : public UFortAthenaBTService_Jump	
	{
	public:
		FName JetpackStrafeExecutionStatusName; // 0x88(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet; // 0x90(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_JetpackStrafe");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_JumpOffBus
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFortAthenaBTService_JumpOffBus : public UBTService	
	{
	public:
		FName JumpOffBusExecutionStatusName; // 0x70(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_JumpOffBus");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_ManageWeapon
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x50 (0xC0 - 0x70)
	class UFortAthenaBTService_ManageWeapon : public UBTService	
	{
	public:
		FName WeaponFireName; // 0x70(0x4)
		FName WeaponTriggerMeleeName; // 0x74(0x4)
		FName WeaponTriggerThrowableName; // 0x78(0x4)
		FName WeaponReloadName; // 0x7C(0x4)
		FName WeaponName; // 0x80(0x4)
		FName WeaponTargetingName; // 0x84(0x4)
		FName SprintExecutionStatusName; // 0x88(0x4)
		FName TacticalSprintExecutionStatusName; // 0x8C(0x4)
		FName HealingStatusKeyName; // 0x90(0x4)
		FName BlockWeaponActionsKeyName; // 0x94(0x4)
		unsigned char UnknownData00_6[0x14]; // 0x98(0x14) UNKNOWN PROPERTY
		FValueOrBBKey_Bool AllowAttackingWhileSprinting; // 0xAC(0xC)
		bool bEndChargeOnFireStop; // 0xB8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_ManageWeapon");
			return ret;
		}

		void ManageWeaponTargeting(UBehaviorTreeComponent* OwnerComp); // Flags: Final|Native|Protected|Const, Memory Exec: 0x7FF74FBADAD8(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaBTService_ManageVehicleWeapon
	// Inherited from UFortAthenaBTService_ManageWeapon -> UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UFortAthenaBTService_ManageVehicleWeapon : public UFortAthenaBTService_ManageWeapon	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_ManageVehicleWeapon");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x70 (0xE0 - 0x70)
	class UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween : public UBTService	
	{
	public:
		FBlackboardKeySelector BlackboardKeyA; // 0x70(0x28)
		FBlackboardKeySelector BlackboardKeyB; // 0x98(0x28)
		float MinDistance; // 0xC0(0x4)
		float MaxDistance; // 0xC4(0x4)
		float MinDistanceSpeed; // 0xC8(0x4)
		float MaxDistanceSpeed; // 0xCC(0x4)
		bool bCalculateAs2D; // 0xD0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0xD1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_MovementListener
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x68 (0xD8 - 0x70)
	class UFortAthenaBTService_MovementListener : public UBTService	
	{
	public:
		FName MovementStateKeyName; // 0x70(0x4)
		FName IsStuckKeyName; // 0x74(0x4)
		bool bSuccessPartialAsFail; // 0x78(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		FScalableFloat MaxFailCount; // 0x80(0x28)
		FScalableFloat MaxDurationToFail; // 0xA8(0x28)
		unsigned char UnknownData01_7[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_MovementListener");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_Patrolling
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x20 (0x90 - 0x70)
	class UFortAthenaBTService_Patrolling : public UBTService	
	{
	public:
		FName PatrollingAppendDestinationKeyName; // 0x70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		float AcceptableRadius; // 0x78(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		UClass* FilterClass; // 0x80(0x8)
		bool bAllowPartialPath : 1; // 0x88:0(0x1)
		bool bProjectGoalLocation : 1; // 0x88:1(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x89(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_Patrolling");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_PauseVehicle
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UFortAthenaBTService_PauseVehicle : public UBTService	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_PauseVehicle");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_PickUpLoot
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x20 (0x90 - 0x70)
	class UFortAthenaBTService_PickUpLoot : public UBTService	
	{
	public:
		FName LootObjectKeyName; // 0x70(0x4)
		FName ExecutionStatusName; // 0x74(0x4)
		FName InteractionExecutionStatusName; // 0x78(0x4)
		FName InteractionContextInfoName; // 0x7C(0x4)
		FName MovementStateKeyName; // 0x80(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x84(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_PickUpLoot");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_PropagatePatrolProgressToPassengers
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFortAthenaBTService_PropagatePatrolProgressToPassengers : public UBTService	
	{
	public:
		FName PatrollingAppendDestinationKeyName; // 0x70(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_PropagatePatrolProgressToPassengers");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_Revive
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x20 (0x90 - 0x70)
	class UFortAthenaBTService_Revive : public UBTService	
	{
	public:
		FName ReviveTargetKeyName; // 0x70(0x4)
		FName ExecutionStatusName; // 0x74(0x4)
		FName MoveToPathMovementStateName; // 0x78(0x4)
		FName InteractionExecutionStatusName; // 0x7C(0x4)
		FName InteractionContextInfoName; // 0x80(0x4)
		bool bDisableLeash; // 0x84(0x1)
		unsigned char UnknownData00_7[0xB]; // 0x85(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_Revive");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_SetAIFocus
	// Inherited from UBTService_DefaultFocus -> UBTService_BlackboardBase -> UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFortAthenaBTService_SetAIFocus : public UBTService_DefaultFocus	
	{
	public:
		EBTServiceSetAIFocusPriority FocusPriorityToSet; // 0xA0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_SetAIFocus");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_SetBlackboardBool
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x30 (0xA0 - 0x70)
	class UFortAthenaBTService_SetBlackboardBool : public UBTService	
	{
	public:
		FBlackboardKeySelector BlackboardKey; // 0x70(0x28)
		bool bBlackboardValue; // 0x98(0x1)
		EBTSetBlackboardBoolExitActions ExitAction; // 0x99(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x9A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_SetBlackboardBool");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_SetExecutionStatus
	// Inherited from UBTService_BlackboardBase -> UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x8 (0xA0 - 0x98)
	class UFortAthenaBTService_SetExecutionStatus : public UBTService_BlackboardBase	
	{
	public:
		EExecutionStatus ExecutionStatus; // 0x98(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_SetExecutionStatus");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_Slide
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFortAthenaBTService_Slide : public UBTService	
	{
	public:
		FName SlideExecutionStatusName; // 0x70(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_Slide");
			return ret;
		}

		void OnStopSliding(AFortPlayerPawn* Pawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FBADBE8(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaBTService_SmartObject
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x18 (0x88 - 0x70)
	class UFortAthenaBTService_SmartObject : public UBTService	
	{
	public:
		FName SmartObjectStatusKeyName; // 0x70(0x4)
		FName SmartObjectDestinationKeyName; // 0x74(0x4)
		FGameplayTag EvaluationTag; // 0x78(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x7C(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_SmartObject");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_Sprinting
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x70 (0xE0 - 0x70)
	class UFortAthenaBTService_Sprinting : public UBTService	
	{
	public:
		unsigned char UnknownData00_3[0x40]; // 0x70(0x40) UNKNOWN PROPERTY
		FName SprintExecutionStatusName; // 0xB0(0x4)
		FName TacticalSprintExecutionStatusName; // 0xB4(0x4)
		FName TacticalSprintOverridenName; // 0xB8(0x4)
		FValueOrBBKey_Bool EnableSprinting; // 0xBC(0xC)
		FValueOrBBKey_Bool ValidateSprintingBeforeTacticalSprinting; // 0xC8(0xC)
		unsigned char UnknownData01_7[0xC]; // 0xD4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_Sprinting");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_UpdateTarget
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UFortAthenaBTService_UpdateTarget : public UBTService	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_UpdateTarget");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_UseItem
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x30 (0xA0 - 0x70)
	class UFortAthenaBTService_UseItem : public UBTService	
	{
	public:
		FName ActionObjectKeyName; // 0x70(0x4)
		FName ExecutionStatusKeyName; // 0x74(0x4)
		FName CanMoveWhileUsingItemKeyName; // 0x78(0x4)
		int32_t MaxEquipAttempts; // 0x7C(0x4)
		float EquipRetryInterval; // 0x80(0x4)
		float UseItemDelay; // 0x84(0x4)
		float MinWaitTimeBetweenUses; // 0x88(0x4)
		float MaxWaitTimeBetweenUses; // 0x8C(0x4)
		bool bCanOnlyUseMobileItems; // 0x90(0x1)
		bool bBlockWeaponActions; // 0x91(0x1)
		bool bValidateAbility; // 0x92(0x1)
		bool bResetActionObjectKey; // 0x93(0x1)
		bool bUseAlternateMode; // 0x94(0x1)
		unsigned char UnknownData00_7[0xB]; // 0x95(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_UseItem");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_WaitForPassengers
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFortAthenaBTService_WaitForPassengers : public UBTService	
	{
	public:
		FName WaitForPassengersStatusKeyName; // 0x70(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_WaitForPassengers");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTService_Zipline
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x48 (0xB8 - 0x70)
	class UFortAthenaBTService_Zipline : public UBTService	
	{
	public:
		FName ZiplineTargetName; // 0x70(0x4)
		FName InteractionExecutionStatusName; // 0x74(0x4)
		FName InteractionContextInfoName; // 0x78(0x4)
		FName UsageExecutionStatusName; // 0x7C(0x4)
		FName ZiplineEntryLocationName; // 0x80(0x4)
		FName ZiplineExitLocationKeyName; // 0x84(0x4)
		FName MoveToPathMovementStateName; // 0x88(0x4)
		FName MoveExecutionStatusName; // 0x8C(0x4)
		FName FocalPointName; // 0x90(0x4)
		unsigned char UnknownData00_7[0x24]; // 0x94(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTService_Zipline");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_ActivateVehicleBoost
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UFortAthenaBTTask_ActivateVehicleBoost : public UBTTaskNode	
	{
	public:
		bool bActivateBoost; // 0x70(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		float BoostLength; // 0x74(0x4)
		bool bIgnoreMinimumDistanceLeft; // 0x78(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_ActivateVehicleBoost");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_MoveTo
	// Inherited from UBTTask_MoveTo -> UBTTask_BlackboardBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x10 (0x140 - 0x130)
	class UFortAthenaBTTask_MoveTo : public UBTTask_MoveTo	
	{
	public:
		FName MovementResultKeyName; // 0x130(0x4)
		FName ExecutionStatusKeyName; // 0x134(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x138(0x4) UNKNOWN PROPERTY
		bool bAllowRestartOnPartialSuccess : 1; // 0x13C:0(0x1)
		bool bAllowPartialPathToUncompleteNavigationArea : 1; // 0x13C:1(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x13D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_MoveTo");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_BotMoveTo
	// Inherited from UFortAthenaBTTask_MoveTo -> UBTTask_MoveTo -> UBTTask_BlackboardBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x30 (0x170 - 0x140)
	class UFortAthenaBTTask_BotMoveTo : public UFortAthenaBTTask_MoveTo	
	{
	public:
		FName NoSmashMoveGoalActorKeyName; // 0x140(0x4)
		unsigned char UnknownData00_6[0x2]; // 0x144(0x2) UNKNOWN PROPERTY
		bool bAllowRandomWobble : 1; // 0x146:0(0x1)
		unsigned char UnknownData01_5[0x1]; // 0x147(0x1) UNKNOWN PROPERTY
		FValueOrBBKey_Bool AllowRandomWobble; // 0x148(0xC)
		bool bIsUrgentMovement : 1; // 0x154:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x155(0x3) UNKNOWN PROPERTY
		FValueOrBBKey_Bool IsUrgentMovement; // 0x158(0xC)
		FValueOrBBKey_Bool IgnoreObstaclesOnPath; // 0x164(0xC)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_BotMoveTo");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_BotUnstuckTeleport
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x80 (0xF0 - 0x70)
	class UFortAthenaBTTask_BotUnstuckTeleport : public UBTTaskNode	
	{
	public:
		FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x70(0x48)
		FName CanReachDestinationKeyName; // 0xB8(0x4)
		FName TeleportExecutionStatusKeyName; // 0xBC(0x4)
		FName LastPartialPathTimeKeyName; // 0xC0(0x4)
		FName LastPartialPathCountKeyName; // 0xC4(0x4)
		unsigned char UnknownData00_6[0x20]; // 0xC8(0x20) UNKNOWN PROPERTY
		UFortAthenaAIBotUnstuckDigestedSkillSet* UnstuckSkillSet; // 0xE8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_BotUnstuckTeleport");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_BotWait
	// Inherited from UBTTask_Wait -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x28 (0xB0 - 0x88)
	class UFortAthenaBTTask_BotWait : public UBTTask_Wait	
	{
	public:
		FBlackboardKeySelector WaitCompleteKeySelector; // 0x88(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_BotWait");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_Build
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UFortAthenaBTTask_Build : public UBTTaskNode	
	{
	public:
		FName ExecutionStatusKeyName; // 0x70(0x4)
		FName FocalPointName; // 0x74(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_Build");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_Conversation
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFortAthenaBTTask_Conversation : public UBTTaskNode	
	{
	public:
		FName ConversationStatusKeyName; // 0x70(0x4)
		unsigned char UnknownData00_6[0x2]; // 0x74(0x2) UNKNOWN PROPERTY
		bool bResetEvaluatorStatusKeyOnFinish; // 0x76(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x77(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_Conversation");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_Dive
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UFortAthenaBTTask_Dive : public UBTTaskNode	
	{
	public:
		FName ExecutionStatusKeyName; // 0x70(0x4)
		FName DiveDestinationKeyName; // 0x74(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_Dive");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_EnterVehicle
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFortAthenaBTTask_EnterVehicle : public UBTTaskNode	
	{
	public:
		FName SelectedVehicleKeyName; // 0x70(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_EnterVehicle");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_EquipItem
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x50 (0xC0 - 0x70)
	class UFortAthenaBTTask_EquipItem : public UBTTaskNode	
	{
	public:
		FName WeaponKeyName; // 0x70(0x4)
		FName EquipItemKeyName; // 0x74(0x4)
		FValueOrBBKey_Bool DisableEquipAnimation; // 0x78(0xC)
		FValueOrBBKey_Bool WaitForEquipToFinish; // 0x84(0xC)
		FValueOrBBKey_GameplayTagContainer ItemTagToEquip; // 0x90(0x28)
		unsigned char UnknownData00_7[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_EquipItem");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_Escalate
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFortAthenaBTTask_Escalate : public UBTTaskNode	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_Escalate");
			return ret;
		}

		void BP_OnHasEscalateTarget(AFortPlayerPawn* OwnerActor, AFortPlayerPawn* EscalateTarget); // Flags: Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEscalate(AFortPlayerPawn* OwnerActor, AFortPlayerPawn* EscalateTarget); // Flags: Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaBTTask_Glide
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UFortAthenaBTTask_Glide : public UBTTaskNode	
	{
	public:
		FName ExecutionStatusKeyName; // 0x70(0x4)
		FName GlideDestinationKeyName; // 0x74(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_Glide");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_Interact
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x78 (0xE8 - 0x70)
	class UFortAthenaBTTask_Interact : public UBTTaskNode	
	{
	public:
		float AttemptInterval; // 0x70(0x4)
		int32_t MaxInteractAttempts; // 0x74(0x4)
		bool bShouldFocusOnInteraction; // 0x78(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		FBlackboardKeySelector InteractExecutionStatusKeySelector; // 0x80(0x28)
		FBlackboardKeySelector InteractContextInfoKeySelector; // 0xA8(0x28)
		FName FocalPointName; // 0xD0(0x4)
		FName InteractActorName; // 0xD4(0x4)
		FName JumpExecutionStatusName; // 0xD8(0x4)
		FName WeaponTriggerMeleeName; // 0xDC(0x4)
		unsigned char UnknownData01_7[0x8]; // 0xE0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_Interact");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_LeaveVehicle
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFortAthenaBTTask_LeaveVehicle : public UBTTaskNode	
	{
	public:
		bool bWaitVehicleStop; // 0x70(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_LeaveVehicle");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_ModulateVehicleSpeed
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x18 (0x88 - 0x70)
	class UFortAthenaBTTask_ModulateVehicleSpeed : public UBTTaskNode	
	{
	public:
		FValueOrBBKey_Float DrivingSpeed; // 0x70(0xC)
		float NewDrivingSpeed; // 0x7C(0x4)
		bool bResetControlPIDs; // 0x80(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_ModulateVehicleSpeed");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_PauseVehicle
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFortAthenaBTTask_PauseVehicle : public UBTTaskNode	
	{
	public:
		bool bPausePathFollow; // 0x70(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_PauseVehicle");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_PlayEmote
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x18 (0x88 - 0x70)
	class UFortAthenaBTTask_PlayEmote : public UBTTaskNode	
	{
	public:
		FName PlayEmoteExecutionStatusKeyName; // 0x70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		TArray<UAthenaDanceItemDefinition*> BespokeEmotes; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_PlayEmote");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_ReverseVehicle
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFortAthenaBTTask_ReverseVehicle : public UBTTaskNode	
	{
	public:
		bool bReverseVehicle; // 0x70(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_ReverseVehicle");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_RunDynamicSubtree
	// Inherited from UBTTask_RunBehaviorDynamic -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0x90 - 0x88)
	class UFortAthenaBTTask_RunDynamicSubtree : public UBTTask_RunBehaviorDynamic	
	{
	public:
		bool bCallParentOnInstanceCreated : 1; // 0x88:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x89(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_RunDynamicSubtree");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_SetAggressiveDriving
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFortAthenaBTTask_SetAggressiveDriving : public UBTTaskNode	
	{
	public:
		bool bAggressiveDriving; // 0x70(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_SetAggressiveDriving");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_ShootTrap
	// Inherited from UBTTask_Wait -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x30 (0xB8 - 0x88)
	class UFortAthenaBTTask_ShootTrap : public UBTTask_Wait	
	{
	public:
		FBlackboardKeySelector TargetActorKey; // 0x88(0x28)
		FName TrapOnPathKeyName; // 0xB0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_ShootTrap");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_SteerMovement
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x30 (0xA0 - 0x70)
	class UFortAthenaBTTask_SteerMovement : public UBTTaskNode	
	{
	public:
		FBlackboardKeySelector SteerDirectionKeySelector; // 0x70(0x28)
		bool bSetControlRotation : 1; // 0x98:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_SteerMovement");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_Undermine
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x18 (0x88 - 0x70)
	class UFortAthenaBTTask_Undermine : public UBTTaskNode	
	{
	public:
		FName UndermineTargetKeyName; // 0x70(0x4)
		FName UndermineLocationImpactName; // 0x74(0x4)
		FName UndermineExecutionStatusKeyName; // 0x78(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x7C(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_Undermine");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_UseItem
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x68 (0xD8 - 0x70)
	class UFortAthenaBTTask_UseItem : public UBTTaskNode	
	{
	public:
		FName ActionObjectKeyName; // 0x70(0x4)
		FName ExecutionStatusKeyName; // 0x74(0x4)
		FName UseItemSelectNewWeaponName; // 0x78(0x4)
		FValueOrBBKey_Float MinimumWaitTimeBetweenUses; // 0x7C(0xC)
		FValueOrBBKey_Float MaximumWaitTimeBetweenUses; // 0x88(0xC)
		FValueOrBBKey_Bool ValidateAbility; // 0x94(0xC)
		FValueOrBBKey_Bool ValidateAbilityBeforeEquipping; // 0xA0(0xC)
		FValueOrBBKey_Bool ResetActionObjectKey; // 0xAC(0xC)
		FValueOrBBKey_Bool UseAlternateMode; // 0xB8(0xC)
		unsigned char UnknownData00_6[0x8]; // 0xC4(0x8) UNKNOWN PROPERTY
		float MinWaitTimeBetweenUses; // 0xCC(0x4)
		float MaxWaitTimeBetweenUses; // 0xD0(0x4)
		bool bValidateAbility; // 0xD4(0x1)
		bool bResetActionObjectKey; // 0xD5(0x1)
		bool bUseAlternateMode; // 0xD6(0x1)
		unsigned char UnknownData01_7[0x1]; // 0xD7(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_UseItem");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_UseSmartObject
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x28 (0x98 - 0x70)
	class UFortAthenaBTTask_UseSmartObject : public UBTTaskNode	
	{
	public:
		FGameplayTag EvaluationTag; // 0x70(0x4)
		FName SmartObjectsStatusKeyName; // 0x74(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x78(0x4) UNKNOWN PROPERTY
		FName SmartObjectDestinationRotationKeyName; // 0x7C(0x4)
		unsigned char UnknownData01_6[0x2]; // 0x80(0x2) UNKNOWN PROPERTY
		bool bHandleAbortWithSoftDisable; // 0x82(0x1)
		unsigned char UnknownData02_7[0x15]; // 0x83(0x15) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_UseSmartObject");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_VehicleHonk
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UFortAthenaBTTask_VehicleHonk : public UBTTaskNode	
	{
	public:
		float MaxHonkTime; // 0x70(0x4)
		float MinHonkTime; // 0x74(0x4)
		float MaxFlickerTime; // 0x78(0x4)
		float MinFlickerTime; // 0x7C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_VehicleHonk");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_VehicleTurnTo
	// Inherited from UBTTask_BlackboardBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0xA0 - 0x98)
	class UFortAthenaBTTask_VehicleTurnTo : public UBTTask_BlackboardBase	
	{
	public:
		float Precision; // 0x98(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_VehicleTurnTo");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaBTTask_Zipline
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UFortAthenaBTTask_Zipline : public UBTTaskNode	
	{
	public:
		FName UsageExecutionStatusName; // 0x70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FName ZiplineTargetName; // 0x78(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaBTTask_Zipline");
			return ret;
		}

		void OnZiplineStateChanged(bool bIsZiplining, AFortPlayerPawn* FortPlayerPawn); // Flags: Final|Native|Public, Memory Exec: 0x7FF74FBC4128(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaNpcEvaluator_Encampment
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x2A8 (0x448 - 0x1A0)
	class UFortAthenaNpcEvaluator_Encampment : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FScalableFloat EncampmentEnable; // 0x1A0(0x28)
		FScalableFloat EncampmentTentativeDelayMin; // 0x1C8(0x28)
		FScalableFloat EncampmentTentativeDelayMax; // 0x1F0(0x28)
		FScalableFloat EncampmentDurationMin; // 0x218(0x28)
		FScalableFloat EncampmentDurationMax; // 0x240(0x28)
		FScalableFloat BuilderPercentage; // 0x268(0x28)
		FScalableFloat BuilderMinDistance; // 0x290(0x28)
		FScalableFloat BuilderMaxDistance; // 0x2B8(0x28)
		FScalableFloat GuardMinDistance; // 0x2E0(0x28)
		FScalableFloat GuardMaxDistance; // 0x308(0x28)
		FScalableFloat AllowInSwimming; // 0x330(0x28)
		FScalableFloat AllowInFalling; // 0x358(0x28)
		FScalableFloat MinSquadMembersCountToBuild; // 0x380(0x28)
		FName EncampmentStatusKeyName; // 0x3A8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3AC(0x4) UNKNOWN PROPERTY
		FName EncampmentMovementStateKeyName; // 0x3B0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3B4(0x4) UNKNOWN PROPERTY
		FName EncampmentCenterLocationKeyName; // 0x3B8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x3BC(0x4) UNKNOWN PROPERTY
		FName EncampmentDestinationKeyName; // 0x3C0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x3C4(0x4) UNKNOWN PROPERTY
		FName EncampmentAroundCampFireLocationKeyName; // 0x3C8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x3CC(0x4) UNKNOWN PROPERTY
		FName EncampmentRoleKeyName; // 0x3D0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x3D4(0x4) UNKNOWN PROPERTY
		FName DefensiveBuildName; // 0x3D8(0x4)
		unsigned char UnknownData06_7[0x6C]; // 0x3DC(0x6C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaNpcEvaluator_Encampment");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaNpcEvaluator_FollowPatrolPath
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x38 (0x1D8 - 0x1A0)
	class UFortAthenaNpcEvaluator_FollowPatrolPath : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName FollowPatrolPathKeyName; // 0x1A0(0x4)
		FName FollowPatrolPathMovementStateKeyName; // 0x1A4(0x4)
		FName FollowPatrolPathDestinationKeyName; // 0x1A8(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x1AC(0x8) UNKNOWN PROPERTY
		float ChanceToTakeABreak; // 0x1B4(0x4)
		float BreakDurationMin; // 0x1B8(0x4)
		float BreakDurationMax; // 0x1BC(0x4)
		unsigned char UnknownData01_7[0x18]; // 0x1C0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaNpcEvaluator_FollowPatrolPath");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaNpcEvaluator_FollowSquadLeader
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x150 (0x2F0 - 0x1A0)
	class UFortAthenaNpcEvaluator_FollowSquadLeader : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FScalableFloat FormationOffsetRadiusMin; // 0x1A0(0x28)
		FScalableFloat FormationOffsetRadiusMax; // 0x1C8(0x28)
		FScalableFloat TooFarFromSquadLeaderDistance; // 0x1F0(0x28)
		FScalableFloat MaxNoiseRadius; // 0x218(0x28)
		FScalableFloat MinDurationNoiseEvaluate; // 0x240(0x28)
		FScalableFloat MaxDurationNoiseEvaluate; // 0x268(0x28)
		FName FollowSquadLeaderStatusKeyName; // 0x290(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		FName FollowSquadLeaderMovementStateKeyName; // 0x298(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x29C(0x4) UNKNOWN PROPERTY
		FName FollowSquadLeaderDestinationKeyName; // 0x2A0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2A4(0x4) UNKNOWN PROPERTY
		FName TooFarFromLeaderKeyName; // 0x2A8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x2AC(0x4) UNKNOWN PROPERTY
		FVector CachedSquadFormationOffset; // 0x2B0(0x18)
		FVector CachedNoiseOffset; // 0x2C8(0x18)
		float CachedTooFarFromSquadLeaderDistanceSqr; // 0x2E0(0x4)
		float LastNoiseOffsetUpdateTime; // 0x2E4(0x4)
		float DurationNoiseEvaluate; // 0x2E8(0x4)
		unsigned char UnknownData04_7[0x4]; // 0x2EC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaNpcEvaluator_FollowSquadLeader");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaNpcEvaluator_Leash
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x40 (0x1E0 - 0x1A0)
	class UFortAthenaNpcEvaluator_Leash : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName LeashKeyName; // 0x1A0(0x4)
		FName LeashMovementStateKeyName; // 0x1A4(0x4)
		FName LeashDestinationKeyName; // 0x1A8(0x4)
		FName LeashLocationKeyName; // 0x1AC(0x4)
		FName LeashOuterRadiusKeyName; // 0x1B0(0x4)
		FName ShouldTeleportInLeashKeyName; // 0x1B4(0x4)
		FName TriggerLeashBehaviorKeyName; // 0x1B8(0x4)
		bool bAlwaysForceMoveToLeashCenter; // 0x1BC(0x1)
		bool bForcePositionOnLeash; // 0x1BD(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1BE(0x2) UNKNOWN PROPERTY
		UClass* AvoidObstaclesFilterClass; // 0x1C0(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x1C8(0x10) UNKNOWN PROPERTY
		UFortAthenaAIRuntimeParameters_Leash* LeashRuntimeParameters; // 0x1D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaNpcEvaluator_Leash");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaNpcEvaluator_Patrolling
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x50 (0x1F0 - 0x1A0)
	class UFortAthenaNpcEvaluator_Patrolling : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		FName PatrollingKeyName; // 0x1A0(0x4)
		FName PatrollingMovementStateKeyName; // 0x1A4(0x4)
		FName PatrollingDestinationKeyName; // 0x1A8(0x4)
		FName DynamicBlueprintStatusKeyName; // 0x1AC(0x4)
		FName DynamicBlueprintActorKeyName; // 0x1B0(0x4)
		FName PatrollingShouldMoveKeyName; // 0x1B4(0x4)
		FName PatrollingAppendDestinationKeyName; // 0x1B8(0x4)
		unsigned char UnknownData00_6[0x10]; // 0x1BC(0x10) UNKNOWN PROPERTY
		float DistanceToTestPoint; // 0x1CC(0x4)
		bool bCanDisablePatrolling; // 0x1D0(0x1)
		bool bCanReenablePatrolling; // 0x1D1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x1D2(0x2) UNKNOWN PROPERTY
		float ReenableTimer; // 0x1D4(0x4)
		bool bCanSelectNearestPatrolPointAtStart; // 0x1D8(0x1)
		bool bCanRetryOnPartialPathSuccess; // 0x1D9(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x1DA(0x6) UNKNOWN PROPERTY
		UFortAthenaNpcPatrollingComponent* CachedNpcPatrollingComponent; // 0x1E0(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaNpcEvaluator_Patrolling");
			return ret;
		}
	};


	// Class FortniteAIServer.FortQueryContext_BotPOIVolume
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFortQueryContext_BotPOIVolume : public UEnvQueryContext	
	{
	public:
		bool bSetProjectedToNavmeshLocationAsContext; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FVector ProjectionExtent; // 0x30(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortQueryContext_BotPOIVolume");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaAttachToActorStateTreeTask
	// Inherited from UStateTreeTaskBlueprintBase -> UStateTreeNodeBlueprintBase -> UObject
	// Size: 0x48 (0xA0 - 0x58)
	class UFortAthenaAttachToActorStateTreeTask : public UStateTreeTaskBlueprintBase	
	{
	public:
		AActor* Actor; // 0x58(0x8)
		AActor* TargetActor; // 0x60(0x8)
		EFortAthenaStateTreeTaskFeatureExecutionMode AttachExecutionMode; // 0x68(0x4)
		bool bHandleAthenaMovComponent; // 0x6C(0x1)
		bool bSetPhysicsToQueryOnlyWhileAttached; // 0x6D(0x1)
		bool bTryToAttachToSkeletalMeshOnTargetActor; // 0x6E(0x1)
		bool bChangeBaseToSkeletalMeshOnTargetActor; // 0x6F(0x1)
		EAttachmentRule AttachmentLocationRule; // 0x70(0x1)
		EAttachmentRule AttachmentRotationRule; // 0x71(0x1)
		EAttachmentRule AttachmentScaleRule; // 0x72(0x1)
		bool bWeldSimulatedBodiesOnAttach; // 0x73(0x1)
		FName AttachmentSocketName; // 0x74(0x4)
		EFortAthenaStateTreeTaskFeatureExecutionMode DetachExecutionMode; // 0x78(0x4)
		bool bForceChangeBaseOnDetach; // 0x7C(0x1)
		EDetachmentRule DetachmentLocationRule; // 0x7D(0x1)
		EDetachmentRule DetachmentRotationRule; // 0x7E(0x1)
		EDetachmentRule DetachmentScaleRule; // 0x7F(0x1)
		bool bCallModifyOnDetach; // 0x80(0x1)
		bool bHandleLaunchCharacter; // 0x81(0x1)
		bool bHasHandledLaunchCharacter; // 0x82(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x83(0x5) UNKNOWN PROPERTY
		AFortPawn* FortPawnActor; // 0x88(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x90(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaAttachToActorStateTreeTask");
			return ret;
		}
	};


	// Class FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData
	// Inherited from UObject
	// Size: 0xD8 (0x100 - 0x28)
	class UFortAthenaPlayContextualAnimTaskInstanceData : public UObject	
	{
	public:
		AActor* PrimaryActor; // 0x28(0x8)
		AActor* SecondaryActor; // 0x30(0x8)
		FName SecondaryRole; // 0x38(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		AActor* TertiaryActor; // 0x40(0x8)
		FName TertiaryRole; // 0x48(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		UContextualAnimSceneAsset* SceneAsset; // 0x50(0x8)
		FName SectionName; // 0x58(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer PrimaryActorExternalTags; // 0x60(0x20)
		FGameplayTagContainer SecondaryActorExternalTags; // 0x80(0x20)
		FGameplayTagContainer TertiaryActorExternalTags; // 0xA0(0x20)
		EFortAthenaPlayContextualAnimExecutionMethod ExecutionMethod; // 0xC0(0x1)
		bool bWaitForNotifyEventToEnd; // 0xC1(0x1)
		unsigned char UnknownData03_6[0x2]; // 0xC2(0x2) UNKNOWN PROPERTY
		FName NotifyEventNameToEnd; // 0xC4(0x4)
		int32_t LoopsToRun; // 0xC8(0x4)
		bool bLoopForever; // 0xCC(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xCD(0x3) UNKNOWN PROPERTY
		float DelayBetweenLoops; // 0xD0(0x4)
		float RandomDeviationBetweenLoops; // 0xD4(0x4)
		TArray<FContextualAnimWarpTarget> WarpTargets; // 0xD8(0x10)
		bool bFindAnimSetBasedOnWarpTargets; // 0xE8(0x1)
		unsigned char UnknownData05_7[0x17]; // 0xE9(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData");
			return ret;
		}

		void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF74FBC3F68(relative to base address)
		void OnMontageEnded(UAnimMontage* EndedMontage, bool bInterrupted); // Flags: Final|Native|Public, Memory Exec: 0x7FF74FBC3DD8(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaPlayInteractionStateTreeTask
	// Inherited from UStateTreeTaskBlueprintBase -> UStateTreeNodeBlueprintBase -> UObject
	// Size: 0x80 (0xD8 - 0x58)
	class UFortAthenaPlayInteractionStateTreeTask : public UStateTreeTaskBlueprintBase	
	{
	public:
		AActor* InteractorActor; // 0x58(0x8)
		AActor* InteractableActor; // 0x60(0x8)
		UAnimMontage* InteractorMontage; // 0x68(0x8)
		UAnimMontage* InteractableMontage; // 0x70(0x8)
		bool bWaitForNotifyEventToEnd; // 0x78(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x79(0x3) UNKNOWN PROPERTY
		FName NotifyEventNameToEnd; // 0x7C(0x4)
		bool bAddMotionWarpingTargets; // 0x80(0x1)
		bool bDisableCollisionBetweenActors; // 0x81(0x1)
		bool bSetMovementModeToFlying; // 0x82(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x83(0x1) UNKNOWN PROPERTY
		int32_t LoopsToRun; // 0x84(0x4)
		bool bLoopForever; // 0x88(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x89(0x3) UNKNOWN PROPERTY
		float DelayBetweenLoops; // 0x8C(0x4)
		float RandomDeviationBetweenLoops; // 0x90(0x4)
		bool bStopInteractorAnimMontageOnExit; // 0x94(0x1)
		bool bStopInteractableAnimMontageOnExit; // 0x95(0x1)
		unsigned char UnknownData03_7[0x42]; // 0x96(0x42) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaPlayInteractionStateTreeTask");
			return ret;
		}

		void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74FBC4048(relative to base address)
		void OnMontageEnded(UAnimMontage* EndedMontage, bool bInterrupted); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FBC3EA0(relative to base address)
	};


	// Class FortniteAIServer.FortAthenaPlayMontageStateTreeTask
	// Inherited from UStateTreeTaskBlueprintBase -> UStateTreeNodeBlueprintBase -> UObject
	// Size: 0x68 (0xC0 - 0x58)
	class UFortAthenaPlayMontageStateTreeTask : public UStateTreeTaskBlueprintBase	
	{
	public:
		AActor* Actor; // 0x58(0x8)
		UAnimMontage* Montage; // 0x60(0x8)
		ESTFortAthenaPlayMontageExecMode ExecMode; // 0x68(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		FName SectionName; // 0x6C(0x4)
		ESTFortAthenaPlayMontageLoopMode LoopMode; // 0x70(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		TArray<FSTFortAthenaPlayMontageWarpTarget> WarpTargets; // 0x78(0x10)
		bool bWaitForNotifyEventToEnd; // 0x88(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x89(0x3) UNKNOWN PROPERTY
		FName NotifyEventNameToEnd; // 0x8C(0x4)
		bool bSetMovementModeToFlying; // 0x90(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x91(0x3) UNKNOWN PROPERTY
		int32_t LoopsToRun; // 0x94(0x4)
		bool bLoopForever; // 0x98(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x99(0x3) UNKNOWN PROPERTY
		float DelayBetweenLoops; // 0x9C(0x4)
		float RandomDeviationBetweenLoops; // 0xA0(0x4)
		bool bStopAnimMontageOnExit; // 0xA4(0x1)
		unsigned char UnknownData05_7[0x1B]; // 0xA5(0x1B) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortAthenaPlayMontageStateTreeTask");
			return ret;
		}

		void HandleNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74FBC3CE0(relative to base address)
		void HandleMontageEnded(UAnimMontage* EndedMontage, bool bInterrupted); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FBC3C18(relative to base address)
	};


	// Class FortniteAIServer.FortWorldConditionWorldState_State
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFortWorldConditionWorldState_State : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAIServer.FortWorldConditionWorldState_State");
			return ret;
		}

		void HandleWorldStateChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FBC3DC0(relative to base address)
	};

}
