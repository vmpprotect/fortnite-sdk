#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayEventRouter
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct GameplayEventRouter.GameplayEventId
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayEventId	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct GameplayEventRouter.GameplayEventListenerHandle
	// Size: 0x1C (0x1C - 0x0)
	struct FGameplayEventListenerHandle	
	{
	public:
		unsigned char UnknownData02_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		int32_t Handle; // 0x10(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x14(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayEventRouter.GameplayEventListenerBackwardCompatibleHandle
	// Size: 0x48 (0x48 - 0x0)
	struct FGameplayEventListenerBackwardCompatibleHandle	
	{
	public:
		unsigned char UnknownData01_2[0x48]; // 0x0(0x48) UNKNOWN PROPERTY
	};


	// Struct GameplayEventRouter.GameplayEventListenerData
	// Size: 0xF0 (0xF0 - 0x0)
	struct FGameplayEventListenerData	
	{
	public:
		unsigned char UnknownData02_7[0xC0]; // 0x0(0xC0) UNKNOWN PROPERTY
		UScriptStruct EventType; // 0xC0(0x8)
		UObject EventContext; // 0xC8(0x8)
		unsigned char UnknownData03_7[0x20]; // 0xD0(0x20) UNKNOWN PROPERTY
	};


	// Struct GameplayEventRouter.GameplayEventListenerList
	// Size: 0x38 (0x38 - 0x0)
	struct FGameplayEventListenerList	
	{
	public:
		unsigned char UnknownData01_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct GameplayEventRouter.GameplayEventGlobalRouterPendingListenerData
	// Size: 0xF0 (0xF0 - 0x0)
	struct FGameplayEventGlobalRouterPendingListenerData	
	{
	public:
		unsigned char UnknownData01_7[0xE0]; // 0x0(0xE0) UNKNOWN PROPERTY
		UScriptStruct EventType; // 0xE0(0x8)
		UObject EventContext; // 0xE8(0x8)
	};

}
