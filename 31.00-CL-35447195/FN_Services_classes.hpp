#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Services
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /BattlePassS31_Quests/Services/BP_VendAISpawner_Base.BP_VendAISpawner_Base_C
	// Inherited from AActor -> UObject
	// Size: 0x28 (0x2B8 - 0x290)
	class ABP_VendAISpawner_Base_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		UNiagaraComponent Niagara; // 0x298(0x8)
		double SpawnDelay; // 0x2A0(0x8)
		FDataTableRowHandle EventRowHandle; // 0x2A8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/BattlePassS31_Quests/Services/BP_VendAISpawner_Base.BP_VendAISpawner_Base_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D591EE600
		void ExecuteUbergraph_BP_VendAISpawner_Base(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D591EE500
	};


	// Class /BattlePassS31_Quests/Services/BP_VendAISpawner_Nug.BP_VendAISpawner_Nug_C
	// Inherited from ABP_VendAISpawner_Base_C -> AActor -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class ABP_VendAISpawner_Nug_C : public ABP_VendAISpawner_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/BattlePassS31_Quests/Services/BP_VendAISpawner_Nug.BP_VendAISpawner_Nug_C");
			return ret;
		}
	};


	// Class /BattlePassS31_Quests/Services/BGA_Rift_Portal_VM.BGA_Rift_Portal_VM_C
	// Inherited from ABGA_RiftPortal_Item_Athena_C -> AFortAthenaRiftPortal -> ABuildingGameplayActorConsumable -> ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xC90 - 0xC90)
	class ABGA_Rift_Portal_VM_C : public ABGA_RiftPortal_Item_Athena_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/BattlePassS31_Quests/Services/BGA_Rift_Portal_VM.BGA_Rift_Portal_VM_C");
			return ret;
		}
	};

}
