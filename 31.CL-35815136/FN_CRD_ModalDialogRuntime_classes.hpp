#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRD_ModalDialogRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CRD_ModalDialogRuntime.ModalDialogVariant
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x410 - 0x3F0)
	class UModalDialogVariant : public UCommonActivatableWidget	
	{
	public:
		UWidgetAnimation* BoundAnim_Open; // 0x3F0(0x8)
		UWidgetAnimation* BoundAnim_Response; // 0x3F8(0x8)
		FMulticastInlineDelegate OnResponseAnimationFinished; // 0x400(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ModalDialogRuntime.ModalDialogVariant");
			return ret;
		}

		void SetIsModal(bool ModalState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516C7F3C(relative to base address)
		void OnResponseAnimationFinished__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasResponseAnimation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C7F20(relative to base address)
		void HandleResponseAnimationFinished(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516C7F0C(relative to base address)
		void AttemptToPlayResponseAnimation(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516C7ECC(relative to base address)
		void AttemptToPlayOpenAnimation(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516C7E8C(relative to base address)
	};

}
