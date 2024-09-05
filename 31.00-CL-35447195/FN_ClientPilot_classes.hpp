#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ClientPilot
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ClientPilot.ClientPilotBlackboard
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UClientPilotBlackboard : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClientPilot.ClientPilotBlackboard");
			return ret;
		}
	};


	// Class ClientPilot.ClientPilotBlackboardManager
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UClientPilotBlackboardManager : public UObject	
	{
	public:
		UClientPilotBlackboard PilotBlackboard; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClientPilot.ClientPilotBlackboardManager");
			return ret;
		}
	};


	// Class ClientPilot.ClientPilotComponent
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UClientPilotComponent : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClientPilot.ClientPilotComponent");
			return ret;
		}
	};

}
