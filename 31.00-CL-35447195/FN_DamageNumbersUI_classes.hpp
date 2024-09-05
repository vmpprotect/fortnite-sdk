#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DamageNumbersUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DamageNumbersUI.CommonUserWidget_DamageNumbers
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1B8 (0x498 - 0x2E0)
	class UCommonUserWidget_DamageNumbers : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0x2E0(0x10) UNKNOWN PROPERTY
		FVector WorldSpacePos; // 0x2F0(0x18)
		FGameplayTag CheckAnimalTag; // 0x308(0x4)
		float Damage; // 0x30C(0x4)
		float AdditionalVerticalScreenOffset; // 0x310(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x314(0x4) UNKNOWN PROPERTY
		double SpawnTime; // 0x318(0x8)
		FVector2D DamageNumberScaleVector; // 0x320(0x10)
		FVector2D ScreenSpaceOffsetFromHitActor; // 0x330(0x10)
		FVector2D InverseHUDScaleVector; // 0x340(0x10)
		AActor HitActor; // 0x350(0x8)
		bool bHitAnimal; // 0x358(0x1)
		bool bHitVehicle; // 0x359(0x1)
		bool bIsPlayingCritAnimation; // 0x35A(0x1)
		unsigned char UnknownData06_6[0x1]; // 0x35B(0x1) UNKNOWN PROPERTY
		FLinearColor HitColor; // 0x35C(0x10)
		FLinearColor VehicleColor; // 0x36C(0x10)
		FLinearColor CritColor; // 0x37C(0x10)
		FLinearColor HealthColor; // 0x38C(0x10)
		FLinearColor ShieldColor; // 0x39C(0x10)
		FLinearColor CritColor_Text; // 0x3AC(0x10)
		FLinearColor ShieldColor_Text; // 0x3BC(0x10)
		FLinearColor HealthColor_InnerStroke; // 0x3CC(0x10)
		FLinearColor ShieldColor_InnerStroke; // 0x3DC(0x10)
		FLinearColor CritColor_InnerStroke; // 0x3EC(0x10)
		FLinearColor DamageIconVehicleColor; // 0x3FC(0x10)
		FLinearColor DamageIconShieldColor; // 0x40C(0x10)
		FLinearColor DamageIconShieldOutline1Color; // 0x41C(0x10)
		FLinearColor DamageIconShieldOutline2Color; // 0x42C(0x10)
		FLinearColor DamageIconVehicleOutline1Color; // 0x43C(0x10)
		FLinearColor DamageIconVehicleOutline2Color; // 0x44C(0x10)
		unsigned char UnknownData07_6[0x4]; // 0x45C(0x4) UNKNOWN PROPERTY
		UWidgetAnimation OnDamage; // 0x460(0x8)
		UWidgetAnimation OnDamage_Crit; // 0x468(0x8)
		UCommonTextBlock Text_Number; // 0x470(0x8)
		UCommonTextBlock Text_Number_Stroke; // 0x478(0x8)
		UImage DamageTypeCrit; // 0x480(0x8)
		UImage DamageTypeIcon; // 0x488(0x8)
		UImage DamageTypeIcon_EMP; // 0x490(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DamageNumbersUI.CommonUserWidget_DamageNumbers");
			return ret;
		}

		void UpdateScreenSpacePosition(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CEE278
		void Reset(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CEE198
		void OnShieldBreak(bool bIsOvershield); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEE0B8
		void OnDamageDealt(double InDamage, AActor InActor, bool bInShield, bool bInCrit, FVector InWorldSpacePos, bool bInEMP); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414CEDFD8
	};


	// Class DamageNumbersUI.FortUserWidget_DamageNumbers
	// Inherited from UFortUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x350 - 0x2C8)
	class UFortUserWidget_DamageNumbers : public UFortUserWidget	
	{
	public:
		double VerticalShiftForNewDamage; // 0x2C8(0x8)
		double AccumulationTime; // 0x2D0(0x8)
		int32_t MaxNumberCount; // 0x2D8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2DC(0x4) UNKNOWN PROPERTY
		FVector OffsetFromPawnLocationDBNO; // 0x2E0(0x18)
		FVector OffsetFromPawnLocation; // 0x2F8(0x18)
		AFortPlayerPawn BoundPawn; // 0x310(0x8)
		FGameplayTag HideDamageNumbersTag; // 0x318(0x4)
		FGameplayTag DamageAtLocTag; // 0x31C(0x4)
		FGameplayTagContainer TagsToNotDisplayDmgNumbersOnSpecificActors; // 0x320(0x20)
		UDynamicEntryBox DynamicEntryBox_Numbers; // 0x340(0x8)
		FGameplayTag DamageCueEMPTag; // 0x348(0x4)
		bool bPrecreateDamageNumberEntries; // 0x34C(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x34D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DamageNumbersUI.FortUserWidget_DamageNumbers");
			return ret;
		}

		void UpdateBinding(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CEE6D8
		void OnShieldBreak(bool bInOverShield); // Flags: Final|Native|Protected 0x7FF414CEE5F8
		void OnPawnSet(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CEE518
		void OnDamageDealt(double InDamage, bool bInCritical, bool bInFatal, bool bInShield, AActor HitActor, FVector HitLocation, FGameplayTagContainer Tags); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable 0x7FF414CEE438
		void ClearBinding(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CEE358
	};


	// Class DamageNumbersUI.FortGameSettingRegistryExtension_DamageNumbers
	// Inherited from UFortGameSettingRegistryExtension -> UFortGameSettingRegistryExtensionBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortGameSettingRegistryExtension_DamageNumbers : public UFortGameSettingRegistryExtension	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DamageNumbersUI.FortGameSettingRegistryExtension_DamageNumbers");
			return ret;
		}
	};

}
