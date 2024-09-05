#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FNEventsMetadataOverlay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /PictureInPictureFNEvents/FNEventsMetadataOverlay.FNEventsMetadataOverlay_C
	// Inherited from UPictureInPictureMetadataOverlay -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x448 - 0x3F8)
	class UFNEventsMetadataOverlay_C : public UPictureInPictureMetadataOverlay	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UWidgetAnimation Liked_Ani_1to1; // 0x400(0x8)
		UWidgetAnimation FadeInfo_Ani; // 0x408(0x8)
		UWidgetAnimation Liked_Ani; // 0x410(0x8)
		UPictureInPictureClient PictureInPictureClient; // 0x418(0x8)
		UPictureInPictureFNEventsController FNEventsController; // 0x420(0x8)
		FMulticastInlineDelegate EventDispatcher_Skip; // 0x428(0x10)
		FMulticastInlineDelegate EventDispatcher_Prev; // 0x438(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PictureInPictureFNEvents/FNEventsMetadataOverlay.FNEventsMetadataOverlay_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62E4DF00
		void OnPartnerUpdateComplete(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB650E100
		void ExecuteUbergraph_FNEventsMetadataOverlay(int32_t EntryPoint); // Flags: Final 0x15D8C898300
		void EventDispatcher_Prev__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D8C894500
		void EventDispatcher_Skip__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D62E4DE00
	};

}
