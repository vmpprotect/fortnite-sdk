#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ThrowingToyRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ThrowingToyRuntime.ThrowingToyData
	// Inherited from FFastArraySerializerItem
	// Size: 0x1C (0x28 - 0xC)
	struct FThrowingToyData : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		AActor ThrowingToy; // 0x10(0x8)
		FGuid WorldItemGuid; // 0x18(0x10)
	};


	// Struct ThrowingToyRuntime.ThrowingToyDataArray
	// Inherited from FFastArraySerializer
	// Size: 0x10 (0x118 - 0x108)
	struct FThrowingToyDataArray : public FFastArraySerializer	
	{
	public:
		TArray Entries; // 0x108(0x10)
	};

}
