#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ScoutDroneUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		TWeakObjectPtr<UFortControllerComponent_Interaction*> InteractionComponent; // 0x68(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

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
		UClass* ItemIndicatorType; // 0xA0(0x8)
		UClass* DbnoIndicatorType; // 0xA8(0x8)
		FUserWidgetPool IndicatorPool; // 0xB0(0x88)
		unsigned char UnknownData00_7[0x20]; // 0x138(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneUI.DronePickUpIndicatorComponent");
			return ret;
		}

		void OnDroneDestroyed(AActor* DestroyedActor); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515E66FC(relative to base address)
		void Init(AFortScoutDrone* Drone); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7515E6524(relative to base address)
	};


	// Class ScoutDroneUI.ScoutDroneHUD
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x120 (0x3D0 - 0x2B0)
	class UScoutDroneHUD : public UUserWidget	
	{
	public:
		float TimeToConfirmTargetCache; // 0x2B0(0x4)
		float InitialHealth; // 0x2B4(0x4)
		FScalableFloat WarningRange; // 0x2B8(0x28)
		FScalableFloat SignalLossRange; // 0x2E0(0x28)
		FScalableFloat UpdateSignalInterval; // 0x308(0x28)
		FGameplayTag MarkAbilityTag; // 0x330(0x4)
		FGameplayTag DismissAbilityTag; // 0x334(0x4)
		FGameplayTag InteractAbilityTag; // 0x338(0x4)
		FGameplayTag PickUpAbilityTag; // 0x33C(0x4)
		FGameplayTag PickUpTargetsChangedTag; // 0x340(0x4)
		FGameplayTag SpeedBoostAbilityTag; // 0x344(0x4)
		UOverlay* Overlay_Health; // 0x348(0x8)
		UOverlay* Overlay_EnergyLevel; // 0x350(0x8)
		UOverlay* Overlay_Reticle; // 0x358(0x8)
		UOverlay* Overlay_TetheringIndicator; // 0x360(0x8)
		float MaxHealthCache; // 0x368(0x4)
		float MaxEnergyCache; // 0x36C(0x4)
		unsigned char UnknownData00_6[0x48]; // 0x370(0x48) UNKNOWN PROPERTY
		FTimerHandle SignalDataTimerHandle; // 0x3B8(0x8)
		TArray<FScoutDroneWidgetIdentifier> HUDIdentifiers; // 0x3C0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneUI.ScoutDroneHUD");
			return ret;
		}

		void OnTargetingStatusChanged(FScoutDroneStatusData& StatusData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnReticleChangeAbilityActivated(FGameplayTag UpdatedTag); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOwningPlayerDamaged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDroneSpeedBoostAbilityUsed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDroneSpeedBoostAbilityEnd(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDroneSignalDataUpdated(float DistanceFromPlayer, float SignalPercentage); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDronePickUpTargetsEmpty(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDronePickUpTargetsAvailable(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDronePickUpAbilityUsed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDronePickUpAbilityEnd(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDroneMarkAbilityUsed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDroneMarkAbilityEnd(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDroneInteractAbilityUsed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDroneInteractAbilityEnd(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDroneHealthUpdated(float HealthPercentage, float CurrentHealth); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDroneEnergyChanged(float EnergyPercentage); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDroneDismissAbilityUsed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetTargetConfirmationTime(); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF7515E64FC(relative to base address)
		AFortScoutDrone GetControlledDrone(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515E64D8(relative to base address)
	};


	// Class ScoutDroneUI.ScoutDroneTetherIndicator
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2D0 - 0x2B0)
	class UScoutDroneTetherIndicator : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x2B0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneUI.ScoutDroneTetherIndicator");
			return ret;
		}

		AFortScoutDrone GetControlledDrone(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515E64D8(relative to base address)
		void BP_WhileInWarningRange(float SignalIntensityPercentage); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnExitWarningRange(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEnterWarningRange(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEnterSignalLossRange(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		void BP_OnScoutDroneDismissed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnScoutDroneDeployed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
