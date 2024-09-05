#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoCreature_TamingRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoCreature_TamingRuntime.JunoAnimalProcessorConfigTableRow
	// Inherited from FTableRowBase
	// Size: 0x40 (0x48 - 0x8)
	struct FJunoAnimalProcessorConfigTableRow : public FTableRowBase	
	{
	public:
		FWorldConditionQueryDefinition SelectionPreconditions; // 0x8(0x18)
		FGameplayTagContainer AssociatedCraftingObjectTags; // 0x20(0x20)
		UJunoAnimalProcessorFriendshipModifierMappings FriendshipModifiersOverride; // 0x40(0x8)
	};


	// Struct JunoCreature_TamingRuntime.JunoAnimalProcessorModifierTableRow
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FJunoAnimalProcessorModifierTableRow : public FTableRowBase	
	{
	public:
		float CraftingSpeedMultiplier; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoCreature_TamingRuntime.JunoEvent_OpenBarnAssignmentMenuMessage
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoEvent_OpenBarnAssignmentMenuMessage	
	{
	public:
		AActor DEPRECATED_BarnActor; // 0x0(0x8)
		UJunoBarnAssignmentMenuInitData BarnAssignmentMenuInitData; // 0x8(0x8)
	};


	// Struct JunoCreature_TamingRuntime.JunoWorldConditionAnimalProcessorChecks
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x50 (0x60 - 0x10)
	struct FJunoWorldConditionAnimalProcessorChecks : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef ActorRef; // 0x10(0x8)
		FGameplayTagQuery AssignedAnimalTagQuery; // 0x18(0x48)
	};

}
