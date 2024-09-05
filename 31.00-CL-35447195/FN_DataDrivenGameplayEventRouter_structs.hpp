#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DataDrivenGameplayEventRouter
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct DataDrivenGameplayEventRouter.GameplayEventDefinition
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayEventDefinition	
	{
	public:
		UScriptStruct EventType; // 0x0(0x8)
		bool bIsStateful; // 0x8(0x1)
		EGameplayEventNetPolicy NetPolicy; // 0x9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};


	// Struct DataDrivenGameplayEventRouter.GameplayEventDescriptor
	// Size: 0x8 (0x8 - 0x0)
	struct FGameplayEventDescriptor	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct DataDrivenGameplayEventRouter.GameplayEventSubscription
	// Size: 0x70 (0x70 - 0x0)
	struct FGameplayEventSubscription	
	{
	public:
		TWeakObjectPtr Object; // 0x0(0x20)
		FMemberReference EventDescriptor; // 0x20(0x30)
		FGameplayEventListenerHandle EventHandle; // 0x50(0x1C)
		unsigned char UnknownData01_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct DataDrivenGameplayEventRouter.GameplayEventHandlerFunction
	// Size: 0x80 (0x80 - 0x0)
	struct FGameplayEventHandlerFunction	
	{
	public:
		FMemberReference EventHandlerFunction; // 0x0(0x30)
		TMap EventHandlerFunctionDefaultValues; // 0x30(0x50)
	};


	// Struct DataDrivenGameplayEventRouter.GameplayEventHandlerFunctions
	// Size: 0x180 (0x180 - 0x0)
	struct FGameplayEventHandlerFunctions	
	{
	public:
		FGameplayEventHandlerFunction OnEventReceived; // 0x0(0x80)
		FGameplayEventHandlerFunction OnStatefulEventApplied; // 0x80(0x80)
		FGameplayEventHandlerFunction OnStatefulEventCleared; // 0x100(0x80)
	};


	// Struct DataDrivenGameplayEventRouter.GameplayEventFunction
	// Size: 0x18 (0x18 - 0x0)
	struct FGameplayEventFunction	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TArray EventSubscriptions; // 0x8(0x10)
	};

}
