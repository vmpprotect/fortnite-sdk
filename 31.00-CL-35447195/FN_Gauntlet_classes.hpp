#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Gauntlet
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Gauntlet.GauntletTestController
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UGauntletTestController : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Gauntlet.GauntletTestController");
			return ret;
		}
	};


	// Class Gauntlet.GauntletTestControllerBootTest
	// Inherited from UGauntletTestController -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UGauntletTestControllerBootTest : public UGauntletTestController	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Gauntlet.GauntletTestControllerBootTest");
			return ret;
		}
	};


	// Class Gauntlet.GauntletTestControllerErrorTest
	// Inherited from UGauntletTestController -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UGauntletTestControllerErrorTest : public UGauntletTestController	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x30(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Gauntlet.GauntletTestControllerErrorTest");
			return ret;
		}
	};

}
