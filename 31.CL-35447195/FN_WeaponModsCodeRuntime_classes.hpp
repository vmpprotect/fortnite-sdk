#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WeaponModsCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class WeaponModsCodeRuntime.FortModStation_WeaponUICapture
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class AFortModStation_WeaponUICapture : public AActor	
	{
	public:
		char PSOPrecachingCheckMaxRetries; // 0x290(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x291(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr MeshComponentPtr; // 0x294(0x8)
		unsigned char UnknownData03_7[0x14]; // 0x29C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsCodeRuntime.FortModStation_WeaponUICapture");
			return ret;
		}

		void RefreshCaptureWhenPSOPrecachingDone(UMeshComponent PreviewMeshComponent); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BDB038
		void OnRefreshCapture(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BDAF58
	};


	// Class WeaponModsCodeRuntime.FortWeaponModManagementComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UFortWeaponModManagementComponent : public UFortControllerComponent	
	{
	public:
		FMulticastInlineDelegate OnWeaponModSlotsChanged; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsCodeRuntime.FortWeaponModManagementComponent");
			return ret;
		}

		void WeaponModSlotsChangedDelegate__DelegateSignature(AFortWeapon Weapon); // Flags: MulticastDelegate|Public|Delegate 0x7FF4143DE758
		void ServerRequestRemoveModFromWeaponToInventory(UFortWeaponModItemDefinition WeaponModDef, FGuid WeaponItemGuid); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 0x7FF4143DE678
		void ServerRequestAddModToWeaponFromInventory(FGuid WeaponModItemGUID, FGuid WeaponItemGuid); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 0x7FF4143DE598
		void HandleWeaponUnequip(AFortWeapon Weapon); // Flags: Final|Native|Private 0x7FF4143DE4B8
	};


	// Class WeaponModsCodeRuntime.FortWeaponModStationBase
	// Inherited from ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0xC8 (0xCA0 - 0xBD8)
	class AFortWeaponModStationBase : public ABuildingProp	
	{
	public:
		FMarkedActorDisplayInfo MarkerDisplay; // 0xBD8(0xA0)
		FVector MarkerPositionOffset; // 0xC78(0x18)
		FMulticastInlineDelegate OnForceEndInteractionDelegate; // 0xC90(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsCodeRuntime.FortWeaponModStationBase");
			return ret;
		}

		UFortResourceItemDefinition GetTransactionCurrency(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414BDB2D8
		bool GetModCostOverride(float& OutModCostOverride); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414BDB1F8
		void ForceEndInteractionsWithModStation(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BDB118
	};


	// Class WeaponModsCodeRuntime.FortWeaponModStationSharedDataComponent
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xF8 (0x198 - 0xA0)
	class UFortWeaponModStationSharedDataComponent : public UFortGameStateComponent	
	{
	public:
		UDataTable ModCostData; // 0xA0(0x8)
		TMap ModSlotPurchaseLists; // 0xA8(0x50)
		TMap ModCostMap; // 0xF8(0x50)
		unsigned char UnknownData01_7[0x50]; // 0x148(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsCodeRuntime.FortWeaponModStationSharedDataComponent");
			return ret;
		}

		void OnPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BDB3B8
	};


	// Class WeaponModsCodeRuntime.FortWeaponModStationComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xE0 (0x188 - 0xA8)
	class UFortWeaponModStationComponent : public UFortControllerComponent	
	{
	public:
		FMulticastInlineDelegate OnLocalModPurchaseStarted; // 0xA8(0x10)
		FMulticastInlineDelegate OnStartInteractWithWorkbenchActor; // 0xB8(0x10)
		FMulticastInlineDelegate OnStopInteractWithWorkbenchActor; // 0xC8(0x10)
		AFortWeaponModStationBase CurrentInteractingWeaponModStation; // 0xD8(0x8)
		FScalableFloat ModStationHotfixEnabled; // 0xE0(0x28)
		FScalableFloat RemoveModCost; // 0x108(0x28)
		FScalableFloat CancelInteractDistance; // 0x130(0x28)
		UFortWeaponModItemDefinition DefaultIronSightMod; // 0x158(0x8)
		UFortWeaponModItemDefinition DefaultMagazineMod; // 0x160(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x168(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsCodeRuntime.FortWeaponModStationComponent");
			return ret;
		}

		void StartInteractWithWorkbenchActor(AFortWeaponModStationBase NewInteractingWeaponModStation); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4143DF538
		void ServerStopInteractWithWorkbenchActor(AFortWeaponModStationBase NewInteractingWeaponModStation); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF4143DF458
		void ServerPurchaseWeaponModForWeapon(UFortWeaponModItemDefinition WeaponMod, AFortWeapon Weapon); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF4143DF378
		void ServerPurchaseRemoveMod(UFortWeaponModItemDefinition WeaponMod, AFortWeapon Weapon); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF4143DF298
		void OnStopInteractWithWorkbenchActorDelegate__DelegateSignature(AFortWeaponModStationBase WeaponModStation); // Flags: MulticastDelegate|Public|Delegate 0x7FF4143DF1B8
		void OnStartInteractWithWorkbenchActorDelegate__DelegateSignature(AFortWeaponModStationBase NewInteractingWeaponModStation); // Flags: MulticastDelegate|Public|Delegate 0x7FF4143DF0D8
		void OnLocalModPurchaseStarted__DelegateSignature(FFortLocalModPurchaseEventParams& EventParams); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF4143DEF38
		void LocalPurchaseWeaponModForWeapon(UFortWeaponModItemDefinition WeaponMod, AFortWeapon Weapon); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent 0x7FF4143DEE58
		void LocalPurchaseRemoveMod(UFortWeaponModItemDefinition WeaponMod, AFortWeapon Weapon); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent 0x7FF4143DED78
		void HandleStopLocalInteractingWithStation(); // Flags: Final|Native|Public 0x7FF4143DEC98
		bool DoesCurrentWorkbenchHaveModsForWeapon(AFortWeapon Weapon); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4143DEBB8
		void ClientStartInteractWithWorkbenchActor(AFortWeaponModStationBase NewInteractingWeaponModStation); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF4143DEAD8
		void ClientNotifyServerForcedInteractOver(); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF4143DE9F8
		bool CanPlayerAffordRemoveModFromWeapon(UFortWeaponModItemDefinition WeaponMod, AFortWeapon Weapon, AController Controller); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF4143DE918
		bool CanPlayerAffordModForWeapon(UFortWeaponModItemDefinition WeaponMod, AFortWeapon Weapon, AController Controller); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF4143DE838
	};


	// Class WeaponModsCodeRuntime.FortPickupInteractOverrideComponent_WeaponMods
	// Inherited from UFortPickupInteractOverrideComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UFortPickupInteractOverrideComponent_WeaponMods : public UFortPickupInteractOverrideComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsCodeRuntime.FortPickupInteractOverrideComponent_WeaponMods");
			return ret;
		}

		void ServerApplyWeaponModFromPickup(AFortPickup Pickup, UFortWeaponModItemDefinition WeaponModDef, AFortWeapon Weapon); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF414BDB498
	};

}
