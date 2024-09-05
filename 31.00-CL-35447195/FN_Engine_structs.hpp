#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Engine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Engine.MaterialInput
	// Size: 0x28 (0x28 - 0x0)
	struct FMaterialInput	
	{
	public:
		UMaterialExpression Expression; // 0x0(0x8)
		int32_t OutputIndex; // 0x8(0x4)
		FName InputName; // 0xC(0x4)
		int32_t Mask; // 0x10(0x4)
		int32_t MaskR; // 0x14(0x4)
		int32_t MaskG; // 0x18(0x4)
		int32_t MaskB; // 0x1C(0x4)
		int32_t MaskA; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.ColorMaterialInput
	// Inherited from FMaterialInput
	// Size: 0x8 (0x30 - 0x28)
	struct FColorMaterialInput : public FMaterialInput	
	{
	public:
		bool UseConstant : 1; // 0x28:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		FColor Constant; // 0x2C(0x4)
	};


	// Struct Engine.DistributionLookupTable
	// Size: 0x20 (0x20 - 0x0)
	struct FDistributionLookupTable	
	{
	public:
		float timescale; // 0x0(0x4)
		float TimeBias; // 0x4(0x4)
		TArray Values; // 0x8(0x10)
		char Op; // 0x18(0x1)
		char EntryCount; // 0x19(0x1)
		char EntryStride; // 0x1A(0x1)
		char SubEntryStride; // 0x1B(0x1)
		char LockFlag; // 0x1C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.ExpressionInput
	// Size: 0x28 (0x28 - 0x0)
	struct FExpressionInput	
	{
	public:
		UMaterialExpression Expression; // 0x0(0x8)
		int32_t OutputIndex; // 0x8(0x4)
		FName InputName; // 0xC(0x4)
		int32_t Mask; // 0x10(0x4)
		int32_t MaskR; // 0x14(0x4)
		int32_t MaskG; // 0x18(0x4)
		int32_t MaskB; // 0x1C(0x4)
		int32_t MaskA; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.ExpressionOutput
	// Size: 0x18 (0x18 - 0x0)
	struct FExpressionOutput	
	{
	public:
		FName OutputName; // 0x0(0x4)
		int32_t Mask; // 0x4(0x4)
		int32_t MaskR; // 0x8(0x4)
		int32_t MaskG; // 0xC(0x4)
		int32_t MaskB; // 0x10(0x4)
		int32_t MaskA; // 0x14(0x4)
	};


	// Struct Engine.FloatDistribution
	// Size: 0x20 (0x20 - 0x0)
	struct FFloatDistribution	
	{
	public:
		FDistributionLookupTable Table; // 0x0(0x20)
	};


	// Struct Engine.FloatRK4SpringInterpolator
	// Size: 0x8 (0x8 - 0x0)
	struct FFloatRK4SpringInterpolator	
	{
	public:
		float StiffnessConstant; // 0x0(0x4)
		float DampeningRatio; // 0x4(0x4)
	};


	// Struct Engine.FormatArgumentData
	// Size: 0x48 (0x48 - 0x0)
	struct FFormatArgumentData	
	{
	public:
		FString ArgumentName; // 0x0(0x10)
		TEnumAsByte ArgumentValueType; // 0x10(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FText ArgumentValue; // 0x18(0x10)
		int64_t ArgumentValueInt; // 0x28(0x8)
		float ArgumentValueFloat; // 0x30(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		double ArgumentValueDouble; // 0x38(0x8)
		ETextGender ArgumentValueGender; // 0x40(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.MaterialAttributesInput
	// Inherited from FExpressionInput
	// Size: 0x8 (0x30 - 0x28)
	struct FMaterialAttributesInput : public FExpressionInput	
	{
	public:
		int64_t PropertyConnectedMask; // 0x28(0x8)
	};


	// Struct Engine.RawDistribution
	// Size: 0x20 (0x20 - 0x0)
	struct FRawDistribution	
	{
	public:
		FDistributionLookupTable Table; // 0x0(0x20)
	};


	// Struct Engine.ScalarMaterialInput
	// Inherited from FMaterialInput
	// Size: 0x8 (0x30 - 0x28)
	struct FScalarMaterialInput : public FMaterialInput	
	{
	public:
		bool UseConstant : 1; // 0x28:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float Constant; // 0x2C(0x4)
	};


	// Struct Engine.ShadingModelMaterialInput
	// Inherited from FMaterialInput
	// Size: 0x0 (0x28 - 0x28)
	struct FShadingModelMaterialInput : public FMaterialInput	
	{
	public:
	};


	// Struct Engine.SubstrateMaterialInput
	// Inherited from FMaterialInput
	// Size: 0x0 (0x28 - 0x28)
	struct FSubstrateMaterialInput : public FMaterialInput	
	{
	public:
	};


	// Struct Engine.Vector2MaterialInput
	// Inherited from FMaterialInput
	// Size: 0x10 (0x38 - 0x28)
	struct FVector2MaterialInput : public FMaterialInput	
	{
	public:
		bool UseConstant : 1; // 0x28:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float ConstantX; // 0x2C(0x4)
		float ConstantY; // 0x30(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.Vector4Distribution
	// Size: 0x20 (0x20 - 0x0)
	struct FVector4Distribution	
	{
	public:
		FDistributionLookupTable Table; // 0x0(0x20)
	};


	// Struct Engine.VectorDistribution
	// Size: 0x20 (0x20 - 0x0)
	struct FVectorDistribution	
	{
	public:
		FDistributionLookupTable Table; // 0x0(0x20)
	};


	// Struct Engine.VectorMaterialInput
	// Inherited from FMaterialInput
	// Size: 0x10 (0x38 - 0x28)
	struct FVectorMaterialInput : public FMaterialInput	
	{
	public:
		bool UseConstant : 1; // 0x28:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		FVector3f Constant; // 0x2C(0xC)
	};


	// Struct Engine.VectorRK4SpringInterpolator
	// Size: 0x8 (0x8 - 0x0)
	struct FVectorRK4SpringInterpolator	
	{
	public:
		float StiffnessConstant; // 0x0(0x4)
		float DampeningRatio; // 0x4(0x4)
	};


	// Struct Engine.AnimDataModelNotifPayload
	// Size: 0x10 (0x10 - 0x0)
	struct FAnimDataModelNotifPayload	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.ChaosBreakEvent
	// Size: 0x78 (0x78 - 0x0)
	struct FChaosBreakEvent	
	{
	public:
		UPrimitiveComponent Component; // 0x0(0x8)
		FVector Location; // 0x8(0x18)
		FVector Velocity; // 0x20(0x18)
		FVector AngularVelocity; // 0x38(0x18)
		FVector Extents; // 0x50(0x18)
		float Mass; // 0x68(0x4)
		int32_t Index; // 0x6C(0x4)
		bool bFromCrumble; // 0x70(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.CollisionChaosEvent
	// Size: 0x120 (0x120 - 0x0)
	struct FCollisionChaosEvent	
	{
	public:
		FVector Location; // 0x0(0x18)
		FVector AccumulatedImpulse; // 0x18(0x18)
		FVector Normal; // 0x30(0x18)
		float PenetrationDepth; // 0x48(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FCollisionChaosEventBodyInfo Body1; // 0x50(0x68)
		FCollisionChaosEventBodyInfo Body2; // 0xB8(0x68)
	};


	// Struct Engine.CollisionChaosEventBodyInfo
	// Size: 0x68 (0x68 - 0x0)
	struct FCollisionChaosEventBodyInfo	
	{
	public:
		FVector Velocity; // 0x0(0x18)
		FVector DeltaVelocity; // 0x18(0x18)
		FVector AngularVelocity; // 0x30(0x18)
		float Mass; // 0x48(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		UPhysicalMaterial PhysMaterial; // 0x50(0x8)
		TWeakObjectPtr Component; // 0x58(0x8)
		int32_t BodyIndex; // 0x60(0x4)
		FName BoneName; // 0x64(0x4)
	};


	// Struct Engine.ChaosCrumblingEvent
	// Size: 0xC0 (0xC0 - 0x0)
	struct FChaosCrumblingEvent	
	{
	public:
		UPrimitiveComponent Component; // 0x0(0x8)
		FVector Location; // 0x8(0x18)
		FQuat orientation; // 0x20(0x20)
		FVector LinearVelocity; // 0x40(0x18)
		FVector AngularVelocity; // 0x58(0x18)
		float Mass; // 0x70(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FBox LocalBounds; // 0x78(0x38)
		TArray Children; // 0xB0(0x10)
	};


	// Struct Engine.HitResult
	// Size: 0xF8 (0xF8 - 0x0)
	struct FHitResult	
	{
	public:
		int32_t FaceIndex; // 0x0(0x4)
		float Time; // 0x4(0x4)
		float Distance; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector_NetQuantize Location; // 0x10(0x18)
		FVector_NetQuantize ImpactPoint; // 0x28(0x18)
		FVector_NetQuantizeNormal Normal; // 0x40(0x18)
		FVector_NetQuantizeNormal ImpactNormal; // 0x58(0x18)
		FVector_NetQuantize TraceStart; // 0x70(0x18)
		FVector_NetQuantize TraceEnd; // 0x88(0x18)
		float PenetrationDepth; // 0xA0(0x4)
		int32_t MyItem; // 0xA4(0x4)
		int32_t Item; // 0xA8(0x4)
		char ElementIndex; // 0xAC(0x1)
		bool bBlockingHit : 1; // 0xAD:0(0x1)
		bool bStartPenetrating : 1; // 0xAD:1(0x1)
		unsigned char UnknownData04_5[0x2]; // 0xAE(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr PhysMaterial; // 0xB0(0x8)
		FActorInstanceHandle HitObjectHandle; // 0xB8(0x20)
		TWeakObjectPtr Component; // 0xD8(0x8)
		unsigned char UnknownData05_6[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY
		FName BoneName; // 0xF0(0x4)
		FName MyBoneName; // 0xF4(0x4)
	};


	// Struct Engine.ActorInstanceHandle
	// Size: 0x20 (0x20 - 0x0)
	struct FActorInstanceHandle	
	{
	public:
		TWeakObjectPtr ReferenceObject; // 0x0(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x8(0x18) UNKNOWN PROPERTY
	};


	// Struct Engine.Vector_NetQuantize
	// Inherited from FVector
	// Size: 0x0 (0x18 - 0x18)
	struct FVector_NetQuantize : public FVector	
	{
	public:
	};


	// Struct Engine.Vector_NetQuantizeNormal
	// Inherited from FVector
	// Size: 0x0 (0x18 - 0x18)
	struct FVector_NetQuantizeNormal : public FVector	
	{
	public:
	};


	// Struct Engine.SubtitleCue
	// Size: 0x18 (0x18 - 0x0)
	struct FSubtitleCue	
	{
	public:
		FText Text; // 0x0(0x10)
		float Time; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.PlatformInterfaceDelegateResult
	// Size: 0x30 (0x30 - 0x0)
	struct FPlatformInterfaceDelegateResult	
	{
	public:
		bool bSuccessful; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FPlatformInterfaceData Data; // 0x8(0x28)
	};


	// Struct Engine.PlatformInterfaceData
	// Size: 0x28 (0x28 - 0x0)
	struct FPlatformInterfaceData	
	{
	public:
		FName DataName; // 0x0(0x4)
		TEnumAsByte Type; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		int32_t IntValue; // 0x8(0x4)
		float FloatValue; // 0xC(0x4)
		FString StringValue; // 0x10(0x10)
		UObject ObjectValue; // 0x20(0x8)
	};


	// Struct Engine.BranchingPointNotifyPayload
	// Size: 0x20 (0x20 - 0x0)
	struct FBranchingPointNotifyPayload	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct Engine.ChaosRemovalEvent
	// Size: 0x28 (0x28 - 0x0)
	struct FChaosRemovalEvent	
	{
	public:
		UPrimitiveComponent Component; // 0x0(0x8)
		FVector Location; // 0x8(0x18)
		float Mass; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.TickFunction
	// Size: 0x28 (0x28 - 0x0)
	struct FTickFunction	
	{
	public:
		unsigned char UnknownData03_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TEnumAsByte TickGroup; // 0x8(0x1)
		TEnumAsByte EndTickGroup; // 0x9(0x1)
		bool bTickEvenWhenPaused : 1; // 0xA:0(0x1)
		bool bCanEverTick : 1; // 0xA:1(0x1)
		bool bStartWithTickEnabled : 1; // 0xA:2(0x1)
		bool bAllowTickOnDedicatedServer : 1; // 0xA:3(0x1)
		unsigned char UnknownData04_5[0x1]; // 0xB(0x1) UNKNOWN PROPERTY
		float TickInterval; // 0xC(0x4)
		unsigned char UnknownData05_7[0x18]; // 0x10(0x18) UNKNOWN PROPERTY
	};


	// Struct Engine.ActorComponentTickFunction
	// Inherited from FTickFunction
	// Size: 0x8 (0x30 - 0x28)
	struct FActorComponentTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.InterpControlPoint
	// Size: 0x28 (0x28 - 0x0)
	struct FInterpControlPoint	
	{
	public:
		FVector PositionControlPoint; // 0x0(0x18)
		bool bPositionIsRelative; // 0x18(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x19(0xF) UNKNOWN PROPERTY
	};


	// Struct Engine.DebugFloatHistory
	// Size: 0x20 (0x20 - 0x0)
	struct FDebugFloatHistory	
	{
	public:
		TArray Samples; // 0x0(0x10)
		int32_t MaxSamples; // 0x10(0x4)
		float MinValue; // 0x14(0x4)
		float MaxValue; // 0x18(0x4)
		bool bAutoAdjustMinMax; // 0x1C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.BaseComponentReference
	// Size: 0x20 (0x20 - 0x0)
	struct FBaseComponentReference	
	{
	public:
		FName ComponentProperty; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString PathToComponent; // 0x8(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.SoftComponentReference
	// Inherited from FBaseComponentReference
	// Size: 0x20 (0x40 - 0x20)
	struct FSoftComponentReference : public FBaseComponentReference	
	{
	public:
		TWeakObjectPtr OtherActor; // 0x20(0x20)
	};


	// Struct Engine.ComponentReference
	// Inherited from FBaseComponentReference
	// Size: 0x8 (0x28 - 0x20)
	struct FComponentReference : public FBaseComponentReference	
	{
	public:
		TWeakObjectPtr OtherActor; // 0x20(0x8)
	};


	// Struct Engine.LatentActionInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FLatentActionInfo	
	{
	public:
		int32_t Linkage; // 0x0(0x4)
		int32_t UUID; // 0x4(0x4)
		FName ExecutionFunction; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UObject CallbackTarget; // 0x10(0x8)
	};


	// Struct Engine.TimerHandle
	// Size: 0x8 (0x8 - 0x0)
	struct FTimerHandle	
	{
	public:
		uint64_t Handle; // 0x0(0x8)
	};


	// Struct Engine.CollisionProfileName
	// Size: 0x4 (0x4 - 0x0)
	struct FCollisionProfileName	
	{
	public:
		FName Name; // 0x0(0x4)
	};


	// Struct Engine.GenericStruct
	// Size: 0x4 (0x4 - 0x0)
	struct FGenericStruct	
	{
	public:
		int32_t Data; // 0x0(0x4)
	};


	// Struct Engine.UserActivity
	// Size: 0x18 (0x18 - 0x0)
	struct FUserActivity	
	{
	public:
		FString ActionName; // 0x0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.FloatAnimationAttribute
	// Size: 0x4 (0x4 - 0x0)
	struct FFloatAnimationAttribute	
	{
	public:
		float Value; // 0x0(0x4)
	};


	// Struct Engine.IntegerAnimationAttribute
	// Size: 0x4 (0x4 - 0x0)
	struct FIntegerAnimationAttribute	
	{
	public:
		int32_t Value; // 0x0(0x4)
	};


	// Struct Engine.StringAnimationAttribute
	// Size: 0x10 (0x10 - 0x0)
	struct FStringAnimationAttribute	
	{
	public:
		FString Value; // 0x0(0x10)
	};


	// Struct Engine.TransformAnimationAttribute
	// Size: 0x60 (0x60 - 0x0)
	struct FTransformAnimationAttribute	
	{
	public:
		FTransform Value; // 0x0(0x60)
	};


	// Struct Engine.VectorAnimationAttribute
	// Size: 0x18 (0x18 - 0x0)
	struct FVectorAnimationAttribute	
	{
	public:
		FVector Value; // 0x0(0x18)
	};


	// Struct Engine.QuaternionAnimationAttribute
	// Size: 0x20 (0x20 - 0x0)
	struct FQuaternionAnimationAttribute	
	{
	public:
		FQuat Value; // 0x0(0x20)
	};


	// Struct Engine.BodyInstanceAsyncPhysicsTickHandle
	// Size: 0x8 (0x8 - 0x0)
	struct FBodyInstanceAsyncPhysicsTickHandle	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.WalkableSlopeOverride
	// Size: 0x10 (0x10 - 0x0)
	struct FWalkableSlopeOverride	
	{
	public:
		TEnumAsByte WalkableSlopeBehavior; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float WalkableSlopeAngle; // 0x4(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.BodyInstance
	// Inherited from FBodyInstanceCore
	// Size: 0x164 (0x170 - 0xC)
	struct FBodyInstance : public FBodyInstanceCore	
	{
	public:
		unsigned char UnknownData15_3[0x6]; // 0xC(0x6) UNKNOWN PROPERTY
		char PositionSolverIterationCount; // 0x12(0x1)
		char VelocitySolverIterationCount; // 0x13(0x1)
		TEnumAsByte ObjectType; // 0x14(0x1)
		unsigned char UnknownData16_6[0x1]; // 0x15(0x1) UNKNOWN PROPERTY
		TEnumAsByte CollisionEnabled; // 0x16(0x1)
		unsigned char UnknownData17_6[0x22]; // 0x17(0x22) UNKNOWN PROPERTY
		ESleepFamily SleepFamily; // 0x39(0x1)
		TEnumAsByte DOFMode; // 0x3A(0x1)
		bool bUseCCD : 1; // 0x3B:0(0x1)
		unsigned char UnknownBit18 : 1; // 0x3B:1(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit19 : 1; // 0x3B:2(0x1) UNKNOWN PROPERTY
		bool bUseMACD : 1; // 0x3B:3(0x1)
		bool bIgnoreAnalyticCollisions : 1; // 0x3B:4(0x1)
		bool bNotifyRigidBodyCollision : 1; // 0x3B:5(0x1)
		unsigned char UnknownBit20 : 1; // 0x3B:6(0x1) UNKNOWN PROPERTY
		bool bSmoothEdgeCollisions : 1; // 0x3B:7(0x1)
		bool bLockTranslation : 1; // 0x3C:0(0x1)
		bool bLockRotation : 1; // 0x3C:1(0x1)
		bool bLockXTranslation : 1; // 0x3C:2(0x1)
		bool bLockYTranslation : 1; // 0x3C:3(0x1)
		bool bLockZTranslation : 1; // 0x3C:4(0x1)
		bool bLockXRotation : 1; // 0x3C:5(0x1)
		bool bLockYRotation : 1; // 0x3C:6(0x1)
		bool bLockZRotation : 1; // 0x3C:7(0x1)
		bool bOverrideMaxAngularVelocity : 1; // 0x3D:0(0x1)
		unsigned char UnknownBit21 : 1; // 0x3D:1(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit22 : 1; // 0x3D:2(0x1) UNKNOWN PROPERTY
		bool bOverrideMaxDepenetrationVelocity : 1; // 0x3D:3(0x1)
		bool bOverrideWalkableSlopeOnInstance : 1; // 0x3D:4(0x1)
		bool bInterpolateWhenSubStepping : 1; // 0x3D:5(0x1)
		unsigned char UnknownBit23 : 1; // 0x3D:6(0x1) UNKNOWN PROPERTY
		bool bInertiaConditioning : 1; // 0x3D:7(0x1)
		bool bOneWayInteraction : 1; // 0x3E:0(0x1)
		bool bOverrideSolverAsyncDeltaTime : 1; // 0x3E:1(0x1)
		unsigned char UnknownData24_5[0x1]; // 0x3F(0x1) UNKNOWN PROPERTY
		float SolverAsyncDeltaTime; // 0x40(0x4)
		FName CollisionProfileName; // 0x44(0x4)
		unsigned char UnknownData25_6[0x18]; // 0x48(0x18) UNKNOWN PROPERTY
		FCollisionResponse CollisionResponses; // 0x60(0x30)
		float MaxDepenetrationVelocity; // 0x90(0x4)
		float MassInKgOverride; // 0x94(0x4)
		unsigned char UnknownData26_6[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		float LinearDamping; // 0xA0(0x4)
		float AngularDamping; // 0xA4(0x4)
		FVector CustomDOFPlaneNormal; // 0xA8(0x18)
		FVector COMNudge; // 0xC0(0x18)
		float MassScale; // 0xD8(0x4)
		unsigned char UnknownData27_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		FVector InertiaTensorScale; // 0xE0(0x18)
		unsigned char UnknownData28_6[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY
		FWalkableSlopeOverride WalkableSlopeOverride; // 0x108(0x10)
		UPhysicalMaterial PhysMaterialOverride; // 0x118(0x8)
		float MaxAngularVelocity; // 0x120(0x4)
		float CustomSleepThresholdMultiplier; // 0x124(0x4)
		float StabilizationThresholdMultiplier; // 0x128(0x4)
		float PhysicsBlendWeight; // 0x12C(0x4)
		unsigned char UnknownData29_7[0x40]; // 0x130(0x40) UNKNOWN PROPERTY
	};


	// Struct Engine.CollisionResponse
	// Size: 0x30 (0x30 - 0x0)
	struct FCollisionResponse	
	{
	public:
		FCollisionResponseContainer ResponseToChannels; // 0x0(0x20)
		TArray ResponseArray; // 0x20(0x10)
	};


	// Struct Engine.ResponseChannel
	// Size: 0x8 (0x8 - 0x0)
	struct FResponseChannel	
	{
	public:
		FName Channel; // 0x0(0x4)
		TEnumAsByte Response; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.CollisionResponseContainer
	// Size: 0x20 (0x20 - 0x0)
	struct FCollisionResponseContainer	
	{
	public:
		TEnumAsByte WorldStatic; // 0x0(0x1)
		TEnumAsByte WorldDynamic; // 0x1(0x1)
		TEnumAsByte Pawn; // 0x2(0x1)
		TEnumAsByte Visibility; // 0x3(0x1)
		TEnumAsByte Camera; // 0x4(0x1)
		TEnumAsByte PhysicsBody; // 0x5(0x1)
		TEnumAsByte Vehicle; // 0x6(0x1)
		TEnumAsByte Destructible; // 0x7(0x1)
		TEnumAsByte EngineTraceChannel1; // 0x8(0x1)
		TEnumAsByte EngineTraceChannel2; // 0x9(0x1)
		TEnumAsByte EngineTraceChannel3; // 0xA(0x1)
		TEnumAsByte EngineTraceChannel4; // 0xB(0x1)
		TEnumAsByte EngineTraceChannel5; // 0xC(0x1)
		TEnumAsByte EngineTraceChannel6; // 0xD(0x1)
		TEnumAsByte GameTraceChannel1; // 0xE(0x1)
		TEnumAsByte GameTraceChannel2; // 0xF(0x1)
		TEnumAsByte GameTraceChannel3; // 0x10(0x1)
		TEnumAsByte GameTraceChannel4; // 0x11(0x1)
		TEnumAsByte GameTraceChannel5; // 0x12(0x1)
		TEnumAsByte GameTraceChannel6; // 0x13(0x1)
		TEnumAsByte GameTraceChannel7; // 0x14(0x1)
		TEnumAsByte GameTraceChannel8; // 0x15(0x1)
		TEnumAsByte GameTraceChannel9; // 0x16(0x1)
		TEnumAsByte GameTraceChannel10; // 0x17(0x1)
		TEnumAsByte GameTraceChannel11; // 0x18(0x1)
		TEnumAsByte GameTraceChannel12; // 0x19(0x1)
		TEnumAsByte GameTraceChannel13; // 0x1A(0x1)
		TEnumAsByte GameTraceChannel14; // 0x1B(0x1)
		TEnumAsByte GameTraceChannel15; // 0x1C(0x1)
		TEnumAsByte GameTraceChannel16; // 0x1D(0x1)
		TEnumAsByte GameTraceChannel17; // 0x1E(0x1)
		TEnumAsByte GameTraceChannel18; // 0x1F(0x1)
	};


	// Struct Engine.CustomPrimitiveData
	// Size: 0x10 (0x10 - 0x0)
	struct FCustomPrimitiveData	
	{
	public:
		TArray Data; // 0x0(0x10)
	};


	// Struct Engine.LightingChannels
	// Size: 0x1 (0x1 - 0x0)
	struct FLightingChannels	
	{
	public:
		bool bChannel0 : 1; // 0x0:0(0x1)
		bool bChannel1 : 1; // 0x0:1(0x1)
		bool bChannel2 : 1; // 0x0:2(0x1)
	};


	// Struct Engine.HardwareDeviceIdentifier
	// Size: 0x10 (0x10 - 0x0)
	struct FHardwareDeviceIdentifier	
	{
	public:
		FName InputClassName; // 0x0(0x4)
		FName HardwareDeviceIdentifier; // 0x4(0x4)
		EHardwareDevicePrimaryType PrimaryDeviceType; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		int32_t SupportedFeaturesMask; // 0xC(0x4)
	};


	// Struct Engine.DataTableRowHandle
	// Size: 0x10 (0x10 - 0x0)
	struct FDataTableRowHandle	
	{
	public:
		UDataTable DataTable; // 0x0(0x8)
		FName RowName; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.CurveTableRowHandle
	// Size: 0x10 (0x10 - 0x0)
	struct FCurveTableRowHandle	
	{
	public:
		UCurveTable CurveTable; // 0x0(0x8)
		FName RowName; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.Vector_NetQuantize10
	// Inherited from FVector
	// Size: 0x0 (0x18 - 0x18)
	struct FVector_NetQuantize10 : public FVector	
	{
	public:
	};


	// Struct Engine.Vector_NetQuantize100
	// Inherited from FVector
	// Size: 0x0 (0x18 - 0x18)
	struct FVector_NetQuantize100 : public FVector	
	{
	public:
	};


	// Struct Engine.UniqueNetIdRepl
	// Inherited from FUniqueNetIdWrapper
	// Size: 0x2F (0x30 - 0x1)
	struct FUniqueNetIdRepl : public FUniqueNetIdWrapper	
	{
	public:
		unsigned char UnknownData01_3[0x1F]; // 0x1(0x1F) UNKNOWN PROPERTY
		TArray ReplicationBytes; // 0x20(0x10)
	};


	// Struct Engine.RepMovement
	// Size: 0x70 (0x70 - 0x0)
	struct FRepMovement	
	{
	public:
		FVector LinearVelocity; // 0x0(0x18)
		FVector AngularVelocity; // 0x18(0x18)
		FVector Location; // 0x30(0x18)
		FRotator Rotation; // 0x48(0x18)
		bool bSimulatedPhysicSleep : 1; // 0x60:0(0x1)
		bool bRepPhysics : 1; // 0x60:1(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x61(0x3) UNKNOWN PROPERTY
		int32_t ServerFrame; // 0x64(0x4)
		int32_t ServerPhysicsHandle; // 0x68(0x4)
		EVectorQuantization LocationQuantizationLevel; // 0x6C(0x1)
		EVectorQuantization VelocityQuantizationLevel; // 0x6D(0x1)
		ERotatorQuantization RotationQuantizationLevel; // 0x6E(0x1)
		unsigned char UnknownData03_7[0x1]; // 0x6F(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.RepAttachment
	// Size: 0x60 (0x60 - 0x0)
	struct FRepAttachment	
	{
	public:
		AActor AttachParent; // 0x0(0x8)
		FVector_NetQuantize100 LocationOffset; // 0x8(0x18)
		FVector_NetQuantize100 RelativeScale3D; // 0x20(0x18)
		FRotator RotationOffset; // 0x38(0x18)
		FName AttachSocket; // 0x50(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		USceneComponent AttachComponent; // 0x58(0x8)
	};


	// Struct Engine.ActorTickFunction
	// Inherited from FTickFunction
	// Size: 0x8 (0x30 - 0x28)
	struct FActorTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.TableRowBase
	// Size: 0x8 (0x8 - 0x0)
	struct FTableRowBase	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.NetLevelVisibilityTransactionId
	// Size: 0x4 (0x4 - 0x0)
	struct FNetLevelVisibilityTransactionId	
	{
	public:
		uint32_t Data; // 0x0(0x4)
	};


	// Struct Engine.AsyncPhysicsTimestamp
	// Size: 0x8 (0x8 - 0x0)
	struct FAsyncPhysicsTimestamp	
	{
	public:
		int32_t ServerFrame; // 0x0(0x4)
		int32_t LocalFrame; // 0x4(0x4)
	};


	// Struct Engine.ForceFeedbackParameters
	// Size: 0x8 (0x8 - 0x0)
	struct FForceFeedbackParameters	
	{
	public:
		FName tag; // 0x0(0x4)
		bool bLooping; // 0x4(0x1)
		bool bIgnoreTimeDilation; // 0x5(0x1)
		bool bPlayWhilePaused; // 0x6(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x7(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.ViewTargetTransitionParams
	// Size: 0x10 (0x10 - 0x0)
	struct FViewTargetTransitionParams	
	{
	public:
		float BlendTime; // 0x0(0x4)
		TEnumAsByte BlendFunction; // 0x4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float BlendExp; // 0x8(0x4)
		bool bLockOutgoing : 1; // 0xC:0(0x1)
		unsigned char UnknownData03_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.UpdateLevelStreamingLevelStatus
	// Size: 0xC (0xC - 0x0)
	struct FUpdateLevelStreamingLevelStatus	
	{
	public:
		FName PackageName; // 0x0(0x4)
		int32_t LODIndex; // 0x4(0x4)
		bool bNewShouldBeLoaded; // 0x8(0x1)
		bool bNewShouldBeVisible; // 0x9(0x1)
		bool bNewShouldBlockOnLoad; // 0xA(0x1)
		bool bNewShouldBlockOnUnload; // 0xB(0x1)
	};


	// Struct Engine.StreamingSourceShape
	// Size: 0x48 (0x48 - 0x0)
	struct FStreamingSourceShape	
	{
	public:
		bool bUseGridLoadingRange; // 0x0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float LoadingRangeScale; // 0x4(0x4)
		float Radius; // 0x8(0x4)
		bool bIsSector; // 0xC(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		float SectorAngle; // 0x10(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FVector Location; // 0x18(0x18)
		FRotator Rotation; // 0x30(0x18)
	};


	// Struct Engine.UpdateLevelVisibilityLevelInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FUpdateLevelVisibilityLevelInfo	
	{
	public:
		FName PackageName; // 0x0(0x4)
		FName Filename; // 0x4(0x4)
		FNetLevelVisibilityTransactionId VisibilityRequestId; // 0x8(0x4)
		bool bIsVisible : 1; // 0xC:0(0x1)
		bool bTryMakeVisible : 1; // 0xC:1(0x1)
		bool bSkipCloseOnError : 1; // 0xC:2(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.ActiveForceFeedbackEffect
	// Size: 0x70 (0x70 - 0x0)
	struct FActiveForceFeedbackEffect	
	{
	public:
		UForceFeedbackEffect ForceFeedbackEffect; // 0x0(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x8(0x18) UNKNOWN PROPERTY
		TSet ActiveDeviceProperties; // 0x20(0x50)
	};


	// Struct Engine.InputDevicePropertyHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FInputDevicePropertyHandle	
	{
	public:
		uint32_t InternalId; // 0x0(0x4)
	};


	// Struct Engine.RuntimeFloatCurve
	// Size: 0x88 (0x88 - 0x0)
	struct FRuntimeFloatCurve	
	{
	public:
		FRichCurve EditorCurveData; // 0x0(0x80)
		UCurveFloat ExternalCurve; // 0x80(0x8)
	};


	// Struct Engine.IndexedCurve
	// Size: 0x68 (0x68 - 0x0)
	struct FIndexedCurve	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FKeyHandleMap KeyHandlesToIndices; // 0x8(0x60)
	};


	// Struct Engine.KeyHandleMap
	// Size: 0x60 (0x60 - 0x0)
	struct FKeyHandleMap	
	{
	public:
		unsigned char UnknownData01_2[0x60]; // 0x0(0x60) UNKNOWN PROPERTY
	};


	// Struct Engine.RealCurve
	// Inherited from FIndexedCurve
	// Size: 0x8 (0x70 - 0x68)
	struct FRealCurve : public FIndexedCurve	
	{
	public:
		float DefaultValue; // 0x68(0x4)
		TEnumAsByte PreInfinityExtrap; // 0x6C(0x1)
		TEnumAsByte PostInfinityExtrap; // 0x6D(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x6E(0x2) UNKNOWN PROPERTY
	};


	// Struct Engine.RichCurve
	// Inherited from FRealCurve -> FIndexedCurve
	// Size: 0x10 (0x80 - 0x70)
	struct FRichCurve : public FRealCurve	
	{
	public:
		TArray Keys; // 0x70(0x10)
	};


	// Struct Engine.RichCurveKey
	// Size: 0x1C (0x1C - 0x0)
	struct FRichCurveKey	
	{
	public:
		TEnumAsByte InterpMode; // 0x0(0x1)
		TEnumAsByte TangentMode; // 0x1(0x1)
		TEnumAsByte TangentWeightMode; // 0x2(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		float Time; // 0x4(0x4)
		float Value; // 0x8(0x4)
		float ArriveTangent; // 0xC(0x4)
		float ArriveTangentWeight; // 0x10(0x4)
		float LeaveTangent; // 0x14(0x4)
		float LeaveTangentWeight; // 0x18(0x4)
	};


	// Struct Engine.MemberReference
	// Size: 0x30 (0x30 - 0x0)
	struct FMemberReference	
	{
	public:
		UObject MemberParent; // 0x0(0x8)
		FString MemberScope; // 0x8(0x10)
		FName MemberName; // 0x18(0x4)
		FGuid MemberGuid; // 0x1C(0x10)
		bool bSelfContext; // 0x2C(0x1)
		bool bWasDeprecated; // 0x2D(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x2E(0x2) UNKNOWN PROPERTY
	};


	// Struct Engine.SplinePoint
	// Size: 0x88 (0x88 - 0x0)
	struct FSplinePoint	
	{
	public:
		float InputKey; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Position; // 0x8(0x18)
		FVector ArriveTangent; // 0x20(0x18)
		FVector LeaveTangent; // 0x38(0x18)
		FRotator Rotation; // 0x50(0x18)
		FVector Scale; // 0x68(0x18)
		TEnumAsByte Type; // 0x80(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.MovementProperties
	// Size: 0x1 (0x1 - 0x0)
	struct FMovementProperties	
	{
	public:
		bool bCanCrouch : 1; // 0x0:0(0x1)
		bool bCanJump : 1; // 0x0:1(0x1)
		bool bCanWalk : 1; // 0x0:2(0x1)
		bool bCanSwim : 1; // 0x0:3(0x1)
		bool bCanFly : 1; // 0x0:4(0x1)
	};


	// Struct Engine.NavAgentProperties
	// Inherited from FMovementProperties
	// Size: 0x2F (0x30 - 0x1)
	struct FNavAgentProperties : public FMovementProperties	
	{
	public:
		unsigned char UnknownData02_3[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float AgentRadius; // 0x4(0x4)
		float AgentHeight; // 0x8(0x4)
		float AgentStepHeight; // 0xC(0x4)
		float NavWalkingSearchHeightScale; // 0x10(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FSoftClassPath PreferredNavData; // 0x18(0x18)
	};


	// Struct Engine.NavMovementProperties
	// Size: 0x8 (0x8 - 0x0)
	struct FNavMovementProperties	
	{
	public:
		float FixedPathBrakingDistance; // 0x0(0x4)
		bool bUpdateNavAgentWithOwnersCollision; // 0x4(0x1)
		bool bUseAccelerationForPaths; // 0x5(0x1)
		bool bUseFixedBrakingDistanceForPaths; // 0x6(0x1)
		bool bStopMovementAbortPaths; // 0x7(0x1)
	};


	// Struct Engine.FindFloorResult
	// Size: 0x108 (0x108 - 0x0)
	struct FFindFloorResult	
	{
	public:
		bool bBlockingHit : 1; // 0x0:0(0x1)
		bool bWalkableFloor : 1; // 0x0:1(0x1)
		bool bLineTrace : 1; // 0x0:2(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float FloorDist; // 0x4(0x4)
		float LineDist; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FHitResult HitResult; // 0x10(0xF8)
	};


	// Struct Engine.NavAvoidanceMask
	// Size: 0x4 (0x4 - 0x0)
	struct FNavAvoidanceMask	
	{
	public:
		bool bGroup0 : 1; // 0x0:0(0x1)
		bool bGroup1 : 1; // 0x0:1(0x1)
		bool bGroup2 : 1; // 0x0:2(0x1)
		bool bGroup3 : 1; // 0x0:3(0x1)
		bool bGroup4 : 1; // 0x0:4(0x1)
		bool bGroup5 : 1; // 0x0:5(0x1)
		bool bGroup6 : 1; // 0x0:6(0x1)
		bool bGroup7 : 1; // 0x0:7(0x1)
		bool bGroup8 : 1; // 0x1:0(0x1)
		bool bGroup9 : 1; // 0x1:1(0x1)
		bool bGroup10 : 1; // 0x1:2(0x1)
		bool bGroup11 : 1; // 0x1:3(0x1)
		bool bGroup12 : 1; // 0x1:4(0x1)
		bool bGroup13 : 1; // 0x1:5(0x1)
		bool bGroup14 : 1; // 0x1:6(0x1)
		bool bGroup15 : 1; // 0x1:7(0x1)
		bool bGroup16 : 1; // 0x2:0(0x1)
		bool bGroup17 : 1; // 0x2:1(0x1)
		bool bGroup18 : 1; // 0x2:2(0x1)
		bool bGroup19 : 1; // 0x2:3(0x1)
		bool bGroup20 : 1; // 0x2:4(0x1)
		bool bGroup21 : 1; // 0x2:5(0x1)
		bool bGroup22 : 1; // 0x2:6(0x1)
		bool bGroup23 : 1; // 0x2:7(0x1)
		bool bGroup24 : 1; // 0x3:0(0x1)
		bool bGroup25 : 1; // 0x3:1(0x1)
		bool bGroup26 : 1; // 0x3:2(0x1)
		bool bGroup27 : 1; // 0x3:3(0x1)
		bool bGroup28 : 1; // 0x3:4(0x1)
		bool bGroup29 : 1; // 0x3:5(0x1)
		bool bGroup30 : 1; // 0x3:6(0x1)
		bool bGroup31 : 1; // 0x3:7(0x1)
	};


	// Struct Engine.RootMotionMovementParams
	// Size: 0x70 (0x70 - 0x0)
	struct FRootMotionMovementParams	
	{
	public:
		bool bHasRootMotion; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float BlendWeight; // 0x4(0x4)
		unsigned char UnknownData03_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform RootMotionTransform; // 0x10(0x60)
	};


	// Struct Engine.RootMotionSourceGroup
	// Size: 0x48 (0x48 - 0x0)
	struct FRootMotionSourceGroup	
	{
	public:
		unsigned char UnknownData02_7[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
		bool bHasAdditiveSources : 1; // 0x28:0(0x1)
		bool bHasOverrideSources : 1; // 0x28:1(0x1)
		bool bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28:2(0x1)
		bool bIsAdditiveVelocityApplied : 1; // 0x28:3(0x1)
		FRootMotionSourceSettings LastAccumulatedSettings; // 0x29(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
		FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x30(0x18)
	};


	// Struct Engine.RootMotionSourceSettings
	// Size: 0x1 (0x1 - 0x0)
	struct FRootMotionSourceSettings	
	{
	public:
		char Flags; // 0x0(0x1)
	};


	// Struct Engine.CharacterMovementComponentPostPhysicsTickFunction
	// Inherited from FTickFunction
	// Size: 0x8 (0x30 - 0x28)
	struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.GeomSelection
	// Size: 0xC (0xC - 0x0)
	struct FGeomSelection	
	{
	public:
		unsigned char UnknownData01_2[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};


	// Struct Engine.WeightedBlendable
	// Size: 0x10 (0x10 - 0x0)
	struct FWeightedBlendable	
	{
	public:
		float Weight; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UObject Object; // 0x8(0x8)
	};


	// Struct Engine.LightmassPrimitiveSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FLightmassPrimitiveSettings	
	{
	public:
		bool bUseTwoSidedLighting : 1; // 0x0:0(0x1)
		bool bShadowIndirectOnly : 1; // 0x0:1(0x1)
		bool bUseEmissiveForStaticLighting : 1; // 0x0:2(0x1)
		bool bUseVertexNormalForHemisphereGather : 1; // 0x0:3(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float EmissiveLightFalloffExponent; // 0x4(0x4)
		float EmissiveLightExplicitInfluenceRadius; // 0x8(0x4)
		float EmissiveBoost; // 0xC(0x4)
		float DiffuseBoost; // 0x10(0x4)
		float FullyOccludedSamplesFraction; // 0x14(0x4)
	};


	// Struct Engine.StreamingTextureBuildInfo
	// Size: 0xC (0xC - 0x0)
	struct FStreamingTextureBuildInfo	
	{
	public:
		uint32_t PackedRelativeBox; // 0x0(0x4)
		int32_t TextureLevelIndex; // 0x4(0x4)
		float TexelFactor; // 0x8(0x4)
	};


	// Struct Engine.StaticMeshComponentLODInfo
	// Size: 0xA0 (0xA0 - 0x0)
	struct FStaticMeshComponentLODInfo	
	{
	public:
		unsigned char UnknownData01_2[0xA0]; // 0x0(0xA0) UNKNOWN PROPERTY
	};


	// Struct Engine.PerQualityLevelInt
	// Size: 0x68 (0x68 - 0x0)
	struct FPerQualityLevelInt	
	{
	public:
		unsigned char UnknownData02_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		int32_t Default; // 0x10(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TMap PerQuality; // 0x18(0x50)
	};


	// Struct Engine.PerQualityLevelFloat
	// Size: 0x68 (0x68 - 0x0)
	struct FPerQualityLevelFloat	
	{
	public:
		unsigned char UnknownData02_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		float Default; // 0x10(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TMap PerQuality; // 0x18(0x50)
	};


	// Struct Engine.KeyHandleLookupTable
	// Size: 0x88 (0x88 - 0x0)
	struct FKeyHandleLookupTable	
	{
	public:
		unsigned char UnknownData01_2[0x88]; // 0x0(0x88) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNode_Base
	// Size: 0x10 (0x10 - 0x0)
	struct FAnimNode_Base	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.PoseLinkBase
	// Size: 0x10 (0x10 - 0x0)
	struct FPoseLinkBase	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		int32_t LinkId; // 0x8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.PoseLink
	// Inherited from FPoseLinkBase
	// Size: 0x0 (0x10 - 0x10)
	struct FPoseLink : public FPoseLinkBase	
	{
	public:
	};


	// Struct Engine.AnimNode_Root
	// Inherited from FAnimNode_Base
	// Size: 0x10 (0x20 - 0x10)
	struct FAnimNode_Root : public FAnimNode_Base	
	{
	public:
		FPoseLink Result; // 0x10(0x10)
	};


	// Struct Engine.InputScaleBiasClamp
	// Size: 0x30 (0x30 - 0x0)
	struct FInputScaleBiasClamp	
	{
	public:
		bool bMapRange; // 0x0(0x1)
		bool bClampResult; // 0x1(0x1)
		bool bInterpResult; // 0x2(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		FInputRange InRange; // 0x4(0x8)
		FInputRange OutRange; // 0xC(0x8)
		float Scale; // 0x14(0x4)
		float Bias; // 0x18(0x4)
		float ClampMin; // 0x1C(0x4)
		float ClampMax; // 0x20(0x4)
		float InterpSpeedIncreasing; // 0x24(0x4)
		float InterpSpeedDecreasing; // 0x28(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.InputRange
	// Size: 0x8 (0x8 - 0x0)
	struct FInputRange	
	{
	public:
		float Min; // 0x0(0x4)
		float Max; // 0x4(0x4)
	};


	// Struct Engine.InputAlphaBoolBlend
	// Size: 0x48 (0x48 - 0x0)
	struct FInputAlphaBoolBlend	
	{
	public:
		float BlendInTime; // 0x0(0x4)
		float BlendOutTime; // 0x4(0x4)
		EAlphaBlendOption BlendOption; // 0x8(0x1)
		bool bInitialized; // 0x9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
		UCurveFloat CustomCurve; // 0x10(0x8)
		FAlphaBlend AlphaBlend; // 0x18(0x30)
	};


	// Struct Engine.AlphaBlend
	// Size: 0x30 (0x30 - 0x0)
	struct FAlphaBlend	
	{
	public:
		UCurveFloat CustomCurve; // 0x0(0x8)
		float BlendTime; // 0x8(0x4)
		unsigned char UnknownData02_6[0x18]; // 0xC(0x18) UNKNOWN PROPERTY
		EAlphaBlendOption BlendOption; // 0x24(0x1)
		unsigned char UnknownData03_7[0xB]; // 0x25(0xB) UNKNOWN PROPERTY
	};


	// Struct Engine.InputScaleBias
	// Size: 0x8 (0x8 - 0x0)
	struct FInputScaleBias	
	{
	public:
		float Scale; // 0x0(0x4)
		float Bias; // 0x4(0x4)
	};


	// Struct Engine.ComponentSpacePoseLink
	// Inherited from FPoseLinkBase
	// Size: 0x0 (0x10 - 0x10)
	struct FComponentSpacePoseLink : public FPoseLinkBase	
	{
	public:
	};


	// Struct Engine.BoneReference
	// Size: 0xC (0xC - 0x0)
	struct FBoneReference	
	{
	public:
		FName BoneName; // 0x0(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x4(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNodeReference
	// Size: 0x10 (0x10 - 0x0)
	struct FAnimNodeReference	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNode_AssetPlayerRelevancyBase
	// Inherited from FAnimNode_Base
	// Size: 0x0 (0x10 - 0x10)
	struct FAnimNode_AssetPlayerRelevancyBase : public FAnimNode_Base	
	{
	public:
	};


	// Struct Engine.AnimNode_AssetPlayerBase
	// Inherited from FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x28 (0x38 - 0x10)
	struct FAnimNode_AssetPlayerBase : public FAnimNode_AssetPlayerRelevancyBase	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
		float BlendWeight; // 0x20(0x4)
		float InternalTimeAccumulator; // 0x24(0x4)
		unsigned char UnknownData03_7[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.PerBoneBlendWeight
	// Size: 0x8 (0x8 - 0x0)
	struct FPerBoneBlendWeight	
	{
	public:
		int32_t SourceIndex; // 0x0(0x4)
		float BlendWeight; // 0x4(0x4)
	};


	// Struct Engine.InputBlendPose
	// Size: 0x10 (0x10 - 0x0)
	struct FInputBlendPose	
	{
	public:
		TArray BranchFilters; // 0x0(0x10)
	};


	// Struct Engine.BranchFilter
	// Size: 0x8 (0x8 - 0x0)
	struct FBranchFilter	
	{
	public:
		FName BoneName; // 0x0(0x4)
		int32_t BlendDepth; // 0x4(0x4)
	};


	// Struct Engine.PoseSnapshot
	// Size: 0x30 (0x30 - 0x0)
	struct FPoseSnapshot	
	{
	public:
		TArray LocalTransforms; // 0x0(0x10)
		TArray BoneNames; // 0x10(0x10)
		FName SkeletalMeshName; // 0x20(0x4)
		FName SnapshotName; // 0x24(0x4)
		bool bIsValid; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimInstanceProxy
	// Size: 0x7A0 (0x7A0 - 0x0)
	struct FAnimInstanceProxy	
	{
	public:
		unsigned char UnknownData02_7[0x6D0]; // 0x0(0x6D0) UNKNOWN PROPERTY
		TMap SlotGroupInertializationRequestDataMap; // 0x6D0(0x50)
		unsigned char UnknownData03_7[0x78]; // 0x720(0x78) UNKNOWN PROPERTY
	};


	// Struct Engine.InertializationRequest
	// Size: 0x50 (0x50 - 0x0)
	struct FInertializationRequest	
	{
	public:
		float duration; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UBlendProfile BlendProfile; // 0x8(0x8)
		bool bUseBlendMode; // 0x10(0x1)
		EAlphaBlendOption BlendMode; // 0x11(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
		UCurveFloat CustomBlendCurve; // 0x18(0x8)
		FText Description; // 0x20(0x10)
		FString DescriptionString; // 0x30(0x10)
		int32_t NodeId; // 0x40(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		UObject AnimInstance; // 0x48(0x8)
	};


	// Struct Engine.BoneSocketTarget
	// Size: 0x80 (0x80 - 0x0)
	struct FBoneSocketTarget	
	{
	public:
		bool bUseSocket; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FBoneReference BoneReference; // 0x4(0xC)
		FSocketReference SocketReference; // 0x10(0x70)
	};


	// Struct Engine.SocketReference
	// Size: 0x70 (0x70 - 0x0)
	struct FSocketReference	
	{
	public:
		unsigned char UnknownData02_7[0x60]; // 0x0(0x60) UNKNOWN PROPERTY
		FName SocketName; // 0x60(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x64(0xC) UNKNOWN PROPERTY
	};


	// Struct Engine.MaterialParameterInfo
	// Size: 0xC (0xC - 0x0)
	struct FMaterialParameterInfo	
	{
	public:
		FName Name; // 0x0(0x4)
		TEnumAsByte Association; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		int32_t Index; // 0x8(0x4)
	};


	// Struct Engine.InstanceCacheDataBase
	// Size: 0x58 (0x58 - 0x0)
	struct FInstanceCacheDataBase	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TArray SavedProperties; // 0x8(0x10)
		FDataCacheDuplicatedObjectData UniqueTransientPackage; // 0x18(0x10)
		TArray DuplicatedObjects; // 0x28(0x10)
		TArray ReferencedObjects; // 0x38(0x10)
		TArray ReferencedNames; // 0x48(0x10)
	};


	// Struct Engine.DataCacheDuplicatedObjectData
	// Size: 0x10 (0x10 - 0x0)
	struct FDataCacheDuplicatedObjectData	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.ActorComponentInstanceData
	// Inherited from FInstanceCacheDataBase
	// Size: 0x10 (0x68 - 0x58)
	struct FActorComponentInstanceData : public FInstanceCacheDataBase	
	{
	public:
		UObject SourceComponentTemplate; // 0x58(0x8)
		EComponentCreationMethod SourceComponentCreationMethod; // 0x60(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x61(0x3) UNKNOWN PROPERTY
		int32_t SourceComponentTypeSerializedIndex; // 0x64(0x4)
	};


	// Struct Engine.SceneComponentInstanceData
	// Inherited from FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0x50 (0xB8 - 0x68)
	struct FSceneComponentInstanceData : public FActorComponentInstanceData	
	{
	public:
		TMap AttachedInstanceComponents; // 0x68(0x50)
	};


	// Struct Engine.WorldPartitionResolveData
	// Size: 0x18 (0x18 - 0x0)
	struct FWorldPartitionResolveData	
	{
	public:
		FActorContainerID ContainerID; // 0x0(0x10)
		FTopLevelAssetPath SourceWorldAssetPath; // 0x10(0x8)
	};


	// Struct Engine.ActorContainerID
	// Size: 0x10 (0x10 - 0x0)
	struct FActorContainerID	
	{
	public:
		FGuid Guid; // 0x0(0x10)
	};


	// Struct Engine.ActorDataLayer
	// Size: 0x4 (0x4 - 0x0)
	struct FActorDataLayer	
	{
	public:
		FName Name; // 0x0(0x4)
	};


	// Struct Engine.ActorLocatorFragmentResolveParameter
	// Size: 0x20 (0x20 - 0x0)
	struct FActorLocatorFragmentResolveParameter	
	{
	public:
		UWorld StreamingWorld; // 0x0(0x8)
		FActorContainerID ContainerID; // 0x8(0x10)
		FTopLevelAssetPath SourceAssetPath; // 0x18(0x8)
	};


	// Struct Engine.ActorLocatorFragment
	// Size: 0x18 (0x18 - 0x0)
	struct FActorLocatorFragment	
	{
	public:
		FSoftObjectPath Path; // 0x0(0x18)
	};


	// Struct Engine.KAggregateGeom
	// Size: 0x80 (0x80 - 0x0)
	struct FKAggregateGeom	
	{
	public:
		TArray SphereElems; // 0x0(0x10)
		TArray BoxElems; // 0x10(0x10)
		TArray SphylElems; // 0x20(0x10)
		TArray ConvexElems; // 0x30(0x10)
		TArray TaperedCapsuleElems; // 0x40(0x10)
		TArray LevelSetElems; // 0x50(0x10)
		TArray SkinnedLevelSetElems; // 0x60(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x70(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.KShapeElem
	// Size: 0x28 (0x28 - 0x0)
	struct FKShapeElem	
	{
	public:
		unsigned char UnknownData03_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		float RestOffset; // 0x8(0x4)
		FName Name; // 0xC(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x10(0x4) UNKNOWN PROPERTY
		bool bContributeToMass : 1; // 0x14:0(0x1)
		TEnumAsByte CollisionEnabled; // 0x15(0x1)
		unsigned char UnknownData05_7[0x12]; // 0x16(0x12) UNKNOWN PROPERTY
	};


	// Struct Engine.KSkinnedLevelSetElem
	// Inherited from FKShapeElem
	// Size: 0x8 (0x30 - 0x28)
	struct FKSkinnedLevelSetElem : public FKShapeElem	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.KLevelSetElem
	// Inherited from FKShapeElem
	// Size: 0x78 (0xA0 - 0x28)
	struct FKLevelSetElem : public FKShapeElem	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x30(0x60)
		unsigned char UnknownData03_7[0x10]; // 0x90(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.KTaperedCapsuleElem
	// Inherited from FKShapeElem
	// Size: 0x40 (0x68 - 0x28)
	struct FKTaperedCapsuleElem : public FKShapeElem	
	{
	public:
		FVector Center; // 0x28(0x18)
		FRotator Rotation; // 0x40(0x18)
		float Radius0; // 0x58(0x4)
		float Radius1; // 0x5C(0x4)
		float Length; // 0x60(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.KConvexElem
	// Inherited from FKShapeElem
	// Size: 0xC8 (0xF0 - 0x28)
	struct FKConvexElem : public FKShapeElem	
	{
	public:
		TArray VertexData; // 0x28(0x10)
		TArray IndexData; // 0x38(0x10)
		FBox ElemBox; // 0x48(0x38)
		FTransform Transform; // 0x80(0x60)
		unsigned char UnknownData01_7[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.KSphylElem
	// Inherited from FKShapeElem
	// Size: 0x38 (0x60 - 0x28)
	struct FKSphylElem : public FKShapeElem	
	{
	public:
		FVector Center; // 0x28(0x18)
		FRotator Rotation; // 0x40(0x18)
		float Radius; // 0x58(0x4)
		float Length; // 0x5C(0x4)
	};


	// Struct Engine.KBoxElem
	// Inherited from FKShapeElem
	// Size: 0x40 (0x68 - 0x28)
	struct FKBoxElem : public FKShapeElem	
	{
	public:
		FVector Center; // 0x28(0x18)
		FRotator Rotation; // 0x40(0x18)
		float X; // 0x58(0x4)
		float Y; // 0x5C(0x4)
		float Z; // 0x60(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.KSphereElem
	// Inherited from FKShapeElem
	// Size: 0x20 (0x48 - 0x28)
	struct FKSphereElem : public FKShapeElem	
	{
	public:
		FVector Center; // 0x28(0x18)
		float Radius; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.NamedFloat
	// Size: 0x8 (0x8 - 0x0)
	struct FNamedFloat	
	{
	public:
		float Value; // 0x0(0x4)
		FName Name; // 0x4(0x4)
	};


	// Struct Engine.NamedVector
	// Size: 0x20 (0x20 - 0x0)
	struct FNamedVector	
	{
	public:
		FVector Value; // 0x0(0x18)
		FName Name; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.NamedColor
	// Size: 0x8 (0x8 - 0x0)
	struct FNamedColor	
	{
	public:
		FColor Value; // 0x0(0x4)
		FName Name; // 0x4(0x4)
	};


	// Struct Engine.NamedTransform
	// Size: 0x70 (0x70 - 0x0)
	struct FNamedTransform	
	{
	public:
		FTransform Value; // 0x0(0x60)
		FName Name; // 0x60(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x64(0xC) UNKNOWN PROPERTY
	};


	// Struct Engine.LocalSpacePose
	// Size: 0x20 (0x20 - 0x0)
	struct FLocalSpacePose	
	{
	public:
		TArray Transforms; // 0x0(0x10)
		TArray Names; // 0x10(0x10)
	};


	// Struct Engine.ComponentSpacePose
	// Size: 0x20 (0x20 - 0x0)
	struct FComponentSpacePose	
	{
	public:
		TArray Transforms; // 0x0(0x10)
		TArray Names; // 0x10(0x10)
	};


	// Struct Engine.AnimationErrorStats
	// Size: 0x10 (0x10 - 0x0)
	struct FAnimationErrorStats	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimCompressedCurveIndexedName
	// Size: 0x8 (0x8 - 0x0)
	struct FAnimCompressedCurveIndexedName	
	{
	public:
		FName CurveName; // 0x0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimCurveType
	// Size: 0x2 (0x2 - 0x0)
	struct FAnimCurveType	
	{
	public:
		bool bMaterial; // 0x0(0x1)
		bool bMorphtarget; // 0x1(0x1)
	};


	// Struct Engine.CurveMetaData
	// Size: 0x18 (0x18 - 0x0)
	struct FCurveMetaData	
	{
	public:
		TArray LinkedBones; // 0x0(0x10)
		char MaxLOD; // 0x10(0x1)
		FAnimCurveType Type; // 0x11(0x2)
		unsigned char UnknownData01_7[0x5]; // 0x13(0x5) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimCurveParam
	// Size: 0x8 (0x8 - 0x0)
	struct FAnimCurveParam	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimCurveBase
	// Size: 0x8 (0x8 - 0x0)
	struct FAnimCurveBase	
	{
	public:
		FName CurveName; // 0x0(0x4)
		int32_t CurveTypeFlags; // 0x4(0x4)
	};


	// Struct Engine.FloatCurve
	// Inherited from FAnimCurveBase
	// Size: 0x80 (0x88 - 0x8)
	struct FFloatCurve : public FAnimCurveBase	
	{
	public:
		FRichCurve FloatCurve; // 0x8(0x80)
	};


	// Struct Engine.VectorCurve
	// Inherited from FAnimCurveBase
	// Size: 0x180 (0x188 - 0x8)
	struct FVectorCurve : public FAnimCurveBase	
	{
	public:
		FRichCurve FloatCurves; // 0x8(0x180)
	};


	// Struct Engine.TransformCurve
	// Inherited from FAnimCurveBase
	// Size: 0x498 (0x4A0 - 0x8)
	struct FTransformCurve : public FAnimCurveBase	
	{
	public:
		FVectorCurve TranslationCurve; // 0x8(0x188)
		FVectorCurve RotationCurve; // 0x190(0x188)
		FVectorCurve ScaleCurve; // 0x318(0x188)
	};


	// Struct Engine.CachedFloatCurve
	// Size: 0x4 (0x4 - 0x0)
	struct FCachedFloatCurve	
	{
	public:
		FName CurveName; // 0x0(0x4)
	};


	// Struct Engine.RawCurveTracks
	// Size: 0x10 (0x10 - 0x0)
	struct FRawCurveTracks	
	{
	public:
		TArray FloatCurves; // 0x0(0x10)
	};


	// Struct Engine.EmptyPayload
	// Size: 0x1 (0x1 - 0x0)
	struct FEmptyPayload	
	{
	public:
	};


	// Struct Engine.BracketPayload
	// Inherited from FEmptyPayload
	// Size: 0x10 (0x10 - 0x0)
	struct FBracketPayload : public FEmptyPayload	
	{
	public:
		FString Description; // 0x0(0x10)
	};


	// Struct Engine.AnimationTrackPayload
	// Inherited from FEmptyPayload
	// Size: 0x4 (0x4 - 0x0)
	struct FAnimationTrackPayload : public FEmptyPayload	
	{
	public:
		FName Name; // 0x0(0x4)
	};


	// Struct Engine.AnimationTrackAddedPayload
	// Inherited from FAnimationTrackPayload -> FEmptyPayload
	// Size: 0x4 (0x8 - 0x4)
	struct FAnimationTrackAddedPayload : public FAnimationTrackPayload	
	{
	public:
		int32_t TrackIndex; // 0x4(0x4)
	};


	// Struct Engine.SequenceLengthChangedPayload
	// Inherited from FEmptyPayload
	// Size: 0x18 (0x18 - 0x0)
	struct FSequenceLengthChangedPayload : public FEmptyPayload	
	{
	public:
		float PreviousLength; // 0x0(0x4)
		float T0; // 0x4(0x4)
		float T1; // 0x8(0x4)
		FFrameNumber PreviousNumberOfFrames; // 0xC(0x4)
		FFrameNumber Frame0; // 0x10(0x4)
		FFrameNumber Frame1; // 0x14(0x4)
	};


	// Struct Engine.FrameRateChangedPayload
	// Inherited from FEmptyPayload
	// Size: 0x8 (0x8 - 0x0)
	struct FFrameRateChangedPayload : public FEmptyPayload	
	{
	public:
		FFrameRate PreviousFrameRate; // 0x0(0x8)
	};


	// Struct Engine.CurvePayload
	// Inherited from FEmptyPayload
	// Size: 0x8 (0x8 - 0x0)
	struct FCurvePayload : public FEmptyPayload	
	{
	public:
		FAnimationCurveIdentifier Identifier; // 0x0(0x8)
	};


	// Struct Engine.AnimationCurveIdentifier
	// Size: 0x8 (0x8 - 0x0)
	struct FAnimationCurveIdentifier	
	{
	public:
		FName CurveName; // 0x0(0x4)
		ERawCurveTrackTypes CurveType; // 0x4(0x1)
		ETransformCurveChannel Channel; // 0x5(0x1)
		EVectorCurveChannel Axis; // 0x6(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x7(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.CurveScaledPayload
	// Inherited from FCurvePayload -> FEmptyPayload
	// Size: 0x8 (0x10 - 0x8)
	struct FCurveScaledPayload : public FCurvePayload	
	{
	public:
		float Factor; // 0x8(0x4)
		float Origin; // 0xC(0x4)
	};


	// Struct Engine.CurveRenamedPayload
	// Inherited from FCurvePayload -> FEmptyPayload
	// Size: 0x8 (0x10 - 0x8)
	struct FCurveRenamedPayload : public FCurvePayload	
	{
	public:
		FAnimationCurveIdentifier NewIdentifier; // 0x8(0x8)
	};


	// Struct Engine.CurveFlagsChangedPayload
	// Inherited from FCurvePayload -> FEmptyPayload
	// Size: 0x4 (0xC - 0x8)
	struct FCurveFlagsChangedPayload : public FCurvePayload	
	{
	public:
		int32_t OldFlags; // 0x8(0x4)
	};


	// Struct Engine.AttributePayload
	// Inherited from FEmptyPayload
	// Size: 0x30 (0x30 - 0x0)
	struct FAttributePayload : public FEmptyPayload	
	{
	public:
		FAnimationAttributeIdentifier Identifier; // 0x0(0x30)
	};


	// Struct Engine.AnimationAttributeIdentifier
	// Size: 0x30 (0x30 - 0x0)
	struct FAnimationAttributeIdentifier	
	{
	public:
		FName Name; // 0x0(0x4)
		FName BoneName; // 0x4(0x4)
		int32_t BoneIndex; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UScriptStruct ScriptStruct; // 0x10(0x8)
		FSoftObjectPath ScriptStructPath; // 0x18(0x18)
	};


	// Struct Engine.AnimInstanceLocatorFragment
	// Size: 0x4 (0x4 - 0x0)
	struct FAnimInstanceLocatorFragment	
	{
	public:
		EAnimInstanceLocatorFragmentType Type; // 0x0(0x4)
	};


	// Struct Engine.AnimNodeConstantData
	// Size: 0x18 (0x18 - 0x0)
	struct FAnimNodeConstantData	
	{
	public:
		TScriptInterface AnimClassInterface; // 0x0(0x10)
		int32_t NodeIndex; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.SlotEvaluationPose
	// Size: 0x80 (0x80 - 0x0)
	struct FSlotEvaluationPose	
	{
	public:
		TEnumAsByte AdditiveType; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Weight; // 0x4(0x4)
		unsigned char UnknownData03_7[0x78]; // 0x8(0x78) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimSubsystem
	// Size: 0x8 (0x8 - 0x0)
	struct FAnimSubsystem	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimSubsystemInstance
	// Size: 0x8 (0x8 - 0x0)
	struct FAnimSubsystemInstance	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimSubsystem_BlendSpaceGraph
	// Inherited from FAnimSubsystem
	// Size: 0x10 (0x18 - 0x8)
	struct FAnimSubsystem_BlendSpaceGraph : public FAnimSubsystem	
	{
	public:
		TArray BlendSpaces; // 0x8(0x10)
	};


	// Struct Engine.PerBoneBlendWeights
	// Size: 0x10 (0x10 - 0x0)
	struct FPerBoneBlendWeights	
	{
	public:
		TArray BoneBlendWeights; // 0x0(0x10)
	};


	// Struct Engine.AnimLinkableElement
	// Size: 0x30 (0x30 - 0x0)
	struct FAnimLinkableElement	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		UAnimMontage LinkedMontage; // 0x8(0x8)
		int32_t SlotIndex; // 0x10(0x4)
		int32_t SegmentIndex; // 0x14(0x4)
		TEnumAsByte LinkMethod; // 0x18(0x1)
		TEnumAsByte CachedLinkMethod; // 0x19(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
		float SegmentBeginTime; // 0x1C(0x4)
		float SegmentLength; // 0x20(0x4)
		float LinkValue; // 0x24(0x4)
		UAnimSequenceBase LinkedSequence; // 0x28(0x8)
	};


	// Struct Engine.AnimNotifyEvent
	// Inherited from FAnimLinkableElement
	// Size: 0x78 (0xA8 - 0x30)
	struct FAnimNotifyEvent : public FAnimLinkableElement	
	{
	public:
		float TriggerTimeOffset; // 0x30(0x4)
		float EndTriggerTimeOffset; // 0x34(0x4)
		float TriggerWeightThreshold; // 0x38(0x4)
		FName NotifyName; // 0x3C(0x4)
		UAnimNotify Notify; // 0x40(0x8)
		UAnimNotifyState NotifyStateClass; // 0x48(0x8)
		float duration; // 0x50(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FAnimLinkableElement EndLink; // 0x58(0x30)
		bool bConvertedFromBranchingPoint; // 0x88(0x1)
		TEnumAsByte MontageTickType; // 0x89(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x8A(0x2) UNKNOWN PROPERTY
		float NotifyTriggerChance; // 0x8C(0x4)
		TEnumAsByte NotifyFilterType; // 0x90(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x91(0x3) UNKNOWN PROPERTY
		int32_t NotifyFilterLOD; // 0x94(0x4)
		bool bCanBeFilteredViaRequest; // 0x98(0x1)
		bool bTriggerOnDedicatedServer; // 0x99(0x1)
		bool bTriggerOnFollower; // 0x9A(0x1)
		unsigned char UnknownData08_6[0x1]; // 0x9B(0x1) UNKNOWN PROPERTY
		int32_t TrackIndex; // 0x9C(0x4)
		unsigned char UnknownData09_7[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimSyncMarker
	// Size: 0x8 (0x8 - 0x0)
	struct FAnimSyncMarker	
	{
	public:
		FName MarkerName; // 0x0(0x4)
		float Time; // 0x4(0x4)
	};


	// Struct Engine.AnimNotifyTrack
	// Size: 0x38 (0x38 - 0x0)
	struct FAnimNotifyTrack	
	{
	public:
		FName TrackName; // 0x0(0x4)
		FLinearColor TrackColor; // 0x4(0x10)
		unsigned char UnknownData01_7[0x24]; // 0x14(0x24) UNKNOWN PROPERTY
	};


	// Struct Engine.MarkerSyncData
	// Size: 0x20 (0x20 - 0x0)
	struct FMarkerSyncData	
	{
	public:
		TArray AuthoredSyncMarkers; // 0x0(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.TrackToSkeletonMap
	// Size: 0x4 (0x4 - 0x0)
	struct FTrackToSkeletonMap	
	{
	public:
		int32_t BoneTreeIndex; // 0x0(0x4)
	};


	// Struct Engine.RawAnimSequenceTrack
	// Size: 0x30 (0x30 - 0x0)
	struct FRawAnimSequenceTrack	
	{
	public:
		TArray PosKeys; // 0x0(0x10)
		TArray RotKeys; // 0x10(0x10)
		TArray ScaleKeys; // 0x20(0x10)
	};


	// Struct Engine.AssetLocatorFragment
	// Size: 0x8 (0x8 - 0x0)
	struct FAssetLocatorFragment	
	{
	public:
		FTopLevelAssetPath Path; // 0x0(0x8)
	};


	// Struct Engine.AssetManagerRedirect
	// Size: 0x20 (0x20 - 0x0)
	struct FAssetManagerRedirect	
	{
	public:
		FString Old; // 0x0(0x10)
		FString New; // 0x10(0x10)
	};


	// Struct Engine.PrimaryAssetRulesOverride
	// Size: 0x14 (0x14 - 0x0)
	struct FPrimaryAssetRulesOverride	
	{
	public:
		FPrimaryAssetId PrimaryAssetId; // 0x0(0x8)
		FPrimaryAssetRules Rules; // 0x8(0xC)
	};


	// Struct Engine.PrimaryAssetRules
	// Size: 0xC (0xC - 0x0)
	struct FPrimaryAssetRules	
	{
	public:
		int32_t Priority; // 0x0(0x4)
		int32_t ChunkId; // 0x4(0x4)
		bool bApplyRecursively; // 0x8(0x1)
		EPrimaryAssetCookRule CookRule; // 0x9(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
	};


	// Struct Engine.PrimaryAssetRulesCustomOverride
	// Size: 0x38 (0x38 - 0x0)
	struct FPrimaryAssetRulesCustomOverride	
	{
	public:
		FPrimaryAssetType PrimaryAssetType; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FDirectoryPath FilterDirectory; // 0x8(0x10)
		FString FilterString; // 0x18(0x10)
		FPrimaryAssetRules Rules; // 0x28(0xC)
		unsigned char UnknownData03_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.BlendSpaceBlendProfile
	// Size: 0x10 (0x10 - 0x0)
	struct FBlendSpaceBlendProfile	
	{
	public:
		UBlendProfile BlendProfile; // 0x0(0x8)
		float TargetWeightInterpolationSpeedPerSec; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.InterpolationParameter
	// Size: 0x10 (0x10 - 0x0)
	struct FInterpolationParameter	
	{
	public:
		float InterpolationTime; // 0x0(0x4)
		float DampingRatio; // 0x4(0x4)
		float MaxSpeed; // 0x8(0x4)
		TEnumAsByte InterpolationType; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.BlendParameter
	// Size: 0x20 (0x20 - 0x0)
	struct FBlendParameter	
	{
	public:
		FString DisplayName; // 0x0(0x10)
		float Min; // 0x10(0x4)
		float Max; // 0x14(0x4)
		int32_t GridNum; // 0x18(0x4)
		bool bSnapToGrid; // 0x1C(0x1)
		bool bWrapInput; // 0x1D(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x1E(0x2) UNKNOWN PROPERTY
	};


	// Struct Engine.BlendSample
	// Size: 0x28 (0x28 - 0x0)
	struct FBlendSample	
	{
	public:
		UAnimSequence Animation; // 0x0(0x8)
		FVector SampleValue; // 0x8(0x18)
		float RateScale; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.BlendSpaceSegment
	// Size: 0x10 (0x10 - 0x0)
	struct FBlendSpaceSegment	
	{
	public:
		int32_t SampleIndices; // 0x0(0x8)
		float Vertices; // 0x8(0x8)
	};


	// Struct Engine.BlendSpaceTriangleEdgeInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FBlendSpaceTriangleEdgeInfo	
	{
	public:
		FVector2D Normal; // 0x0(0x10)
		int32_t NeighbourTriangleIndex; // 0x10(0x4)
		int32_t AdjacentPerimeterTriangleIndices; // 0x14(0x8)
		int32_t AdjacentPerimeterVertexIndices; // 0x1C(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.BlendSpaceTriangle
	// Size: 0xB8 (0xB8 - 0x0)
	struct FBlendSpaceTriangle	
	{
	public:
		int32_t SampleIndices; // 0x0(0xC)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector2D Vertices; // 0x10(0x30)
		FBlendSpaceTriangleEdgeInfo EdgeInfo; // 0x40(0x78)
	};


	// Struct Engine.WeightedBlendSample
	// Size: 0x8 (0x8 - 0x0)
	struct FWeightedBlendSample	
	{
	public:
		int32_t SampleIndex; // 0x0(0x4)
		float SampleWeight; // 0x4(0x4)
	};


	// Struct Engine.BlendSpaceData
	// Size: 0x20 (0x20 - 0x0)
	struct FBlendSpaceData	
	{
	public:
		TArray Segments; // 0x0(0x10)
		TArray Triangles; // 0x10(0x10)
	};


	// Struct Engine.EditorElement
	// Size: 0x18 (0x18 - 0x0)
	struct FEditorElement	
	{
	public:
		int32_t Indices; // 0x0(0xC)
		float Weights; // 0xC(0xC)
	};


	// Struct Engine.GridBlendSample
	// Size: 0x1C (0x1C - 0x0)
	struct FGridBlendSample	
	{
	public:
		FEditorElement GridElement; // 0x0(0x18)
		float BlendWeight; // 0x18(0x4)
	};


	// Struct Engine.PerBoneInterpolation
	// Size: 0x10 (0x10 - 0x0)
	struct FPerBoneInterpolation	
	{
	public:
		FBoneReference BoneReference; // 0x0(0xC)
		float InterpolationSpeedPerSec; // 0xC(0x4)
	};


	// Struct Engine.BlueprintMacroCosmeticInfo
	// Size: 0x1 (0x1 - 0x0)
	struct FBlueprintMacroCosmeticInfo	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.BPVariableMetaDataEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FBPVariableMetaDataEntry	
	{
	public:
		FName DataKey; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString DataValue; // 0x8(0x10)
	};


	// Struct Engine.BPVariableDescription
	// Size: 0xB0 (0xB0 - 0x0)
	struct FBPVariableDescription	
	{
	public:
		FName VarName; // 0x0(0x4)
		FGuid VarGuid; // 0x4(0x10)
		unsigned char UnknownData02_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FEdGraphPinType VarType; // 0x18(0x48)
		FString FriendlyName; // 0x60(0x10)
		FText category; // 0x70(0x10)
		uint64_t PropertyFlags; // 0x80(0x8)
		FName RepNotifyFunc; // 0x88(0x4)
		TEnumAsByte ReplicationCondition; // 0x8C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x8D(0x3) UNKNOWN PROPERTY
		TArray MetaDataArray; // 0x90(0x10)
		FString DefaultValue; // 0xA0(0x10)
	};


	// Struct Engine.EdGraphPinType
	// Size: 0x48 (0x48 - 0x0)
	struct FEdGraphPinType	
	{
	public:
		FName PinCategory; // 0x0(0x4)
		FName PinSubCategory; // 0x4(0x4)
		TWeakObjectPtr PinSubCategoryObject; // 0x8(0x8)
		FSimpleMemberReference PinSubCategoryMemberReference; // 0x10(0x20)
		FEdGraphTerminalType PinValueType; // 0x30(0x14)
		EPinContainerType ContainerType; // 0x44(0x1)
		bool bIsArray : 1; // 0x45:0(0x1)
		bool bIsReference : 1; // 0x45:1(0x1)
		bool bIsConst : 1; // 0x45:2(0x1)
		bool bIsWeakPointer : 1; // 0x45:3(0x1)
		bool bIsUObjectWrapper : 1; // 0x45:4(0x1)
		bool bSerializeAsSinglePrecisionFloat : 1; // 0x45:5(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x46(0x2) UNKNOWN PROPERTY
	};


	// Struct Engine.EdGraphTerminalType
	// Size: 0x14 (0x14 - 0x0)
	struct FEdGraphTerminalType	
	{
	public:
		FName TerminalCategory; // 0x0(0x4)
		FName TerminalSubCategory; // 0x4(0x4)
		TWeakObjectPtr TerminalSubCategoryObject; // 0x8(0x8)
		bool bTerminalIsConst; // 0x10(0x1)
		bool bTerminalIsWeakPointer; // 0x11(0x1)
		bool bTerminalIsUObjectWrapper; // 0x12(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x13(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.SimpleMemberReference
	// Size: 0x20 (0x20 - 0x0)
	struct FSimpleMemberReference	
	{
	public:
		UObject MemberParent; // 0x0(0x8)
		FName MemberName; // 0x8(0x4)
		FGuid MemberGuid; // 0xC(0x10)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.BPInterfaceDescription
	// Size: 0x18 (0x18 - 0x0)
	struct FBPInterfaceDescription	
	{
	public:
		UClass Interface; // 0x0(0x8)
		TArray Graphs; // 0x8(0x10)
	};


	// Struct Engine.EditedDocumentInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FEditedDocumentInfo	
	{
	public:
		FSoftObjectPath EditedObjectPath; // 0x0(0x18)
		FVector2D SavedViewOffset; // 0x18(0x10)
		float SavedZoomAmount; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UObject EditedObject; // 0x30(0x8)
	};


	// Struct Engine.BPEditorBookmarkNode
	// Size: 0x30 (0x30 - 0x0)
	struct FBPEditorBookmarkNode	
	{
	public:
		FGuid NodeGUID; // 0x0(0x10)
		FGuid ParentGuid; // 0x10(0x10)
		FText DisplayName; // 0x20(0x10)
	};


	// Struct Engine.Bookmark2DJumpToSettings
	// Size: 0x1 (0x1 - 0x0)
	struct FBookmark2DJumpToSettings	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.BookmarkBaseJumpToSettings
	// Size: 0x1 (0x1 - 0x0)
	struct FBookmarkBaseJumpToSettings	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.NonBlendableQuaternionAnimationAttribute
	// Inherited from FQuaternionAnimationAttribute
	// Size: 0x0 (0x20 - 0x20)
	struct FNonBlendableQuaternionAnimationAttribute : public FQuaternionAnimationAttribute	
	{
	public:
	};


	// Struct Engine.NonBlendableVectorAnimationAttribute
	// Inherited from FVectorAnimationAttribute
	// Size: 0x0 (0x18 - 0x18)
	struct FNonBlendableVectorAnimationAttribute : public FVectorAnimationAttribute	
	{
	public:
	};


	// Struct Engine.NonBlendableTransformAnimationAttribute
	// Inherited from FTransformAnimationAttribute
	// Size: 0x0 (0x60 - 0x60)
	struct FNonBlendableTransformAnimationAttribute : public FTransformAnimationAttribute	
	{
	public:
	};


	// Struct Engine.NonBlendableFloatAnimationAttribute
	// Inherited from FFloatAnimationAttribute
	// Size: 0x0 (0x4 - 0x4)
	struct FNonBlendableFloatAnimationAttribute : public FFloatAnimationAttribute	
	{
	public:
	};


	// Struct Engine.NonBlendableIntegerAnimationAttribute
	// Inherited from FIntegerAnimationAttribute
	// Size: 0x0 (0x4 - 0x4)
	struct FNonBlendableIntegerAnimationAttribute : public FIntegerAnimationAttribute	
	{
	public:
	};


	// Struct Engine.MinimalViewInfo
	// Size: 0x810 (0x810 - 0x0)
	struct FMinimalViewInfo	
	{
	public:
		FVector Location; // 0x0(0x18)
		FRotator Rotation; // 0x18(0x18)
		float FOV; // 0x30(0x4)
		float DesiredFOV; // 0x34(0x4)
		float FirstPersonFOV; // 0x38(0x4)
		float FirstPersonScale; // 0x3C(0x4)
		float OrthoWidth; // 0x40(0x4)
		bool bAutoCalculateOrthoPlanes; // 0x44(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		float AutoPlaneShift; // 0x48(0x4)
		bool bUpdateOrthoPlanes; // 0x4C(0x1)
		bool bUseCameraHeightAsViewTarget; // 0x4D(0x1)
		unsigned char UnknownData08_6[0x2]; // 0x4E(0x2) UNKNOWN PROPERTY
		float OrthoNearClipPlane; // 0x50(0x4)
		float OrthoFarClipPlane; // 0x54(0x4)
		float PerspectiveNearClipPlane; // 0x58(0x4)
		float AspectRatio; // 0x5C(0x4)
		unsigned char UnknownData09_6[0x8]; // 0x60(0x8) UNKNOWN PROPERTY
		bool bConstrainAspectRatio : 1; // 0x68:0(0x1)
		bool bUseFirstPersonParameters : 1; // 0x68:1(0x1)
		bool bUseFieldOfViewForLOD : 1; // 0x68:2(0x1)
		unsigned char UnknownData10_5[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		TEnumAsByte ProjectionMode; // 0x6C(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		float PostProcessBlendWeight; // 0x70(0x4)
		unsigned char UnknownData12_6[0xC]; // 0x74(0xC) UNKNOWN PROPERTY
		FPostProcessSettings PostProcessSettings; // 0x80(0x6F0)
		FVector2D OffCenterProjectionOffset; // 0x770(0x10)
		unsigned char UnknownData13_7[0x90]; // 0x780(0x90) UNKNOWN PROPERTY
	};


	// Struct Engine.PostProcessSettings
	// Size: 0x6F0 (0x6F0 - 0x0)
	struct FPostProcessSettings	
	{
	public:
		bool bOverride_TemperatureType : 1; // 0x0:0(0x1)
		bool bOverride_WhiteTemp : 1; // 0x0:1(0x1)
		bool bOverride_WhiteTint : 1; // 0x0:2(0x1)
		bool bOverride_ColorSaturation : 1; // 0x0:3(0x1)
		bool bOverride_ColorContrast : 1; // 0x0:4(0x1)
		bool bOverride_ColorGamma : 1; // 0x0:5(0x1)
		bool bOverride_ColorGain : 1; // 0x0:6(0x1)
		bool bOverride_ColorOffset : 1; // 0x0:7(0x1)
		bool bOverride_ColorSaturationShadows : 1; // 0x1:0(0x1)
		bool bOverride_ColorContrastShadows : 1; // 0x1:1(0x1)
		bool bOverride_ColorGammaShadows : 1; // 0x1:2(0x1)
		bool bOverride_ColorGainShadows : 1; // 0x1:3(0x1)
		bool bOverride_ColorOffsetShadows : 1; // 0x1:4(0x1)
		bool bOverride_ColorSaturationMidtones : 1; // 0x1:5(0x1)
		bool bOverride_ColorContrastMidtones : 1; // 0x1:6(0x1)
		bool bOverride_ColorGammaMidtones : 1; // 0x1:7(0x1)
		bool bOverride_ColorGainMidtones : 1; // 0x2:0(0x1)
		bool bOverride_ColorOffsetMidtones : 1; // 0x2:1(0x1)
		bool bOverride_ColorSaturationHighlights : 1; // 0x2:2(0x1)
		bool bOverride_ColorContrastHighlights : 1; // 0x2:3(0x1)
		bool bOverride_ColorGammaHighlights : 1; // 0x2:4(0x1)
		bool bOverride_ColorGainHighlights : 1; // 0x2:5(0x1)
		bool bOverride_ColorOffsetHighlights : 1; // 0x2:6(0x1)
		bool bOverride_ColorCorrectionShadowsMax : 1; // 0x2:7(0x1)
		bool bOverride_ColorCorrectionHighlightsMin : 1; // 0x3:0(0x1)
		bool bOverride_ColorCorrectionHighlightsMax : 1; // 0x3:1(0x1)
		bool bOverride_BlueCorrection : 1; // 0x3:2(0x1)
		bool bOverride_ExpandGamut : 1; // 0x3:3(0x1)
		bool bOverride_ToneCurveAmount : 1; // 0x3:4(0x1)
		bool bOverride_FilmSlope : 1; // 0x3:5(0x1)
		bool bOverride_FilmToe : 1; // 0x3:6(0x1)
		bool bOverride_FilmShoulder : 1; // 0x3:7(0x1)
		bool bOverride_FilmBlackClip : 1; // 0x4:0(0x1)
		bool bOverride_FilmWhiteClip : 1; // 0x4:1(0x1)
		bool bOverride_SceneColorTint : 1; // 0x4:2(0x1)
		bool bOverride_SceneFringeIntensity : 1; // 0x4:3(0x1)
		bool bOverride_ChromaticAberrationStartOffset : 1; // 0x4:4(0x1)
		bool bOverride_AmbientCubemapTint : 1; // 0x4:5(0x1)
		bool bOverride_AmbientCubemapIntensity : 1; // 0x4:6(0x1)
		bool bOverride_BloomMethod : 1; // 0x4:7(0x1)
		bool bOverride_BloomIntensity : 1; // 0x5:0(0x1)
		bool bOverride_BloomThreshold : 1; // 0x5:1(0x1)
		bool bOverride_Bloom1Tint : 1; // 0x5:2(0x1)
		bool bOverride_Bloom1Size : 1; // 0x5:3(0x1)
		bool bOverride_Bloom2Size : 1; // 0x5:4(0x1)
		bool bOverride_Bloom2Tint : 1; // 0x5:5(0x1)
		bool bOverride_Bloom3Tint : 1; // 0x5:6(0x1)
		bool bOverride_Bloom3Size : 1; // 0x5:7(0x1)
		bool bOverride_Bloom4Tint : 1; // 0x6:0(0x1)
		bool bOverride_Bloom4Size : 1; // 0x6:1(0x1)
		bool bOverride_Bloom5Tint : 1; // 0x6:2(0x1)
		bool bOverride_Bloom5Size : 1; // 0x6:3(0x1)
		bool bOverride_Bloom6Tint : 1; // 0x6:4(0x1)
		bool bOverride_Bloom6Size : 1; // 0x6:5(0x1)
		bool bOverride_BloomSizeScale : 1; // 0x6:6(0x1)
		bool bOverride_BloomConvolutionTexture : 1; // 0x6:7(0x1)
		bool bOverride_BloomConvolutionScatterDispersion : 1; // 0x7:0(0x1)
		bool bOverride_BloomConvolutionSize : 1; // 0x7:1(0x1)
		bool bOverride_BloomConvolutionCenterUV : 1; // 0x7:2(0x1)
		bool bOverride_BloomConvolutionPreFilter : 1; // 0x7:3(0x1)
		bool bOverride_BloomConvolutionPreFilterMin : 1; // 0x7:4(0x1)
		bool bOverride_BloomConvolutionPreFilterMax : 1; // 0x7:5(0x1)
		bool bOverride_BloomConvolutionPreFilterMult : 1; // 0x7:6(0x1)
		bool bOverride_BloomConvolutionBufferScale : 1; // 0x7:7(0x1)
		bool bOverride_BloomDirtMaskIntensity : 1; // 0x8:0(0x1)
		bool bOverride_BloomDirtMaskTint : 1; // 0x8:1(0x1)
		bool bOverride_BloomDirtMask : 1; // 0x8:2(0x1)
		bool bOverride_CameraShutterSpeed : 1; // 0x8:3(0x1)
		bool bOverride_CameraISO : 1; // 0x8:4(0x1)
		bool bOverride_AutoExposureMethod : 1; // 0x8:5(0x1)
		bool bOverride_AutoExposureLowPercent : 1; // 0x8:6(0x1)
		bool bOverride_AutoExposureHighPercent : 1; // 0x8:7(0x1)
		bool bOverride_AutoExposureMinBrightness : 1; // 0x9:0(0x1)
		bool bOverride_AutoExposureMaxBrightness : 1; // 0x9:1(0x1)
		bool bOverride_AutoExposureCalibrationConstant : 1; // 0x9:2(0x1)
		bool bOverride_AutoExposureSpeedUp : 1; // 0x9:3(0x1)
		bool bOverride_AutoExposureSpeedDown : 1; // 0x9:4(0x1)
		bool bOverride_AutoExposureBias : 1; // 0x9:5(0x1)
		bool bOverride_AutoExposureBiasCurve : 1; // 0x9:6(0x1)
		bool bOverride_AutoExposureMeterMask : 1; // 0x9:7(0x1)
		bool bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // 0xA:0(0x1)
		bool bOverride_HistogramLogMin : 1; // 0xA:1(0x1)
		bool bOverride_HistogramLogMax : 1; // 0xA:2(0x1)
		bool bOverride_LocalExposureContrastScale : 1; // 0xA:3(0x1)
		bool bOverride_LocalExposureHighlightContrastScale : 1; // 0xA:4(0x1)
		bool bOverride_LocalExposureShadowContrastScale : 1; // 0xA:5(0x1)
		bool bOverride_LocalExposureHighlightContrastCurve : 1; // 0xA:6(0x1)
		bool bOverride_LocalExposureShadowContrastCurve : 1; // 0xA:7(0x1)
		bool bOverride_LocalExposureHighlightThreshold : 1; // 0xB:0(0x1)
		bool bOverride_LocalExposureShadowThreshold : 1; // 0xB:1(0x1)
		bool bOverride_LocalExposureDetailStrength : 1; // 0xB:2(0x1)
		bool bOverride_LocalExposureBlurredLuminanceBlend : 1; // 0xB:3(0x1)
		bool bOverride_LocalExposureBlurredLuminanceKernelSizePercent : 1; // 0xB:4(0x1)
		bool bOverride_LocalExposureMiddleGreyBias : 1; // 0xB:5(0x1)
		bool bOverride_LensFlareIntensity : 1; // 0xB:6(0x1)
		bool bOverride_LensFlareTint : 1; // 0xB:7(0x1)
		bool bOverride_LensFlareTints : 1; // 0xC:0(0x1)
		bool bOverride_LensFlareBokehSize : 1; // 0xC:1(0x1)
		bool bOverride_LensFlareBokehShape : 1; // 0xC:2(0x1)
		bool bOverride_LensFlareThreshold : 1; // 0xC:3(0x1)
		bool bOverride_VignetteIntensity : 1; // 0xC:4(0x1)
		bool bOverride_Sharpen : 1; // 0xC:5(0x1)
		bool bOverride_GrainIntensity : 1; // 0xC:6(0x1)
		bool bOverride_GrainJitter : 1; // 0xC:7(0x1)
		bool bOverride_FilmGrainIntensity : 1; // 0xD:0(0x1)
		bool bOverride_FilmGrainIntensityShadows : 1; // 0xD:1(0x1)
		bool bOverride_FilmGrainIntensityMidtones : 1; // 0xD:2(0x1)
		bool bOverride_FilmGrainIntensityHighlights : 1; // 0xD:3(0x1)
		bool bOverride_FilmGrainShadowsMax : 1; // 0xD:4(0x1)
		bool bOverride_FilmGrainHighlightsMin : 1; // 0xD:5(0x1)
		bool bOverride_FilmGrainHighlightsMax : 1; // 0xD:6(0x1)
		bool bOverride_FilmGrainTexelSize : 1; // 0xD:7(0x1)
		bool bOverride_FilmGrainTexture : 1; // 0xE:0(0x1)
		bool bOverride_AmbientOcclusionIntensity : 1; // 0xE:1(0x1)
		bool bOverride_AmbientOcclusionStaticFraction : 1; // 0xE:2(0x1)
		bool bOverride_AmbientOcclusionRadius : 1; // 0xE:3(0x1)
		bool bOverride_AmbientOcclusionFadeDistance : 1; // 0xE:4(0x1)
		bool bOverride_AmbientOcclusionFadeRadius : 1; // 0xE:5(0x1)
		bool bOverride_AmbientOcclusionDistance : 1; // 0xE:6(0x1)
		bool bOverride_AmbientOcclusionRadiusInWS : 1; // 0xE:7(0x1)
		bool bOverride_AmbientOcclusionPower : 1; // 0xF:0(0x1)
		bool bOverride_AmbientOcclusionBias : 1; // 0xF:1(0x1)
		bool bOverride_AmbientOcclusionQuality : 1; // 0xF:2(0x1)
		bool bOverride_AmbientOcclusionMipBlend : 1; // 0xF:3(0x1)
		bool bOverride_AmbientOcclusionMipScale : 1; // 0xF:4(0x1)
		bool bOverride_AmbientOcclusionMipThreshold : 1; // 0xF:5(0x1)
		bool bOverride_AmbientOcclusionTemporalBlendWeight : 1; // 0xF:6(0x1)
		unsigned char UnknownBit32 : 1; // 0xF:7(0x1) UNKNOWN PROPERTY
		bool bOverride_RayTracingAO : 1; // 0x10:0(0x1)
		bool bOverride_RayTracingAOSamplesPerPixel : 1; // 0x10:1(0x1)
		bool bOverride_RayTracingAOIntensity : 1; // 0x10:2(0x1)
		bool bOverride_RayTracingAORadius : 1; // 0x10:3(0x1)
		unsigned char UnknownData33_3[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		bool bOverride_LPVIntensity : 1; // 0x14:0(0x1)
		bool bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x14:1(0x1)
		bool bOverride_LPVDirectionalOcclusionRadius : 1; // 0x14:2(0x1)
		bool bOverride_LPVDiffuseOcclusionExponent : 1; // 0x14:3(0x1)
		bool bOverride_LPVSpecularOcclusionExponent : 1; // 0x14:4(0x1)
		bool bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x14:5(0x1)
		bool bOverride_LPVSpecularOcclusionIntensity : 1; // 0x14:6(0x1)
		bool bOverride_LPVSize : 1; // 0x14:7(0x1)
		bool bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x15:0(0x1)
		bool bOverride_LPVSecondaryBounceIntensity : 1; // 0x15:1(0x1)
		bool bOverride_LPVGeometryVolumeBias : 1; // 0x15:2(0x1)
		bool bOverride_LPVVplInjectionBias : 1; // 0x15:3(0x1)
		bool bOverride_LPVEmissiveInjectionIntensity : 1; // 0x15:4(0x1)
		bool bOverride_LPVFadeRange : 1; // 0x15:5(0x1)
		bool bOverride_LPVDirectionalOcclusionFadeRange : 1; // 0x15:6(0x1)
		bool bOverride_IndirectLightingColor : 1; // 0x15:7(0x1)
		bool bOverride_IndirectLightingIntensity : 1; // 0x16:0(0x1)
		bool bOverride_ColorGradingIntensity : 1; // 0x16:1(0x1)
		bool bOverride_ColorGradingLUT : 1; // 0x16:2(0x1)
		bool bOverride_DepthOfFieldFocalDistance : 1; // 0x16:3(0x1)
		bool bOverride_DepthOfFieldFstop : 1; // 0x16:4(0x1)
		bool bOverride_DepthOfFieldMinFstop : 1; // 0x16:5(0x1)
		bool bOverride_DepthOfFieldBladeCount : 1; // 0x16:6(0x1)
		bool bOverride_DepthOfFieldSensorWidth : 1; // 0x16:7(0x1)
		bool bOverride_DepthOfFieldSqueezeFactor : 1; // 0x17:0(0x1)
		bool bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x17:1(0x1)
		bool bOverride_DepthOfFieldUseHairDepth : 1; // 0x17:2(0x1)
		bool bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x17:3(0x1)
		bool bOverride_DepthOfFieldFocalRegion : 1; // 0x17:4(0x1)
		bool bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x17:5(0x1)
		bool bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x17:6(0x1)
		bool bOverride_DepthOfFieldScale : 1; // 0x17:7(0x1)
		bool bOverride_DepthOfFieldNearBlurSize : 1; // 0x18:0(0x1)
		bool bOverride_DepthOfFieldFarBlurSize : 1; // 0x18:1(0x1)
		bool bOverride_MobileHQGaussian : 1; // 0x18:2(0x1)
		bool bOverride_DepthOfFieldOcclusion : 1; // 0x18:3(0x1)
		bool bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x18:4(0x1)
		bool bOverride_DepthOfFieldVignetteSize : 1; // 0x18:5(0x1)
		bool bOverride_MotionBlurAmount : 1; // 0x18:6(0x1)
		bool bOverride_MotionBlurMax : 1; // 0x18:7(0x1)
		bool bOverride_MotionBlurTargetFPS : 1; // 0x19:0(0x1)
		bool bOverride_MotionBlurPerObjectSize : 1; // 0x19:1(0x1)
		bool bOverride_ScreenPercentage : 1; // 0x19:2(0x1)
		bool bOverride_ReflectionMethod : 1; // 0x19:3(0x1)
		bool bOverride_LumenReflectionQuality : 1; // 0x19:4(0x1)
		bool bOverride_ScreenSpaceReflectionIntensity : 1; // 0x19:5(0x1)
		bool bOverride_ScreenSpaceReflectionQuality : 1; // 0x19:6(0x1)
		bool bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x19:7(0x1)
		bool bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x1A:0(0x1)
		bool bOverride_UserFlags : 1; // 0x1A:1(0x1)
		unsigned char UnknownData34_3[0x1]; // 0x1B(0x1) UNKNOWN PROPERTY
		bool bOverride_ReflectionsType : 1; // 0x1C:0(0x1)
		bool bOverride_RayTracingReflectionsMaxRoughness : 1; // 0x1C:1(0x1)
		bool bOverride_RayTracingReflectionsMaxBounces : 1; // 0x1C:2(0x1)
		bool bOverride_RayTracingReflectionsSamplesPerPixel : 1; // 0x1C:3(0x1)
		bool bOverride_RayTracingReflectionsShadows : 1; // 0x1C:4(0x1)
		bool bOverride_RayTracingReflectionsTranslucency : 1; // 0x1C:5(0x1)
		bool bOverride_TranslucencyType : 1; // 0x1C:6(0x1)
		bool bOverride_RayTracingTranslucencyMaxRoughness : 1; // 0x1C:7(0x1)
		bool bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x1D:0(0x1)
		bool bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x1D:1(0x1)
		bool bOverride_RayTracingTranslucencyShadows : 1; // 0x1D:2(0x1)
		bool bOverride_RayTracingTranslucencyRefraction : 1; // 0x1D:3(0x1)
		bool bOverride_DynamicGlobalIlluminationMethod : 1; // 0x1D:4(0x1)
		bool bOverride_LumenSceneLightingQuality : 1; // 0x1D:5(0x1)
		bool bOverride_LumenSceneDetail : 1; // 0x1D:6(0x1)
		bool bOverride_LumenSceneViewDistance : 1; // 0x1D:7(0x1)
		bool bOverride_LumenSceneLightingUpdateSpeed : 1; // 0x1E:0(0x1)
		bool bOverride_LumenFinalGatherQuality : 1; // 0x1E:1(0x1)
		bool bOverride_LumenFinalGatherLightingUpdateSpeed : 1; // 0x1E:2(0x1)
		bool bOverride_LumenFinalGatherScreenTraces : 1; // 0x1E:3(0x1)
		bool bOverride_LumenMaxTraceDistance : 1; // 0x1E:4(0x1)
		bool bOverride_LumenDiffuseColorBoost : 1; // 0x1E:5(0x1)
		bool bOverride_LumenSkylightLeaking : 1; // 0x1E:6(0x1)
		bool bOverride_LumenFullSkylightLeakingDistance : 1; // 0x1E:7(0x1)
		unsigned char UnknownBit35 : 1; // 0x1F:0(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit36 : 1; // 0x1F:1(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit37 : 1; // 0x1F:2(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit38 : 1; // 0x1F:3(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit39 : 1; // 0x1F:4(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit40 : 1; // 0x1F:5(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit41 : 1; // 0x1F:6(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit42 : 1; // 0x1F:7(0x1) UNKNOWN PROPERTY
		bool bOverride_LumenRayLightingMode : 1; // 0x20:0(0x1)
		bool bOverride_LumenReflectionsScreenTraces : 1; // 0x20:1(0x1)
		bool bOverride_LumenFrontLayerTranslucencyReflections : 1; // 0x20:2(0x1)
		unsigned char UnknownData43_3[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		bool bOverride_LumenMaxRoughnessToTraceReflections : 1; // 0x24:0(0x1)
		bool bOverride_LumenMaxReflectionBounces : 1; // 0x24:1(0x1)
		bool bOverride_LumenMaxRefractionBounces : 1; // 0x24:2(0x1)
		unsigned char UnknownData44_3[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		bool bOverride_LumenSurfaceCacheResolution : 1; // 0x28:0(0x1)
		unsigned char UnknownData45_3[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		bool bOverride_RayTracingGI : 1; // 0x2C:0(0x1)
		bool bOverride_RayTracingGIMaxBounces : 1; // 0x2C:1(0x1)
		bool bOverride_RayTracingGISamplesPerPixel : 1; // 0x2C:2(0x1)
		bool bOverride_PathTracingMaxBounces : 1; // 0x2C:3(0x1)
		bool bOverride_PathTracingSamplesPerPixel : 1; // 0x2C:4(0x1)
		bool bOverride_PathTracingMaxPathIntensity : 1; // 0x2C:5(0x1)
		bool bOverride_PathTracingEnableEmissiveMaterials : 1; // 0x2C:6(0x1)
		bool bOverride_PathTracingEnableReferenceDOF : 1; // 0x2C:7(0x1)
		bool bOverride_PathTracingEnableReferenceAtmosphere : 1; // 0x2D:0(0x1)
		bool bOverride_PathTracingEnableDenoiser : 1; // 0x2D:1(0x1)
		bool bOverride_PathTracingIncludeEmissive : 1; // 0x2D:2(0x1)
		bool bOverride_PathTracingIncludeDiffuse : 1; // 0x2D:3(0x1)
		bool bOverride_PathTracingIncludeIndirectDiffuse : 1; // 0x2D:4(0x1)
		bool bOverride_PathTracingIncludeSpecular : 1; // 0x2D:5(0x1)
		bool bOverride_PathTracingIncludeIndirectSpecular : 1; // 0x2D:6(0x1)
		bool bOverride_PathTracingIncludeVolume : 1; // 0x2D:7(0x1)
		bool bOverride_PathTracingIncludeIndirectVolume : 1; // 0x2E:0(0x1)
		unsigned char UnknownData46_3[0x1]; // 0x2F(0x1) UNKNOWN PROPERTY
		bool bMobileHQGaussian : 1; // 0x30:0(0x1)
		TEnumAsByte BloomMethod; // 0x31(0x1)
		TEnumAsByte AutoExposureMethod; // 0x32(0x1)
		TEnumAsByte TemperatureType; // 0x33(0x1)
		float WhiteTemp; // 0x34(0x4)
		float WhiteTint; // 0x38(0x4)
		unsigned char UnknownData47_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FVector4 ColorSaturation; // 0x40(0x20)
		FVector4 ColorContrast; // 0x60(0x20)
		FVector4 ColorGamma; // 0x80(0x20)
		FVector4 ColorGain; // 0xA0(0x20)
		FVector4 ColorOffset; // 0xC0(0x20)
		FVector4 ColorSaturationShadows; // 0xE0(0x20)
		FVector4 ColorContrastShadows; // 0x100(0x20)
		FVector4 ColorGammaShadows; // 0x120(0x20)
		FVector4 ColorGainShadows; // 0x140(0x20)
		FVector4 ColorOffsetShadows; // 0x160(0x20)
		FVector4 ColorSaturationMidtones; // 0x180(0x20)
		FVector4 ColorContrastMidtones; // 0x1A0(0x20)
		FVector4 ColorGammaMidtones; // 0x1C0(0x20)
		FVector4 ColorGainMidtones; // 0x1E0(0x20)
		FVector4 ColorOffsetMidtones; // 0x200(0x20)
		FVector4 ColorSaturationHighlights; // 0x220(0x20)
		FVector4 ColorContrastHighlights; // 0x240(0x20)
		FVector4 ColorGammaHighlights; // 0x260(0x20)
		FVector4 ColorGainHighlights; // 0x280(0x20)
		FVector4 ColorOffsetHighlights; // 0x2A0(0x20)
		float ColorCorrectionHighlightsMin; // 0x2C0(0x4)
		float ColorCorrectionHighlightsMax; // 0x2C4(0x4)
		float ColorCorrectionShadowsMax; // 0x2C8(0x4)
		float BlueCorrection; // 0x2CC(0x4)
		float ExpandGamut; // 0x2D0(0x4)
		float ToneCurveAmount; // 0x2D4(0x4)
		float FilmSlope; // 0x2D8(0x4)
		float FilmToe; // 0x2DC(0x4)
		float FilmShoulder; // 0x2E0(0x4)
		float FilmBlackClip; // 0x2E4(0x4)
		float FilmWhiteClip; // 0x2E8(0x4)
		FLinearColor SceneColorTint; // 0x2EC(0x10)
		float SceneFringeIntensity; // 0x2FC(0x4)
		float ChromaticAberrationStartOffset; // 0x300(0x4)
		float BloomIntensity; // 0x304(0x4)
		float BloomThreshold; // 0x308(0x4)
		float BloomSizeScale; // 0x30C(0x4)
		float Bloom1Size; // 0x310(0x4)
		float Bloom2Size; // 0x314(0x4)
		float Bloom3Size; // 0x318(0x4)
		float Bloom4Size; // 0x31C(0x4)
		float Bloom5Size; // 0x320(0x4)
		float Bloom6Size; // 0x324(0x4)
		FLinearColor Bloom1Tint; // 0x328(0x10)
		FLinearColor Bloom2Tint; // 0x338(0x10)
		FLinearColor Bloom3Tint; // 0x348(0x10)
		FLinearColor Bloom4Tint; // 0x358(0x10)
		FLinearColor Bloom5Tint; // 0x368(0x10)
		FLinearColor Bloom6Tint; // 0x378(0x10)
		float BloomConvolutionScatterDispersion; // 0x388(0x4)
		float BloomConvolutionSize; // 0x38C(0x4)
		UTexture2D BloomConvolutionTexture; // 0x390(0x8)
		FVector2D BloomConvolutionCenterUV; // 0x398(0x10)
		float BloomConvolutionPreFilterMin; // 0x3A8(0x4)
		float BloomConvolutionPreFilterMax; // 0x3AC(0x4)
		float BloomConvolutionPreFilterMult; // 0x3B0(0x4)
		float BloomConvolutionBufferScale; // 0x3B4(0x4)
		UTexture BloomDirtMask; // 0x3B8(0x8)
		float BloomDirtMaskIntensity; // 0x3C0(0x4)
		FLinearColor BloomDirtMaskTint; // 0x3C4(0x10)
		TEnumAsByte DynamicGlobalIlluminationMethod; // 0x3D4(0x1)
		unsigned char UnknownData48_6[0x3]; // 0x3D5(0x3) UNKNOWN PROPERTY
		FLinearColor IndirectLightingColor; // 0x3D8(0x10)
		float IndirectLightingIntensity; // 0x3E8(0x4)
		ELumenRayLightingModeOverride LumenRayLightingMode; // 0x3EC(0x1)
		unsigned char UnknownData49_6[0x3]; // 0x3ED(0x3) UNKNOWN PROPERTY
		float LumenSceneLightingQuality; // 0x3F0(0x4)
		float LumenSceneDetail; // 0x3F4(0x4)
		float LumenSceneViewDistance; // 0x3F8(0x4)
		float LumenSceneLightingUpdateSpeed; // 0x3FC(0x4)
		float LumenFinalGatherQuality; // 0x400(0x4)
		float LumenFinalGatherLightingUpdateSpeed; // 0x404(0x4)
		bool LumenFinalGatherScreenTraces : 1; // 0x408:0(0x1)
		unsigned char UnknownData50_5[0x3]; // 0x409(0x3) UNKNOWN PROPERTY
		float LumenMaxTraceDistance; // 0x40C(0x4)
		float LumenDiffuseColorBoost; // 0x410(0x4)
		float LumenSkylightLeaking; // 0x414(0x4)
		float LumenFullSkylightLeakingDistance; // 0x418(0x4)
		float LumenSurfaceCacheResolution; // 0x41C(0x4)
		TEnumAsByte ReflectionMethod; // 0x420(0x1)
		EReflectionsType ReflectionsType; // 0x421(0x1)
		unsigned char UnknownData51_6[0x2]; // 0x422(0x2) UNKNOWN PROPERTY
		float LumenReflectionQuality; // 0x424(0x4)
		bool LumenReflectionsScreenTraces : 1; // 0x428:0(0x1)
		bool LumenFrontLayerTranslucencyReflections : 1; // 0x428:1(0x1)
		unsigned char UnknownData52_5[0x3]; // 0x429(0x3) UNKNOWN PROPERTY
		float LumenMaxRoughnessToTraceReflections; // 0x42C(0x4)
		int32_t LumenMaxReflectionBounces; // 0x430(0x4)
		int32_t LumenMaxRefractionBounces; // 0x434(0x4)
		float ScreenSpaceReflectionIntensity; // 0x438(0x4)
		float ScreenSpaceReflectionQuality; // 0x43C(0x4)
		float ScreenSpaceReflectionMaxRoughness; // 0x440(0x4)
		FLinearColor AmbientCubemapTint; // 0x444(0x10)
		float AmbientCubemapIntensity; // 0x454(0x4)
		UTextureCube AmbientCubemap; // 0x458(0x8)
		float CameraShutterSpeed; // 0x460(0x4)
		float CameraISO; // 0x464(0x4)
		float DepthOfFieldFstop; // 0x468(0x4)
		float DepthOfFieldMinFstop; // 0x46C(0x4)
		int32_t DepthOfFieldBladeCount; // 0x470(0x4)
		float AutoExposureBias; // 0x474(0x4)
		float AutoExposureBiasBackup; // 0x478(0x4)
		bool bOverride_AutoExposureBiasBackup : 1; // 0x47C:0(0x1)
		unsigned char UnknownData53_3[0x3]; // 0x47D(0x3) UNKNOWN PROPERTY
		bool AutoExposureApplyPhysicalCameraExposure : 1; // 0x480:0(0x1)
		unsigned char UnknownData54_5[0x7]; // 0x481(0x7) UNKNOWN PROPERTY
		UCurveFloat AutoExposureBiasCurve; // 0x488(0x8)
		UTexture AutoExposureMeterMask; // 0x490(0x8)
		float AutoExposureLowPercent; // 0x498(0x4)
		float AutoExposureHighPercent; // 0x49C(0x4)
		float AutoExposureMinBrightness; // 0x4A0(0x4)
		float AutoExposureMaxBrightness; // 0x4A4(0x4)
		float AutoExposureSpeedUp; // 0x4A8(0x4)
		float AutoExposureSpeedDown; // 0x4AC(0x4)
		float HistogramLogMin; // 0x4B0(0x4)
		float HistogramLogMax; // 0x4B4(0x4)
		float AutoExposureCalibrationConstant; // 0x4B8(0x4)
		float LocalExposureContrastScale; // 0x4BC(0x4)
		float LocalExposureHighlightContrastScale; // 0x4C0(0x4)
		float LocalExposureShadowContrastScale; // 0x4C4(0x4)
		UCurveFloat LocalExposureHighlightContrastCurve; // 0x4C8(0x8)
		UCurveFloat LocalExposureShadowContrastCurve; // 0x4D0(0x8)
		float LocalExposureHighlightThreshold; // 0x4D8(0x4)
		float LocalExposureShadowThreshold; // 0x4DC(0x4)
		float LocalExposureDetailStrength; // 0x4E0(0x4)
		float LocalExposureBlurredLuminanceBlend; // 0x4E4(0x4)
		float LocalExposureBlurredLuminanceKernelSizePercent; // 0x4E8(0x4)
		float LocalExposureMiddleGreyBias; // 0x4EC(0x4)
		float LensFlareIntensity; // 0x4F0(0x4)
		FLinearColor LensFlareTint; // 0x4F4(0x10)
		float LensFlareBokehSize; // 0x504(0x4)
		float LensFlareThreshold; // 0x508(0x4)
		unsigned char UnknownData55_6[0x4]; // 0x50C(0x4) UNKNOWN PROPERTY
		UTexture LensFlareBokehShape; // 0x510(0x8)
		FLinearColor LensFlareTints; // 0x518(0x80)
		float VignetteIntensity; // 0x598(0x4)
		float Sharpen; // 0x59C(0x4)
		float GrainJitter; // 0x5A0(0x4)
		float GrainIntensity; // 0x5A4(0x4)
		float FilmGrainIntensity; // 0x5A8(0x4)
		float FilmGrainIntensityShadows; // 0x5AC(0x4)
		float FilmGrainIntensityMidtones; // 0x5B0(0x4)
		float FilmGrainIntensityHighlights; // 0x5B4(0x4)
		float FilmGrainShadowsMax; // 0x5B8(0x4)
		float FilmGrainHighlightsMin; // 0x5BC(0x4)
		float FilmGrainHighlightsMax; // 0x5C0(0x4)
		float FilmGrainTexelSize; // 0x5C4(0x4)
		UTexture2D FilmGrainTexture; // 0x5C8(0x8)
		float AmbientOcclusionIntensity; // 0x5D0(0x4)
		float AmbientOcclusionStaticFraction; // 0x5D4(0x4)
		float AmbientOcclusionRadius; // 0x5D8(0x4)
		bool AmbientOcclusionRadiusInWS : 1; // 0x5DC:0(0x1)
		unsigned char UnknownData56_5[0x3]; // 0x5DD(0x3) UNKNOWN PROPERTY
		float AmbientOcclusionFadeDistance; // 0x5E0(0x4)
		float AmbientOcclusionFadeRadius; // 0x5E4(0x4)
		float AmbientOcclusionDistance; // 0x5E8(0x4)
		float AmbientOcclusionPower; // 0x5EC(0x4)
		float AmbientOcclusionBias; // 0x5F0(0x4)
		float AmbientOcclusionQuality; // 0x5F4(0x4)
		float AmbientOcclusionMipBlend; // 0x5F8(0x4)
		float AmbientOcclusionMipScale; // 0x5FC(0x4)
		float AmbientOcclusionMipThreshold; // 0x600(0x4)
		float AmbientOcclusionTemporalBlendWeight; // 0x604(0x4)
		bool RayTracingAO : 1; // 0x608:0(0x1)
		unsigned char UnknownData57_5[0x3]; // 0x609(0x3) UNKNOWN PROPERTY
		int32_t RayTracingAOSamplesPerPixel; // 0x60C(0x4)
		float RayTracingAOIntensity; // 0x610(0x4)
		float RayTracingAORadius; // 0x614(0x4)
		float ColorGradingIntensity; // 0x618(0x4)
		unsigned char UnknownData58_6[0x4]; // 0x61C(0x4) UNKNOWN PROPERTY
		UTexture ColorGradingLUT; // 0x620(0x8)
		float DepthOfFieldSensorWidth; // 0x628(0x4)
		float DepthOfFieldSqueezeFactor; // 0x62C(0x4)
		float DepthOfFieldFocalDistance; // 0x630(0x4)
		float DepthOfFieldDepthBlurAmount; // 0x634(0x4)
		float DepthOfFieldDepthBlurRadius; // 0x638(0x4)
		bool DepthOfFieldUseHairDepth : 1; // 0x63C:0(0x1)
		unsigned char UnknownData59_5[0x3]; // 0x63D(0x3) UNKNOWN PROPERTY
		float DepthOfFieldFocalRegion; // 0x640(0x4)
		float DepthOfFieldNearTransitionRegion; // 0x644(0x4)
		float DepthOfFieldFarTransitionRegion; // 0x648(0x4)
		float DepthOfFieldScale; // 0x64C(0x4)
		float DepthOfFieldNearBlurSize; // 0x650(0x4)
		float DepthOfFieldFarBlurSize; // 0x654(0x4)
		float DepthOfFieldOcclusion; // 0x658(0x4)
		float DepthOfFieldSkyFocusDistance; // 0x65C(0x4)
		float DepthOfFieldVignetteSize; // 0x660(0x4)
		float MotionBlurAmount; // 0x664(0x4)
		float MotionBlurMax; // 0x668(0x4)
		int32_t MotionBlurTargetFPS; // 0x66C(0x4)
		float MotionBlurPerObjectSize; // 0x670(0x4)
		float LPVIntensity; // 0x674(0x4)
		float LPVVplInjectionBias; // 0x678(0x4)
		float LPVSize; // 0x67C(0x4)
		float LPVSecondaryOcclusionIntensity; // 0x680(0x4)
		float LPVSecondaryBounceIntensity; // 0x684(0x4)
		float LPVGeometryVolumeBias; // 0x688(0x4)
		float LPVEmissiveInjectionIntensity; // 0x68C(0x4)
		float LPVDirectionalOcclusionIntensity; // 0x690(0x4)
		float LPVDirectionalOcclusionRadius; // 0x694(0x4)
		float LPVDiffuseOcclusionExponent; // 0x698(0x4)
		float LPVSpecularOcclusionExponent; // 0x69C(0x4)
		float LPVDiffuseOcclusionIntensity; // 0x6A0(0x4)
		float LPVSpecularOcclusionIntensity; // 0x6A4(0x4)
		ETranslucencyType TranslucencyType; // 0x6A8(0x1)
		unsigned char UnknownData60_6[0x3]; // 0x6A9(0x3) UNKNOWN PROPERTY
		float RayTracingTranslucencyMaxRoughness; // 0x6AC(0x4)
		int32_t RayTracingTranslucencyRefractionRays; // 0x6B0(0x4)
		int32_t RayTracingTranslucencySamplesPerPixel; // 0x6B4(0x4)
		EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x6B8(0x1)
		bool RayTracingTranslucencyRefraction : 1; // 0x6B9:0(0x1)
		unsigned char UnknownData61_5[0x2]; // 0x6BA(0x2) UNKNOWN PROPERTY
		int32_t PathTracingMaxBounces; // 0x6BC(0x4)
		int32_t PathTracingSamplesPerPixel; // 0x6C0(0x4)
		float PathTracingMaxPathIntensity; // 0x6C4(0x4)
		bool PathTracingEnableEmissiveMaterials : 1; // 0x6C8:0(0x1)
		bool PathTracingEnableReferenceDOF : 1; // 0x6C8:1(0x1)
		bool PathTracingEnableReferenceAtmosphere : 1; // 0x6C8:2(0x1)
		bool PathTracingEnableDenoiser : 1; // 0x6C8:3(0x1)
		bool PathTracingIncludeEmissive : 1; // 0x6C8:4(0x1)
		bool PathTracingIncludeDiffuse : 1; // 0x6C8:5(0x1)
		bool PathTracingIncludeIndirectDiffuse : 1; // 0x6C8:6(0x1)
		bool PathTracingIncludeSpecular : 1; // 0x6C8:7(0x1)
		bool PathTracingIncludeIndirectSpecular : 1; // 0x6C9:0(0x1)
		bool PathTracingIncludeVolume : 1; // 0x6C9:1(0x1)
		bool PathTracingIncludeIndirectVolume : 1; // 0x6C9:2(0x1)
		unsigned char UnknownData62_5[0x2]; // 0x6CA(0x2) UNKNOWN PROPERTY
		float LPVFadeRange; // 0x6CC(0x4)
		float LPVDirectionalOcclusionFadeRange; // 0x6D0(0x4)
		float ScreenPercentage; // 0x6D4(0x4)
		int32_t UserFlags; // 0x6D8(0x4)
		unsigned char UnknownData63_6[0x4]; // 0x6DC(0x4) UNKNOWN PROPERTY
		FWeightedBlendables WeightedBlendables; // 0x6E0(0x10)
	};


	// Struct Engine.WeightedBlendables
	// Size: 0x10 (0x10 - 0x0)
	struct FWeightedBlendables	
	{
	public:
		TArray Array; // 0x0(0x10)
	};


	// Struct Engine.TextSizingParameters
	// Size: 0x38 (0x38 - 0x0)
	struct FTextSizingParameters	
	{
	public:
		float DrawX; // 0x0(0x4)
		float DrawY; // 0x4(0x4)
		float DrawXL; // 0x8(0x4)
		float DrawYL; // 0xC(0x4)
		FVector2D Scaling; // 0x10(0x10)
		UFont DrawFont; // 0x20(0x8)
		FVector2D SpacingAdjust; // 0x28(0x10)
	};


	// Struct Engine.WrappedStringElement
	// Size: 0x20 (0x20 - 0x0)
	struct FWrappedStringElement	
	{
	public:
		FString Value; // 0x0(0x10)
		FVector2D LineExtent; // 0x10(0x10)
	};


	// Struct Engine.CharacterNetworkSerializationPackedBits
	// Size: 0xC8 (0xC8 - 0x0)
	struct FCharacterNetworkSerializationPackedBits	
	{
	public:
		unsigned char UnknownData01_2[0xC8]; // 0x0(0xC8) UNKNOWN PROPERTY
	};


	// Struct Engine.CharacterServerMovePackedBits
	// Inherited from FCharacterNetworkSerializationPackedBits
	// Size: 0x0 (0xC8 - 0xC8)
	struct FCharacterServerMovePackedBits : public FCharacterNetworkSerializationPackedBits	
	{
	public:
	};


	// Struct Engine.CharacterMoveResponsePackedBits
	// Inherited from FCharacterNetworkSerializationPackedBits
	// Size: 0x0 (0xC8 - 0xC8)
	struct FCharacterMoveResponsePackedBits : public FCharacterNetworkSerializationPackedBits	
	{
	public:
	};


	// Struct Engine.CustomAttributeSetting
	// Size: 0x20 (0x20 - 0x0)
	struct FCustomAttributeSetting	
	{
	public:
		FString Name; // 0x0(0x10)
		FString Meaning; // 0x10(0x10)
	};


	// Struct Engine.TimecodeCustomAttributeNameSettings
	// Size: 0x1C (0x1C - 0x0)
	struct FTimecodeCustomAttributeNameSettings	
	{
	public:
		FName HourAttributeName; // 0x0(0x4)
		FName MinuteAttributeName; // 0x4(0x4)
		FName SecondAttributeName; // 0x8(0x4)
		FName FrameAttributeName; // 0xC(0x4)
		FName SubframeAttributeName; // 0x10(0x4)
		FName RateAttributeName; // 0x14(0x4)
		FName TakenameAttributeName; // 0x18(0x4)
	};


	// Struct Engine.CustomAttribute
	// Size: 0x1 (0x1 - 0x0)
	struct FCustomAttribute	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.CustomAttributePerBoneData
	// Size: 0x1 (0x1 - 0x0)
	struct FCustomAttributePerBoneData	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.BakedStringCustomAttribute
	// Size: 0x1 (0x1 - 0x0)
	struct FBakedStringCustomAttribute	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.BakedIntegerCustomAttribute
	// Size: 0x1 (0x1 - 0x0)
	struct FBakedIntegerCustomAttribute	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.BakedFloatCustomAttribute
	// Size: 0x1 (0x1 - 0x0)
	struct FBakedFloatCustomAttribute	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.BakedCustomAttributePerBoneData
	// Size: 0x1 (0x1 - 0x0)
	struct FBakedCustomAttributePerBoneData	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.DataLayerInstanceNames
	// Size: 0x18 (0x18 - 0x0)
	struct FDataLayerInstanceNames	
	{
	public:
		bool bIsFirstDataLayerExternal; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray DataLayers; // 0x8(0x10)
	};


	// Struct Engine.DebugDisplayProperty
	// Size: 0x18 (0x18 - 0x0)
	struct FDebugDisplayProperty	
	{
	public:
		UObject Obj; // 0x0(0x8)
		UClass WithinClass; // 0x8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.DebugTextInfo
	// Size: 0x80 (0x80 - 0x0)
	struct FDebugTextInfo	
	{
	public:
		AActor SrcActor; // 0x0(0x8)
		FVector SrcActorOffset; // 0x8(0x18)
		FVector SrcActorDesiredOffset; // 0x20(0x18)
		FString DebugText; // 0x38(0x10)
		float TimeRemaining; // 0x48(0x4)
		float duration; // 0x4C(0x4)
		FColor TextColor; // 0x50(0x4)
		bool bAbsoluteLocation : 1; // 0x54:0(0x1)
		bool bKeepAttachedToActor : 1; // 0x54:1(0x1)
		bool bDrawShadow : 1; // 0x54:2(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x55(0x3) UNKNOWN PROPERTY
		FVector OrigActorLocation; // 0x58(0x18)
		UFont Font; // 0x70(0x8)
		float FontScale; // 0x78(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.RawDistributionFloat
	// Inherited from FRawDistribution
	// Size: 0x10 (0x30 - 0x20)
	struct FRawDistributionFloat : public FRawDistribution	
	{
	public:
		float MinValue; // 0x20(0x4)
		float MaxValue; // 0x24(0x4)
		UDistributionFloat Distribution; // 0x28(0x8)
	};


	// Struct Engine.RawDistributionVector
	// Inherited from FRawDistribution
	// Size: 0x40 (0x60 - 0x20)
	struct FRawDistributionVector : public FRawDistribution	
	{
	public:
		float MinValue; // 0x20(0x4)
		float MaxValue; // 0x24(0x4)
		FVector MinValueVec; // 0x28(0x18)
		FVector MaxValueVec; // 0x40(0x18)
		UDistributionVector Distribution; // 0x58(0x8)
	};


	// Struct Engine.EdGraphPinReference
	// Size: 0x18 (0x18 - 0x0)
	struct FEdGraphPinReference	
	{
	public:
		TWeakObjectPtr OwningNode; // 0x0(0x8)
		FGuid PinId; // 0x8(0x10)
	};


	// Struct Engine.EdGraphSchemaAction
	// Size: 0xE0 (0xE0 - 0x0)
	struct FEdGraphSchemaAction	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FText MenuDescription; // 0x8(0x10)
		FText TooltipDescription; // 0x18(0x10)
		FText category; // 0x28(0x10)
		FText Keywords; // 0x38(0x10)
		int32_t Grouping; // 0x48(0x4)
		int32_t SectionId; // 0x4C(0x4)
		TArray MenuDescriptionArray; // 0x50(0x10)
		TArray FullSearchTitlesArray; // 0x60(0x10)
		TArray FullSearchKeywordsArray; // 0x70(0x10)
		TArray FullSearchCategoryArray; // 0x80(0x10)
		TArray LocalizedMenuDescriptionArray; // 0x90(0x10)
		TArray LocalizedFullSearchTitlesArray; // 0xA0(0x10)
		TArray LocalizedFullSearchKeywordsArray; // 0xB0(0x10)
		TArray LocalizedFullSearchCategoryArray; // 0xC0(0x10)
		FString SearchText; // 0xD0(0x10)
	};


	// Struct Engine.EdGraphSchemaAction_NewNode
	// Inherited from FEdGraphSchemaAction
	// Size: 0x8 (0xE8 - 0xE0)
	struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction	
	{
	public:
		UEdGraphNode NodeTemplate; // 0xE0(0x8)
	};


	// Struct Engine.FullyLoadedPackagesInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FFullyLoadedPackagesInfo	
	{
	public:
		TEnumAsByte FullyLoadType; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString tag; // 0x8(0x10)
		TArray PackagesToLoad; // 0x18(0x10)
		TArray LoadedObjects; // 0x28(0x10)
	};


	// Struct Engine.LevelStreamingStatus
	// Size: 0xC (0xC - 0x0)
	struct FLevelStreamingStatus	
	{
	public:
		FName PackageName; // 0x0(0x4)
		bool bShouldBeLoaded : 1; // 0x4:0(0x1)
		bool bShouldBeVisible : 1; // 0x4:1(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		uint32_t LODIndex; // 0x8(0x4)
	};


	// Struct Engine.NetDriverDefinition
	// Size: 0x10 (0x10 - 0x0)
	struct FNetDriverDefinition	
	{
	public:
		FName DefName; // 0x0(0x4)
		FName DriverClassName; // 0x4(0x4)
		FName DriverClassNameFallback; // 0x8(0x4)
		int32_t MaxChannelsOverride; // 0xC(0x4)
	};


	// Struct Engine.IrisNetDriverConfig
	// Size: 0x20 (0x20 - 0x0)
	struct FIrisNetDriverConfig	
	{
	public:
		FName NetDriverDefinition; // 0x0(0x4)
		FName NetDriverName; // 0x4(0x4)
		FString NetDriverWildcardName; // 0x8(0x10)
		bool bCanUseIris; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.NamedNetDriver
	// Size: 0x10 (0x10 - 0x0)
	struct FNamedNetDriver	
	{
	public:
		UNetDriver NetDriver; // 0x0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.WorldContext
	// Size: 0x2C0 (0x2C0 - 0x0)
	struct FWorldContext	
	{
	public:
		unsigned char UnknownData04_7[0xB8]; // 0x0(0xB8) UNKNOWN PROPERTY
		FURL LastURL; // 0xB8(0x68)
		FURL LastRemoteURL; // 0x120(0x68)
		UPendingNetGame PendingNetGame; // 0x188(0x8)
		TArray PackagesToFullyLoad; // 0x190(0x10)
		unsigned char UnknownData05_6[0x10]; // 0x1A0(0x10) UNKNOWN PROPERTY
		TArray LoadedLevelsForPendingMapChange; // 0x1B0(0x10)
		unsigned char UnknownData06_6[0x18]; // 0x1C0(0x18) UNKNOWN PROPERTY
		TArray ObjectReferencers; // 0x1D8(0x10)
		TArray PendingLevelStreamingStatusUpdates; // 0x1E8(0x10)
		UGameViewportClient GameViewport; // 0x1F8(0x8)
		UGameInstance OwningGameInstance; // 0x200(0x8)
		TArray ActiveNetDrivers; // 0x208(0x10)
		unsigned char UnknownData07_7[0xA8]; // 0x218(0xA8) UNKNOWN PROPERTY
	};


	// Struct Engine.URL
	// Size: 0x68 (0x68 - 0x0)
	struct FURL	
	{
	public:
		FString Protocol; // 0x0(0x10)
		FString Host; // 0x10(0x10)
		int32_t Port; // 0x20(0x4)
		int32_t Valid; // 0x24(0x4)
		FString Map; // 0x28(0x10)
		FString RedirectUrl; // 0x38(0x10)
		TArray Op; // 0x48(0x10)
		FString Portal; // 0x58(0x10)
	};


	// Struct Engine.StatColorMapEntry
	// Size: 0x8 (0x8 - 0x0)
	struct FStatColorMapEntry	
	{
	public:
		float In; // 0x0(0x4)
		FColor Out; // 0x4(0x4)
	};


	// Struct Engine.StatColorMapping
	// Size: 0x28 (0x28 - 0x0)
	struct FStatColorMapping	
	{
	public:
		FString StatName; // 0x0(0x10)
		TArray ColorMap; // 0x10(0x10)
		bool DisableBlend : 1; // 0x20:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.DropNoteInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FDropNoteInfo	
	{
	public:
		FVector Location; // 0x0(0x18)
		FRotator Rotation; // 0x18(0x18)
		FString Comment; // 0x30(0x10)
	};


	// Struct Engine.ScreenMessageString
	// Size: 0x38 (0x38 - 0x0)
	struct FScreenMessageString	
	{
	public:
		uint64_t Key; // 0x0(0x8)
		FString ScreenMessage; // 0x8(0x10)
		FColor DisplayColor; // 0x18(0x4)
		float TimeToDisplay; // 0x1C(0x4)
		float CurrentTimeDisplayed; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FVector2D TextScale; // 0x28(0x10)
	};


	// Struct Engine.GameNameRedirect
	// Size: 0x8 (0x8 - 0x0)
	struct FGameNameRedirect	
	{
	public:
		FName OldGameName; // 0x0(0x4)
		FName NewGameName; // 0x4(0x4)
	};


	// Struct Engine.ClassRedirect
	// Size: 0x20 (0x20 - 0x0)
	struct FClassRedirect	
	{
	public:
		FName ObjectName; // 0x0(0x4)
		FName OldClassName; // 0x4(0x4)
		FName NewClassName; // 0x8(0x4)
		FName OldSubobjName; // 0xC(0x4)
		FName NewSubobjName; // 0x10(0x4)
		FName NewClassClass; // 0x14(0x4)
		FName NewClassPackage; // 0x18(0x4)
		bool InstanceOnly; // 0x1C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.StructRedirect
	// Size: 0x8 (0x8 - 0x0)
	struct FStructRedirect	
	{
	public:
		FName OldStructName; // 0x0(0x4)
		FName NewStructName; // 0x4(0x4)
	};


	// Struct Engine.PluginRedirect
	// Size: 0x20 (0x20 - 0x0)
	struct FPluginRedirect	
	{
	public:
		FString OldPluginName; // 0x0(0x10)
		FString NewPluginName; // 0x10(0x10)
	};


	// Struct Engine.TickPrerequisite
	// Size: 0x10 (0x10 - 0x0)
	struct FTickPrerequisite	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.ExposureSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FExposureSettings	
	{
	public:
		float FixedEV100; // 0x0(0x4)
		bool bFixed; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.MaterialShadingModelField
	// Size: 0x2 (0x2 - 0x0)
	struct FMaterialShadingModelField	
	{
	public:
		uint16_t ShadingModelField; // 0x0(0x2)
	};


	// Struct Engine.RigidBodyErrorCorrection
	// Size: 0x34 (0x34 - 0x0)
	struct FRigidBodyErrorCorrection	
	{
	public:
		float PingExtrapolation; // 0x0(0x4)
		float PingLimit; // 0x4(0x4)
		float ErrorPerLinearDifference; // 0x8(0x4)
		float ErrorPerAngularDifference; // 0xC(0x4)
		float MaxRestoredStateError; // 0x10(0x4)
		float MaxLinearHardSnapDistance; // 0x14(0x4)
		float PositionLerp; // 0x18(0x4)
		float AngleLerp; // 0x1C(0x4)
		float LinearVelocityCoefficient; // 0x20(0x4)
		float AngularVelocityCoefficient; // 0x24(0x4)
		float ErrorAccumulationSeconds; // 0x28(0x4)
		float ErrorAccumulationDistanceSq; // 0x2C(0x4)
		float ErrorAccumulationSimilarity; // 0x30(0x4)
	};


	// Struct Engine.RigidBodyContactInfo
	// Size: 0x48 (0x48 - 0x0)
	struct FRigidBodyContactInfo	
	{
	public:
		FVector ContactPosition; // 0x0(0x18)
		FVector ContactNormal; // 0x18(0x18)
		float ContactPenetration; // 0x30(0x4)
		bool bContactProbe; // 0x34(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		UPhysicalMaterial PhysMaterial; // 0x38(0x10)
	};


	// Struct Engine.CollisionImpactData
	// Size: 0x48 (0x48 - 0x0)
	struct FCollisionImpactData	
	{
	public:
		TArray ContactInfos; // 0x0(0x10)
		FVector TotalNormalImpulse; // 0x10(0x18)
		FVector TotalFrictionImpulse; // 0x28(0x18)
		bool bIsVelocityDeltaUnderThreshold; // 0x40(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.FractureEffect
	// Size: 0x10 (0x10 - 0x0)
	struct FFractureEffect	
	{
	public:
		UParticleSystem ParticleSystem; // 0x0(0x8)
		USoundBase Sound; // 0x8(0x8)
	};


	// Struct Engine.BasedPosition
	// Size: 0x68 (0x68 - 0x0)
	struct FBasedPosition	
	{
	public:
		AActor base; // 0x0(0x8)
		FVector Position; // 0x8(0x18)
		FVector CachedBaseLocation; // 0x20(0x18)
		FRotator CachedBaseRotation; // 0x38(0x18)
		FVector CachedTransPosition; // 0x50(0x18)
	};


	// Struct Engine.LightmassLightSettings
	// Size: 0xC (0xC - 0x0)
	struct FLightmassLightSettings	
	{
	public:
		float IndirectLightingSaturation; // 0x0(0x4)
		float ShadowExponent; // 0x4(0x4)
		bool bUseAreaShadowsForStationaryLight; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.LightmassPointLightSettings
	// Inherited from FLightmassLightSettings
	// Size: 0x0 (0xC - 0xC)
	struct FLightmassPointLightSettings : public FLightmassLightSettings	
	{
	public:
	};


	// Struct Engine.LightmassDirectionalLightSettings
	// Inherited from FLightmassLightSettings
	// Size: 0x4 (0x10 - 0xC)
	struct FLightmassDirectionalLightSettings : public FLightmassLightSettings	
	{
	public:
		float LightSourceAngle; // 0xC(0x4)
	};


	// Struct Engine.LightmassDebugOptions
	// Size: 0x10 (0x10 - 0x0)
	struct FLightmassDebugOptions	
	{
	public:
		bool bDebugMode : 1; // 0x0:0(0x1)
		bool bStatsEnabled : 1; // 0x0:1(0x1)
		bool bGatherBSPSurfacesAcrossComponents : 1; // 0x0:2(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float CoplanarTolerance; // 0x4(0x4)
		bool bUseImmediateImport : 1; // 0x8:0(0x1)
		bool bImmediateProcessMappings : 1; // 0x8:1(0x1)
		bool bSortMappings : 1; // 0x8:2(0x1)
		bool bDumpBinaryFiles : 1; // 0x8:3(0x1)
		bool bDebugMaterials : 1; // 0x8:4(0x1)
		bool bPadMappings : 1; // 0x8:5(0x1)
		bool bDebugPaddings : 1; // 0x8:6(0x1)
		bool bOnlyCalcDebugTexelMappings : 1; // 0x8:7(0x1)
		bool bUseRandomColors : 1; // 0x9:0(0x1)
		bool bColorBordersGreen : 1; // 0x9:1(0x1)
		bool bColorByExecutionTime : 1; // 0x9:2(0x1)
		unsigned char UnknownData03_5[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
		float ExecutionTimeDivisor; // 0xC(0x4)
	};


	// Struct Engine.SwarmDebugOptions
	// Size: 0x4 (0x4 - 0x0)
	struct FSwarmDebugOptions	
	{
	public:
		bool bDistributionEnabled : 1; // 0x0:0(0x1)
		bool bForceContentExport : 1; // 0x0:1(0x1)
		bool bInitialized : 1; // 0x0:2(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.MTDResult
	// Size: 0x20 (0x20 - 0x0)
	struct FMTDResult	
	{
	public:
		FVector Direction; // 0x0(0x18)
		float Distance; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimSlotDesc
	// Size: 0x8 (0x8 - 0x0)
	struct FAnimSlotDesc	
	{
	public:
		FName SlotName; // 0x0(0x4)
		int32_t NumChannels; // 0x4(0x4)
	};


	// Struct Engine.AnimUpdateRateParameters
	// Size: 0x88 (0x88 - 0x0)
	struct FAnimUpdateRateParameters	
	{
	public:
		unsigned char UnknownData03_7[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
		EUpdateRateShiftBucket ShiftBucket; // 0x1(0x1)
		bool bInterpolateSkippedFrames : 1; // 0x2:0(0x1)
		bool bShouldUseLodMap : 1; // 0x2:1(0x1)
		bool bShouldUseMinLod : 1; // 0x2:2(0x1)
		bool bSkipUpdate : 1; // 0x2:3(0x1)
		bool bSkipEvaluation : 1; // 0x2:4(0x1)
		unsigned char UnknownData04_5[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		int32_t UpdateRate; // 0x4(0x4)
		int32_t EvaluationRate; // 0x8(0x4)
		float TickedPoseOffestTime; // 0xC(0x4)
		float AdditionalTime; // 0x10(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		int32_t BaseNonRenderedUpdateRate; // 0x18(0x4)
		int32_t MaxEvalRateForInterpolation; // 0x1C(0x4)
		TArray BaseVisibleDistanceFactorThesholds; // 0x20(0x10)
		TMap LODToFrameSkipMap; // 0x30(0x50)
		int32_t SkippedUpdateFrames; // 0x80(0x4)
		int32_t SkippedEvalFrames; // 0x84(0x4)
	};


	// Struct Engine.POV
	// Size: 0x38 (0x38 - 0x0)
	struct FPOV	
	{
	public:
		FVector Location; // 0x0(0x18)
		FRotator Rotation; // 0x18(0x18)
		float FOV; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.MeshBuildSettings
	// Size: 0x48 (0x48 - 0x0)
	struct FMeshBuildSettings	
	{
	public:
		bool bUseMikkTSpace : 1; // 0x0:0(0x1)
		bool bRecomputeNormals : 1; // 0x0:1(0x1)
		bool bRecomputeTangents : 1; // 0x0:2(0x1)
		bool bComputeWeightedNormals : 1; // 0x0:3(0x1)
		bool bRemoveDegenerates : 1; // 0x0:4(0x1)
		bool bBuildReversedIndexBuffer : 1; // 0x0:5(0x1)
		bool bUseHighPrecisionTangentBasis : 1; // 0x0:6(0x1)
		bool bUseFullPrecisionUVs : 1; // 0x0:7(0x1)
		bool bUseBackwardsCompatibleF16TruncUVs : 1; // 0x1:0(0x1)
		bool bGenerateLightmapUVs : 1; // 0x1:1(0x1)
		bool bGenerateDistanceFieldAsIfTwoSided : 1; // 0x1:2(0x1)
		bool bSupportFaceRemap : 1; // 0x1:3(0x1)
		unsigned char UnknownData04_5[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		int32_t MinLightmapResolution; // 0x4(0x4)
		int32_t SrcLightmapIndex; // 0x8(0x4)
		int32_t DstLightmapIndex; // 0xC(0x4)
		float BuildScale; // 0x10(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FVector BuildScale3D; // 0x18(0x18)
		float DistanceFieldResolutionScale; // 0x30(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		UStaticMesh DistanceFieldReplacementMesh; // 0x38(0x8)
		int32_t MaxLumenMeshCards; // 0x40(0x4)
		unsigned char UnknownData07_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.SkeletalMeshBuildSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FSkeletalMeshBuildSettings	
	{
	public:
		bool bRecomputeNormals : 1; // 0x0:0(0x1)
		bool bRecomputeTangents : 1; // 0x0:1(0x1)
		bool bUseMikkTSpace : 1; // 0x0:2(0x1)
		bool bComputeWeightedNormals : 1; // 0x0:3(0x1)
		bool bRemoveDegenerates : 1; // 0x0:4(0x1)
		bool bUseHighPrecisionTangentBasis : 1; // 0x0:5(0x1)
		bool bUseHighPrecisionSkinWeights : 1; // 0x0:6(0x1)
		bool bUseFullPrecisionUVs : 1; // 0x0:7(0x1)
		bool bUseBackwardsCompatibleF16TruncUVs : 1; // 0x1:0(0x1)
		unsigned char UnknownData01_5[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float ThresholdPosition; // 0x4(0x4)
		float ThresholdTangentNormal; // 0x8(0x4)
		float ThresholdUV; // 0xC(0x4)
		float MorphThresholdPosition; // 0x10(0x4)
		int32_t BoneInfluenceLimit; // 0x14(0x4)
	};


	// Struct Engine.MeshDisplacementMap
	// Size: 0x10 (0x10 - 0x0)
	struct FMeshDisplacementMap	
	{
	public:
		UTexture2D Texture; // 0x0(0x8)
		float Magnitude; // 0x8(0x4)
		float Center; // 0xC(0x4)
	};


	// Struct Engine.MeshNaniteSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FMeshNaniteSettings	
	{
	public:
		bool bEnabled : 1; // 0x0:0(0x1)
		bool bPreserveArea : 1; // 0x0:1(0x1)
		bool bExplicitTangents : 1; // 0x0:2(0x1)
		bool bLerpUVs : 1; // 0x0:3(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t PositionPrecision; // 0x4(0x4)
		int32_t NormalPrecision; // 0x8(0x4)
		int32_t TangentPrecision; // 0xC(0x4)
		uint32_t TargetMinimumResidencyInKB; // 0x10(0x4)
		float KeepPercentTriangles; // 0x14(0x4)
		float TrimRelativeError; // 0x18(0x4)
		ENaniteFallbackTarget FallbackTarget; // 0x1C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		float FallbackPercentTriangles; // 0x20(0x4)
		float FallbackRelativeError; // 0x24(0x4)
		float MaxEdgeLengthFactor; // 0x28(0x4)
		int32_t DisplacementUVChannel; // 0x2C(0x4)
		TArray DisplacementMaps; // 0x30(0x10)
	};


	// Struct Engine.DisplacementScaling
	// Size: 0x8 (0x8 - 0x0)
	struct FDisplacementScaling	
	{
	public:
		float Magnitude; // 0x0(0x4)
		float Center; // 0x4(0x4)
	};


	// Struct Engine.DisplacementFadeRange
	// Size: 0x8 (0x8 - 0x0)
	struct FDisplacementFadeRange	
	{
	public:
		float StartSizePixels; // 0x0(0x4)
		float EndSizePixels; // 0x4(0x4)
	};


	// Struct Engine.ConstrainComponentPropName
	// Size: 0x4 (0x4 - 0x0)
	struct FConstrainComponentPropName	
	{
	public:
		FName ComponentName; // 0x0(0x4)
	};


	// Struct Engine.CollectionReference
	// Size: 0x4 (0x4 - 0x0)
	struct FCollectionReference	
	{
	public:
		FName CollectionName; // 0x0(0x4)
	};


	// Struct Engine.Redirector
	// Size: 0x8 (0x8 - 0x0)
	struct FRedirector	
	{
	public:
		FName OldName; // 0x0(0x4)
		FName NewName; // 0x4(0x4)
	};


	// Struct Engine.DepthFieldGlowInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FDepthFieldGlowInfo	
	{
	public:
		bool bEnableGlow : 1; // 0x0:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FLinearColor GlowColor; // 0x4(0x10)
		unsigned char UnknownData03_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FVector2D GlowOuterRadius; // 0x18(0x10)
		FVector2D GlowInnerRadius; // 0x28(0x10)
	};


	// Struct Engine.FontRenderInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FFontRenderInfo	
	{
	public:
		bool bClipText : 1; // 0x0:0(0x1)
		bool bEnableShadow : 1; // 0x0:1(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FDepthFieldGlowInfo GlowInfo; // 0x8(0x38)
	};


	// Struct Engine.CanvasUVTri
	// Size: 0x90 (0x90 - 0x0)
	struct FCanvasUVTri	
	{
	public:
		FVector2D V0_Pos; // 0x0(0x10)
		FVector2D V0_UV; // 0x10(0x10)
		FLinearColor V0_Color; // 0x20(0x10)
		FVector2D V1_Pos; // 0x30(0x10)
		FVector2D V1_UV; // 0x40(0x10)
		FLinearColor V1_Color; // 0x50(0x10)
		FVector2D V2_Pos; // 0x60(0x10)
		FVector2D V2_UV; // 0x70(0x10)
		FLinearColor V2_Color; // 0x80(0x10)
	};


	// Struct Engine.ExponentialHeightFogData
	// Size: 0xC (0xC - 0x0)
	struct FExponentialHeightFogData	
	{
	public:
		float FogDensity; // 0x0(0x4)
		float FogHeightFalloff; // 0x4(0x4)
		float FogHeightOffset; // 0x8(0x4)
	};


	// Struct Engine.ExternalDataLayerUID
	// Size: 0x4 (0x4 - 0x0)
	struct FExternalDataLayerUID	
	{
	public:
		uint32_t Value; // 0x0(0x4)
	};


	// Struct Engine.ExternalSpatialAccelerationPayload
	// Size: 0x10 (0x10 - 0x0)
	struct FExternalSpatialAccelerationPayload	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.FontImportOptionsData
	// Size: 0xB0 (0xB0 - 0x0)
	struct FFontImportOptionsData	
	{
	public:
		FString FontName; // 0x0(0x10)
		float Height; // 0x10(0x4)
		bool bEnableAntialiasing : 1; // 0x14:0(0x1)
		bool bEnableBold : 1; // 0x14:1(0x1)
		bool bEnableItalic : 1; // 0x14:2(0x1)
		bool bEnableUnderline : 1; // 0x14:3(0x1)
		bool bAlphaOnly : 1; // 0x14:4(0x1)
		unsigned char UnknownData07_5[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		TEnumAsByte CharacterSet; // 0x18(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FString Chars; // 0x20(0x10)
		FString UnicodeRange; // 0x30(0x10)
		FString CharsFilePath; // 0x40(0x10)
		FString CharsFileWildcard; // 0x50(0x10)
		bool bCreatePrintableOnly : 1; // 0x60:0(0x1)
		bool bIncludeASCIIRange : 1; // 0x60:1(0x1)
		unsigned char UnknownData09_5[0x3]; // 0x61(0x3) UNKNOWN PROPERTY
		FLinearColor ForegroundColor; // 0x64(0x10)
		bool bEnableDropShadow : 1; // 0x74:0(0x1)
		unsigned char UnknownData10_5[0x3]; // 0x75(0x3) UNKNOWN PROPERTY
		int32_t TexturePageWidth; // 0x78(0x4)
		int32_t TexturePageMaxHeight; // 0x7C(0x4)
		int32_t XPadding; // 0x80(0x4)
		int32_t YPadding; // 0x84(0x4)
		int32_t ExtendBoxTop; // 0x88(0x4)
		int32_t ExtendBoxBottom; // 0x8C(0x4)
		int32_t ExtendBoxRight; // 0x90(0x4)
		int32_t ExtendBoxLeft; // 0x94(0x4)
		bool bEnableLegacyMode : 1; // 0x98:0(0x1)
		unsigned char UnknownData11_5[0x3]; // 0x99(0x3) UNKNOWN PROPERTY
		int32_t Kerning; // 0x9C(0x4)
		bool bUseDistanceFieldAlpha : 1; // 0xA0:0(0x1)
		unsigned char UnknownData12_5[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		int32_t DistanceFieldScaleFactor; // 0xA4(0x4)
		float DistanceFieldScanRadiusScale; // 0xA8(0x4)
		unsigned char UnknownData13_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.BaseAttenuationSettings
	// Size: 0xC0 (0xC0 - 0x0)
	struct FBaseAttenuationSettings	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		EAttenuationDistanceModel DistanceAlgorithm; // 0x8(0x1)
		TEnumAsByte AttenuationShape; // 0x9(0x1)
		ENaturalSoundFalloffMode FalloffMode; // 0xA(0x1)
		unsigned char UnknownData03_6[0x1]; // 0xB(0x1) UNKNOWN PROPERTY
		float dBAttenuationAtMax; // 0xC(0x4)
		FVector AttenuationShapeExtents; // 0x10(0x18)
		float ConeOffset; // 0x28(0x4)
		float FalloffDistance; // 0x2C(0x4)
		float ConeSphereRadius; // 0x30(0x4)
		float ConeSphereFalloffDistance; // 0x34(0x4)
		FRuntimeFloatCurve CustomAttenuationCurve; // 0x38(0x88)
	};


	// Struct Engine.ForceFeedbackAttenuationSettings
	// Inherited from FBaseAttenuationSettings
	// Size: 0x0 (0xC0 - 0xC0)
	struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings	
	{
	public:
	};


	// Struct Engine.PredictProjectilePathParams
	// Size: 0x78 (0x78 - 0x0)
	struct FPredictProjectilePathParams	
	{
	public:
		FVector StartLocation; // 0x0(0x18)
		FVector LaunchVelocity; // 0x18(0x18)
		bool bTraceWithCollision; // 0x30(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float ProjectileRadius; // 0x34(0x4)
		float MaxSimTime; // 0x38(0x4)
		bool bTraceWithChannel; // 0x3C(0x1)
		TEnumAsByte TraceChannel; // 0x3D(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x3E(0x2) UNKNOWN PROPERTY
		TArray ObjectTypes; // 0x40(0x10)
		TArray ActorsToIgnore; // 0x50(0x10)
		float SimFrequency; // 0x60(0x4)
		float OverrideGravityZ; // 0x64(0x4)
		TEnumAsByte DrawDebugType; // 0x68(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		float DrawDebugTime; // 0x6C(0x4)
		bool bTraceComplex; // 0x70(0x1)
		unsigned char UnknownData07_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.PredictProjectilePathPointData
	// Size: 0x38 (0x38 - 0x0)
	struct FPredictProjectilePathPointData	
	{
	public:
		FVector Location; // 0x0(0x18)
		FVector Velocity; // 0x18(0x18)
		float Time; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.PredictProjectilePathResult
	// Size: 0x140 (0x140 - 0x0)
	struct FPredictProjectilePathResult	
	{
	public:
		TArray PathData; // 0x0(0x10)
		FPredictProjectilePathPointData LastTraceDestination; // 0x10(0x38)
		FHitResult HitResult; // 0x48(0xF8)
	};


	// Struct Engine.ActiveHapticFeedbackEffect
	// Size: 0x48 (0x48 - 0x0)
	struct FActiveHapticFeedbackEffect	
	{
	public:
		UHapticFeedbackEffect_Base HapticEffect; // 0x0(0x8)
		unsigned char UnknownData01_7[0x40]; // 0x8(0x40) UNKNOWN PROPERTY
	};


	// Struct Engine.HapticFeedbackDetails_Curve
	// Size: 0x110 (0x110 - 0x0)
	struct FHapticFeedbackDetails_Curve	
	{
	public:
		FRuntimeFloatCurve Frequency; // 0x0(0x88)
		FRuntimeFloatCurve Amplitude; // 0x88(0x88)
	};


	// Struct Engine.ClusterNode_DEPRECATED
	// Size: 0x28 (0x28 - 0x0)
	struct FClusterNode_DEPRECATED	
	{
	public:
		FVector3f BoundMin; // 0x0(0xC)
		int32_t FirstChild; // 0xC(0x4)
		FVector3f BoundMax; // 0x10(0xC)
		int32_t LastChild; // 0x1C(0x4)
		int32_t FirstInstance; // 0x20(0x4)
		int32_t LastInstance; // 0x24(0x4)
	};


	// Struct Engine.ClusterNode
	// Size: 0x40 (0x40 - 0x0)
	struct FClusterNode	
	{
	public:
		FVector3f BoundMin; // 0x0(0xC)
		int32_t FirstChild; // 0xC(0x4)
		FVector3f BoundMax; // 0x10(0xC)
		int32_t LastChild; // 0x1C(0x4)
		int32_t FirstInstance; // 0x20(0x4)
		int32_t LastInstance; // 0x24(0x4)
		FVector3f MinInstanceScale; // 0x28(0xC)
		FVector3f MaxInstanceScale; // 0x34(0xC)
	};


	// Struct Engine.ISMComponentDescriptorBase
	// Size: 0x1C0 (0x1C0 - 0x0)
	struct FISMComponentDescriptorBase	
	{
	public:
		unsigned char UnknownData04_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		uint32_t Hash; // 0x8(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UClass ComponentClass; // 0x10(0x8)
		TEnumAsByte Mobility; // 0x18(0x1)
		ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x19(0x1)
		ELightmapType LightmapType; // 0x1A(0x1)
		FLightingChannels LightingChannels; // 0x1B(0x1)
		int32_t RayTracingGroupId; // 0x1C(0x4)
		ERayTracingGroupCullingPriority RayTracingGroupCullingPriority; // 0x20(0x1)
		TEnumAsByte bHasCustomNavigableGeometry; // 0x21(0x1)
		ERendererStencilMask CustomDepthStencilWriteMask; // 0x22(0x1)
		unsigned char UnknownData06_6[0x5]; // 0x23(0x5) UNKNOWN PROPERTY
		FBodyInstance BodyInstance; // 0x28(0x170)
		int32_t InstanceStartCullDistance; // 0x198(0x4)
		int32_t InstanceEndCullDistance; // 0x19C(0x4)
		float InstanceLODDistanceScale; // 0x1A0(0x4)
		int32_t VirtualTextureCullMips; // 0x1A4(0x4)
		int32_t TranslucencySortPriority; // 0x1A8(0x4)
		int32_t OverriddenLightMapRes; // 0x1AC(0x4)
		int32_t CustomDepthStencilValue; // 0x1B0(0x4)
		bool bCastShadow : 1; // 0x1B4:0(0x1)
		bool bEmissiveLightSource : 1; // 0x1B4:1(0x1)
		bool bCastDynamicShadow : 1; // 0x1B4:2(0x1)
		bool bCastStaticShadow : 1; // 0x1B4:3(0x1)
		bool bCastContactShadow : 1; // 0x1B4:4(0x1)
		bool bCastShadowAsTwoSided : 1; // 0x1B4:5(0x1)
		bool bCastHiddenShadow : 1; // 0x1B4:6(0x1)
		bool bAffectDynamicIndirectLighting : 1; // 0x1B4:7(0x1)
		bool bAffectDynamicIndirectLightingWhileHidden : 1; // 0x1B5:0(0x1)
		bool bAffectDistanceFieldLighting : 1; // 0x1B5:1(0x1)
		bool bReceivesDecals : 1; // 0x1B5:2(0x1)
		bool bOverrideLightMapRes : 1; // 0x1B5:3(0x1)
		bool bUseAsOccluder : 1; // 0x1B5:4(0x1)
		bool bEnableDensityScaling : 1; // 0x1B5:5(0x1)
		bool bEnableDiscardOnLoad : 1; // 0x1B5:6(0x1)
		bool bRenderCustomDepth : 1; // 0x1B5:7(0x1)
		bool bVisibleInRayTracing : 1; // 0x1B6:0(0x1)
		bool bHiddenInGame : 1; // 0x1B6:1(0x1)
		bool bIsEditorOnly : 1; // 0x1B6:2(0x1)
		bool bVisible : 1; // 0x1B6:3(0x1)
		bool bEvaluateWorldPositionOffset : 1; // 0x1B6:4(0x1)
		bool bReverseCulling : 1; // 0x1B6:5(0x1)
		bool bUseGpuLodSelection : 1; // 0x1B6:6(0x1)
		bool bUseDefaultCollision : 1; // 0x1B6:7(0x1)
		bool bGenerateOverlapEvents : 1; // 0x1B7:0(0x1)
		bool bOverrideNavigationExport : 1; // 0x1B7:1(0x1)
		bool bForceNavigationObstacle : 1; // 0x1B7:2(0x1)
		bool bFillCollisionUnderneathForNavmesh : 1; // 0x1B7:3(0x1)
		int32_t WorldPositionOffsetDisableDistance; // 0x1B8(0x4)
		EShadowCacheInvalidationBehavior ShadowCacheInvalidationBehavior; // 0x1BC(0x1)
		TEnumAsByte DetailMode; // 0x1BD(0x1)
		unsigned char UnknownData07_7[0x2]; // 0x1BE(0x2) UNKNOWN PROPERTY
	};


	// Struct Engine.ISMComponentDescriptor
	// Inherited from FISMComponentDescriptorBase
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FISMComponentDescriptor : public FISMComponentDescriptorBase	
	{
	public:
		UStaticMesh StaticMesh; // 0x1C0(0x8)
		TArray OverrideMaterials; // 0x1C8(0x10)
		UMaterialInterface OverlayMaterial; // 0x1D8(0x8)
		TArray RuntimeVirtualTextures; // 0x1E0(0x10)
	};


	// Struct Engine.HLODISMComponentDescriptor
	// Inherited from FISMComponentDescriptor -> FISMComponentDescriptorBase
	// Size: 0x0 (0x1F0 - 0x1F0)
	struct FHLODISMComponentDescriptor : public FISMComponentDescriptor	
	{
	public:
	};


	// Struct Engine.HierarchicalSimplification
	// Size: 0x350 (0x350 - 0x0)
	struct FHierarchicalSimplification	
	{
	public:
		float TransitionScreenSize; // 0x0(0x4)
		float OverrideDrawDistance; // 0x4(0x4)
		bool bUseOverrideDrawDistance : 1; // 0x8:0(0x1)
		bool bAllowSpecificExclusion : 1; // 0x8:1(0x1)
		bool bOnlyGenerateClustersForVolumes : 1; // 0x8:2(0x1)
		bool bReusePreviousLevelClusters : 1; // 0x8:3(0x1)
		EHierarchicalSimplificationMethod SimplificationMethod; // 0x9(0x1)
		unsigned char UnknownData02_6[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
		FMeshProxySettings ProxySetting; // 0x10(0x100)
		FMeshMergingSettings MergeSetting; // 0x110(0x108)
		FMeshApproximationSettings ApproximateSettings; // 0x218(0x128)
		float DesiredBoundRadius; // 0x340(0x4)
		float DesiredFillingPercentage; // 0x344(0x4)
		int32_t MinNumberOfActorsToBuild; // 0x348(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x34C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.MeshApproximationSettings
	// Size: 0x128 (0x128 - 0x0)
	struct FMeshApproximationSettings	
	{
	public:
		EMeshApproximationType OutputType; // 0x0(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float ApproximationAccuracy; // 0x4(0x4)
		int32_t ClampVoxelDimension; // 0x8(0x4)
		bool bAttemptAutoThickening; // 0xC(0x1)
		unsigned char UnknownData13_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		float TargetMinThicknessMultiplier; // 0x10(0x4)
		bool bIgnoreTinyParts; // 0x14(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float TinyPartSizeMultiplier; // 0x18(0x4)
		EMeshApproximationBaseCappingType BaseCapping; // 0x1C(0x1)
		unsigned char UnknownData15_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		float WindingThreshold; // 0x20(0x4)
		bool bFillGaps; // 0x24(0x1)
		unsigned char UnknownData16_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		float GapDistance; // 0x28(0x4)
		EOccludedGeometryFilteringPolicy OcclusionMethod; // 0x2C(0x1)
		bool bOccludeFromBottom; // 0x2D(0x1)
		EMeshApproximationSimplificationPolicy SimplifyMethod; // 0x2E(0x1)
		unsigned char UnknownData17_6[0x1]; // 0x2F(0x1) UNKNOWN PROPERTY
		int32_t TargetTriCount; // 0x30(0x4)
		float TrianglesPerM; // 0x34(0x4)
		float GeometricDeviation; // 0x38(0x4)
		EMeshApproximationGroundPlaneClippingPolicy GroundClipping; // 0x3C(0x1)
		unsigned char UnknownData18_6[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		float GroundClippingZHeight; // 0x40(0x4)
		bool bEstimateHardNormals; // 0x44(0x1)
		unsigned char UnknownData19_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		float HardNormalAngle; // 0x48(0x4)
		EMeshApproximationUVGenerationPolicy UVGenerationMethod; // 0x4C(0x1)
		unsigned char UnknownData20_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		int32_t InitialPatchCount; // 0x50(0x4)
		float CurvatureAlignment; // 0x54(0x4)
		float MergingThreshold; // 0x58(0x4)
		float MaxAngleDeviation; // 0x5C(0x4)
		bool bGenerateNaniteEnabledMesh; // 0x60(0x1)
		ENaniteFallbackTarget NaniteFallbackTarget; // 0x61(0x1)
		unsigned char UnknownData21_6[0x2]; // 0x62(0x2) UNKNOWN PROPERTY
		float NaniteFallbackPercentTriangles; // 0x64(0x4)
		float NaniteFallbackRelativeError; // 0x68(0x4)
		bool bSupportRayTracing; // 0x6C(0x1)
		bool bAllowDistanceField; // 0x6D(0x1)
		unsigned char UnknownData22_6[0x2]; // 0x6E(0x2) UNKNOWN PROPERTY
		int32_t MultiSamplingAA; // 0x70(0x4)
		int32_t RenderCaptureResolution; // 0x74(0x4)
		FMaterialProxySettings MaterialSettings; // 0x78(0xA0)
		float CaptureFieldOfView; // 0x118(0x4)
		float NearPlaneDist; // 0x11C(0x4)
		bool bUseRenderLODMeshes; // 0x120(0x1)
		bool bEnableSimplifyPrePass; // 0x121(0x1)
		bool bEnableParallelBaking; // 0x122(0x1)
		bool bPrintDebugMessages; // 0x123(0x1)
		bool bEmitFullDebugMesh; // 0x124(0x1)
		unsigned char UnknownData23_7[0x3]; // 0x125(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.MaterialProxySettings
	// Size: 0xA0 (0xA0 - 0x0)
	struct FMaterialProxySettings	
	{
	public:
		TEnumAsByte TextureSizingType; // 0x0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FIntPoint TextureSize; // 0x4(0x8)
		float TargetTexelDensityPerMeter; // 0xC(0x4)
		float MeshMaxScreenSizePercent; // 0x10(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		double MeshMinDrawDistance; // 0x18(0x8)
		float GutterSpace; // 0x20(0x4)
		float MetallicConstant; // 0x24(0x4)
		float RoughnessConstant; // 0x28(0x4)
		float AnisotropyConstant; // 0x2C(0x4)
		float SpecularConstant; // 0x30(0x4)
		float OpacityConstant; // 0x34(0x4)
		float OpacityMaskConstant; // 0x38(0x4)
		float AmbientOcclusionConstant; // 0x3C(0x4)
		TEnumAsByte MaterialMergeType; // 0x40(0x1)
		TEnumAsByte BlendMode; // 0x41(0x1)
		bool bAllowTwoSidedMaterial : 1; // 0x42:0(0x1)
		bool bNormalMap : 1; // 0x42:1(0x1)
		bool bTangentMap : 1; // 0x42:2(0x1)
		bool bMetallicMap : 1; // 0x42:3(0x1)
		bool bRoughnessMap : 1; // 0x42:4(0x1)
		bool bAnisotropyMap : 1; // 0x42:5(0x1)
		bool bSpecularMap : 1; // 0x42:6(0x1)
		bool bEmissiveMap : 1; // 0x42:7(0x1)
		bool bOpacityMap : 1; // 0x43:0(0x1)
		bool bOpacityMaskMap : 1; // 0x43:1(0x1)
		bool bAmbientOcclusionMap : 1; // 0x43:2(0x1)
		FIntPoint DiffuseTextureSize; // 0x44(0x8)
		FIntPoint NormalTextureSize; // 0x4C(0x8)
		FIntPoint TangentTextureSize; // 0x54(0x8)
		FIntPoint MetallicTextureSize; // 0x5C(0x8)
		FIntPoint RoughnessTextureSize; // 0x64(0x8)
		FIntPoint AnisotropyTextureSize; // 0x6C(0x8)
		FIntPoint SpecularTextureSize; // 0x74(0x8)
		FIntPoint EmissiveTextureSize; // 0x7C(0x8)
		FIntPoint OpacityTextureSize; // 0x84(0x8)
		FIntPoint OpacityMaskTextureSize; // 0x8C(0x8)
		FIntPoint AmbientOcclusionTextureSize; // 0x94(0x8)
		unsigned char UnknownData05_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.MeshMergingSettings
	// Size: 0x108 (0x108 - 0x0)
	struct FMeshMergingSettings	
	{
	public:
		int32_t TargetLightMapResolution; // 0x0(0x4)
		EUVOutput OutputUVs; // 0x4(0x8)
		unsigned char UnknownData04_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FMaterialProxySettings MaterialSettings; // 0x10(0xA0)
		int32_t GutterSize; // 0xB0(0x4)
		EMeshLODSelectionType LODSelectionType; // 0xB4(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY
		int32_t SpecificLOD; // 0xB8(0x4)
		bool bGenerateLightMapUV : 1; // 0xBC:0(0x1)
		bool bComputedLightMapResolution : 1; // 0xBC:1(0x1)
		bool bPivotPointAtZero : 1; // 0xBC:2(0x1)
		bool bMergePhysicsData : 1; // 0xBC:3(0x1)
		bool bMergeMeshSockets : 1; // 0xBC:4(0x1)
		bool bMergeMaterials : 1; // 0xBC:5(0x1)
		bool bBakeVertexDataToMesh : 1; // 0xBC:6(0x1)
		bool bUseVertexDataForBakingMaterial : 1; // 0xBC:7(0x1)
		bool bUseTextureBinning : 1; // 0xBD:0(0x1)
		bool bReuseMeshLightmapUVs : 1; // 0xBD:1(0x1)
		bool bMergeEquivalentMaterials : 1; // 0xBD:2(0x1)
		bool bUseLandscapeCulling : 1; // 0xBD:3(0x1)
		bool bIncludeImposters : 1; // 0xBD:4(0x1)
		bool bSupportRayTracing : 1; // 0xBD:5(0x1)
		bool bAllowDistanceField : 1; // 0xBD:6(0x1)
		unsigned char UnknownData06_5[0x2]; // 0xBE(0x2) UNKNOWN PROPERTY
		FMeshNaniteSettings NaniteSettings; // 0xC0(0x40)
		unsigned char UnknownData07_7[0x8]; // 0x100(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.MeshProxySettings
	// Size: 0x100 (0x100 - 0x0)
	struct FMeshProxySettings	
	{
	public:
		int32_t ScreenSize; // 0x0(0x4)
		float VoxelSize; // 0x4(0x4)
		FMaterialProxySettings MaterialSettings; // 0x8(0xA0)
		float MergeDistance; // 0xA8(0x4)
		FColor UnresolvedGeometryColor; // 0xAC(0x4)
		float MaxRayCastDist; // 0xB0(0x4)
		float HardAngleThreshold; // 0xB4(0x4)
		int32_t LightMapResolution; // 0xB8(0x4)
		TEnumAsByte NormalCalculationMethod; // 0xBC(0x1)
		TEnumAsByte LandscapeCullingPrecision; // 0xBD(0x1)
		bool bCalculateCorrectLODModel : 1; // 0xBE:0(0x1)
		bool bOverrideVoxelSize : 1; // 0xBE:1(0x1)
		bool bOverrideTransferDistance : 1; // 0xBE:2(0x1)
		bool bUseHardAngleThreshold : 1; // 0xBE:3(0x1)
		bool bComputeLightMapResolution : 1; // 0xBE:4(0x1)
		bool bRecalculateNormals : 1; // 0xBE:5(0x1)
		bool bUseLandscapeCulling : 1; // 0xBE:6(0x1)
		bool bSupportRayTracing : 1; // 0xBE:7(0x1)
		bool bAllowDistanceField : 1; // 0xBF:0(0x1)
		bool bReuseMeshLightmapUVs : 1; // 0xBF:1(0x1)
		bool bGroupIdenticalMeshesForBaking : 1; // 0xBF:2(0x1)
		bool bCreateCollision : 1; // 0xBF:3(0x1)
		bool bAllowVertexColors : 1; // 0xBF:4(0x1)
		bool bGenerateLightmapUVs : 1; // 0xBF:5(0x1)
		FMeshNaniteSettings NaniteSettings; // 0xC0(0x40)
	};


	// Struct Engine.BoneAnimationTrack
	// Size: 0x38 (0x38 - 0x0)
	struct FBoneAnimationTrack	
	{
	public:
		FRawAnimSequenceTrack InternalTrackData; // 0x0(0x30)
		int32_t BoneTreeIndex; // 0x30(0x4)
		FName Name; // 0x34(0x4)
	};


	// Struct Engine.AnimationCurveData
	// Size: 0x20 (0x20 - 0x0)
	struct FAnimationCurveData	
	{
	public:
		TArray FloatCurves; // 0x0(0x10)
		TArray TransformCurves; // 0x10(0x10)
	};


	// Struct Engine.AnimatedBoneAttribute
	// Size: 0xD8 (0xD8 - 0x0)
	struct FAnimatedBoneAttribute	
	{
	public:
		FAnimationAttributeIdentifier Identifier; // 0x0(0x30)
		FAttributeCurve Curve; // 0x30(0xA8)
	};


	// Struct Engine.AttributeCurve
	// Inherited from FIndexedCurve
	// Size: 0x40 (0xA8 - 0x68)
	struct FAttributeCurve : public FIndexedCurve	
	{
	public:
		TArray Keys; // 0x68(0x10)
		FSoftObjectPath ScriptStructPath; // 0x78(0x18)
		UScriptStruct ScriptStruct; // 0x90(0x8)
		bool bShouldInterpolate; // 0x98(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x99(0xF) UNKNOWN PROPERTY
	};


	// Struct Engine.AttributeKey
	// Size: 0x18 (0x18 - 0x0)
	struct FAttributeKey	
	{
	public:
		float Time; // 0x0(0x4)
		unsigned char UnknownData01_7[0x14]; // 0x4(0x14) UNKNOWN PROPERTY
	};


	// Struct Engine.InstancedStaticMeshInstanceData
	// Size: 0x80 (0x80 - 0x0)
	struct FInstancedStaticMeshInstanceData	
	{
	public:
		FMatrix Transform; // 0x0(0x80)
	};


	// Struct Engine.InstancedStaticMeshMappingInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FInstancedStaticMeshMappingInfo	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.InstancedStaticMeshRandomSeed
	// Size: 0x8 (0x8 - 0x0)
	struct FInstancedStaticMeshRandomSeed	
	{
	public:
		int32_t StartInstanceIndex; // 0x0(0x4)
		int32_t RandomSeed; // 0x4(0x4)
	};


	// Struct Engine.InstancedStaticMeshLightMapInstanceData
	// Size: 0x70 (0x70 - 0x0)
	struct FInstancedStaticMeshLightMapInstanceData	
	{
	public:
		FTransform Transform; // 0x0(0x60)
		TArray MapBuildDataIds; // 0x60(0x10)
	};


	// Struct Engine.InstancedStaticMeshComponentInstanceData
	// Inherited from FSceneComponentInstanceData -> FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0xC8 (0x180 - 0xB8)
	struct FInstancedStaticMeshComponentInstanceData : public FSceneComponentInstanceData	
	{
	public:
		UStaticMesh StaticMesh; // 0xB8(0x8)
		FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xC0(0x70)
		TArray PerInstanceSMData; // 0x130(0x10)
		unsigned char UnknownData03_6[0x20]; // 0x140(0x20) UNKNOWN PROPERTY
		int32_t InstancingRandomSeed; // 0x160(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
		TArray AdditionalRandomSeeds; // 0x168(0x10)
		bool bHasPerInstanceHitProxies; // 0x178(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x179(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.UniqueNetIdReplNetSerializerStringStruct
	// Size: 0x10 (0x10 - 0x0)
	struct FUniqueNetIdReplNetSerializerStringStruct	
	{
	public:
		FString String; // 0x0(0x10)
	};


	// Struct Engine.UniqueNetIdReplNetSerializerNameStruct
	// Size: 0x4 (0x4 - 0x0)
	struct FUniqueNetIdReplNetSerializerNameStruct	
	{
	public:
		FName Name; // 0x0(0x4)
	};


	// Struct Engine.ISMClientHandle
	// Size: 0x14 (0x14 - 0x0)
	struct FISMClientHandle	
	{
	public:
		int32_t Index; // 0x0(0x4)
		FGuid Guid; // 0x4(0x10)
	};


	// Struct Engine.ISMClientInstanceManagerData
	// Size: 0x10 (0x10 - 0x0)
	struct FISMClientInstanceManagerData	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.NewLevelInstanceParams
	// Size: 0x48 (0x48 - 0x0)
	struct FNewLevelInstanceParams	
	{
	public:
		ELevelInstanceCreationType Type; // 0x0(0x1)
		ELevelInstancePivotType PivotType; // 0x1(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		AActor PivotActor; // 0x8(0x8)
		bool bAlwaysShowDialog; // 0x10(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		UWorld TemplateWorld; // 0x18(0x8)
		FString LevelPackageName; // 0x20(0x10)
		bool bPromptForSave; // 0x30(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		UClass LevelInstanceClass; // 0x38(0x8)
		bool bEnableStreaming; // 0x40(0x1)
		bool bExternalActors; // 0x41(0x1)
		bool bForceExternalActors; // 0x42(0x1)
		bool bHideCreationType; // 0x43(0x1)
		unsigned char UnknownData07_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.ExpressionExecOutput
	// Size: 0x8 (0x8 - 0x0)
	struct FExpressionExecOutput	
	{
	public:
		UMaterialExpression Expression; // 0x0(0x8)
	};


	// Struct Engine.MaterialExpressionCollection
	// Size: 0x30 (0x30 - 0x0)
	struct FMaterialExpressionCollection	
	{
	public:
		TArray Expressions; // 0x0(0x10)
		TArray EditorComments; // 0x10(0x10)
		UMaterialExpressionExecBegin ExpressionExecBegin; // 0x20(0x8)
		UMaterialExpressionExecEnd ExpressionExecEnd; // 0x28(0x8)
	};


	// Struct Engine.CustomInput
	// Size: 0x30 (0x30 - 0x0)
	struct FCustomInput	
	{
	public:
		FName InputName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FExpressionInput Input; // 0x8(0x28)
	};


	// Struct Engine.CustomOutput
	// Size: 0x8 (0x8 - 0x0)
	struct FCustomOutput	
	{
	public:
		FName OutputName; // 0x0(0x4)
		TEnumAsByte OutputType; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.CustomDefine
	// Size: 0x20 (0x20 - 0x0)
	struct FCustomDefine	
	{
	public:
		FString DefineName; // 0x0(0x10)
		FString DefineValue; // 0x10(0x10)
	};


	// Struct Engine.DataDrivenShaderPlatformInfoInput
	// Size: 0x8 (0x8 - 0x0)
	struct FDataDrivenShaderPlatformInfoInput	
	{
	public:
		FName InputName; // 0x0(0x4)
		TEnumAsByte PropertyCondition; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.FunctionExpressionInput
	// Size: 0x40 (0x40 - 0x0)
	struct FFunctionExpressionInput	
	{
	public:
		UMaterialExpressionFunctionInput ExpressionInput; // 0x0(0x8)
		FGuid ExpressionInputId; // 0x8(0x10)
		FExpressionInput Input; // 0x18(0x28)
	};


	// Struct Engine.FunctionExpressionOutput
	// Size: 0x30 (0x30 - 0x0)
	struct FFunctionExpressionOutput	
	{
	public:
		UMaterialExpressionFunctionOutput ExpressionOutput; // 0x0(0x8)
		FGuid ExpressionOutputId; // 0x8(0x10)
		FExpressionOutput Output; // 0x18(0x18)
	};


	// Struct Engine.CompositeReroute
	// Size: 0x10 (0x10 - 0x0)
	struct FCompositeReroute	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UMaterialExpressionReroute Expression; // 0x8(0x8)
	};


	// Struct Engine.SwitchCustomInput
	// Size: 0x30 (0x30 - 0x0)
	struct FSwitchCustomInput	
	{
	public:
		FName InputName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FExpressionInput Input; // 0x8(0x28)
	};


	// Struct Engine.MaterialInstanceBasePropertyOverrides
	// Size: 0x20 (0x20 - 0x0)
	struct FMaterialInstanceBasePropertyOverrides	
	{
	public:
		bool bOverride_OpacityMaskClipValue : 1; // 0x0:0(0x1)
		bool bOverride_BlendMode : 1; // 0x0:1(0x1)
		bool bOverride_ShadingModel : 1; // 0x0:2(0x1)
		bool bOverride_DitheredLODTransition : 1; // 0x0:3(0x1)
		bool bOverride_CastDynamicShadowAsMasked : 1; // 0x0:4(0x1)
		bool bOverride_TwoSided : 1; // 0x0:5(0x1)
		bool bOverride_bIsThinSurface : 1; // 0x0:6(0x1)
		bool bOverride_OutputTranslucentVelocity : 1; // 0x0:7(0x1)
		bool bOverride_bHasPixelAnimation : 1; // 0x1:0(0x1)
		bool bOverride_bEnableTessellation : 1; // 0x1:1(0x1)
		bool bOverride_DisplacementScaling : 1; // 0x1:2(0x1)
		bool bOverride_bEnableDisplacementFade : 1; // 0x1:3(0x1)
		bool bOverride_DisplacementFadeRange : 1; // 0x1:4(0x1)
		bool bOverride_MaxWorldPositionOffsetDisplacement : 1; // 0x1:5(0x1)
		bool TwoSided : 1; // 0x1:6(0x1)
		bool bIsThinSurface : 1; // 0x1:7(0x1)
		bool DitheredLODTransition : 1; // 0x2:0(0x1)
		bool bCastDynamicShadowAsMasked : 1; // 0x2:1(0x1)
		bool bOutputTranslucentVelocity : 1; // 0x2:2(0x1)
		bool bHasPixelAnimation : 1; // 0x2:3(0x1)
		bool bEnableTessellation : 1; // 0x2:4(0x1)
		bool bEnableDisplacementFade : 1; // 0x2:5(0x1)
		TEnumAsByte BlendMode; // 0x3(0x1)
		TEnumAsByte ShadingModel; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float OpacityMaskClipValue; // 0x8(0x4)
		FDisplacementScaling DisplacementScaling; // 0xC(0x8)
		FDisplacementFadeRange DisplacementFadeRange; // 0x14(0x8)
		float MaxWorldPositionOffsetDisplacement; // 0x1C(0x4)
	};


	// Struct Engine.LightmassMaterialInterfaceSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FLightmassMaterialInterfaceSettings	
	{
	public:
		float EmissiveBoost; // 0x0(0x4)
		float DiffuseBoost; // 0x4(0x4)
		float ExportResolutionScale; // 0x8(0x4)
		bool bCastShadowAsMasked : 1; // 0xC:0(0x1)
		bool bOverrideCastShadowAsMasked : 1; // 0xC:1(0x1)
		bool bOverrideEmissiveBoost : 1; // 0xC:2(0x1)
		bool bOverrideDiffuseBoost : 1; // 0xC:3(0x1)
		bool bOverrideExportResolutionScale : 1; // 0xC:4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.MaterialTextureInfo
	// Size: 0xC (0xC - 0x0)
	struct FMaterialTextureInfo	
	{
	public:
		float SamplingScale; // 0x0(0x4)
		int32_t UVChannelIndex; // 0x4(0x4)
		FName TextureName; // 0x8(0x4)
	};


	// Struct Engine.MaterialLayersFunctionsEditorOnlyData
	// Size: 0x70 (0x70 - 0x0)
	struct FMaterialLayersFunctionsEditorOnlyData	
	{
	public:
		TArray LayerStates; // 0x0(0x10)
		TArray LayerNames; // 0x10(0x10)
		TArray RestrictToLayerRelatives; // 0x20(0x10)
		TArray RestrictToBlendRelatives; // 0x30(0x10)
		TArray LayerGuids; // 0x40(0x10)
		TArray LayerLinkStates; // 0x50(0x10)
		TArray DeletedParentLayerGuids; // 0x60(0x10)
	};


	// Struct Engine.MaterialLayersFunctionsTree
	// Size: 0x28 (0x28 - 0x0)
	struct FMaterialLayersFunctionsTree	
	{
	public:
		unsigned char UnknownData01_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct Engine.MaterialLayersFunctionsRuntimeData
	// Size: 0x48 (0x48 - 0x0)
	struct FMaterialLayersFunctionsRuntimeData	
	{
	public:
		TArray Layers; // 0x0(0x10)
		TArray Blends; // 0x10(0x10)
		FMaterialLayersFunctionsTree Tree; // 0x20(0x28)
	};


	// Struct Engine.MaterialLayersFunctions
	// Inherited from FMaterialLayersFunctionsRuntimeData
	// Size: 0xE0 (0x128 - 0x48)
	struct FMaterialLayersFunctions : public FMaterialLayersFunctionsRuntimeData	
	{
	public:
		FMaterialLayersFunctionsEditorOnlyData EditorOnly; // 0x48(0x70)
		TArray LayerStates; // 0xB8(0x10)
		TArray LayerNames; // 0xC8(0x10)
		TArray RestrictToLayerRelatives; // 0xD8(0x10)
		TArray RestrictToBlendRelatives; // 0xE8(0x10)
		TArray LayerGuids; // 0xF8(0x10)
		TArray LayerLinkStates; // 0x108(0x10)
		TArray DeletedParentLayerGuids; // 0x118(0x10)
	};


	// Struct Engine.ParameterChannelNames
	// Size: 0x40 (0x40 - 0x0)
	struct FParameterChannelNames	
	{
	public:
		FText R; // 0x0(0x10)
		FText G; // 0x10(0x10)
		FText B; // 0x20(0x10)
		FText A; // 0x30(0x10)
	};


	// Struct Engine.StaticComponentMaskValue
	// Size: 0x4 (0x4 - 0x0)
	struct FStaticComponentMaskValue	
	{
	public:
		bool R; // 0x0(0x1)
		bool G; // 0x1(0x1)
		bool B; // 0x2(0x1)
		bool A; // 0x3(0x1)
	};


	// Struct Engine.StaticMeshBudgetInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FStaticMeshBudgetInfo	
	{
	public:
		FName LodGroupName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		double MinimumExtent; // 0x8(0x8)
	};


	// Struct Engine.MeshDrawCommandStatsBudget
	// Size: 0x30 (0x30 - 0x0)
	struct FMeshDrawCommandStatsBudget	
	{
	public:
		FName CategoryName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray LinkedStatNames; // 0x8(0x10)
		int32_t PrimitiveBudget; // 0x18(0x4)
		int32_t Collection; // 0x1C(0x4)
		TArray Passes; // 0x20(0x10)
	};


	// Struct Engine.MeshDrawCommandStatsBudgetTotals
	// Size: 0x8 (0x8 - 0x0)
	struct FMeshDrawCommandStatsBudgetTotals	
	{
	public:
		int32_t PrimitiveBudget; // 0x0(0x4)
		int32_t Collection; // 0x4(0x4)
	};


	// Struct Engine.MeshInstancingSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FMeshInstancingSettings	
	{
	public:
		UClass ActorClassToUse; // 0x0(0x8)
		int32_t InstanceReplacementThreshold; // 0x8(0x4)
		bool bSkipMeshesWithVertexColors; // 0xC(0x1)
		bool bUseHLODVolumes; // 0xD(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
		UClass ISMComponentToUse; // 0x10(0x8)
	};


	// Struct Engine.MeshReductionSettings
	// Size: 0x2C (0x2C - 0x0)
	struct FMeshReductionSettings	
	{
	public:
		float PercentTriangles; // 0x0(0x4)
		uint32_t MaxNumOfTriangles; // 0x4(0x4)
		float PercentVertices; // 0x8(0x4)
		uint32_t MaxNumOfVerts; // 0xC(0x4)
		float MaxDeviation; // 0x10(0x4)
		float PixelError; // 0x14(0x4)
		float WeldingThreshold; // 0x18(0x4)
		float HardAngleThreshold; // 0x1C(0x4)
		int32_t BaseLODModel; // 0x20(0x4)
		TEnumAsByte SilhouetteImportance; // 0x24(0x1)
		TEnumAsByte TextureImportance; // 0x25(0x1)
		TEnumAsByte ShadingImportance; // 0x26(0x1)
		bool bRecalculateNormals : 1; // 0x27:0(0x1)
		bool bGenerateUniqueLightmapUVs : 1; // 0x27:1(0x1)
		bool bKeepSymmetry : 1; // 0x27:2(0x1)
		bool bVisibilityAided : 1; // 0x27:3(0x1)
		bool bCullOccluded : 1; // 0x27:4(0x1)
		EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x28(0x1)
		TEnumAsByte VisibilityAggressiveness; // 0x29(0x1)
		TEnumAsByte VertexColorImportance; // 0x2A(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x2B(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.MeshUVChannelInfo
	// Size: 0x14 (0x14 - 0x0)
	struct FMeshUVChannelInfo	
	{
	public:
		bool bInitialized; // 0x0(0x1)
		bool bOverrideDensities; // 0x1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float LocalUVDensities; // 0x4(0x10)
	};


	// Struct Engine.PurchaseInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FPurchaseInfo	
	{
	public:
		FString Identifier; // 0x0(0x10)
		FString DisplayName; // 0x10(0x10)
		FString DisplayDescription; // 0x20(0x10)
		FString DisplayPrice; // 0x30(0x10)
	};


	// Struct Engine.NavAgentSelector
	// Size: 0x4 (0x4 - 0x0)
	struct FNavAgentSelector	
	{
	public:
		bool bSupportsAgent0 : 1; // 0x0:0(0x1)
		bool bSupportsAgent1 : 1; // 0x0:1(0x1)
		bool bSupportsAgent2 : 1; // 0x0:2(0x1)
		bool bSupportsAgent3 : 1; // 0x0:3(0x1)
		bool bSupportsAgent4 : 1; // 0x0:4(0x1)
		bool bSupportsAgent5 : 1; // 0x0:5(0x1)
		bool bSupportsAgent6 : 1; // 0x0:6(0x1)
		bool bSupportsAgent7 : 1; // 0x0:7(0x1)
		bool bSupportsAgent8 : 1; // 0x1:0(0x1)
		bool bSupportsAgent9 : 1; // 0x1:1(0x1)
		bool bSupportsAgent10 : 1; // 0x1:2(0x1)
		bool bSupportsAgent11 : 1; // 0x1:3(0x1)
		bool bSupportsAgent12 : 1; // 0x1:4(0x1)
		bool bSupportsAgent13 : 1; // 0x1:5(0x1)
		bool bSupportsAgent14 : 1; // 0x1:6(0x1)
		bool bSupportsAgent15 : 1; // 0x1:7(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
	};


	// Struct Engine.NavigationLinkBase
	// Size: 0x40 (0x40 - 0x0)
	struct FNavigationLinkBase	
	{
	public:
		float LeftProjectHeight; // 0x0(0x4)
		float MaxFallDownLength; // 0x4(0x4)
		unsigned char UnknownData04_6[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
		float SnapRadius; // 0x18(0x4)
		float SnapHeight; // 0x1C(0x4)
		FNavAgentSelector SupportedAgents; // 0x20(0x4)
		bool bSupportsAgent0 : 1; // 0x24:0(0x1)
		bool bSupportsAgent1 : 1; // 0x24:1(0x1)
		bool bSupportsAgent2 : 1; // 0x24:2(0x1)
		bool bSupportsAgent3 : 1; // 0x24:3(0x1)
		bool bSupportsAgent4 : 1; // 0x24:4(0x1)
		bool bSupportsAgent5 : 1; // 0x24:5(0x1)
		bool bSupportsAgent6 : 1; // 0x24:6(0x1)
		bool bSupportsAgent7 : 1; // 0x24:7(0x1)
		bool bSupportsAgent8 : 1; // 0x25:0(0x1)
		bool bSupportsAgent9 : 1; // 0x25:1(0x1)
		bool bSupportsAgent10 : 1; // 0x25:2(0x1)
		bool bSupportsAgent11 : 1; // 0x25:3(0x1)
		bool bSupportsAgent12 : 1; // 0x25:4(0x1)
		bool bSupportsAgent13 : 1; // 0x25:5(0x1)
		bool bSupportsAgent14 : 1; // 0x25:6(0x1)
		bool bSupportsAgent15 : 1; // 0x25:7(0x1)
		unsigned char UnknownData05_5[0x2]; // 0x26(0x2) UNKNOWN PROPERTY
		TEnumAsByte Direction; // 0x28(0x1)
		bool bUseSnapHeight : 1; // 0x29:0(0x1)
		bool bSnapToCheapestArea : 1; // 0x29:1(0x1)
		bool bCustomFlag0 : 1; // 0x29:2(0x1)
		bool bCustomFlag1 : 1; // 0x29:3(0x1)
		bool bCustomFlag2 : 1; // 0x29:4(0x1)
		bool bCustomFlag3 : 1; // 0x29:5(0x1)
		bool bCustomFlag4 : 1; // 0x29:6(0x1)
		bool bCustomFlag5 : 1; // 0x29:7(0x1)
		bool bCustomFlag6 : 1; // 0x2A:0(0x1)
		bool bCustomFlag7 : 1; // 0x2A:1(0x1)
		unsigned char UnknownData06_5[0x5]; // 0x2B(0x5) UNKNOWN PROPERTY
		UClass AreaClass; // 0x30(0x8)
		unsigned char UnknownData07_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.NavigationLink
	// Inherited from FNavigationLinkBase
	// Size: 0x30 (0x70 - 0x40)
	struct FNavigationLink : public FNavigationLinkBase	
	{
	public:
		FVector Left; // 0x40(0x18)
		FVector Right; // 0x58(0x18)
	};


	// Struct Engine.NavigationSegmentLink
	// Inherited from FNavigationLinkBase
	// Size: 0x60 (0xA0 - 0x40)
	struct FNavigationSegmentLink : public FNavigationLinkBase	
	{
	public:
		FVector LeftStart; // 0x40(0x18)
		FVector LeftEnd; // 0x58(0x18)
		FVector RightStart; // 0x70(0x18)
		FVector RightEnd; // 0x88(0x18)
	};


	// Struct Engine.NetworkPhysicsSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FNetworkPhysicsSettings	
	{
	public:
		bool bOverrideSimProxyRepMode : 1; // 0x0:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		EPhysicsReplicationMode SimProxyRepMode; // 0x4(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.NetworkPhysicsSettingsDefaultReplication
	// Size: 0x20 (0x20 - 0x0)
	struct FNetworkPhysicsSettingsDefaultReplication	
	{
	public:
		bool bOverrideMaxLinearHardSnapDistance : 1; // 0x0:0(0x1)
		unsigned char UnknownData07_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float MaxLinearHardSnapDistance; // 0x4(0x4)
		bool bOverrideDefaultLegacyHardsnapInPT : 1; // 0x8:0(0x1)
		unsigned char UnknownData08_5[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		bool bHardsnapInPhysicsThread; // 0xC(0x1)
		unsigned char UnknownData09_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		bool bOverrideCorrectConnectedBodies : 1; // 0x10:0(0x1)
		unsigned char UnknownData10_5[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		bool bCorrectConnectedBodies; // 0x14(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		bool bOverrideCorrectConnectedBodiesFriction : 1; // 0x18:0(0x1)
		unsigned char UnknownData12_5[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		bool bCorrectConnectedBodiesFriction; // 0x1C(0x1)
		unsigned char UnknownData13_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.NetworkPhysicsSettingsPredictiveInterpolation
	// Size: 0x80 (0x80 - 0x0)
	struct FNetworkPhysicsSettingsPredictiveInterpolation	
	{
	public:
		bool bOverridePosCorrectionTimeBase : 1; // 0x0:0(0x1)
		unsigned char UnknownData22_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float PosCorrectionTimeBase; // 0x4(0x4)
		bool bOverridePosCorrectionTimeMin : 1; // 0x8:0(0x1)
		unsigned char UnknownData23_5[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float PosCorrectionTimeMin; // 0xC(0x4)
		bool bOverridePosCorrectionTimeMultiplier : 1; // 0x10:0(0x1)
		unsigned char UnknownData24_5[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float PosCorrectionTimeMultiplier; // 0x14(0x4)
		bool bOverrideRotCorrectionTimeBase : 1; // 0x18:0(0x1)
		unsigned char UnknownData25_5[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		float RotCorrectionTimeBase; // 0x1C(0x4)
		bool bOverrideRotCorrectionTimeMin : 1; // 0x20:0(0x1)
		unsigned char UnknownData26_5[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		float RotCorrectionTimeMin; // 0x24(0x4)
		bool bOverrideRotCorrectionTimeMultiplier : 1; // 0x28:0(0x1)
		unsigned char UnknownData27_5[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float RotCorrectionTimeMultiplier; // 0x2C(0x4)
		bool bOverridePosInterpolationTimeMultiplier : 1; // 0x30:0(0x1)
		unsigned char UnknownData28_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float PosInterpolationTimeMultiplier; // 0x34(0x4)
		bool bOverrideRotInterpolationTimeMultiplier : 1; // 0x38:0(0x1)
		unsigned char UnknownData29_5[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float RotInterpolationTimeMultiplier; // 0x3C(0x4)
		bool bOverrideSoftSnapPosStrength : 1; // 0x40:0(0x1)
		unsigned char UnknownData30_5[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		float SoftSnapPosStrength; // 0x44(0x4)
		bool bOverrideSoftSnapRotStrength : 1; // 0x48:0(0x1)
		unsigned char UnknownData31_5[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		float SoftSnapRotStrength; // 0x4C(0x4)
		bool bOverrideSoftSnapToSource : 1; // 0x50:0(0x1)
		unsigned char UnknownData32_5[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		bool bSoftSnapToSource; // 0x54(0x1)
		unsigned char UnknownData33_6[0x3]; // 0x55(0x3) UNKNOWN PROPERTY
		bool bOverrideDisableSoftSnap : 1; // 0x58:0(0x1)
		unsigned char UnknownData34_5[0x3]; // 0x59(0x3) UNKNOWN PROPERTY
		bool bDisableSoftSnap; // 0x5C(0x1)
		unsigned char UnknownData35_6[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY
		bool bOverrideSkipVelocityRepOnPosEarlyOut : 1; // 0x60:0(0x1)
		unsigned char UnknownData36_5[0x3]; // 0x61(0x3) UNKNOWN PROPERTY
		bool bSkipVelocityRepOnPosEarlyOut; // 0x64(0x1)
		unsigned char UnknownData37_6[0x3]; // 0x65(0x3) UNKNOWN PROPERTY
		bool bOverridePostResimWaitForUpdate : 1; // 0x68:0(0x1)
		unsigned char UnknownData38_5[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		bool bPostResimWaitForUpdate; // 0x6C(0x1)
		unsigned char UnknownData39_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		bool bOverrideCorrectConnectedBodies : 1; // 0x70:0(0x1)
		unsigned char UnknownData40_5[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		bool bCorrectConnectedBodies; // 0x74(0x1)
		unsigned char UnknownData41_6[0x3]; // 0x75(0x3) UNKNOWN PROPERTY
		bool bOverrideCorrectConnectedBodiesFriction : 1; // 0x78:0(0x1)
		unsigned char UnknownData42_5[0x3]; // 0x79(0x3) UNKNOWN PROPERTY
		bool bCorrectConnectedBodiesFriction; // 0x7C(0x1)
		unsigned char UnknownData43_7[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.NetworkPhysicsSettingsResimulation
	// Size: 0x40 (0x40 - 0x0)
	struct FNetworkPhysicsSettingsResimulation	
	{
	public:
		bool bOverrideResimulationErrorThreshold : 1; // 0x0:0(0x1)
		unsigned char UnknownData11_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		uint32_t ResimulationErrorThreshold; // 0x4(0x4)
		bool bOverrideRuntimeCorrectionEnabled : 1; // 0x8:0(0x1)
		unsigned char UnknownData12_5[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		bool bRuntimeCorrectionEnabled; // 0xC(0x1)
		unsigned char UnknownData13_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		bool bOverrideRuntimeVelocityCorrection : 1; // 0x10:0(0x1)
		unsigned char UnknownData14_5[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		bool bRuntimeVelocityCorrection; // 0x14(0x1)
		unsigned char UnknownData15_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		bool bOverrideRuntimeCorrectConnectedBodies : 1; // 0x18:0(0x1)
		unsigned char UnknownData16_5[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		bool bRuntimeCorrectConnectedBodies; // 0x1C(0x1)
		unsigned char UnknownData17_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		bool bOverridePosStabilityMultiplier : 1; // 0x20:0(0x1)
		unsigned char UnknownData18_5[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		float PosStabilityMultiplier; // 0x24(0x4)
		bool bOverrideRotStabilityMultiplier : 1; // 0x28:0(0x1)
		unsigned char UnknownData19_5[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float RotStabilityMultiplier; // 0x2C(0x4)
		bool bOverrideVelStabilityMultiplier : 1; // 0x30:0(0x1)
		unsigned char UnknownData20_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float VelStabilityMultiplier; // 0x34(0x4)
		bool bOverrideAngVelStabilityMultiplier : 1; // 0x38:0(0x1)
		unsigned char UnknownData21_5[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float AngVelStabilityMultiplier; // 0x3C(0x4)
	};


	// Struct Engine.NetworkPhysicsSettingsNetworkPhysicsComponent
	// Size: 0x48 (0x48 - 0x0)
	struct FNetworkPhysicsSettingsNetworkPhysicsComponent	
	{
	public:
		bool bOverrideRedundantInputs : 1; // 0x0:0(0x1)
		unsigned char UnknownData18_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		char RedundantInputs; // 0x4(0x1)
		unsigned char UnknownData19_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		bool bOverrideRedundantStates : 1; // 0x8:0(0x1)
		unsigned char UnknownData20_5[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		char RedundantStates; // 0xC(0x1)
		unsigned char UnknownData21_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		bool bOverrideCompareStateToTriggerRewind : 1; // 0x10:0(0x1)
		unsigned char UnknownData22_5[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		bool bCompareStateToTriggerRewind; // 0x14(0x1)
		unsigned char UnknownData23_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		bool bOverrideCompareInputToTriggerRewind : 1; // 0x18:0(0x1)
		unsigned char UnknownData24_5[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		bool bCompareInputToTriggerRewind; // 0x1C(0x1)
		unsigned char UnknownData25_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		bool bOverrideEnableUnreliableFlow : 1; // 0x20:0(0x1)
		unsigned char UnknownData26_5[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		bool bEnableUnreliableFlow; // 0x24(0x1)
		unsigned char UnknownData27_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		bool bOverrideEnableReliableFlow : 1; // 0x28:0(0x1)
		unsigned char UnknownData28_5[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		bool bEnableReliableFlow; // 0x2C(0x1)
		unsigned char UnknownData29_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		bool bOverrideApplyDataInsteadOfMergeData : 1; // 0x30:0(0x1)
		unsigned char UnknownData30_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		bool bApplyDataInsteadOfMergeData; // 0x34(0x1)
		unsigned char UnknownData31_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		bool bOverrideAllowInputExtrapolation : 1; // 0x38:0(0x1)
		unsigned char UnknownData32_5[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		bool bAllowInputExtrapolation; // 0x3C(0x1)
		unsigned char UnknownData33_6[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		bool bOverrideValidateDataOnGameThread : 1; // 0x40:0(0x1)
		unsigned char UnknownData34_5[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		bool bValidateDataOnGameThread; // 0x44(0x1)
		unsigned char UnknownData35_7[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.OverlapResult
	// Size: 0x48 (0x48 - 0x0)
	struct FOverlapResult	
	{
	public:
		FActorInstanceHandle OverlapObjectHandle; // 0x0(0x20)
		TWeakObjectPtr Component; // 0x20(0x8)
		unsigned char UnknownData02_6[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		bool bBlockingHit : 1; // 0x40:0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.ParticleBurst
	// Size: 0xC (0xC - 0x0)
	struct FParticleBurst	
	{
	public:
		int32_t Count; // 0x0(0x4)
		int32_t CountLow; // 0x4(0x4)
		float Time; // 0x8(0x4)
	};


	// Struct Engine.ParticleCurvePair
	// Size: 0x18 (0x18 - 0x0)
	struct FParticleCurvePair	
	{
	public:
		FString CurveName; // 0x0(0x10)
		UObject CurveObject; // 0x10(0x8)
	};


	// Struct Engine.ParticleRandomSeedInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FParticleRandomSeedInfo	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		bool bGetSeedFromInstance : 1; // 0x4:0(0x1)
		bool bInstanceSeedIsIndex : 1; // 0x4:1(0x1)
		bool bResetSeedOnEmitterLooping : 1; // 0x4:2(0x1)
		bool bRandomlySelectSeedArray : 1; // 0x4:3(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		TArray RandomSeeds; // 0x8(0x10)
	};


	// Struct Engine.BeamModifierOptions
	// Size: 0x4 (0x4 - 0x0)
	struct FBeamModifierOptions	
	{
	public:
		bool bModify : 1; // 0x0:0(0x1)
		bool bScale : 1; // 0x0:1(0x1)
		bool bLock : 1; // 0x0:2(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.ParticleEvent_GenerateInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FParticleEvent_GenerateInfo	
	{
	public:
		TEnumAsByte Type; // 0x0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t Frequency; // 0x4(0x4)
		int32_t ParticleFrequency; // 0x8(0x4)
		bool FirstTimeOnly : 1; // 0xC:0(0x1)
		bool LastTimeOnly : 1; // 0xC:1(0x1)
		bool UseReflectedImpactVector : 1; // 0xC:2(0x1)
		bool bUseOrbitOffset : 1; // 0xC:3(0x1)
		unsigned char UnknownData04_5[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FName CustomName; // 0x10(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray ParticleModuleEventsToSendToGame; // 0x18(0x10)
	};


	// Struct Engine.LocationBoneSocketInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FLocationBoneSocketInfo	
	{
	public:
		FName BoneSocketName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Offset; // 0x8(0x18)
	};


	// Struct Engine.OrbitOptions
	// Size: 0x4 (0x4 - 0x0)
	struct FOrbitOptions	
	{
	public:
		bool bProcessDuringSpawn : 1; // 0x0:0(0x1)
		bool bProcessDuringUpdate : 1; // 0x0:1(0x1)
		bool bUseEmitterTime : 1; // 0x0:2(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.EmitterDynamicParameter
	// Size: 0x40 (0x40 - 0x0)
	struct FEmitterDynamicParameter	
	{
	public:
		FName ParamName; // 0x0(0x4)
		bool bUseEmitterTime : 1; // 0x4:0(0x1)
		bool bSpawnTimeOnly : 1; // 0x4:1(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		TEnumAsByte ValueMethod; // 0x8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		bool bScaleVelocityByParamValue : 1; // 0xC:0(0x1)
		unsigned char UnknownData05_5[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FRawDistributionFloat ParamValue; // 0x10(0x30)
	};


	// Struct Engine.BeamTargetData
	// Size: 0x8 (0x8 - 0x0)
	struct FBeamTargetData	
	{
	public:
		FName TargetName; // 0x0(0x4)
		float TargetPercentage; // 0x4(0x4)
	};


	// Struct Engine.GPUSpriteLocalVectorFieldInfo
	// Size: 0xD0 (0xD0 - 0x0)
	struct FGPUSpriteLocalVectorFieldInfo	
	{
	public:
		UVectorField Field; // 0x0(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		FRotator MinInitialRotation; // 0x70(0x18)
		FRotator MaxInitialRotation; // 0x88(0x18)
		FRotator RotationRate; // 0xA0(0x18)
		float Intensity; // 0xB8(0x4)
		float Tightness; // 0xBC(0x4)
		bool bIgnoreComponentTransform : 1; // 0xC0:0(0x1)
		bool bTileX : 1; // 0xC0:1(0x1)
		bool bTileY : 1; // 0xC0:2(0x1)
		bool bTileZ : 1; // 0xC0:3(0x1)
		bool bUseFixDT : 1; // 0xC0:4(0x1)
		unsigned char UnknownData03_7[0xF]; // 0xC1(0xF) UNKNOWN PROPERTY
	};


	// Struct Engine.GPUSpriteEmitterInfo
	// Size: 0x350 (0x350 - 0x0)
	struct FGPUSpriteEmitterInfo	
	{
	public:
		UParticleModuleRequired RequiredModule; // 0x0(0x8)
		UParticleModuleSpawn SpawnModule; // 0x8(0x8)
		UParticleModuleSpawnPerUnit SpawnPerUnitModule; // 0x10(0x8)
		TArray SpawnModules; // 0x18(0x10)
		unsigned char UnknownData08_6[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x30(0xD0)
		FFloatDistribution VectorFieldScale; // 0x100(0x20)
		FFloatDistribution DragCoefficient; // 0x120(0x20)
		FFloatDistribution PointAttractorStrength; // 0x140(0x20)
		FFloatDistribution Resilience; // 0x160(0x20)
		FVector ConstantAcceleration; // 0x180(0x18)
		FVector PointAttractorPosition; // 0x198(0x18)
		float PointAttractorRadiusSq; // 0x1B0(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x1B4(0x4) UNKNOWN PROPERTY
		FVector OrbitOffsetBase; // 0x1B8(0x18)
		FVector OrbitOffsetRange; // 0x1D0(0x18)
		FVector2D InvMaxSize; // 0x1E8(0x10)
		float InvRotationRateScale; // 0x1F8(0x4)
		float MaxLifetime; // 0x1FC(0x4)
		int32_t MaxParticleCount; // 0x200(0x4)
		TEnumAsByte ScreenAlignment; // 0x204(0x1)
		TEnumAsByte LockAxisFlag; // 0x205(0x1)
		unsigned char UnknownData10_6[0x2]; // 0x206(0x2) UNKNOWN PROPERTY
		bool bEnableCollision : 1; // 0x208:0(0x1)
		unsigned char UnknownData11_5[0x3]; // 0x209(0x3) UNKNOWN PROPERTY
		TEnumAsByte CollisionMode; // 0x20C(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x20D(0x3) UNKNOWN PROPERTY
		bool bUseVelocityForMotionBlur : 1; // 0x210:0(0x1)
		bool bRemoveHMDRoll : 1; // 0x210:1(0x1)
		unsigned char UnknownData13_5[0x3]; // 0x211(0x3) UNKNOWN PROPERTY
		float MinFacingCameraBlendDistance; // 0x214(0x4)
		float MaxFacingCameraBlendDistance; // 0x218(0x4)
		unsigned char UnknownData14_6[0x4]; // 0x21C(0x4) UNKNOWN PROPERTY
		FRawDistributionVector DynamicColor; // 0x220(0x60)
		FRawDistributionFloat DynamicAlpha; // 0x280(0x30)
		FRawDistributionVector DynamicColorScale; // 0x2B0(0x60)
		FRawDistributionFloat DynamicAlphaScale; // 0x310(0x30)
		unsigned char UnknownData15_7[0x10]; // 0x340(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.GPUSpriteResourceData
	// Size: 0x240 (0x240 - 0x0)
	struct FGPUSpriteResourceData	
	{
	public:
		TArray QuantizedColorSamples; // 0x0(0x10)
		TArray QuantizedMiscSamples; // 0x10(0x10)
		TArray QuantizedSimulationAttrSamples; // 0x20(0x10)
		FVector4 ColorScale; // 0x30(0x20)
		FVector4 ColorBias; // 0x50(0x20)
		FVector4 MiscScale; // 0x70(0x20)
		FVector4 MiscBias; // 0x90(0x20)
		FVector4 SimulationAttrCurveScale; // 0xB0(0x20)
		FVector4 SimulationAttrCurveBias; // 0xD0(0x20)
		FVector4 SubImageSize; // 0xF0(0x20)
		FVector4 SizeBySpeed; // 0x110(0x20)
		FVector ConstantAcceleration; // 0x130(0x18)
		FVector OrbitOffsetBase; // 0x148(0x18)
		FVector OrbitOffsetRange; // 0x160(0x18)
		FVector OrbitFrequencyBase; // 0x178(0x18)
		FVector OrbitFrequencyRange; // 0x190(0x18)
		FVector OrbitPhaseBase; // 0x1A8(0x18)
		FVector OrbitPhaseRange; // 0x1C0(0x18)
		float GlobalVectorFieldScale; // 0x1D8(0x4)
		float GlobalVectorFieldTightness; // 0x1DC(0x4)
		float PerParticleVectorFieldScale; // 0x1E0(0x4)
		float PerParticleVectorFieldBias; // 0x1E4(0x4)
		float DragCoefficientScale; // 0x1E8(0x4)
		float DragCoefficientBias; // 0x1EC(0x4)
		float ResilienceScale; // 0x1F0(0x4)
		float ResilienceBias; // 0x1F4(0x4)
		float CollisionRadiusScale; // 0x1F8(0x4)
		float CollisionRadiusBias; // 0x1FC(0x4)
		float CollisionTimeBias; // 0x200(0x4)
		float CollisionRandomSpread; // 0x204(0x4)
		float CollisionRandomDistribution; // 0x208(0x4)
		float OneMinusFriction; // 0x20C(0x4)
		float RotationRateScale; // 0x210(0x4)
		float CameraMotionBlurAmount; // 0x214(0x4)
		TEnumAsByte ScreenAlignment; // 0x218(0x1)
		TEnumAsByte LockAxisFlag; // 0x219(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x21A(0x6) UNKNOWN PROPERTY
		FVector2D PivotOffset; // 0x220(0x10)
		bool bUseVelocityForMotionBlur : 1; // 0x230:0(0x1)
		bool bRemoveHMDRoll : 1; // 0x230:1(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x231(0x3) UNKNOWN PROPERTY
		float MinFacingCameraBlendDistance; // 0x234(0x4)
		float MaxFacingCameraBlendDistance; // 0x238(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x23C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.ParticleSystemLOD
	// Size: 0x1 (0x1 - 0x0)
	struct FParticleSystemLOD	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.LODSoloTrack
	// Size: 0x10 (0x10 - 0x0)
	struct FLODSoloTrack	
	{
	public:
		TArray SoloEnableSetting; // 0x0(0x10)
	};


	// Struct Engine.NamedEmitterMaterial
	// Size: 0x10 (0x10 - 0x0)
	struct FNamedEmitterMaterial	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UMaterialInterface Material; // 0x8(0x8)
	};


	// Struct Engine.ParticleSysParam
	// Size: 0xE0 (0xE0 - 0x0)
	struct FParticleSysParam	
	{
	public:
		FName Name; // 0x0(0x4)
		TEnumAsByte ParamType; // 0x4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float Scalar; // 0x8(0x4)
		float Scalar_Low; // 0xC(0x4)
		FVector Vector; // 0x10(0x18)
		FVector Vector_Low; // 0x28(0x18)
		FColor Color; // 0x40(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		AActor Actor; // 0x48(0x8)
		UMaterialInterface Material; // 0x50(0x8)
		unsigned char UnknownData05_7[0x88]; // 0x58(0x88) UNKNOWN PROPERTY
	};


	// Struct Engine.FXSystemSpawnParameters
	// Size: 0x70 (0x70 - 0x0)
	struct FFXSystemSpawnParameters	
	{
	public:
		UObject WorldContextObject; // 0x0(0x8)
		UFXSystemAsset SystemTemplate; // 0x8(0x8)
		FVector Location; // 0x10(0x18)
		FRotator Rotation; // 0x28(0x18)
		FVector Scale; // 0x40(0x18)
		USceneComponent AttachToComponent; // 0x58(0x8)
		FName AttachPointName; // 0x60(0x4)
		TEnumAsByte LocationType; // 0x64(0x1)
		bool bAutoDestroy; // 0x65(0x1)
		bool bAutoActivate; // 0x66(0x1)
		EPSCPoolMethod PoolingMethod; // 0x67(0x1)
		bool bPreCullCheck; // 0x68(0x1)
		bool bIsPlayerEffect; // 0x69(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x6A(0x6) UNKNOWN PROPERTY
	};


	// Struct Engine.ParticleEmitterReplayFrame
	// Size: 0x10 (0x10 - 0x0)
	struct FParticleEmitterReplayFrame	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.ParticleSystemReplayFrame
	// Size: 0x10 (0x10 - 0x0)
	struct FParticleSystemReplayFrame	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.PieFixupStructWithSoftObjectPath
	// Size: 0x38 (0x38 - 0x0)
	struct FPieFixupStructWithSoftObjectPath	
	{
	public:
		FSoftObjectPath Path; // 0x0(0x18)
		TWeakObjectPtr TypedPtr; // 0x18(0x20)
	};


	// Struct Engine.DelegateArray
	// Size: 0x10 (0x10 - 0x0)
	struct FDelegateArray	
	{
	public:
		TArray Delegates; // 0x0(0x10)
	};


	// Struct Engine.CameraCacheEntry
	// Size: 0x820 (0x820 - 0x0)
	struct FCameraCacheEntry	
	{
	public:
		float Timestamp; // 0x0(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x4(0xC) UNKNOWN PROPERTY
		FMinimalViewInfo POV; // 0x10(0x810)
	};


	// Struct Engine.TViewTarget
	// Size: 0x830 (0x830 - 0x0)
	struct FTViewTarget	
	{
	public:
		AActor Target; // 0x0(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FMinimalViewInfo POV; // 0x10(0x810)
		APlayerState PlayerState; // 0x820(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x828(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.SpriteCategoryInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FSpriteCategoryInfo	
	{
	public:
		FName category; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText DisplayName; // 0x8(0x10)
		FText Description; // 0x18(0x10)
	};


	// Struct Engine.PrimitiveComponentInstanceData
	// Inherited from FSceneComponentInstanceData -> FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0x78 (0x130 - 0xB8)
	struct FPrimitiveComponentInstanceData : public FSceneComponentInstanceData	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		FTransform ComponentTransform; // 0xC0(0x60)
		int32_t VisibilityId; // 0x120(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x124(0x4) UNKNOWN PROPERTY
		UPrimitiveComponent LODParent; // 0x128(0x8)
	};


	// Struct Engine.LevelNameAndTime
	// Size: 0x18 (0x18 - 0x0)
	struct FLevelNameAndTime	
	{
	public:
		FString LevelName; // 0x0(0x10)
		uint32_t LevelChangeTimeInMS; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.ReverbSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FReverbSettings	
	{
	public:
		bool bApplyReverb; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UReverbEffect ReverbEffect; // 0x8(0x8)
		USoundEffectSubmixPreset ReverbPluginEffect; // 0x10(0x8)
		float Volume; // 0x18(0x4)
		float FadeTime; // 0x1C(0x4)
	};


	// Struct Engine.CompressedRichCurve
	// Size: 0x18 (0x18 - 0x0)
	struct FCompressedRichCurve	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct Engine.ColorGradePerRangeSettings
	// Size: 0xA0 (0xA0 - 0x0)
	struct FColorGradePerRangeSettings	
	{
	public:
		FVector4 Saturation; // 0x0(0x20)
		FVector4 Contrast; // 0x20(0x20)
		FVector4 Gamma; // 0x40(0x20)
		FVector4 Gain; // 0x60(0x20)
		FVector4 Offset; // 0x80(0x20)
	};


	// Struct Engine.ColorGradingSettings
	// Size: 0x290 (0x290 - 0x0)
	struct FColorGradingSettings	
	{
	public:
		FColorGradePerRangeSettings Global; // 0x0(0xA0)
		FColorGradePerRangeSettings Shadows; // 0xA0(0xA0)
		FColorGradePerRangeSettings Midtones; // 0x140(0xA0)
		FColorGradePerRangeSettings Highlights; // 0x1E0(0xA0)
		float ShadowsMax; // 0x280(0x4)
		float HighlightsMin; // 0x284(0x4)
		float HighlightsMax; // 0x288(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x28C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.FilmStockSettings
	// Size: 0x14 (0x14 - 0x0)
	struct FFilmStockSettings	
	{
	public:
		float Slope; // 0x0(0x4)
		float Toe; // 0x4(0x4)
		float Shoulder; // 0x8(0x4)
		float BlackClip; // 0xC(0x4)
		float WhiteClip; // 0x10(0x4)
	};


	// Struct Engine.GaussianSumBloomSettings
	// Size: 0x84 (0x84 - 0x0)
	struct FGaussianSumBloomSettings	
	{
	public:
		float Intensity; // 0x0(0x4)
		float Threshold; // 0x4(0x4)
		float SizeScale; // 0x8(0x4)
		float Filter1Size; // 0xC(0x4)
		float Filter2Size; // 0x10(0x4)
		float Filter3Size; // 0x14(0x4)
		float Filter4Size; // 0x18(0x4)
		float Filter5Size; // 0x1C(0x4)
		float Filter6Size; // 0x20(0x4)
		FLinearColor Filter1Tint; // 0x24(0x10)
		FLinearColor Filter2Tint; // 0x34(0x10)
		FLinearColor Filter3Tint; // 0x44(0x10)
		FLinearColor Filter4Tint; // 0x54(0x10)
		FLinearColor Filter5Tint; // 0x64(0x10)
		FLinearColor Filter6Tint; // 0x74(0x10)
	};


	// Struct Engine.ConvolutionBloomSettings
	// Size: 0x30 (0x30 - 0x0)
	struct FConvolutionBloomSettings	
	{
	public:
		UTexture2D Texture; // 0x0(0x8)
		float ScatterDispersion; // 0x8(0x4)
		float Size; // 0xC(0x4)
		FVector2D CenterUV; // 0x10(0x10)
		float PreFilterMin; // 0x20(0x4)
		float PreFilterMax; // 0x24(0x4)
		float PreFilterMult; // 0x28(0x4)
		float BufferScale; // 0x2C(0x4)
	};


	// Struct Engine.LensBloomSettings
	// Size: 0xC0 (0xC0 - 0x0)
	struct FLensBloomSettings	
	{
	public:
		FGaussianSumBloomSettings GaussianSum; // 0x0(0x84)
		unsigned char UnknownData02_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		FConvolutionBloomSettings Convolution; // 0x88(0x30)
		TEnumAsByte Method; // 0xB8(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.LensImperfectionSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FLensImperfectionSettings	
	{
	public:
		UTexture DirtMask; // 0x0(0x8)
		float DirtMaskIntensity; // 0x8(0x4)
		FLinearColor DirtMaskTint; // 0xC(0x10)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.LensSettings
	// Size: 0xE8 (0xE8 - 0x0)
	struct FLensSettings	
	{
	public:
		FLensBloomSettings Bloom; // 0x0(0xC0)
		FLensImperfectionSettings Imperfections; // 0xC0(0x20)
		float ChromaticAberration; // 0xE0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.CameraExposureSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FCameraExposureSettings	
	{
	public:
		TEnumAsByte Method; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float LowPercent; // 0x4(0x4)
		float HighPercent; // 0x8(0x4)
		float MinBrightness; // 0xC(0x4)
		float MaxBrightness; // 0x10(0x4)
		float SpeedUp; // 0x14(0x4)
		float SpeedDown; // 0x18(0x4)
		float Bias; // 0x1C(0x4)
		UCurveFloat BiasCurve; // 0x20(0x8)
		UTexture MeterMask; // 0x28(0x8)
		float HistogramLogMin; // 0x30(0x4)
		float HistogramLogMax; // 0x34(0x4)
		float CalibrationConstant; // 0x38(0x4)
		bool ApplyPhysicalCameraExposure : 1; // 0x3C:0(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.SceneViewExtensionIsActiveFunctor
	// Size: 0x50 (0x50 - 0x0)
	struct FSceneViewExtensionIsActiveFunctor	
	{
	public:
		unsigned char UnknownData01_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct Engine.PhysicalAnimationProfile
	// Size: 0x24 (0x24 - 0x0)
	struct FPhysicalAnimationProfile	
	{
	public:
		FName ProfileName; // 0x0(0x4)
		FPhysicalAnimationData PhysicalAnimationData; // 0x4(0x20)
	};


	// Struct Engine.PhysicalAnimationData
	// Size: 0x20 (0x20 - 0x0)
	struct FPhysicalAnimationData	
	{
	public:
		FName BodyName; // 0x0(0x4)
		bool bIsLocalSimulation : 1; // 0x4:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float OrientationStrength; // 0x8(0x4)
		float AngularVelocityStrength; // 0xC(0x4)
		float PositionStrength; // 0x10(0x4)
		float VelocityStrength; // 0x14(0x4)
		float MaxLinearForce; // 0x18(0x4)
		float MaxAngularForce; // 0x1C(0x4)
	};


	// Struct Engine.SkeletalMeshComponentInstanceData
	// Inherited from FSceneComponentInstanceData -> FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0x8 (0xC0 - 0xB8)
	struct FSkeletalMeshComponentInstanceData : public FSceneComponentInstanceData	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.SkeletalMeshOptimizationSettings
	// Size: 0x3C (0x3C - 0x0)
	struct FSkeletalMeshOptimizationSettings	
	{
	public:
		TEnumAsByte TerminationCriterion; // 0x0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float NumOfTrianglesPercentage; // 0x4(0x4)
		float NumOfVertPercentage; // 0x8(0x4)
		uint32_t MaxNumOfTriangles; // 0xC(0x4)
		uint32_t MaxNumOfVerts; // 0x10(0x4)
		float MaxDeviationPercentage; // 0x14(0x4)
		TEnumAsByte ReductionMethod; // 0x18(0x1)
		TEnumAsByte SilhouetteImportance; // 0x19(0x1)
		TEnumAsByte TextureImportance; // 0x1A(0x1)
		TEnumAsByte ShadingImportance; // 0x1B(0x1)
		TEnumAsByte SkinningImportance; // 0x1C(0x1)
		bool bRemapMorphTargets : 1; // 0x1D:0(0x1)
		bool bRecalcNormals : 1; // 0x1D:1(0x1)
		unsigned char UnknownData05_5[0x2]; // 0x1E(0x2) UNKNOWN PROPERTY
		float WeldingThreshold; // 0x20(0x4)
		float NormalsThreshold; // 0x24(0x4)
		int32_t MaxBonesPerVertex; // 0x28(0x4)
		bool bEnforceBoneBoundaries : 1; // 0x2C:0(0x1)
		bool bMergeCoincidentVertBones : 1; // 0x2C:1(0x1)
		unsigned char UnknownData06_5[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		float VolumeImportance; // 0x30(0x4)
		bool bLockEdges : 1; // 0x34:0(0x1)
		bool bLockColorBounaries : 1; // 0x34:1(0x1)
		bool bImproveTrianglesForCloth : 1; // 0x34:2(0x1)
		unsigned char UnknownData07_5[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		int32_t BaseLOD; // 0x38(0x4)
	};


	// Struct Engine.SkeletalMeshSourceModel
	// Size: 0x60 (0x60 - 0x0)
	struct FSkeletalMeshSourceModel	
	{
	public:
		int32_t TriangleCount; // 0x0(0x4)
		int32_t vertexcount; // 0x4(0x4)
		FBoxSphereBounds Bounds; // 0x8(0x38)
		TArray CachedSkinWeightProfileNames; // 0x40(0x10)
		TArray CachedMorphTargetNames; // 0x50(0x10)
	};


	// Struct Engine.SkelMeshSkinWeightInfo
	// Size: 0x3C (0x3C - 0x0)
	struct FSkelMeshSkinWeightInfo	
	{
	public:
		int32_t Bones; // 0x0(0x30)
		char Weights; // 0x30(0xC)
	};


	// Struct Engine.SkelMeshComponentLODInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FSkelMeshComponentLODInfo	
	{
	public:
		TArray HiddenMaterials; // 0x0(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x10(0x18) UNKNOWN PROPERTY
	};


	// Struct Engine.VertexOffsetUsage
	// Size: 0x4 (0x4 - 0x0)
	struct FVertexOffsetUsage	
	{
	public:
		int32_t Usage; // 0x0(0x4)
	};


	// Struct Engine.MeshDeformerInstanceSet
	// Size: 0x20 (0x20 - 0x0)
	struct FMeshDeformerInstanceSet	
	{
	public:
		TArray DeformerInstances; // 0x0(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.PrecomputedSkyLightInstanceData
	// Inherited from FSceneComponentInstanceData -> FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0xC8 (0x180 - 0xB8)
	struct FPrecomputedSkyLightInstanceData : public FSceneComponentInstanceData	
	{
	public:
		FGuid OriginalLightGuid; // 0xB8(0x10)
		FGuid LightGuid; // 0xC8(0x10)
		float AverageBrightness; // 0xD8(0x4)
		unsigned char UnknownData01_7[0xA4]; // 0xDC(0xA4) UNKNOWN PROPERTY
	};


	// Struct Engine.SoftWorldReference
	// Size: 0x20 (0x20 - 0x0)
	struct FSoftWorldReference	
	{
	public:
		TWeakObjectPtr WorldAsset; // 0x0(0x20)
	};


	// Struct Engine.SoundAttenuationPluginSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FSoundAttenuationPluginSettings	
	{
	public:
		TArray SpatializationPluginSettingsArray; // 0x0(0x10)
		TArray OcclusionPluginSettingsArray; // 0x10(0x10)
		TArray ReverbPluginSettingsArray; // 0x20(0x10)
		TArray SourceDataOverridePluginSettingsArray; // 0x30(0x10)
	};


	// Struct Engine.SoundSubmixSendInfoBase
	// Size: 0xB0 (0xB0 - 0x0)
	struct FSoundSubmixSendInfoBase	
	{
	public:
		ESendLevelControlMethod SendLevelControlMethod; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		USoundSubmixBase SoundSubmix; // 0x8(0x8)
		float SendLevel; // 0x10(0x4)
		bool DisableManualSendClamp; // 0x14(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float MinSendLevel; // 0x18(0x4)
		float MaxSendLevel; // 0x1C(0x4)
		float MinSendDistance; // 0x20(0x4)
		float MaxSendDistance; // 0x24(0x4)
		FRuntimeFloatCurve CustomSendLevelCurve; // 0x28(0x88)
	};


	// Struct Engine.AttenuationSubmixSendSettings
	// Inherited from FSoundSubmixSendInfoBase
	// Size: 0x0 (0xB0 - 0xB0)
	struct FAttenuationSubmixSendSettings : public FSoundSubmixSendInfoBase	
	{
	public:
	};


	// Struct Engine.SoundAttenuationSettings
	// Inherited from FBaseAttenuationSettings
	// Size: 0x310 (0x3D0 - 0xC0)
	struct FSoundAttenuationSettings : public FBaseAttenuationSettings	
	{
	public:
		bool bAttenuate : 1; // 0xC0:0(0x1)
		bool bSpatialize : 1; // 0xC0:1(0x1)
		bool bAttenuateWithLPF : 1; // 0xC0:2(0x1)
		bool bEnableListenerFocus : 1; // 0xC0:3(0x1)
		bool bEnableFocusInterpolation : 1; // 0xC0:4(0x1)
		bool bEnableOcclusion : 1; // 0xC0:5(0x1)
		bool bUseComplexCollisionForOcclusion : 1; // 0xC0:6(0x1)
		bool bEnableReverbSend : 1; // 0xC0:7(0x1)
		bool bEnablePriorityAttenuation : 1; // 0xC1:0(0x1)
		bool bApplyNormalizationToStereoSounds : 1; // 0xC1:1(0x1)
		bool bEnableLogFrequencyScaling : 1; // 0xC1:2(0x1)
		bool bEnableSubmixSends : 1; // 0xC1:3(0x1)
		bool bEnableSourceDataOverride : 1; // 0xC1:4(0x1)
		bool bEnableSendToAudioLink : 1; // 0xC1:5(0x1)
		TEnumAsByte SpatializationAlgorithm; // 0xC2(0x1)
		unsigned char UnknownData03_6[0x5]; // 0xC3(0x5) UNKNOWN PROPERTY
		UAudioLinkSettingsAbstract AudioLinkSettingsOverride; // 0xC8(0x8)
		float BinauralRadius; // 0xD0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // 0xD8(0x88)
		FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // 0x160(0x88)
		EAirAbsorptionMethod AbsorptionMethod; // 0x1E8(0x1)
		TEnumAsByte OcclusionTraceChannel; // 0x1E9(0x1)
		EReverbSendMethod ReverbSendMethod; // 0x1EA(0x1)
		EPriorityAttenuationMethod PriorityAttenuationMethod; // 0x1EB(0x1)
		float NonSpatializedRadiusStart; // 0x1EC(0x4)
		float NonSpatializedRadiusEnd; // 0x1F0(0x4)
		ENonSpatializedRadiusSpeakerMapMode NonSpatializedRadiusMode; // 0x1F4(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x1F5(0x3) UNKNOWN PROPERTY
		float StereoSpread; // 0x1F8(0x4)
		float LPFRadiusMin; // 0x1FC(0x4)
		float LPFRadiusMax; // 0x200(0x4)
		float LPFFrequencyAtMin; // 0x204(0x4)
		float LPFFrequencyAtMax; // 0x208(0x4)
		float HPFFrequencyAtMin; // 0x20C(0x4)
		float HPFFrequencyAtMax; // 0x210(0x4)
		float FocusAzimuth; // 0x214(0x4)
		float NonFocusAzimuth; // 0x218(0x4)
		float FocusDistanceScale; // 0x21C(0x4)
		float NonFocusDistanceScale; // 0x220(0x4)
		float FocusPriorityScale; // 0x224(0x4)
		float NonFocusPriorityScale; // 0x228(0x4)
		float FocusVolumeAttenuation; // 0x22C(0x4)
		float NonFocusVolumeAttenuation; // 0x230(0x4)
		float FocusAttackInterpSpeed; // 0x234(0x4)
		float FocusReleaseInterpSpeed; // 0x238(0x4)
		float OcclusionLowPassFilterFrequency; // 0x23C(0x4)
		float OcclusionVolumeAttenuation; // 0x240(0x4)
		float OcclusionInterpolationTime; // 0x244(0x4)
		float ReverbWetLevelMin; // 0x248(0x4)
		float ReverbWetLevelMax; // 0x24C(0x4)
		float ReverbDistanceMin; // 0x250(0x4)
		float ReverbDistanceMax; // 0x254(0x4)
		float ManualReverbSendLevel; // 0x258(0x4)
		float PriorityAttenuationMin; // 0x25C(0x4)
		float PriorityAttenuationMax; // 0x260(0x4)
		float PriorityAttenuationDistanceMin; // 0x264(0x4)
		float PriorityAttenuationDistanceMax; // 0x268(0x4)
		float ManualPriorityAttenuation; // 0x26C(0x4)
		FRuntimeFloatCurve CustomReverbSendCurve; // 0x270(0x88)
		TArray SubmixSendSettings; // 0x2F8(0x10)
		FRuntimeFloatCurve CustomPriorityAttenuationCurve; // 0x308(0x88)
		FSoundAttenuationPluginSettings PluginSettings; // 0x390(0x40)
	};


	// Struct Engine.SourceEffectChainEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FSourceEffectChainEntry	
	{
	public:
		USoundEffectSourcePreset Preset; // 0x0(0x8)
		bool bBypass : 1; // 0x8:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.SoundGroup
	// Size: 0x20 (0x20 - 0x0)
	struct FSoundGroup	
	{
	public:
		TEnumAsByte SoundGroup; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString DisplayName; // 0x8(0x10)
		bool bAlwaysDecompressOnLoad : 1; // 0x18:0(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		float DecompressedDuration; // 0x1C(0x4)
	};


	// Struct Engine.ModulatorContinuousParams
	// Size: 0x1C (0x1C - 0x0)
	struct FModulatorContinuousParams	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		float Default; // 0x4(0x4)
		float MinInput; // 0x8(0x4)
		float MaxInput; // 0xC(0x4)
		float MinOutput; // 0x10(0x4)
		float MaxOutput; // 0x14(0x4)
		TEnumAsByte ParamMode; // 0x18(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.SoundSourceBusSendInfo
	// Size: 0xB8 (0xB8 - 0x0)
	struct FSoundSourceBusSendInfo	
	{
	public:
		ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		USoundSourceBus SoundSourceBus; // 0x8(0x8)
		UAudioBus AudioBus; // 0x10(0x8)
		float SendLevel; // 0x18(0x4)
		float MinSendLevel; // 0x1C(0x4)
		float MaxSendLevel; // 0x20(0x4)
		float MinSendDistance; // 0x24(0x4)
		float MaxSendDistance; // 0x28(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve CustomSendLevelCurve; // 0x30(0x88)
	};


	// Struct Engine.SoundTimecodeOffset
	// Size: 0x8 (0x8 - 0x0)
	struct FSoundTimecodeOffset	
	{
	public:
		double NumOfSecondsSinceMidnight; // 0x0(0x8)
	};


	// Struct Engine.StreamedAudioPlatformData
	// Size: 0x18 (0x18 - 0x0)
	struct FStreamedAudioPlatformData	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct Engine.SoundWaveSpectralData
	// Size: 0xC (0xC - 0x0)
	struct FSoundWaveSpectralData	
	{
	public:
		float FrequencyHz; // 0x0(0x4)
		float Magnitude; // 0x4(0x4)
		float NormalizedMagnitude; // 0x8(0x4)
	};


	// Struct Engine.SoundWaveSpectralDataPerSound
	// Size: 0x20 (0x20 - 0x0)
	struct FSoundWaveSpectralDataPerSound	
	{
	public:
		TArray SpectralData; // 0x0(0x10)
		float PlaybackTime; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		USoundWave SoundWave; // 0x18(0x8)
	};


	// Struct Engine.SoundWaveEnvelopeDataPerSound
	// Size: 0x10 (0x10 - 0x0)
	struct FSoundWaveEnvelopeDataPerSound	
	{
	public:
		float Envelope; // 0x0(0x4)
		float PlaybackTime; // 0x4(0x4)
		USoundWave SoundWave; // 0x8(0x8)
	};


	// Struct Engine.SoundWaveSpectralDataEntry
	// Size: 0x8 (0x8 - 0x0)
	struct FSoundWaveSpectralDataEntry	
	{
	public:
		float Magnitude; // 0x0(0x4)
		float NormalizedMagnitude; // 0x4(0x4)
	};


	// Struct Engine.SoundWaveSpectralTimeData
	// Size: 0x18 (0x18 - 0x0)
	struct FSoundWaveSpectralTimeData	
	{
	public:
		TArray Data; // 0x0(0x10)
		float TimeSec; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.SoundWaveEnvelopeTimeData
	// Size: 0x8 (0x8 - 0x0)
	struct FSoundWaveEnvelopeTimeData	
	{
	public:
		float Amplitude; // 0x0(0x4)
		float TimeSec; // 0x4(0x4)
	};


	// Struct Engine.SoundWaveCuePoint
	// Size: 0x28 (0x28 - 0x0)
	struct FSoundWaveCuePoint	
	{
	public:
		int32_t CuePointID; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString Label; // 0x8(0x10)
		int32_t FramePosition; // 0x18(0x4)
		int32_t FrameLength; // 0x1C(0x4)
		bool bIsLoopRegion; // 0x20(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.SoundWaveTimecodeInfo
	// Size: 0x70 (0x70 - 0x0)
	struct FSoundWaveTimecodeInfo	
	{
	public:
		uint64_t NumSamplesSinceMidnight; // 0x0(0x8)
		uint32_t NumSamplesPerSecond; // 0x8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FString Description; // 0x10(0x10)
		FString OriginatorTime; // 0x20(0x10)
		FString OriginatorDate; // 0x30(0x10)
		FString OriginatorDescription; // 0x40(0x10)
		FString OriginatorReference; // 0x50(0x10)
		FFrameRate TimecodeRate; // 0x60(0x8)
		bool bTimecodeIsDropFrame; // 0x68(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.StaticParameterBase
	// Size: 0x20 (0x20 - 0x0)
	struct FStaticParameterBase	
	{
	public:
		FMaterialParameterInfo ParameterInfo; // 0x0(0xC)
		bool bOverride; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FGuid ExpressionGUID; // 0x10(0x10)
	};


	// Struct Engine.StaticSwitchParameter
	// Inherited from FStaticParameterBase
	// Size: 0x4 (0x24 - 0x20)
	struct FStaticSwitchParameter : public FStaticParameterBase	
	{
	public:
		bool Value; // 0x20(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.StaticComponentMaskParameter
	// Inherited from FStaticParameterBase
	// Size: 0x4 (0x24 - 0x20)
	struct FStaticComponentMaskParameter : public FStaticParameterBase	
	{
	public:
		bool R; // 0x20(0x1)
		bool G; // 0x21(0x1)
		bool B; // 0x22(0x1)
		bool A; // 0x23(0x1)
	};


	// Struct Engine.StaticTerrainLayerWeightParameter
	// Size: 0x2C (0x2C - 0x0)
	struct FStaticTerrainLayerWeightParameter	
	{
	public:
		FMaterialParameterInfo ParameterInfo; // 0x0(0xC)
		FGuid ExpressionGUID; // 0xC(0x10)
		bool bOverride; // 0x1C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		FName LayerName; // 0x20(0x4)
		int32_t WeightmapIndex; // 0x24(0x4)
		bool bIsRepeatedLayer; // 0x28(0x1)
		bool bWeightBasedBlend; // 0x29(0x1)
		unsigned char UnknownData03_7[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
	};


	// Struct Engine.StaticMaterialLayersParameter
	// Inherited from FStaticParameterBase
	// Size: 0x128 (0x148 - 0x20)
	struct FStaticMaterialLayersParameter : public FStaticParameterBase	
	{
	public:
		FMaterialLayersFunctions Value; // 0x20(0x128)
	};


	// Struct Engine.StaticParameterSetRuntimeData
	// Size: 0x60 (0x60 - 0x0)
	struct FStaticParameterSetRuntimeData	
	{
	public:
		TArray StaticSwitchParameters; // 0x0(0x10)
		FMaterialLayersFunctionsRuntimeData MaterialLayers; // 0x10(0x48)
		bool bHasMaterialLayers : 1; // 0x58:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.StaticParameterSetEditorOnlyData
	// Size: 0xA0 (0xA0 - 0x0)
	struct FStaticParameterSetEditorOnlyData	
	{
	public:
		TArray StaticSwitchParameters; // 0x0(0x10)
		TArray StaticComponentMaskParameters; // 0x10(0x10)
		TArray TerrainLayerWeightParameters; // 0x20(0x10)
		FMaterialLayersFunctionsEditorOnlyData MaterialLayers; // 0x30(0x70)
	};


	// Struct Engine.StaticParameterSet
	// Inherited from FStaticParameterSetRuntimeData
	// Size: 0x0 (0x60 - 0x60)
	struct FStaticParameterSet : public FStaticParameterSetRuntimeData	
	{
	public:
	};


	// Struct Engine.EquirectProps
	// Size: 0x98 (0x98 - 0x0)
	struct FEquirectProps	
	{
	public:
		FBox2D LeftUVRect; // 0x0(0x28)
		FBox2D RightUVRect; // 0x28(0x28)
		FVector2D LeftScale; // 0x50(0x10)
		FVector2D RightScale; // 0x60(0x10)
		FVector2D LeftBias; // 0x70(0x10)
		FVector2D RightBias; // 0x80(0x10)
		float Radius; // 0x90(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.StreamingRenderAssetPrimitiveInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FStreamingRenderAssetPrimitiveInfo	
	{
	public:
		UStreamableRenderAsset RenderAsset; // 0x0(0x8)
		FBoxSphereBounds Bounds; // 0x8(0x38)
		float TexelFactor; // 0x40(0x4)
		uint32_t PackedRelativeBox; // 0x44(0x4)
		bool bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x48:0(0x1)
		bool bAffectedByComponentScale : 1; // 0x48:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.TimelineEventEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FTimelineEventEntry	
	{
	public:
		float Time; // 0x0(0x4)
		FDelegateProperty EventFunc; // 0x4(0xC)
	};


	// Struct Engine.TimelineVectorTrack
	// Size: 0x38 (0x38 - 0x0)
	struct FTimelineVectorTrack	
	{
	public:
		UCurveVector VectorCurve; // 0x0(0x8)
		FDelegateProperty InterpFunc; // 0x8(0xC)
		FName TrackName; // 0x14(0x4)
		FName VectorPropertyName; // 0x18(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x1C(0x1C) UNKNOWN PROPERTY
	};


	// Struct Engine.TimelineFloatTrack
	// Size: 0x38 (0x38 - 0x0)
	struct FTimelineFloatTrack	
	{
	public:
		UCurveFloat FloatCurve; // 0x0(0x8)
		FDelegateProperty InterpFunc; // 0x8(0xC)
		FName TrackName; // 0x14(0x4)
		FName FloatPropertyName; // 0x18(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x1C(0x1C) UNKNOWN PROPERTY
	};


	// Struct Engine.TimelineLinearColorTrack
	// Size: 0x38 (0x38 - 0x0)
	struct FTimelineLinearColorTrack	
	{
	public:
		UCurveLinearColor LinearColorCurve; // 0x0(0x8)
		FDelegateProperty InterpFunc; // 0x8(0xC)
		FName TrackName; // 0x14(0x4)
		FName LinearColorPropertyName; // 0x18(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x1C(0x1C) UNKNOWN PROPERTY
	};


	// Struct Engine.Timeline
	// Size: 0x90 (0x90 - 0x0)
	struct FTimeline	
	{
	public:
		TEnumAsByte LengthMode; // 0x0(0x1)
		bool bLooping : 1; // 0x1:0(0x1)
		bool bReversePlayback : 1; // 0x1:1(0x1)
		bool bPlaying : 1; // 0x1:2(0x1)
		unsigned char UnknownData02_5[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float Length; // 0x4(0x4)
		float PlayRate; // 0x8(0x4)
		float Position; // 0xC(0x4)
		TArray Events; // 0x10(0x10)
		TArray InterpVectors; // 0x20(0x10)
		TArray InterpFloats; // 0x30(0x10)
		TArray InterpLinearColors; // 0x40(0x10)
		FDelegateProperty TimelinePostUpdateFunc; // 0x50(0xC)
		FDelegateProperty TimelineFinishedFunc; // 0x5C(0xC)
		TWeakObjectPtr PropertySetObject; // 0x68(0x8)
		FName DirectionPropertyName; // 0x70(0x4)
		unsigned char UnknownData03_7[0x1C]; // 0x74(0x1C) UNKNOWN PROPERTY
	};


	// Struct Engine.VolumetricLightMapGridCell
	// Size: 0x70 (0x70 - 0x0)
	struct FVolumetricLightMapGridCell	
	{
	public:
		FBox Bounds; // 0x0(0x38)
		unsigned char UnknownData02_6[0x30]; // 0x38(0x30) UNKNOWN PROPERTY
		uint32_t CellID; // 0x68(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.VolumetricLightMapGridDesc
	// Size: 0x68 (0x68 - 0x0)
	struct FVolumetricLightMapGridDesc	
	{
	public:
		FBox GridBounds; // 0x0(0x38)
		FGuid Guid; // 0x38(0x10)
		float CellSize; // 0x48(0x4)
		float DetailCellSize; // 0x4C(0x4)
		float BrickSize; // 0x50(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		TArray Cells; // 0x58(0x10)
	};


	// Struct Engine.ActorContainerPath
	// Size: 0x10 (0x10 - 0x0)
	struct FActorContainerPath	
	{
	public:
		TArray ContainerGuids; // 0x0(0x10)
	};


	// Struct Engine.WorldPartitionActorFilter
	// Size: 0x1 (0x1 - 0x0)
	struct FWorldPartitionActorFilter	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.SubObjectPropertyOverride
	// Size: 0x1 (0x1 - 0x0)
	struct FSubObjectPropertyOverride	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.PropertyOverrideReferenceTable
	// Size: 0x1 (0x1 - 0x0)
	struct FPropertyOverrideReferenceTable	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.ActorPropertyOverride
	// Size: 0x1 (0x1 - 0x0)
	struct FActorPropertyOverride	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.ContainerPropertyOverride
	// Size: 0x1 (0x1 - 0x0)
	struct FContainerPropertyOverride	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.WorldPartitionRuntimeContainerInstance
	// Size: 0x14 (0x14 - 0x0)
	struct FWorldPartitionRuntimeContainerInstance	
	{
	public:
		FGuid ActorGuid; // 0x0(0x10)
		FName ContainerPackage; // 0x10(0x4)
	};


	// Struct Engine.WorldPartitionRuntimeContainer
	// Size: 0x50 (0x50 - 0x0)
	struct FWorldPartitionRuntimeContainer	
	{
	public:
		TMap ContainerInstances; // 0x0(0x50)
	};


	// Struct Engine.WorldPartitionRuntimeContainerResolver
	// Size: 0x58 (0x58 - 0x0)
	struct FWorldPartitionRuntimeContainerResolver	
	{
	public:
		TMap Containers; // 0x0(0x50)
		FName MainContainerPackage; // 0x50(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.RuntimePartitionHLODSetup
	// Size: 0x1 (0x1 - 0x0)
	struct FRuntimePartitionHLODSetup	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.RuntimePartitionDesc
	// Size: 0x18 (0x18 - 0x0)
	struct FRuntimePartitionDesc	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UClass Class; // 0x8(0x8)
		URuntimePartition MainLayer; // 0x10(0x8)
	};


	// Struct Engine.RuntimePartitionStreamingData
	// Size: 0x40 (0x40 - 0x0)
	struct FRuntimePartitionStreamingData	
	{
	public:
		FName Name; // 0x0(0x4)
		int32_t LoadingRange; // 0x4(0x4)
		TArray SpatiallyLoadedCells; // 0x8(0x10)
		TArray NonSpatiallyLoadedCells; // 0x18(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
	};


	// Struct Engine.LightmassWorldInfoSettings
	// Size: 0x54 (0x54 - 0x0)
	struct FLightmassWorldInfoSettings	
	{
	public:
		float StaticLightingLevelScale; // 0x0(0x4)
		int32_t NumIndirectLightingBounces; // 0x4(0x4)
		int32_t NumSkyLightingBounces; // 0x8(0x4)
		float IndirectLightingQuality; // 0xC(0x4)
		float IndirectLightingSmoothness; // 0x10(0x4)
		FColor EnvironmentColor; // 0x14(0x4)
		float EnvironmentIntensity; // 0x18(0x4)
		float EmissiveBoost; // 0x1C(0x4)
		float DiffuseBoost; // 0x20(0x4)
		TEnumAsByte VolumeLightingMethod; // 0x24(0x1)
		bool bUseAmbientOcclusion : 1; // 0x25:0(0x1)
		bool bGenerateAmbientOcclusionMaterialMask : 1; // 0x25:1(0x1)
		bool bVisualizeMaterialDiffuse : 1; // 0x25:2(0x1)
		bool bVisualizeAmbientOcclusion : 1; // 0x25:3(0x1)
		bool bCompressLightmaps : 1; // 0x25:4(0x1)
		unsigned char UnknownData02_5[0x2]; // 0x26(0x2) UNKNOWN PROPERTY
		float VolumetricLightmapDetailCellSize; // 0x28(0x4)
		float VolumetricLightmapMaximumBrickMemoryMb; // 0x2C(0x4)
		float VolumetricLightmapLoadingCellSize; // 0x30(0x4)
		float VolumetricLightmapSphericalHarmonicSmoothing; // 0x34(0x4)
		float VolumeLightSamplePlacementScale; // 0x38(0x4)
		float DirectIlluminationOcclusionFraction; // 0x3C(0x4)
		float IndirectIlluminationOcclusionFraction; // 0x40(0x4)
		float OcclusionExponent; // 0x44(0x4)
		float FullyOccludedSamplesFraction; // 0x48(0x4)
		float MaxOcclusionDistance; // 0x4C(0x4)
		bool bWorldPartition; // 0x50(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.NetViewer
	// Size: 0x48 (0x48 - 0x0)
	struct FNetViewer	
	{
	public:
		UNetConnection Connection; // 0x0(0x8)
		AActor InViewer; // 0x8(0x8)
		AActor ViewTarget; // 0x10(0x8)
		FVector ViewLocation; // 0x18(0x18)
		FVector ViewDir; // 0x30(0x18)
	};


	// Struct Engine.NaniteSettings
	// Size: 0x1 (0x1 - 0x0)
	struct FNaniteSettings	
	{
	public:
		bool bAllowMaskedMaterials; // 0x0(0x1)
	};


	// Struct Engine.BroadphaseSettings
	// Size: 0x80 (0x80 - 0x0)
	struct FBroadphaseSettings	
	{
	public:
		bool bUseMBPOnClient; // 0x0(0x1)
		bool bUseMBPOnServer; // 0x1(0x1)
		bool bUseMBPOuterBounds; // 0x2(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x3(0x5) UNKNOWN PROPERTY
		FBox MBPBounds; // 0x8(0x38)
		FBox MBPOuterBounds; // 0x40(0x38)
		uint32_t MBPNumSubdivs; // 0x78(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.QuartzPulseOverrideStep
	// Size: 0x8 (0x8 - 0x0)
	struct FQuartzPulseOverrideStep	
	{
	public:
		int32_t NumberOfPulses; // 0x0(0x4)
		EQuartzCommandQuantization PulseDuration; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.QuartzTimeSignature
	// Size: 0x18 (0x18 - 0x0)
	struct FQuartzTimeSignature	
	{
	public:
		int32_t NumBeats; // 0x0(0x4)
		EQuartzTimeSignatureQuantization BeatType; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		TArray OptionalPulseOverride; // 0x8(0x10)
	};


	// Struct Engine.QuartzTransportTimeStamp
	// Size: 0x10 (0x10 - 0x0)
	struct FQuartzTransportTimeStamp	
	{
	public:
		int32_t Bars; // 0x0(0x4)
		int32_t Beat; // 0x4(0x4)
		float BeatFraction; // 0x8(0x4)
		float Seconds; // 0xC(0x4)
	};


	// Struct Engine.QuartzClockSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FQuartzClockSettings	
	{
	public:
		FQuartzTimeSignature TimeSignature; // 0x0(0x18)
		bool bIgnoreLevelChange; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.QuartzQuantizationBoundary
	// Size: 0x20 (0x20 - 0x0)
	struct FQuartzQuantizationBoundary	
	{
	public:
		EQuartzCommandQuantization Quantization; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Multiplier; // 0x4(0x4)
		EQuarztQuantizationReference CountingReferencePoint; // 0x8(0x1)
		bool bFireOnClockStart; // 0x9(0x1)
		bool bCancelCommandIfClockIsNotRunning; // 0xA(0x1)
		bool bResetClockOnQueued; // 0xB(0x1)
		bool bResumeClockOnQueued; // 0xC(0x1)
		unsigned char UnknownData03_7[0x13]; // 0xD(0x13) UNKNOWN PROPERTY
	};


	// Struct Engine.NavAvoidanceData
	// Size: 0x58 (0x58 - 0x0)
	struct FNavAvoidanceData	
	{
	public:
		unsigned char UnknownData01_2[0x58]; // 0x0(0x58) UNKNOWN PROPERTY
	};


	// Struct Engine.NavLinkAuxiliaryId
	// Size: 0x8 (0x8 - 0x0)
	struct FNavLinkAuxiliaryId	
	{
	public:
		uint64_t ID; // 0x0(0x8)
	};


	// Struct Engine.NavLinkId
	// Size: 0x8 (0x8 - 0x0)
	struct FNavLinkId	
	{
	public:
		uint64_t ID; // 0x0(0x8)
	};


	// Struct Engine.NavDataConfig
	// Inherited from FNavAgentProperties -> FMovementProperties
	// Size: 0x40 (0x70 - 0x30)
	struct FNavDataConfig : public FNavAgentProperties	
	{
	public:
		FName Name; // 0x30(0x4)
		FColor Color; // 0x34(0x4)
		FVector DefaultQueryExtent; // 0x38(0x18)
		TWeakObjectPtr NavDataClass; // 0x50(0x20)
	};


	// Struct Engine.AlphaBlendArgs
	// Size: 0x10 (0x10 - 0x0)
	struct FAlphaBlendArgs	
	{
	public:
		UCurveFloat CustomCurve; // 0x0(0x8)
		float BlendTime; // 0x8(0x4)
		EAlphaBlendOption BlendOption; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.BlendSampleData
	// Size: 0x60 (0x60 - 0x0)
	struct FBlendSampleData	
	{
	public:
		int32_t SampleDataIndex; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UAnimSequence Animation; // 0x8(0x8)
		float TotalWeight; // 0x10(0x4)
		float WeightRate; // 0x14(0x4)
		float Time; // 0x18(0x4)
		float PreviousTime; // 0x1C(0x4)
		float SamplePlayRate; // 0x20(0x4)
		unsigned char UnknownData03_7[0x3C]; // 0x24(0x3C) UNKNOWN PROPERTY
	};


	// Struct Engine.BlendFilter
	// Size: 0x10 (0x10 - 0x0)
	struct FBlendFilter	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.MarkerSyncAnimPosition
	// Size: 0xC (0xC - 0x0)
	struct FMarkerSyncAnimPosition	
	{
	public:
		FName PreviousMarkerName; // 0x0(0x4)
		FName NextMarkerName; // 0x4(0x4)
		float PositionBetweenMarkers; // 0x8(0x4)
	};


	// Struct Engine.AnimTickRecord
	// Size: 0x70 (0x70 - 0x0)
	struct FAnimTickRecord	
	{
	public:
		UAnimationAsset SourceAsset; // 0x0(0x8)
		unsigned char UnknownData01_7[0x68]; // 0x8(0x68) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimGroupInstance
	// Size: 0x68 (0x68 - 0x0)
	struct FAnimGroupInstance	
	{
	public:
		unsigned char UnknownData01_2[0x68]; // 0x0(0x68) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimationGroupReference
	// Size: 0xC (0xC - 0x0)
	struct FAnimationGroupReference	
	{
	public:
		EAnimSyncMethod Method; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName GroupName; // 0x4(0x4)
		TEnumAsByte GroupRole; // 0x8(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.EncounteredStateMachineStack
	// Size: 0x30 (0x30 - 0x0)
	struct FEncounteredStateMachineStack	
	{
	public:
		unsigned char UnknownData01_2[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimationRecordingSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FAnimationRecordingSettings	
	{
	public:
		bool bRecordInWorldSpace; // 0x0(0x1)
		bool bRemoveRootAnimation; // 0x1(0x1)
		bool bAutoSaveAsset; // 0x2(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		FFrameRate SampleFrameRate; // 0x4(0x8)
		float Length; // 0xC(0x4)
		EAnimInterpolationType Interpolation; // 0x10(0x1)
		TEnumAsByte InterpMode; // 0x11(0x1)
		TEnumAsByte TangentMode; // 0x12(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x13(0x1) UNKNOWN PROPERTY
		bool bRecordTransforms; // 0x14(0x1)
		bool bRecordMorphTargets; // 0x15(0x1)
		bool bRecordAttributeCurves; // 0x16(0x1)
		bool bRecordMaterialCurves; // 0x17(0x1)
		bool bTransactRecording; // 0x18(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		TArray IncludeAnimationNames; // 0x20(0x10)
		TArray ExcludeAnimationNames; // 0x30(0x10)
	};


	// Struct Engine.StateMachineStateDebugData
	// Size: 0x10 (0x10 - 0x0)
	struct FStateMachineStateDebugData	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.StateMachineDebugData
	// Size: 0x150 (0x150 - 0x0)
	struct FStateMachineDebugData	
	{
	public:
		unsigned char UnknownData01_2[0x150]; // 0x0(0x150) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimationFrameSnapshot
	// Size: 0x1 (0x1 - 0x0)
	struct FAnimationFrameSnapshot	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimBlueprintDebugData
	// Size: 0x1 (0x1 - 0x0)
	struct FAnimBlueprintDebugData	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimBlueprintMutableData
	// Size: 0x1 (0x1 - 0x0)
	struct FAnimBlueprintMutableData	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimBlueprintConstantData
	// Size: 0x1 (0x1 - 0x0)
	struct FAnimBlueprintConstantData	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimBlueprintFunction
	// Size: 0x70 (0x70 - 0x0)
	struct FAnimBlueprintFunction	
	{
	public:
		FName Name; // 0x0(0x4)
		FName Group; // 0x4(0x4)
		int32_t OutputPoseNodeIndex; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray InputPoseNames; // 0x10(0x10)
		TArray InputPoseNodeIndices; // 0x20(0x10)
		unsigned char UnknownData04_6[0x38]; // 0x30(0x38) UNKNOWN PROPERTY
		bool bImplemented; // 0x68(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.CachedPoseIndices
	// Size: 0x10 (0x10 - 0x0)
	struct FCachedPoseIndices	
	{
	public:
		TArray OrderedSavedPoseNodeIndices; // 0x0(0x10)
	};


	// Struct Engine.GraphAssetPlayerInformation
	// Size: 0x10 (0x10 - 0x0)
	struct FGraphAssetPlayerInformation	
	{
	public:
		TArray PlayerNodeIndices; // 0x0(0x10)
	};


	// Struct Engine.AnimGraphBlendOptions
	// Size: 0x20 (0x20 - 0x0)
	struct FAnimGraphBlendOptions	
	{
	public:
		float BlendInTime; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UBlendProfile BlendInProfile; // 0x8(0x8)
		float BlendOutTime; // 0x10(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		UBlendProfile BlendOutProfile; // 0x18(0x8)
	};


	// Struct Engine.RootMotionExtractionStep
	// Size: 0x10 (0x10 - 0x0)
	struct FRootMotionExtractionStep	
	{
	public:
		UAnimSequence AnimSequence; // 0x0(0x8)
		float StartPosition; // 0x8(0x4)
		float EndPosition; // 0xC(0x4)
	};


	// Struct Engine.AnimSegment
	// Size: 0x20 (0x20 - 0x0)
	struct FAnimSegment	
	{
	public:
		UAnimSequenceBase AnimReference; // 0x0(0x8)
		float StartPos; // 0x8(0x4)
		float AnimStartTime; // 0xC(0x4)
		float AnimEndTime; // 0x10(0x4)
		float AnimPlayRate; // 0x14(0x4)
		int32_t LoopingCount; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimTrack
	// Size: 0x10 (0x10 - 0x0)
	struct FAnimTrack	
	{
	public:
		TArray AnimSegments; // 0x0(0x10)
	};


	// Struct Engine.AnimExecutionContext
	// Size: 0x10 (0x10 - 0x0)
	struct FAnimExecutionContext	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimInitializationContext
	// Inherited from FAnimExecutionContext
	// Size: 0x0 (0x10 - 0x10)
	struct FAnimInitializationContext : public FAnimExecutionContext	
	{
	public:
	};


	// Struct Engine.AnimUpdateContext
	// Inherited from FAnimExecutionContext
	// Size: 0x0 (0x10 - 0x10)
	struct FAnimUpdateContext : public FAnimExecutionContext	
	{
	public:
	};


	// Struct Engine.AnimPoseContext
	// Inherited from FAnimExecutionContext
	// Size: 0x0 (0x10 - 0x10)
	struct FAnimPoseContext : public FAnimExecutionContext	
	{
	public:
	};


	// Struct Engine.AnimComponentSpacePoseContext
	// Inherited from FAnimExecutionContext
	// Size: 0x0 (0x10 - 0x10)
	struct FAnimComponentSpacePoseContext : public FAnimExecutionContext	
	{
	public:
	};


	// Struct Engine.A2Pose
	// Size: 0x10 (0x10 - 0x0)
	struct FA2Pose	
	{
	public:
		TArray Bones; // 0x0(0x10)
	};


	// Struct Engine.A2CSPose
	// Inherited from FA2Pose
	// Size: 0x18 (0x28 - 0x10)
	struct FA2CSPose : public FA2Pose	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
		TArray ComponentSpaceFlags; // 0x18(0x10)
	};


	// Struct Engine.CompositeSection
	// Inherited from FAnimLinkableElement
	// Size: 0x18 (0x48 - 0x30)
	struct FCompositeSection : public FAnimLinkableElement	
	{
	public:
		FName SectionName; // 0x30(0x4)
		FName NextSectionName; // 0x34(0x4)
		TArray MetaData; // 0x38(0x10)
	};


	// Struct Engine.SlotAnimationTrack
	// Size: 0x18 (0x18 - 0x0)
	struct FSlotAnimationTrack	
	{
	public:
		FName SlotName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FAnimTrack AnimTrack; // 0x8(0x10)
	};


	// Struct Engine.BranchingPoint
	// Inherited from FAnimLinkableElement
	// Size: 0x8 (0x38 - 0x30)
	struct FBranchingPoint : public FAnimLinkableElement	
	{
	public:
		FName EventName; // 0x30(0x4)
		float TriggerTimeOffset; // 0x34(0x4)
	};


	// Struct Engine.BranchingPointMarker
	// Size: 0xC (0xC - 0x0)
	struct FBranchingPointMarker	
	{
	public:
		int32_t NotifyIndex; // 0x0(0x4)
		float TriggerTime; // 0x4(0x4)
		TEnumAsByte NotifyEventType; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.MontageBlendSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FMontageBlendSettings	
	{
	public:
		UBlendProfile BlendProfile; // 0x0(0x8)
		FAlphaBlendArgs Blend; // 0x8(0x10)
		EMontageBlendMode BlendMode; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimMontageInstance
	// Size: 0x1D8 (0x1D8 - 0x0)
	struct FAnimMontageInstance	
	{
	public:
		UAnimMontage Montage; // 0x0(0x8)
		unsigned char UnknownData06_6[0x30]; // 0x8(0x30) UNKNOWN PROPERTY
		bool bPlaying; // 0x38(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float DefaultBlendTimeMultiplier; // 0x3C(0x4)
		unsigned char UnknownData08_6[0xC8]; // 0x40(0xC8) UNKNOWN PROPERTY
		TArray NextSections; // 0x108(0x10)
		TArray PrevSections; // 0x118(0x10)
		unsigned char UnknownData09_6[0x10]; // 0x128(0x10) UNKNOWN PROPERTY
		TArray ActiveStateBranchingPoints; // 0x138(0x10)
		float Position; // 0x148(0x4)
		float PlayRate; // 0x14C(0x4)
		FAlphaBlend Blend; // 0x150(0x30)
		unsigned char UnknownData10_6[0x34]; // 0x180(0x34) UNKNOWN PROPERTY
		int32_t DisableRootMotionCount; // 0x1B4(0x4)
		unsigned char UnknownData11_7[0x20]; // 0x1B8(0x20) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNodeData
	// Size: 0x28 (0x28 - 0x0)
	struct FAnimNodeData	
	{
	public:
		TScriptInterface AnimClassInterface; // 0x0(0x10)
		TArray Entries; // 0x10(0x10)
		int32_t NodeIndex; // 0x20(0x4)
		uint32_t Flags; // 0x24(0x4)
	};


	// Struct Engine.AnimNodeStructData
	// Size: 0x58 (0x58 - 0x0)
	struct FAnimNodeStructData	
	{
	public:
		TMap NameToIndexMap; // 0x0(0x50)
		int32_t NumProperties; // 0x50(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNodeFunctionRef
	// Size: 0x18 (0x18 - 0x0)
	struct FAnimNodeFunctionRef	
	{
	public:
		FName ClassName; // 0x0(0x4)
		FName FunctionName; // 0x4(0x4)
		UClass Class; // 0x8(0x8)
		UFunction Function; // 0x10(0x8)
	};


	// Struct Engine.AnimNode_ConvertComponentToLocalSpace
	// Inherited from FAnimNode_Base
	// Size: 0x10 (0x20 - 0x10)
	struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base	
	{
	public:
		FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
	};


	// Struct Engine.AnimNode_ConvertLocalToComponentSpace
	// Inherited from FAnimNode_Base
	// Size: 0x10 (0x20 - 0x10)
	struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base	
	{
	public:
		FPoseLink LocalPose; // 0x10(0x10)
	};


	// Struct Engine.AnimNode_ApplyMeshSpaceAdditive
	// Inherited from FAnimNode_Base
	// Size: 0xC0 (0xD0 - 0x10)
	struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base	
	{
	public:
		FPoseLink base; // 0x10(0x10)
		FPoseLink Additive; // 0x20(0x10)
		EAnimAlphaInputType AlphaInputType; // 0x30(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float Alpha; // 0x34(0x4)
		bool bAlphaBoolEnabled : 1; // 0x38:0(0x1)
		unsigned char UnknownData04_5[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
		FName AlphaCurveName; // 0x88(0x4)
		FInputScaleBias AlphaScaleBias; // 0x8C(0x8)
		FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x94(0x30)
		int32_t LODThreshold; // 0xC4(0x4)
		unsigned char UnknownData05_7[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNode_CustomProperty
	// Inherited from FAnimNode_Base
	// Size: 0x48 (0x58 - 0x10)
	struct FAnimNode_CustomProperty : public FAnimNode_Base	
	{
	public:
		TArray SourcePropertyNames; // 0x10(0x10)
		TArray DestPropertyNames; // 0x20(0x10)
		UObject TargetInstance; // 0x30(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x38(0x20) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNode_DeadBlending
	// Inherited from FAnimNode_Base
	// Size: 0x520 (0x530 - 0x10)
	struct FAnimNode_DeadBlending : public FAnimNode_Base	
	{
	public:
		unsigned char UnknownData07_3[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
		FPoseLink Source; // 0x18(0x10)
		bool bAlwaysUseDefaultBlendSettings; // 0x28(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float DefaultBlendDuration; // 0x2C(0x4)
		UBlendProfile DefaultBlendProfile; // 0x30(0x8)
		EAlphaBlendOption DefaultBlendMode; // 0x38(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		UCurveFloat DefaultCustomBlendCurve; // 0x40(0x8)
		float BlendTimeMultiplier; // 0x48(0x4)
		bool bLinearlyInterpolateScales; // 0x4C(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		TArray FilteredCurves; // 0x50(0x10)
		TArray ExtrapolationFilteredCurves; // 0x60(0x10)
		TArray FilteredBones; // 0x70(0x10)
		float ExtrapolationHalfLife; // 0x80(0x4)
		float ExtrapolationHalfLifeMin; // 0x84(0x4)
		float ExtrapolationHalfLifeMax; // 0x88(0x4)
		float MaximumTranslationVelocity; // 0x8C(0x4)
		float MaximumRotationVelocity; // 0x90(0x4)
		float MaximumScaleVelocity; // 0x94(0x4)
		float MaximumCurveVelocity; // 0x98(0x4)
		bool bResetOnBecomingRelevant; // 0x9C(0x1)
		unsigned char UnknownData11_6[0x233]; // 0x9D(0x233) UNKNOWN PROPERTY
		TArray RequestQueue; // 0x2D0(0x10)
		unsigned char UnknownData12_6[0x228]; // 0x2E0(0x228) UNKNOWN PROPERTY
		UCurveFloat InertializationCustomBlendCurve; // 0x508(0x8)
		unsigned char UnknownData13_6[0x18]; // 0x510(0x18) UNKNOWN PROPERTY
		UObject InertializationRequestAnimInstance; // 0x528(0x8)
	};


	// Struct Engine.InertializationPose
	// Size: 0xC0 (0xC0 - 0x0)
	struct FInertializationPose	
	{
	public:
		unsigned char UnknownData01_2[0xC0]; // 0x0(0xC0) UNKNOWN PROPERTY
	};


	// Struct Engine.InertializationBoneDiff
	// Size: 0x60 (0x60 - 0x0)
	struct FInertializationBoneDiff	
	{
	public:
		unsigned char UnknownData01_2[0x60]; // 0x0(0x60) UNKNOWN PROPERTY
	};


	// Struct Engine.InertializationPoseDiff
	// Size: 0x38 (0x38 - 0x0)
	struct FInertializationPoseDiff	
	{
	public:
		unsigned char UnknownData01_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNode_Inertialization
	// Inherited from FAnimNode_Base
	// Size: 0x410 (0x420 - 0x10)
	struct FAnimNode_Inertialization : public FAnimNode_Base	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
		FPoseLink Source; // 0x18(0x10)
		UBlendProfile DefaultBlendProfile; // 0x28(0x8)
		TArray FilteredCurves; // 0x30(0x10)
		TArray FilteredBones; // 0x40(0x10)
		bool bResetOnBecomingRelevant; // 0x50(0x1)
		bool bForwardRequestsThroughSkippedCachedPoseNodes; // 0x51(0x1)
		unsigned char UnknownData04_6[0x1D6]; // 0x52(0x1D6) UNKNOWN PROPERTY
		TArray RequestQueue; // 0x228(0x10)
		unsigned char UnknownData05_6[0x1E0]; // 0x238(0x1E0) UNKNOWN PROPERTY
		UObject InertializationRequestAnimInstance; // 0x418(0x8)
	};


	// Struct Engine.AnimNode_LinkedAnimGraph
	// Inherited from FAnimNode_CustomProperty -> FAnimNode_Base
	// Size: 0x60 (0xB8 - 0x58)
	struct FAnimNode_LinkedAnimGraph : public FAnimNode_CustomProperty	
	{
	public:
		TArray InputPoses; // 0x58(0x10)
		TArray InputPoseNames; // 0x68(0x10)
		UClass InstanceClass; // 0x78(0x8)
		unsigned char UnknownData03_6[0x18]; // 0x80(0x18) UNKNOWN PROPERTY
		UBlendProfile PendingBlendOutProfile; // 0x98(0x8)
		unsigned char UnknownData04_6[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		UBlendProfile PendingBlendInProfile; // 0xA8(0x8)
		bool bReceiveNotifiesFromLinkedInstances : 1; // 0xB0:0(0x1)
		bool bPropagateNotifiesToLinkedInstances : 1; // 0xB0:1(0x1)
		unsigned char UnknownData05_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNode_LinkedAnimLayer
	// Inherited from FAnimNode_LinkedAnimGraph -> FAnimNode_CustomProperty -> FAnimNode_Base
	// Size: 0x10 (0xC8 - 0xB8)
	struct FAnimNode_LinkedAnimLayer : public FAnimNode_LinkedAnimGraph	
	{
	public:
		UClass Interface; // 0xB8(0x8)
		FName Layer; // 0xC0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNode_LinkedInputPose
	// Inherited from FAnimNode_Base
	// Size: 0xA0 (0xB0 - 0x10)
	struct FAnimNode_LinkedInputPose : public FAnimNode_Base	
	{
	public:
		FName Name; // 0x10(0x4)
		FName Graph; // 0x14(0x4)
		FPoseLink InputPose; // 0x18(0x10)
		unsigned char UnknownData03_6[0x78]; // 0x28(0x78) UNKNOWN PROPERTY
		unsigned char UnknownBit04 : 1; // 0xA0:0(0x1) UNKNOWN PROPERTY
		bool bIsOutputLinked : 1; // 0xA0:1(0x1)
		unsigned char UnknownData05_7[0xF]; // 0xA1(0xF) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNode_SaveCachedPose
	// Inherited from FAnimNode_Base
	// Size: 0x68 (0x78 - 0x10)
	struct FAnimNode_SaveCachedPose : public FAnimNode_Base	
	{
	public:
		FPoseLink Pose; // 0x10(0x10)
		FName CachePoseName; // 0x20(0x4)
		unsigned char UnknownData01_7[0x54]; // 0x24(0x54) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNode_SequencePlayerBase
	// Inherited from FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x8 (0x40 - 0x38)
	struct FAnimNode_SequencePlayerBase : public FAnimNode_AssetPlayerBase	
	{
	public:
		FInputScaleBiasClampState PlayRateScaleBiasClampState; // 0x38(0x8)
	};


	// Struct Engine.InputScaleBiasClampState
	// Size: 0x8 (0x8 - 0x0)
	struct FInputScaleBiasClampState	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNode_SequencePlayer
	// Inherited from FAnimNode_SequencePlayerBase -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x8 (0x48 - 0x40)
	struct FAnimNode_SequencePlayer : public FAnimNode_SequencePlayerBase	
	{
	public:
		UAnimSequenceBase Sequence; // 0x40(0x8)
	};


	// Struct Engine.AnimNode_SequencePlayer_Standalone
	// Inherited from FAnimNode_SequencePlayerBase -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x50 (0x90 - 0x40)
	struct FAnimNode_SequencePlayer_Standalone : public FAnimNode_SequencePlayerBase	
	{
	public:
		FName GroupName; // 0x40(0x4)
		TEnumAsByte GroupRole; // 0x44(0x1)
		EAnimSyncMethod Method; // 0x45(0x1)
		bool bIgnoreForRelevancyTest; // 0x46(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x47(0x1) UNKNOWN PROPERTY
		UAnimSequenceBase Sequence; // 0x48(0x8)
		float PlayRateBasis; // 0x50(0x4)
		float PlayRate; // 0x54(0x4)
		FInputScaleBiasClampConstants PlayRateScaleBiasClampConstants; // 0x58(0x2C)
		float StartPosition; // 0x84(0x4)
		bool bLoopAnimation; // 0x88(0x1)
		bool bStartFromMatchingPose; // 0x89(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x8A(0x6) UNKNOWN PROPERTY
	};


	// Struct Engine.InputScaleBiasClampConstants
	// Size: 0x2C (0x2C - 0x0)
	struct FInputScaleBiasClampConstants	
	{
	public:
		bool bMapRange; // 0x0(0x1)
		bool bClampResult; // 0x1(0x1)
		bool bInterpResult; // 0x2(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		FInputRange InRange; // 0x4(0x8)
		FInputRange OutRange; // 0xC(0x8)
		float Scale; // 0x14(0x4)
		float Bias; // 0x18(0x4)
		float ClampMin; // 0x1C(0x4)
		float ClampMax; // 0x20(0x4)
		float InterpSpeedIncreasing; // 0x24(0x4)
		float InterpSpeedDecreasing; // 0x28(0x4)
	};


	// Struct Engine.AnimationActiveTransitionEntry
	// Size: 0xC8 (0xC8 - 0x0)
	struct FAnimationActiveTransitionEntry	
	{
	public:
		unsigned char UnknownData02_7[0xB8]; // 0x0(0xB8) UNKNOWN PROPERTY
		UBlendProfile BlendProfile; // 0xB8(0x8)
		unsigned char UnknownData03_7[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimationPotentialTransition
	// Size: 0x30 (0x30 - 0x0)
	struct FAnimationPotentialTransition	
	{
	public:
		unsigned char UnknownData01_2[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNode_StateMachine
	// Inherited from FAnimNode_Base
	// Size: 0xB8 (0xC8 - 0x10)
	struct FAnimNode_StateMachine : public FAnimNode_Base	
	{
	public:
		int32_t StateMachineIndexInClass; // 0x10(0x4)
		int32_t MaxTransitionsPerFrame; // 0x14(0x4)
		int32_t MaxTransitionsRequests; // 0x18(0x4)
		bool bSkipFirstUpdateTransition; // 0x1C(0x1)
		bool bReinitializeOnBecomingRelevant; // 0x1D(0x1)
		bool bCreateNotifyMetaData; // 0x1E(0x1)
		bool bAllowConduitEntryStates; // 0x1F(0x1)
		unsigned char UnknownData01_7[0xA8]; // 0x20(0xA8) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNode_StateResult
	// Inherited from FAnimNode_Root -> FAnimNode_Base
	// Size: 0x0 (0x20 - 0x20)
	struct FAnimNode_StateResult : public FAnimNode_Root	
	{
	public:
	};


	// Struct Engine.AnimNode_TransitionPoseEvaluator
	// Inherited from FAnimNode_Base
	// Size: 0x98 (0xA8 - 0x10)
	struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base	
	{
	public:
		unsigned char UnknownData03_3[0x78]; // 0x10(0x78) UNKNOWN PROPERTY
		int32_t FramesToCachePose; // 0x88(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		TEnumAsByte DataSource; // 0x90(0x1)
		TEnumAsByte EvaluatorMode; // 0x91(0x1)
		unsigned char UnknownData05_7[0x16]; // 0x92(0x16) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNode_TransitionResult
	// Inherited from FAnimNode_Base
	// Size: 0x18 (0x28 - 0x10)
	struct FAnimNode_TransitionResult : public FAnimNode_Base	
	{
	public:
		bool bCanEnterTransition; // 0x10(0x1)
		unsigned char UnknownData01_7[0x17]; // 0x11(0x17) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNode_UseCachedPose
	// Inherited from FAnimNode_Base
	// Size: 0x18 (0x28 - 0x10)
	struct FAnimNode_UseCachedPose : public FAnimNode_Base	
	{
	public:
		FPoseLink LinkToCachingNode; // 0x10(0x10)
		FName CachePoseName; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNotifyEventReference
	// Size: 0x30 (0x30 - 0x0)
	struct FAnimNotifyEventReference	
	{
	public:
		unsigned char UnknownData02_7[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
		UMirrorDataTable MirrorTable; // 0x18(0x8)
		UObject NotifySource; // 0x20(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNotifyArray
	// Size: 0x10 (0x10 - 0x0)
	struct FAnimNotifyArray	
	{
	public:
		TArray Notifies; // 0x0(0x10)
	};


	// Struct Engine.AnimNotifyContext
	// Size: 0x18 (0x18 - 0x0)
	struct FAnimNotifyContext	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNotifyQueue
	// Size: 0x70 (0x70 - 0x0)
	struct FAnimNotifyQueue	
	{
	public:
		unsigned char UnknownData01_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		TArray AnimNotifies; // 0x10(0x10)
		TMap UnfilteredMontageAnimNotifies; // 0x20(0x50)
	};


	// Struct Engine.AnimSequenceTrackContainer
	// Size: 0x20 (0x20 - 0x0)
	struct FAnimSequenceTrackContainer	
	{
	public:
		TArray AnimationTracks; // 0x0(0x10)
		TArray TrackNames; // 0x10(0x10)
	};


	// Struct Engine.TranslationTrack
	// Size: 0x20 (0x20 - 0x0)
	struct FTranslationTrack	
	{
	public:
		TArray PosKeys; // 0x0(0x10)
		TArray Times; // 0x10(0x10)
	};


	// Struct Engine.RotationTrack
	// Size: 0x20 (0x20 - 0x0)
	struct FRotationTrack	
	{
	public:
		TArray RotKeys; // 0x0(0x10)
		TArray Times; // 0x10(0x10)
	};


	// Struct Engine.ScaleTrack
	// Size: 0x20 (0x20 - 0x0)
	struct FScaleTrack	
	{
	public:
		TArray ScaleKeys; // 0x0(0x10)
		TArray Times; // 0x10(0x10)
	};


	// Struct Engine.CurveTrack
	// Size: 0x18 (0x18 - 0x0)
	struct FCurveTrack	
	{
	public:
		FName CurveName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray CurveWeights; // 0x8(0x10)
	};


	// Struct Engine.CompressedTrack
	// Size: 0x38 (0x38 - 0x0)
	struct FCompressedTrack	
	{
	public:
		TArray ByteStream; // 0x0(0x10)
		TArray Times; // 0x10(0x10)
		float Mins; // 0x20(0xC)
		float Ranges; // 0x2C(0xC)
	};


	// Struct Engine.AnimSetMeshLinkup
	// Size: 0x10 (0x10 - 0x0)
	struct FAnimSetMeshLinkup	
	{
	public:
		TArray BoneToTrackTable; // 0x0(0x10)
	};


	// Struct Engine.AnimNode_SingleNode
	// Inherited from FAnimNode_Base
	// Size: 0x20 (0x30 - 0x10)
	struct FAnimNode_SingleNode : public FAnimNode_Base	
	{
	public:
		FPoseLink SourcePose; // 0x10(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x20(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimSingleNodeInstanceProxy
	// Inherited from FAnimInstanceProxy
	// Size: 0x108 (0x8A0 - 0x798)
	struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy	
	{
	public:
		unsigned char UnknownData01_1[0x108]; // 0x798(0x108) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimationTransitionRule
	// Size: 0xC (0xC - 0x0)
	struct FAnimationTransitionRule	
	{
	public:
		FName RuleToExecute; // 0x0(0x4)
		bool TransitionReturnVal; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		int32_t TransitionIndex; // 0x8(0x4)
	};


	// Struct Engine.AnimationStateBase
	// Size: 0x4 (0x4 - 0x0)
	struct FAnimationStateBase	
	{
	public:
		FName StateName; // 0x0(0x4)
	};


	// Struct Engine.AnimationState
	// Inherited from FAnimationStateBase
	// Size: 0x24 (0x28 - 0x4)
	struct FAnimationState : public FAnimationStateBase	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray Transitions; // 0x8(0x10)
		int32_t StateRootNodeIndex; // 0x18(0x4)
		int32_t StartNotify; // 0x1C(0x4)
		int32_t EndNotify; // 0x20(0x4)
		int32_t FullyBlendedNotify; // 0x24(0x4)
	};


	// Struct Engine.AnimationTransitionBetweenStates
	// Inherited from FAnimationStateBase
	// Size: 0x34 (0x38 - 0x4)
	struct FAnimationTransitionBetweenStates : public FAnimationStateBase	
	{
	public:
		int32_t PreviousState; // 0x4(0x4)
		int32_t NextState; // 0x8(0x4)
		float CrossfadeDuration; // 0xC(0x4)
		int32_t StartNotify; // 0x10(0x4)
		int32_t EndNotify; // 0x14(0x4)
		int32_t InterruptNotify; // 0x18(0x4)
		EAlphaBlendOption BlendMode; // 0x1C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		UCurveFloat CustomCurve; // 0x20(0x8)
		UBlendProfile BlendProfile; // 0x28(0x8)
		TEnumAsByte LogicType; // 0x30(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.BakedStateExitTransition
	// Size: 0x28 (0x28 - 0x0)
	struct FBakedStateExitTransition	
	{
	public:
		int32_t CanTakeDelegateIndex; // 0x0(0x4)
		int32_t CustomResultNodeIndex; // 0x4(0x4)
		int32_t TransitionIndex; // 0x8(0x4)
		bool bDesiredTransitionReturnValue; // 0xC(0x1)
		bool bAutomaticRemainingTimeRule; // 0xD(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
		float AutomaticRuleTriggerTime; // 0x10(0x4)
		FName SyncGroupNameToRequireValidMarkersRule; // 0x14(0x4)
		TArray PoseEvaluatorLinks; // 0x18(0x10)
	};


	// Struct Engine.BakedAnimationState
	// Size: 0x58 (0x58 - 0x0)
	struct FBakedAnimationState	
	{
	public:
		FName StateName; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray Transitions; // 0x8(0x10)
		int32_t StateRootNodeIndex; // 0x18(0x4)
		int32_t StartNotify; // 0x1C(0x4)
		int32_t EndNotify; // 0x20(0x4)
		int32_t FullyBlendedNotify; // 0x24(0x4)
		bool bIsAConduit; // 0x28(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		int32_t EntryRuleNodeIndex; // 0x2C(0x4)
		TArray PlayerNodeIndices; // 0x30(0x10)
		TArray LayerNodeIndices; // 0x40(0x10)
		bool bAlwaysResetOnEntry; // 0x50(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.BakedAnimationStateMachine
	// Size: 0x28 (0x28 - 0x0)
	struct FBakedAnimationStateMachine	
	{
	public:
		FName MachineName; // 0x0(0x4)
		int32_t InitialState; // 0x4(0x4)
		TArray States; // 0x8(0x10)
		TArray Transitions; // 0x18(0x10)
	};


	// Struct Engine.AnimSubsystem_Base
	// Inherited from FAnimSubsystem
	// Size: 0x10 (0x18 - 0x8)
	struct FAnimSubsystem_Base : public FAnimSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimSubsystemInstance_NodeRelevancy
	// Inherited from FAnimSubsystemInstance
	// Size: 0xA0 (0xA8 - 0x8)
	struct FAnimSubsystemInstance_NodeRelevancy : public FAnimSubsystemInstance	
	{
	public:
		unsigned char UnknownData01_1[0xA0]; // 0x8(0xA0) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimSubsystem_PropertyAccess
	// Inherited from FAnimSubsystem
	// Size: 0x78 (0x80 - 0x8)
	struct FAnimSubsystem_PropertyAccess : public FAnimSubsystem	
	{
	public:
		FPropertyAccessLibrary Library; // 0x8(0x78)
	};


	// Struct Engine.PropertyAccessLibrary
	// Size: 0x78 (0x78 - 0x0)
	struct FPropertyAccessLibrary	
	{
	public:
		TArray PathSegments; // 0x0(0x10)
		TArray SrcPaths; // 0x10(0x10)
		TArray DestPaths; // 0x20(0x10)
		TArray CopyBatchArray; // 0x30(0x10)
		unsigned char UnknownData01_7[0x38]; // 0x40(0x38) UNKNOWN PROPERTY
	};


	// Struct Engine.PropertyAccessCopyBatch
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyAccessCopyBatch	
	{
	public:
		TArray Copies; // 0x0(0x10)
	};


	// Struct Engine.PropertyAccessCopy
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyAccessCopy	
	{
	public:
		int32_t AccessIndex; // 0x0(0x4)
		int32_t DestAccessStartIndex; // 0x4(0x4)
		int32_t DestAccessEndIndex; // 0x8(0x4)
		EPropertyAccessCopyType Type; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.PropertyAccessPath
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyAccessPath	
	{
	public:
		int32_t PathSegmentStartIndex; // 0x0(0x4)
		int32_t PathSegmentCount; // 0x4(0x4)
	};


	// Struct Engine.PropertyAccessSegment
	// Size: 0x40 (0x40 - 0x0)
	struct FPropertyAccessSegment	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UStruct Struct; // 0x8(0x8)
		unsigned char UnknownData04_6[0x20]; // 0x10(0x20) UNKNOWN PROPERTY
		UFunction Function; // 0x30(0x8)
		int32_t ArrayIndex; // 0x38(0x4)
		uint16_t Flags; // 0x3C(0x2)
		unsigned char UnknownData05_7[0x2]; // 0x3E(0x2) UNKNOWN PROPERTY
	};


	// Struct Engine.LinkedAnimLayerInstanceData
	// Size: 0x60 (0x60 - 0x0)
	struct FLinkedAnimLayerInstanceData	
	{
	public:
		UAnimInstance Instance; // 0x0(0x8)
		TMap LinkedFunctions; // 0x8(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.LinkedAnimLayerClassData
	// Size: 0x20 (0x20 - 0x0)
	struct FLinkedAnimLayerClassData	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TArray InstancesData; // 0x8(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimSubsystem_SharedLinkedAnimLayers
	// Inherited from FAnimSubsystemInstance
	// Size: 0x20 (0x28 - 0x8)
	struct FAnimSubsystem_SharedLinkedAnimLayers : public FAnimSubsystemInstance	
	{
	public:
		TArray ClassesData; // 0x8(0x10)
		TArray PersistentClasses; // 0x18(0x10)
	};


	// Struct Engine.AnimSubsystem_Tag
	// Inherited from FAnimSubsystem
	// Size: 0x58 (0x60 - 0x8)
	struct FAnimSubsystem_Tag : public FAnimSubsystem	
	{
	public:
		TMap NodeIndices; // 0x8(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.AssetMapping
	// Size: 0x10 (0x10 - 0x0)
	struct FAssetMapping	
	{
	public:
		UAnimationAsset SourceAsset; // 0x0(0x8)
		UAnimationAsset TargetAsset; // 0x8(0x8)
	};


	// Struct Engine.BlendProfileBoneEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FBlendProfileBoneEntry	
	{
	public:
		FBoneReference BoneReference; // 0x0(0xC)
		float BlendScale; // 0xC(0x4)
	};


	// Struct Engine.CachedAnimStateData
	// Size: 0x14 (0x14 - 0x0)
	struct FCachedAnimStateData	
	{
	public:
		FName StateMachineName; // 0x0(0x4)
		FName StateName; // 0x4(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x8(0xC) UNKNOWN PROPERTY
	};


	// Struct Engine.CachedAnimStateArray
	// Size: 0x18 (0x18 - 0x0)
	struct FCachedAnimStateArray	
	{
	public:
		TArray States; // 0x0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.CachedAnimAssetPlayerData
	// Size: 0x10 (0x10 - 0x0)
	struct FCachedAnimAssetPlayerData	
	{
	public:
		FName StateMachineName; // 0x0(0x4)
		FName StateName; // 0x4(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.CachedAnimRelevancyData
	// Size: 0x14 (0x14 - 0x0)
	struct FCachedAnimRelevancyData	
	{
	public:
		FName StateMachineName; // 0x0(0x4)
		FName StateName; // 0x4(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x8(0xC) UNKNOWN PROPERTY
	};


	// Struct Engine.CachedAnimTransitionData
	// Size: 0x18 (0x18 - 0x0)
	struct FCachedAnimTransitionData	
	{
	public:
		FName StateMachineName; // 0x0(0x4)
		FName FromStateName; // 0x4(0x4)
		FName ToStateName; // 0x8(0x4)
		unsigned char UnknownData01_7[0xC]; // 0xC(0xC) UNKNOWN PROPERTY
	};


	// Struct Engine.NamedCurveValue
	// Size: 0x8 (0x8 - 0x0)
	struct FNamedCurveValue	
	{
	public:
		FName Name; // 0x0(0x4)
		float Value; // 0x4(0x4)
	};


	// Struct Engine.ExposedValueCopyRecord
	// Size: 0x8 (0x8 - 0x0)
	struct FExposedValueCopyRecord	
	{
	public:
		int32_t CopyIndex; // 0x0(0x4)
		EPostCopyOperation PostCopyOperation; // 0x4(0x1)
		bool bOnlyUpdateWhenActive; // 0x5(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
	};


	// Struct Engine.ExposedValueHandler
	// Size: 0x10 (0x10 - 0x0)
	struct FExposedValueHandler	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNodeExposedValueHandler
	// Size: 0x8 (0x8 - 0x0)
	struct FAnimNodeExposedValueHandler	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNodeExposedValueHandler_Base
	// Inherited from FAnimNodeExposedValueHandler
	// Size: 0x10 (0x18 - 0x8)
	struct FAnimNodeExposedValueHandler_Base : public FAnimNodeExposedValueHandler	
	{
	public:
		UFunction Function; // 0x8(0x8)
		FName BoundFunction; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimNodeExposedValueHandler_PropertyAccess
	// Inherited from FAnimNodeExposedValueHandler_Base -> FAnimNodeExposedValueHandler
	// Size: 0x18 (0x30 - 0x18)
	struct FAnimNodeExposedValueHandler_PropertyAccess : public FAnimNodeExposedValueHandler_Base	
	{
	public:
		TArray CopyRecords; // 0x18(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.InputClampConstants
	// Size: 0x14 (0x14 - 0x0)
	struct FInputClampConstants	
	{
	public:
		bool bClampResult; // 0x0(0x1)
		bool bInterpResult; // 0x1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float ClampMin; // 0x4(0x4)
		float ClampMax; // 0x8(0x4)
		float InterpSpeedIncreasing; // 0xC(0x4)
		float InterpSpeedDecreasing; // 0x10(0x4)
	};


	// Struct Engine.InputClampState
	// Size: 0x8 (0x8 - 0x0)
	struct FInputClampState	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.MirrorTableRow
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FMirrorTableRow : public FTableRowBase	
	{
	public:
		FName Name; // 0x8(0x4)
		FName MirroredName; // 0xC(0x4)
		TEnumAsByte MirrorEntryType; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.MirrorFindReplaceExpression
	// Size: 0xC (0xC - 0x0)
	struct FMirrorFindReplaceExpression	
	{
	public:
		FName FindExpression; // 0x0(0x4)
		FName ReplaceExpression; // 0x4(0x4)
		TEnumAsByte FindReplaceMethod; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.TrajectorySample
	// Size: 0x90 (0x90 - 0x0)
	struct FTrajectorySample	
	{
	public:
		float AccumulatedSeconds; // 0x0(0x4)
		unsigned char UnknownData02_6[0xC]; // 0x4(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		FVector LinearVelocity; // 0x70(0x18)
		unsigned char UnknownData03_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.TrajectorySampleRange
	// Size: 0x10 (0x10 - 0x0)
	struct FTrajectorySampleRange	
	{
	public:
		TArray Samples; // 0x0(0x10)
	};


	// Struct Engine.NodeItem
	// Size: 0x70 (0x70 - 0x0)
	struct FNodeItem	
	{
	public:
		FName ParentName; // 0x0(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x4(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
	};


	// Struct Engine.PoseData
	// Size: 0x20 (0x20 - 0x0)
	struct FPoseData	
	{
	public:
		TArray LocalSpacePose; // 0x0(0x10)
		TArray CurveData; // 0x10(0x10)
	};


	// Struct Engine.PoseAssetInfluence
	// Size: 0x8 (0x8 - 0x0)
	struct FPoseAssetInfluence	
	{
	public:
		int32_t PoseIndex; // 0x0(0x4)
		int32_t BoneTransformIndex; // 0x4(0x4)
	};


	// Struct Engine.PoseAssetInfluences
	// Size: 0x10 (0x10 - 0x0)
	struct FPoseAssetInfluences	
	{
	public:
		TArray Influences; // 0x0(0x10)
	};


	// Struct Engine.PoseDataContainer
	// Size: 0x70 (0x70 - 0x0)
	struct FPoseDataContainer	
	{
	public:
		TArray PoseFNames; // 0x0(0x10)
		unsigned char UnknownData01_6[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
		TArray Tracks; // 0x20(0x10)
		TArray TrackBoneIndices; // 0x30(0x10)
		TArray TrackPoseInfluenceIndices; // 0x40(0x10)
		TArray Poses; // 0x50(0x10)
		TArray Curves; // 0x60(0x10)
	};


	// Struct Engine.PreviewAttachedObjectPair
	// Size: 0x28 (0x28 - 0x0)
	struct FPreviewAttachedObjectPair	
	{
	public:
		TWeakObjectPtr AttachedObject; // 0x0(0x20)
		FName AttachedTo; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.PreviewAssetAttachContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FPreviewAssetAttachContainer	
	{
	public:
		TArray AttachedObjects; // 0x0(0x10)
	};


	// Struct Engine.PreviewMeshCollectionEntry
	// Size: 0x40 (0x40 - 0x0)
	struct FPreviewMeshCollectionEntry	
	{
	public:
		TWeakObjectPtr SkeletalMesh; // 0x0(0x20)
		TWeakObjectPtr AnimBlueprint; // 0x20(0x20)
	};


	// Struct Engine.SkeletalMeshVertexAttributeInfo
	// Size: 0xC (0xC - 0x0)
	struct FSkeletalMeshVertexAttributeInfo	
	{
	public:
		FPerPlatformBool EnabledForRender; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName Name; // 0x4(0x4)
		ESkeletalMeshVertexAttributeDataType DataType; // 0x8(0x4)
	};


	// Struct Engine.SkeletonToMeshLinkup
	// Size: 0x20 (0x20 - 0x0)
	struct FSkeletonToMeshLinkup	
	{
	public:
		TArray SkeletonToMeshTable; // 0x0(0x10)
		TArray MeshToSkeletonTable; // 0x10(0x10)
	};


	// Struct Engine.BoneNode
	// Size: 0x1 (0x1 - 0x0)
	struct FBoneNode	
	{
	public:
		TEnumAsByte TranslationRetargetingMode; // 0x0(0x1)
	};


	// Struct Engine.ReferencePose
	// Size: 0x18 (0x18 - 0x0)
	struct FReferencePose	
	{
	public:
		FName PoseName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray ReferencePose; // 0x8(0x10)
	};


	// Struct Engine.BoneReductionSetting
	// Size: 0x10 (0x10 - 0x0)
	struct FBoneReductionSetting	
	{
	public:
		TArray BonesToRemove; // 0x0(0x10)
	};


	// Struct Engine.NameMapping
	// Size: 0x8 (0x8 - 0x0)
	struct FNameMapping	
	{
	public:
		FName NodeName; // 0x0(0x4)
		FName BoneName; // 0x4(0x4)
	};


	// Struct Engine.AnimSlotGroup
	// Size: 0x18 (0x18 - 0x0)
	struct FAnimSlotGroup	
	{
	public:
		FName GroupName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray SlotNames; // 0x8(0x10)
	};


	// Struct Engine.VirtualBone
	// Size: 0xC (0xC - 0x0)
	struct FVirtualBone	
	{
	public:
		FName SourceBoneName; // 0x0(0x4)
		FName TargetBoneName; // 0x4(0x4)
		FName VirtualBoneName; // 0x8(0x4)
	};


	// Struct Engine.SkinWeightProfileInfo
	// Size: 0xC (0xC - 0x0)
	struct FSkinWeightProfileInfo	
	{
	public:
		FName Name; // 0x0(0x4)
		FPerPlatformBool DefaultProfile; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FPerPlatformInt DefaultProfileFromLODIndex; // 0x8(0x4)
	};


	// Struct Engine.SkinWeightProfileManagerTickFunction
	// Inherited from FTickFunction
	// Size: 0x8 (0x30 - 0x28)
	struct FSkinWeightProfileManagerTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.SmartNameMapping
	// Size: 0x70 (0x70 - 0x0)
	struct FSmartNameMapping	
	{
	public:
		unsigned char UnknownData01_2[0x70]; // 0x0(0x70) UNKNOWN PROPERTY
	};


	// Struct Engine.SmartNameContainer
	// Size: 0x50 (0x50 - 0x0)
	struct FSmartNameContainer	
	{
	public:
		unsigned char UnknownData01_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct Engine.SmartName
	// Size: 0x8 (0x8 - 0x0)
	struct FSmartName	
	{
	public:
		FName DisplayName; // 0x0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.TimeStretchCurveMarker
	// Size: 0x10 (0x10 - 0x0)
	struct FTimeStretchCurveMarker	
	{
	public:
		float Time; // 0x0(0xC)
		float Alpha; // 0xC(0x4)
	};


	// Struct Engine.TimeStretchCurve
	// Size: 0x28 (0x28 - 0x0)
	struct FTimeStretchCurve	
	{
	public:
		float SamplingRate; // 0x0(0x4)
		float CurveValueMinPrecision; // 0x4(0x4)
		TArray Markers; // 0x8(0x10)
		float Sum_dT_i_by_C_i; // 0x18(0xC)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.TimeStretchCurveInstance
	// Size: 0x30 (0x30 - 0x0)
	struct FTimeStretchCurveInstance	
	{
	public:
		bool bHasValidData; // 0x0(0x1)
		unsigned char UnknownData01_7[0x2F]; // 0x1(0x2F) UNKNOWN PROPERTY
	};


	// Struct Engine.AnimGroupInfo
	// Size: 0x14 (0x14 - 0x0)
	struct FAnimGroupInfo	
	{
	public:
		FName Name; // 0x0(0x4)
		FLinearColor Color; // 0x4(0x10)
	};


	// Struct Engine.AnimParentNodeAssetOverride
	// Size: 0x18 (0x18 - 0x0)
	struct FAnimParentNodeAssetOverride	
	{
	public:
		UAnimationAsset NewAsset; // 0x0(0x8)
		FGuid ParentNodeGuid; // 0x8(0x10)
	};


	// Struct Engine.AssetCompileData
	// Size: 0x8 (0x8 - 0x0)
	struct FAssetCompileData	
	{
	public:
		TWeakObjectPtr Asset; // 0x0(0x8)
	};


	// Struct Engine.PrimaryAssetTypeInfo
	// Size: 0x80 (0x80 - 0x0)
	struct FPrimaryAssetTypeInfo	
	{
	public:
		FName PrimaryAssetType; // 0x0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr AssetBaseClass; // 0x8(0x20)
		UClass AssetBaseClassLoaded; // 0x28(0x8)
		bool bHasBlueprintClasses; // 0x30(0x1)
		bool bIsEditorOnly; // 0x31(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
		TArray Directories; // 0x38(0x10)
		TArray SpecificAssets; // 0x48(0x10)
		FPrimaryAssetRules Rules; // 0x58(0xC)
		unsigned char UnknownData06_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		TArray AssetScanPaths; // 0x68(0x10)
		bool bIsDynamicAsset; // 0x78(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x79(0x3) UNKNOWN PROPERTY
		int32_t NumberOfAssets; // 0x7C(0x4)
	};


	// Struct Engine.AssetManagerSearchRules
	// Size: 0x50 (0x50 - 0x0)
	struct FAssetManagerSearchRules	
	{
	public:
		TArray AssetScanPaths; // 0x0(0x10)
		TArray IncludePatterns; // 0x10(0x10)
		TArray ExcludePatterns; // 0x20(0x10)
		UClass AssetBaseClass; // 0x30(0x8)
		bool bHasBlueprintClasses; // 0x38(0x1)
		bool bForceSynchronousScan; // 0x39(0x1)
		bool bSkipVirtualPathExpansion; // 0x3A(0x1)
		bool bSkipManagerIncludeCheck; // 0x3B(0x1)
		unsigned char UnknownData01_7[0x14]; // 0x3C(0x14) UNKNOWN PROPERTY
	};


	// Struct Engine.AudioEffectParameters
	// Size: 0x8 (0x8 - 0x0)
	struct FAudioEffectParameters	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.AudioReverbEffect
	// Inherited from FAudioEffectParameters
	// Size: 0x40 (0x48 - 0x8)
	struct FAudioReverbEffect : public FAudioEffectParameters	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x8(0x40) UNKNOWN PROPERTY
	};


	// Struct Engine.AudioQualitySettings
	// Size: 0x18 (0x18 - 0x0)
	struct FAudioQualitySettings	
	{
	public:
		FText DisplayName; // 0x0(0x10)
		int32_t MaxChannels; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.SoundDebugEntry
	// Size: 0x20 (0x20 - 0x0)
	struct FSoundDebugEntry	
	{
	public:
		FName DebugName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FSoftObjectPath Sound; // 0x8(0x18)
	};


	// Struct Engine.DefaultAudioBusSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FDefaultAudioBusSettings	
	{
	public:
		FSoftObjectPath AudioBus; // 0x0(0x18)
	};


	// Struct Engine.AudioVolumeSubmixSendSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FAudioVolumeSubmixSendSettings	
	{
	public:
		EAudioVolumeLocationState ListenerLocationState; // 0x0(0x1)
		EAudioVolumeLocationState SourceLocationState; // 0x1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		TArray SubmixSends; // 0x8(0x10)
	};


	// Struct Engine.SoundSubmixSendInfo
	// Inherited from FSoundSubmixSendInfoBase
	// Size: 0x8 (0xB8 - 0xB0)
	struct FSoundSubmixSendInfo : public FSoundSubmixSendInfoBase	
	{
	public:
		ESubmixSendStage SendStage; // 0xB0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.AudioVolumeSubmixOverrideSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FAudioVolumeSubmixOverrideSettings	
	{
	public:
		USoundSubmix Submix; // 0x0(0x8)
		TArray SubmixEffectChain; // 0x8(0x10)
		float CrossfadeTime; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.InteriorSettings
	// Size: 0x24 (0x24 - 0x0)
	struct FInteriorSettings	
	{
	public:
		bool bIsWorldSettings; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float ExteriorVolume; // 0x4(0x4)
		float ExteriorTime; // 0x8(0x4)
		float ExteriorLPF; // 0xC(0x4)
		float ExteriorLPFTime; // 0x10(0x4)
		float InteriorVolume; // 0x14(0x4)
		float InteriorTime; // 0x18(0x4)
		float InteriorLPF; // 0x1C(0x4)
		float InteriorLPFTime; // 0x20(0x4)
	};


	// Struct Engine.NodeToCodeAssociation
	// Size: 0x14 (0x14 - 0x0)
	struct FNodeToCodeAssociation	
	{
	public:
		unsigned char UnknownData01_2[0x14]; // 0x0(0x14) UNKNOWN PROPERTY
	};


	// Struct Engine.DebuggingInfoForSingleFunction
	// Size: 0x190 (0x190 - 0x0)
	struct FDebuggingInfoForSingleFunction	
	{
	public:
		unsigned char UnknownData01_2[0x190]; // 0x0(0x190) UNKNOWN PROPERTY
	};


	// Struct Engine.PointerToUberGraphFrame
	// Size: 0x8 (0x8 - 0x0)
	struct FPointerToUberGraphFrame	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.BlueprintDebugData
	// Size: 0x1 (0x1 - 0x0)
	struct FBlueprintDebugData	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.EventGraphFastCallPair
	// Size: 0x10 (0x10 - 0x0)
	struct FEventGraphFastCallPair	
	{
	public:
		UFunction FunctionToPatch; // 0x0(0x8)
		int32_t EventGraphCallOffset; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.BlueprintComponentChangedPropertyInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FBlueprintComponentChangedPropertyInfo	
	{
	public:
		FName PropertyName; // 0x0(0x4)
		int32_t ArrayIndex; // 0x4(0x4)
		UStruct PropertyScope; // 0x8(0x8)
	};


	// Struct Engine.BlueprintCookedComponentInstancingData
	// Size: 0x48 (0x48 - 0x0)
	struct FBlueprintCookedComponentInstancingData	
	{
	public:
		TArray ChangedPropertyList; // 0x0(0x10)
		unsigned char UnknownData02_6[0x11]; // 0x10(0x11) UNKNOWN PROPERTY
		bool bHasValidCookedData; // 0x21(0x1)
		unsigned char UnknownData03_7[0x26]; // 0x22(0x26) UNKNOWN PROPERTY
	};


	// Struct Engine.BPComponentClassOverride
	// Size: 0x10 (0x10 - 0x0)
	struct FBPComponentClassOverride	
	{
	public:
		FName ComponentName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UClass ComponentClass; // 0x8(0x8)
	};


	// Struct Engine.BookmarkJumpToSettings
	// Inherited from FBookmarkBaseJumpToSettings
	// Size: 0x0 (0x1 - 0x1)
	struct FBookmarkJumpToSettings : public FBookmarkBaseJumpToSettings	
	{
	public:
	};


	// Struct Engine.BuilderPoly
	// Size: 0x20 (0x20 - 0x0)
	struct FBuilderPoly	
	{
	public:
		TArray VertexIndices; // 0x0(0x10)
		int32_t Direction; // 0x10(0x4)
		FName ItemName; // 0x14(0x4)
		int32_t PolyFlags; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.CameraLensInterfaceClassSupport
	// Size: 0x8 (0x8 - 0x0)
	struct FCameraLensInterfaceClassSupport	
	{
	public:
		UClass Class; // 0x0(0x8)
	};


	// Struct Engine.PooledCameraShakes
	// Size: 0x10 (0x10 - 0x0)
	struct FPooledCameraShakes	
	{
	public:
		TArray PooledShakes; // 0x0(0x10)
	};


	// Struct Engine.ActiveCameraShakeInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FActiveCameraShakeInfo	
	{
	public:
		UCameraShakeBase ShakeInstance; // 0x0(0x8)
		TWeakObjectPtr ShakeSource; // 0x8(0x8)
		bool bIsCustomInitialized; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.CameraShakePatternStartParams
	// Size: 0x8 (0x8 - 0x0)
	struct FCameraShakePatternStartParams	
	{
	public:
		bool bIsRestarting; // 0x0(0x1)
		bool bOverrideDuration; // 0x1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float DurationOverride; // 0x4(0x4)
	};


	// Struct Engine.CameraShakePatternUpdateParams
	// Size: 0x820 (0x820 - 0x0)
	struct FCameraShakePatternUpdateParams	
	{
	public:
		float DeltaTime; // 0x0(0x4)
		float ShakeScale; // 0x4(0x4)
		float DynamicScale; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FMinimalViewInfo POV; // 0x10(0x810)
	};


	// Struct Engine.CameraShakePatternScrubParams
	// Size: 0x820 (0x820 - 0x0)
	struct FCameraShakePatternScrubParams	
	{
	public:
		float AbsoluteTime; // 0x0(0x4)
		float ShakeScale; // 0x4(0x4)
		float DynamicScale; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FMinimalViewInfo POV; // 0x10(0x810)
	};


	// Struct Engine.CameraShakePatternUpdateResult
	// Size: 0x740 (0x740 - 0x0)
	struct FCameraShakePatternUpdateResult	
	{
	public:
		unsigned char UnknownData01_2[0x740]; // 0x0(0x740) UNKNOWN PROPERTY
	};


	// Struct Engine.CameraShakePatternStopParams
	// Size: 0x1 (0x1 - 0x0)
	struct FCameraShakePatternStopParams	
	{
	public:
		bool bImmediately; // 0x0(0x1)
	};


	// Struct Engine.CameraShakeDuration
	// Size: 0x8 (0x8 - 0x0)
	struct FCameraShakeDuration	
	{
	public:
		float duration; // 0x0(0x4)
		ECameraShakeDurationType Type; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.CameraShakeInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FCameraShakeInfo	
	{
	public:
		FCameraShakeDuration duration; // 0x0(0x8)
		float BlendIn; // 0x8(0x4)
		float BlendOut; // 0xC(0x4)
	};


	// Struct Engine.DummySpacerCameraTypes
	// Size: 0x1 (0x1 - 0x0)
	struct FDummySpacerCameraTypes	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.RepRootMotionMontage
	// Size: 0xC8 (0xC8 - 0x0)
	struct FRepRootMotionMontage	
	{
	public:
		UAnimSequenceBase Animation; // 0x0(0x8)
		bool bIsActive; // 0x8(0x1)
		bool bRelativePosition; // 0x9(0x1)
		bool bRelativeRotation; // 0xA(0x1)
		unsigned char UnknownData02_6[0x1]; // 0xB(0x1) UNKNOWN PROPERTY
		float Position; // 0xC(0x4)
		FVector_NetQuantize100 Location; // 0x10(0x18)
		FRotator Rotation; // 0x28(0x18)
		UPrimitiveComponent MovementBase; // 0x40(0x8)
		FName MovementBaseBoneName; // 0x48(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FRootMotionSourceGroup AuthoritativeRootMotion; // 0x50(0x48)
		FVector_NetQuantize10 Acceleration; // 0x98(0x18)
		FVector_NetQuantize10 LinearVelocity; // 0xB0(0x18)
	};


	// Struct Engine.SimulatedRootMotionReplicatedMove
	// Size: 0xD0 (0xD0 - 0x0)
	struct FSimulatedRootMotionReplicatedMove	
	{
	public:
		float Time; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FRepRootMotionMontage RootMotion; // 0x8(0xC8)
	};


	// Struct Engine.BasedMovementInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FBasedMovementInfo	
	{
	public:
		uint16_t BaseID; // 0x0(0x2)
		bool bServerHasBaseComponent : 1; // 0x2:0(0x1)
		bool bRelativeRotation : 1; // 0x2:1(0x1)
		bool bServerHasVelocity : 1; // 0x2:2(0x1)
		unsigned char UnknownData01_5[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		FName BoneName; // 0x4(0x4)
		UPrimitiveComponent MovementBase; // 0x8(0x8)
		FVector_NetQuantize100 Location; // 0x10(0x18)
		FRotator Rotation; // 0x28(0x18)
	};


	// Struct Engine.CollisionResponseTemplate
	// Size: 0x40 (0x40 - 0x0)
	struct FCollisionResponseTemplate	
	{
	public:
		FName Name; // 0x0(0x4)
		TEnumAsByte CollisionEnabled; // 0x4(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x5(0x1) UNKNOWN PROPERTY
		bool bCanModify; // 0x6(0x1)
		unsigned char UnknownData04_6[0x21]; // 0x7(0x21) UNKNOWN PROPERTY
		FName ObjectTypeName; // 0x28(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray CustomResponses; // 0x30(0x10)
	};


	// Struct Engine.CustomChannelSetup
	// Size: 0x8 (0x8 - 0x0)
	struct FCustomChannelSetup	
	{
	public:
		TEnumAsByte Channel; // 0x0(0x1)
		TEnumAsByte DefaultResponse; // 0x1(0x1)
		bool bTraceType; // 0x2(0x1)
		bool bStaticObject; // 0x3(0x1)
		FName Name; // 0x4(0x4)
	};


	// Struct Engine.CustomProfile
	// Size: 0x18 (0x18 - 0x0)
	struct FCustomProfile	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray CustomResponses; // 0x8(0x10)
	};


	// Struct Engine.BlueprintComponentDelegateBinding
	// Size: 0xC (0xC - 0x0)
	struct FBlueprintComponentDelegateBinding	
	{
	public:
		FName ComponentPropertyName; // 0x0(0x4)
		FName DelegatePropertyName; // 0x4(0x4)
		FName FunctionNameToBind; // 0x8(0x4)
	};


	// Struct Engine.ActorComponentInstanceSourceInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FActorComponentInstanceSourceInfo	
	{
	public:
		UObject SourceComponentTemplate; // 0x0(0x8)
		EComponentCreationMethod SourceComponentCreationMethod; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		int32_t SourceComponentTypeSerializedIndex; // 0xC(0x4)
	};


	// Struct Engine.ActorInstanceData
	// Inherited from FInstanceCacheDataBase
	// Size: 0x8 (0x60 - 0x58)
	struct FActorInstanceData : public FInstanceCacheDataBase	
	{
	public:
		UClass ActorClass; // 0x58(0x8)
	};


	// Struct Engine.AudioComponentParam
	// Inherited from FAudioParameter
	// Size: 0x8 (0x98 - 0x90)
	struct FAudioComponentParam : public FAudioParameter	
	{
	public:
		USoundWave SoundWaveParam; // 0x90(0x8)
	};


	// Struct Engine.CharacterMovementComponentPrePhysicsTickFunction
	// Inherited from FTickFunction
	// Size: 0x8 (0x30 - 0x28)
	struct FCharacterMovementComponentPrePhysicsTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.ChildActorAttachedActorInfo
	// Size: 0x70 (0x70 - 0x0)
	struct FChildActorAttachedActorInfo	
	{
	public:
		TWeakObjectPtr Actor; // 0x0(0x8)
		FName SocketName; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FTransform RelativeTransform; // 0x10(0x60)
	};


	// Struct Engine.ChildActorComponentInstanceData
	// Inherited from FSceneComponentInstanceData -> FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0x40 (0xF8 - 0xB8)
	struct FChildActorComponentInstanceData : public FSceneComponentInstanceData	
	{
	public:
		UClass ChildActorClass; // 0xB8(0x8)
		FName ChildActorName; // 0xC0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		TArray AttachedActors; // 0xC8(0x10)
		unsigned char UnknownData03_7[0x20]; // 0xD8(0x20) UNKNOWN PROPERTY
	};


	// Struct Engine.CachedKeyToActionInfo
	// Size: 0x70 (0x70 - 0x0)
	struct FCachedKeyToActionInfo	
	{
	public:
		TWeakObjectPtr PlayerInput; // 0x0(0x8)
		unsigned char UnknownData01_7[0x68]; // 0x8(0x68) UNKNOWN PROPERTY
	};


	// Struct Engine.PrecomputedLightInstanceData
	// Inherited from FSceneComponentInstanceData -> FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0x98 (0x150 - 0xB8)
	struct FPrecomputedLightInstanceData : public FSceneComponentInstanceData	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0xC0(0x60)
		FGuid OriginalLightGuid; // 0x120(0x10)
		FGuid LightGuid; // 0x130(0x10)
		int32_t PreviewShadowMapChannel; // 0x140(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x144(0xC) UNKNOWN PROPERTY
	};


	// Struct Engine.BatchedLine
	// Size: 0x50 (0x50 - 0x0)
	struct FBatchedLine	
	{
	public:
		FVector Start; // 0x0(0x18)
		FVector End; // 0x18(0x18)
		FLinearColor Color; // 0x30(0x10)
		float Thickness; // 0x40(0x4)
		float RemainingLifeTime; // 0x44(0x4)
		char DepthPriority; // 0x48(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		uint32_t BatchID; // 0x4C(0x4)
	};


	// Struct Engine.BatchedPoint
	// Size: 0x38 (0x38 - 0x0)
	struct FBatchedPoint	
	{
	public:
		FVector Position; // 0x0(0x18)
		FLinearColor Color; // 0x18(0x10)
		float PointSize; // 0x28(0x4)
		float RemainingLifeTime; // 0x2C(0x4)
		char DepthPriority; // 0x30(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		uint32_t BatchID; // 0x34(0x4)
	};


	// Struct Engine.LODMappingData
	// Size: 0x20 (0x20 - 0x0)
	struct FLODMappingData	
	{
	public:
		TArray Mapping; // 0x0(0x10)
		TArray InverseMapping; // 0x10(0x10)
	};


	// Struct Engine.ComponentSync
	// Size: 0x8 (0x8 - 0x0)
	struct FComponentSync	
	{
	public:
		FName Name; // 0x0(0x4)
		ESyncOption SyncOption; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.MaterialSpriteElement
	// Size: 0x28 (0x28 - 0x0)
	struct FMaterialSpriteElement	
	{
	public:
		UMaterialInterface Material; // 0x0(0x8)
		UCurveFloat DistanceToOpacityCurve; // 0x8(0x8)
		bool bSizeIsInScreenSpace : 1; // 0x10:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float BaseSizeX; // 0x14(0x4)
		float BaseSizeY; // 0x18(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		UCurveFloat DistanceToSizeCurve; // 0x20(0x8)
	};


	// Struct Engine.EngineShowFlagsSetting
	// Size: 0x18 (0x18 - 0x0)
	struct FEngineShowFlagsSetting	
	{
	public:
		FString ShowFlagName; // 0x0(0x10)
		bool Enabled; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.SkeletalMeshComponentEndPhysicsTickFunction
	// Inherited from FTickFunction
	// Size: 0x8 (0x30 - 0x28)
	struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.SkeletalMeshComponentClothTickFunction
	// Inherited from FTickFunction
	// Size: 0x8 (0x30 - 0x28)
	struct FSkeletalMeshComponentClothTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.TentDistribution
	// Size: 0xC (0xC - 0x0)
	struct FTentDistribution	
	{
	public:
		float TipAltitude; // 0x0(0x4)
		float TipValue; // 0x4(0x4)
		float Width; // 0x8(0x4)
	};


	// Struct Engine.SplineCurves
	// Size: 0x68 (0x68 - 0x0)
	struct FSplineCurves	
	{
	public:
		FInterpCurveVector Position; // 0x0(0x18)
		FInterpCurveQuat Rotation; // 0x18(0x18)
		FInterpCurveVector Scale; // 0x30(0x18)
		FInterpCurveFloat ReparamTable; // 0x48(0x18)
		uint32_t Version; // 0x60(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.SplineInstanceData
	// Inherited from FSceneComponentInstanceData -> FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0xD8 (0x190 - 0xB8)
	struct FSplineInstanceData : public FSceneComponentInstanceData	
	{
	public:
		bool bSplineHasBeenEdited; // 0xB8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		FSplineCurves SplineCurves; // 0xC0(0x68)
		FSplineCurves SplineCurvesPreUCS; // 0x128(0x68)
	};


	// Struct Engine.SplineMeshParams
	// Size: 0xB0 (0xB0 - 0x0)
	struct FSplineMeshParams	
	{
	public:
		FVector StartPos; // 0x0(0x18)
		FVector StartTangent; // 0x18(0x18)
		FVector2D StartScale; // 0x30(0x10)
		float StartRoll; // 0x40(0x4)
		float EndRoll; // 0x44(0x4)
		FVector2D StartOffset; // 0x48(0x10)
		FVector EndPos; // 0x58(0x18)
		FVector2D EndScale; // 0x70(0x10)
		FVector EndTangent; // 0x80(0x18)
		FVector2D EndOffset; // 0x98(0x10)
		float NaniteClusterBoundsScale; // 0xA8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.StaticMeshComponentInstanceData
	// Inherited from FPrimitiveComponentInstanceData -> FSceneComponentInstanceData -> FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0x40 (0x170 - 0x130)
	struct FStaticMeshComponentInstanceData : public FPrimitiveComponentInstanceData	
	{
	public:
		UStaticMesh StaticMesh; // 0x130(0x8)
		TArray VertexColorLODs; // 0x138(0x10)
		TArray CachedStaticLighting; // 0x148(0x10)
		TArray StreamingTextureData; // 0x158(0x10)
	};


	// Struct Engine.StaticMeshVertexColorLODData
	// Size: 0x28 (0x28 - 0x0)
	struct FStaticMeshVertexColorLODData	
	{
	public:
		TArray PaintedVertices; // 0x0(0x10)
		TArray VertexBufferColors; // 0x10(0x10)
		uint32_t LODIndex; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.PaintedVertex
	// Size: 0x40 (0x40 - 0x0)
	struct FPaintedVertex	
	{
	public:
		FVector Position; // 0x0(0x18)
		FColor Color; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FVector4 Normal; // 0x20(0x20)
	};


	// Struct Engine.SplineMeshInstanceData
	// Inherited from FStaticMeshComponentInstanceData -> FPrimitiveComponentInstanceData -> FSceneComponentInstanceData -> FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0x68 (0x1D0 - 0x168)
	struct FSplineMeshInstanceData : public FStaticMeshComponentInstanceData	
	{
	public:
		FVector StartPos; // 0x168(0x18)
		FVector EndPos; // 0x180(0x18)
		FVector StartTangent; // 0x198(0x18)
		FVector EndTangent; // 0x1B0(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.CullDistanceSizePair
	// Size: 0x8 (0x8 - 0x0)
	struct FCullDistanceSizePair	
	{
	public:
		float Size; // 0x0(0x4)
		float CullDistance; // 0x4(0x4)
	};


	// Struct Engine.RuntimeCurveLinearColor
	// Size: 0x208 (0x208 - 0x0)
	struct FRuntimeCurveLinearColor	
	{
	public:
		FRichCurve ColorCurves; // 0x0(0x200)
		UCurveLinearColor ExternalCurve; // 0x200(0x8)
	};


	// Struct Engine.CurveAtlasColorAdjustments
	// Size: 0x24 (0x24 - 0x0)
	struct FCurveAtlasColorAdjustments	
	{
	public:
		bool bChromaKeyTexture : 1; // 0x0:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float AdjustBrightness; // 0x4(0x4)
		float AdjustBrightnessCurve; // 0x8(0x4)
		float AdjustVibrance; // 0xC(0x4)
		float AdjustSaturation; // 0x10(0x4)
		float AdjustRGBCurve; // 0x14(0x4)
		float AdjustHue; // 0x18(0x4)
		float AdjustMinAlpha; // 0x1C(0x4)
		float AdjustMaxAlpha; // 0x20(0x4)
	};


	// Struct Engine.RuntimeVectorCurve
	// Size: 0x188 (0x188 - 0x0)
	struct FRuntimeVectorCurve	
	{
	public:
		FRichCurve VectorCurves; // 0x0(0x180)
		UCurveVector ExternalCurve; // 0x180(0x8)
	};


	// Struct Engine.IntegralKey
	// Size: 0x8 (0x8 - 0x0)
	struct FIntegralKey	
	{
	public:
		float Time; // 0x0(0x4)
		int32_t Value; // 0x4(0x4)
	};


	// Struct Engine.IntegralCurve
	// Inherited from FIndexedCurve
	// Size: 0x18 (0x80 - 0x68)
	struct FIntegralCurve : public FIndexedCurve	
	{
	public:
		TArray Keys; // 0x68(0x10)
		int32_t DefaultValue; // 0x78(0x4)
		bool bUseDefaultValueBeforeFirstKey; // 0x7C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.NameCurveKey
	// Size: 0x8 (0x8 - 0x0)
	struct FNameCurveKey	
	{
	public:
		float Time; // 0x0(0x4)
		FName Value; // 0x4(0x4)
	};


	// Struct Engine.NameCurve
	// Inherited from FIndexedCurve
	// Size: 0x10 (0x78 - 0x68)
	struct FNameCurve : public FIndexedCurve	
	{
	public:
		TArray Keys; // 0x68(0x10)
	};


	// Struct Engine.SimpleCurveKey
	// Size: 0x8 (0x8 - 0x0)
	struct FSimpleCurveKey	
	{
	public:
		float Time; // 0x0(0x4)
		float Value; // 0x4(0x4)
	};


	// Struct Engine.SimpleCurve
	// Inherited from FRealCurve -> FIndexedCurve
	// Size: 0x18 (0x88 - 0x70)
	struct FSimpleCurve : public FRealCurve	
	{
	public:
		TEnumAsByte InterpMode; // 0x70(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		TArray Keys; // 0x78(0x10)
	};


	// Struct Engine.StringCurveKey
	// Size: 0x18 (0x18 - 0x0)
	struct FStringCurveKey	
	{
	public:
		float Time; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString Value; // 0x8(0x10)
	};


	// Struct Engine.StringCurve
	// Inherited from FIndexedCurve
	// Size: 0x20 (0x88 - 0x68)
	struct FStringCurve : public FIndexedCurve	
	{
	public:
		FString DefaultValue; // 0x68(0x10)
		TArray Keys; // 0x78(0x10)
	};


	// Struct Engine.DataDrivenConsoleVariable
	// Size: 0x60 (0x60 - 0x0)
	struct FDataDrivenConsoleVariable	
	{
	public:
		FDataDrivenCVarType Type; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString Name; // 0x8(0x10)
		FString ToolTip; // 0x18(0x10)
		float DefaultValueFloat; // 0x28(0x4)
		int32_t DefaultValueInt; // 0x2C(0x4)
		bool DefaultValueBool; // 0x30(0x1)
		unsigned char UnknownData03_7[0x2F]; // 0x31(0x2F) UNKNOWN PROPERTY
	};


	// Struct Engine.DataTableCategoryHandle
	// Size: 0x10 (0x10 - 0x0)
	struct FDataTableCategoryHandle	
	{
	public:
		UDataTable DataTable; // 0x0(0x8)
		FName ColumnName; // 0x8(0x4)
		FName RowContents; // 0xC(0x4)
	};


	// Struct Engine.DebugCameraControllerSettingsViewModeIndex
	// Size: 0x10 (0x10 - 0x0)
	struct FDebugCameraControllerSettingsViewModeIndex	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TEnumAsByte ViewModeIndex; // 0x8(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.RollbackNetStartupActorInfo
	// Size: 0xD0 (0xD0 - 0x0)
	struct FRollbackNetStartupActorInfo	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		UObject Archetype; // 0x8(0x8)
		unsigned char UnknownData03_6[0xB0]; // 0x10(0xB0) UNKNOWN PROPERTY
		TArray ObjReferences; // 0xC0(0x10)
	};


	// Struct Engine.MulticastRecordOptions
	// Size: 0x18 (0x18 - 0x0)
	struct FMulticastRecordOptions	
	{
	public:
		FString FuncPathName; // 0x0(0x10)
		bool bServerSkip; // 0x10(0x1)
		bool bClientSkip; // 0x11(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
	};


	// Struct Engine.SelectedFragmentProperties
	// Size: 0x20 (0x20 - 0x0)
	struct FSelectedFragmentProperties	
	{
	public:
		FName tag; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString Fragment; // 0x8(0x10)
		bool bEnabled; // 0x18(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.DPMatchingIfCondition
	// Size: 0x28 (0x28 - 0x0)
	struct FDPMatchingIfCondition	
	{
	public:
		FName Operator; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString Arg1; // 0x8(0x10)
		FString Arg2; // 0x18(0x10)
	};


	// Struct Engine.DPMatchingRulestructBase
	// Size: 0x48 (0x48 - 0x0)
	struct FDPMatchingRulestructBase	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FString RuleName; // 0x8(0x10)
		TArray IfConditions; // 0x18(0x10)
		FString AppendFragments; // 0x28(0x10)
		FString SetUserVar; // 0x38(0x10)
	};


	// Struct Engine.DPMatchingRulestructA
	// Inherited from FDPMatchingRulestructBase
	// Size: 0x20 (0x68 - 0x48)
	struct FDPMatchingRulestructA : public FDPMatchingRulestructBase	
	{
	public:
		TArray OnTrue; // 0x48(0x10)
		TArray OnFalse; // 0x58(0x10)
	};


	// Struct Engine.DPMatchingRulestructB
	// Inherited from FDPMatchingRulestructBase
	// Size: 0x20 (0x68 - 0x48)
	struct FDPMatchingRulestructB : public FDPMatchingRulestructBase	
	{
	public:
		TArray OnTrue; // 0x48(0x10)
		TArray OnFalse; // 0x58(0x10)
	};


	// Struct Engine.DPMatchingRulestructC
	// Inherited from FDPMatchingRulestructBase
	// Size: 0x20 (0x68 - 0x48)
	struct FDPMatchingRulestructC : public FDPMatchingRulestructBase	
	{
	public:
		TArray OnTrue; // 0x48(0x10)
		TArray OnFalse; // 0x58(0x10)
	};


	// Struct Engine.DPMatchingRulestructD
	// Inherited from FDPMatchingRulestructBase
	// Size: 0x20 (0x68 - 0x48)
	struct FDPMatchingRulestructD : public FDPMatchingRulestructBase	
	{
	public:
		TArray OnTrue; // 0x48(0x10)
		TArray OnFalse; // 0x58(0x10)
	};


	// Struct Engine.DPMatchingRulestructE
	// Inherited from FDPMatchingRulestructBase
	// Size: 0x20 (0x68 - 0x48)
	struct FDPMatchingRulestructE : public FDPMatchingRulestructBase	
	{
	public:
		TArray OnTrue; // 0x48(0x10)
		TArray OnFalse; // 0x58(0x10)
	};


	// Struct Engine.DPMatchingRulestruct
	// Inherited from FDPMatchingRulestructBase
	// Size: 0x20 (0x68 - 0x48)
	struct FDPMatchingRulestruct : public FDPMatchingRulestructBase	
	{
	public:
		TArray OnTrue; // 0x48(0x10)
		TArray OnFalse; // 0x58(0x10)
	};


	// Struct Engine.DialogueContext
	// Size: 0x18 (0x18 - 0x0)
	struct FDialogueContext	
	{
	public:
		UDialogueVoice Speaker; // 0x0(0x8)
		TArray Targets; // 0x8(0x10)
	};


	// Struct Engine.DialogueWaveParameter
	// Size: 0x20 (0x20 - 0x0)
	struct FDialogueWaveParameter	
	{
	public:
		UDialogueWave DialogueWave; // 0x0(0x8)
		FDialogueContext Context; // 0x8(0x18)
	};


	// Struct Engine.DialogueContextMapping
	// Size: 0x38 (0x38 - 0x0)
	struct FDialogueContextMapping	
	{
	public:
		FDialogueContext Context; // 0x0(0x18)
		USoundWave SoundWave; // 0x18(0x8)
		FString LocalizationKeyFormat; // 0x20(0x10)
		UDialogueSoundWaveProxy Proxy; // 0x30(0x8)
	};


	// Struct Engine.GraphReference
	// Size: 0x20 (0x20 - 0x0)
	struct FGraphReference	
	{
	public:
		UEdGraph MacroGraph; // 0x0(0x8)
		UBlueprint GraphBlueprint; // 0x8(0x8)
		FGuid GraphGuid; // 0x10(0x10)
	};


	// Struct Engine.AssetImportInfo
	// Size: 0x1 (0x1 - 0x0)
	struct FAssetImportInfo	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.TypedElementPasteOptions
	// Size: 0x78 (0x78 - 0x0)
	struct FTypedElementPasteOptions	
	{
	public:
		UTypedElementSelectionSet SelectionSetToModify; // 0x0(0x8)
		bool bPasteAtLocation; // 0x8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FVector PasteLocation; // 0x10(0x18)
		unsigned char UnknownData03_7[0x50]; // 0x28(0x50) UNKNOWN PROPERTY
	};


	// Struct Engine.TypedElementDeletionOptions
	// Size: 0x3 (0x3 - 0x0)
	struct FTypedElementDeletionOptions	
	{
	public:
		bool bVerifyDeletionCanHappen; // 0x0(0x1)
		bool bWarnAboutReferences; // 0x1(0x1)
		bool bWarnAboutSoftReferences; // 0x2(0x1)
	};


	// Struct Engine.DamageEvent
	// Size: 0x10 (0x10 - 0x0)
	struct FDamageEvent	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		UClass DamageTypeClass; // 0x8(0x8)
	};


	// Struct Engine.PointDamageEvent
	// Inherited from FDamageEvent
	// Size: 0x118 (0x128 - 0x10)
	struct FPointDamageEvent : public FDamageEvent	
	{
	public:
		float Damage; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FVector_NetQuantizeNormal ShotDirection; // 0x18(0x18)
		FHitResult HitInfo; // 0x30(0xF8)
	};


	// Struct Engine.RadialDamageParams
	// Size: 0x14 (0x14 - 0x0)
	struct FRadialDamageParams	
	{
	public:
		float BaseDamage; // 0x0(0x4)
		float MinimumDamage; // 0x4(0x4)
		float InnerRadius; // 0x8(0x4)
		float OuterRadius; // 0xC(0x4)
		float DamageFalloff; // 0x10(0x4)
	};


	// Struct Engine.RadialDamageEvent
	// Inherited from FDamageEvent
	// Size: 0x40 (0x50 - 0x10)
	struct FRadialDamageEvent : public FDamageEvent	
	{
	public:
		FRadialDamageParams Params; // 0x10(0x14)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FVector Origin; // 0x28(0x18)
		TArray ComponentHits; // 0x40(0x10)
	};


	// Struct Engine.HitResultNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FHitResultNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct Engine.RigidBodyState
	// Size: 0x80 (0x80 - 0x0)
	struct FRigidBodyState	
	{
	public:
		FVector_NetQuantize100 Position; // 0x0(0x18)
		unsigned char UnknownData02_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FQuat Quaternion; // 0x20(0x20)
		FVector_NetQuantize100 LinVel; // 0x40(0x18)
		FVector_NetQuantize100 AngVel; // 0x58(0x18)
		char Flags; // 0x70(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x71(0xF) UNKNOWN PROPERTY
	};


	// Struct Engine.FontCharacter
	// Size: 0x18 (0x18 - 0x0)
	struct FFontCharacter	
	{
	public:
		int32_t StartU; // 0x0(0x4)
		int32_t StartV; // 0x4(0x4)
		int32_t USize; // 0x8(0x4)
		int32_t VSize; // 0xC(0x4)
		char TextureIndex; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		int32_t VerticalOffset; // 0x14(0x4)
	};


	// Struct Engine.CharacterNetworkSerializationPackedBitsNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x8 (0x18 - 0x10)
	struct FCharacterNetworkSerializationPackedBitsNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		uint32_t MaxAllowedDataBits; // 0x10(0x4)
		uint32_t MaxAllowedObjectReferences; // 0x14(0x4)
	};


	// Struct Engine.ForceFeedbackChannelDetails
	// Size: 0x90 (0x90 - 0x0)
	struct FForceFeedbackChannelDetails	
	{
	public:
		bool bAffectsLeftLarge : 1; // 0x0:0(0x1)
		bool bAffectsLeftSmall : 1; // 0x0:1(0x1)
		bool bAffectsRightLarge : 1; // 0x0:2(0x1)
		bool bAffectsRightSmall : 1; // 0x0:3(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FRuntimeFloatCurve Curve; // 0x8(0x88)
	};


	// Struct Engine.ForceFeedbackEffectOverridenChannelDetails
	// Size: 0x10 (0x10 - 0x0)
	struct FForceFeedbackEffectOverridenChannelDetails	
	{
	public:
		TArray ChannelDetails; // 0x0(0x10)
	};


	// Struct Engine.DeviceColorData
	// Size: 0x8 (0x8 - 0x0)
	struct FDeviceColorData	
	{
	public:
		bool bEnable; // 0x0(0x1)
		bool bResetAfterCompletion; // 0x1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		FColor LightColor; // 0x4(0x4)
	};


	// Struct Engine.DeviceColorCurveData
	// Size: 0x10 (0x10 - 0x0)
	struct FDeviceColorCurveData	
	{
	public:
		bool bEnable; // 0x0(0x1)
		bool bResetAfterCompletion; // 0x1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		UCurveLinearColor DeviceColorCurve; // 0x8(0x8)
	};


	// Struct Engine.DeviceTriggerBaseData
	// Size: 0x2 (0x2 - 0x0)
	struct FDeviceTriggerBaseData	
	{
	public:
		EInputDeviceTriggerMask AffectedTriggers; // 0x0(0x1)
		bool bResetUponCompletion; // 0x1(0x1)
	};


	// Struct Engine.DeviceTriggerFeedbackData
	// Size: 0x10 (0x10 - 0x0)
	struct FDeviceTriggerFeedbackData	
	{
	public:
		UCurveFloat FeedbackPositionCurve; // 0x0(0x8)
		UCurveFloat FeedbackStrenghCurve; // 0x8(0x8)
	};


	// Struct Engine.DeviceTriggerTriggerResistanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FDeviceTriggerTriggerResistanceData	
	{
	public:
		int32_t StartPosition; // 0x0(0x4)
		int32_t StartStrengh; // 0x4(0x4)
		int32_t EndPosition; // 0x8(0x4)
		int32_t EndStrengh; // 0xC(0x4)
	};


	// Struct Engine.DeviceTriggerTriggerVibrationData
	// Size: 0x18 (0x18 - 0x0)
	struct FDeviceTriggerTriggerVibrationData	
	{
	public:
		UCurveFloat TriggerPositionCurve; // 0x0(0x8)
		UCurveFloat VibrationFrequencyCurve; // 0x8(0x8)
		UCurveFloat VibrationAmplitudeCurve; // 0x10(0x8)
	};


	// Struct Engine.AudioBasedVibrationData
	// Size: 0x8 (0x8 - 0x0)
	struct FAudioBasedVibrationData	
	{
	public:
		USoundBase Sound; // 0x0(0x8)
	};


	// Struct Engine.ActivateDevicePropertyParams
	// Size: 0xC (0xC - 0x0)
	struct FActivateDevicePropertyParams	
	{
	public:
		FPlatformUserId UserId; // 0x0(0x4)
		FInputDeviceId DeviceID; // 0x4(0x4)
		bool bLooping : 1; // 0x8:0(0x1)
		bool bIgnoreTimeDilation : 1; // 0x8:1(0x1)
		bool bPlayWhilePaused : 1; // 0x8:2(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.ActiveDeviceProperty
	// Size: 0x20 (0x20 - 0x0)
	struct FActiveDeviceProperty	
	{
	public:
		TWeakObjectPtr Property; // 0x0(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x8(0x18) UNKNOWN PROPERTY
	};


	// Struct Engine.RootMotionSourceStatus
	// Size: 0x1 (0x1 - 0x0)
	struct FRootMotionSourceStatus	
	{
	public:
		char Flags; // 0x0(0x1)
	};


	// Struct Engine.RootMotionFinishVelocitySettings
	// Size: 0x20 (0x20 - 0x0)
	struct FRootMotionFinishVelocitySettings	
	{
	public:
		ERootMotionFinishVelocityMode Mode; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float ClampVelocity; // 0x4(0x4)
		FVector SetVelocity; // 0x8(0x18)
	};


	// Struct Engine.RootMotionSource
	// Size: 0xC0 (0xC0 - 0x0)
	struct FRootMotionSource	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		uint16_t Priority; // 0x8(0x2)
		uint16_t LocalID; // 0xA(0x2)
		FName InstanceName; // 0xC(0x4)
		float StartTime; // 0x10(0x4)
		float CurrentTime; // 0x14(0x4)
		float PreviousTime; // 0x18(0x4)
		float duration; // 0x1C(0x4)
		FRootMotionSourceStatus Status; // 0x20(0x1)
		FRootMotionSourceSettings Settings; // 0x21(0x1)
		ERootMotionAccumulateMode AccumulateMode; // 0x22(0x1)
		bool bInLocalSpace; // 0x23(0x1)
		unsigned char UnknownData03_6[0xC]; // 0x24(0xC) UNKNOWN PROPERTY
		FRootMotionMovementParams RootMotionParams; // 0x30(0x70)
		FRootMotionFinishVelocitySettings FinishVelocityParams; // 0xA0(0x20)
	};


	// Struct Engine.RootMotionSource_ConstantForce
	// Inherited from FRootMotionSource
	// Size: 0x20 (0xE0 - 0xC0)
	struct FRootMotionSource_ConstantForce : public FRootMotionSource	
	{
	public:
		FVector Force; // 0xC0(0x18)
		UCurveFloat StrengthOverTime; // 0xD8(0x8)
	};


	// Struct Engine.RootMotionSource_RadialForce
	// Inherited from FRootMotionSource
	// Size: 0x60 (0x120 - 0xC0)
	struct FRootMotionSource_RadialForce : public FRootMotionSource	
	{
	public:
		FVector Location; // 0xC0(0x18)
		AActor LocationActor; // 0xD8(0x8)
		float Radius; // 0xE0(0x4)
		float Strength; // 0xE4(0x4)
		bool bIsPush; // 0xE8(0x1)
		bool bNoZForce; // 0xE9(0x1)
		unsigned char UnknownData02_6[0x6]; // 0xEA(0x6) UNKNOWN PROPERTY
		UCurveFloat StrengthDistanceFalloff; // 0xF0(0x8)
		UCurveFloat StrengthOverTime; // 0xF8(0x8)
		bool bUseFixedWorldDirection; // 0x100(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		FRotator FixedWorldDirection; // 0x108(0x18)
	};


	// Struct Engine.RootMotionSource_MoveToForce
	// Inherited from FRootMotionSource
	// Size: 0x40 (0x100 - 0xC0)
	struct FRootMotionSource_MoveToForce : public FRootMotionSource	
	{
	public:
		FVector StartLocation; // 0xC0(0x18)
		FVector TargetLocation; // 0xD8(0x18)
		bool bRestrictSpeedToExpected; // 0xF0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
		UCurveVector PathOffsetCurve; // 0xF8(0x8)
	};


	// Struct Engine.RootMotionSource_MoveToDynamicForce
	// Inherited from FRootMotionSource
	// Size: 0x60 (0x120 - 0xC0)
	struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource	
	{
	public:
		FVector StartLocation; // 0xC0(0x18)
		FVector InitialTargetLocation; // 0xD8(0x18)
		FVector TargetLocation; // 0xF0(0x18)
		bool bRestrictSpeedToExpected; // 0x108(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x109(0x7) UNKNOWN PROPERTY
		UCurveVector PathOffsetCurve; // 0x110(0x8)
		UCurveFloat TimeMappingCurve; // 0x118(0x8)
	};


	// Struct Engine.RootMotionSource_JumpForce
	// Inherited from FRootMotionSource
	// Size: 0x50 (0x110 - 0xC0)
	struct FRootMotionSource_JumpForce : public FRootMotionSource	
	{
	public:
		FRotator Rotation; // 0xC0(0x18)
		float Distance; // 0xD8(0x4)
		float Height; // 0xDC(0x4)
		bool bDisableTimeout; // 0xE0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xE1(0x7) UNKNOWN PROPERTY
		UCurveVector PathOffsetCurve; // 0xE8(0x8)
		UCurveFloat TimeMappingCurve; // 0xF0(0x8)
		unsigned char UnknownData03_7[0x18]; // 0xF8(0x18) UNKNOWN PROPERTY
	};


	// Struct Engine.RootMotionSourceGroupNetSerializerConfig
	// Inherited from FPolymorphicArrayStructNetSerializerConfig -> FPolymorphicStructNetSerializerConfig -> FNetSerializerConfig
	// Size: 0x0 (0x28 - 0x28)
	struct FRootMotionSourceGroupNetSerializerConfig : public FPolymorphicArrayStructNetSerializerConfig	
	{
	public:
	};


	// Struct Engine.TouchInputControl
	// Size: 0x98 (0x98 - 0x0)
	struct FTouchInputControl	
	{
	public:
		bool bTreatAsButton; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UTexture2D Image1; // 0x8(0x8)
		UTexture2D Image2; // 0x10(0x8)
		FVector2D Center; // 0x18(0x10)
		FVector2D VisualSize; // 0x28(0x10)
		FVector2D ThumbSize; // 0x38(0x10)
		FVector2D InteractionSize; // 0x48(0x10)
		FVector2D InputScale; // 0x58(0x10)
		FKey MainInputKey; // 0x68(0x18)
		FKey AltInputKey; // 0x80(0x18)
	};


	// Struct Engine.UniqueNetIdReplNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FUniqueNetIdReplNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct Engine.HLODISMComponentDesc
	// Size: 0x30 (0x30 - 0x0)
	struct FHLODISMComponentDesc	
	{
	public:
		UStaticMesh StaticMesh; // 0x0(0x8)
		UMaterialInterface Material; // 0x8(0x8)
		TArray Instances; // 0x10(0x10)
		TArray InstancesCustomPrimitiveData; // 0x20(0x10)
	};


	// Struct Engine.HLODProxyMesh
	// Size: 0x28 (0x28 - 0x0)
	struct FHLODProxyMesh	
	{
	public:
		TLazyObjectPtr LODActor; // 0x0(0x18)
		UStaticMesh StaticMesh; // 0x18(0x8)
		FName Key; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.ComponentKey
	// Size: 0x20 (0x20 - 0x0)
	struct FComponentKey	
	{
	public:
		UClass OwnerClass; // 0x0(0x8)
		FName SCSVariableName; // 0x8(0x4)
		FGuid AssociatedGuid; // 0xC(0x10)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.ComponentOverrideRecord
	// Size: 0x78 (0x78 - 0x0)
	struct FComponentOverrideRecord	
	{
	public:
		UClass ComponentClass; // 0x0(0x8)
		UActorComponent ComponentTemplate; // 0x8(0x8)
		FComponentKey ComponentKey; // 0x10(0x20)
		FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30(0x48)
	};


	// Struct Engine.BlueprintInputDelegateBinding
	// Size: 0x4 (0x4 - 0x0)
	struct FBlueprintInputDelegateBinding	
	{
	public:
		bool bConsumeInput : 1; // 0x0:0(0x1)
		bool bExecuteWhenPaused : 1; // 0x0:1(0x1)
		bool bOverrideParentBinding : 1; // 0x0:2(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.BlueprintInputActionDelegateBinding
	// Inherited from FBlueprintInputDelegateBinding
	// Size: 0xC (0x10 - 0x4)
	struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding	
	{
	public:
		FName InputActionName; // 0x4(0x4)
		TEnumAsByte InputKeyEvent; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		FName FunctionNameToBind; // 0xC(0x4)
	};


	// Struct Engine.BlueprintInputAxisDelegateBinding
	// Inherited from FBlueprintInputDelegateBinding
	// Size: 0x8 (0xC - 0x4)
	struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding	
	{
	public:
		FName InputAxisName; // 0x4(0x4)
		FName FunctionNameToBind; // 0x8(0x4)
	};


	// Struct Engine.BlueprintInputAxisKeyDelegateBinding
	// Inherited from FBlueprintInputDelegateBinding
	// Size: 0x24 (0x28 - 0x4)
	struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding	
	{
	public:
		unsigned char UnknownData02_3[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FKey AxisKey; // 0x8(0x18)
		FName FunctionNameToBind; // 0x20(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.BlueprintInputKeyDelegateBinding
	// Inherited from FBlueprintInputDelegateBinding
	// Size: 0x2C (0x30 - 0x4)
	struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding	
	{
	public:
		unsigned char UnknownData02_3[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FInputChord InputChord; // 0x8(0x20)
		TEnumAsByte InputKeyEvent; // 0x28(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		FName FunctionNameToBind; // 0x2C(0x4)
	};


	// Struct Engine.BlueprintInputTouchDelegateBinding
	// Inherited from FBlueprintInputDelegateBinding
	// Size: 0x8 (0xC - 0x4)
	struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding	
	{
	public:
		TEnumAsByte InputKeyEvent; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FName FunctionNameToBind; // 0x8(0x4)
	};


	// Struct Engine.CurveEdEntry
	// Size: 0x38 (0x38 - 0x0)
	struct FCurveEdEntry	
	{
	public:
		UObject CurveObject; // 0x0(0x8)
		FColor CurveColor; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FString CurveName; // 0x10(0x10)
		int32_t bHideCurve; // 0x20(0x4)
		int32_t bColorCurve; // 0x24(0x4)
		int32_t bFloatingPointColorCurve; // 0x28(0x4)
		int32_t bClamp; // 0x2C(0x4)
		float ClampLow; // 0x30(0x4)
		float ClampHigh; // 0x34(0x4)
	};


	// Struct Engine.CurveEdTab
	// Size: 0x30 (0x30 - 0x0)
	struct FCurveEdTab	
	{
	public:
		FString TabName; // 0x0(0x10)
		TArray Curves; // 0x10(0x10)
		float ViewStartInput; // 0x20(0x4)
		float ViewEndInput; // 0x24(0x4)
		float ViewStartOutput; // 0x28(0x4)
		float ViewEndOutput; // 0x2C(0x4)
	};


	// Struct Engine.ISMComponentInstance
	// Size: 0xC (0xC - 0x0)
	struct FISMComponentInstance	
	{
	public:
		int32_t ClientIndex; // 0x0(0x4)
		int32_t InstanceIndex; // 0x4(0x4)
		int32_t InstanceSubIndex; // 0x8(0x4)
	};


	// Struct Engine.ISMClientInstance
	// Size: 0x10 (0x10 - 0x0)
	struct FISMClientInstance	
	{
	public:
		TArray ComponentIndices; // 0x0(0x10)
	};


	// Struct Engine.ISMClientData
	// Size: 0x10 (0x10 - 0x0)
	struct FISMClientData	
	{
	public:
		TArray Instances; // 0x0(0x10)
	};


	// Struct Engine.ISMComponentData
	// Size: 0x1 (0x1 - 0x0)
	struct FISMComponentData	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.SoftISMComponentDescriptor
	// Inherited from FISMComponentDescriptorBase
	// Size: 0x60 (0x220 - 0x1C0)
	struct FSoftISMComponentDescriptor : public FISMComponentDescriptorBase	
	{
	public:
		TWeakObjectPtr StaticMesh; // 0x1C0(0x20)
		TArray OverrideMaterials; // 0x1E0(0x10)
		TWeakObjectPtr OverlayMaterial; // 0x1F0(0x20)
		TArray RuntimeVirtualTextures; // 0x210(0x10)
	};


	// Struct Engine.SlateModifierKeysState
	// Size: 0x1 (0x1 - 0x0)
	struct FSlateModifierKeysState	
	{
	public:
		char ModifierKeysStateMask; // 0x0(0x1)
	};


	// Struct Engine.FloatSpringState
	// Size: 0xC (0xC - 0x0)
	struct FFloatSpringState	
	{
	public:
		unsigned char UnknownData01_2[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};


	// Struct Engine.VectorSpringState
	// Size: 0x38 (0x38 - 0x0)
	struct FVectorSpringState	
	{
	public:
		unsigned char UnknownData01_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct Engine.QuaternionSpringState
	// Size: 0x40 (0x40 - 0x0)
	struct FQuaternionSpringState	
	{
	public:
		unsigned char UnknownData01_2[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
	};


	// Struct Engine.DrawToRenderTargetContext
	// Size: 0x10 (0x10 - 0x0)
	struct FDrawToRenderTargetContext	
	{
	public:
		UTextureRenderTarget2D RenderTarget; // 0x0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.ImportanceTexture
	// Size: 0x50 (0x50 - 0x0)
	struct FImportanceTexture	
	{
	public:
		FIntPoint Size; // 0x0(0x8)
		int32_t NumMips; // 0x8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray MarginalCDF; // 0x10(0x10)
		TArray ConditionalCDF; // 0x20(0x10)
		TArray TextureData; // 0x30(0x10)
		TWeakObjectPtr Texture; // 0x40(0x8)
		TEnumAsByte Weighting; // 0x48(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.LatentActionManager
	// Size: 0x60 (0x60 - 0x0)
	struct FLatentActionManager	
	{
	public:
		unsigned char UnknownData01_2[0x60]; // 0x0(0x60) UNKNOWN PROPERTY
	};


	// Struct Engine.LayerActorStats
	// Size: 0x10 (0x10 - 0x0)
	struct FLayerActorStats	
	{
	public:
		UClass Type; // 0x0(0x8)
		int32_t Total; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.ActorFolderSet
	// Size: 0x50 (0x50 - 0x0)
	struct FActorFolderSet	
	{
	public:
		TSet ActorFolders; // 0x0(0x50)
	};


	// Struct Engine.StreamableTextureInstance
	// Size: 0x48 (0x48 - 0x0)
	struct FStreamableTextureInstance	
	{
	public:
		unsigned char UnknownData01_2[0x48]; // 0x0(0x48) UNKNOWN PROPERTY
	};


	// Struct Engine.DynamicTextureInstance
	// Inherited from FStreamableTextureInstance
	// Size: 0x10 (0x58 - 0x48)
	struct FDynamicTextureInstance : public FStreamableTextureInstance	
	{
	public:
		UTexture2D Texture; // 0x48(0x8)
		bool bAttached; // 0x50(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		float OriginalRadius; // 0x54(0x4)
	};


	// Struct Engine.LevelSimplificationDetails
	// Size: 0x158 (0x158 - 0x0)
	struct FLevelSimplificationDetails	
	{
	public:
		bool bCreatePackagePerAsset; // 0x0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float DetailsPercentage; // 0x4(0x4)
		FMaterialProxySettings StaticMeshMaterialSettings; // 0x8(0xA0)
		bool bOverrideLandscapeExportLOD; // 0xA8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		int32_t LandscapeExportLOD; // 0xAC(0x4)
		FMaterialProxySettings LandscapeMaterialSettings; // 0xB0(0xA0)
		bool bBakeFoliageToLandscape; // 0x150(0x1)
		bool bBakeGrassToLandscape; // 0x151(0x1)
		unsigned char UnknownData05_7[0x6]; // 0x152(0x6) UNKNOWN PROPERTY
	};


	// Struct Engine.ReplicatedStaticActorDestructionInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FReplicatedStaticActorDestructionInfo	
	{
	public:
		unsigned char UnknownData01_7[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
		UClass ObjClass; // 0x38(0x8)
	};


	// Struct Engine.ClientReceiveData
	// Size: 0x38 (0x38 - 0x0)
	struct FClientReceiveData	
	{
	public:
		APlayerController LocalPC; // 0x0(0x8)
		FName MessageType; // 0x8(0x4)
		int32_t MessageIndex; // 0xC(0x4)
		FString MessageString; // 0x10(0x10)
		APlayerState RelatedPlayerState; // 0x20(0x8)
		APlayerState RelatedPlayerState; // 0x28(0x8)
		UObject OptionalObject; // 0x30(0x8)
	};


	// Struct Engine.HLODInstancingKey
	// Size: 0x10 (0x10 - 0x0)
	struct FHLODInstancingKey	
	{
	public:
		UStaticMesh StaticMesh; // 0x0(0x8)
		UMaterialInterface Material; // 0x8(0x8)
	};


	// Struct Engine.ParameterGroupData
	// Size: 0x18 (0x18 - 0x0)
	struct FParameterGroupData	
	{
	public:
		FString GroupName; // 0x0(0x10)
		int32_t GroupSortPriority; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.MaterialFunctionInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FMaterialFunctionInfo	
	{
	public:
		FGuid StateId; // 0x0(0x10)
		UMaterialFunctionInterface Function; // 0x10(0x8)
	};


	// Struct Engine.MaterialParameterCollectionInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FMaterialParameterCollectionInfo	
	{
	public:
		FGuid StateId; // 0x0(0x10)
		UMaterialParameterCollection ParameterCollection; // 0x10(0x8)
	};


	// Struct Engine.MaterialCachedParameterEditorInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FMaterialCachedParameterEditorInfo	
	{
	public:
		FString Description; // 0x0(0x10)
		FName Group; // 0x10(0x4)
		int32_t SortPriority; // 0x14(0x4)
		int32_t AssetIndex; // 0x18(0x4)
		FGuid ExpressionGUID; // 0x1C(0x10)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.MaterialCachedParameterEntry
	// Size: 0x50 (0x50 - 0x0)
	struct FMaterialCachedParameterEntry	
	{
	public:
		TSet ParameterInfoSet; // 0x0(0x50)
	};


	// Struct Engine.MaterialCachedParameterEditorEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FMaterialCachedParameterEditorEntry	
	{
	public:
		TArray EditorInfo; // 0x0(0x10)
	};


	// Struct Engine.MaterialCachedExpressionEditorOnlyData
	// Size: 0x2A0 (0x2A0 - 0x0)
	struct FMaterialCachedExpressionEditorOnlyData	
	{
	public:
		FMaterialCachedParameterEntry EditorOnlyEntries; // 0x0(0x50)
		FMaterialCachedParameterEditorEntry EditorEntries; // 0x50(0xA0)
		TArray StaticSwitchValues; // 0xF0(0x10)
		TArray StaticComponentMaskValues; // 0x100(0x10)
		TArray ScalarMinMaxValues; // 0x110(0x10)
		TArray ScalarCurveValues; // 0x120(0x10)
		TArray ScalarCurveAtlasValues; // 0x130(0x10)
		TArray VectorChannelNameValues; // 0x140(0x10)
		TArray VectorUsedAsChannelMaskValues; // 0x150(0x10)
		TArray TextureChannelNameValues; // 0x160(0x10)
		FMaterialLayersFunctionsEditorOnlyData MaterialLayers; // 0x170(0x70)
		TArray AssetPaths; // 0x1E0(0x10)
		TArray LandscapeLayerNames; // 0x1F0(0x10)
		TSet ExpressionIncludeFilePaths; // 0x200(0x50)
		TSet UserSceneTextureInputs; // 0x250(0x50)
	};


	// Struct Engine.MaterialCachedExpressionData
	// Size: 0x470 (0x470 - 0x0)
	struct FMaterialCachedExpressionData	
	{
	public:
		FMaterialCachedParameterEntry RuntimeEntries; // 0x0(0x2D0)
		TArray ScalarPrimitiveDataIndexValues; // 0x2D0(0x10)
		TArray VectorPrimitiveDataIndexValues; // 0x2E0(0x10)
		TArray ScalarValues; // 0x2F0(0x10)
		TArray StaticSwitchValues; // 0x300(0x10)
		TArray DynamicSwitchValues; // 0x310(0x10)
		TArray VectorValues; // 0x320(0x10)
		TArray DoubleVectorValues; // 0x330(0x10)
		TArray TextureValues; // 0x340(0x10)
		TArray TextureCollectionValues; // 0x350(0x10)
		TArray FontValues; // 0x360(0x10)
		TArray FontPageValues; // 0x370(0x10)
		TArray RuntimeVirtualTextureValues; // 0x380(0x10)
		TArray SparseVolumeTextureValues; // 0x390(0x10)
		TArray ReferencedTextures; // 0x3A0(0x10)
		TArray ReferencedTextureCollections; // 0x3B0(0x10)
		TArray FunctionInfos; // 0x3C0(0x10)
		uint32_t FunctionInfosStateCRC; // 0x3D0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x3D4(0x4) UNKNOWN PROPERTY
		TArray ParameterCollectionInfos; // 0x3D8(0x10)
		TArray GrassTypes; // 0x3E8(0x10)
		FMaterialLayersFunctionsRuntimeData MaterialLayers; // 0x3F8(0x48)
		TArray DynamicParameterNames; // 0x440(0x10)
		TArray QualityLevelsUsed; // 0x450(0x10)
		bool bHasMaterialLayers : 1; // 0x460:0(0x1)
		bool bHasRuntimeVirtualTextureOutput : 1; // 0x460:1(0x1)
		bool bHasSceneColor : 1; // 0x460:2(0x1)
		bool bHasPerInstanceCustomData : 1; // 0x460:3(0x1)
		bool bHasPerInstanceRandom : 1; // 0x460:4(0x1)
		bool bHasVertexInterpolator : 1; // 0x460:5(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x461(0x3) UNKNOWN PROPERTY
		uint32_t PropertyConnectedBitmask; // 0x464(0x4)
		uint64_t PropertyConnectedMask; // 0x468(0x8)
	};


	// Struct Engine.ScalarParameterAtlasInstanceData
	// Size: 0x48 (0x48 - 0x0)
	struct FScalarParameterAtlasInstanceData	
	{
	public:
		bool bIsUsedAsAtlasPosition; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr Curve; // 0x8(0x20)
		TWeakObjectPtr Atlas; // 0x28(0x20)
	};


	// Struct Engine.ScalarParameterValue
	// Size: 0x20 (0x20 - 0x0)
	struct FScalarParameterValue	
	{
	public:
		FMaterialParameterInfo ParameterInfo; // 0x0(0xC)
		float ParameterValue; // 0xC(0x4)
		FGuid ExpressionGUID; // 0x10(0x10)
	};


	// Struct Engine.VectorParameterValue
	// Size: 0x2C (0x2C - 0x0)
	struct FVectorParameterValue	
	{
	public:
		FMaterialParameterInfo ParameterInfo; // 0x0(0xC)
		FLinearColor ParameterValue; // 0xC(0x10)
		FGuid ExpressionGUID; // 0x1C(0x10)
	};


	// Struct Engine.DoubleVectorParameterValue
	// Size: 0x40 (0x40 - 0x0)
	struct FDoubleVectorParameterValue	
	{
	public:
		FMaterialParameterInfo ParameterInfo; // 0x0(0xC)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector4d ParameterValue; // 0x10(0x20)
		FGuid ExpressionGUID; // 0x30(0x10)
	};


	// Struct Engine.TextureParameterValue
	// Size: 0x28 (0x28 - 0x0)
	struct FTextureParameterValue	
	{
	public:
		FMaterialParameterInfo ParameterInfo; // 0x0(0xC)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UTexture ParameterValue; // 0x10(0x8)
		FGuid ExpressionGUID; // 0x18(0x10)
	};


	// Struct Engine.TextureCollectionParameterValue
	// Size: 0x28 (0x28 - 0x0)
	struct FTextureCollectionParameterValue	
	{
	public:
		FMaterialParameterInfo ParameterInfo; // 0x0(0xC)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UTextureCollection ParameterValue; // 0x10(0x8)
		FGuid ExpressionGUID; // 0x18(0x10)
	};


	// Struct Engine.RuntimeVirtualTextureParameterValue
	// Size: 0x28 (0x28 - 0x0)
	struct FRuntimeVirtualTextureParameterValue	
	{
	public:
		FMaterialParameterInfo ParameterInfo; // 0x0(0xC)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		URuntimeVirtualTexture ParameterValue; // 0x10(0x8)
		FGuid ExpressionGUID; // 0x18(0x10)
	};


	// Struct Engine.SparseVolumeTextureParameterValue
	// Size: 0x28 (0x28 - 0x0)
	struct FSparseVolumeTextureParameterValue	
	{
	public:
		FMaterialParameterInfo ParameterInfo; // 0x0(0xC)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		USparseVolumeTexture ParameterValue; // 0x10(0x8)
		FGuid ExpressionGUID; // 0x18(0x10)
	};


	// Struct Engine.FontParameterValue
	// Size: 0x30 (0x30 - 0x0)
	struct FFontParameterValue	
	{
	public:
		FMaterialParameterInfo ParameterInfo; // 0x0(0xC)
		unsigned char UnknownData02_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UFont FontValue; // 0x10(0x8)
		int32_t FontPage; // 0x18(0x4)
		FGuid ExpressionGUID; // 0x1C(0x10)
		unsigned char UnknownData03_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.UserSceneTextureOverride
	// Size: 0x8 (0x8 - 0x0)
	struct FUserSceneTextureOverride	
	{
	public:
		FName Key; // 0x0(0x4)
		FName Value; // 0x4(0x4)
	};


	// Struct Engine.MaterialInstanceCachedData
	// Size: 0x10 (0x10 - 0x0)
	struct FMaterialInstanceCachedData	
	{
	public:
		TArray ParentLayerIndexRemap; // 0x0(0x10)
	};


	// Struct Engine.MaterialOverrideNanite
	// Size: 0x30 (0x30 - 0x0)
	struct FMaterialOverrideNanite	
	{
	public:
		bool bEnableOverride; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UMaterialInterface OverrideMaterial; // 0x8(0x8)
		TWeakObjectPtr OverrideMaterialRef; // 0x10(0x20)
	};


	// Struct Engine.CollectionParameterBase
	// Size: 0x14 (0x14 - 0x0)
	struct FCollectionParameterBase	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		FGuid ID; // 0x4(0x10)
	};


	// Struct Engine.CollectionScalarParameter
	// Inherited from FCollectionParameterBase
	// Size: 0x4 (0x18 - 0x14)
	struct FCollectionScalarParameter : public FCollectionParameterBase	
	{
	public:
		float DefaultValue; // 0x14(0x4)
	};


	// Struct Engine.CollectionVectorParameter
	// Inherited from FCollectionParameterBase
	// Size: 0x10 (0x24 - 0x14)
	struct FCollectionVectorParameter : public FCollectionParameterBase	
	{
	public:
		FLinearColor DefaultValue; // 0x14(0x10)
	};


	// Struct Engine.PacketSimulationSettings
	// Size: 0x34 (0x34 - 0x0)
	struct FPacketSimulationSettings	
	{
	public:
		int32_t PktLoss; // 0x0(0x4)
		int32_t PktLossMaxSize; // 0x4(0x4)
		int32_t PktLossMinSize; // 0x8(0x4)
		int32_t PktOrder; // 0xC(0x4)
		int32_t PktDup; // 0x10(0x4)
		int32_t PktLag; // 0x14(0x4)
		int32_t PktLagVariance; // 0x18(0x4)
		int32_t PktLagMin; // 0x1C(0x4)
		int32_t PktLagMax; // 0x20(0x4)
		int32_t PktIncomingLagMin; // 0x24(0x4)
		int32_t PktIncomingLagMax; // 0x28(0x4)
		int32_t PktIncomingLoss; // 0x2C(0x4)
		int32_t PktJitter; // 0x30(0x4)
	};


	// Struct Engine.NetDriverReplicationSystemConfig
	// Size: 0x1C (0x1C - 0x0)
	struct FNetDriverReplicationSystemConfig	
	{
	public:
		uint32_t MaxReplicatedObjectCount; // 0x0(0x4)
		uint32_t InitialNetObjectListCount; // 0x4(0x4)
		uint32_t NetObjectListGrowCount; // 0x8(0x4)
		uint32_t PreAllocatedMemoryBuffersObjectCount; // 0xC(0x4)
		uint32_t MaxReplicationWriterObjectCount; // 0x10(0x4)
		uint32_t MaxDeltaCompressedObjectCount; // 0x14(0x4)
		uint32_t MaxNetObjectGroupCount; // 0x18(0x4)
	};


	// Struct Engine.ChannelDefinition
	// Size: 0x18 (0x18 - 0x0)
	struct FChannelDefinition	
	{
	public:
		FName ChannelName; // 0x0(0x4)
		FName ClassName; // 0x4(0x4)
		UClass ChannelClass; // 0x8(0x8)
		int32_t StaticChannelIndex; // 0x10(0x4)
		bool bTickOnCreate : 1; // 0x14:0(0x1)
		bool bServerOpen : 1; // 0x14:1(0x1)
		bool bClientOpen : 1; // 0x14:2(0x1)
		bool bInitialServer : 1; // 0x14:3(0x1)
		bool bInitialClient : 1; // 0x14:4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.NetworkEmulationProfileDescription
	// Size: 0x20 (0x20 - 0x0)
	struct FNetworkEmulationProfileDescription	
	{
	public:
		FString ProfileName; // 0x0(0x10)
		FString ToolTip; // 0x10(0x10)
	};


	// Struct Engine.BandwidthTestItem
	// Size: 0x10 (0x10 - 0x0)
	struct FBandwidthTestItem	
	{
	public:
		TArray Kilobyte; // 0x0(0x10)
	};


	// Struct Engine.BandwidthTestGenerator
	// Size: 0x20 (0x20 - 0x0)
	struct FBandwidthTestGenerator	
	{
	public:
		TArray ReplicatedBuffers; // 0x0(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.NetworkMetricConfig
	// Size: 0x30 (0x30 - 0x0)
	struct FNetworkMetricConfig	
	{
	public:
		FName MetricName; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr Class; // 0x8(0x20)
		ENetworkMetricEnableMode EnableMode; // 0x28(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.RPCDoSState
	// Size: 0x48 (0x48 - 0x0)
	struct FRPCDoSState	
	{
	public:
		unsigned char UnknownData03_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		bool bLogEscalate; // 0x8(0x1)
		bool bSendEscalateAnalytics; // 0x9(0x1)
		bool bKickPlayer; // 0xA(0x1)
		bool bTrackRecentRPCs; // 0xB(0x1)
		int16_t EscalateQuotaRPCsPerFrame; // 0xC(0x2)
		int16_t EscalateTimeQuotaMSPerFrame; // 0xE(0x2)
		int16_t EscalateQuotaRPCsPerPeriod; // 0x10(0x2)
		int16_t EscalateTimeQuotaMSPerPeriod; // 0x12(0x2)
		int8_t EscalateQuotaTimePeriod; // 0x14(0x1)
		int8_t EscalationCountTolerance; // 0x15(0x1)
		int16_t EscalationTimeToleranceMS; // 0x16(0x2)
		int16_t RPCRepeatLimitPerPeriod; // 0x18(0x2)
		int16_t RPCRepeatLimitMSPerPeriod; // 0x1A(0x2)
		int8_t RPCRepeatLimitTimePeriod; // 0x1C(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x1D(0x1) UNKNOWN PROPERTY
		int16_t CooloffTime; // 0x1E(0x2)
		int16_t AutoEscalateTime; // 0x20(0x2)
		unsigned char UnknownData05_7[0x26]; // 0x22(0x26) UNKNOWN PROPERTY
	};


	// Struct Engine.RPCDoSStateConfig
	// Inherited from FRPCDoSState
	// Size: 0x30 (0x78 - 0x48)
	struct FRPCDoSStateConfig : public FRPCDoSState	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x48(0x30) UNKNOWN PROPERTY
	};


	// Struct Engine.RPCAnalyticsThreshold
	// Size: 0x10 (0x10 - 0x0)
	struct FRPCAnalyticsThreshold	
	{
	public:
		FName RPC; // 0x0(0x4)
		int32_t CountPerSec; // 0x4(0x4)
		double TimePerSec; // 0x8(0x8)
	};


	// Struct Engine.ParticleSystemWorldManagerTickFunction
	// Inherited from FTickFunction
	// Size: 0x8 (0x30 - 0x28)
	struct FParticleSystemWorldManagerTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.PSCPoolElem
	// Size: 0x10 (0x10 - 0x0)
	struct FPSCPoolElem	
	{
	public:
		UParticleSystemComponent PSC; // 0x0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.PSCPool
	// Size: 0x10 (0x10 - 0x0)
	struct FPSCPool	
	{
	public:
		TArray FreeElements; // 0x0(0x10)
	};


	// Struct Engine.WorldPSCPool
	// Size: 0x58 (0x58 - 0x0)
	struct FWorldPSCPool	
	{
	public:
		TMap WorldParticleSystemPools; // 0x0(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.ClusterUnionBoneData
	// Size: 0x8 (0x8 - 0x0)
	struct FClusterUnionBoneData	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.ClusteredComponentData
	// Size: 0x28 (0x28 - 0x0)
	struct FClusteredComponentData	
	{
	public:
		unsigned char UnknownData02_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr ReplicatedProxyComponent; // 0x10(0x8)
		TWeakObjectPtr Owner; // 0x18(0x8)
		bool bWasReplicating; // 0x20(0x1)
		bool bPendingDeletion; // 0x21(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct Engine.ClusteredActorData
	// Size: 0x58 (0x58 - 0x0)
	struct FClusteredActorData	
	{
	public:
		unsigned char UnknownData02_7[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
		bool bWasReplicatingMovement; // 0x50(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.ClusterUnionReplicatedData
	// Size: 0x2 (0x2 - 0x0)
	struct FClusterUnionReplicatedData	
	{
	public:
		char ObjectState; // 0x0(0x1)
		bool bIsAnchored; // 0x1(0x1)
	};


	// Struct Engine.ClusterUnionPendingAddData
	// Size: 0x50 (0x50 - 0x0)
	struct FClusterUnionPendingAddData	
	{
	public:
		TSet BonesData; // 0x0(0x50)
	};


	// Struct Engine.ClusterUnionInitializationData
	// Size: 0x18 (0x18 - 0x0)
	struct FClusterUnionInitializationData	
	{
	public:
		UClusterUnionComponent ClusterUnionComponent; // 0x0(0x8)
		TArray ProcessedComponents; // 0x8(0x10)
	};


	// Struct Engine.ConstraintDrive
	// Size: 0x10 (0x10 - 0x0)
	struct FConstraintDrive	
	{
	public:
		float Stiffness; // 0x0(0x4)
		float Damping; // 0x4(0x4)
		float MaxForce; // 0x8(0x4)
		bool bEnablePositionDrive : 1; // 0xC:0(0x1)
		bool bEnableVelocityDrive : 1; // 0xC:1(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.LinearDriveConstraint
	// Size: 0x68 (0x68 - 0x0)
	struct FLinearDriveConstraint	
	{
	public:
		FVector PositionTarget; // 0x0(0x18)
		FVector VelocityTarget; // 0x18(0x18)
		FConstraintDrive XDrive; // 0x30(0x10)
		FConstraintDrive YDrive; // 0x40(0x10)
		FConstraintDrive ZDrive; // 0x50(0x10)
		bool bAccelerationMode; // 0x60(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.AngularDriveConstraint
	// Size: 0x68 (0x68 - 0x0)
	struct FAngularDriveConstraint	
	{
	public:
		FConstraintDrive TwistDrive; // 0x0(0x10)
		FConstraintDrive SwingDrive; // 0x10(0x10)
		FConstraintDrive SlerpDrive; // 0x20(0x10)
		FRotator OrientationTarget; // 0x30(0x18)
		FVector AngularVelocityTarget; // 0x48(0x18)
		TEnumAsByte AngularDriveMode; // 0x60(0x1)
		bool bAccelerationMode; // 0x61(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x62(0x6) UNKNOWN PROPERTY
	};


	// Struct Engine.ConstraintProfileProperties
	// Size: 0x160 (0x160 - 0x0)
	struct FConstraintProfileProperties	
	{
	public:
		float ProjectionLinearTolerance; // 0x0(0x4)
		float ProjectionAngularTolerance; // 0x4(0x4)
		float ProjectionLinearAlpha; // 0x8(0x4)
		float ProjectionAngularAlpha; // 0xC(0x4)
		float ShockPropagationAlpha; // 0x10(0x4)
		float LinearBreakThreshold; // 0x14(0x4)
		float LinearPlasticityThreshold; // 0x18(0x4)
		float AngularBreakThreshold; // 0x1C(0x4)
		float AngularPlasticityThreshold; // 0x20(0x4)
		float ContactTransferScale; // 0x24(0x4)
		FLinearConstraint LinearLimit; // 0x28(0x1C)
		FConeConstraint ConeLimit; // 0x44(0x20)
		FTwistConstraint TwistLimit; // 0x64(0x1C)
		bool bDisableCollision : 1; // 0x80:0(0x1)
		bool bParentDominates : 1; // 0x80:1(0x1)
		bool bEnableShockPropagation : 1; // 0x80:2(0x1)
		bool bEnableProjection : 1; // 0x80:3(0x1)
		bool bEnableMassConditioning : 1; // 0x80:4(0x1)
		bool bAngularBreakable : 1; // 0x80:5(0x1)
		bool bAngularPlasticity : 1; // 0x80:6(0x1)
		bool bLinearBreakable : 1; // 0x80:7(0x1)
		bool bLinearPlasticity : 1; // 0x81:0(0x1)
		unsigned char UnknownData02_5[0x6]; // 0x82(0x6) UNKNOWN PROPERTY
		FLinearDriveConstraint LinearDrive; // 0x88(0x68)
		FAngularDriveConstraint AngularDrive; // 0xF0(0x68)
		TEnumAsByte LinearPlasticityType; // 0x158(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x159(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.ConstraintBaseParams
	// Size: 0x14 (0x14 - 0x0)
	struct FConstraintBaseParams	
	{
	public:
		float Stiffness; // 0x0(0x4)
		float Damping; // 0x4(0x4)
		float Restitution; // 0x8(0x4)
		float ContactDistance; // 0xC(0x4)
		bool bSoftConstraint : 1; // 0x10:0(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.TwistConstraint
	// Inherited from FConstraintBaseParams
	// Size: 0x8 (0x1C - 0x14)
	struct FTwistConstraint : public FConstraintBaseParams	
	{
	public:
		float TwistLimitDegrees; // 0x14(0x4)
		TEnumAsByte TwistMotion; // 0x18(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.ConeConstraint
	// Inherited from FConstraintBaseParams
	// Size: 0xC (0x20 - 0x14)
	struct FConeConstraint : public FConstraintBaseParams	
	{
	public:
		float Swing1LimitDegrees; // 0x14(0x4)
		float Swing2LimitDegrees; // 0x18(0x4)
		TEnumAsByte Swing1Motion; // 0x1C(0x1)
		TEnumAsByte Swing2Motion; // 0x1D(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x1E(0x2) UNKNOWN PROPERTY
	};


	// Struct Engine.LinearConstraint
	// Inherited from FConstraintBaseParams
	// Size: 0x8 (0x1C - 0x14)
	struct FLinearConstraint : public FConstraintBaseParams	
	{
	public:
		float Limit; // 0x14(0x4)
		TEnumAsByte XMotion; // 0x18(0x1)
		TEnumAsByte YMotion; // 0x19(0x1)
		TEnumAsByte ZMotion; // 0x1A(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x1B(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.ConstraintInstanceBase
	// Size: 0x38 (0x38 - 0x0)
	struct FConstraintInstanceBase	
	{
	public:
		unsigned char UnknownData01_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct Engine.ConstraintInstance
	// Inherited from FConstraintInstanceBase
	// Size: 0x230 (0x268 - 0x38)
	struct FConstraintInstance : public FConstraintInstanceBase	
	{
	public:
		FName JointName; // 0x38(0x4)
		FName ConstraintBone1; // 0x3C(0x4)
		FName ConstraintBone2; // 0x40(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FVector Pos1; // 0x48(0x18)
		FVector PriAxis1; // 0x60(0x18)
		FVector SecAxis1; // 0x78(0x18)
		FVector Pos2; // 0x90(0x18)
		FVector PriAxis2; // 0xA8(0x18)
		FVector SecAxis2; // 0xC0(0x18)
		FRotator AngularRotationOffset; // 0xD8(0x18)
		bool bScaleLinearLimits : 1; // 0xF0:0(0x1)
		unsigned char UnknownData04_5[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
		FConstraintProfileProperties ProfileInstance; // 0xF8(0x160)
		unsigned char UnknownData05_7[0x10]; // 0x258(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.ConstraintInstanceAccessor
	// Size: 0xC (0xC - 0x0)
	struct FConstraintInstanceAccessor	
	{
	public:
		TWeakObjectPtr Owner; // 0x0(0x8)
		uint32_t Index; // 0x8(0x4)
	};


	// Struct Engine.NetworkPhysicsRewindDataProxy
	// Size: 0x10 (0x10 - 0x0)
	struct FNetworkPhysicsRewindDataProxy	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		UNetworkPhysicsComponent Owner; // 0x8(0x8)
	};


	// Struct Engine.NetworkPhysicsRewindDataInputProxy
	// Inherited from FNetworkPhysicsRewindDataProxy
	// Size: 0x0 (0x10 - 0x10)
	struct FNetworkPhysicsRewindDataInputProxy : public FNetworkPhysicsRewindDataProxy	
	{
	public:
	};


	// Struct Engine.NetworkPhysicsRewindDataStateProxy
	// Inherited from FNetworkPhysicsRewindDataProxy
	// Size: 0x0 (0x10 - 0x10)
	struct FNetworkPhysicsRewindDataStateProxy : public FNetworkPhysicsRewindDataProxy	
	{
	public:
	};


	// Struct Engine.NetworkPhysicsRewindDataImportantInputProxy
	// Inherited from FNetworkPhysicsRewindDataProxy
	// Size: 0x0 (0x10 - 0x10)
	struct FNetworkPhysicsRewindDataImportantInputProxy : public FNetworkPhysicsRewindDataProxy	
	{
	public:
	};


	// Struct Engine.NetworkPhysicsRewindDataImportantStateProxy
	// Inherited from FNetworkPhysicsRewindDataProxy
	// Size: 0x0 (0x10 - 0x10)
	struct FNetworkPhysicsRewindDataImportantStateProxy : public FNetworkPhysicsRewindDataProxy	
	{
	public:
	};


	// Struct Engine.NetworkPhysicsData
	// Size: 0x18 (0x18 - 0x0)
	struct FNetworkPhysicsData	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		int32_t ServerFrame; // 0x8(0x4)
		int32_t LocalFrame; // 0xC(0x4)
		int32_t InputFrame; // 0x10(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.NetworkPhysicsDatas
	// Inherited from FNetworkPhysicsData
	// Size: 0x0 (0x18 - 0x18)
	struct FNetworkPhysicsDatas : public FNetworkPhysicsData	
	{
	public:
	};


	// Struct Engine.PhysicsAssetSolverSettings
	// Size: 0x1C (0x1C - 0x0)
	struct FPhysicsAssetSolverSettings	
	{
	public:
		int32_t PositionIterations; // 0x0(0x4)
		int32_t VelocityIterations; // 0x4(0x4)
		int32_t ProjectionIterations; // 0x8(0x4)
		float CullDistance; // 0xC(0x4)
		float MaxDepenetrationVelocity; // 0x10(0x4)
		float FixedTimeStep; // 0x14(0x4)
		bool bUseLinearJointSolver; // 0x18(0x1)
		bool bUseManifolds; // 0x19(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
	};


	// Struct Engine.SolverIterations
	// Size: 0x18 (0x18 - 0x0)
	struct FSolverIterations	
	{
	public:
		int32_t SolverIterations; // 0x0(0x4)
		int32_t JointIterations; // 0x4(0x4)
		int32_t CollisionIterations; // 0x8(0x4)
		int32_t SolverPushOutIterations; // 0xC(0x4)
		int32_t JointPushOutIterations; // 0x10(0x4)
		int32_t CollisionPushOutIterations; // 0x14(0x4)
	};


	// Struct Engine.PhysicsConstraintProfileHandle
	// Size: 0x168 (0x168 - 0x0)
	struct FPhysicsConstraintProfileHandle	
	{
	public:
		FConstraintProfileProperties ProfileProperties; // 0x0(0x160)
		FName ProfileName; // 0x160(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.PhysicalSurfaceName
	// Size: 0x8 (0x8 - 0x0)
	struct FPhysicalSurfaceName	
	{
	public:
		TEnumAsByte Type; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName Name; // 0x4(0x4)
	};


	// Struct Engine.ChaosPhysicsSettings
	// Size: 0x3 (0x3 - 0x0)
	struct FChaosPhysicsSettings	
	{
	public:
		EChaosThreadingMode DefaultThreadingModel; // 0x0(0x1)
		EChaosSolverTickMode DedicatedThreadTickMode; // 0x1(0x1)
		EChaosBufferMode DedicatedThreadBufferMode; // 0x2(0x1)
	};


	// Struct Engine.PhysicsPredictionSettings
	// Size: 0xC (0xC - 0x0)
	struct FPhysicsPredictionSettings	
	{
	public:
		bool bEnablePhysicsPrediction; // 0x0(0x1)
		bool bEnablePhysicsResimulation; // 0x1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float ResimulationErrorThreshold; // 0x4(0x4)
		float MaxSupportedLatencyPrediction; // 0x8(0x4)
	};


	// Struct Engine.PlayerMuteList
	// Size: 0x58 (0x58 - 0x0)
	struct FPlayerMuteList	
	{
	public:
		unsigned char UnknownData02_7[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
		bool bHasVoiceHandshakeCompleted; // 0x50(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		int32_t VoiceChannelIdx; // 0x54(0x4)
	};


	// Struct Engine.PropertyAccessIndirection
	// Size: 0x40 (0x40 - 0x0)
	struct FPropertyAccessIndirection	
	{
	public:
		unsigned char UnknownData02_7[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
		UFunction Function; // 0x20(0x8)
		int32_t ReturnBufferSize; // 0x28(0x4)
		int32_t ReturnBufferAlignment; // 0x2C(0x4)
		int32_t ArrayIndex; // 0x30(0x4)
		uint32_t Offset; // 0x34(0x4)
		EPropertyAccessObjectType ObjectType; // 0x38(0x1)
		EPropertyAccessIndirectionType Type; // 0x39(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
	};


	// Struct Engine.PropertyAccessIndirectionChain
	// Size: 0x28 (0x28 - 0x0)
	struct FPropertyAccessIndirectionChain	
	{
	public:
		unsigned char UnknownData01_7[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
		int32_t IndirectionStartIndex; // 0x20(0x4)
		int32_t IndirectionEndIndex; // 0x24(0x4)
	};


	// Struct Engine.NeuralProfileStruct
	// Size: 0x48 (0x48 - 0x0)
	struct FNeuralProfileStruct	
	{
	public:
		ENeuralProfileFormat InputFormat; // 0x0(0x1)
		ENeuralProfileFormat OutputFormat; // 0x1(0x1)
		ENeuralProfileRuntimeType RuntimeType; // 0x2(0x1)
		unsigned char UnknownData03_6[0x5]; // 0x3(0x5) UNKNOWN PROPERTY
		UObject NNEModelData; // 0x8(0x8)
		FIntVector4 InputDimension; // 0x10(0x10)
		FIntVector4 OutputDimension; // 0x20(0x10)
		int32_t BatchSizeOverride; // 0x30(0x4)
		ENeuralModelTileType TileSize; // 0x34(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		FIntPoint TileOverlap; // 0x38(0x8)
		ETileOverlapResolveType TileOverlapResolveType; // 0x40(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.SpecularProfileStruct
	// Size: 0x420 (0x420 - 0x0)
	struct FSpecularProfileStruct	
	{
	public:
		ESpecularProfileFormat Format; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FRuntimeCurveLinearColor ViewColor; // 0x8(0x208)
		FRuntimeCurveLinearColor LightColor; // 0x210(0x208)
		UTexture2D Texture; // 0x418(0x8)
	};


	// Struct Engine.SubsurfaceProfileStruct
	// Size: 0x9C (0x9C - 0x0)
	struct FSubsurfaceProfileStruct	
	{
	public:
		FLinearColor SurfaceAlbedo; // 0x0(0x10)
		FLinearColor MeanFreePathColor; // 0x10(0x10)
		float MeanFreePathDistance; // 0x20(0x4)
		float WorldUnitScale; // 0x24(0x4)
		bool bEnableBurley; // 0x28(0x1)
		bool bEnableMeanFreePath; // 0x29(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		FLinearColor Tint; // 0x2C(0x10)
		float ScatterRadius; // 0x3C(0x4)
		FLinearColor SubsurfaceColor; // 0x40(0x10)
		FLinearColor FalloffColor; // 0x50(0x10)
		FLinearColor BoundaryColorBleed; // 0x60(0x10)
		float ExtinctionScale; // 0x70(0x4)
		float NormalScale; // 0x74(0x4)
		float ScatteringDistribution; // 0x78(0x4)
		float IOR; // 0x7C(0x4)
		float Roughness0; // 0x80(0x4)
		float Roughness1; // 0x84(0x4)
		float LobeMix; // 0x88(0x4)
		FLinearColor TransmissionTintColor; // 0x8C(0x10)
	};


	// Struct Engine.RepMovementNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FRepMovementNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct Engine.SingleAnimationPlayData
	// Size: 0x18 (0x18 - 0x0)
	struct FSingleAnimationPlayData	
	{
	public:
		UAnimationAsset AnimToPlay; // 0x0(0x8)
		bool bSavedLooping : 1; // 0x8:0(0x1)
		bool bSavedPlaying : 1; // 0x8:1(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float SavedPosition; // 0xC(0x4)
		float SavedPlayRate; // 0x10(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.BoneMirrorInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FBoneMirrorInfo	
	{
	public:
		int32_t SourceIndex; // 0x0(0x4)
		TEnumAsByte BoneFlipAxis; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.BoneMirrorExport
	// Size: 0xC (0xC - 0x0)
	struct FBoneMirrorExport	
	{
	public:
		FName BoneName; // 0x0(0x4)
		FName SourceBoneName; // 0x4(0x4)
		TEnumAsByte BoneFlipAxis; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.SkeletalMeshClothBuildParams
	// Size: 0x50 (0x50 - 0x0)
	struct FSkeletalMeshClothBuildParams	
	{
	public:
		TWeakObjectPtr TargetAsset; // 0x0(0x8)
		int32_t TargetLod; // 0x8(0x4)
		bool bRemapParameters; // 0xC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FString AssetName; // 0x10(0x10)
		int32_t LODIndex; // 0x20(0x4)
		int32_t SourceSection; // 0x24(0x4)
		bool bRemoveFromMesh; // 0x28(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr PhysicsAsset; // 0x30(0x20)
	};


	// Struct Engine.ClothPhysicsProperties_Legacy
	// Size: 0x50 (0x50 - 0x0)
	struct FClothPhysicsProperties_Legacy	
	{
	public:
		float VerticalResistance; // 0x0(0x4)
		float HorizontalResistance; // 0x4(0x4)
		float BendResistance; // 0x8(0x4)
		float ShearResistance; // 0xC(0x4)
		float Friction; // 0x10(0x4)
		float Damping; // 0x14(0x4)
		float TetherStiffness; // 0x18(0x4)
		float TetherLimit; // 0x1C(0x4)
		float Drag; // 0x20(0x4)
		float StiffnessFrequency; // 0x24(0x4)
		float GravityScale; // 0x28(0x4)
		float MassScale; // 0x2C(0x4)
		float InertiaBlend; // 0x30(0x4)
		float SelfCollisionThickness; // 0x34(0x4)
		float SelfCollisionSquashScale; // 0x38(0x4)
		float SelfCollisionStiffness; // 0x3C(0x4)
		float SolverFrequency; // 0x40(0x4)
		float FiberCompression; // 0x44(0x4)
		float FiberExpansion; // 0x48(0x4)
		float FiberResistance; // 0x4C(0x4)
	};


	// Struct Engine.ClothingAssetData_Legacy
	// Size: 0x70 (0x70 - 0x0)
	struct FClothingAssetData_Legacy	
	{
	public:
		FName AssetName; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString ApexFileName; // 0x8(0x10)
		bool bClothPropertiesChanged; // 0x18(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1C(0x50)
		unsigned char UnknownData05_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.BoneFilter
	// Size: 0x8 (0x8 - 0x0)
	struct FBoneFilter	
	{
	public:
		bool bExcludeSelf; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName BoneName; // 0x4(0x4)
	};


	// Struct Engine.SkeletalMeshLODGroupSettings
	// Size: 0x90 (0x90 - 0x0)
	struct FSkeletalMeshLODGroupSettings	
	{
	public:
		FPerPlatformFloat ScreenSize; // 0x0(0x4)
		float LODHysteresis; // 0x4(0x4)
		EBoneFilterActionOption BoneFilterActionOption; // 0x8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		TArray BoneList; // 0x10(0x10)
		TArray BonesToPrioritize; // 0x20(0x10)
		TArray SectionsToPrioritize; // 0x30(0x10)
		float WeightOfPrioritization; // 0x40(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		UAnimSequence BakePose; // 0x48(0x8)
		FSkeletalMeshOptimizationSettings ReductionSettings; // 0x50(0x3C)
		bool bAllowMeshDeformer; // 0x8C(0x1)
		unsigned char UnknownData05_7[0x3]; // 0x8D(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.SkelMeshMergeSectionMapping
	// Size: 0x10 (0x10 - 0x0)
	struct FSkelMeshMergeSectionMapping	
	{
	public:
		TArray SectionIDs; // 0x0(0x10)
	};


	// Struct Engine.SkelMeshMergeMeshUVTransforms
	// Size: 0x10 (0x10 - 0x0)
	struct FSkelMeshMergeMeshUVTransforms	
	{
	public:
		TArray UVTransforms; // 0x0(0x10)
	};


	// Struct Engine.SkelMeshMergeUVTransformMapping
	// Size: 0x10 (0x10 - 0x0)
	struct FSkelMeshMergeUVTransformMapping	
	{
	public:
		TArray UVTransformsPerMesh; // 0x0(0x10)
	};


	// Struct Engine.SkeletalMeshSamplingRegionBuiltData
	// Size: 0x78 (0x78 - 0x0)
	struct FSkeletalMeshSamplingRegionBuiltData	
	{
	public:
		unsigned char UnknownData01_2[0x78]; // 0x0(0x78) UNKNOWN PROPERTY
	};


	// Struct Engine.SkeletalMeshSamplingLODBuiltData
	// Size: 0x48 (0x48 - 0x0)
	struct FSkeletalMeshSamplingLODBuiltData	
	{
	public:
		unsigned char UnknownData01_2[0x48]; // 0x0(0x48) UNKNOWN PROPERTY
	};


	// Struct Engine.SkeletalMeshSamplingBuiltData
	// Size: 0x20 (0x20 - 0x0)
	struct FSkeletalMeshSamplingBuiltData	
	{
	public:
		TArray WholeMeshBuiltData; // 0x0(0x10)
		TArray RegionBuiltData; // 0x10(0x10)
	};


	// Struct Engine.SkeletalMeshSamplingRegionBoneFilter
	// Size: 0x8 (0x8 - 0x0)
	struct FSkeletalMeshSamplingRegionBoneFilter	
	{
	public:
		FName BoneName; // 0x0(0x4)
		bool bIncludeOrExclude : 1; // 0x4:0(0x1)
		bool bApplyToChildren : 1; // 0x4:1(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.SkeletalMeshSamplingRegionMaterialFilter
	// Size: 0x4 (0x4 - 0x0)
	struct FSkeletalMeshSamplingRegionMaterialFilter	
	{
	public:
		FName MaterialName; // 0x0(0x4)
	};


	// Struct Engine.SkeletalMeshSamplingRegion
	// Size: 0x30 (0x30 - 0x0)
	struct FSkeletalMeshSamplingRegion	
	{
	public:
		FName Name; // 0x0(0x4)
		int32_t LODIndex; // 0x4(0x4)
		bool bSupportUniformlyDistributedSampling : 1; // 0x8:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		TArray MaterialFilters; // 0x10(0x10)
		TArray BoneFilters; // 0x20(0x10)
	};


	// Struct Engine.SkeletalMeshSamplingInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FSkeletalMeshSamplingInfo	
	{
	public:
		TArray Regions; // 0x0(0x10)
		FSkeletalMeshSamplingBuiltData BuiltData; // 0x10(0x20)
	};


	// Struct Engine.SectionReference
	// Size: 0x4 (0x4 - 0x0)
	struct FSectionReference	
	{
	public:
		int32_t SectionIndex; // 0x0(0x4)
	};


	// Struct Engine.MorphTargetImportedSourceFileInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FMorphTargetImportedSourceFileInfo	
	{
	public:
		FString SourceFilename; // 0x0(0x10)
		FGuid DerivedDataHash; // 0x10(0x10)
	};


	// Struct Engine.SkeletalMeshLODInfo
	// Size: 0xF0 (0xF0 - 0x0)
	struct FSkeletalMeshLODInfo	
	{
	public:
		FPerPlatformFloat ScreenSize; // 0x0(0x4)
		float LODHysteresis; // 0x4(0x4)
		TArray LODMaterialMap; // 0x8(0x10)
		FSkeletalMeshBuildSettings BuildSettings; // 0x18(0x18)
		FSkeletalMeshOptimizationSettings ReductionSettings; // 0x30(0x3C)
		unsigned char UnknownData05_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		TArray BonesToRemove; // 0x70(0x10)
		TArray BonesToPrioritize; // 0x80(0x10)
		TArray SectionsToPrioritize; // 0x90(0x10)
		float WeightOfPrioritization; // 0xA0(0x4)
		unsigned char UnknownData06_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		UAnimSequence BakePose; // 0xA8(0x8)
		UAnimSequence BakePoseOverride; // 0xB0(0x8)
		FString SourceImportFilename; // 0xB8(0x10)
		ESkinCacheUsage SkinCacheUsage; // 0xC8(0x1)
		unsigned char UnknownData07_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		float MorphTargetPositionErrorTolerance; // 0xCC(0x4)
		bool bHasBeenSimplified : 1; // 0xD0:0(0x1)
		bool bHasPerLODVertexColors : 1; // 0xD0:1(0x1)
		bool bAllowCPUAccess : 1; // 0xD0:2(0x1)
		bool bBuildHalfEdgeBuffers : 1; // 0xD0:3(0x1)
		bool bAllowMeshDeformer : 1; // 0xD0:4(0x1)
		unsigned char UnknownData08_5[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		TArray VertexAttributes; // 0xD8(0x10)
		unsigned char UnknownData09_7[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.SkeletalMaterial
	// Size: 0x20 (0x20 - 0x0)
	struct FSkeletalMaterial	
	{
	public:
		UMaterialInterface MaterialInterface; // 0x0(0x8)
		FName MaterialSlotName; // 0x8(0x4)
		FMeshUVChannelInfo UVChannelData; // 0xC(0x14)
	};


	// Struct Engine.SoundClassEditorData
	// Size: 0x8 (0x8 - 0x0)
	struct FSoundClassEditorData	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.SoundClassProperties
	// Size: 0x198 (0x198 - 0x0)
	struct FSoundClassProperties	
	{
	public:
		float Volume; // 0x0(0x4)
		float pitch; // 0x4(0x4)
		float LowPassFilterFrequency; // 0x8(0x4)
		float AttenuationDistanceScale; // 0xC(0x4)
		float LFEBleed; // 0x10(0x4)
		float VoiceCenterChannelVolume; // 0x14(0x4)
		float RadioFilterVolume; // 0x18(0x4)
		float RadioFilterVolumeThreshold; // 0x1C(0x4)
		bool bApplyEffects : 1; // 0x20:0(0x1)
		bool bAlwaysPlay : 1; // 0x20:1(0x1)
		bool bIsUISound : 1; // 0x20:2(0x1)
		bool bIsMusic : 1; // 0x20:3(0x1)
		bool bCenterChannelOnly : 1; // 0x20:4(0x1)
		bool bApplyAmbientVolumes : 1; // 0x20:5(0x1)
		bool bReverb : 1; // 0x20:6(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		float Default2DReverbSendAmount; // 0x24(0x4)
		FSoundModulationDefaultSettings ModulationSettings; // 0x28(0x160)
		TEnumAsByte OutputTarget; // 0x188(0x1)
		ESoundWaveLoadingBehavior LoadingBehavior; // 0x189(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x18A(0x6) UNKNOWN PROPERTY
		USoundSubmix DefaultSubmix; // 0x190(0x8)
	};


	// Struct Engine.SoundModulationDefaultSettings
	// Size: 0x160 (0x160 - 0x0)
	struct FSoundModulationDefaultSettings	
	{
	public:
		FSoundModulationDestinationSettings VolumeModulationDestination; // 0x0(0x58)
		FSoundModulationDestinationSettings PitchModulationDestination; // 0x58(0x58)
		FSoundModulationDestinationSettings HighpassModulationDestination; // 0xB0(0x58)
		FSoundModulationDestinationSettings LowpassModulationDestination; // 0x108(0x58)
	};


	// Struct Engine.SoundModulationDestinationSettings
	// Size: 0x58 (0x58 - 0x0)
	struct FSoundModulationDestinationSettings	
	{
	public:
		float Value; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TSet Modulators; // 0x8(0x50)
	};


	// Struct Engine.PassiveSoundMixModifier
	// Size: 0x10 (0x10 - 0x0)
	struct FPassiveSoundMixModifier	
	{
	public:
		USoundMix SoundMix; // 0x0(0x8)
		float MinVolumeThreshold; // 0x8(0x4)
		float MaxVolumeThreshold; // 0xC(0x4)
	};


	// Struct Engine.SoundConcurrencySettings
	// Size: 0x20 (0x20 - 0x0)
	struct FSoundConcurrencySettings	
	{
	public:
		int32_t MaxCount; // 0x0(0x4)
		bool bLimitToOwner : 1; // 0x4:0(0x1)
		bool bVolumeScaleCanRelease : 1; // 0x4:1(0x1)
		TEnumAsByte ResolutionRule; // 0x5(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		float RetriggerTime; // 0x8(0x4)
		float VolumeScale; // 0xC(0x4)
		EConcurrencyVolumeScaleMode VolumeScaleMode; // 0x10(0x4)
		float VolumeScaleAttackTime; // 0x14(0x4)
		float VolumeScaleReleaseTime; // 0x18(0x4)
		float VoiceStealReleaseTime; // 0x1C(0x4)
	};


	// Struct Engine.SoundNodeEditorData
	// Size: 0x8 (0x8 - 0x0)
	struct FSoundNodeEditorData	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.AudioEQEffect
	// Inherited from FAudioEffectParameters
	// Size: 0x38 (0x40 - 0x8)
	struct FAudioEQEffect : public FAudioEffectParameters	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		float FrequencyCenter0; // 0x10(0x4)
		float Gain0; // 0x14(0x4)
		float Bandwidth0; // 0x18(0x4)
		float FrequencyCenter1; // 0x1C(0x4)
		float Gain1; // 0x20(0x4)
		float Bandwidth1; // 0x24(0x4)
		float FrequencyCenter2; // 0x28(0x4)
		float Gain2; // 0x2C(0x4)
		float Bandwidth2; // 0x30(0x4)
		float FrequencyCenter3; // 0x34(0x4)
		float Gain3; // 0x38(0x4)
		float Bandwidth3; // 0x3C(0x4)
	};


	// Struct Engine.SoundClassAdjuster
	// Size: 0x20 (0x20 - 0x0)
	struct FSoundClassAdjuster	
	{
	public:
		USoundClass SoundClassObject; // 0x0(0x8)
		float VolumeAdjuster; // 0x8(0x4)
		float PitchAdjuster; // 0xC(0x4)
		float LowPassFilterFrequency; // 0x10(0x4)
		bool bApplyToChildren : 1; // 0x14:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float VoiceCenterChannelVolumeAdjuster; // 0x18(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.SoundModulationDefaultRoutingSettings
	// Inherited from FSoundModulationDefaultSettings
	// Size: 0x8 (0x168 - 0x160)
	struct FSoundModulationDefaultRoutingSettings : public FSoundModulationDefaultSettings	
	{
	public:
		EModulationRouting VolumeRouting; // 0x160(0x1)
		EModulationRouting PitchRouting; // 0x161(0x1)
		EModulationRouting HighpassRouting; // 0x162(0x1)
		EModulationRouting LowpassRouting; // 0x163(0x1)
		unsigned char UnknownData01_7[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.DistanceDatum
	// Size: 0x14 (0x14 - 0x0)
	struct FDistanceDatum	
	{
	public:
		float FadeInDistanceStart; // 0x0(0x4)
		float FadeInDistanceEnd; // 0x4(0x4)
		float FadeOutDistanceStart; // 0x8(0x4)
		float FadeOutDistanceEnd; // 0xC(0x4)
		float Volume; // 0x10(0x4)
	};


	// Struct Engine.DynamicChildSubmix
	// Size: 0x10 (0x10 - 0x0)
	struct FDynamicChildSubmix	
	{
	public:
		TArray ChildSubmixes; // 0x0(0x10)
	};


	// Struct Engine.SoundSubmixSpectralAnalysisBandSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FSoundSubmixSpectralAnalysisBandSettings	
	{
	public:
		float BandFrequency; // 0x0(0x4)
		int32_t AttackTimeMsec; // 0x4(0x4)
		int32_t ReleaseTimeMsec; // 0x8(0x4)
		float QFactor; // 0xC(0x4)
	};


	// Struct Engine.SplineMeshComponentDescriptorBase
	// Size: 0x1B8 (0x1B8 - 0x0)
	struct FSplineMeshComponentDescriptorBase	
	{
	public:
		unsigned char UnknownData04_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		uint32_t Hash; // 0x8(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UClass ComponentClass; // 0x10(0x8)
		TEnumAsByte Mobility; // 0x18(0x1)
		ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x19(0x1)
		ELightmapType LightmapType; // 0x1A(0x1)
		FLightingChannels LightingChannels; // 0x1B(0x1)
		int32_t RayTracingGroupId; // 0x1C(0x4)
		ERayTracingGroupCullingPriority RayTracingGroupCullingPriority; // 0x20(0x1)
		TEnumAsByte bHasCustomNavigableGeometry; // 0x21(0x1)
		ERendererStencilMask CustomDepthStencilWriteMask; // 0x22(0x1)
		unsigned char UnknownData06_6[0x5]; // 0x23(0x5) UNKNOWN PROPERTY
		FBodyInstance BodyInstance; // 0x28(0x170)
		int32_t VirtualTextureCullMips; // 0x198(0x4)
		int32_t TranslucencySortPriority; // 0x19C(0x4)
		int32_t OverriddenLightMapRes; // 0x1A0(0x4)
		int32_t CustomDepthStencilValue; // 0x1A4(0x4)
		bool bCastShadow : 1; // 0x1A8:0(0x1)
		bool bEmissiveLightSource : 1; // 0x1A8:1(0x1)
		bool bCastDynamicShadow : 1; // 0x1A8:2(0x1)
		bool bCastStaticShadow : 1; // 0x1A8:3(0x1)
		bool bCastContactShadow : 1; // 0x1A8:4(0x1)
		bool bCastShadowAsTwoSided : 1; // 0x1A8:5(0x1)
		bool bCastHiddenShadow : 1; // 0x1A8:6(0x1)
		bool bAffectDynamicIndirectLighting : 1; // 0x1A8:7(0x1)
		bool bAffectDynamicIndirectLightingWhileHidden : 1; // 0x1A9:0(0x1)
		bool bAffectDistanceFieldLighting : 1; // 0x1A9:1(0x1)
		bool bReceivesDecals : 1; // 0x1A9:2(0x1)
		bool bOverrideLightMapRes : 1; // 0x1A9:3(0x1)
		bool bUseAsOccluder : 1; // 0x1A9:4(0x1)
		bool bEnableDiscardOnLoad : 1; // 0x1A9:5(0x1)
		bool bRenderCustomDepth : 1; // 0x1A9:6(0x1)
		bool bVisibleInRayTracing : 1; // 0x1A9:7(0x1)
		bool bHiddenInGame : 1; // 0x1AA:0(0x1)
		bool bIsEditorOnly : 1; // 0x1AA:1(0x1)
		bool bVisible : 1; // 0x1AA:2(0x1)
		bool bEvaluateWorldPositionOffset : 1; // 0x1AA:3(0x1)
		bool bReverseCulling : 1; // 0x1AA:4(0x1)
		bool bUseDefaultCollision : 1; // 0x1AA:5(0x1)
		bool bGenerateOverlapEvents : 1; // 0x1AA:6(0x1)
		bool bOverrideNavigationExport : 1; // 0x1AA:7(0x1)
		bool bForceNavigationObstacle : 1; // 0x1AB:0(0x1)
		bool bFillCollisionUnderneathForNavmesh : 1; // 0x1AB:1(0x1)
		int32_t WorldPositionOffsetDisableDistance; // 0x1AC(0x4)
		EShadowCacheInvalidationBehavior ShadowCacheInvalidationBehavior; // 0x1B0(0x1)
		TEnumAsByte DetailMode; // 0x1B1(0x1)
		unsigned char UnknownData07_7[0x6]; // 0x1B2(0x6) UNKNOWN PROPERTY
	};


	// Struct Engine.SplineMeshComponentDescriptor
	// Inherited from FSplineMeshComponentDescriptorBase
	// Size: 0x30 (0x1E8 - 0x1B8)
	struct FSplineMeshComponentDescriptor : public FSplineMeshComponentDescriptorBase	
	{
	public:
		UStaticMesh StaticMesh; // 0x1B8(0x8)
		TArray OverrideMaterials; // 0x1C0(0x10)
		UMaterialInterface OverlayMaterial; // 0x1D0(0x8)
		TArray RuntimeVirtualTextures; // 0x1D8(0x10)
	};


	// Struct Engine.SoftSplineMeshComponentDescriptor
	// Inherited from FSplineMeshComponentDescriptorBase
	// Size: 0x60 (0x218 - 0x1B8)
	struct FSoftSplineMeshComponentDescriptor : public FSplineMeshComponentDescriptorBase	
	{
	public:
		TWeakObjectPtr StaticMesh; // 0x1B8(0x20)
		TArray OverrideMaterials; // 0x1D8(0x10)
		TWeakObjectPtr OverlayMaterial; // 0x1E8(0x20)
		TArray RuntimeVirtualTextures; // 0x208(0x10)
	};


	// Struct Engine.StaticMeshOptimizationSettings
	// Size: 0x1C (0x1C - 0x0)
	struct FStaticMeshOptimizationSettings	
	{
	public:
		TEnumAsByte ReductionMethod; // 0x0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float NumOfTrianglesPercentage; // 0x4(0x4)
		float MaxDeviationPercentage; // 0x8(0x4)
		float WeldingThreshold; // 0xC(0x4)
		bool bRecalcNormals; // 0x10(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float NormalsThreshold; // 0x14(0x4)
		char SilhouetteImportance; // 0x18(0x1)
		char TextureImportance; // 0x19(0x1)
		char ShadingImportance; // 0x1A(0x1)
		unsigned char UnknownData05_7[0x1]; // 0x1B(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.MeshSectionInfo
	// Size: 0xC (0xC - 0x0)
	struct FMeshSectionInfo	
	{
	public:
		int32_t MaterialIndex; // 0x0(0x4)
		bool bEnableCollision; // 0x4(0x1)
		bool bCastShadow; // 0x5(0x1)
		bool bVisibleInRayTracing; // 0x6(0x1)
		bool bAffectDistanceFieldLighting; // 0x7(0x1)
		bool bForceOpaque; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.MeshSectionInfoMap
	// Size: 0x50 (0x50 - 0x0)
	struct FMeshSectionInfoMap	
	{
	public:
		TMap Map; // 0x0(0x50)
	};


	// Struct Engine.AssetEditorOrbitCameraPosition
	// Size: 0x50 (0x50 - 0x0)
	struct FAssetEditorOrbitCameraPosition	
	{
	public:
		bool bIsSet; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector CamOrbitPoint; // 0x8(0x18)
		FVector CamOrbitZoom; // 0x20(0x18)
		FRotator CamOrbitRotation; // 0x38(0x18)
	};


	// Struct Engine.StaticMaterial
	// Size: 0x28 (0x28 - 0x0)
	struct FStaticMaterial	
	{
	public:
		UMaterialInterface MaterialInterface; // 0x0(0x8)
		FName MaterialSlotName; // 0x8(0x4)
		FName ImportedMaterialSlotName; // 0xC(0x4)
		FMeshUVChannelInfo UVChannelData; // 0x10(0x14)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.MaterialRemapIndex
	// Size: 0x18 (0x18 - 0x0)
	struct FMaterialRemapIndex	
	{
	public:
		uint32_t ImportVersionKey; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray MaterialRemap; // 0x8(0x10)
	};


	// Struct Engine.StaticMeshSourceModel
	// Size: 0x98 (0x98 - 0x0)
	struct FStaticMeshSourceModel	
	{
	public:
		FMeshBuildSettings BuildSettings; // 0x0(0x48)
		FMeshReductionSettings ReductionSettings; // 0x48(0x2C)
		uint32_t CacheMeshDescriptionTrianglesCount; // 0x74(0x4)
		uint32_t CacheMeshDescriptionVerticesCount; // 0x78(0x4)
		float LODDistance; // 0x7C(0x4)
		FPerPlatformFloat ScreenSize; // 0x80(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		FString SourceImportFilename; // 0x88(0x10)
	};


	// Struct Engine.StreamableTexture
	// Size: 0x1 (0x1 - 0x0)
	struct FStreamableTexture	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.ExternalToolDefinition
	// Size: 0x60 (0x60 - 0x0)
	struct FExternalToolDefinition	
	{
	public:
		FString ToolName; // 0x0(0x10)
		FFilePath ExecutablePath; // 0x10(0x10)
		FString CommandLineOptions; // 0x20(0x10)
		FDirectoryPath WorkingDirectory; // 0x30(0x10)
		FString ScriptExtension; // 0x40(0x10)
		FDirectoryPath ScriptDirectory; // 0x50(0x10)
	};


	// Struct Engine.ImportFactorySettingValues
	// Size: 0x20 (0x20 - 0x0)
	struct FImportFactorySettingValues	
	{
	public:
		FString SettingName; // 0x0(0x10)
		FString Value; // 0x10(0x10)
	};


	// Struct Engine.EditorImportExportTestDefinition
	// Size: 0x38 (0x38 - 0x0)
	struct FEditorImportExportTestDefinition	
	{
	public:
		FFilePath ImportFilePath; // 0x0(0x10)
		FString ExportFileExtension; // 0x10(0x10)
		bool bSkipExport; // 0x20(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		TArray FactorySettings; // 0x28(0x10)
	};


	// Struct Engine.EditorImportWorkflowDefinition
	// Size: 0x20 (0x20 - 0x0)
	struct FEditorImportWorkflowDefinition	
	{
	public:
		FFilePath ImportFilePath; // 0x0(0x10)
		TArray FactorySettings; // 0x10(0x10)
	};


	// Struct Engine.BuildPromotionImportWorkflowSettings
	// Size: 0x150 (0x150 - 0x0)
	struct FBuildPromotionImportWorkflowSettings	
	{
	public:
		FEditorImportWorkflowDefinition Diffuse; // 0x0(0x20)
		FEditorImportWorkflowDefinition Normal; // 0x20(0x20)
		FEditorImportWorkflowDefinition StaticMesh; // 0x40(0x20)
		FEditorImportWorkflowDefinition ReimportStaticMesh; // 0x60(0x20)
		FEditorImportWorkflowDefinition BlendShapeMesh; // 0x80(0x20)
		FEditorImportWorkflowDefinition MorphMesh; // 0xA0(0x20)
		FEditorImportWorkflowDefinition SkeletalMesh; // 0xC0(0x20)
		FEditorImportWorkflowDefinition Animation; // 0xE0(0x20)
		FEditorImportWorkflowDefinition Sound; // 0x100(0x20)
		FEditorImportWorkflowDefinition SurroundSound; // 0x120(0x20)
		TArray OtherAssetsToImport; // 0x140(0x10)
	};


	// Struct Engine.BuildPromotionOpenAssetSettings
	// Size: 0x60 (0x60 - 0x0)
	struct FBuildPromotionOpenAssetSettings	
	{
	public:
		FFilePath BlueprintAsset; // 0x0(0x10)
		FFilePath MaterialAsset; // 0x10(0x10)
		FFilePath ParticleSystemAsset; // 0x20(0x10)
		FFilePath SkeletalMeshAsset; // 0x30(0x10)
		FFilePath StaticMeshAsset; // 0x40(0x10)
		FFilePath TextureAsset; // 0x50(0x10)
	};


	// Struct Engine.BuildPromotionNewProjectSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FBuildPromotionNewProjectSettings	
	{
	public:
		FDirectoryPath NewProjectFolderOverride; // 0x0(0x10)
		FString NewProjectNameOverride; // 0x10(0x10)
	};


	// Struct Engine.MaterialEditorPromotionSettings
	// Size: 0x30 (0x30 - 0x0)
	struct FMaterialEditorPromotionSettings	
	{
	public:
		FFilePath DefaultMaterialAsset; // 0x0(0x10)
		FFilePath DefaultDiffuseTexture; // 0x10(0x10)
		FFilePath DefaultNormalTexture; // 0x20(0x10)
	};


	// Struct Engine.ParticleEditorPromotionSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FParticleEditorPromotionSettings	
	{
	public:
		FFilePath DefaultParticleAsset; // 0x0(0x10)
	};


	// Struct Engine.BlueprintEditorPromotionSettings
	// Size: 0x30 (0x30 - 0x0)
	struct FBlueprintEditorPromotionSettings	
	{
	public:
		FFilePath FirstMeshPath; // 0x0(0x10)
		FFilePath SecondMeshPath; // 0x10(0x10)
		FFilePath DefaultParticleAsset; // 0x20(0x10)
	};


	// Struct Engine.BuildPromotionTestSettings
	// Size: 0x1F0 (0x1F0 - 0x0)
	struct FBuildPromotionTestSettings	
	{
	public:
		FFilePath DefaultStaticMeshAsset; // 0x0(0x10)
		FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10(0x150)
		FBuildPromotionOpenAssetSettings OpenAssets; // 0x160(0x60)
		FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1C0(0x20)
		FFilePath SourceControlMaterial; // 0x1E0(0x10)
	};


	// Struct Engine.EditorMapPerformanceTestDefinition
	// Size: 0x20 (0x20 - 0x0)
	struct FEditorMapPerformanceTestDefinition	
	{
	public:
		FSoftObjectPath PerformanceTestmap; // 0x0(0x18)
		int32_t TestTimer; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.LaunchOnTestSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FLaunchOnTestSettings	
	{
	public:
		FFilePath LaunchOnTestmap; // 0x0(0x10)
		FString DeviceID; // 0x10(0x10)
	};


	// Struct Engine.TextureSourceLayerColorInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FTextureSourceLayerColorInfo	
	{
	public:
		FLinearColor ColorMin; // 0x0(0x10)
		FLinearColor ColorMax; // 0x10(0x10)
	};


	// Struct Engine.TextureSourceBlock
	// Size: 0x18 (0x18 - 0x0)
	struct FTextureSourceBlock	
	{
	public:
		int32_t BlockX; // 0x0(0x4)
		int32_t BlockY; // 0x4(0x4)
		int32_t SizeX; // 0x8(0x4)
		int32_t SizeY; // 0xC(0x4)
		int32_t NumSlices; // 0x10(0x4)
		int32_t NumMips; // 0x14(0x4)
	};


	// Struct Engine.TextureSource
	// Size: 0x68 (0x68 - 0x0)
	struct FTextureSource	
	{
	public:
		unsigned char UnknownData01_2[0x68]; // 0x0(0x68) UNKNOWN PROPERTY
	};


	// Struct Engine.TexturePlatformData
	// Size: 0x38 (0x38 - 0x0)
	struct FTexturePlatformData	
	{
	public:
		unsigned char UnknownData01_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct Engine.TextureFormatSettings
	// Size: 0x2 (0x2 - 0x0)
	struct FTextureFormatSettings	
	{
	public:
		TEnumAsByte CompressionSettings; // 0x0(0x1)
		bool CompressionNoAlpha : 1; // 0x1:0(0x1)
		bool CompressionForceAlpha : 1; // 0x1:1(0x1)
		bool CompressionNone : 1; // 0x1:2(0x1)
		bool CompressionYCoCg : 1; // 0x1:3(0x1)
		bool SRGB : 1; // 0x1:4(0x1)
	};


	// Struct Engine.TextureSourceColorSettings
	// Size: 0x50 (0x50 - 0x0)
	struct FTextureSourceColorSettings	
	{
	public:
		ETextureSourceEncoding EncodingOverride; // 0x0(0x1)
		ETextureColorSpace ColorSpace; // 0x1(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FVector2D RedChromaticityCoordinate; // 0x8(0x10)
		FVector2D GreenChromaticityCoordinate; // 0x18(0x10)
		FVector2D BlueChromaticityCoordinate; // 0x28(0x10)
		FVector2D WhiteChromaticityCoordinate; // 0x38(0x10)
		ETextureChromaticAdaptationMethod ChromaticAdaptationMethod; // 0x48(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct Engine.TextureLODGroup
	// Size: 0x60 (0x60 - 0x0)
	struct FTextureLODGroup	
	{
	public:
		TEnumAsByte Group; // 0x0(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		int32_t LODBias; // 0x8(0x4)
		int32_t LODBias_Smaller; // 0xC(0x4)
		int32_t LODBias_Smallest; // 0x10(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		int32_t NumStreamedMips; // 0x18(0x4)
		TEnumAsByte MipGenSettings; // 0x1C(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		int32_t MinLODSize; // 0x20(0x4)
		int32_t MaxLODSize; // 0x24(0x4)
		int32_t MaxLODSize_Smaller; // 0x28(0x4)
		int32_t MaxLODSize_Smallest; // 0x2C(0x4)
		int32_t MaxLODSize_VT; // 0x30(0x4)
		int32_t OptionalLODBias; // 0x34(0x4)
		int32_t OptionalMaxLODSize; // 0x38(0x4)
		FName MinMagFilter; // 0x3C(0x4)
		FName MipFilter; // 0x40(0x4)
		ETextureMipLoadOptions MipLoadOptions; // 0x44(0x1)
		bool HighPriorityLoad; // 0x45(0x1)
		bool DuplicateNonOptionalMips; // 0x46(0x1)
		unsigned char UnknownData09_6[0x1]; // 0x47(0x1) UNKNOWN PROPERTY
		float Downscale; // 0x48(0x4)
		ETextureDownscaleOptions DownscaleOptions; // 0x4C(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		int32_t VirtualTextureTileCountBias; // 0x50(0x4)
		int32_t VirtualTextureTileSizeBias; // 0x54(0x4)
		TEnumAsByte LossyCompressionAmount; // 0x58(0x1)
		bool CookPlatformTilingDisabled; // 0x59(0x1)
		unsigned char UnknownData11_6[0x2]; // 0x5A(0x2) UNKNOWN PROPERTY
		int32_t MaxAniso; // 0x5C(0x4)
	};


	// Struct Engine.TTTrackBase
	// Size: 0x10 (0x10 - 0x0)
	struct FTTTrackBase	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FName TrackName; // 0x8(0x4)
		bool bIsExternalCurve; // 0xC(0x1)
		unsigned char UnknownData03_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.TTTrackId
	// Size: 0x8 (0x8 - 0x0)
	struct FTTTrackId	
	{
	public:
		int32_t TrackType; // 0x0(0x4)
		int32_t TrackIndex; // 0x4(0x4)
	};


	// Struct Engine.TTEventTrack
	// Inherited from FTTTrackBase
	// Size: 0x10 (0x20 - 0x10)
	struct FTTEventTrack : public FTTTrackBase	
	{
	public:
		FName FunctionName; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		UCurveFloat CurveKeys; // 0x18(0x8)
	};


	// Struct Engine.TTPropertyTrack
	// Inherited from FTTTrackBase
	// Size: 0x8 (0x18 - 0x10)
	struct FTTPropertyTrack : public FTTTrackBase	
	{
	public:
		FName PropertyName; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.TTFloatTrack
	// Inherited from FTTPropertyTrack -> FTTTrackBase
	// Size: 0x8 (0x20 - 0x18)
	struct FTTFloatTrack : public FTTPropertyTrack	
	{
	public:
		UCurveFloat CurveFloat; // 0x18(0x8)
	};


	// Struct Engine.TTVectorTrack
	// Inherited from FTTPropertyTrack -> FTTTrackBase
	// Size: 0x8 (0x20 - 0x18)
	struct FTTVectorTrack : public FTTPropertyTrack	
	{
	public:
		UCurveVector CurveVector; // 0x18(0x8)
	};


	// Struct Engine.TTLinearColorTrack
	// Inherited from FTTPropertyTrack -> FTTTrackBase
	// Size: 0x8 (0x20 - 0x18)
	struct FTTLinearColorTrack : public FTTPropertyTrack	
	{
	public:
		UCurveLinearColor CurveLinearColor; // 0x18(0x8)
	};


	// Struct Engine.HardwareCursorReference
	// Size: 0x18 (0x18 - 0x0)
	struct FHardwareCursorReference	
	{
	public:
		FName CursorPath; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector2D HotSpot; // 0x8(0x10)
	};


	// Struct Engine.CanvasIcon
	// Size: 0x18 (0x18 - 0x0)
	struct FCanvasIcon	
	{
	public:
		UTexture Texture; // 0x0(0x8)
		float U; // 0x8(0x4)
		float V; // 0xC(0x4)
		float UL; // 0x10(0x4)
		float VL; // 0x14(0x4)
	};


	// Struct Engine.AutoCompleteNode
	// Size: 0x28 (0x28 - 0x0)
	struct FAutoCompleteNode	
	{
	public:
		int32_t IndexChar; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray AutoCompleteListIndices; // 0x8(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x18(0x10) UNKNOWN PROPERTY
	};


	// Struct Engine.KeyBind
	// Size: 0x30 (0x30 - 0x0)
	struct FKeyBind	
	{
	public:
		FKey Key; // 0x0(0x18)
		FString Command; // 0x18(0x10)
		bool Control : 1; // 0x28:0(0x1)
		bool Shift : 1; // 0x28:1(0x1)
		bool Alt : 1; // 0x28:2(0x1)
		bool Cmd : 1; // 0x28:3(0x1)
		bool bIgnoreCtrl : 1; // 0x28:4(0x1)
		bool bIgnoreShift : 1; // 0x28:5(0x1)
		bool bIgnoreAlt : 1; // 0x28:6(0x1)
		bool bIgnoreCmd : 1; // 0x28:7(0x1)
		bool bDisabled : 1; // 0x29:0(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
	};


	// Struct Engine.InputAxisProperties
	// Size: 0x10 (0x10 - 0x0)
	struct FInputAxisProperties	
	{
	public:
		float DeadZone; // 0x0(0x4)
		float Sensitivity; // 0x4(0x4)
		float Exponent; // 0x8(0x4)
		bool bInvert : 1; // 0xC:0(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.InputAxisConfigEntry
	// Size: 0x14 (0x14 - 0x0)
	struct FInputAxisConfigEntry	
	{
	public:
		FName AxisKeyName; // 0x0(0x4)
		FInputAxisProperties AxisProperties; // 0x4(0x10)
	};


	// Struct Engine.InputActionKeyMapping
	// Size: 0x20 (0x20 - 0x0)
	struct FInputActionKeyMapping	
	{
	public:
		FName ActionName; // 0x0(0x4)
		bool bShift : 1; // 0x4:0(0x1)
		bool bCtrl : 1; // 0x4:1(0x1)
		bool bAlt : 1; // 0x4:2(0x1)
		bool bCmd : 1; // 0x4:3(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FKey Key; // 0x8(0x18)
	};


	// Struct Engine.InputAxisKeyMapping
	// Size: 0x20 (0x20 - 0x0)
	struct FInputAxisKeyMapping	
	{
	public:
		FName AxisName; // 0x0(0x4)
		float Scale; // 0x4(0x4)
		FKey Key; // 0x8(0x18)
	};


	// Struct Engine.InputActionSpeechMapping
	// Size: 0x8 (0x8 - 0x0)
	struct FInputActionSpeechMapping	
	{
	public:
		FName ActionName; // 0x0(0x4)
		FName SpeechKeyword; // 0x4(0x4)
	};


	// Struct Engine.VoiceSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FVoiceSettings	
	{
	public:
		USceneComponent ComponentToAttachTo; // 0x0(0x8)
		USoundAttenuation AttenuationSettings; // 0x8(0x8)
		USoundEffectSourcePresetChain SourceEffectChain; // 0x10(0x8)
	};


	// Struct Engine.VirtualTextureBuildSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FVirtualTextureBuildSettings	
	{
	public:
		int32_t TileSize; // 0x0(0x4)
		int32_t TileBorderSize; // 0x4(0x4)
	};


	// Struct Engine.VirtualTextureSpacePoolConfig
	// Size: 0x28 (0x28 - 0x0)
	struct FVirtualTextureSpacePoolConfig	
	{
	public:
		TArray Formats; // 0x0(0x10)
		int32_t MinTileSize; // 0x10(0x4)
		int32_t MaxTileSize; // 0x14(0x4)
		int32_t SizeInMegabyte; // 0x18(0x4)
		bool bEnableResidencyMipMapBias; // 0x1C(0x1)
		bool bAllowSizeScale; // 0x1D(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x1E(0x2) UNKNOWN PROPERTY
		int32_t MinScaledSizeInMegabyte; // 0x20(0x4)
		int32_t MaxScaledSizeInMegabyte; // 0x24(0x4)
	};


	// Struct Engine.LevelViewportInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FLevelViewportInfo	
	{
	public:
		FVector CamPosition; // 0x0(0x18)
		FRotator CamRotation; // 0x18(0x18)
		float CamOrthoZoom; // 0x30(0x4)
		bool CamUpdated; // 0x34(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.StartPhysicsTickFunction
	// Inherited from FTickFunction
	// Size: 0x8 (0x30 - 0x28)
	struct FStartPhysicsTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.EndPhysicsTickFunction
	// Inherited from FTickFunction
	// Size: 0x8 (0x30 - 0x28)
	struct FEndPhysicsTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.LevelCollection
	// Size: 0x78 (0x78 - 0x0)
	struct FLevelCollection	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		AGameStateBase GameState; // 0x8(0x8)
		UNetDriver NetDriver; // 0x10(0x8)
		UDemoNetDriver DemoNetDriver; // 0x18(0x8)
		ULevel PersistentLevel; // 0x20(0x8)
		TSet Levels; // 0x28(0x50)
	};


	// Struct Engine.StreamingLevelsToConsider
	// Size: 0x28 (0x28 - 0x0)
	struct FStreamingLevelsToConsider	
	{
	public:
		TArray StreamingLevels; // 0x0(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x10(0x18) UNKNOWN PROPERTY
	};


	// Struct Engine.ActorDesc
	// Size: 0x90 (0x90 - 0x0)
	struct FActorDesc	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		UClass NativeClass; // 0x10(0x8)
		FSoftObjectPath Class; // 0x18(0x18)
		FName Name; // 0x30(0x4)
		FName Label; // 0x34(0x4)
		FBox Bounds; // 0x38(0x38)
		FName RuntimeGrid; // 0x70(0x4)
		bool bIsSpatiallyLoaded; // 0x74(0x1)
		bool bActorIsEditorOnly; // 0x75(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x76(0x2) UNKNOWN PROPERTY
		FName ActorPackage; // 0x78(0x4)
		FName ActorPath; // 0x7C(0x4)
		TArray DataLayerAssets; // 0x80(0x10)
	};


	// Struct Engine.ActorPlacementDataLayers
	// Size: 0x20 (0x20 - 0x0)
	struct FActorPlacementDataLayers	
	{
	public:
		TArray DataLayerInstanceNames; // 0x0(0x10)
		FName ExternalDataLayerName; // 0x10(0x4)
		FName CurrentColorizedDataLayerInstanceName; // 0x14(0x4)
		int32_t ContextId; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.WorldPartitionDestructibleHLODDamagedActorState
	// Inherited from FFastArraySerializerItem
	// Size: 0x8 (0x14 - 0xC)
	struct FWorldPartitionDestructibleHLODDamagedActorState : public FFastArraySerializerItem	
	{
	public:
		int32_t ActorIndex; // 0xC(0x4)
		char ActorHealth; // 0x10(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct Engine.WorldPartitionDestructibleHLODState
	// Inherited from FFastArraySerializer
	// Size: 0x40 (0x148 - 0x108)
	struct FWorldPartitionDestructibleHLODState : public FFastArraySerializer	
	{
	public:
		TArray DamagedActors; // 0x108(0x10)
		UWorldPartitionDestructibleHLODComponent OwnerComponent; // 0x118(0x8)
		unsigned char UnknownData01_7[0x28]; // 0x120(0x28) UNKNOWN PROPERTY
	};


	// Struct Engine.HLODBuildInputReferencedAssets
	// Size: 0x50 (0x50 - 0x0)
	struct FHLODBuildInputReferencedAssets	
	{
	public:
		TMap StaticMeshes; // 0x0(0x50)
	};


	// Struct Engine.HLODBuildInputStats
	// Size: 0x50 (0x50 - 0x0)
	struct FHLODBuildInputStats	
	{
	public:
		TMap BuildersReferencedAssets; // 0x0(0x50)
	};


	// Struct Engine.WorldPartitionHLODDestructionTag
	// Size: 0x10 (0x10 - 0x0)
	struct FWorldPartitionHLODDestructionTag	
	{
	public:
		UWorldPartitionDestructibleHLODComponent HLODDestructionComponent; // 0x0(0x8)
		int32_t ActorIndex; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct Engine.RuntimeCellTransformerInstance
	// Size: 0x1 (0x1 - 0x0)
	struct FRuntimeCellTransformerInstance	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.WorldPartitionPerWorldSettings
	// Size: 0x1 (0x1 - 0x0)
	struct FWorldPartitionPerWorldSettings	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.WorldPartitionRuntimeCellPropertyOverride
	// Size: 0x1 (0x1 - 0x0)
	struct FWorldPartitionRuntimeCellPropertyOverride	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.WorldPartitionRuntimeCellObjectMapping
	// Size: 0x1 (0x1 - 0x0)
	struct FWorldPartitionRuntimeCellObjectMapping	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.WorldPartitionRuntimeCellDebugInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FWorldPartitionRuntimeCellDebugInfo	
	{
	public:
		FString Name; // 0x0(0x10)
		FName GridName; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		int64_t CoordX; // 0x18(0x8)
		int64_t CoordY; // 0x20(0x8)
		int64_t CoordZ; // 0x28(0x8)
	};


	// Struct Engine.WorldPartitionRuntimeCellStreamingData
	// Size: 0x28 (0x28 - 0x0)
	struct FWorldPartitionRuntimeCellStreamingData	
	{
	public:
		FString PackageName; // 0x0(0x10)
		FSoftObjectPath WorldAsset; // 0x10(0x18)
	};


	// Struct Engine.SpatialHashSettings
	// Size: 0x2 (0x2 - 0x0)
	struct FSpatialHashSettings	
	{
	public:
		bool bUseAlignedGridLevels; // 0x0(0x1)
		bool bSnapNonAlignedGridLevelsToLowerLevels; // 0x1(0x1)
	};


	// Struct Engine.SpatialHashStreamingGridLayerCell
	// Size: 0x10 (0x10 - 0x0)
	struct FSpatialHashStreamingGridLayerCell	
	{
	public:
		TArray GridCells; // 0x0(0x10)
	};


	// Struct Engine.SpatialHashStreamingGridLevel
	// Size: 0x60 (0x60 - 0x0)
	struct FSpatialHashStreamingGridLevel	
	{
	public:
		TArray LayerCells; // 0x0(0x10)
		TMap LayerCellsMapping; // 0x10(0x50)
	};


	// Struct Engine.SpatialHashStreamingGrid
	// Size: 0xB0 (0xB0 - 0x0)
	struct FSpatialHashStreamingGrid	
	{
	public:
		FName GridName; // 0x0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Origin; // 0x8(0x18)
		int32_t CellSize; // 0x20(0x4)
		float LoadingRange; // 0x24(0x4)
		bool bBlockOnSlowStreaming; // 0x28(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		FLinearColor DebugColor; // 0x2C(0x10)
		unsigned char UnknownData07_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray GridLevels; // 0x40(0x10)
		FBox WorldBounds; // 0x50(0x38)
		bool bClientOnlyVisible; // 0x88(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x89(0x3) UNKNOWN PROPERTY
		int32_t GridIndex; // 0x8C(0x4)
		FSpatialHashSettings Settings; // 0x90(0x2)
		unsigned char UnknownData09_6[0xE]; // 0x92(0xE) UNKNOWN PROPERTY
		TArray InjectedGridLevels; // 0xA0(0x10)
	};


	// Struct Engine.SpatialHashRuntimeGrid
	// Size: 0x1 (0x1 - 0x0)
	struct FSpatialHashRuntimeGrid	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.WorldPartitionRuntimeSpatialHashGridPreviewer
	// Size: 0x1 (0x1 - 0x0)
	struct FWorldPartitionRuntimeSpatialHashGridPreviewer	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Engine.ActivatedCells
	// Size: 0xA0 (0xA0 - 0x0)
	struct FActivatedCells	
	{
	public:
		TSet Cells; // 0x0(0x50)
		unsigned char UnknownData01_7[0x50]; // 0x50(0x50) UNKNOWN PROPERTY
	};


	// Struct Engine.WorldPartitionUpdateStreamingTargetState
	// Size: 0x48 (0x48 - 0x0)
	struct FWorldPartitionUpdateStreamingTargetState	
	{
	public:
		TArray ToLoadCells; // 0x0(0x10)
		TArray ToActivateCells; // 0x10(0x10)
		TArray ToDeactivateCells; // 0x20(0x10)
		TArray ToUnloadCells; // 0x30(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY
	};


	// Struct Engine.WorldPartitionUpdateStreamingCurrentState
	// Size: 0x100 (0x100 - 0x0)
	struct FWorldPartitionUpdateStreamingCurrentState	
	{
	public:
		unsigned char UnknownData01_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		TSet LoadedCells; // 0x10(0x50)
		FActivatedCells ActivatedCells; // 0x60(0xA0)
	};


	// Struct Engine.WorldPartitionStreamingQuerySource
	// Size: 0x108 (0x108 - 0x0)
	struct FWorldPartitionStreamingQuerySource	
	{
	public:
		FVector Location; // 0x0(0x18)
		float Radius; // 0x18(0x4)
		bool bUseGridLoadingRange; // 0x1C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		TArray DataLayers; // 0x20(0x10)
		bool bDataLayersOnly; // 0x30(0x1)
		bool bSpatialQuery; // 0x31(0x1)
		unsigned char UnknownData03_7[0xD6]; // 0x32(0xD6) UNKNOWN PROPERTY
	};

}
