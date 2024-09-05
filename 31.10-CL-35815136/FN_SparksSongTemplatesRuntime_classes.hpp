#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksSongTemplatesRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SparksSongTemplatesRuntime.SparksSongItem
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class USparksSongItem : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSongTemplatesRuntime.SparksSongItem");
			return ret;
		}
	};

}
