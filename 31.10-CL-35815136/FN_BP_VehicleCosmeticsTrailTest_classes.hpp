#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BP_VehicleCosmeticsTrailTest
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /VehicleCosmetics/BP_VehicleCosmeticsTrailTest.BP_VehicleCosmeticsTrailTest_C
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class ABP_VehicleCosmeticsTrailTest_C : public AActor	
	{
	public:
		UStaticMeshComponent* StaticMesh; // 0x290(0x8)
		USceneComponent* DefaultSceneRoot; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleCosmetics/BP_VehicleCosmeticsTrailTest.BP_VehicleCosmeticsTrailTest_C");
			return ret;
		}
	};

}
