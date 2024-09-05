#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PlayerClearPersistenceIslandDataPromptWidget
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/PlayerClearPersistenceIslandDataPromptWidget.PlayerClearPersistenceIslandDataPromptWidget_C
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x5A0 - 0x568)
	class UPlayerClearPersistenceIslandDataPromptWidget_C : public UFortActivatablePanel	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x8)
		UIconTextButton_C ApplyButton; // 0x570(0x8)
		UCloseButton_C Button_CloseTouch; // 0x578(0x8)
		UIconTextButton_C CancelButton; // 0x580(0x8)
		ULightbox_C Lightbox; // 0x588(0x8)
		UCommonTextBlock Text_CurrentDescription; // 0x590(0x8)
		UCommonTextBlock Title; // 0x598(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/PlayerClearPersistenceIslandDataPromptWidget.PlayerClearPersistenceIslandDataPromptWidget_C");
			return ret;
		}

		void SetDescription(FText InDescription); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8767F700
		void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy Button); // Flags: BlueprintEvent 0x15D8767FB00
		void BndEvt__CancelButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy Button); // Flags: BlueprintEvent 0x15D8767FA00
		void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy Button); // Flags: BlueprintEvent 0x15D8767F900
		void ExecuteUbergraph_PlayerClearPersistenceIslandDataPromptWidget(int32_t EntryPoint); // Flags: Final 0x15D8767F800
	};

}
