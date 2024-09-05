#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CreativeDataChannelTriggerRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CreativeDataChannelTriggerRuntime.CDCStringFloatArrayMap
	// Size: 0x50 (0x50 - 0x0)
	struct FCDCStringFloatArrayMap	
	{
	public:
		TMap<FString, FVector> Data; // 0x0(0x50)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCFloatArray
	// Size: 0x10 (0x10 - 0x0)
	struct FCDCFloatArray	
	{
	public:
		TArray<float> Data; // 0x0(0x10)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCStringFloatMap
	// Size: 0x50 (0x50 - 0x0)
	struct FCDCStringFloatMap	
	{
	public:
		TMap<FString, float> Data; // 0x0(0x50)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCStringIntMap
	// Size: 0x50 (0x50 - 0x0)
	struct FCDCStringIntMap	
	{
	public:
		TMap<FString, int32_t> Data; // 0x0(0x50)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCInt
	// Size: 0x4 (0x4 - 0x0)
	struct FCDCInt	
	{
	public:
		int32_t Data; // 0x0(0x4)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCLargeInt
	// Size: 0x8 (0x8 - 0x0)
	struct FCDCLargeInt	
	{
	public:
		int64_t Data; // 0x0(0x8)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCStringStringMap
	// Size: 0xA0 (0xA0 - 0x0)
	struct FCDCStringStringMap	
	{
	public:
		TMap<FString, FString> Data; // 0x0(0x50)
		TMap<FString, int32_t> ExtraData; // 0x50(0x50)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCString
	// Size: 0x10 (0x10 - 0x0)
	struct FCDCString	
	{
	public:
		FString Data; // 0x0(0x10)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCStringArray
	// Size: 0x18 (0x18 - 0x0)
	struct FCDCStringArray	
	{
	public:
		TArray<FString> Data; // 0x0(0x10)
		int32_t ExtraData; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct CreativeDataChannelTriggerRuntime.CreativeDataChannelEvents
	// Size: 0x10 (0x10 - 0x0)
	struct FCreativeDataChannelEvents	
	{
	public:
		TArray<FCreativeDataChannelEvent> Events; // 0x0(0x10)
	};


	// Struct CreativeDataChannelTriggerRuntime.CreativeDataChannelEvent
	// Size: 0xC (0xC - 0x0)
	struct FCreativeDataChannelEvent	
	{
	public:
		FName EventName; // 0x0(0x4)
		FName Parameters; // 0x4(0x4)
		FName TriggerCondition; // 0x8(0x4)
	};

}
