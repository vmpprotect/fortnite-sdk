#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AssembledMeshSystem
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AssembledMeshSystem.AssembledComponentReferences
	// Size: 0x20 (0x20 - 0x0)
	struct FAssembledComponentReferences	
	{
	public:
		USkeletalMeshComponent* SkeletalMeshComponent; // 0x0(0x8)
		UCustomizableObjectInstanceUsage* CustomizableObjectInstanceUsage; // 0x8(0x8)
		FGameplayTag AssembledMeshSchemaTag; // 0x10(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x14(0xC) UNKNOWN PROPERTY
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
		TWeakObjectPtr<UTexture2D*> WidePreviewImage; // 0x0(0x20)
		TWeakObjectPtr<UTexture2D*> SmallPreviewImage; // 0x20(0x20)
		TWeakObjectPtr<UTexture2D*> LargePreviewImage; // 0x40(0x20)
		TWeakObjectPtr<UTexture2D*> FullScreenImage; // 0x60(0x20)
	};


	// Struct AssembledMeshSystem.CosmeticProperty_AssembledMeshSchema
	// Inherited from FCosmeticPropertyBase
	// Size: 0x24 (0x28 - 0x4)
	struct FCosmeticProperty_AssembledMeshSchema : public FCosmeticPropertyBase	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UAssembledMeshSchema*> AssembledMeshSchema; // 0x8(0x20)
	};


	// Struct AssembledMeshSystem.AssembledMeshAttachmentRules
	// Size: 0x50 (0x50 - 0x0)
	struct FAssembledMeshAttachmentRules	
	{
	public:
		FName AttachSocketName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
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
		TArray<FString> ParamOptions; // 0x10(0x10)
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
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};

}
