#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Curie
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Curie.CurieContainerHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FCurieContainerHandle	
	{
	public:
		unsigned char UnknownData01_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct Curie.CurieMaterialDefinitionBase
	// Inherited from FTableRowBase
	// Size: 0x80 (0x88 - 0x8)
	struct FCurieMaterialDefinitionBase : public FTableRowBase	
	{
	public:
		FGameplayTagContainer ElementalImmunities; // 0x8(0x20)
		FGameplayTagContainer ElementAttachmentImmunities; // 0x28(0x20)
		FGameplayTagContainer ElementsAllowedWhenCannotBeDamaged; // 0x48(0x20)
		FGameplayTagContainer MaterialProperties; // 0x68(0x20)
	};


	// Struct Curie.CurieElementDefinitionBase
	// Inherited from FTableRowBase
	// Size: 0x78 (0x80 - 0x8)
	struct FCurieElementDefinitionBase : public FTableRowBase	
	{
	public:
		UClass ElementAllocationHandler; // 0x8(0x8)
		TArray ElementAttachHandlers; // 0x10(0x10)
		UClass ElementAttachConditionHandler; // 0x20(0x8)
		TArray ElementInteractHandlers; // 0x28(0x10)
		TArray ElementMaterialInteractHandlers; // 0x38(0x10)
		TArray ElementContainerInteractHandlers; // 0x48(0x10)
		FGameplayTagContainer ElementalImmunities; // 0x58(0x20)
		bool bIsEnabled : 1; // 0x78:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
	};


	// Struct Curie.CurieEntityStateDefinitionBase
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FCurieEntityStateDefinitionBase : public FTableRowBase	
	{
	public:
		UClass StateBehaviorClass; // 0x8(0x8)
		bool bIsEnabled : 1; // 0x10:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct Curie.CurieElementAttachHandlersContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FCurieElementAttachHandlersContainer	
	{
	public:
		TArray Handlers; // 0x0(0x10)
	};


	// Struct Curie.CurieElementAttachConditionHandlersContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FCurieElementAttachConditionHandlersContainer	
	{
	public:
		TArray Handlers; // 0x0(0x10)
	};


	// Struct Curie.CurieElementInteractWithElementHandlersContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FCurieElementInteractWithElementHandlersContainer	
	{
	public:
		TArray Handlers; // 0x0(0x10)
	};


	// Struct Curie.CurieElementInteractWithMaterialHandlersContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FCurieElementInteractWithMaterialHandlersContainer	
	{
	public:
		TArray Handlers; // 0x0(0x10)
	};


	// Struct Curie.CurieElementInteractWithContainerHandlersContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FCurieElementInteractWithContainerHandlersContainer	
	{
	public:
		TArray Handlers; // 0x0(0x10)
	};


	// Struct Curie.CurieInteractParamsHandle
	// Size: 0x10 (0x10 - 0x0)
	struct FCurieInteractParamsHandle	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct Curie.CurieElementPairKey
	// Size: 0x8 (0x8 - 0x0)
	struct FCurieElementPairKey	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Curie.CurieManagerComponentEntry
	// Inherited from FTableRowBase
	// Size: 0x18 (0x20 - 0x8)
	struct FCurieManagerComponentEntry : public FTableRowBase	
	{
	public:
		bool bIsActive; // 0x8(0x1)
		ECurieManagerComponentPriority Priority; // 0x9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
		UClass ManagerType; // 0x10(0x8)
		UCurieManagerComponentConfig Config; // 0x18(0x8)
	};


	// Struct Curie.CurieInteractHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FCurieInteractHandle	
	{
	public:
		unsigned char UnknownData01_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct Curie.CurieEffectContainer
	// Size: 0x50 (0x50 - 0x0)
	struct FCurieEffectContainer	
	{
	public:
		FGameplayTagQuery TargetFilter; // 0x0(0x48)
		UClass GameplayEffect; // 0x48(0x8)
	};


	// Struct Curie.CurieStateHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FCurieStateHandle	
	{
	public:
		unsigned char UnknownData01_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct Curie.CurieElementHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FCurieElementHandle	
	{
	public:
		unsigned char UnknownData01_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};

}
