#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicMediaMetadataResolver
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EpicMediaMetadataResolver.EpicMediaMetadataResolver
	// Inherited from UObject
	// Size: 0x170 (0x198 - 0x28)
	class UEpicMediaMetadataResolver : public UObject	
	{
	public:
		FMulticastInlineDelegate MetadataResultExt; // 0x28(0x10)
		UEpicMediaCDNHostnames* CDNHostNames; // 0x38(0x8)
		unsigned char UnknownData00_7[0x158]; // 0x40(0x158) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaMetadataResolver.EpicMediaMetadataResolver");
			return ret;
		}

		bool GetData(FString UID, bool bLive, FEpicMediaOptions InMediaOptions); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE09BEC(relative to base address)
		bool GetBlurl(FString InVUID, bool bInBlurlLive, FEpicMediaOptions InMediaOptions); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE099FC(relative to base address)
	};

}
