#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NitroBarrelRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class NitroBarrelRuntime.BuildingGameplayActorNitroBarrel
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x18 (0x9A0 - 0x988)
	class ABuildingGameplayActorNitroBarrel : public ABuildingGameplayActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x988(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnContactWithVehicleDelegate; // 0x990(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroBarrelRuntime.BuildingGameplayActorNitroBarrel");
			return ret;
		}

		void OnContactWithVehicleDelegate__DelegateSignature(AFortAthenaVehicle* ContactSource, FVector& ContactPosition, FVector& ContactNormal); // Flags: MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
