#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BP_SparksCosmeticComponent
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /SparksCosmetics/BP_SparksCosmeticComponent.BP_SparksCosmeticComponent_C
	// Inherited from USparksCosmeticComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x488 - 0x470)
	class UBP_SparksCosmeticComponent_C : public USparksCosmeticComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x8)
		UGameplayEventRouterComponent* Event_Router; // 0x478(0x8)
		UWBP_Sparks_Dbg_CosmeticPicker_C* DebugWidget; // 0x480(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SparksCosmetics/BP_SparksCosmeticComponent.BP_SparksCosmeticComponent_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Debug_BP_ShowCosmeticPicker(bool bShow); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_SparksCosmeticComponent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
