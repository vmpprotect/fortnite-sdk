#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PictureInPictureDescriptors
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PictureInPictureDescriptors.PictureInPicturePartnerDataAsset
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0xC0 (0xF0 - 0x30)
	class UPictureInPicturePartnerDataAsset : public UPrimaryDataAsset	
	{
	public:
		FString PartnerName; // 0x30(0x10)
		UImage ClientImage; // 0x40(0x8)
		int32_t MediaHeight; // 0x48(0x4)
		int32_t MediaWidth; // 0x4C(0x4)
		UClass MetadataOverlayClass; // 0x50(0x8)
		TArray Actions; // 0x58(0x10)
		FPIPVideoPlayerAssetConfig AssetConfig; // 0x68(0x88)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureDescriptors.PictureInPicturePartnerDataAsset");
			return ret;
		}
	};


	// Class PictureInPictureDescriptors.PictureInPictureActionData
	// Inherited from UObject
	// Size: 0x128 (0x150 - 0x28)
	class UPictureInPictureActionData : public UObject	
	{
	public:
		FString PartnerName; // 0x28(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FSlateBrush ActionBrush; // 0x40(0xB0)
		FText ActionText; // 0xF0(0x10)
		PictureInPictureAction ActionType; // 0x100(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate ActionEvent; // 0x108(0x10)
		FMulticastInlineDelegate ActionFiredEvent; // 0x118(0x10)
		unsigned char UnknownData05_6[0x18]; // 0x128(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate CallbackEvent; // 0x140(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureDescriptors.PictureInPictureActionData");
			return ret;
		}

		void CallEvent(); // Flags: Native|Public|BlueprintCallable 0x7FF414D0C658
	};


	// Class PictureInPictureDescriptors.PictureInPictureSourceActionData
	// Inherited from UPictureInPictureActionData -> UObject
	// Size: 0x20 (0x170 - 0x150)
	class UPictureInPictureSourceActionData : public UPictureInPictureActionData	
	{
	public:
		FString SourceName; // 0x150(0x10)
		FMulticastInlineDelegate SourceActionEvent; // 0x160(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureDescriptors.PictureInPictureSourceActionData");
			return ret;
		}
	};


	// Class PictureInPictureDescriptors.PictureInPictureAnalyticsManager
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UPictureInPictureAnalyticsManager : public UObject	
	{
	public:
		TMap PartnerAnalytics; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureDescriptors.PictureInPictureAnalyticsManager");
			return ret;
		}
	};

}
