#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicMediaCDNHostnames
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EpicMediaCDNHostnames.EpicMediaCDNHostnames
	// Inherited from UObject
	// Size: 0x150 (0x178 - 0x28)
	class UEpicMediaCDNHostnames : public UObject	
	{
	public:
		TArray<float> CDNDistribution; // 0x28(0x10)
		unsigned char UnknownData00_7[0x140]; // 0x38(0x140) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaCDNHostnames.EpicMediaCDNHostnames");
			return ret;
		}

		FString GetSelectedHostName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DDFF3F4(relative to base address)
		TArray GetHostnames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DDFF3B8(relative to base address)
	};

}
