#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Gauntlet
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Gauntlet.GauntletTestController
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UGauntletTestController : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x20]; // 0x30(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Gauntlet.GauntletTestControllerErrorTest");
			return ret;
		}
	};

}
