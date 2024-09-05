#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayMessages
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct GameplayMessages.EventMessageTag
	// Inherited from FGameplayTag
	// Size: 0x0 (0x4 - 0x4)
	struct FEventMessageTag : public FGameplayTag	
	{
	public:
	};


	// Struct GameplayMessages.ReplicatedMessageData
	// Size: 0x18 (0x18 - 0x0)
	struct FReplicatedMessageData	
	{
	public:
		UScriptStruct* StructType; // 0x0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct GameplayMessages.ReplicatedMessage
	// Size: 0x10 (0x10 - 0x0)
	struct FReplicatedMessage	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct GameplayMessages.GameplayMessageReceiverHandle
	// Size: 0x18 (0x18 - 0x0)
	struct FGameplayMessageReceiverHandle	
	{
	public:
		TWeakObjectPtr<UGameplayMessageRouter*> Subsystem; // 0x0(0x8)
		FEventMessageTag Channel; // 0x8(0x4)
		int32_t ID; // 0xC(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayMessages.GameplayMessageReceiverData
	// Size: 0xA0 (0xA0 - 0x0)
	struct FGameplayMessageReceiverData	
	{
	public:
		unsigned char UnknownData00_2[0xA0]; // 0x0(0xA0) UNKNOWN PROPERTY
	};

}
