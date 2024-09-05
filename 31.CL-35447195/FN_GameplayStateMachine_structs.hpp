#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayStateMachine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct GameplayStateMachine.GameplayStateTransition
	// Size: 0x28 (0x28 - 0x0)
	struct FGameplayStateTransition	
	{
	public:
		FGameplayTagContainer TransitionConditionTags; // 0x0(0x20)
		FGameplayTag TransitionStateTag; // 0x20(0x4)
		float BeginStateDelay; // 0x24(0x4)
	};


	// Struct GameplayStateMachine.GameplayStateSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FGameplayStateSettings	
	{
	public:
		UClass StateClass; // 0x0(0x8)
		FGameplayTag StateId; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray StateTransitions; // 0x10(0x10)
	};


	// Struct GameplayStateMachine.ActiveGameplayStateData
	// Size: 0x18 (0x18 - 0x0)
	struct FActiveGameplayStateData	
	{
	public:
		UGameplayState GameplayState; // 0x0(0x8)
		FGameplayTag PreviousStateId; // 0x8(0x4)
		float BeginStateDelay; // 0xC(0x4)
		float InitializationTime; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct GameplayStateMachine.GameplayStateMachineItem
	// Inherited from FFastArraySerializerItem
	// Size: 0x14 (0x20 - 0xC)
	struct FGameplayStateMachineItem : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UGameplayStateMachine StateMachine; // 0x10(0x8)
		float BeginStateDelay; // 0x18(0x4)
		float InitializationTime; // 0x1C(0x4)
	};


	// Struct GameplayStateMachine.GameplayStateMachineArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FGameplayStateMachineArray : public FFastArraySerializer	
	{
	public:
		UGameplayStateMachineManager StateMachineManager; // 0x108(0x8)
		TArray StateMachineItems; // 0x110(0x10)
	};

}
