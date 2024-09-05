#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoControlUnitUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoControlUnitUI.JunoPowerManagerComponentVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x40 (0xA8 - 0x68)
	class UJunoPowerManagerComponentVM : public UMVVMViewModelBase	
	{
	public:
		UFortWorldItem* CurrentPowerItem; // 0x68(0x8)
		float CurrentPowerCapacity; // 0x70(0x4)
		float MaxPowerCapacity; // 0x74(0x4)
		float CurrentPowerCapacityPercent; // 0x78(0x4)
		float CurrentPowerItemDurability; // 0x7C(0x4)
		float MaxPowerItemDurability; // 0x80(0x4)
		int32_t RemainingPowerItemsCount; // 0x84(0x4)
		int32_t MaxPowerItemsCount; // 0x88(0x4)
		int32_t AttachedPowerCentersCount; // 0x8C(0x4)
		float RefreshTime; // 0x90(0x4)
		bool PowerSystemEnabled; // 0x94(0x1)
		unsigned char UnknownData00_7[0x13]; // 0x95(0x13) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoControlUnitUI.JunoPowerManagerComponentVM");
			return ret;
		}

		void UpdateFromPowerManagerComponent(UJunoPowerManagerComponent* InPowerManagerComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D29B1C(relative to base address)
		void UpdateFromJunoPhysicsToyActor(AJunoPhysicsToyActor* InJunoPhysicsToyActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D29A74(relative to base address)
	};


	// Class JunoControlUnitUI.JunoDynamicUIDirectorVCUComponent
	// Inherited from UJunoDynamicUIDirectorComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UJunoDynamicUIDirectorVCUComponent : public UJunoDynamicUIDirectorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoControlUnitUI.JunoDynamicUIDirectorVCUComponent");
			return ret;
		}
	};

}
