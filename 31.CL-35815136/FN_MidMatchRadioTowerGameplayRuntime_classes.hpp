#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MidMatchRadioTowerGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MidMatchRadioTowerGameplayRuntime.RadioTowerTerminal
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x8 (0x990 - 0x988)
	class ARadioTowerTerminal : public ABuildingGameplayActor	
	{
	public:
		float MaxInteractHalfAngle; // 0x988(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x98C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MidMatchRadioTowerGameplayRuntime.RadioTowerTerminal");
			return ret;
		}
	};


	// Class MidMatchRadioTowerGameplayRuntime.RemoveFoliageBoxComponent
	// Inherited from UBoxComponent -> UShapeComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x500 - 0x500)
	class URemoveFoliageBoxComponent : public UBoxComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MidMatchRadioTowerGameplayRuntime.RemoveFoliageBoxComponent");
			return ret;
		}
	};


	// Class MidMatchRadioTowerGameplayRuntime.BuildingGameplayActorRadioTower
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x28 (0x9B0 - 0x988)
	class ABuildingGameplayActorRadioTower : public ABuildingGameplayActor	
	{
	public:
		FScalableFloat MarkLinkedRadioTowerTerminal; // 0x988(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MidMatchRadioTowerGameplayRuntime.BuildingGameplayActorRadioTower");
			return ret;
		}

		ARadioTowerTerminal GetLinkedRadioTowerTerminal(); // Flags: Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
