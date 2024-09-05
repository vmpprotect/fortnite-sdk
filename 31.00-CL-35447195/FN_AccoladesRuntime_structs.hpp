#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AccoladesRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct AccoladesRuntime.PFWAccoladeCollection_AchievedAccolade_PersistentInfoData
	// Size: 0x18 (0x18 - 0x0)
	struct FPFWAccoladeCollection_AchievedAccolade_PersistentInfoData	
	{
	public:
		FString AccoladeName; // 0x0(0x10)
		uint32_t AccoladeCount; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct AccoladesRuntime.PFWAccoladeCollection_PinnedAccolade_PersistentInfoData
	// Size: 0x10 (0x10 - 0x0)
	struct FPFWAccoladeCollection_PinnedAccolade_PersistentInfoData	
	{
	public:
		FString AccoladeName; // 0x0(0x10)
	};


	// Struct AccoladesRuntime.PFWAccoladeCollection_UnacknowledgedAccolades_PersistentInfoData
	// Size: 0x10 (0x10 - 0x0)
	struct FPFWAccoladeCollection_UnacknowledgedAccolades_PersistentInfoData	
	{
	public:
		TArray AccoladeNames; // 0x0(0x10)
	};


	// Struct AccoladesRuntime.PFWAccoladeCollection_PersistentInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FPFWAccoladeCollection_PersistentInfo	
	{
	public:
		TArray AccoladeCollection_AchievedAccolades; // 0x0(0x10)
		FPFWAccoladeCollection_PinnedAccolade_PersistentInfoData AccoladeCollection_PinnedAccolade; // 0x10(0x10)
		FPFWAccoladeCollection_UnacknowledgedAccolades_PersistentInfoData AccoladeCollection_UnacknowledgedAccolades; // 0x20(0x10)
	};


	// Struct AccoladesRuntime.FortAccoladeCollectionDataItem
	// Inherited from FFastArraySerializerItem
	// Size: 0xC (0x18 - 0xC)
	struct FFortAccoladeCollectionDataItem : public FFastArraySerializerItem	
	{
	public:
		FName AccoladeName; // 0xC(0x4)
		FFortAccoladeCollectionData CollectionData; // 0x10(0x8)
	};


	// Struct AccoladesRuntime.FortAccoladeCollectionData
	// Size: 0x8 (0x8 - 0x0)
	struct FFortAccoladeCollectionData	
	{
	public:
		uint32_t AchievedCount; // 0x0(0x4)
		bool bAcknowledged; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct AccoladesRuntime.FortAccoladeCollectionDataArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FFortAccoladeCollectionDataArray : public FFastArraySerializer	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x108(0x8) UNKNOWN PROPERTY
		TArray AccoladeCollectionData; // 0x110(0x10)
	};


	// Struct AccoladesRuntime.FortAccoladeSessionData
	// Size: 0xC (0xC - 0x0)
	struct FFortAccoladeSessionData	
	{
	public:
		unsigned char UnknownData01_2[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};


	// Struct AccoladesRuntime.FortUpdatedTrackedAccoladeData
	// Inherited from FFastArraySerializerItem
	// Size: 0x8 (0x14 - 0xC)
	struct FFortUpdatedTrackedAccoladeData : public FFastArraySerializerItem	
	{
	public:
		FName AccoladeRowName; // 0xC(0x4)
		uint32_t Count; // 0x10(0x4)
	};


	// Struct AccoladesRuntime.FortUpdatedTrackedAccoladeDataArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FFortUpdatedTrackedAccoladeDataArray : public FFastArraySerializer	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x108(0x8) UNKNOWN PROPERTY
		TArray UpdatedTrackedAccolades; // 0x110(0x10)
	};


	// Struct AccoladesRuntime.FortCompletedAccoladeData
	// Inherited from FFastArraySerializerItem
	// Size: 0xC (0x18 - 0xC)
	struct FFortCompletedAccoladeData : public FFastArraySerializerItem	
	{
	public:
		FName AccoladeRowName; // 0xC(0x4)
		uint32_t XPAwarded; // 0x10(0x4)
		EFortAccoladeType AccoladeType; // 0x14(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct AccoladesRuntime.FortCompletedAccoladeDataArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FFortCompletedAccoladeDataArray : public FFastArraySerializer	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x108(0x8) UNKNOWN PROPERTY
		TArray CompletedAccolades; // 0x110(0x10)
	};


	// Struct AccoladesRuntime.FortAccoladesTableRow
	// Inherited from FTableRowBase
	// Size: 0x108 (0x110 - 0x8)
	struct FFortAccoladesTableRow : public FTableRowBase	
	{
	public:
		FInstancedStruct EventConditional; // 0x8(0x10)
		TArray EventRewards; // 0x18(0x10)
		TArray OneTimeEventRewards; // 0x28(0x10)
		FText DisplayName; // 0x38(0x10)
		FText DisplayDescription; // 0x48(0x10)
		int32_t DisplayOrder; // 0x58(0x4)
		EFortAccoladeType AccoladeType; // 0x5C(0x1)
		EXPEventPriorityType Priority; // 0x5D(0x1)
		EFortAccoladeTierType AccoladeTier; // 0x5E(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x5F(0x1) UNKNOWN PROPERTY
		TWeakObjectPtr AwardedSoundCue; // 0x60(0x20)
		TWeakObjectPtr PreviewImage; // 0x80(0x20)
		int32_t MaxMatchCount; // 0xA0(0x4)
		int32_t MaxPlayerCount; // 0xA4(0x4)
		FGameplayTagContainer Tags; // 0xA8(0x20)
		FGameplayTagQuery ProductCompatibilityQuery; // 0xC8(0x48)
	};


	// Struct AccoladesRuntime.FortTriggeredAccoladeData
	// Size: 0x70 (0x70 - 0x0)
	struct FFortTriggeredAccoladeData	
	{
	public:
		unsigned char UnknownData01_2[0x70]; // 0x0(0x70) UNKNOWN PROPERTY
	};

}
