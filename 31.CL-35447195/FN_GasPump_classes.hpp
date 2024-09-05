#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GasPump
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Valet/GasPump/Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UValet_GasPumpIndicatorManagerV2_C : public UFortGameStateComponent	
	{
	public:
		UClass FuelIndicatorClass; // 0xA0(0x8)
		TArray GasPumpList; // 0xA8(0x10)
		TArray FuelIndicatorList; // 0xB8(0x10)
		double FuelIndicatorRangeSquared; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/GasPump/Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C");
			return ret;
		}

		void RemoveGasPump(UB_GasPump_Valet_Component_C Gas Pump); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D58FE8D00
		void AddGasPump(UB_GasPump_Valet_Component_C Gas Pump); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D58FE8E00
	};


	// Class /Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UB_GasPump_Valet_Component_C : public UGameFrameworkComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA0(0x8)
		FName Gas_Pump_Icon_Enabled; // 0xA8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		UClass Gas_Pump_IndicatorManager_Class; // 0xB0(0x8)
		UValet_GasPumpIndicatorManagerV2_C Gas_Pump_IndicatorManager; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent 0x15D58FE8B00
		void ReceiveEndPlay(TEnumAsByte EndPlayReason); // Flags: Event|Public|BlueprintEvent 0x15D58FE8A00
		void ExecuteUbergraph_B_GasPump_Valet_Component(int32_t EntryPoint); // Flags: Final 0x15D58FE8C00
	};

}
