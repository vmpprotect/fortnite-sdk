#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoBattleBusRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoBattleBusRuntime.JunoDiscoveredBusStop
	// Size: 0x70 (0x70 - 0x0)
	struct FJunoDiscoveredBusStop	
	{
	public:
		FJunoActorLocationInfo LocationInfo; // 0x0(0x68)
		EJunoBattleBusStopType BattleBusStopType; // 0x68(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		int32_t StationIndex; // 0x6C(0x4)
	};


	// Struct JunoBattleBusRuntime.JunoBattleBusQueuedPlayersData
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoBattleBusQueuedPlayersData	
	{
	public:
		TArray QueuedPlayerIds; // 0x0(0x10)
		FGuid OriginBusStopGuid; // 0x10(0x10)
		FGuid DestinationBusStopGuid; // 0x20(0x10)
		EJunoBattleBusState BattleBusState; // 0x30(0x1)
		bool bDestinationTileLoaded; // 0x31(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
	};


	// Struct JunoBattleBusRuntime.JunoEvent_BattleBus_OpenMapWidget
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoEvent_BattleBus_OpenMapWidget	
	{
	public:
		AJunoBattleBusStop OwningBusStop; // 0x0(0x8)
		AFortPlayerState InstigatingPlayerState; // 0x8(0x8)
	};


	// Struct JunoBattleBusRuntime.JunoEvent_BattleBus_QueuedPlayersDataChanged
	// Size: 0x100 (0x100 - 0x0)
	struct FJunoEvent_BattleBus_QueuedPlayersDataChanged	
	{
	public:
		UJunoBusManagerComponent OwningBusManager; // 0x0(0x8)
		TArray QueuedPlayerIds; // 0x8(0x10)
		FJunoDiscoveredBusStop OriginBusStop; // 0x18(0x70)
		FJunoDiscoveredBusStop DestinationBusStop; // 0x88(0x70)
		EJunoBattleBusState BattleBusState; // 0xF8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoBattleBusRuntime.JunoEvent_BattleBus_QueueTimerUpdate
	// Size: 0x4 (0x4 - 0x0)
	struct FJunoEvent_BattleBus_QueueTimerUpdate	
	{
	public:
		int32_t QueueTimeRemaining; // 0x0(0x4)
	};


	// Struct JunoBattleBusRuntime.JunoEvent_BattleBus_DiscoveredBusStop
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_BattleBus_DiscoveredBusStop	
	{
	public:
		UJunoBattleBusStopDiscoveredContext DiscoveredContext; // 0x0(0x8)
	};


	// Struct JunoBattleBusRuntime.JunoEvent_BattleBus_ShowLoadingScreen
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_BattleBus_ShowLoadingScreen	
	{
	public:
		bool bShowLoadingScreen; // 0x0(0x1)
	};


	// Struct JunoBattleBusRuntime.JunoEvent_BattleBus_LocalPlayerEnteredOrExitedBus
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_BattleBus_LocalPlayerEnteredOrExitedBus	
	{
	public:
		bool bPlayerIsOnBus; // 0x0(0x1)
	};


	// Struct JunoBattleBusRuntime.JunoBusTravelTelemetryData
	// Size: 0x120 (0x120 - 0x0)
	struct FJunoBusTravelTelemetryData	
	{
	public:
		unsigned char UnknownData01_2[0x120]; // 0x0(0x120) UNKNOWN PROPERTY
	};

}
