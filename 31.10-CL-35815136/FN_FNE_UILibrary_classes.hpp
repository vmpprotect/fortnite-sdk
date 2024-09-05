#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FNE_UILibrary
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FNE_UILibrary.FNE_ModularButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13A0 - 0x1390)
	class UFNE_ModularButton : public UCommonButtonBase	
	{
	public:
		TArray<UFNE_UIBlock*> ModularBlocks; // 0x1390(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FNE_UILibrary.FNE_ModularButton");
			return ret;
		}

		void UnregisterModularBlock(UFNE_UIBlock* bLock); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75191FA90(relative to base address)
		void UnregisterAllModularBlocks(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75191FA7C(relative to base address)
		void SetBlocksTiming(FFNE_UIBlockTiming& Timing); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75191F8B4(relative to base address)
		void RequestTransitionOnBlocks(EFNE_UIBlockVisualState State); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75191F780(relative to base address)
		void RequestInstantTransitionOnBlocks(EFNE_UIBlockInstantTransitionState State); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75191F680(relative to base address)
		void RegisterModularBlock(UFNE_UIBlock* bLock); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75191F524(relative to base address)
	};


	// Class FNE_UILibrary.FNE_UIBlock
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x2F0 - 0x2B0)
	class UFNE_UIBlock : public UUserWidget	
	{
	public:
		FMulticastInlineDelegate ViewportResizedEvent; // 0x2B0(0x10)
		FFNE_UIBlockTiming TransitionTiming; // 0x2C0(0x2C)
		unsigned char UnknownData00_7[0x4]; // 0x2EC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FNE_UILibrary.FNE_UIBlock");
			return ret;
		}

		void ViewportResizedEvent_Blueprint__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBlockTiming(FFNE_UIBlockTiming& Timing); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75191F800(relative to base address)
		void RequestTransition(EFNE_UIBlockVisualState State); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75191F700(relative to base address)
		void RequestInstantTransition(EFNE_UIBlockInstantTransitionState State); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75191F600(relative to base address)
		void PlayTransition(UWidgetAnimation* Animation, bool bPlayForward); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75191F3D4(relative to base address)
		void OnTransitionUnhoveredRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionReleasedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionPressedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionHoveredRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToUnlocked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToLocked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToDeselected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetTransitionTime(EFNE_UIBlockVisualState State); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75191F344(relative to base address)
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

		void PlayAnimationDuringTime(UUserWidget* Widget, UWidgetAnimation* Animation, float playtime, bool bPlayForward); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FC6AC1C(relative to base address)
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

		void SetText(FText& ButtonText); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75191F9E0(relative to base address)
		void SetSecondaryText(FText& ButtonSecondaryText); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75191F944(relative to base address)
		void BP_SetText(FText& ButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_SetSecondaryText(FText& ButtonSecondaryText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		void BP_SetText(FText& ButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_SetSecondaryText(FText& ButtonSecondaryText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
