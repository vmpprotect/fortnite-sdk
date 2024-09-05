#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Gameplay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /SupplyDropRadioGameplay/Gameplay/BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C
	// Inherited from UActorComponent -> UObject
	// Size: 0x118 (0x1B8 - 0xA0)
	class UBP_SupplyDropRadioGameStateComponent_C : public UActorComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA0(0x8)
		UDataTable* SupplyDropRadioDatatable; // 0xA8(0x8)
		TArray<FSupplyDropRadioRepDataStruct> SupplyDropRadioRepData; // 0xB0(0x10)
		FMulticastInlineDelegate OnSupplyDropRadioRepDataUpdated; // 0xC0(0x10)
		TMap<AFortPlayerPawn*, int32_t> AuthoritySupplyDropReservationMap; // 0xD0(0x50)
		FGameplayTagContainer PlaylistTags; // 0x120(0x20)
		TArray<FSupplyDropRadioPlaylistDatatableStruct> PlaylistDatatables; // 0x140(0x10)
		int32_t Analytics_SupplyDropRadioUsed; // 0x150(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x154(0x4) UNKNOWN PROPERTY
		TMap<FGameplayTag, int32_t> Analytics_SupplyDropsRequestedMap; // 0x158(0x50)
		int32_t Analytics_PlayerDestroyedFallingBalloons; // 0x1A8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1AC(0x4) UNKNOWN PROPERTY
		UAsyncAction_StartListeningToStatefulEvent* GamePhaseUpdatedAsyncTask; // 0x1B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SupplyDropRadioGameplay/Gameplay/BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C");
			return ret;
		}

		void Analytics_IncrementPlayerDestroyedFallingBalloon(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReportEndGameAnalytics(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetReservedSupplyDropRadioDataForPlayer(AFortPlayerPawn* PlayerPawn, bool& bSuccess, FSupplyDropRadioDataStruct& Data); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CacheSupplyDropRadioDatatable(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetReservedSupplyDropToFlare(AFortPlayerPawn* RequestingPlayerPawn, bool& bSuccess); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefundSupplyDrop(AFortPlayerPawn* RequestingPlayerPawn); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReserveSupplyDrop(AFortPlayerPawn* RequestingPlayerPawn, int32_t ConversationIndex, bool& bSuccessful); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_SupplyDropRadioRepData(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsConversationIndexEnabled(int32_t ConversationIndex, bool& bEnabled); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsStockAvailableForConversationIndex(int32_t ConversationIndex, bool& bAvailable, int32_t& Count); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSupplyDropRadioDataUsingGameplayTag(FGameplayTag GameplayTag, bool& IsValid, FSupplyDropRadioDataStruct& Data); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSupplyDropRadioDataUsingConversationIndex(int32_t ConversationIndex, bool& IsValid, FSupplyDropRadioDataStruct& Data); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ProcessSupplyDropRadioData(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnReady_1DC021954C93DD18FBDAB2834CD56429(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventStateCleared_0259C084446E2E792FC85F881C7422FE(UAsyncAction_StartListeningToStatefulEvent* ProxyObject); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSavedEventStateExists_0259C084446E2E792FC85F881C7422FE(UAsyncAction_StartListeningToStatefulEvent* ProxyObject); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventReceived_0259C084446E2E792FC85F881C7422FE(UAsyncAction_StartListeningToStatefulEvent* ProxyObject); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameStatePhaseChanged(EAthenaGamePhase GamePhase); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetAllStock(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetStock(FGameplayTag GameplayTag); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_SupplyDropRadioGameStateComponent(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSupplyDropRadioRepDataUpdated__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Valet/Gameplay/GE_Grant_MarkVehicle_OnExit.GE_Grant_MarkVehicle_OnExit_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Grant_MarkVehicle_OnExit_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/Gameplay/GE_Grant_MarkVehicle_OnExit.GE_Grant_MarkVehicle_OnExit_C");
			return ret;
		}
	};


	// Class /Valet/Gameplay/GA_MarkVehicle_OnExit.GA_MarkVehicle_OnExit_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x60 (0xBA0 - 0xB40)
	class UGA_MarkVehicle_OnExit_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		FGameplayTag Event_Tag; // 0xB48(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xB4C(0x4) UNKNOWN PROPERTY
		AFortAthenaVehicle* Vehicle; // 0xB50(0x8)
		UAthenaMarkerComponent* PlayerMarkerComponent; // 0xB58(0x8)
		FMarkerID LastVehicleMarkerID; // 0xB60(0x8)
		AFortPawn* FortPawn; // 0xB68(0x8)
		bool ShouldDisplayMarkerOnExit; // 0xB70(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xB71(0x7) UNKNOWN PROPERTY
		FScalableFloat Row_DisplayMarkerOnExit; // 0xB78(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/Gameplay/GA_MarkVehicle_OnExit.GA_MarkVehicle_OnExit_C");
			return ret;
		}

		void Added_39CF4AB540BB31E4876E888E53B957FE(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Removed_4445F4474DC1C1A7E4C5319F448B175D(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveEffect(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GA_MarkVehicle_OnExit(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SupplyDropRadioGameplay/Gameplay/BP_SupplyDropRadioAttachActorComponent.BP_SupplyDropRadioAttachActorComponent_C
	// Inherited from UFortSupplyDropRadioAttachActorComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UBP_SupplyDropRadioAttachActorComponent_C : public UFortSupplyDropRadioAttachActorComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA0(0x8)
		double NetCullDistanceSquared; // 0xA8(0x8)
		double OriginalNetCullDistanceSquared; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SupplyDropRadioGameplay/Gameplay/BP_SupplyDropRadioAttachActorComponent.BP_SupplyDropRadioAttachActorComponent_C");
			return ret;
		}

		void ResetNetCullDistanceSquared(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetNetCullDistanceSquared(double InNetCullDistanceSquared); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_NetCullDistanceSquared(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_SupplyDropRadioAttachActorComponent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Ascender/Gameplay/Ascender/GameplayEffects/GE_Athena_Ascender_DestroyBuilding.GE_Athena_Ascender_DestroyBuilding_C
	// Inherited from UGET_DirectPhysicalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Athena_Ascender_DestroyBuilding_C : public UGET_DirectPhysicalDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Ascender/Gameplay/Ascender/GameplayEffects/GE_Athena_Ascender_DestroyBuilding.GE_Athena_Ascender_DestroyBuilding_C");
			return ret;
		}
	};


	// Class /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C
	// Inherited from AFortAscenderZipline -> AFortAthenaSplineZipline -> AFortAthenaZipline -> AFortAthenaZiplineBase -> ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x1A0 (0x1198 - 0xFF8)
	class AB_Athena_Zipline_Ascender_C : public AFortAscenderZipline	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xFF8(0x8)
		UAudioParameterComponent* AudioParameter; // 0x1000(0x8)
		UCapsuleComponent* Capsule; // 0x1008(0x8)
		UStaticMeshComponent* Ascender_End_Cap; // 0x1010(0x8)
		UAudioComponent* PoleMotorSFX; // 0x1018(0x8)
		UNiagaraComponent* HandleVFX; // 0x1020(0x8)
		UNiagaraComponent* PoleMotorVFX; // 0x1028(0x8)
		UAudioComponent* HandleAscendingSFX; // 0x1030(0x8)
		UAudioComponent* HandleDescendingSFX; // 0x1038(0x8)
		USphereComponent* HandleInteractVolume; // 0x1040(0x8)
		UStaticMeshComponent* Handle; // 0x1048(0x8)
		UStaticMeshComponent* Top; // 0x1050(0x8)
		FScalableFloat Hotfix; // 0x1058(0x28)
		USoundBase* StartHandleSound; // 0x1080(0x8)
		USoundBase* StopHandleSound; // 0x1088(0x8)
		USoundBase* StopPoleMotorSoundSkid; // 0x1090(0x8)
		UMaterialInterface* SplineMeshMaterialOverride; // 0x1098(0x8)
		UNiagaraSystem* AscendingHandleVFX; // 0x10A0(0x8)
		UNiagaraSystem* DescendingHandleVFX; // 0x10A8(0x8)
		UMaterialInterface* SplineThickenMeshMaterialOverride; // 0x10B0(0x8)
		double MaxWobbleAnimationLength; // 0x10B8(0x8)
		double LastWobbleActivationTime; // 0x10C0(0x8)
		double TilingDivisor; // 0x10C8(0x8)
		FVector HandleAnimOffset; // 0x10D0(0x18)
		FVector SlideAnimOffset; // 0x10E8(0x18)
		USoundBase* PlayerGrabBeginDecentSound; // 0x1100(0x8)
		UAudioComponent* HandleStart; // 0x1108(0x8)
		FVector EndCapRelativeScale; // 0x1110(0x18)
		UClass* StructureDamageGE; // 0x1128(0x8)
		FTimerHandle AudioVisualizerHandle; // 0x1130(0x8)
		TArray<AFortPlayerPawn*> PlayersOnAscender; // 0x1138(0x10)
		USoundBase* TravelSound; // 0x1148(0x8)
		bool ShouldPlayWhoosh; // 0x1150(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1151(0x7) UNKNOWN PROPERTY
		USoundBase* AscendWhooshSound; // 0x1158(0x8)
		AFortPlayerPawn* PlayerPawn; // 0x1160(0x8)
		FTimerHandle WhooshHandle; // 0x1168(0x8)
		FGameplayTag LinkToDestroyedGC; // 0x1170(0x4)
		bool BeDestroy; // 0x1174(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1175(0x3) UNKNOWN PROPERTY
		APlayerState* PlayerStateUsingHandleComponent; // 0x1178(0x8)
		TArray<FAudioParameter> AudioParameters; // 0x1180(0x10)
		UAudioParameterComponent* ParameterComponent; // 0x1190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C");
			return ret;
		}

		TArray GetAffiliationsToShowFor(); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ShouldShowSoundIndicator(AFortPlayerController* PlayerController); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		EDynamicDestructionResourceType GetDynamicDestructionResourceType(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetDynamicDestructionStaticMeshComponents(TArray<UStaticMeshComponent*>& OutFullFXStaticMeshComponents, TArray<UStaticMeshComponent*>& OutVisibilityOnlyStaticMeshComponents, TArray<UStaticMeshComponent*>& OutShadowProxyStaticMeshComponents); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ShouldUseDynamicDestructionNiagaraSystem(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ShouldUseDynamicDestructionMaterial(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_BeDestroy(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool BlueprintCanInteract(AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<TInteractionType> InteractionType); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CanBeginZiplining(AFortPlayerPawn* InteractingPawn, UPrimitiveComponent* InteractComponent); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LocalOnFailedInteract(AFortPlayerPawn* InteractingPawn); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetBoundsComponents(AActor* SelfActor, TArray<USceneComponent*>& OutComponents); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyStructureDamage(ABuildingSMActor* BuildingActor, AActor* DamageSource); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AttachCapToEndOfSplineMesh(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool AttemptOverrideZiplineSocketOffset(AFortPlayerPawn* InteractingPawn, UPrimitiveComponent* InteractComponent, FVector& BaseSocketOffset, FVector& OutSocketOffset); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CalculateLaunchVelocity(AActor* PlayerPawn, FVector& LaunchVelocity); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCableTilingBySplineLength(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeactivateCableWobble(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActivateCableWobble(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HotfixEnabled(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UPrimitiveComponent GetTopComponent(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UPrimitiveComponent GetHandleComponent(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UPrimitiveComponent GetInteractComponentOverride(AFortPlayerPawn* InteractingPawn, UPrimitiveComponent* InteractComponent); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool PawnIsInHandleRange(AFortPawn* Pawn); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FText BlueprintGetInteractionString(AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetLastSplinePointIndex(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnReady_93837FC44A18F6AE57D3478CC43A98AB(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandlePlayerStartedUsingHandle(AFortPlayerPawn* Player); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandlePlayerStoppedUsingHandle(AFortPlayerPawn* Player); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleStartedLoweringCable(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleStartedLoweringHandle(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleStoppedLoweringCable(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleStoppedLoweringHandle(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnZipliningStarted(AFortPlayerPawn* InteractingPawn, UPrimitiveComponent* InteractComponent); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayerDescendingStarted(AFortPlayerPawn* Sliding Player); // Flags: Net|NetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleUpdatedLoweringCable(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnZipliningStopped(AFortPlayerPawn* InteractingPawn, UPrimitiveComponent* InteractComponent, float ZiplineUsageDuration); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShouldPlayWhooshTimer(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAscenderSetupComplete_Event(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleLinkedActorDestroyed(AActor* DamageCauser); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Athena_Zipline_Ascender(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /NitroGameplay/Gameplay/VehicleEffects/VehicleMod/Nitro_VehicleMod.Nitro_VehicleMod_C
	// Inherited from UFortVehicleModConfig -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UNitro_VehicleMod_C : public UFortVehicleModConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/NitroGameplay/Gameplay/VehicleEffects/VehicleMod/Nitro_VehicleMod.Nitro_VehicleMod_C");
			return ret;
		}
	};


	// Class /TowHookWeapon/Gameplay/Camera/BP_Camera_Lens_Dirt_Water_Towhook.BP_Camera_Lens_Dirt_Water_Towhook_C
	// Inherited from ABP_NS_ExampleCameraEffect_C -> ANiagaraLensEffectBase -> ANiagaraActor -> AActor -> UObject
	// Size: 0x9 (0x339 - 0x330)
	class ABP_Camera_Lens_Dirt_Water_Towhook_C : public ABP_NS_ExampleCameraEffect_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x8)
		TEnumAsByte<EPhysicalSurface> Current_Surface_Type; // 0x338(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/TowHookWeapon/Gameplay/Camera/BP_Camera_Lens_Dirt_Water_Towhook.BP_Camera_Lens_Dirt_Water_Towhook_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWater(bool bInWater); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_Camera_Lens_Dirt_Water_Towhook(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_Sprint_Loop.CameraShake_Riding_Sprint_Loop_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_Riding_Sprint_Loop_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_Sprint_Loop.CameraShake_Riding_Sprint_Loop_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_Sprint_FOVFlare.CameraShake_Riding_Sprint_FOVFlare_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_Riding_Sprint_FOVFlare_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_Sprint_FOVFlare.CameraShake_Riding_Sprint_FOVFlare_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_JumpOnCreature.CameraShake_Riding_JumpOnCreature_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_Riding_JumpOnCreature_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_JumpOnCreature.CameraShake_Riding_JumpOnCreature_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_Pawn.CameraShake_Riding_BoarSprintImpact_Pawn_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_Riding_BoarSprintImpact_Pawn_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_Pawn.CameraShake_Riding_BoarSprintImpact_Pawn_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_Default.CameraShake_Riding_BoarSprintImpact_Default_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_Riding_BoarSprintImpact_Default_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_Default.CameraShake_Riding_BoarSprintImpact_Default_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_BuildDestroy.CameraShake_Riding_BoarSprintImpact_BuildDestroy_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_Riding_BoarSprintImpact_BuildDestroy_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_BuildDestroy.CameraShake_Riding_BoarSprintImpact_BuildDestroy_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x8 (0xB48 - 0xB40)
	class UGA_Riding_Creature_Burt_SprintCharge_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C");
			return ret;
		}

		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/Gameplay/General/GE_Riding_Player_Sprint.GE_Riding_Player_Sprint_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Player_Sprint_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_Player_Sprint.GE_Riding_Player_Sprint_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x19 (0xB59 - 0xB40)
	class UGA_Riding_Player_Sprint_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		TArray<FGameplayTag> Tags_to_cancel_sprinting; // 0xB48(0x10)
		bool ShouldCancelSprint; // 0xB58(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C");
			return ret;
		}

		void OnRep_CancelSprintDispatcher(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Added_BA9D24D64958BB04345A3D89BD7617CA(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GA_Riding_Player_Sprint(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/Gameplay/General/GE_Riding_Creature_Grant_EatToRefuel.GE_Riding_Creature_Grant_EatToRefuel_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Creature_Grant_EatToRefuel_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_Creature_Grant_EatToRefuel.GE_Riding_Creature_Grant_EatToRefuel_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Creature_EatToRefuel.GA_Riding_Creature_EatToRefuel_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x30 (0xB70 - 0xB40)
	class UGA_Riding_Creature_EatToRefuel_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		FGameplayTagContainer Slap_Berry_Tags; // 0xB48(0x20)
		UClass* Slap_Berry_Gameplay_Effect; // 0xB68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Creature_EatToRefuel.GA_Riding_Creature_EatToRefuel_C");
			return ret;
		}

		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GA_Riding_Creature_EatToRefuel(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/Gameplay/General/GE_Riding_Irwin_Prey_Burt_IsBeingRidden.GE_Riding_Irwin_Prey_Burt_IsBeingRidden_C
	// Inherited from UGE_Riding_Creatue_IsBeingRidden_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Irwin_Prey_Burt_IsBeingRidden_C : public UGE_Riding_Creatue_IsBeingRidden_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_Irwin_Prey_Burt_IsBeingRidden.GE_Riding_Irwin_Prey_Burt_IsBeingRidden_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GE_Riding_Creatue_IsBeingRidden.GE_Riding_Creatue_IsBeingRidden_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Creatue_IsBeingRidden_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_Creatue_IsBeingRidden.GE_Riding_Creatue_IsBeingRidden_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C
	// Inherited from UGA_NPC_Parent_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x8 (0xED8 - 0xED0)
	class UGA_Riding_Creature_IsBeingRidden_C : public UGA_NPC_Parent_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xED0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C");
			return ret;
		}

		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/Gameplay/General/GE_Riding_Creatue_IsBeingRidden_Passive.GE_Riding_Creatue_IsBeingRidden_Passive_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Creatue_IsBeingRidden_Passive_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_Creatue_IsBeingRidden_Passive.GE_Riding_Creatue_IsBeingRidden_Passive_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C
	// Inherited from UGA_NPC_Parent_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x8 (0xED8 - 0xED0)
	class UGA_Riding_Creature_IsBeingRidden_Passive_C : public UGA_NPC_Parent_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xED0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C");
			return ret;
		}

		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x30 (0xB70 - 0xB40)
	class UGA_Riding_Player_Petting_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		URidableComponent* Active_Ridable; // 0xB48(0x8)
		UClass* GE_PlayerPetting; // 0xB50(0x8)
		TArray<FGameplayTag> TagsToCancelPetting; // 0xB58(0x10)
		AFortPlayerPawn* FortPlayerPawnRider; // 0xB68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C");
			return ret;
		}

		void PettingTelemetry(AActor* Owner); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetRiderPettingMontage(UAnimMontage* RiderPettingMontage); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBlendedIn_EBEF9ED74121A25C39ABC2B953D1B3F8(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GA_Riding_Player_Petting(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/Gameplay/General/GE_Riding_Player_Petting.GE_Riding_Player_Petting_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Player_Petting_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_Player_Petting.GE_Riding_Player_Petting_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/Camera/RidingCameraMode.RidingCameraMode_C
	// Inherited from UFortCameraMode_Riding -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E50 - 0x1E50)
	class URidingCameraMode_C : public UFortCameraMode_Riding	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/RidingCameraMode.RidingCameraMode_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GE_Riding_Player_IsRiding.GE_Riding_Player_IsRiding_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Player_IsRiding_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_Player_IsRiding.GE_Riding_Player_IsRiding_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x18 (0xB58 - 0xB40)
	class UGA_Riding_Player_IsRiding_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		UAnimMontage* SettleMontageRef; // 0xB48(0x8)
		UFortAbilityTask_PlayMontageWaitTarget* settleMontageTask; // 0xB50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C");
			return ret;
		}

		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GA_Riding_Player_IsRiding(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x8 (0xB48 - 0xB40)
	class UGA_Riding_Player_StopRidingOnTriggered_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C");
			return ret;
		}

		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/Gameplay/Camera/Riding_PlayerCameraMode_TacticalSprint.Riding_PlayerCameraMode_TacticalSprint_C
	// Inherited from UFortCameraMode_Riding -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E50 - 0x1E50)
	class URiding_PlayerCameraMode_TacticalSprint_C : public UFortCameraMode_Riding	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/Riding_PlayerCameraMode_TacticalSprint.Riding_PlayerCameraMode_TacticalSprint_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GE_Riding_EatSlapBerry_TriggerInfiniteStamina.GE_Riding_EatSlapBerry_TriggerInfiniteStamina_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_EatSlapBerry_TriggerInfiniteStamina_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_EatSlapBerry_TriggerInfiniteStamina.GE_Riding_EatSlapBerry_TriggerInfiniteStamina_C");
			return ret;
		}
	};

}
