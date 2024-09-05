#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NitroBarrelRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class NitroBarrelRuntime.BuildingGameplayActorNitroBarrel
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x18 (0x9A0 - 0x988)
	class ABuildingGameplayActorNitroBarrel : public ABuildingGameplayActor	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x988(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnContactWithVehicleDelegate; // 0x990(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroBarrelRuntime.BuildingGameplayActorNitroBarrel");
			return ret;
		}

		void OnContactWithVehicleDelegate__DelegateSignature(AFortAthenaVehicle ContactSource, FVector& ContactPosition, FVector& ContactNormal); // Flags: MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults 0x7FF414425078
	};

}
