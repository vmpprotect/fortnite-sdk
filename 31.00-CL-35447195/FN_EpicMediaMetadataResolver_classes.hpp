#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicMediaMetadataResolver
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EpicMediaMetadataResolver.EpicMediaMetadataResolver
	// Inherited from UObject
	// Size: 0x170 (0x198 - 0x28)
	class UEpicMediaMetadataResolver : public UObject	
	{
	public:
		FMulticastInlineDelegate MetadataResultExt; // 0x28(0x10)
		UEpicMediaCDNHostnames CDNHostNames; // 0x38(0x8)
		unsigned char UnknownData01_7[0x158]; // 0x40(0x158) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaMetadataResolver.EpicMediaMetadataResolver");
			return ret;
		}

		bool GetData(FString UID, bool bLive, FEpicMediaOptions InMediaOptions); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414653458
		bool GetBlurl(FString InVUID, bool bInBlurlLive, FEpicMediaOptions InMediaOptions); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414653378
	};

}
