#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FNE_UILibrary
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FNE_UILibrary.FNE_ModularButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13A0 - 0x1390)
	class UFNE_ModularButton : public UCommonButtonBase	
	{
	public:
		TArray ModularBlocks; // 0x1390(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FNE_UILibrary.FNE_ModularButton");
			return ret;
		}

		void UnregisterModularBlock(UFNE_UIBlock bLock); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD9980
		void UnregisterAllModularBlocks(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD98A0
		void SetBlocksTiming(FFNE_UIBlockTiming& Timing); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DD97C0
		void RequestTransitionOnBlocks(EFNE_UIBlockVisualState State); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD96E0
		void RequestInstantTransitionOnBlocks(EFNE_UIBlockInstantTransitionState State); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD9600
		void RegisterModularBlock(UFNE_UIBlock bLock); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD9520
	};


	// Class FNE_UILibrary.FNE_UIBlock
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x2F8 - 0x2B8)
	class UFNE_UIBlock : public UUserWidget	
	{
	public:
		FMulticastInlineDelegate ViewportResizedEvent; // 0x2B8(0x10)
		FFNE_UIBlockTiming TransitionTiming; // 0x2C8(0x2C)
		unsigned char UnknownData01_7[0x4]; // 0x2F4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FNE_UILibrary.FNE_UIBlock");
			return ret;
		}

		void ViewportResizedEvent_Blueprint__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140DA9E8
		void SetBlockTiming(FFNE_UIBlockTiming& Timing); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140DA848
		void RequestTransition(EFNE_UIBlockVisualState State); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140DA768
		void RequestInstantTransition(EFNE_UIBlockInstantTransitionState State); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140BA620
		void PlayTransition(UWidgetAnimation Animation, bool bPlayForward); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140BA540
		void OnTransitionUnhoveredRequested(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140BA460
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140BA380
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140BA2A0
		void OnTransitionReleasedRequested(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140BA1C0
		void OnTransitionPressedRequested(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140BA0E0
		void OnTransitionHoveredRequested(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140BA000
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140B9F20
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140B9E40
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140B9D60
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140B9C80
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140B9BA0
		void OnInstantTransitionToUnlocked(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140B9AC0
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140B99E0
		void OnInstantTransitionToLocked(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140B9900
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140B9820
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140B9740
		void OnInstantTransitionToDeselected(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140B9660
		float GetTransitionTime(EFNE_UIBlockVisualState State); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4140B9518
	};


	// Class FNE_UILibrary.FNE_UIBlueprintFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFNE_UIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FNE_UILibrary.FNE_UIBlueprintFunctionLibrary");
			return ret;
		}

		void PlayAnimationDuringTime(UUserWidget Widget, UWidgetAnimation Animation, float PlayTime, bool bPlayForward); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DD9A60
	};


	// Class FNE_UILibrary.FNE_CTAButton
	// Inherited from UFNE_ModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13C0 - 0x13A0)
	class UFNE_CTAButton : public UFNE_ModularButton	
	{
	public:
		FText Text; // 0x13A0(0x10)
		FText SecondaryText; // 0x13B0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FNE_UILibrary.FNE_CTAButton");
			return ret;
		}

		void SetText(FText& ButtonText); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DD9DE0
		void SetSecondaryText(FText& ButtonSecondaryText); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DD9D00
		void BP_SetText(FText& ButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DD9C20
		void BP_SetSecondaryText(FText& ButtonSecondaryText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DD9B40
	};


	// Class FNE_UILibrary.FNE_StylableButton
	// Inherited from UFNE_ModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13C0 - 0x13A0)
	class UFNE_StylableButton : public UFNE_ModularButton	
	{
	public:
		FText Text; // 0x13A0(0x10)
		FText SecondaryText; // 0x13B0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FNE_UILibrary.FNE_StylableButton");
			return ret;
		}

		void BP_SetText(FText& ButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DD9FA0
		void BP_SetSecondaryText(FText& ButtonSecondaryText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DD9EC0
	};

}
