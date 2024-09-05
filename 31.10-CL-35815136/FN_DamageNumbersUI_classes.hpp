#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DamageNumbersUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DamageNumbersUI.CommonUserWidget_DamageNumbers
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1B8 (0x490 - 0x2D8)
	class UCommonUserWidget_DamageNumbers : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x2D8(0x10) UNKNOWN PROPERTY
		FVector WorldSpacePos; // 0x2E8(0x18)
		FGameplayTag CheckAnimalTag; // 0x300(0x4)
		float Damage; // 0x304(0x4)
		float AdditionalVerticalScreenOffset; // 0x308(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x30C(0x4) UNKNOWN PROPERTY
		double SpawnTime; // 0x310(0x8)
		FVector2D DamageNumberScaleVector; // 0x318(0x10)
		FVector2D ScreenSpaceOffsetFromHitActor; // 0x328(0x10)
		FVector2D InverseHUDScaleVector; // 0x338(0x10)
		AActor* HitActor; // 0x348(0x8)
		bool bHitAnimal; // 0x350(0x1)
		bool bHitVehicle; // 0x351(0x1)
		bool bIsPlayingCritAnimation; // 0x352(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x353(0x1) UNKNOWN PROPERTY
		FLinearColor HitColor; // 0x354(0x10)
		FLinearColor VehicleColor; // 0x364(0x10)
		FLinearColor CritColor; // 0x374(0x10)
		FLinearColor HealthColor; // 0x384(0x10)
		FLinearColor ShieldColor; // 0x394(0x10)
		FLinearColor CritColor_Text; // 0x3A4(0x10)
		FLinearColor ShieldColor_Text; // 0x3B4(0x10)
		FLinearColor HealthColor_InnerStroke; // 0x3C4(0x10)
		FLinearColor ShieldColor_InnerStroke; // 0x3D4(0x10)
		FLinearColor CritColor_InnerStroke; // 0x3E4(0x10)
		FLinearColor DamageIconVehicleColor; // 0x3F4(0x10)
		FLinearColor DamageIconShieldColor; // 0x404(0x10)
		FLinearColor DamageIconShieldOutline1Color; // 0x414(0x10)
		FLinearColor DamageIconShieldOutline2Color; // 0x424(0x10)
		FLinearColor DamageIconVehicleOutline1Color; // 0x434(0x10)
		FLinearColor DamageIconVehicleOutline2Color; // 0x444(0x10)
		unsigned char UnknownData03_6[0x4]; // 0x454(0x4) UNKNOWN PROPERTY
		UWidgetAnimation* OnDamage; // 0x458(0x8)
		UWidgetAnimation* OnDamage_Crit; // 0x460(0x8)
		UCommonTextBlock* Text_Number; // 0x468(0x8)
		UCommonTextBlock* Text_Number_Stroke; // 0x470(0x8)
		UImage* DamageTypeCrit; // 0x478(0x8)
		UImage* DamageTypeIcon; // 0x480(0x8)
		UImage* DamageTypeIcon_EMP; // 0x488(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DamageNumbersUI.CommonUserWidget_DamageNumbers");
			return ret;
		}

		void UpdateScreenSpacePosition(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7513303C8(relative to base address)
		void Reset(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751330364(relative to base address)
		void OnShieldBreak(bool bIsOvershield); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDamageDealt(double InDamage, AActor* InActor, bool bInShield, bool bInCrit, FVector InWorldSpacePos, bool bInEMP); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75132FC24(relative to base address)
	};


	// Class DamageNumbersUI.FortUserWidget_DamageNumbers
	// Inherited from UFortUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x348 - 0x2C0)
	class UFortUserWidget_DamageNumbers : public UFortUserWidget	
	{
	public:
		double VerticalShiftForNewDamage; // 0x2C0(0x8)
		double AccumulationTime; // 0x2C8(0x8)
		int32_t MaxNumberCount; // 0x2D0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2D4(0x4) UNKNOWN PROPERTY
		FVector OffsetFromPawnLocationDBNO; // 0x2D8(0x18)
		FVector OffsetFromPawnLocation; // 0x2F0(0x18)
		AFortPlayerPawn* BoundPawn; // 0x308(0x8)
		FGameplayTag HideDamageNumbersTag; // 0x310(0x4)
		FGameplayTag DamageAtLocTag; // 0x314(0x4)
		FGameplayTagContainer TagsToNotDisplayDmgNumbersOnSpecificActors; // 0x318(0x20)
		UDynamicEntryBox* DynamicEntryBox_Numbers; // 0x338(0x8)
		FGameplayTag DamageCueEMPTag; // 0x340(0x4)
		bool bPrecreateDamageNumberEntries; // 0x344(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x345(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DamageNumbersUI.FortUserWidget_DamageNumbers");
			return ret;
		}

		void UpdateBinding(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7513303B4(relative to base address)
		void OnShieldBreak(bool bInOverShield); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7513302E4(relative to base address)
		void OnPawnSet(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75133027C(relative to base address)
		void OnDamageDealt(double InDamage, bool bInCritical, bool bInFatal, bool bInShield, AActor* HitActor, FVector HitLocation, FGameplayTagContainer Tags); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75132FF10(relative to base address)
		void ClearBinding(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75132FC10(relative to base address)
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
