#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortWaterAdvanced
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FortWaterAdvanced.FortShallowWaterSubsystem
	// Inherited from UShallowWaterSubsystem -> UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UFortShallowWaterSubsystem : public UShallowWaterSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortWaterAdvanced.FortShallowWaterSubsystem");
			return ret;
		}
	};


	// Class FortWaterAdvanced.FortGameFeatureAction_InitPhysicsOverrides
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFortGameFeatureAction_InitPhysicsOverrides : public UGameFeatureAction	
	{
	public:
		TWeakObjectPtr PhysicsAssetOverrides; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortWaterAdvanced.FortGameFeatureAction_InitPhysicsOverrides");
			return ret;
		}
	};

}
