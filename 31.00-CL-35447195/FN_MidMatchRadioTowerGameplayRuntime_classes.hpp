#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MidMatchRadioTowerGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MidMatchRadioTowerGameplayRuntime.RadioTowerTerminal
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x8 (0x990 - 0x988)
	class ARadioTowerTerminal : public ABuildingGameplayActor	
	{
	public:
		float MaxInteractHalfAngle; // 0x988(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x98C(0x4) UNKNOWN PROPERTY

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

		ARadioTowerTerminal GetLinkedRadioTowerTerminal(); // Flags: Event|Protected|BlueprintEvent|Const 0x7FF414BD4498
	};

}
