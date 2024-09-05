#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoBattleBusRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		bool IsDiscoveredBusStopValid(FJunoDiscoveredBusStop& InDiscoveredBusStop); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E1EAA0
		FText GetShortDisplayNameForBusStop(UObject WorldContextObject, FJunoDiscoveredBusStop& InDiscoveredBusStop); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E1E9C0
		bool GetMarkerSettingsForBusStop(UObject WorldContextObject, FJunoDiscoveredBusStop& InDiscoveredBusStop, FJunoMarkerSettingsRow& OutMarkerSettingsRow); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E1E8E0
		FText GetLongDisplayNameForBusStop(UObject WorldContextObject, FJunoDiscoveredBusStop& InDiscoveredBusStop); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E1E800
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

		void JunoTeleportToBusStop(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414E1EB80
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
		unsigned char UnknownData01_7[0x7]; // 0xA89(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusRuntime.JunoBattleBusStop");
			return ret;
		}

		bool IsBusStopDiscovered(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E1ED40
		FGuid GetReplicatedSavedActorGuid(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414E1EC60
	};


	// Class JunoBattleBusRuntime.JunoBattleBusStopLimitGetter
	// Inherited from UJunoBuildLimitGetter -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoBattleBusStopLimitGetter : public UJunoBuildLimitGetter	
	{
	public:
		FName PhysicalMarkerSettingName; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

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
		AFortPlayerState DiscoveringPlayerState; // 0x98(0x8)

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
		UClass BattleBusClass; // 0x148(0x8)
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
		TMap MarkerSettingsByStopType; // 0x310(0x50)
		TMap MarkerSettingsByGameplayTag; // 0x360(0x50)
		TArray DiscoveredBusStops; // 0x3B0(0x10)
		FJunoBattleBusQueuedPlayersData QueuedPlayersData; // 0x3C0(0x38)
		int32_t QueueTimeRemaining; // 0x3F8(0x4)
		unsigned char UnknownData04_6[0x44]; // 0x3FC(0x44) UNKNOWN PROPERTY
		FDateTime LastBusTeleportUseTime; // 0x440(0x8)
		unsigned char UnknownData05_6[0x10]; // 0x448(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr OriginBusStop; // 0x458(0x8)
		unsigned char UnknownData06_6[0x70]; // 0x460(0x70) UNKNOWN PROPERTY
		FJunoBusTravelTelemetryData JunoBusTravelTelemetryData; // 0x4D0(0x120)
		unsigned char UnknownData07_7[0x58]; // 0x5F0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusRuntime.JunoBusManagerComponent");
			return ret;
		}

		void UnqueuePlayer(AFortPlayerPawn Player); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414E20E80
		AFortAthenaAircraft SpawnBus(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414E20DA0
		void SetOriginBusStop(AJunoBattleBusStop InBusStop); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414E20CC0
		void SetDestinationBusStop(FJunoDiscoveredBusStop& InBusStop); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E20BE0
		void RemoveBusStop(AJunoBattleBusStop InBusStop); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E20B00
		void QueuePlayer(AFortPlayerPawn Player); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414E20A20
		void PlayerTeleportedToBusLocation(AFortPlayerPawn PlayerPawn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E20940
		void OnTravelDataCleared(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E20860
		void OnSetupPlayerTeleport(AFortPlayerPawn Player); // Flags: Event|Protected|BlueprintEvent 0x7FF414E20780
		void OnRep_QueueTimeRemaining(); // Flags: Final|Native|Private 0x7FF414E206A0
		void OnRep_QueuedPlayersData(); // Flags: Final|Native|Private 0x7FF414E205C0
		void OnPlayerPawnDied(AFortPawn DeadPawn); // Flags: Final|Native|Private 0x7FF414E204E0
		void OnPlayerExitBus(AFortPlayerPawn PlayerPawn); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E20400
		void OnPlayerEnterBus(AFortPlayerPawn PlayerPawn); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E20320
		void OnClientQueueDataChange(FJunoBattleBusQueuedPlayersData& QueueData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E20240
		void OnBusStopTileLoaded(bool bSuccess, TArray& POILocations); // Flags: Final|Native|Private|HasOutParms 0x7FF414E20160
		void OnBattleBusFlightEnded(AFortAthenaAircraft BattleBus); // Flags: Final|Native|Private 0x7FF414E20080
		void OnBattleBusExitedDropZone(AFortAthenaAircraft BattleBus); // Flags: Final|Native|Private 0x7FF414E1FFA0
		void OnBattleBusEnteredDropZone(AFortAthenaAircraft BattleBus); // Flags: Final|Native|Private 0x7FF414E1FEC0
		void MulticastDiscoverBusStop(FJunoDiscoveredBusStop DiscoveredBusStop, AFortPlayerState DiscoveringPlayerState); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected 0x7FF414E1FDE0
		bool IsPlayerQueued(AFortPlayerPawn InPlayerPawn); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E1FD00
		bool IsBusTravelEnabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E1FC20
		bool IsBusStopReadyToTeleport(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E1FB40
		bool IsBusSpawnEnabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E1FA60
		int32_t GetQueueTimeInSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E1F980
		void GetQueuedPlayers(TArray& OutQueuedPlayers); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E1F8A0
		FGuid GetOriginBusStopGuid(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414E1F7C0
		int32_t GetNumQueuedPlayers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E1F6E0
		FJunoMarker GetMarkerForDiscoveredBusStop(FJunoDiscoveredBusStop& InDiscoveredBusStop); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E1F600
		UJunoBusManagerComponent GetJunoRootPlayspaceBusManagerComponent(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414E1F520
		TArray GetDiscoveredBusStops(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E1F440
		FJunoDiscoveredBusStop GetDiscoveredBusStopByGuid(FGuid& InActorGuid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414E1F360
		FGuid GetDestinationBusStopGuid(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414E1F280
		AFortAthenaAircraft GetCurrentBattleBus(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E1F1A0
		FVector GetBusSpawnLocation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414E1F0C0
		EJunoBattleBusState GetBattleBusState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E1EFE0
		void DiscoverBusStop(AJunoBattleBusStop InBusStop, AFortPlayerState DiscoveringPlayerState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E1EF00
		void BoardPlayer(AFortPlayerPawn PlayerPawn); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414E1EE20
	};


	// Class JunoBattleBusRuntime.JunoControllerComponent_BusTeleport
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x110 - 0xA8)
	class UJunoControllerComponent_BusTeleport : public UFortControllerComponent	
	{
	public:
		FMulticastInlineDelegate OnPlayerEnterBattleBus; // 0xA8(0x10)
		FMulticastInlineDelegate OnPlayerExitBattleBus; // 0xB8(0x10)
		UJunoInputMappingComponentData BusInputMapping; // 0xC8(0x8)
		UInputAction JumpAction; // 0xD0(0x8)
		UInputAction UpInputAction; // 0xD8(0x8)
		UInputAction DownInputAction; // 0xE0(0x8)
		FVector BusAttachOffset; // 0xE8(0x18)
		TWeakObjectPtr CurrentBattleBus; // 0x100(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x108(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusRuntime.JunoControllerComponent_BusTeleport");
			return ret;
		}

		void ServerUnqueueForJump(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 0x7FF4140F9AA0
		void ServerThankBattleBusDriver(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF4140F99C0
		void ServerRequestDestinationAndQueueForJump(AJunoBattleBusStop OriginBattleBusStop, FJunoDiscoveredBusStop DestinationBusStop); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 0x7FF4140F96F8
		void ServerQueueForJump(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 0x7FF4140F9618
		void ServerAttemptBattleBusJump(FRotator ClientRotation); // Flags: Net|NetReliableNative|Event|Public|NetServer|HasDefaults 0x7FF4140F9538
		void OnPlayerUnqueued(AFortPlayerPawn Player); // Flags: Event|Protected|BlueprintEvent 0x7FF4140F9458
		void OnPlayerQueued(AFortPlayerPawn Player); // Flags: Event|Protected|BlueprintEvent 0x7FF4140F9378
		void OnPlayerLanded(FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms 0x7FF4140F9298
		void OnPlayerExitBattleBus__DelegateSignature(AFortPlayerPawn PlayerPawn); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140F91B8
		void OnPlayerEnterBattleBus__DelegateSignature(AFortPlayerPawn PlayerPawn); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140F90D8
		void OnParachuteOpened(); // Flags: Final|Native|Private 0x7FF4140F8FF8
		void OnParachuteClosed(); // Flags: Final|Native|Private 0x7FF4140F8F18
		void OnNotifyServerClientEnteredBus(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140F8E38
		void OnEndSkydiving(); // Flags: Final|Native|Private 0x7FF4140F8D58
		void NotifyServerPlayerExitedBus(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF4140F8C78
		void NotifyServerPlayerEnteredBus(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF4140F8B98
		bool IsInBattleBus(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F8AB8
		AFortAthenaAircraft GetCurrentTeleportingBattleBus(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F89D8
		void ClientExitBus(); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient 0x7FF4140F88F8
		void ClientEnterBus(AFortAthenaAircraft InBattleBus, int32_t RiderID); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient 0x7FF4140F8818
	};

}
