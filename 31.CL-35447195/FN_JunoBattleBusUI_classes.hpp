#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoBattleBusUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoBattleBusUI.JunoBattleBusDestinationHeaderObject
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UJunoBattleBusDestinationHeaderObject : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
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
		unsigned char UnknownData02_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		FJunoDiscoveredBusStop AssociatedBusStop; // 0x40(0x70)
		bool bIsOriginBusStation; // 0xB0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x10]; // 0x13E0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusUI.JunoBattleBusDestinationEntry");
			return ret;
		}

		void OnHeaderObjectSet(UJunoBattleBusDestinationHeaderObject DestinationListObject); // Flags: Event|Public|BlueprintEvent 0x7FF414E35BE0
		void OnDestinationListObjectSet(UJunoBattleBusDestinationListObject DestinationListObject); // Flags: Event|Public|BlueprintEvent 0x7FF414E35B00
	};


	// Class JunoBattleBusUI.JunoBattleBusDestinationList
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x360 - 0x2B8)
	class UJunoBattleBusDestinationList : public UUserWidget	
	{
	public:
		UCommonListView ListView_Destinations; // 0x2B8(0x8)
		TArray StopTypeSortOrder; // 0x2C0(0x10)
		TMap StopTypeHeaderNames; // 0x2D0(0x50)
		unsigned char UnknownData01_6[0x20]; // 0x320(0x20) UNKNOWN PROPERTY
		TArray ListItems_All; // 0x340(0x10)
		TArray ListItems_Destinations; // 0x350(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusUI.JunoBattleBusDestinationList");
			return ret;
		}

		void OnOwningBattleBusStopSet(AJunoBattleBusStop OwningBattleBusStop); // Flags: Event|Protected|BlueprintEvent 0x7FF414E35CC0
	};


	// Class JunoBattleBusUI.JunoBattleBusMapWidget
	// Inherited from UJunoFullScreenMap -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x330 (0x8E0 - 0x5B0)
	class UJunoBattleBusMapWidget : public UJunoFullScreenMap	
	{
	public:
		EJunoBattleBusMapWidgetState CurrentMapState; // 0x5B0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x5B1(0x7) UNKNOWN PROPERTY
		UJunoBattleBusDestinationList BattleBusDestinationList; // 0x5B8(0x8)
		UJunoBattleBusQueuedPlayersWidget QueuedPlayersWidget; // 0x5C0(0x8)
		UCommonButtonBase Button_Confirm; // 0x5C8(0x8)
		FDataTableRowHandle ModalConfirmAction; // 0x5D0(0x10)
		FDataTableRowHandle ModalCancelAction; // 0x5E0(0x10)
		UDynamicUIScene ModalScene; // 0x5F0(0x8)
		UDynamicUIScene BasicModalScene; // 0x5F8(0x8)
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
		unsigned char UnknownData03_7[0x218]; // 0x6C0(0x218) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusUI.JunoBattleBusMapWidget");
			return ret;
		}

		void ShowBasicConfirmModal(FText Title, FText Description, FText ConfirmText, UDynamicUIScene InModalScene); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E36580
		void OnBusStopSelected(FJunoDiscoveredBusStop& SelectedBusStop); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414E364A0
		void OnBattleBusMapStateSet(EJunoBattleBusMapWidgetState NewMapState, bool bFromInitialization); // Flags: Event|Protected|BlueprintEvent 0x7FF414E363C0
		void HandleRequestDestinationConfirmed(); // Flags: Final|Native|Protected 0x7FF414E362E0
		void HandleModalCancelled(); // Flags: Final|Native|Protected 0x7FF414E36200
		void HandleLeaveBusConfirmed(); // Flags: Final|Native|Protected 0x7FF414E36120
		void HandleBoardBusConfirmed(); // Flags: Final|Native|Protected 0x7FF414E36040
		FJunoDiscoveredBusStop GetOriginBusStop(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E35F60
		FJunoDiscoveredBusStop GetDestinationBusStop(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E35E80
		FJunoDiscoveredBusStop GetCurrentBusStop(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E35DA0
	};


	// Class JunoBattleBusUI.JunoBattleBusLoadingScreen
	// Inherited from UJunoBattleBusMapWidget -> UJunoFullScreenMap -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x8E0 - 0x8D8)
	class UJunoBattleBusLoadingScreen : public UJunoBattleBusMapWidget	
	{
	public:
		bool bZoomToFit; // 0x8D8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x8D9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusUI.JunoBattleBusLoadingScreen");
			return ret;
		}
	};


	// Class JunoBattleBusUI.JunoBattleBusQueuedPlayersWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x308 - 0x2B8)
	class UJunoBattleBusQueuedPlayersWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x40]; // 0x2B8(0x40) UNKNOWN PROPERTY
		FFortPrioritizedWidgetData PrioritizationData; // 0x2F8(0x2)
		unsigned char UnknownData03_7[0xE]; // 0x2FA(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusUI.JunoBattleBusQueuedPlayersWidget");
			return ret;
		}

		bool ShouldSetHasActiveContent(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E36BA0
		void OnQueueTimerUpdate(int32_t TimeRemaining); // Flags: Event|Public|BlueprintEvent 0x7FF414E36AC0
		void OnQueuedPlayersSet(TArray& QueuedPlayers); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414E369E0
		void OnOriginBusStopSet(FJunoDiscoveredBusStop& OriginBusStop); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414E36900
		void OnOriginBusStopCleared(); // Flags: Event|Public|BlueprintEvent 0x7FF414E36820
		void OnDestinationBusStopSet(FJunoDiscoveredBusStop& OriginBusStop); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414E36740
		void OnDestinationBusStopCleared(); // Flags: Event|Public|BlueprintEvent 0x7FF414E36660
	};


	// Class JunoBattleBusUI.JunoBattleBusRouteIndicator
	// Inherited from UJunoMapIndicatorType -> UObject
	// Size: 0x150 (0x1E0 - 0x90)
	class UJunoBattleBusRouteIndicator : public UJunoMapIndicatorType	
	{
	public:
		UMaterialInterface OriginBusStopMaterial; // 0x90(0x8)
		FVector2D OriginBusStopDrawSize; // 0x98(0x10)
		UMaterialInterface DestinationBusStopMaterial; // 0xA8(0x8)
		FVector2D DestinationBusStopDrawSize; // 0xB0(0x10)
		UMaterialInterface BusPathMaterial; // 0xC0(0x8)
		float BusPathWidth; // 0xC8(0x4)
		unsigned char UnknownData01_7[0x114]; // 0xCC(0x114) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBattleBusUI.JunoBattleBusRouteIndicator");
			return ret;
		}
	};

}
