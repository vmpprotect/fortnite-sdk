#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GasPump
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Valet/GasPump/Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UValet_GasPumpIndicatorManagerV2_C : public UFortGameStateComponent	
	{
	public:
		UClass* FuelIndicatorClass; // 0xA0(0x8)
		TArray<UB_GasPump_Valet_Component_C*> GasPumpList; // 0xA8(0x10)
		TArray<AFuelIndicator_C*> FuelIndicatorList; // 0xB8(0x10)
		double FuelIndicatorRangeSquared; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/GasPump/Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C");
			return ret;
		}

		void RemoveGasPump(UB_GasPump_Valet_Component_C* Gas Pump); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddGasPump(UB_GasPump_Valet_Component_C* Gas Pump); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UB_GasPump_Valet_Component_C : public UGameFrameworkComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA0(0x8)
		FName Gas_Pump_Icon_Enabled; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		UClass* Gas_Pump_IndicatorManager_Class; // 0xB0(0x8)
		UValet_GasPumpIndicatorManagerV2_C* Gas_Pump_IndicatorManager; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_GasPump_Valet_Component(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
