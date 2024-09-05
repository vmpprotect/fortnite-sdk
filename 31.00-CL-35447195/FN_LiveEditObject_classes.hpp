#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LiveEditObject
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class LiveEditObject.LiveEditNetworkStreamChannel
	// Inherited from UChannel -> UObject
	// Size: 0x0 (0x68 - 0x68)
	class ULiveEditNetworkStreamChannel : public UChannel	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveEditObject.LiveEditNetworkStreamChannel");
			return ret;
		}
	};


	// Class LiveEditObject.LiveEditLargeNetworkMessageChannel
	// Inherited from ULiveEditNetworkStreamChannel -> UChannel -> UObject
	// Size: 0x48 (0xB0 - 0x68)
	class ULiveEditLargeNetworkMessageChannel : public ULiveEditNetworkStreamChannel	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0x68(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveEditObject.LiveEditLargeNetworkMessageChannel");
			return ret;
		}
	};


	// Class LiveEditObject.LiveEditObjectChannel
	// Inherited from ULiveEditLargeNetworkMessageChannel -> ULiveEditNetworkStreamChannel -> UChannel -> UObject
	// Size: 0xF8 (0x1A8 - 0xB0)
	class ULiveEditObjectChannel : public ULiveEditLargeNetworkMessageChannel	
	{
	public:
		unsigned char UnknownData01_1[0xF8]; // 0xB0(0xF8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveEditObject.LiveEditObjectChannel");
			return ret;
		}
	};


	// Class LiveEditObject.LiveEditObjectConnection
	// Inherited from UObject
	// Size: 0x338 (0x360 - 0x28)
	class ULiveEditObjectConnection : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x338]; // 0x28(0x338) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveEditObject.LiveEditObjectConnection");
			return ret;
		}
	};


	// Class LiveEditObject.LiveEditObjectSubsystemState
	// Inherited from UObject
	// Size: 0x280 (0x2A8 - 0x28)
	class ULiveEditObjectSubsystemState : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		TArray Connections; // 0x38(0x10)
		unsigned char UnknownData03_7[0x260]; // 0x48(0x260) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveEditObject.LiveEditObjectSubsystemState");
			return ret;
		}
	};


	// Class LiveEditObject.LiveEditObjectSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x170 (0x1A0 - 0x30)
	class ULiveEditObjectSubsystem : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		int32_t MaxBytesQueuedForReplication; // 0x38(0x4)
		int32_t NumPackageMapBunchesToDelayTickFor; // 0x3C(0x4)
		TArray NetDriverStates; // 0x40(0x10)
		unsigned char UnknownData03_7[0x150]; // 0x50(0x150) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveEditObject.LiveEditObjectSubsystem");
			return ret;
		}
	};


	// Class LiveEditObject.LiveEditObjectTestObject
	// Inherited from UObject
	// Size: 0x150 (0x178 - 0x28)
	class ULiveEditObjectTestObject : public UObject	
	{
	public:
		int32_t int32; // 0x28(0xC)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FLiveEditObjectTestStruct StructProperty; // 0x38(0x140)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveEditObject.LiveEditObjectTestObject");
			return ret;
		}
	};

}
