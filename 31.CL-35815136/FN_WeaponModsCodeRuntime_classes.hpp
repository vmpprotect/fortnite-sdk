#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WeaponModsCodeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class WeaponModsCodeRuntime.FortModStation_WeaponUICapture
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class AFortModStation_WeaponUICapture : public AActor	
	{
	public:
		char PSOPrecachingCheckMaxRetries; // 0x290(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x291(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UMeshComponent*> MeshComponentPtr; // 0x294(0x8)
		unsigned char UnknownData01_7[0x14]; // 0x29C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsCodeRuntime.FortModStation_WeaponUICapture");
			return ret;
		}

		void RefreshCaptureWhenPSOPrecachingDone(UMeshComponent* PreviewMeshComponent); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7506AF900(relative to base address)
		void OnRefreshCapture(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		void WeaponModSlotsChangedDelegate__DelegateSignature(AFortWeapon* Weapon); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ServerRequestRemoveModFromWeaponToInventory(UFortWeaponModItemDefinition* WeaponModDef, FGuid WeaponItemGuid); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults, Memory Exec: 0x7FF7506AFF74(relative to base address)
		void ServerRequestAddModToWeaponFromInventory(FGuid WeaponModItemGUID, FGuid WeaponItemGuid); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults, Memory Exec: 0x7FF7506AFD70(relative to base address)
		void HandleWeaponUnequip(AFortWeapon* Weapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506AF6A0(relative to base address)
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

		UFortResourceItemDefinition GetTransactionCurrency(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74E4857B8(relative to base address)
		bool GetModCostOverride(float& OutModCostOverride); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7506AF61C(relative to base address)
		void ForceEndInteractionsWithModStation(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506AF5EC(relative to base address)
	};


	// Class WeaponModsCodeRuntime.FortWeaponModStationSharedDataComponent
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xF8 (0x198 - 0xA0)
	class UFortWeaponModStationSharedDataComponent : public UFortGameStateComponent	
	{
	public:
		UDataTable* ModCostData; // 0xA0(0x8)
		TMap<FGameplayTag, FFortModSlotPurchaseList> ModSlotPurchaseLists; // 0xA8(0x50)
		TMap<FPrimaryAssetId, FFortModStationDataRow> ModCostMap; // 0xF8(0x50)
		unsigned char UnknownData00_7[0x50]; // 0x148(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsCodeRuntime.FortWeaponModStationSharedDataComponent");
			return ret;
		}

		void OnPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF749ACAD40(relative to base address)
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
		AFortWeaponModStationBase* CurrentInteractingWeaponModStation; // 0xD8(0x8)
		FScalableFloat ModStationHotfixEnabled; // 0xE0(0x28)
		FScalableFloat RemoveModCost; // 0x108(0x28)
		FScalableFloat CancelInteractDistance; // 0x130(0x28)
		UFortWeaponModItemDefinition* DefaultIronSightMod; // 0x158(0x8)
		UFortWeaponModItemDefinition* DefaultMagazineMod; // 0x160(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x168(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsCodeRuntime.FortWeaponModStationComponent");
			return ret;
		}

		void StartInteractWithWorkbenchActor(AFortWeaponModStationBase* NewInteractingWeaponModStation); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506B00DC(relative to base address)
		void ServerStopInteractWithWorkbenchActor(AFortWeaponModStationBase* NewInteractingWeaponModStation); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74FCB13CC(relative to base address)
		void ServerPurchaseWeaponModForWeapon(UFortWeaponModItemDefinition* WeaponMod, AFortWeapon* Weapon); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF7506AFCA8(relative to base address)
		void ServerPurchaseRemoveMod(UFortWeaponModItemDefinition* WeaponMod, AFortWeapon* Weapon); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF7506AFBE0(relative to base address)
		void OnStopInteractWithWorkbenchActorDelegate__DelegateSignature(AFortWeaponModStationBase* WeaponModStation); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStartInteractWithWorkbenchActorDelegate__DelegateSignature(AFortWeaponModStationBase* NewInteractingWeaponModStation); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLocalModPurchaseStarted__DelegateSignature(FFortLocalModPurchaseEventParams& EventParams); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LocalPurchaseWeaponModForWeapon(UFortWeaponModItemDefinition* WeaponMod, AFortWeapon* Weapon); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7506AF838(relative to base address)
		void LocalPurchaseRemoveMod(UFortWeaponModItemDefinition* WeaponMod, AFortWeapon* Weapon); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7506AF770(relative to base address)
		void HandleStopLocalInteractingWithStation(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7506AF68C(relative to base address)
		bool DoesCurrentWorkbenchHaveModsForWeapon(AFortWeapon* Weapon); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506AF46C(relative to base address)
		void ClientStartInteractWithWorkbenchActor(AFortWeaponModStationBase* NewInteractingWeaponModStation); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF7506AF3E8(relative to base address)
		void ClientNotifyServerForcedInteractOver(); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74E4850C4(relative to base address)
		bool CanPlayerAffordRemoveModFromWeapon(UFortWeaponModItemDefinition* WeaponMod, AFortWeapon* Weapon, AController* Controller); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7506AF2E8(relative to base address)
		bool CanPlayerAffordModForWeapon(UFortWeaponModItemDefinition* WeaponMod, AFortWeapon* Weapon, AController* Controller); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7506AF1E8(relative to base address)
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

		void ServerApplyWeaponModFromPickup(AFortPickup* Pickup, UFortWeaponModItemDefinition* WeaponModDef, AFortWeapon* Weapon); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF7506AFAE4(relative to base address)
	};

}
