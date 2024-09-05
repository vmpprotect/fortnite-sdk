#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MassSignals
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MassSignals.MassSignalProcessorBase
	// Inherited from UMassProcessor -> UObject
	// Size: 0x3E0 (0x4A0 - 0xC0)
	class UMassSignalProcessorBase : public UMassProcessor	
	{
	public:
		unsigned char UnknownData01_1[0x3E0]; // 0xC0(0x3E0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSignals.MassSignalProcessorBase");
			return ret;
		}
	};


	// Class MassSignals.MassSignalSubsystem
	// Inherited from UMassTickableSubsystemBase -> UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x68 (0xB0 - 0x48)
	class UMassSignalSubsystem : public UMassTickableSubsystemBase	
	{
	public:
		unsigned char UnknownData01_3[0x60]; // 0x48(0x60) UNKNOWN PROPERTY
		UWorld CachedWorld; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSignals.MassSignalSubsystem");
			return ret;
		}
	};

}
