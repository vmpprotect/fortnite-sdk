#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HairStrandsCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/HairStrandsCore.EGroomCacheImportType
	enum EGroomCacheImportType
	{
		EGroomCacheImportType__None = 0,
		EGroomCacheImportType__Strands = 1,
		EGroomCacheImportType__Guides = 2,
		EGroomCacheImportType__All = 3,
	};


	// Enum /Script/HairStrandsCore.EHairAtlasTextureType
	enum EHairAtlasTextureType
	{
		EHairAtlasTextureType__Depth = 0,
		EHairAtlasTextureType__Tangent = 1,
		EHairAtlasTextureType__Attribute = 2,
		EHairAtlasTextureType__Coverage = 3,
		EHairAtlasTextureType__AuxilaryData = 4,
		EHairAtlasTextureType__Material = 5,
	};


	// Enum /Script/HairStrandsCore.EHairCardsSourceType
	enum EHairCardsSourceType
	{
		EHairCardsSourceType__Procedural = 0,
		EHairCardsSourceType__Imported = 1,
	};


	// Enum /Script/HairStrandsCore.EHairCardsGuideType
	enum EHairCardsGuideType
	{
		EHairCardsGuideType__Generated = 0,
		EHairCardsGuideType__GuideBased = 1,
	};


	// Enum /Script/HairStrandsCore.EHairTextureLayout
	enum EHairTextureLayout
	{
		EHairTextureLayout__Layout0 = 0,
		EHairTextureLayout__Layout1 = 1,
		EHairTextureLayout__Layout2 = 2,
		EHairTextureLayout__Layout3 = 3,
	};


	// Enum /Script/HairStrandsCore.EHairInterpolationQuality
	enum EHairInterpolationQuality
	{
		EHairInterpolationQuality__Low = 0,
		EHairInterpolationQuality__Medium = 1,
		EHairInterpolationQuality__High = 2,
		EHairInterpolationQuality__Unknown = 3,
	};


	// Enum /Script/HairStrandsCore.EHairInterpolationWeight
	enum EHairInterpolationWeight
	{
		EHairInterpolationWeight__Parametric = 0,
		EHairInterpolationWeight__Root = 1,
		EHairInterpolationWeight__Index = 2,
		EHairInterpolationWeight__Distance = 3,
		EHairInterpolationWeight__Unknown = 4,
	};


	// Enum /Script/HairStrandsCore.EGroomGeometryType
	enum EGroomGeometryType
	{
		EGroomGeometryType__Strands = 0,
		EGroomGeometryType__Cards = 1,
		EGroomGeometryType__Meshes = 2,
	};


	// Enum /Script/HairStrandsCore.EGroomBindingType
	enum EGroomBindingType
	{
		EGroomBindingType__NoneBinding = 0,
		EGroomBindingType__Rigid = 1,
		EGroomBindingType__Skinning = 2,
	};


	// Enum /Script/HairStrandsCore.EGroomOverrideType
	enum EGroomOverrideType
	{
		EGroomOverrideType__Auto = 0,
		EGroomOverrideType__Enable = 1,
		EGroomOverrideType__Disable = 2,
	};


	// Enum /Script/HairStrandsCore.EGroomGuideType
	enum EGroomGuideType
	{
		EGroomGuideType__Imported = 0,
		EGroomGuideType__Generated = 1,
		EGroomGuideType__Rigged = 2,
	};


	// Enum /Script/HairStrandsCore.EGroomLODMode
	enum EGroomLODMode
	{
		EGroomLODMode__Default = 0,
		EGroomLODMode__Manual = 1,
		EGroomLODMode__Auto = 2,
	};


	// Enum /Script/HairStrandsCore.EGroomNiagaraSolvers
	enum EGroomNiagaraSolvers
	{
		EGroomNiagaraSolvers__None = 0,
		EGroomNiagaraSolvers__CosseratRods = 2,
		EGroomNiagaraSolvers__AngularSprings = 4,
		EGroomNiagaraSolvers__CustomSolver = 8,
	};


	// Enum /Script/HairStrandsCore.EGroomStrandsSize
	enum EGroomStrandsSize
	{
		EGroomStrandsSize__None = 0,
		EGroomStrandsSize__Size2 = 2,
		EGroomStrandsSize__Size4 = 4,
		EGroomStrandsSize__Size8 = 8,
		EGroomStrandsSize__Size16 = 10,
		EGroomStrandsSize__Size32 = 20,
	};


	// Enum /Script/HairStrandsCore.EGroomInterpolationType
	enum EGroomInterpolationType
	{
		EGroomInterpolationType__None = 0,
		EGroomInterpolationType__RigidTransform = 2,
		EGroomInterpolationType__OffsetTransform = 4,
		EGroomInterpolationType__SmoothTransform = 8,
	};


	// Enum /Script/HairStrandsCore.EGroomBindingMeshType
	enum EGroomBindingMeshType
	{
		EGroomBindingMeshType__SkeletalMesh = 0,
		EGroomBindingMeshType__GeometryCache = 1,
	};


	// Enum /Script/HairStrandsCore.EGroomBindingAsyncProperties
	enum EGroomBindingAsyncProperties
	{
		EGroomBindingAsyncProperties__None = 0,
		EGroomBindingAsyncProperties__GroomBindingType = 1,
		EGroomBindingAsyncProperties__Groom = 2,
		EGroomBindingAsyncProperties__SourceSkeletalMesh = 4,
		EGroomBindingAsyncProperties__TargetSkeletalMesh = 8,
		EGroomBindingAsyncProperties__SourceGeometryCache = 10,
		EGroomBindingAsyncProperties__TargetGeometryCache = 20,
		EGroomBindingAsyncProperties__NumInterpolationPoints = 40,
		EGroomBindingAsyncProperties__MatchingSection = 80,
		EGroomBindingAsyncProperties__GroupInfos = 100,
		EGroomBindingAsyncProperties__HairGroupResources = 200,
		EGroomBindingAsyncProperties__HairGroupPlatformData = 400,
		EGroomBindingAsyncProperties__All = FFFFFFFF,
	};


	// Enum /Script/HairStrandsCore.EGroomCacheAttributes
	enum EGroomCacheAttributes
	{
		EGroomCacheAttributes__None = 0,
		EGroomCacheAttributes__Position = 1,
		EGroomCacheAttributes__Width = 2,
		EGroomCacheAttributes__Color = 4,
		EGroomCacheAttributes__PositionWidth = 3,
		EGroomCacheAttributes__PositionColor = 5,
		EGroomCacheAttributes__WidthColor = 5,
		EGroomCacheAttributes__PositionWidthColor = 7,
	};


	// Enum /Script/HairStrandsCore.EGroomCacheType
	enum EGroomCacheType
	{
		EGroomCacheType__None = 0,
		EGroomCacheType__Strands = 1,
		EGroomCacheType__Guides = 2,
	};


	// Enum /Script/HairStrandsCore.EGroomBasisType
	enum EGroomBasisType
	{
		EGroomBasisType__NoBasis = 0,
		EGroomBasisType__BezierBasis = 1,
		EGroomBasisType__BsplineBasis = 2,
		EGroomBasisType__CatmullromBasis = 3,
		EGroomBasisType__HermiteBasis = 4,
		EGroomBasisType__PowerBasis = 5,
	};


	// Enum /Script/HairStrandsCore.EGroomCurveType
	enum EGroomCurveType
	{
		EGroomCurveType__Cubic = 0,
		EGroomCurveType__Linear = 1,
		EGroomCurveType__VariableOrder = 2,
	};


	// Enum /Script/HairStrandsCore.EFollicleMaskChannel
	enum EFollicleMaskChannel
	{
		EFollicleMaskChannel__R = 0,
		EFollicleMaskChannel__G = 1,
		EFollicleMaskChannel__B = 2,
		EFollicleMaskChannel__A = 3,
	};


	// Enum /Script/HairStrandsCore.EStrandsTexturesTraceType
	enum EStrandsTexturesTraceType
	{
		EStrandsTexturesTraceType__TraceInside = 0,
		EStrandsTexturesTraceType__TraceOuside = 1,
		EStrandsTexturesTraceType__TraceBidirectional = 2,
	};


	// Enum /Script/HairStrandsCore.EStrandsTexturesMeshType
	enum EStrandsTexturesMeshType
	{
		EStrandsTexturesMeshType__Static = 0,
		EStrandsTexturesMeshType__Skeletal = 1,
	};


	// Enum /Script/HairStrandsCore.EGroomInterpolationQuality
	enum EGroomInterpolationQuality
	{
		EGroomInterpolationQuality__Low = 0,
		EGroomInterpolationQuality__Medium = 1,
		EGroomInterpolationQuality__High = 2,
		EGroomInterpolationQuality__Unknown = 3,
	};


	// Enum /Script/HairStrandsCore.EGroomInterpolationWeight
	enum EGroomInterpolationWeight
	{
		EGroomInterpolationWeight__Parametric = 0,
		EGroomInterpolationWeight__Root = 1,
		EGroomInterpolationWeight__Index = 2,
		EGroomInterpolationWeight__Unknown = 3,
	};

}
