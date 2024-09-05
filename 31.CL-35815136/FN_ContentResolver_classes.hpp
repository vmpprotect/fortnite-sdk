#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ContentResolver
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ContentResolver.PluginBatchLoaderHelper
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UPluginBatchLoaderHelper : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x80]; // 0x28(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContentResolver.PluginBatchLoaderHelper");
			return ret;
		}
	};


	// Class ContentResolver.ExternalContentLoader
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UExternalContentLoader : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x30(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContentResolver.ExternalContentLoader");
			return ret;
		}
	};

}
