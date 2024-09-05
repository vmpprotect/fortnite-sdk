#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseNative
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct VerseNative.SolarisProfilingData
	// Size: 0x8 (0x8 - 0x0)
	struct FSolarisProfilingData	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct VerseNative.VerseIntRange
	// Size: 0x10 (0x10 - 0x0)
	struct FVerseIntRange	
	{
	public:
		int64_t Left; // 0x0(0x8)
		int64_t Right; // 0x8(0x8)
	};


	// Struct VerseNative.VerseRational
	// Size: 0x10 (0x10 - 0x0)
	struct FVerseRational	
	{
	public:
		int64_t Numerator; // 0x0(0x8)
		int64_t Denominator; // 0x8(0x8)
	};


	// Struct VerseNative.akeType
	// Size: 0x1 (0x1 - 0x0)
	struct FakeType	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};

}
