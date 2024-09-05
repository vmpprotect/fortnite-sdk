#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AdvancedWidgets
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AdvancedWidgets.RadialSlider
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x5C0 (0x720 - 0x160)
	class URadialSlider : public UWidget	
	{
	public:
		float Value; // 0x160(0x4)
		FDelegateProperty ValueDelegate; // 0x164(0xC)
		bool bUseCustomDefaultValue; // 0x170(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x171(0x3) UNKNOWN PROPERTY
		float CustomDefaultValue; // 0x174(0x4)
		FRuntimeFloatCurve SliderRange; // 0x178(0x88)
		TArray ValueTags; // 0x200(0x10)
		float SliderHandleStartAngle; // 0x210(0x4)
		float SliderHandleEndAngle; // 0x214(0x4)
		float AngularOffset; // 0x218(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x21C(0x4) UNKNOWN PROPERTY
		FVector2D HandStartEndRatio; // 0x220(0x10)
		FSliderStyle WidgetStyle; // 0x230(0x440)
		FLinearColor SliderBarColor; // 0x670(0x10)
		FLinearColor SliderProgressColor; // 0x680(0x10)
		FLinearColor SliderHandleColor; // 0x690(0x10)
		FLinearColor CenterBackgroundColor; // 0x6A0(0x10)
		bool Locked; // 0x6B0(0x1)
		bool MouseUsesStep; // 0x6B1(0x1)
		bool RequiresControllerLock; // 0x6B2(0x1)
		unsigned char UnknownData07_6[0x1]; // 0x6B3(0x1) UNKNOWN PROPERTY
		float StepSize; // 0x6B4(0x4)
		bool IsFocusable; // 0x6B8(0x1)
		bool UseVerticalDrag; // 0x6B9(0x1)
		bool ShowSliderHandle; // 0x6BA(0x1)
		bool ShowSliderHand; // 0x6BB(0x1)
		unsigned char UnknownData08_6[0x4]; // 0x6BC(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMouseCaptureBegin; // 0x6C0(0x10)
		FMulticastInlineDelegate OnMouseCaptureEnd; // 0x6D0(0x10)
		FMulticastInlineDelegate OnControllerCaptureBegin; // 0x6E0(0x10)
		FMulticastInlineDelegate OnControllerCaptureEnd; // 0x6F0(0x10)
		FMulticastInlineDelegate OnValueChanged; // 0x700(0x10)
		unsigned char UnknownData09_7[0x10]; // 0x710(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AdvancedWidgets.RadialSlider");
			return ret;
		}

		void SetValueTags(TArray& InValueTags); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146450D8
		void SetValue(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414644FF8
		void SetUseVerticalDrag(bool InUseVerticalDrag); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414644F18
		void SetStepSize(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414644E38
		void SetSliderRange(FRuntimeFloatCurve& InSliderRange); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414644D58
		void SetSliderProgressColor(FLinearColor InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF414644C78
		void SetSliderHandleStartAngle(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414644B98
		void SetSliderHandleEndAngle(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414644AB8
		void SetSliderHandleColor(FLinearColor InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4146449D8
		void SetSliderBarColor(FLinearColor InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4146448F8
		void SetShowSliderHandle(bool InShowSliderHandle); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414644818
		void SetShowSliderHand(bool InShowSliderHand); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414644738
		void SetLocked(bool InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414644658
		void SetHandStartEndRatio(FVector2D InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF414644578
		void SetCustomDefaultValue(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414644498
		void SetCenterBackgroundColor(FLinearColor InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4146443B8
		void SetAngularOffset(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4146442D8
		float GetValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146441F8
		float GetNormalizedSliderHandlePosition(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414644118
		float GetCustomDefaultValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414644038
	};

}
