#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HitTicksUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class HitTicksUI.FortUserWidget_HitTicks
	// Inherited from UFortUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x190 (0x450 - 0x2C0)
	class UFortUserWidget_HitTicks : public UFortUserWidget	
	{
	public:
		bool bShield; // 0x2C0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2C1(0x7) UNKNOWN PROPERTY
		double HitTime; // 0x2C8(0x8)
		double ShieldHitTime; // 0x2D0(0x8)
		double TimeSinceHit; // 0x2D8(0x8)
		double HitInterval; // 0x2E0(0x8)
		double ShieldIconMaxAlpha; // 0x2E8(0x8)
		double FadeDuration; // 0x2F0(0x8)
		double AccumulatedDamage; // 0x2F8(0x8)
		UImage* HitMarker; // 0x300(0x8)
		UImage* ShieldIcon; // 0x308(0x8)
		EHitFeedbackMode CurrentHitFeedbackMode; // 0x310(0x1)
		bool bUseNative; // 0x311(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x312(0x6) UNKNOWN PROPERTY
		AActor* PrevHitPawn; // 0x318(0x8)
		double Damage; // 0x320(0x8)
		UWidgetAnimation* Anim_Elimination2; // 0x328(0x8)
		UWidgetAnimation* Anim_ShieldCrack; // 0x330(0x8)
		FLinearColor BaseColor_BG1; // 0x338(0x10)
		FLinearColor ShieldColor_BG1; // 0x348(0x10)
		FLinearColor CritColor_BG1; // 0x358(0x10)
		FLinearColor ElimColor_BG1; // 0x368(0x10)
		FLinearColor BaseColor_BG2; // 0x378(0x10)
		FLinearColor ShieldColor_BG2; // 0x388(0x10)
		FLinearColor CritColor_BG2; // 0x398(0x10)
		FLinearColor ElimColor_BG2; // 0x3A8(0x10)
		FLinearColor BaseColor_Outline1; // 0x3B8(0x10)
		FLinearColor ShieldColor_Outline1; // 0x3C8(0x10)
		FLinearColor CritColor_Outline1; // 0x3D8(0x10)
		FLinearColor ElimColor_Outline1; // 0x3E8(0x10)
		FLinearColor BaseColor_Outline2; // 0x3F8(0x10)
		FLinearColor ShieldColor_Outline2; // 0x408(0x10)
		FLinearColor CritColor_Outline2; // 0x418(0x10)
		FLinearColor ElimColor_Outline2; // 0x428(0x10)
		FGameplayTag UseNativeMarkerTag; // 0x438(0x4)
		unsigned char UnknownData02_7[0x14]; // 0x43C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HitTicksUI.FortUserWidget_HitTicks");
			return ret;
		}

		void UpdateTickMarkerOpacity(float NewOpacity); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75138F928(relative to base address)
		void OnShieldBreak(bool bInOverShield); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75138F8A8(relative to base address)
		void OnReticleSettingsChanged(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75138F874(relative to base address)
		void OnPawnSet(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75138F860(relative to base address)
		void OnDisplayHitNotify(double InDamage, bool bInCritical, bool bInFatal, bool bInShield, AActor* InPawn, FVector HitLocation, FGameplayTagContainer Tags); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75138F3B0(relative to base address)
		void HudScaleChanged(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75138F39C(relative to base address)
	};

}
