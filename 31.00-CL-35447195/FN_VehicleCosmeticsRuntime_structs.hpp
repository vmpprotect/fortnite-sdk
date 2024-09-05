#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VehicleCosmeticsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsFailureInfo
	// Size: 0x1 (0x1 - 0x0)
	struct FVehicleCosmeticsFailureInfo	
	{
	public:
		EVehicleCosmeticsFailureReason Reason; // 0x0(0x1)
	};


	// Struct VehicleCosmeticsRuntime.TirePopReplacementInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FTirePopReplacementInfo	
	{
	public:
		TWeakObjectPtr ReplacementWheelMesh; // 0x0(0x8)
	};


	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsDefaultLoadoutInfo
	// Size: 0x58 (0x58 - 0x0)
	struct FVehicleCosmeticsDefaultLoadoutInfo	
	{
	public:
		FGameplayTagQuery VehicleTagQuery; // 0x0(0x48)
		FCosmeticLoadout DefaultLoadout; // 0x48(0x10)
	};


	// Struct VehicleCosmeticsRuntime.ReplicatedCosmeticLoadoutData
	// Size: 0x18 (0x18 - 0x0)
	struct FReplicatedCosmeticLoadoutData	
	{
	public:
		FCosmeticLoadout CosmeticLoadout; // 0x0(0x10)
		FGameplayTag PrimaryArchetype; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct VehicleCosmeticsRuntime.FortVehicleCosmeticsLevelPreviewPaintedVariant
	// Size: 0x18 (0x18 - 0x0)
	struct FFortVehicleCosmeticsLevelPreviewPaintedVariant	
	{
	public:
		FString PaintName; // 0x0(0x10)
		AFortVehicleCosmeticsLevelPreviewActor PreviewActor; // 0x10(0x8)
	};


	// Struct VehicleCosmeticsRuntime.FortVehicleCosmeticsLevelPreviewPaintedVariantCollection
	// Size: 0x18 (0x18 - 0x0)
	struct FFortVehicleCosmeticsLevelPreviewPaintedVariantCollection	
	{
	public:
		TArray PaintedVariants; // 0x0(0x10)
		FGameplayTag PreviewSlotTag; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsEditorPreviewSlotInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FVehicleCosmeticsEditorPreviewSlotInfo	
	{
	public:
		FName VehicleType; // 0x0(0x4)
		FGameplayTag SlotTag; // 0x4(0x4)
		TWeakObjectPtr SlotTemplate; // 0x8(0x20)
		FName SchemaTagName; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsRestrictionDefinition
	// Size: 0x68 (0x68 - 0x0)
	struct FVehicleCosmeticsRestrictionDefinition	
	{
	public:
		FGameplayTagQuery RequiredTagQuery; // 0x0(0x48)
		FText ItemLockerRestrictedText; // 0x48(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x58(0x10) UNKNOWN PROPERTY
	};


	// Struct VehicleCosmeticsRuntime.WheelAttachInfo
	// Size: 0x90 (0x90 - 0x0)
	struct FWheelAttachInfo	
	{
	public:
		EVehicleWheelLocations WheelLocation; // 0x0(0x1)
		unsigned char UnknownData01_6[0xF]; // 0x1(0xF) UNKNOWN PROPERTY
		FBoneSocketTarget WheelSocket; // 0x10(0x80)
	};


	// Struct VehicleCosmeticsRuntime.WheelTransformInfo
	// Size: 0x48 (0x48 - 0x0)
	struct FWheelTransformInfo	
	{
	public:
		FVector WheelOffset; // 0x0(0x18)
		FRotator WheelRotation; // 0x18(0x18)
		FVector WheelScale; // 0x30(0x18)
	};


	// Struct VehicleCosmeticsRuntime.SpinnerWheelInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FSpinnerWheelInfo	
	{
	public:
		bool bShouldSpin; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float SpinAccelRate; // 0x4(0x4)
		float SpinDecelRate; // 0x8(0x4)
		float SpinMaxSpeed; // 0xC(0x4)
	};


	// Struct VehicleCosmeticsRuntime.MaterialSlotWithParameterInfo
	// Size: 0xC (0xC - 0x0)
	struct FMaterialSlotWithParameterInfo	
	{
	public:
		FName MaterialSlotName; // 0x0(0x4)
		FName MaterialParameterName; // 0x4(0x4)
		float MaterialParameterValue; // 0x8(0x4)
	};


	// Struct VehicleCosmeticsRuntime.WheelSetupInfo
	// Size: 0x80 (0x80 - 0x0)
	struct FWheelSetupInfo	
	{
	public:
		EVehicleWheelLocations WheelLocation; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector WheelOffset; // 0x8(0x18)
		FRotator WheelRotation; // 0x20(0x18)
		FVector WheelScale; // 0x38(0x18)
		TArray WheelMaterialSlotInfos; // 0x50(0x10)
		FSpinnerWheelInfo SpinnerWheelInfo; // 0x60(0x10)
		FVehicleWheelFXInfo WheelFXInfo; // 0x70(0x10)
	};


	// Struct VehicleCosmeticsRuntime.BoosterAttachInfo
	// Size: 0x90 (0x90 - 0x0)
	struct FBoosterAttachInfo	
	{
	public:
		FBoneSocketTarget BoosterSocket; // 0x0(0x80)
		int32_t BoosterPortsNum; // 0x80(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x84(0xC) UNKNOWN PROPERTY
	};


	// Struct VehicleCosmeticsRuntime.TirePopInfo
	// Size: 0x1 (0x1 - 0x0)
	struct FTirePopInfo	
	{
	public:
	};


	// Struct VehicleCosmeticsRuntime.TirePopUsingBoneInfo
	// Inherited from FTirePopInfo
	// Size: 0xA0 (0xA0 - 0x0)
	struct FTirePopUsingBoneInfo : public FTirePopInfo	
	{
	public:
		TWeakObjectPtr WheelSkeletonReference; // 0x0(0x20)
		FBoneSocketTarget WheelBone; // 0x20(0x80)
	};


	// Struct VehicleCosmeticsRuntime.TirePopUsingMaterialParameterInfo
	// Inherited from FTirePopInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FTirePopUsingMaterialParameterInfo : public FTirePopInfo	
	{
	public:
		TArray WheelMaterialSlotNames; // 0x0(0x10)
		FName WheelMaterialParameterName; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct VehicleCosmeticsRuntime.TirePopUsingReplacementMeshInfo
	// Inherited from FTirePopInfo
	// Size: 0x110 (0x110 - 0x0)
	struct FTirePopUsingReplacementMeshInfo : public FTirePopInfo	
	{
	public:
		TWeakObjectPtr WheelSkeletonReference; // 0x0(0x20)
		FBoneSocketTarget WheelBone; // 0x20(0x80)
		TWeakObjectPtr WheelReplacementMesh; // 0xA0(0x20)
		TMap WheelTransformInfos; // 0xC0(0x50)
	};


	// Struct VehicleCosmeticsRuntime.WheelInfo
	// Size: 0x80 (0x80 - 0x0)
	struct FWheelInfo	
	{
	public:
		unsigned char UnknownData01_2[0x80]; // 0x0(0x80) UNKNOWN PROPERTY
	};


	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsBodyPhysicsInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FVehicleCosmeticsBodyPhysicsInfo	
	{
	public:
		FVector CenterOfMass; // 0x0(0x18)
		TWeakObjectPtr PhysicsAssetOverride; // 0x18(0x20)
	};


	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsBodyPhysicsQueryInfo
	// Size: 0x80 (0x80 - 0x0)
	struct FVehicleCosmeticsBodyPhysicsQueryInfo	
	{
	public:
		FGameplayTagQuery VehicleTagQuery; // 0x0(0x48)
		FVehicleCosmeticsBodyPhysicsInfo PhysicsInfo; // 0x48(0x38)
	};


	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsCosmeticAttachmentQueryInfo
	// Size: 0x58 (0x58 - 0x0)
	struct FVehicleCosmeticsCosmeticAttachmentQueryInfo	
	{
	public:
		FGameplayTagQuery VehicleTagQuery; // 0x0(0x48)
		TArray CosmeticAttachments; // 0x48(0x10)
	};


	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsAnimInfo
	// Size: 0x68 (0x68 - 0x0)
	struct FVehicleCosmeticsAnimInfo	
	{
	public:
		FGameplayTagQuery VehicleTagQuery; // 0x0(0x48)
		TWeakObjectPtr AnimClass; // 0x48(0x20)
	};


	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsBodyWindowInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FVehicleCosmeticsBodyWindowInfo	
	{
	public:
		FName WindowDataTableParameterName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FDataTableRowHandle WindowRow; // 0x8(0x10)
	};


	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsBodyWindowQueryInfo
	// Size: 0x60 (0x60 - 0x0)
	struct FVehicleCosmeticsBodyWindowQueryInfo	
	{
	public:
		FGameplayTagQuery VehicleTagQuery; // 0x0(0x48)
		FVehicleCosmeticsBodyWindowInfo WindowInfo; // 0x48(0x18)
	};


	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsCustomizableObjectFloatInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FVehicleCosmeticsCustomizableObjectFloatInfo	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		float ParameterValue; // 0x4(0x4)
	};


	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsCustomizableObjectIntInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FVehicleCosmeticsCustomizableObjectIntInfo	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		FName ParameterValue; // 0x4(0x4)
	};


	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsCustomizableObjectColorInfo
	// Size: 0x14 (0x14 - 0x0)
	struct FVehicleCosmeticsCustomizableObjectColorInfo	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		FLinearColor ParameterValue; // 0x4(0x10)
	};


	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsAdditionalParameterInfos
	// Size: 0x30 (0x30 - 0x0)
	struct FVehicleCosmeticsAdditionalParameterInfos	
	{
	public:
		TArray FloatParameters; // 0x0(0x10)
		TArray IntParameters; // 0x10(0x10)
		TArray ColorParameters; // 0x20(0x10)
	};


	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsBodyAttachmentQueryInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FVehicleCosmeticsBodyAttachmentQueryInfo	
	{
	public:
		FGameplayTagQuery VehicleTagQuery; // 0x0(0x48)
		FVehicleCosmeticsCustomizableObjectIntInfo BodyAttachmentInfo; // 0x48(0x8)
	};


	// Struct VehicleCosmeticsRuntime.VehicleCosmeticsAnimPreviewSettings
	// Size: 0x58 (0x58 - 0x0)
	struct FVehicleCosmeticsAnimPreviewSettings	
	{
	public:
		float PreviewWheelSpinVelocity; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TMap PreviewWheelTravelOffset; // 0x8(0x50)
	};

}
