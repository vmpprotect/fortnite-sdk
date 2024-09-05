#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicMediaCDNHostnames
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EpicMediaCDNHostnames.EpicMediaCDNHostnames
	// Inherited from UObject
	// Size: 0x148 (0x170 - 0x28)
	class UEpicMediaCDNHostnames : public UObject	
	{
	public:
		TArray CDNDistribution; // 0x28(0x10)
		unsigned char UnknownData01_7[0x138]; // 0x38(0x138) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaCDNHostnames.EpicMediaCDNHostnames");
			return ret;
		}

		FString GetSelectedHostName(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146530D8
		TArray GetHostnames(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414652FF8
	};

}
