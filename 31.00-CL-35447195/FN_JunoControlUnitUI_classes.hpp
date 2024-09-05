#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoControlUnitUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoControlUnitUI.JunoPowerManagerComponentVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x40 (0xA8 - 0x68)
	class UJunoPowerManagerComponentVM : public UMVVMViewModelBase	
	{
	public:
		UFortWorldItem CurrentPowerItem; // 0x68(0x8)
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
		unsigned char UnknownData01_7[0x13]; // 0x95(0x13) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoControlUnitUI.JunoPowerManagerComponentVM");
			return ret;
		}

		void UpdateFromPowerManagerComponent(UJunoPowerManagerComponent InPowerManagerComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E5BDE0
		void UpdateFromJunoPhysicsToyActor(AJunoPhysicsToyActor InJunoPhysicsToyActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E5BD00
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
