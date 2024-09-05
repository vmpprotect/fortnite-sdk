#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PropertyBindingUtils
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct PropertyBindingUtils.BindableStructDesc
	// Size: 0x10 (0x10 - 0x0)
	struct FBindableStructDesc	
	{
	public:
		UStruct Struct; // 0x0(0x8)
		FName Name; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct PropertyBindingUtils.PropertyBindingPathSegment
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBindingPathSegment	
	{
	public:
		FName Name; // 0x0(0x4)
		int32_t ArrayIndex; // 0x4(0x4)
		UStruct InstanceStruct; // 0x8(0x8)
	};


	// Struct PropertyBindingUtils.PropertyBindingPath
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBindingPath	
	{
	public:
		TArray Segments; // 0x0(0x10)
	};

}
