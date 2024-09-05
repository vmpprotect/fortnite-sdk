#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AdvancedWidgets
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AdvancedWidgets.RadialSlider
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x5C8 (0x720 - 0x158)
	class URadialSlider : public UWidget	
	{
	public:
		float Value; // 0x158(0x4)
		FDelegateProperty ValueDelegate; // 0x15C(0xC)
		bool bUseCustomDefaultValue; // 0x168(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x169(0x3) UNKNOWN PROPERTY
		float CustomDefaultValue; // 0x16C(0x4)
		FRuntimeFloatCurve SliderRange; // 0x170(0x88)
		TArray<float> ValueTags; // 0x1F8(0x10)
		float SliderHandleStartAngle; // 0x208(0x4)
		float SliderHandleEndAngle; // 0x20C(0x4)
		float AngularOffset; // 0x210(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x214(0x4) UNKNOWN PROPERTY
		FVector2D HandStartEndRatio; // 0x218(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x228(0x8) UNKNOWN PROPERTY
		FSliderStyle WidgetStyle; // 0x230(0x440)
		FLinearColor SliderBarColor; // 0x670(0x10)
		FLinearColor SliderProgressColor; // 0x680(0x10)
		FLinearColor SliderHandleColor; // 0x690(0x10)
		FLinearColor CenterBackgroundColor; // 0x6A0(0x10)
		bool Locked; // 0x6B0(0x1)
		bool MouseUsesStep; // 0x6B1(0x1)
		bool RequiresControllerLock; // 0x6B2(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x6B3(0x1) UNKNOWN PROPERTY
		float StepSize; // 0x6B4(0x4)
		bool IsFocusable; // 0x6B8(0x1)
		bool UseVerticalDrag; // 0x6B9(0x1)
		bool ShowSliderHandle; // 0x6BA(0x1)
		bool ShowSliderHand; // 0x6BB(0x1)
		unsigned char UnknownData04_6[0x4]; // 0x6BC(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMouseCaptureBegin; // 0x6C0(0x10)
		FMulticastInlineDelegate OnMouseCaptureEnd; // 0x6D0(0x10)
		FMulticastInlineDelegate OnControllerCaptureBegin; // 0x6E0(0x10)
		FMulticastInlineDelegate OnControllerCaptureEnd; // 0x6F0(0x10)
		FMulticastInlineDelegate OnValueChanged; // 0x700(0x10)
		unsigned char UnknownData05_7[0x10]; // 0x710(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AdvancedWidgets.RadialSlider");
			return ret;
		}

		void SetValueTags(TArray<float>& InValueTags); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBEA324(relative to base address)
		void SetValue(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBEA2A4(relative to base address)
		void SetUseVerticalDrag(bool InUseVerticalDrag); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBEA21C(relative to base address)
		void SetStepSize(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBEA19C(relative to base address)
		void SetSliderRange(FRuntimeFloatCurve& InSliderRange); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBEA0B0(relative to base address)
		void SetSliderProgressColor(FLinearColor InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DBE9F98(relative to base address)
		void SetSliderHandleStartAngle(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBE9F08(relative to base address)
		void SetSliderHandleEndAngle(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBE9E78(relative to base address)
		void SetSliderHandleColor(FLinearColor InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DBE9D60(relative to base address)
		void SetSliderBarColor(FLinearColor InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DBE9C48(relative to base address)
		void SetShowSliderHandle(bool InShowSliderHandle); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBE9BC0(relative to base address)
		void SetShowSliderHand(bool InShowSliderHand); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBE9B38(relative to base address)
		void SetLocked(bool InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBE9A7C(relative to base address)
		void SetHandStartEndRatio(FVector2D InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DBE9964(relative to base address)
		void SetCustomDefaultValue(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBE98E4(relative to base address)
		void SetCenterBackgroundColor(FLinearColor InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DBE97CC(relative to base address)
		void SetAngularOffset(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBE9740(relative to base address)
		float GetValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBE9718(relative to base address)
		float GetNormalizedSliderHandlePosition(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBE96E0(relative to base address)
		float GetCustomDefaultValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBE96B8(relative to base address)
	};

}
