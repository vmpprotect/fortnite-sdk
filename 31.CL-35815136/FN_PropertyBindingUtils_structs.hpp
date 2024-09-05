#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PropertyBindingUtils
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct PropertyBindingUtils.BindableStructDesc
	// Size: 0x10 (0x10 - 0x0)
	struct FBindableStructDesc	
	{
	public:
		UStruct* Struct; // 0x0(0x8)
		FName Name; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct PropertyBindingUtils.PropertyBindingPathSegment
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBindingPathSegment	
	{
	public:
		FName Name; // 0x0(0x4)
		int32_t ArrayIndex; // 0x4(0x4)
		UStruct* InstanceStruct; // 0x8(0x8)
	};


	// Struct PropertyBindingUtils.PropertyBindingPath
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBindingPath	
	{
	public:
		TArray<FPropertyBindingPathSegment> Segments; // 0x0(0x10)
	};

}
