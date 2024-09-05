#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRDPostProcess
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CRDPostProcess.PostProcessDeviceMessage
	// Size: 0x18 (0x18 - 0x0)
	struct FPostProcessDeviceMessage	
	{
	public:
		AFortCreativeDeviceProp* PostProcessDevice; // 0x0(0x8)
		AFortPlayerState* PlayerStateMessage; // 0x8(0x8)
		EPostProcessDeviceState EndState; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct CRDPostProcess.PostProcessDeviceMessageRepl
	// Inherited from FFastArraySerializerItem
	// Size: 0x1C (0x28 - 0xC)
	struct FPostProcessDeviceMessageRepl : public FFastArraySerializerItem	
	{
	public:
		int32_t MessageIndex; // 0xC(0x4)
		AFortCreativeDeviceProp* PostProcessDevice; // 0x10(0x8)
		AFortPlayerState* PlayerStateMessage; // 0x18(0x8)
		EPostProcessDeviceState EndState; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct CRDPostProcess.PostProcessDeviceMessageRingBuffer
	// Inherited from FFastArraySerializer
	// Size: 0x28 (0x130 - 0x108)
	struct FPostProcessDeviceMessageRingBuffer : public FFastArraySerializer	
	{
	public:
		TArray<FPostProcessDeviceMessageRepl> Items; // 0x108(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x118(0x18) UNKNOWN PROPERTY
	};

}
