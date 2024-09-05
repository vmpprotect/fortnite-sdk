#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoWorldManagement
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoWorldManagement.JunoWorldGameplayProperty
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoWorldGameplayProperty	
	{
	public:
		FString ID; // 0x0(0x10)
		FName Value; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoWorldManagement.JunoWorldGameMetadata
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoWorldGameMetadata	
	{
	public:
		int32_t PersistenceVersion; // 0x0(0x4)
		int32_t AdventureSeed; // 0x4(0x4)
		FString Title; // 0x8(0x10)
		FString CustomName; // 0x18(0x10)
		FDateTime CustomNameChangeAllowedAt; // 0x28(0x8)
		TArray GameplayProperties; // 0x30(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x40(0x10) UNKNOWN PROPERTY
	};


	// Struct JunoWorldManagement.JunoWorldMetadata
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoWorldMetadata	
	{
	public:
		FString ID; // 0x0(0x10)
		FJunoWorldGameMetadata Game; // 0x10(0x50)
	};


	// Struct JunoWorldManagement.JunoWorldQuery
	// Size: 0x68 (0x68 - 0x0)
	struct FJunoWorldQuery	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FJunoWorldMetadata MetaData; // 0x8(0x60)
	};


	// Struct JunoWorldManagement.JunoWorldQueryResult
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoWorldQueryResult	
	{
	public:
		UJunoUserWorldView UserWorldView; // 0x0(0x8)
	};


	// Struct JunoWorldManagement.JunoWorldSettingOptionRow
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoWorldSettingOptionRow	
	{
	public:
		FName ID; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText Name; // 0x8(0x10)
		FText Description; // 0x18(0x10)
		FGameplayTag OptionTag; // 0x28(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoWorldManagement.JunoWorldSettingRow
	// Inherited from FTableRowBase
	// Size: 0x68 (0x70 - 0x8)
	struct FJunoWorldSettingRow : public FTableRowBase	
	{
	public:
		FText SettingName; // 0x8(0x10)
		FGameplayTag SettingTag; // 0x18(0x4)
		EJunoWorldSettingCategory category; // 0x1C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		TArray CanDefaultBeChangedPerMode; // 0x20(0x10)
		TArray CanChangePostCreation; // 0x30(0x10)
		TArray DefaultOptionPerMode; // 0x40(0x10)
		FGameplayTag DefaultWhenMissing; // 0x50(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		TArray Options; // 0x58(0x10)
		bool bCanBeLocked; // 0x68(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
	};

}
