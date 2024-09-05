#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DataAssetDirectory
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct DataAssetDirectory.DataAssetDirectoryTestPODStruct
	// Size: 0x38 (0x38 - 0x0)
	struct FDataAssetDirectoryTestPODStruct	
	{
	public:
		EDataAssetDirectoryTestEnum EnumProperty; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t IntProperty; // 0x4(0x4)
		float FloatProperty; // 0x8(0x4)
		bool BoolProperty; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FString StringProperty; // 0x10(0x10)
		FName NameProperty; // 0x20(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FText TextProperty; // 0x28(0x10)
	};


	// Struct DataAssetDirectory.DataAssetDirectoryTestSimpleStruct
	// Size: 0x4 (0x4 - 0x0)
	struct FDataAssetDirectoryTestSimpleStruct	
	{
	public:
		int32_t IntProperty; // 0x0(0x4)
	};

}
