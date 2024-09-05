#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: StateGraphManager
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class StateGraphManager.PreLoginAsyncManager
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UPreLoginAsyncManager : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x30(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateGraphManager.PreLoginAsyncManager");
			return ret;
		}
	};


	// Class StateGraphManager.RegisterServerManager
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class URegisterServerManager : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateGraphManager.RegisterServerManager");
			return ret;
		}
	};


	// Class StateGraphManager.RestartServerManager
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class URestartServerManager : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateGraphManager.RestartServerManager");
			return ret;
		}
	};

}
