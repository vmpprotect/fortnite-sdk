#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BP_SparksCosmeticComponent
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /SparksCosmetics/BP_SparksCosmeticComponent.BP_SparksCosmeticComponent_C
	// Inherited from USparksCosmeticComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x488 - 0x470)
	class UBP_SparksCosmeticComponent_C : public USparksCosmeticComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x8)
		UGameplayEventRouterComponent Event_Router; // 0x478(0x8)
		UWBP_Sparks_Dbg_CosmeticPicker_C DebugWidget; // 0x480(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SparksCosmetics/BP_SparksCosmeticComponent.BP_SparksCosmeticComponent_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent 0x15D4BEEA300
		void Debug_BP_ShowCosmeticPicker(bool bShow); // Flags: Event|Protected|BlueprintEvent 0x15D4BEE7F00
		void ExecuteUbergraph_BP_SparksCosmeticComponent(int32_t EntryPoint); // Flags: Final 0x15D4BEEA400
	};

}
