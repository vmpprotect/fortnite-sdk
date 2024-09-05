#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HitTicksUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class HitTicksUI.FortUserWidget_HitTicks
	// Inherited from UFortUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x190 (0x458 - 0x2C8)
	class UFortUserWidget_HitTicks : public UFortUserWidget	
	{
	public:
		bool bShield; // 0x2C8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x2C9(0x7) UNKNOWN PROPERTY
		double HitTime; // 0x2D0(0x8)
		double ShieldHitTime; // 0x2D8(0x8)
		double TimeSinceHit; // 0x2E0(0x8)
		double HitInterval; // 0x2E8(0x8)
		double ShieldIconMaxAlpha; // 0x2F0(0x8)
		double FadeDuration; // 0x2F8(0x8)
		double AccumulatedDamage; // 0x300(0x8)
		UImage HitMarker; // 0x308(0x8)
		UImage ShieldIcon; // 0x310(0x8)
		EHitFeedbackMode CurrentHitFeedbackMode; // 0x318(0x1)
		bool bUseNative; // 0x319(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x31A(0x6) UNKNOWN PROPERTY
		AActor PrevHitPawn; // 0x320(0x8)
		double Damage; // 0x328(0x8)
		UWidgetAnimation Anim_Elimination2; // 0x330(0x8)
		UWidgetAnimation Anim_ShieldCrack; // 0x338(0x8)
		FLinearColor BaseColor_BG1; // 0x340(0x10)
		FLinearColor ShieldColor_BG1; // 0x350(0x10)
		FLinearColor CritColor_BG1; // 0x360(0x10)
		FLinearColor ElimColor_BG1; // 0x370(0x10)
		FLinearColor BaseColor_BG2; // 0x380(0x10)
		FLinearColor ShieldColor_BG2; // 0x390(0x10)
		FLinearColor CritColor_BG2; // 0x3A0(0x10)
		FLinearColor ElimColor_BG2; // 0x3B0(0x10)
		FLinearColor BaseColor_Outline1; // 0x3C0(0x10)
		FLinearColor ShieldColor_Outline1; // 0x3D0(0x10)
		FLinearColor CritColor_Outline1; // 0x3E0(0x10)
		FLinearColor ElimColor_Outline1; // 0x3F0(0x10)
		FLinearColor BaseColor_Outline2; // 0x400(0x10)
		FLinearColor ShieldColor_Outline2; // 0x410(0x10)
		FLinearColor CritColor_Outline2; // 0x420(0x10)
		FLinearColor ElimColor_Outline2; // 0x430(0x10)
		FGameplayTag UseNativeMarkerTag; // 0x440(0x4)
		unsigned char UnknownData05_7[0x14]; // 0x444(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HitTicksUI.FortUserWidget_HitTicks");
			return ret;
		}

		void UpdateTickMarkerOpacity(float NewOpacity); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CFC7B8
		void OnShieldBreak(bool bInOverShield); // Flags: Final|Native|Protected 0x7FF414CFC6D8
		void OnReticleSettingsChanged(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CFC5F8
		void OnPawnSet(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CFC518
		void OnDisplayHitNotify(double InDamage, bool bInCritical, bool bInFatal, bool bInShield, AActor InPawn, FVector HitLocation, FGameplayTagContainer Tags); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable 0x7FF414CFC438
		void HudScaleChanged(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CFC358
	};

}
