#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VictoryCrownsReadRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VictoryCrownsReadRuntime.FortVictoryCrownInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortVictoryCrownInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsReadRuntime.FortVictoryCrownInterface");
			return ret;
		}
	};


	// Class VictoryCrownsReadRuntime.FortCosmeticStatObject_HasCrown
	// Inherited from UFortCosmeticStatObject -> UObject
	// Size: 0x8 (0x90 - 0x88)
	class UFortCosmeticStatObject_HasCrown : public UFortCosmeticStatObject	
	{
	public:
		UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition; // 0x88(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsReadRuntime.FortCosmeticStatObject_HasCrown");
			return ret;
		}
	};


	// Class VictoryCrownsReadRuntime.FortCosmeticStatObject_TotalRoyalRoyales
	// Inherited from UFortCosmeticStatObject -> UObject
	// Size: 0x18 (0xA0 - 0x88)
	class UFortCosmeticStatObject_TotalRoyalRoyales : public UFortCosmeticStatObject	
	{
	public:
		UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition; // 0x88(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x90(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsReadRuntime.FortCosmeticStatObject_TotalRoyalRoyales");
			return ret;
		}
	};


	// Class VictoryCrownsReadRuntime.FortCosmeticStatObject_TotalVictoryCrowns
	// Inherited from UFortCosmeticStatObject -> UObject
	// Size: 0x8 (0x90 - 0x88)
	class UFortCosmeticStatObject_TotalVictoryCrowns : public UFortCosmeticStatObject	
	{
	public:
		UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition; // 0x88(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsReadRuntime.FortCosmeticStatObject_TotalVictoryCrowns");
			return ret;
		}
	};

}
