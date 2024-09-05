#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WBP_ActivityBrowserSocialProof
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/WBP_ActivityBrowserSocialProof.WBP_ActivityBrowserSocialProof_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x71 (0x321 - 0x2B0)
	class UWBP_ActivityBrowserSocialProof_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UHorizontalBox* HB_CCUAndFriendsCount; // 0x2B8(0x8)
		UHorizontalBox* HB_CCUCount; // 0x2C0(0x8)
		UHorizontalBox* HB_FriendsPlaying; // 0x2C8(0x8)
		UHorizontalBox* HB_LikesPercent; // 0x2D0(0x8)
		UFortMobileImage* Image_CCU; // 0x2D8(0x8)
		UFortMobileImage* Image_LikeIcon; // 0x2E0(0x8)
		UCommonTextBlock* Text_CCUCount; // 0x2E8(0x8)
		UCommonTextBlock* Text_FriendCount; // 0x2F0(0x8)
		UCommonTextBlock* Text_LikesPercent; // 0x2F8(0x8)
		FLinearColor CCU_And_Friends_Text_Color; // 0x300(0x10)
		bool CCU_Icon_Vertical_Scale; // 0x310(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x311(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* CCU_Icon; // 0x318(0x8)
		bool IsLikesVisible; // 0x320(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/WBP_ActivityBrowserSocialProof.WBP_ActivityBrowserSocialProof_C");
			return ret;
		}

		void SetCCUCount(int32_t CCUCount, bool Hide); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetLikesVisible(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set CCU Icon Vertical Scale(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Color(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Friends Count Data(int32_t Friends Count, bool Hide); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set CCU Count Data(int32_t CCU Count, bool Hide); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_ActivityBrowserSocialProof(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
