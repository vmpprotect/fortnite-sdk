#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoCreature_TamingUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoCreature_TamingUI.JunoAnimalHappinessRow
	// Inherited from FTableRowBase
	// Size: 0xA0 (0xA8 - 0x8)
	struct FJunoAnimalHappinessRow : public FTableRowBase	
	{
	public:
		FGameplayTag AnimalHappinessTag; // 0x8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FText Title; // 0x10(0x10)
		FText Description; // 0x20(0x10)
		FFloatRange ValueRange; // 0x30(0x10)
		float ProductionMultiplier; // 0x40(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FText ProductionMultiplierLabel; // 0x48(0x10)
		TWeakObjectPtr ArrowIcon; // 0x58(0x20)
		TWeakObjectPtr FaceIcon; // 0x78(0x20)
		FLinearColor Color; // 0x98(0x10)
	};


	// Struct JunoCreature_TamingUI.JunoJobDetailsRow
	// Inherited from FTableRowBase
	// Size: 0x48 (0x50 - 0x8)
	struct FJunoJobDetailsRow : public FTableRowBase	
	{
	public:
		FGameplayTag RoleTag; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FText Title; // 0x10(0x10)
		FText Description; // 0x20(0x10)
		TWeakObjectPtr Icon; // 0x30(0x20)
	};


	// Struct JunoCreature_TamingUI.JunoVillageTamingLevelRewardsColumnInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoVillageTamingLevelRewardsColumnInfo	
	{
	public:
		int32_t AwesomeLevel; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray EntryInfo; // 0x8(0x10)
	};


	// Struct JunoCreature_TamingUI.JunoVillageTamingLevelRewardsEntryInfo
	// Size: 0x68 (0x68 - 0x0)
	struct FJunoVillageTamingLevelRewardsEntryInfo	
	{
	public:
		FAwesomePerkReward AwesomePerkReward; // 0x0(0x40)
		int32_t NewSharedSlotCount; // 0x40(0x4)
		int32_t NewVillagerSlotCount; // 0x44(0x4)
		int32_t NewAnimalSlotCountSlotCount; // 0x48(0x4)
		int32_t NewMysteryVillagerCount; // 0x4C(0x4)
		EJunoBiome BiomeRewardType; // 0x50(0x1)
		bool bIsEventReward; // 0x51(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x52(0x6) UNKNOWN PROPERTY
		TArray KnowledgeBundles; // 0x58(0x10)
	};


	// Struct JunoCreature_TamingUI.JunoVillageTamingLevelRewardKnowledgeBundleGroup
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoVillageTamingLevelRewardKnowledgeBundleGroup	
	{
	public:
		TArray KnowledgeBundles; // 0x0(0x10)
	};


	// Struct JunoCreature_TamingUI.JunoVillageTamingVillagerEntryInfo
	// Size: 0x138 (0x138 - 0x0)
	struct FJunoVillageTamingVillagerEntryInfo	
	{
	public:
		int32_t ButtonIndex; // 0x0(0x4)
		bool bHasNPC; // 0x4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FActiveCampNPCEntry NPCInfo; // 0x8(0x88)
		bool bHasCreature; // 0x90(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		FActiveCampCreatureEntry CreatureInfo; // 0x98(0x98)
		bool bSlotAllowsNPCs; // 0x130(0x1)
		bool bSlotAllowsCreatures; // 0x131(0x1)
		bool bIsLocked; // 0x132(0x1)
		unsigned char UnknownData05_7[0x5]; // 0x133(0x5) UNKNOWN PROPERTY
	};

}
