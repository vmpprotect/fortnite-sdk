#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AssembledMeshSystem
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct AssembledMeshSystem.AssembledComponentReferences
	// Size: 0x18 (0x18 - 0x0)
	struct FAssembledComponentReferences	
	{
	public:
		USkeletalMeshComponent SkeletalMeshComponent; // 0x0(0x8)
		UCustomizableObjectInstanceUsage CustomizableObjectInstanceUsage; // 0x8(0x8)
		FGameplayTag AssembledMeshSchemaTag; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct AssembledMeshSystem.AssembledMeshSchemaData
	// Size: 0x1 (0x1 - 0x0)
	struct FAssembledMeshSchemaData	
	{
	public:
	};


	// Struct AssembledMeshSystem.AssembledMeshSchemaData_Icons
	// Inherited from FAssembledMeshSchemaData
	// Size: 0x80 (0x80 - 0x0)
	struct FAssembledMeshSchemaData_Icons : public FAssembledMeshSchemaData	
	{
	public:
		TWeakObjectPtr WidePreviewImage; // 0x0(0x20)
		TWeakObjectPtr SmallPreviewImage; // 0x20(0x20)
		TWeakObjectPtr LargePreviewImage; // 0x40(0x20)
		TWeakObjectPtr FullScreenImage; // 0x60(0x20)
	};


	// Struct AssembledMeshSystem.CosmeticProperty_AssembledMeshSchema
	// Inherited from FCosmeticPropertyBase
	// Size: 0x24 (0x28 - 0x4)
	struct FCosmeticProperty_AssembledMeshSchema : public FCosmeticPropertyBase	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr AssembledMeshSchema; // 0x8(0x20)
	};


	// Struct AssembledMeshSystem.AssembledMeshAttachmentRules
	// Size: 0x50 (0x50 - 0x0)
	struct FAssembledMeshAttachmentRules	
	{
	public:
		FName AttachSocketName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector AttachOffset; // 0x8(0x18)
		FRotator AttachRotation; // 0x20(0x18)
		FVector AttachScale; // 0x38(0x18)
	};


	// Struct AssembledMeshSystem.BaseParamData
	// Size: 0x10 (0x10 - 0x0)
	struct FBaseParamData	
	{
	public:
		FString ParamName; // 0x0(0x10)
	};


	// Struct AssembledMeshSystem.IntParamData
	// Inherited from FBaseParamData
	// Size: 0x10 (0x20 - 0x10)
	struct FIntParamData : public FBaseParamData	
	{
	public:
		TArray ParamOptions; // 0x10(0x10)
	};


	// Struct AssembledMeshSystem.FloatParamData
	// Inherited from FBaseParamData
	// Size: 0x10 (0x20 - 0x10)
	struct FFloatParamData : public FBaseParamData	
	{
	public:
		float FloatValue; // 0x10(0x4)
		float MinFloatValue; // 0x14(0x4)
		float MaxFloatValue; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};

}
