#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FabricTooltipUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FabricTooltipUI.FabricTooltipViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x20 (0x88 - 0x68)
	class UFabricTooltipViewModel : public UMVVMViewModelBase	
	{
	public:
		FText Name; // 0x68(0x10)
		FText Description; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricTooltipUI.FabricTooltipViewModel");
			return ret;
		}
	};


	// Class FabricTooltipUI.FabricTooltipWidget
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x428 - 0x3C8)
	class UFabricTooltipWidget : public UFortActorIndicatorWidget	
	{
	public:
		bool bUseShortDescription; // 0x3C8(0x1)
		bool bUseShortDescriptionWithTouch; // 0x3C9(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x3CA(0x2) UNKNOWN PROPERTY
		float ShortDescriptionHeight; // 0x3CC(0x4)
		float ShowMoreThreshold; // 0x3D0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x3D4(0x4) UNKNOWN PROPERTY
		FText ShowMoreText; // 0x3D8(0x10)
		FText ShowLessText; // 0x3E8(0x10)
		UAthenaMarkerPointer MarkerPointer; // 0x3F8(0x8)
		UCommonTextBlock Text_Description; // 0x400(0x8)
		USizeBox SizeBox_Description; // 0x408(0x8)
		UPanelWidget Panel_ShowMorePrompt; // 0x410(0x8)
		UCommonTextBlock Text_ShowMorePrompt; // 0x418(0x8)
		bool bShowingFullDescription; // 0x420(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x421(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricTooltipUI.FabricTooltipWidget");
			return ret;
		}

		void UpdateShowMore(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D6A238
		void ToggleShowMore(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6A158
		void SetShowMore(bool bShowingMore); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D6A078
		void InitTooltip(AActor TargetedActor, UPrimitiveComponent TargetedComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D69F98
	};

}
