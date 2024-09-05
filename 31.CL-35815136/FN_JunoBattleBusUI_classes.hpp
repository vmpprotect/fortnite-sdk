#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoBattleBusUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoBattleBusUI.JunoBattleBusDestinationHeaderObject
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UJunoBattleBusDestinationHeaderObject : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FText DisplayName; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusUI.JunoBattleBusDestinationHeaderObject");
			return ret;
		}
	};


	// Class JunoBattleBusUI.JunoBattleBusDestinationListObject
	// Inherited from UObject
	// Size: 0x90 (0xB8 - 0x28)
	class UJunoBattleBusDestinationListObject : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		FJunoDiscoveredBusStop AssociatedBusStop; // 0x40(0x70)
		bool bIsOriginBusStation; // 0xB0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusUI.JunoBattleBusDestinationListObject");
			return ret;
		}
	};


	// Class JunoBattleBusUI.JunoBattleBusDestinationEntry
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UJunoBattleBusDestinationEntry : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x13E0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusUI.JunoBattleBusDestinationEntry");
			return ret;
		}

		void OnHeaderObjectSet(UJunoBattleBusDestinationHeaderObject* DestinationListObject); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDestinationListObjectSet(UJunoBattleBusDestinationListObject* DestinationListObject); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoBattleBusUI.JunoBattleBusDestinationList
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x358 - 0x2B0)
	class UJunoBattleBusDestinationList : public UUserWidget	
	{
	public:
		UCommonListView* ListView_Destinations; // 0x2B0(0x8)
		TArray<EJunoBattleBusStopType> StopTypeSortOrder; // 0x2B8(0x10)
		TMap<EJunoBattleBusStopType, FText> StopTypeHeaderNames; // 0x2C8(0x50)
		unsigned char UnknownData00_6[0x20]; // 0x318(0x20) UNKNOWN PROPERTY
		TArray<UObject*> ListItems_All; // 0x338(0x10)
		TArray<UJunoBattleBusDestinationListObject*> ListItems_Destinations; // 0x348(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusUI.JunoBattleBusDestinationList");
			return ret;
		}

		void OnOwningBattleBusStopSet(AJunoBattleBusStop* OwningBattleBusStop); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoBattleBusUI.JunoBattleBusMapWidget
	// Inherited from UJunoFullScreenMap -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x330 (0x8E0 - 0x5B0)
	class UJunoBattleBusMapWidget : public UJunoFullScreenMap	
	{
	public:
		EJunoBattleBusMapWidgetState CurrentMapState; // 0x5B0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x5B1(0x7) UNKNOWN PROPERTY
		UJunoBattleBusDestinationList* BattleBusDestinationList; // 0x5B8(0x8)
		UJunoBattleBusQueuedPlayersWidget* QueuedPlayersWidget; // 0x5C0(0x8)
		UCommonButtonBase* Button_Confirm; // 0x5C8(0x8)
		FDataTableRowHandle ModalConfirmAction; // 0x5D0(0x10)
		FDataTableRowHandle ModalCancelAction; // 0x5E0(0x10)
		UDynamicUIScene* ModalScene; // 0x5F0(0x8)
		UDynamicUIScene* BasicModalScene; // 0x5F8(0x8)
		FText RequestDestinationModalTitle; // 0x600(0x10)
		FText RequestDestinationModalDescription; // 0x610(0x10)
		FText RequestDestinationModalConfirmText; // 0x620(0x10)
		FText RequestDestinationModalCancelText; // 0x630(0x10)
		FText BoardBusModalTitle; // 0x640(0x10)
		FText BoardBusModalDescription; // 0x650(0x10)
		FText BoardBusModalConfirmText; // 0x660(0x10)
		FText BoardBusModalCancelText; // 0x670(0x10)
		FText LeaveBusModalTitle; // 0x680(0x10)
		FText LeaveBusModalDescription; // 0x690(0x10)
		FText LeaveBusModalConfirmText; // 0x6A0(0x10)
		FText LeaveBusModalCancelText; // 0x6B0(0x10)
		unsigned char UnknownData01_7[0x218]; // 0x6C0(0x218) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusUI.JunoBattleBusMapWidget");
			return ret;
		}

		void ShowBasicConfirmModal(FText Title, FText Description, FText ConfirmText, UDynamicUIScene* InModalScene); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D09F18(relative to base address)
		void OnBusStopSelected(FJunoDiscoveredBusStop& SelectedBusStop); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBattleBusMapStateSet(EJunoBattleBusMapWidgetState NewMapState, bool bFromInitialization); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRequestDestinationConfirmed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D09F04(relative to base address)
		void HandleModalCancelled(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D09EF0(relative to base address)
		void HandleLeaveBusConfirmed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D09EDC(relative to base address)
		void HandleBoardBusConfirmed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D09EC8(relative to base address)
		FJunoDiscoveredBusStop GetOriginBusStop(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D09EA0(relative to base address)
		FJunoDiscoveredBusStop GetDestinationBusStop(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D09E74(relative to base address)
		FJunoDiscoveredBusStop GetCurrentBusStop(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D09E58(relative to base address)
	};


	// Class JunoBattleBusUI.JunoBattleBusLoadingScreen
	// Inherited from UJunoBattleBusMapWidget -> UJunoFullScreenMap -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x8E0 - 0x8D8)
	class UJunoBattleBusLoadingScreen : public UJunoBattleBusMapWidget	
	{
	public:
		bool bZoomToFit; // 0x8D8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x8D9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusUI.JunoBattleBusLoadingScreen");
			return ret;
		}
	};


	// Class JunoBattleBusUI.JunoBattleBusQueuedPlayersWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x300 - 0x2B0)
	class UJunoBattleBusQueuedPlayersWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x40]; // 0x2B0(0x40) UNKNOWN PROPERTY
		FFortPrioritizedWidgetData PrioritizationData; // 0x2F0(0x2)
		unsigned char UnknownData01_7[0xE]; // 0x2F2(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusUI.JunoBattleBusQueuedPlayersWidget");
			return ret;
		}

		bool ShouldSetHasActiveContent(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74EE1702C(relative to base address)
		void OnQueueTimerUpdate(int32_t TimeRemaining); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQueuedPlayersSet(TArray<FUniqueNetIdRepl>& QueuedPlayers); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOriginBusStopSet(FJunoDiscoveredBusStop& OriginBusStop); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOriginBusStopCleared(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDestinationBusStopSet(FJunoDiscoveredBusStop& OriginBusStop); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDestinationBusStopCleared(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoBattleBusUI.JunoBattleBusRouteIndicator
	// Inherited from UJunoMapIndicatorType -> UObject
	// Size: 0x150 (0x1E0 - 0x90)
	class UJunoBattleBusRouteIndicator : public UJunoMapIndicatorType	
	{
	public:
		UMaterialInterface* OriginBusStopMaterial; // 0x90(0x8)
		FVector2D OriginBusStopDrawSize; // 0x98(0x10)
		UMaterialInterface* DestinationBusStopMaterial; // 0xA8(0x8)
		FVector2D DestinationBusStopDrawSize; // 0xB0(0x10)
		UMaterialInterface* BusPathMaterial; // 0xC0(0x8)
		float BusPathWidth; // 0xC8(0x4)
		unsigned char UnknownData00_7[0x114]; // 0xCC(0x114) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusUI.JunoBattleBusRouteIndicator");
			return ret;
		}
	};

}
