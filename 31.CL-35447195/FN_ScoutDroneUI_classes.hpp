#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ScoutDroneUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ScoutDroneUI.FortMobileActionButtonBehaviorExtension_ScoutDroneUse
	// Inherited from UFortMobileActionButtonBehaviorExtension -> UFortMobileHUDWidgetBehaviorExtension -> UObject
	// Size: 0x20 (0xA0 - 0x80)
	class UFortMobileActionButtonBehaviorExtension_ScoutDroneUse : public UFortMobileActionButtonBehaviorExtension	
	{
	public:
		FGameplayTagContainer ContextTagToCheck; // 0x80(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneUI.FortMobileActionButtonBehaviorExtension_ScoutDroneUse");
			return ret;
		}
	};


	// Class ScoutDroneUI.FortMobileButtonBehaviorComponent_ScoutDronePickupItems
	// Inherited from UFortMobileButtonBehaviorComponent_Visibility -> UFortMobileButtonBehaviorComponent -> UObject
	// Size: 0x30 (0x78 - 0x48)
	class UFortMobileButtonBehaviorComponent_ScoutDronePickupItems : public UFortMobileButtonBehaviorComponent_Visibility	
	{
	public:
		FGameplayTagContainer HoldingItemsTags; // 0x48(0x20)
		TWeakObjectPtr InteractionComponent; // 0x68(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneUI.FortMobileButtonBehaviorComponent_ScoutDronePickupItems");
			return ret;
		}
	};


	// Class ScoutDroneUI.DronePickUpIndicatorComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB8 (0x158 - 0xA0)
	class UDronePickUpIndicatorComponent : public UGameFrameworkComponent	
	{
	public:
		UClass ItemIndicatorType; // 0xA0(0x8)
		UClass DbnoIndicatorType; // 0xA8(0x8)
		FUserWidgetPool IndicatorPool; // 0xB0(0x88)
		unsigned char UnknownData01_7[0x20]; // 0x138(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneUI.DronePickUpIndicatorComponent");
			return ret;
		}

		void OnDroneDestroyed(AActor DestroyedActor); // Flags: Final|Native|Protected 0x7FF414D60058
		void Init(AFortScoutDrone Drone); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D5FF78
	};


	// Class ScoutDroneUI.ScoutDroneHUD
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x120 (0x3D8 - 0x2B8)
	class UScoutDroneHUD : public UUserWidget	
	{
	public:
		float TimeToConfirmTargetCache; // 0x2B8(0x4)
		float InitialHealth; // 0x2BC(0x4)
		FScalableFloat WarningRange; // 0x2C0(0x28)
		FScalableFloat SignalLossRange; // 0x2E8(0x28)
		FScalableFloat UpdateSignalInterval; // 0x310(0x28)
		FGameplayTag MarkAbilityTag; // 0x338(0x4)
		FGameplayTag DismissAbilityTag; // 0x33C(0x4)
		FGameplayTag InteractAbilityTag; // 0x340(0x4)
		FGameplayTag PickUpAbilityTag; // 0x344(0x4)
		FGameplayTag PickUpTargetsChangedTag; // 0x348(0x4)
		FGameplayTag SpeedBoostAbilityTag; // 0x34C(0x4)
		UOverlay Overlay_Health; // 0x350(0x8)
		UOverlay Overlay_EnergyLevel; // 0x358(0x8)
		UOverlay Overlay_Reticle; // 0x360(0x8)
		UOverlay Overlay_TetheringIndicator; // 0x368(0x8)
		float MaxHealthCache; // 0x370(0x4)
		float MaxEnergyCache; // 0x374(0x4)
		unsigned char UnknownData01_6[0x48]; // 0x378(0x48) UNKNOWN PROPERTY
		FTimerHandle SignalDataTimerHandle; // 0x3C0(0x8)
		TArray HUDIdentifiers; // 0x3C8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneUI.ScoutDroneHUD");
			return ret;
		}

		void OnTargetingStatusChanged(FScoutDroneStatusData& StatusData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D610F8
		void OnReticleChangeAbilityActivated(FGameplayTag UpdatedTag); // Flags: Event|Protected|BlueprintEvent 0x7FF414D61018
		void OnOwningPlayerDamaged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D60F38
		void OnDroneSpeedBoostAbilityUsed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D60E58
		void OnDroneSpeedBoostAbilityEnd(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D60D78
		void OnDroneSignalDataUpdated(float DistanceFromPlayer, float SignalPercentage); // Flags: Event|Protected|BlueprintEvent 0x7FF414D60C98
		void OnDronePickUpTargetsEmpty(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D60BB8
		void OnDronePickUpTargetsAvailable(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D60AD8
		void OnDronePickUpAbilityUsed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D609F8
		void OnDronePickUpAbilityEnd(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D60918
		void OnDroneMarkAbilityUsed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D60838
		void OnDroneMarkAbilityEnd(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D60758
		void OnDroneInteractAbilityUsed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D60678
		void OnDroneInteractAbilityEnd(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D60598
		void OnDroneHealthUpdated(float HealthPercentage, float CurrentHealth); // Flags: Event|Protected|BlueprintEvent 0x7FF414D604B8
		void OnDroneEnergyChanged(float EnergyPercentage); // Flags: Event|Protected|BlueprintEvent 0x7FF414D603D8
		void OnDroneDismissAbilityUsed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D602F8
		float GetTargetConfirmationTime(); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414D60218
		AFortScoutDrone GetControlledDrone(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D60138
	};


	// Class ScoutDroneUI.ScoutDroneTetherIndicator
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2D8 - 0x2B8)
	class UScoutDroneTetherIndicator : public UUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x2B8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneUI.ScoutDroneTetherIndicator");
			return ret;
		}

		AFortScoutDrone GetControlledDrone(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D61558
		void BP_WhileInWarningRange(float SignalIntensityPercentage); // Flags: Event|Protected|BlueprintEvent 0x7FF414D61478
		void BP_OnExitWarningRange(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D61398
		void BP_OnEnterWarningRange(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D612B8
		void BP_OnEnterSignalLossRange(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D611D8
	};


	// Class ScoutDroneUI.ScoutDroneUIDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x20 (0x2D0 - 0x2B0)
	class AScoutDroneUIDirector : public ADynamicUIDirectorBase	
	{
	public:
		FGameplayTagContainer HUDTagsToHide; // 0x2B0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneUI.ScoutDroneUIDirector");
			return ret;
		}

		void BP_OnScoutDroneDismissed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D61718
		void BP_OnScoutDroneDeployed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D61638
	};

}
