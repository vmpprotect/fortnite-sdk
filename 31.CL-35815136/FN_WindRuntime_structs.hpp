#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WindRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct WindRuntime.RootMotionSource_ConstantWindForce
	// Inherited from FRootMotionSource
	// Size: 0x20 (0xE0 - 0xC0)
	struct FRootMotionSource_ConstantWindForce : public FRootMotionSource	
	{
	public:
		FVector Force; // 0xC0(0x18)
		UCurveFloat* StrengthOverTime; // 0xD8(0x8)
	};


	// Struct WindRuntime.PhysicsWindSplineAsyncInPersistent
	// Size: 0x1F0 (0x1F0 - 0x0)
	struct FPhysicsWindSplineAsyncInPersistent	
	{
	public:
		unsigned char UnknownData00_2[0x1F0]; // 0x0(0x1F0) UNKNOWN PROPERTY
	};


	// Struct WindRuntime.PhysicsWindSplineAsyncOutContinuous
	// Size: 0x1 (0x1 - 0x0)
	struct FPhysicsWindSplineAsyncOutContinuous	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct WindRuntime.WindSplineTargetDatum
	// Inherited from FFastArraySerializerItem
	// Size: 0x1C (0x28 - 0xC)
	struct FWindSplineTargetDatum : public FFastArraySerializerItem	
	{
	public:
		TWeakObjectPtr<AActor*> Target; // 0xC(0x8)
		unsigned char UnknownData00_7[0x14]; // 0x14(0x14) UNKNOWN PROPERTY
	};


	// Struct WindRuntime.WindSplineTargetData
	// Inherited from FFastArraySerializer
	// Size: 0xB0 (0x1B8 - 0x108)
	struct FWindSplineTargetData : public FFastArraySerializer	
	{
	public:
		TArray<FWindSplineTargetDatum> Items; // 0x108(0x10)
		unsigned char UnknownData00_7[0xA0]; // 0x118(0xA0) UNKNOWN PROPERTY
	};


	// Struct WindRuntime.WindSplineForceModifiers
	// Size: 0xA0 (0xA0 - 0x0)
	struct FWindSplineForceModifiers	
	{
	public:
		FScalableFloat ForwardForceMagnitudeMultiplier; // 0x0(0x28)
		FScalableFloat ReverseForceMagnitudeMultiplier; // 0x28(0x28)
		FScalableFloat InwardForceOuterRadiusAccelerationMultiplier; // 0x50(0x28)
		FScalableFloat InwardForceInnerRadiusDecelerationMultiplier; // 0x78(0x28)
	};


	// Struct WindRuntime.WindSplineTagBasedForceModifiers
	// Size: 0xE8 (0xE8 - 0x0)
	struct FWindSplineTagBasedForceModifiers	
	{
	public:
		FGameplayTagQuery Query; // 0x0(0x48)
		FWindSplineForceModifiers Modifier; // 0x48(0xA0)
	};


	// Struct WindRuntime.WindSplineTargetEffects
	// Size: 0x60 (0x60 - 0x0)
	struct FWindSplineTargetEffects	
	{
	public:
		FGameplayTagQuery Filter; // 0x0(0x48)
		FGameplayTag Cue; // 0x48(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		TArray<UClass*> GameplayEffects; // 0x50(0x10)
	};


	// Struct WindRuntime.WindSplineBlockageID
	// Size: 0x4 (0x4 - 0x0)
	struct FWindSplineBlockageID	
	{
	public:
		uint32_t ID; // 0x0(0x4)
	};


	// Struct WindRuntime.WindSplineSubDivBlockage
	// Size: 0x8 (0x8 - 0x0)
	struct FWindSplineSubDivBlockage	
	{
	public:
		int32_t SubDivIdx; // 0x0(0x4)
		float StartSectionLength; // 0x4(0x4)
	};


	// Struct WindRuntime.WindSplineBlockage
	// Inherited from FFastArraySerializerItem
	// Size: 0x24 (0x30 - 0xC)
	struct FWindSplineBlockage : public FFastArraySerializerItem	
	{
	public:
		FWindSplineBlockageID ID; // 0xC(0x4)
		TArray<FWindSplineSubDivBlockage> SubDivBlockages; // 0x10(0x10)
		float ActivationTime; // 0x20(0x4)
		float DeactivationTime; // 0x24(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct WindRuntime.WindSplineBlockageArray
	// Inherited from FFastArraySerializer
	// Size: 0x10 (0x118 - 0x108)
	struct FWindSplineBlockageArray : public FFastArraySerializer	
	{
	public:
		TArray<FWindSplineBlockage> Items; // 0x108(0x10)
	};


	// Struct WindRuntime.WindSplineMeshData
	// Size: 0x18 (0x18 - 0x0)
	struct FWindSplineMeshData	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TArray<UMaterialInstanceDynamic*> MeshMaterials; // 0x8(0x10)
	};

}
