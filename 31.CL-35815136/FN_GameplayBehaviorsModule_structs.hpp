#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayBehaviorsModule
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct GameplayBehaviorsModule.ValueOrBBKey_GameplayTagContainer
	// Inherited from FValueOrBlackboardKeyBase
	// Size: 0x20 (0x28 - 0x8)
	struct FValueOrBBKey_GameplayTagContainer : public FValueOrBlackboardKeyBase	
	{
	public:
		FGameplayTagContainer DefaultValue; // 0x8(0x20)
	};


	// Struct GameplayBehaviorsModule.AgentGameplayBehaviors
	// Size: 0x10 (0x10 - 0x0)
	struct FAgentGameplayBehaviors	
	{
	public:
		TArray<UGameplayBehavior*> Behaviors; // 0x0(0x10)
	};


	// Struct GameplayBehaviorsModule.MontagePlaybackData
	// Size: 0x40 (0x40 - 0x0)
	struct FMontagePlaybackData	
	{
	public:
		AActor* Avatar; // 0x0(0x8)
		UAnimMontage* AnimMontage; // 0x8(0x8)
		UAbilitySystemComponent* AbilityComponent; // 0x10(0x8)
		unsigned char UnknownData00_7[0x28]; // 0x18(0x28) UNKNOWN PROPERTY
	};

}
