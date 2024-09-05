#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HairStrandsCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct HairStrandsCore.GroomCacheImportSettings
	// Size: 0x60 (0x60 - 0x0)
	struct FGroomCacheImportSettings	
	{
	public:
		bool bImportGroomCache; // 0x0(0x1)
		EGroomCacheImportType ImportType; // 0x1(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		int32_t FrameStart; // 0x4(0x4)
		int32_t FrameEnd; // 0x8(0x4)
		bool bSkipEmptyFrames; // 0xC(0x1)
		bool bImportGroomAsset; // 0xD(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
		FSoftObjectPath GroomAsset; // 0x10(0x18)
		bool bOverrideConversionSettings; // 0x28(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FGroomConversionSettings ConversionSettings; // 0x30(0x30)
	};


	// Struct HairStrandsCore.GroomConversionSettings
	// Size: 0x30 (0x30 - 0x0)
	struct FGroomConversionSettings	
	{
	public:
		FVector Rotation; // 0x0(0x18)
		FVector Scale; // 0x18(0x18)
	};


	// Struct HairStrandsCore.HairGroupDesc
	// Size: 0x40 (0x40 - 0x0)
	struct FHairGroupDesc	
	{
	public:
		float HairLength; // 0x0(0x4)
		float HairWidth; // 0x4(0x4)
		bool HairWidth_Override; // 0x8(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float HairRootScale; // 0xC(0x4)
		bool HairRootScale_Override; // 0x10(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float HairTipScale; // 0x14(0x4)
		bool HairTipScale_Override; // 0x18(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		float HairShadowDensity; // 0x1C(0x4)
		bool HairShadowDensity_Override; // 0x20(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		float HairRaytracingRadiusScale; // 0x24(0x4)
		bool HairRaytracingRadiusScale_Override; // 0x28(0x1)
		bool bUseHairRaytracingGeometry; // 0x29(0x1)
		bool bUseHairRaytracingGeometry_Override; // 0x2A(0x1)
		unsigned char UnknownData11_6[0x1]; // 0x2B(0x1) UNKNOWN PROPERTY
		float LODBias; // 0x2C(0x4)
		bool bUseStableRasterization; // 0x30(0x1)
		bool bUseStableRasterization_Override; // 0x31(0x1)
		bool bScatterSceneLighting; // 0x32(0x1)
		bool bScatterSceneLighting_Override; // 0x33(0x1)
		bool bSupportVoxelization; // 0x34(0x1)
		bool bSupportVoxelization_Override; // 0x35(0x1)
		unsigned char UnknownData12_6[0x2]; // 0x36(0x2) UNKNOWN PROPERTY
		float HairLengthScale; // 0x38(0x4)
		bool HairLengthScale_Override; // 0x3C(0x1)
		unsigned char UnknownData13_7[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
	};


	// Struct HairStrandsCore.HairGroupLODInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FHairGroupLODInfo	
	{
	public:
		int32_t NumPoints; // 0x0(0x4)
		int32_t NumCurves; // 0x4(0x4)
	};


	// Struct HairStrandsCore.HairGroupInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FHairGroupInfo	
	{
	public:
		int32_t GroupId; // 0x0(0x4)
		FName GroupName; // 0x4(0x4)
		int32_t NumCurves; // 0x8(0x4)
		int32_t NumGuides; // 0xC(0x4)
		int32_t NumCurveVertices; // 0x10(0x4)
		int32_t NumGuideVertices; // 0x14(0x4)
		float MaxCurveLength; // 0x18(0x4)
		uint32_t Flags; // 0x1C(0x4)
		TArray LODInfos; // 0x20(0x10)
	};


	// Struct HairStrandsCore.HairGroupsMaterial
	// Size: 0x10 (0x10 - 0x0)
	struct FHairGroupsMaterial	
	{
	public:
		UMaterialInterface Material; // 0x0(0x8)
		FName SlotName; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct HairStrandsCore.HairGroupInfoWithVisibility
	// Inherited from FHairGroupInfo
	// Size: 0x8 (0x38 - 0x30)
	struct FHairGroupInfoWithVisibility : public FHairGroupInfo	
	{
	public:
		bool bIsVisible; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct HairStrandsCore.HairGroupCardsInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FHairGroupCardsInfo	
	{
	public:
		int32_t NumCards; // 0x0(0x4)
		int32_t NumCardVertices; // 0x4(0x4)
	};


	// Struct HairStrandsCore.HairGroupCardsTextures
	// Size: 0x50 (0x50 - 0x0)
	struct FHairGroupCardsTextures	
	{
	public:
		EHairTextureLayout Layout; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray Textures; // 0x8(0x10)
		UTexture2D DepthTexture; // 0x18(0x8)
		UTexture2D CoverageTexture; // 0x20(0x8)
		UTexture2D TangentTexture; // 0x28(0x8)
		UTexture2D AttributeTexture; // 0x30(0x8)
		UTexture2D AuxilaryDataTexture; // 0x38(0x8)
		UTexture2D MaterialTexture; // 0x40(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
	};


	// Struct HairStrandsCore.HairGroupsCardsSourceDescription
	// Size: 0x98 (0x98 - 0x0)
	struct FHairGroupsCardsSourceDescription	
	{
	public:
		UMaterialInterface Material; // 0x0(0x8)
		FName MaterialSlotName; // 0x8(0x4)
		EHairCardsSourceType SourceType; // 0xC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		UStaticMesh ProceduralMesh; // 0x10(0x8)
		bool bInvertUV; // 0x18(0x1)
		EHairCardsGuideType GuideType; // 0x19(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x1A(0x6) UNKNOWN PROPERTY
		UStaticMesh ImportedMesh; // 0x20(0x8)
		FHairGroupCardsTextures Textures; // 0x28(0x50)
		int32_t GroupIndex; // 0x78(0x4)
		int32_t LODIndex; // 0x7C(0x4)
		FHairGroupCardsInfo CardsInfo; // 0x80(0x8)
		FString ImportedMeshKey; // 0x88(0x10)
	};


	// Struct HairStrandsCore.HairLODSettings
	// Size: 0x1C (0x1C - 0x0)
	struct FHairLODSettings	
	{
	public:
		float CurveDecimation; // 0x0(0x4)
		float VertexDecimation; // 0x4(0x4)
		float AngularThreshold; // 0x8(0x4)
		float ScreenSize; // 0xC(0x4)
		float ThicknessScale; // 0x10(0x4)
		bool bVisible; // 0x14(0x1)
		EGroomGeometryType GeometryType; // 0x15(0x1)
		EGroomBindingType BindingType; // 0x16(0x1)
		EGroomOverrideType Simulation; // 0x17(0x1)
		EGroomOverrideType GlobalInterpolation; // 0x18(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
	};


	// Struct HairStrandsCore.HairDecimationSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FHairDecimationSettings	
	{
	public:
		float CurveDecimation; // 0x0(0x4)
		float VertexDecimation; // 0x4(0x4)
	};


	// Struct HairStrandsCore.HairInterpolationSettings
	// Size: 0x14 (0x14 - 0x0)
	struct FHairInterpolationSettings	
	{
	public:
		EGroomGuideType GuideType; // 0x0(0x1)
		bool bOverrideGuides; // 0x1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float HairToGuideDensity; // 0x4(0x4)
		int32_t RiggedGuideNumCurves; // 0x8(0x4)
		int32_t RiggedGuideNumPoints; // 0xC(0x4)
		EHairInterpolationQuality InterpolationQuality; // 0x10(0x1)
		EHairInterpolationWeight InterpolationDistance; // 0x11(0x1)
		bool bRandomizeGuide; // 0x12(0x1)
		bool bUseUniqueGuide; // 0x13(0x1)
	};


	// Struct HairStrandsCore.HairDeformationSettings
	// Size: 0xC (0xC - 0x0)
	struct FHairDeformationSettings	
	{
	public:
		bool bEnableRigging; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t NumCurves; // 0x4(0x4)
		int32_t NumPoints; // 0x8(0x4)
	};


	// Struct HairStrandsCore.HairGroupsInterpolation
	// Size: 0x28 (0x28 - 0x0)
	struct FHairGroupsInterpolation	
	{
	public:
		FHairDecimationSettings DecimationSettings; // 0x0(0x8)
		FHairInterpolationSettings InterpolationSettings; // 0x8(0x14)
		FHairDeformationSettings RiggingSettings; // 0x1C(0xC)
	};


	// Struct HairStrandsCore.HairGroupsLOD
	// Size: 0x10 (0x10 - 0x0)
	struct FHairGroupsLOD	
	{
	public:
		TArray Lods; // 0x0(0x10)
	};


	// Struct HairStrandsCore.HairGroupsMeshesSourceDescription
	// Size: 0x80 (0x80 - 0x0)
	struct FHairGroupsMeshesSourceDescription	
	{
	public:
		UMaterialInterface Material; // 0x0(0x8)
		FName MaterialSlotName; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UStaticMesh ImportedMesh; // 0x10(0x8)
		FHairGroupCardsTextures Textures; // 0x18(0x50)
		int32_t GroupIndex; // 0x68(0x4)
		int32_t LODIndex; // 0x6C(0x4)
		FString ImportedMeshKey; // 0x70(0x10)
	};


	// Struct HairStrandsCore.HairSolverSettings
	// Size: 0x38 (0x38 - 0x0)
	struct FHairSolverSettings	
	{
	public:
		bool EnableSimulation; // 0x0(0x1)
		EGroomNiagaraSolvers NiagaraSolver; // 0x1(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		TWeakObjectPtr CustomSystem; // 0x8(0x20)
		float GravityPreloading; // 0x28(0x4)
		int32_t SubSteps; // 0x2C(0x4)
		int32_t IterationCount; // 0x30(0x4)
		bool bForceVisible; // 0x34(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
	};


	// Struct HairStrandsCore.HairExternalForces
	// Size: 0x38 (0x38 - 0x0)
	struct FHairExternalForces	
	{
	public:
		FVector GravityVector; // 0x0(0x18)
		float AirDrag; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FVector AirVelocity; // 0x20(0x18)
	};


	// Struct HairStrandsCore.HairBendConstraint
	// Size: 0x98 (0x98 - 0x0)
	struct FHairBendConstraint	
	{
	public:
		bool SolveBend; // 0x0(0x1)
		bool ProjectBend; // 0x1(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float BendDamping; // 0x4(0x4)
		float BendStiffness; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve BendScale; // 0x10(0x88)
	};


	// Struct HairStrandsCore.HairStretchConstraint
	// Size: 0x98 (0x98 - 0x0)
	struct FHairStretchConstraint	
	{
	public:
		bool SolveStretch; // 0x0(0x1)
		bool ProjectStretch; // 0x1(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float StretchDamping; // 0x4(0x4)
		float StretchStiffness; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve StretchScale; // 0x10(0x88)
	};


	// Struct HairStrandsCore.HairCollisionConstraint
	// Size: 0xA8 (0xA8 - 0x0)
	struct FHairCollisionConstraint	
	{
	public:
		bool SolveCollision; // 0x0(0x1)
		bool ProjectCollision; // 0x1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float StaticFriction; // 0x4(0x4)
		float KineticFriction; // 0x8(0x4)
		float StrandsViscosity; // 0xC(0x4)
		FIntVector GridDimension; // 0x10(0xC)
		float CollisionRadius; // 0x1C(0x4)
		FRuntimeFloatCurve RadiusScale; // 0x20(0x88)
	};


	// Struct HairStrandsCore.HairMaterialConstraints
	// Size: 0x1D8 (0x1D8 - 0x0)
	struct FHairMaterialConstraints	
	{
	public:
		FHairBendConstraint BendConstraint; // 0x0(0x98)
		FHairStretchConstraint StretchConstraint; // 0x98(0x98)
		FHairCollisionConstraint CollisionConstraint; // 0x130(0xA8)
	};


	// Struct HairStrandsCore.HairStrandsParameters
	// Size: 0x98 (0x98 - 0x0)
	struct FHairStrandsParameters	
	{
	public:
		EGroomStrandsSize StrandsSize; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float StrandsDensity; // 0x4(0x4)
		float StrandsSmoothing; // 0x8(0x4)
		float StrandsThickness; // 0xC(0x4)
		FRuntimeFloatCurve ThicknessScale; // 0x10(0x88)
	};


	// Struct HairStrandsCore.HairGroupsPhysics
	// Size: 0x2E0 (0x2E0 - 0x0)
	struct FHairGroupsPhysics	
	{
	public:
		FHairSolverSettings SolverSettings; // 0x0(0x38)
		FHairExternalForces ExternalForces; // 0x38(0x38)
		FHairMaterialConstraints MaterialConstraints; // 0x70(0x1D8)
		FHairStrandsParameters StrandsParameters; // 0x248(0x98)
	};


	// Struct HairStrandsCore.HairSimulationSolver
	// Size: 0x1 (0x1 - 0x0)
	struct FHairSimulationSolver	
	{
	public:
		bool bEnableSimulation; // 0x0(0x1)
	};


	// Struct HairStrandsCore.HairSimulationForces
	// Size: 0x38 (0x38 - 0x0)
	struct FHairSimulationForces	
	{
	public:
		FVector GravityVector; // 0x0(0x18)
		float AirDrag; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FVector AirVelocity; // 0x20(0x18)
	};


	// Struct HairStrandsCore.HairSimulationConstraints
	// Size: 0x20 (0x20 - 0x0)
	struct FHairSimulationConstraints	
	{
	public:
		float BendDamping; // 0x0(0x4)
		float BendStiffness; // 0x4(0x4)
		float StretchDamping; // 0x8(0x4)
		float StretchStiffness; // 0xC(0x4)
		float StaticFriction; // 0x10(0x4)
		float KineticFriction; // 0x14(0x4)
		float StrandsViscosity; // 0x18(0x4)
		float CollisionRadius; // 0x1C(0x4)
	};


	// Struct HairStrandsCore.HairSimulationSetup
	// Size: 0x28 (0x28 - 0x0)
	struct FHairSimulationSetup	
	{
	public:
		bool bResetSimulation; // 0x0(0x1)
		bool bDebugSimulation; // 0x1(0x1)
		bool bLocalSimulation; // 0x2(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		float LinearVelocityScale; // 0x4(0x4)
		float AngularVelocityScale; // 0x8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FString LocalBone; // 0x10(0x10)
		float TeleportDistance; // 0x20(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct HairStrandsCore.HairSimulationSettings
	// Size: 0x90 (0x90 - 0x0)
	struct FHairSimulationSettings	
	{
	public:
		bool bOverrideSettings; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FHairSimulationSetup SimulationSetup; // 0x8(0x28)
		FHairSimulationSolver SolverSettings; // 0x30(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FHairSimulationForces ExternalForces; // 0x38(0x38)
		FHairSimulationConstraints MaterialConstraints; // 0x70(0x20)
	};


	// Struct HairStrandsCore.HairGeometrySettings
	// Size: 0x10 (0x10 - 0x0)
	struct FHairGeometrySettings	
	{
	public:
		float HairWidth; // 0x0(0x4)
		bool HairWidth_Override; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float HairRootScale; // 0x8(0x4)
		float HairTipScale; // 0xC(0x4)
	};


	// Struct HairStrandsCore.HairShadowSettings
	// Size: 0xC (0xC - 0x0)
	struct FHairShadowSettings	
	{
	public:
		float HairShadowDensity; // 0x0(0x4)
		float HairRaytracingRadiusScale; // 0x4(0x4)
		bool bUseHairRaytracingGeometry; // 0x8(0x1)
		bool bVoxelize; // 0x9(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
	};


	// Struct HairStrandsCore.HairAdvancedRenderingSettings
	// Size: 0x2 (0x2 - 0x0)
	struct FHairAdvancedRenderingSettings	
	{
	public:
		bool bUseStableRasterization; // 0x0(0x1)
		bool bScatterSceneLighting; // 0x1(0x1)
	};


	// Struct HairStrandsCore.HairGroupsRendering
	// Size: 0x30 (0x30 - 0x0)
	struct FHairGroupsRendering	
	{
	public:
		FName MaterialSlotName; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UMaterialInterface Material; // 0x8(0x8)
		FHairGeometrySettings GeometrySettings; // 0x10(0x10)
		FHairShadowSettings ShadowSettings; // 0x20(0xC)
		FHairAdvancedRenderingSettings AdvancedSettings; // 0x2C(0x2)
		unsigned char UnknownData03_7[0x2]; // 0x2E(0x2) UNKNOWN PROPERTY
	};


	// Struct HairStrandsCore.GoomBindingGroupInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FGoomBindingGroupInfo	
	{
	public:
		int32_t RenRootCount; // 0x0(0x4)
		int32_t RenLODCount; // 0x4(0x4)
		int32_t SimRootCount; // 0x8(0x4)
		int32_t SimLODCount; // 0xC(0x4)
	};


	// Struct HairStrandsCore.GroomAnimationInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FGroomAnimationInfo	
	{
	public:
		uint32_t NumFrames; // 0x0(0x4)
		float SecondsPerFrame; // 0x4(0x4)
		float duration; // 0x8(0x4)
		float StartTime; // 0xC(0x4)
		float EndTime; // 0x10(0x4)
		int32_t StartFrame; // 0x14(0x4)
		int32_t EndFrame; // 0x18(0x4)
		EGroomCacheAttributes Attributes; // 0x1C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct HairStrandsCore.GroomCacheInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FGroomCacheInfo	
	{
	public:
		int32_t Version; // 0x0(0x4)
		EGroomCacheType Type; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FGroomAnimationInfo AnimationInfo; // 0x8(0x20)
	};


	// Struct HairStrandsCore.FollicleMaskOptions
	// Size: 0x10 (0x10 - 0x0)
	struct FFollicleMaskOptions	
	{
	public:
		UGroomAsset Groom; // 0x0(0x8)
		EFollicleMaskChannel Channel; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct HairStrandsCore.GroomHairGroupPreview
	// Size: 0x44 (0x44 - 0x0)
	struct FGroomHairGroupPreview	
	{
	public:
		FName GroupName; // 0x0(0x4)
		int32_t GroupId; // 0x4(0x4)
		int32_t CurveCount; // 0x8(0x4)
		int32_t GuideCount; // 0xC(0x4)
		uint32_t Attributes; // 0x10(0x4)
		uint32_t AttributeFlags; // 0x14(0x4)
		uint32_t Flags; // 0x18(0x4)
		FHairGroupsInterpolation InterpolationSettings; // 0x1C(0x28)
	};


	// Struct HairStrandsCore.GroomBuildSettings
	// Size: 0xC (0xC - 0x0)
	struct FGroomBuildSettings	
	{
	public:
		bool bOverrideGuides; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float HairToGuideDensity; // 0x4(0x4)
		EGroomInterpolationQuality InterpolationQuality; // 0x8(0x1)
		EGroomInterpolationWeight InterpolationDistance; // 0x9(0x1)
		bool bRandomizeGuide; // 0xA(0x1)
		bool bUseUniqueGuide; // 0xB(0x1)
	};


	// Struct HairStrandsCore.MovieSceneGroomCacheParams
	// Size: 0x20 (0x20 - 0x0)
	struct FMovieSceneGroomCacheParams	
	{
	public:
		UGroomCache GroomCache; // 0x0(0x8)
		FFrameNumber FirstLoopStartFrameOffset; // 0x8(0x4)
		FFrameNumber StartFrameOffset; // 0xC(0x4)
		FFrameNumber EndFrameOffset; // 0x10(0x4)
		float PlayRate; // 0x14(0x4)
		bool bReverse : 1; // 0x18:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters
	// Inherited from FMovieSceneGroomCacheParams
	// Size: 0x8 (0x28 - 0x20)
	struct FMovieSceneGroomCacheSectionTemplateParameters : public FMovieSceneGroomCacheParams	
	{
	public:
		FFrameNumber SectionStartTime; // 0x20(0x4)
		FFrameNumber SectionEndTime; // 0x24(0x4)
	};


	// Struct HairStrandsCore.MovieSceneGroomCacheSectionTemplate
	// Inherited from FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x28 (0x48 - 0x20)
	struct FMovieSceneGroomCacheSectionTemplate : public FMovieSceneEvalTemplate	
	{
	public:
		FMovieSceneGroomCacheSectionTemplateParameters Params; // 0x20(0x28)
	};

}
