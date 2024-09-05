#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FNEventsMetadataOverlay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /PictureInPictureFNEvents/FNEventsMetadataOverlay.FNEventsMetadataOverlay_C
	// Inherited from UPictureInPictureMetadataOverlay -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x440 - 0x3F0)
	class UFNEventsMetadataOverlay_C : public UPictureInPictureMetadataOverlay	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F0(0x8)
		UWidgetAnimation* Liked_Ani_1to1; // 0x3F8(0x8)
		UWidgetAnimation* FadeInfo_Ani; // 0x400(0x8)
		UWidgetAnimation* Liked_Ani; // 0x408(0x8)
		UPictureInPictureClient* PictureInPictureClient; // 0x410(0x8)
		UPictureInPictureFNEventsController* FNEventsController; // 0x418(0x8)
		FMulticastInlineDelegate EventDispatcher_Skip; // 0x420(0x10)
		FMulticastInlineDelegate EventDispatcher_Prev; // 0x430(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PictureInPictureFNEvents/FNEventsMetadataOverlay.FNEventsMetadataOverlay_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPartnerUpdateComplete(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_FNEventsMetadataOverlay(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EventDispatcher_Prev__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EventDispatcher_Skip__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
