#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FabricTooltipUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
	// Size: 0x60 (0x420 - 0x3C0)
	class UFabricTooltipWidget : public UFortActorIndicatorWidget	
	{
	public:
		bool bUseShortDescription; // 0x3C0(0x1)
		bool bUseShortDescriptionWithTouch; // 0x3C1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x3C2(0x2) UNKNOWN PROPERTY
		float ShortDescriptionHeight; // 0x3C4(0x4)
		float ShowMoreThreshold; // 0x3C8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3CC(0x4) UNKNOWN PROPERTY
		FText ShowMoreText; // 0x3D0(0x10)
		FText ShowLessText; // 0x3E0(0x10)
		UAthenaMarkerPointer* MarkerPointer; // 0x3F0(0x8)
		UCommonTextBlock* Text_Description; // 0x3F8(0x8)
		USizeBox* SizeBox_Description; // 0x400(0x8)
		UPanelWidget* Panel_ShowMorePrompt; // 0x408(0x8)
		UCommonTextBlock* Text_ShowMorePrompt; // 0x410(0x8)
		bool bShowingFullDescription; // 0x418(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x419(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricTooltipUI.FabricTooltipWidget");
			return ret;
		}

		void UpdateShowMore(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751616594(relative to base address)
		void ToggleShowMore(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751616580(relative to base address)
		void SetShowMore(bool bShowingMore); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751616500(relative to base address)
		void InitTooltip(AActor* TargetedActor, UPrimitiveComponent* TargetedComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75161643C(relative to base address)
	};

}
