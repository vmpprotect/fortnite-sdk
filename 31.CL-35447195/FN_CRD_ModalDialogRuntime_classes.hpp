#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CRD_ModalDialogRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CRD_ModalDialogRuntime.ModalDialogVariant
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x418 - 0x3F8)
	class UModalDialogVariant : public UCommonActivatableWidget	
	{
	public:
		UWidgetAnimation BoundAnim_Open; // 0x3F8(0x8)
		UWidgetAnimation BoundAnim_Response; // 0x400(0x8)
		FMulticastInlineDelegate OnResponseAnimationFinished; // 0x408(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ModalDialogRuntime.ModalDialogVariant");
			return ret;
		}

		void SetIsModal(bool ModalState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140AECE0
		void OnResponseAnimationFinished__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140AEC00
		bool HasResponseAnimation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140AEB20
		void HandleResponseAnimationFinished(); // Flags: Final|Native|Private 0x7FF4140AEA40
		void AttemptToPlayResponseAnimation(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140AE960
		void AttemptToPlayOpenAnimation(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140AE880
	};

}
