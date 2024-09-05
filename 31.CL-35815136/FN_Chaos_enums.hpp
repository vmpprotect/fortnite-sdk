#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Chaos
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/Chaos.ChaosDeformableSimSpace
	enum ChaosDeformableSimSpace
	{
		World = 0,
		ComponentXf = 1,
		bone = 2,
	};


	// Enum /Script/Chaos.ESetMaskConditionType
	enum ESetMaskConditionType
	{
		Field_Set_Always = 0,
		Field_Set_IFF_NOT_Interior = 1,
		Field_Set_IFF_NOT_Exterior = 2,
		Field_MaskCondition_Max = 3,
	};


	// Enum /Script/Chaos.EWaveFunctionType
	enum EWaveFunctionType
	{
		Field_Wave_Cosine = 0,
		Field_Wave_Gaussian = 1,
		Field_Wave_Falloff = 2,
		Field_Wave_Decay = 3,
		Field_Wave_Max = 4,
	};


	// Enum /Script/Chaos.EFieldOperationType
	enum EFieldOperationType
	{
		Field_Multiply = 0,
		Field_Divide = 1,
		Field_Add = 2,
		Field_Substract = 3,
		Field_Operation_Max = 4,
	};


	// Enum /Script/Chaos.EFieldCullingOperationType
	enum EFieldCullingOperationType
	{
		Field_Culling_Inside = 0,
		Field_Culling_Outside = 1,
		Field_Culling_Operation_Max = 2,
	};


	// Enum /Script/Chaos.EFieldResolutionType
	enum EFieldResolutionType
	{
		Field_Resolution_Minimal = 0,
		Field_Resolution_DisabledParents = 1,
		Field_Resolution_Maximum = 2,
		Field_Resolution_Max = 3,
	};


	// Enum /Script/Chaos.EFieldFilterType
	enum EFieldFilterType
	{
		Field_Filter_Dynamic = 0,
		Field_Filter_Kinematic = 1,
		Field_Filter_Static = 2,
		Field_Filter_All = 3,
		Field_Filter_Sleeping = 4,
		Field_Filter_Disabled = 5,
		Field_Filter_Max = 6,
	};


	// Enum /Script/Chaos.EFieldObjectType
	enum EFieldObjectType
	{
		Field_Object_Rigid = 0,
		Field_Object_Cloth = 1,
		Field_Object_Destruction = 2,
		Field_Object_Character = 3,
		Field_Object_All = 4,
		Field_Object_Max = 5,
	};


	// Enum /Script/Chaos.EFieldPositionType
	enum EFieldPositionType
	{
		Field_Position_CenterOfMass = 0,
		Field_Position_PivotPoint = 1,
		Field_Position_Max = 2,
	};


	// Enum /Script/Chaos.EFieldFalloffType
	enum EFieldFalloffType
	{
		Field_FallOff_None = 0,
		Field_Falloff_Linear = 1,
		Field_Falloff_Inverse = 2,
		Field_Falloff_Squared = 3,
		Field_Falloff_Logarithmic = 4,
		Field_Falloff_Max = 5,
	};


	// Enum /Script/Chaos.EFieldPhysicsType
	enum EFieldPhysicsType
	{
		Field_None = 0,
		Field_DynamicState = 1,
		Field_LinearForce = 2,
		Field_ExternalClusterStrain = 3,
		Field_Kill = 4,
		Field_LinearVelocity = 5,
		Field_AngularVelociy = 6,
		Field_AngularTorque = 7,
		Field_InternalClusterStrain = 8,
		Field_DisableThreshold = 9,
		Field_SleepingThreshold = A,
		Field_PositionStatic = B,
		Field_PositionAnimated = C,
		Field_PositionTarget = D,
		Field_DynamicConstraint = E,
		Field_CollisionGroup = F,
		Field_ActivateDisabled = 10,
		Field_InitialLinearVelocity = 11,
		Field_InitialAngularVelocity = 12,
		Field_LinearImpulse = 13,
		Field_PhysicsType_Max = 14,
	};


	// Enum /Script/Chaos.EFieldVectorType
	enum EFieldVectorType
	{
		Vector_LinearForce = 0,
		Vector_LinearVelocity = 1,
		Vector_AngularVelocity = 2,
		Vector_AngularTorque = 3,
		Vector_PositionTarget = 4,
		Vector_InitialLinearVelocity = 5,
		Vector_InitialAngularVelocity = 6,
		Vector_LinearImpulse = 7,
		Vector_TargetMax = 8,
	};


	// Enum /Script/Chaos.EFieldScalarType
	enum EFieldScalarType
	{
		Scalar_ExternalClusterStrain = 0,
		Scalar_Kill = 1,
		Scalar_DisableThreshold = 2,
		Scalar_SleepingThreshold = 3,
		Scalar_InternalClusterStrain = 4,
		Scalar_DynamicConstraint = 5,
		Scalar_TargetMax = 6,
	};


	// Enum /Script/Chaos.EFieldIntegerType
	enum EFieldIntegerType
	{
		Integer_DynamicState = 0,
		Integer_ActivateDisabled = 1,
		Integer_CollisionGroup = 2,
		Integer_PositionAnimated = 3,
		Integer_PositionStatic = 4,
		Integer_TargetMax = 5,
	};


	// Enum /Script/Chaos.EFieldOutputType
	enum EFieldOutputType
	{
		Field_Output_Vector = 0,
		Field_Output_Scalar = 1,
		Field_Output_Integer = 2,
		Field_Output_Max = 3,
	};


	// Enum /Script/Chaos.EFieldPhysicsDefaultFields
	enum EFieldPhysicsDefaultFields
	{
		Field_RadialIntMask = 0,
		Field_RadialFalloff = 1,
		Field_UniformVector = 2,
		Field_RadialVector = 3,
		Field_RadialVectorFalloff = 4,
		Field_EFieldPhysicsDefaultFields_Max = 5,
	};


	// Enum /Script/Chaos.EConvexOverlapRemoval
	enum EConvexOverlapRemoval
	{
		EConvexOverlapRemoval__None = 0,
		EConvexOverlapRemoval__All = 1,
		EConvexOverlapRemoval__OnlyClusters = 2,
		EConvexOverlapRemoval__OnlyClustersVsClusters = 3,
	};


	// Enum /Script/Chaos.EGenerateConvexMethod
	enum EGenerateConvexMethod
	{
		EGenerateConvexMethod__ExternalCollision = 0,
		EGenerateConvexMethod__ComputedFromGeometry = 1,
		EGenerateConvexMethod__IntersectExternalWithComputed = 2,
	};


	// Enum /Script/Chaos.EAllowConvexMergeMethod
	enum EAllowConvexMergeMethod
	{
		EAllowConvexMergeMethod__ByProximity = 0,
		EAllowConvexMergeMethod__Any = 1,
	};


	// Enum /Script/Chaos.EProximityMethod
	enum EProximityMethod
	{
		EProximityMethod__Precise = 0,
		EProximityMethod__ConvexHull = 1,
	};


	// Enum /Script/Chaos.EProximityContactMethod
	enum EProximityContactMethod
	{
		EProximityContactMethod__MinOverlapInProjectionToMajorAxes = 0,
		EProximityContactMethod__ConvexHullSharpContact = 1,
		EProximityContactMethod__ConvexHullAreaContact = 2,
	};


	// Enum /Script/Chaos.EConnectionContactMethod
	enum EConnectionContactMethod
	{
		EConnectionContactMethod__None = 0,
		EConnectionContactMethod__ConvexHullContactArea = 1,
	};


	// Enum /Script/Chaos.ECollisionTypeEnum
	enum ECollisionTypeEnum
	{
		ECollisionTypeEnum__Chaos_Volumetric = 0,
		ECollisionTypeEnum__Chaos_Surface_Volumetric = 1,
		ECollisionTypeEnum__Chaos_Max = 2,
	};


	// Enum /Script/Chaos.EImplicitTypeEnum
	enum EImplicitTypeEnum
	{
		EImplicitTypeEnum__Chaos_Implicit_Box = 0,
		EImplicitTypeEnum__Chaos_Implicit_Sphere = 1,
		EImplicitTypeEnum__Chaos_Implicit_Capsule = 2,
		EImplicitTypeEnum__Chaos_Implicit_LevelSet = 3,
		EImplicitTypeEnum__Chaos_Implicit_None = 4,
		EImplicitTypeEnum__Chaos_Implicit_Convex = 5,
		EImplicitTypeEnum__Chaos_Max = 6,
	};


	// Enum /Script/Chaos.EObjectStateTypeEnum
	enum EObjectStateTypeEnum
	{
		EObjectStateTypeEnum__Chaos_NONE = 0,
		EObjectStateTypeEnum__Chaos_Object_Sleeping = 1,
		EObjectStateTypeEnum__Chaos_Object_Kinematic = 2,
		EObjectStateTypeEnum__Chaos_Object_Static = 3,
		EObjectStateTypeEnum__Chaos_Object_Dynamic = 4,
		EObjectStateTypeEnum__Chaos_Object_UserDefined = 64,
		EObjectStateTypeEnum__Chaos_Max = 65,
	};


	// Enum /Script/Chaos.EGeometryCollectionPhysicsTypeEnum
	enum EGeometryCollectionPhysicsTypeEnum
	{
		EGeometryCollectionPhysicsTypeEnum__Chaos_AngularVelocity = 0,
		EGeometryCollectionPhysicsTypeEnum__Chaos_DynamicState = 1,
		EGeometryCollectionPhysicsTypeEnum__Chaos_LinearVelocity = 2,
		EGeometryCollectionPhysicsTypeEnum__Chaos_InitialAngularVelocity = 3,
		EGeometryCollectionPhysicsTypeEnum__Chaos_InitialLinearVelocity = 4,
		EGeometryCollectionPhysicsTypeEnum__Chaos_CollisionGroup = 5,
		EGeometryCollectionPhysicsTypeEnum__Chaos_LinearForce = 6,
		EGeometryCollectionPhysicsTypeEnum__Chaos_AngularTorque = 7,
		EGeometryCollectionPhysicsTypeEnum__Chaos_DisableThreshold = 8,
		EGeometryCollectionPhysicsTypeEnum__Chaos_SleepingThreshold = 9,
		EGeometryCollectionPhysicsTypeEnum__Chaos_ExternalClusterStrain = A,
		EGeometryCollectionPhysicsTypeEnum__Chaos_InternalClusterStrain = B,
		EGeometryCollectionPhysicsTypeEnum__Chaos_LinearImpulse = C,
		EGeometryCollectionPhysicsTypeEnum__Chaos_Max = D,
	};


	// Enum /Script/Chaos.EInitialVelocityTypeEnum
	enum EInitialVelocityTypeEnum
	{
		EInitialVelocityTypeEnum__Chaos_Initial_Velocity_User_Defined = 0,
		EInitialVelocityTypeEnum__Chaos_Initial_Velocity_None = 1,
		EInitialVelocityTypeEnum__Chaos_Max = 2,
	};


	// Enum /Script/Chaos.EEmissionPatternTypeEnum
	enum EEmissionPatternTypeEnum
	{
		EEmissionPatternTypeEnum__Chaos_Emission_Pattern_First_Frame = 0,
		EEmissionPatternTypeEnum__Chaos_Emission_Pattern_On_Demand = 1,
		EEmissionPatternTypeEnum__Chaos_Max = 2,
	};


	// Enum /Script/Chaos.EDamageModelTypeEnum
	enum EDamageModelTypeEnum
	{
		EDamageModelTypeEnum__Chaos_Damage_Model_UserDefined_Damage_Threshold = 0,
		EDamageModelTypeEnum__Chaos_Damage_Model_Material_Strength_And_Connectivity_DamageThreshold = 1,
		EDamageModelTypeEnum__Chaos_Max = 2,
	};


	// Enum /Script/Chaos.EChaosSolverTickMode
	enum EChaosSolverTickMode
	{
		EChaosSolverTickMode__Fixed = 0,
		EChaosSolverTickMode__Variable = 1,
		EChaosSolverTickMode__VariableCapped = 2,
		EChaosSolverTickMode__VariableCappedWithTarget = 3,
	};


	// Enum /Script/Chaos.EChaosThreadingMode
	enum EChaosThreadingMode
	{
		EChaosThreadingMode__DedicatedThread = 0,
		EChaosThreadingMode__TaskGraph = 1,
		EChaosThreadingMode__SingleThread = 2,
		EChaosThreadingMode__Num = 3,
		EChaosThreadingMode__Invalid = 4,
	};


	// Enum /Script/Chaos.EChaosBufferMode
	enum EChaosBufferMode
	{
		EChaosBufferMode__Double = 0,
		EChaosBufferMode__Triple = 1,
		EChaosBufferMode__Num = 2,
		EChaosBufferMode__Invalid = 3,
	};


	// Enum /Script/Chaos.EClusterUnionMethod
	enum EClusterUnionMethod
	{
		EClusterUnionMethod__PointImplicit = 0,
		EClusterUnionMethod__DelaunayTriangulation = 1,
		EClusterUnionMethod__MinimalSpanningSubsetDelaunayTriangulation = 2,
		EClusterUnionMethod__PointImplicitAugmentedWithMinimalDelaunay = 3,
		EClusterUnionMethod__BoundsOverlapFilteredDelaunayTriangulation = 4,
		EClusterUnionMethod__None = 5,
	};


	// Enum /Script/Chaos.EGeometryCollectionCacheType
	enum EGeometryCollectionCacheType
	{
		EGeometryCollectionCacheType__None = 0,
		EGeometryCollectionCacheType__Record = 1,
		EGeometryCollectionCacheType__Play = 2,
		EGeometryCollectionCacheType__RecordAndPlay = 3,
	};

}
