#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoBattleBusRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoBattleBusRuntime.JunoBattleBusAnalytics
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoBattleBusAnalytics : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusRuntime.JunoBattleBusAnalytics");
			return ret;
		}
	};


	// Class JunoBattleBusRuntime.JunoBattleBusBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoBattleBusBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusRuntime.JunoBattleBusBlueprintLibrary");
			return ret;
		}

		bool IsDiscoveredBusStopValid(FJunoDiscoveredBusStop& InDiscoveredBusStop); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751C8E424(relative to base address)
		FText GetShortDisplayNameForBusStop(UObject* WorldContextObject, FJunoDiscoveredBusStop& InDiscoveredBusStop); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751C8E1F4(relative to base address)
		bool GetMarkerSettingsForBusStop(UObject* WorldContextObject, FJunoDiscoveredBusStop& InDiscoveredBusStop, FJunoMarkerSettingsRow& OutMarkerSettingsRow); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751C8DEDC(relative to base address)
		FText GetLongDisplayNameForBusStop(UObject* WorldContextObject, FJunoDiscoveredBusStop& InDiscoveredBusStop); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751C8DC54(relative to base address)
	};


	// Class JunoBattleBusRuntime.JunoBattleBusCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoBattleBusCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusRuntime.JunoBattleBusCheatManager");
			return ret;
		}

		void JunoTeleportToBusStop(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class JunoBattleBusRuntime.JunoBattleBusStop
	// Inherited from AJunoBuildingGameplayActor -> ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x58 (0xA90 - 0xA38)
	class AJunoBattleBusStop : public AJunoBuildingGameplayActor	
	{
	public:
		FText PickDestination_InteractText; // 0xA38(0x10)
		FText EnterQueue_InteractText; // 0xA48(0x10)
		FText ExitQueue_InteractText; // 0xA58(0x10)
		FText OpenMap_InteractText; // 0xA68(0x10)
		FGuid ReplicatedSavedActorGuid; // 0xA78(0x10)
		bool bIsBusStopDiscovered; // 0xA88(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xA89(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusRuntime.JunoBattleBusStop");
			return ret;
		}

		bool IsBusStopDiscovered(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C8E364(relative to base address)
		FGuid GetReplicatedSavedActorGuid(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C8E1D8(relative to base address)
	};


	// Class JunoBattleBusRuntime.JunoBattleBusStopLimitGetter
	// Inherited from UJunoBuildLimitGetter -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoBattleBusStopLimitGetter : public UJunoBuildLimitGetter	
	{
	public:
		FName PhysicalMarkerSettingName; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusRuntime.JunoBattleBusStopLimitGetter");
			return ret;
		}
	};


	// Class JunoBattleBusRuntime.JunoBattleBusStopDiscoveredContext
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UJunoBattleBusStopDiscoveredContext : public UObject	
	{
	public:
		FJunoDiscoveredBusStop DiscoveredBusStop; // 0x28(0x70)
		AFortPlayerState* DiscoveringPlayerState; // 0x98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusRuntime.JunoBattleBusStopDiscoveredContext");
			return ret;
		}
	};


	// Class JunoBattleBusRuntime.JunoBusManagerComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x550 (0x648 - 0xF8)
	class UJunoBusManagerComponent : public UFortPlayspaceComponent	
	{
	public:
		FAircraftFlightInfo BattleBusFlightInfo; // 0xF8(0x48)
		FGameplayTag BusStopActorTypeTag; // 0x140(0x4)
		FGameplayTag SpecialBusStopLocationTag; // 0x144(0x4)
		UClass* BattleBusClass; // 0x148(0x8)
		FScalableFloat TimeToReadyBus; // 0x150(0x28)
		FScalableFloat SpawnDistanceFromTargetLocation; // 0x178(0x28)
		FScalableFloat BusSpawnHeightAboveBusStop; // 0x1A0(0x28)
		FScalableFloat MinBusSpawnHeight; // 0x1C8(0x28)
		FScalableFloat MaxBusSpawnHeight; // 0x1F0(0x28)
		FScalableFloat ForceEndFlightAfterTime; // 0x218(0x28)
		int32_t MultiplayerBusQueueTimeInSeconds; // 0x240(0x4)
		int32_t SingleplayerBusQueueTimeInSeconds; // 0x244(0x4)
		FName BusStopPOILayerName; // 0x248(0x4)
		FName BusStopPOIRegistryKey; // 0x24C(0x4)
		FJunoMarker JunoMarker; // 0x250(0xC0)
		TMap<EJunoBattleBusStopType, FDataTableRowHandle> MarkerSettingsByStopType; // 0x310(0x50)
		TMap<FGameplayTag, FDataTableRowHandle> MarkerSettingsByGameplayTag; // 0x360(0x50)
		TArray<FJunoDiscoveredBusStop> DiscoveredBusStops; // 0x3B0(0x10)
		FJunoBattleBusQueuedPlayersData QueuedPlayersData; // 0x3C0(0x38)
		int32_t QueueTimeRemaining; // 0x3F8(0x4)
		unsigned char UnknownData00_6[0x44]; // 0x3FC(0x44) UNKNOWN PROPERTY
		FDateTime LastBusTeleportUseTime; // 0x440(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x448(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr<AJunoBattleBusStop*> OriginBusStop; // 0x458(0x8)
		unsigned char UnknownData02_6[0x70]; // 0x460(0x70) UNKNOWN PROPERTY
		FJunoBusTravelTelemetryData JunoBusTravelTelemetryData; // 0x4D0(0x120)
		unsigned char UnknownData03_7[0x58]; // 0x5F0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusRuntime.JunoBusManagerComponent");
			return ret;
		}

		void UnqueuePlayer(AFortPlayerPawn* Player); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		AFortAthenaAircraft SpawnBus(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C6345FC(relative to base address)
		void SetOriginBusStop(AJunoBattleBusStop* InBusStop); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void SetDestinationBusStop(FJunoDiscoveredBusStop& InBusStop); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C8F06C(relative to base address)
		void RemoveBusStop(AJunoBattleBusStop* InBusStop); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void QueuePlayer(AFortPlayerPawn* Player); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void PlayerTeleportedToBusLocation(AFortPlayerPawn* PlayerPawn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C8EC34(relative to base address)
		void OnTravelDataCleared(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetupPlayerTeleport(AFortPlayerPawn* Player); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_QueueTimeRemaining(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C8EBC4(relative to base address)
		void OnRep_QueuedPlayersData(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C8EC20(relative to base address)
		void OnPlayerUnqueued(AFortPlayerPawn* Player); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerPawnDied(AFortPawn* DeadPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C8EB3C(relative to base address)
		void OnPlayerExitBus(AFortPlayerPawn* PlayerPawn); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74F5AA820(relative to base address)
		void OnPlayerEnterBus(AFortPlayerPawn* PlayerPawn); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7501F089C(relative to base address)
		void OnClientQueueDataChange(FJunoBattleBusQueuedPlayersData& QueueData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBusStopTileLoaded(bool bSuccess, TArray<FTransform>& POILocations); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751C8E948(relative to base address)
		void OnBattleBusFlightEnded(AFortAthenaAircraft* BattleBus); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C088608(relative to base address)
		void OnBattleBusExitedDropZone(AFortAthenaAircraft* BattleBus); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C8E8C8(relative to base address)
		void OnBattleBusEnteredDropZone(AFortAthenaAircraft* BattleBus); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C8E848(relative to base address)
		void MulticastDiscoverBusStop(FJunoDiscoveredBusStop DiscoveredBusStop, AFortPlayerState* DiscoveringPlayerState); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF751C8E600(relative to base address)
		bool IsPlayerQueued(AFortPlayerPawn* InPlayerPawn); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C8E554(relative to base address)
		bool IsBusTravelEnabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751C8E40C(relative to base address)
		bool IsBusStopReadyToTeleport(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C8E37C(relative to base address)
		bool IsBusSpawnEnabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751C8E348(relative to base address)
		int32_t GetQueueTimeInSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C8E0E8(relative to base address)
		void GetQueuedPlayers(TArray<AFortPlayerPawn*>& OutQueuedPlayers); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C8E13C(relative to base address)
		FGuid GetOriginBusStopGuid(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C8E0CC(relative to base address)
		int32_t GetNumQueuedPlayers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C8E0B4(relative to base address)
		FJunoMarker GetMarkerForDiscoveredBusStop(FJunoDiscoveredBusStop& InDiscoveredBusStop); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C8DDA8(relative to base address)
		UJunoBusManagerComponent GetJunoRootPlayspaceBusManagerComponent(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751C8DBD4(relative to base address)
		TArray GetDiscoveredBusStops(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C8DB58(relative to base address)
		FJunoDiscoveredBusStop GetDiscoveredBusStopByGuid(FGuid& InActorGuid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C8DAB4(relative to base address)
		FGuid GetDestinationBusStopGuid(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D091C(relative to base address)
		AFortAthenaAircraft GetCurrentBattleBus(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C8DA8C(relative to base address)
		FVector GetBusSpawnLocation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751C8DA64(relative to base address)
		EJunoBattleBusState GetBattleBusState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FC691A0(relative to base address)
		void DiscoverBusStop(AJunoBattleBusStop* InBusStop, AFortPlayerState* DiscoveringPlayerState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C8E74BC(relative to base address)
		void BoardPlayer(AFortPlayerPawn* PlayerPawn); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C8D91C(relative to base address)
	};


	// Class JunoBattleBusRuntime.JunoControllerComponent_BusTeleport
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x110 - 0xA8)
	class UJunoControllerComponent_BusTeleport : public UFortControllerComponent	
	{
	public:
		FMulticastInlineDelegate OnPlayerEnterBattleBus; // 0xA8(0x10)
		FMulticastInlineDelegate OnPlayerExitBattleBus; // 0xB8(0x10)
		UJunoInputMappingComponentData* BusInputMapping; // 0xC8(0x8)
		UInputAction* JumpAction; // 0xD0(0x8)
		UInputAction* UpInputAction; // 0xD8(0x8)
		UInputAction* DownInputAction; // 0xE0(0x8)
		FVector BusAttachOffset; // 0xE8(0x18)
		TWeakObjectPtr<AFortAthenaAircraft*> CurrentBattleBus; // 0x100(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x108(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusRuntime.JunoControllerComponent_BusTeleport");
			return ret;
		}

		void ServerUnqueueForJump(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74E313DD4(relative to base address)
		void ServerThankBattleBusDriver(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74E217D18(relative to base address)
		void ServerRequestDestinationAndQueueForJump(AJunoBattleBusStop* OriginBattleBusStop, FJunoDiscoveredBusStop DestinationBusStop); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751C8EEA4(relative to base address)
		void ServerQueueForJump(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74E3138A4(relative to base address)
		void ServerAttemptBattleBusJump(FRotator ClientRotation); // Flags: Net|NetReliableNative|Event|Public|NetServer|HasDefaults, Memory Exec: 0x7FF751C8ED80(relative to base address)
		void OnPlayerUnqueued(AFortPlayerPawn* Player); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerQueued(AFortPlayerPawn* Player); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerLanded(FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751C8EA64(relative to base address)
		void OnPlayerExitBattleBus__DelegateSignature(AFortPlayerPawn* PlayerPawn); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerEnterBattleBus__DelegateSignature(AFortPlayerPawn* PlayerPawn); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnParachuteOpened(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C8EA50(relative to base address)
		void OnParachuteClosed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C8EA3C(relative to base address)
		void OnNotifyServerClientEnteredBus(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEndSkydiving(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C8EA3C(relative to base address)
		void NotifyServerPlayerExitedBus(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74D8BB404(relative to base address)
		void NotifyServerPlayerEnteredBus(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74D8BB41C(relative to base address)
		bool IsInBattleBus(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C8E52C(relative to base address)
		AFortAthenaAircraft GetCurrentTeleportingBattleBus(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EC2C9B0(relative to base address)
		void ClientExitBus(); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF74E4851A4(relative to base address)
		void ClientEnterBus(AFortAthenaAircraft* InBattleBus, int32_t RiderID); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF751C8D99C(relative to base address)
	};

}
