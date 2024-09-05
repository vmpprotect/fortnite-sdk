#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VariantManagerContent
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct VariantManagerContent.FunctionCaller
	// Size: 0x4 (0x4 - 0x0)
	struct FFunctionCaller	
	{
	public:
		FName FunctionName; // 0x0(0x4)
	};


	// Struct VariantManagerContent.CapturedPropSegment
	// Size: 0x28 (0x28 - 0x0)
	struct FCapturedPropSegment	
	{
	public:
		FString PropertyName; // 0x0(0x10)
		int32_t PropertyIndex; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FString ComponentName; // 0x18(0x10)
	};


	// Struct VariantManagerContent.VariantDependency
	// Size: 0x48 (0x48 - 0x0)
	struct FVariantDependency	
	{
	public:
		TWeakObjectPtr<UVariantSet*> VariantSet; // 0x0(0x20)
		TWeakObjectPtr<UVariant*> Variant; // 0x20(0x20)
		bool bEnabled; // 0x40(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};

}
