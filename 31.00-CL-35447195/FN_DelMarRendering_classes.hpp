#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarRendering
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DelMarRendering.DelMarMaterialFXSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x50 - 0x40)
	class UDelMarMaterialFXSubsystem : public UTickableWorldSubsystem	
	{
	public:
		UMaterialParameterCollection GameplayMPC; // 0x40(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarRendering.DelMarMaterialFXSubsystem");
			return ret;
		}
	};

}
