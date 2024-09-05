#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MeshModelingToolsExp
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MeshModelingToolsExp.BakeInputMeshProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x98 (0x140 - 0xA8)
	class UBakeInputMeshProperties : public UInteractiveToolPropertySet	
	{
	public:
		UStaticMesh TargetStaticMesh; // 0xA8(0x8)
		USkeletalMesh TargetSkeletalMesh; // 0xB0(0x8)
		AActor TargetDynamicMesh; // 0xB8(0x8)
		FString TargetUVLayer; // 0xC0(0x10)
		bool bHasTargetUVLayer; // 0xD0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		UStaticMesh SourceStaticMesh; // 0xD8(0x8)
		USkeletalMesh SourceSkeletalMesh; // 0xE0(0x8)
		AActor SourceDynamicMesh; // 0xE8(0x8)
		bool bHideSourceMesh; // 0xF0(0x1)
		unsigned char UnknownData05_6[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
		UTexture2D SourceNormalMap; // 0xF8(0x8)
		FString SourceNormalMapUVLayer; // 0x100(0x10)
		EBakeNormalSpace SourceNormalSpace; // 0x110(0x4)
		bool bHasSourceNormalMap; // 0x114(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x115(0x3) UNKNOWN PROPERTY
		float ProjectionDistance; // 0x118(0x4)
		bool bProjectionInWorldSpace; // 0x11C(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x11D(0x3) UNKNOWN PROPERTY
		TArray TargetUVLayerNamesList; // 0x120(0x10)
		TArray SourceUVLayerNamesList; // 0x130(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeInputMeshProperties");
			return ret;
		}

		TArray GetTargetUVLayerNamesFunc(); // Flags: Final|Native|Public|Const 0x7FF414CC3D38
		TArray GetSourceUVLayerNamesFunc(); // Flags: Final|Native|Public|Const 0x7FF414CC3C58
	};


	// Class MeshModelingToolsExp.BakeNormalMapToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UBakeNormalMapToolProperties : public UInteractiveToolPropertySet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeNormalMapToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeOcclusionMapToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UBakeOcclusionMapToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		int32_t OcclusionRays; // 0xA8(0x4)
		float MaxDistance; // 0xAC(0x4)
		float SpreadAngle; // 0xB0(0x4)
		float BiasAngle; // 0xB4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeOcclusionMapToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeCurvatureMapToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UBakeCurvatureMapToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		EBakeCurvatureTypeMode CurvatureType; // 0xA8(0x4)
		EBakeCurvatureColorMode ColorMapping; // 0xAC(0x4)
		float ColorRangeMultiplier; // 0xB0(0x4)
		float MinRangeMultiplier; // 0xB4(0x4)
		EBakeCurvatureClampMode Clamping; // 0xB8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeCurvatureMapToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeTexture2DProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UBakeTexture2DProperties : public UInteractiveToolPropertySet	
	{
	public:
		UTexture2D SourceTexture; // 0xA8(0x8)
		FString UVLayer; // 0xB0(0x10)
		TArray UVLayerNamesList; // 0xC0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeTexture2DProperties");
			return ret;
		}

		TArray GetUVLayerNamesFunc(); // Flags: Final|Native|Public|Const 0x7FF414CC3E18
	};


	// Class MeshModelingToolsExp.BakeMultiTexture2DProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x40 (0xE8 - 0xA8)
	class UBakeMultiTexture2DProperties : public UInteractiveToolPropertySet	
	{
	public:
		TArray MaterialIDSourceTextures; // 0xA8(0x10)
		FString UVLayer; // 0xB8(0x10)
		TArray UVLayerNamesList; // 0xC8(0x10)
		TArray AllSourceTextures; // 0xD8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeMultiTexture2DProperties");
			return ret;
		}

		TArray GetUVLayerNamesFunc(); // Flags: Final|Native|Public|Const 0x7FF414CC3EF8
	};


	// Class MeshModelingToolsExp.BakeVisualizationProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UBakeVisualizationProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bPreviewAsMaterial; // 0xA8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		float Brightness; // 0xAC(0x4)
		float AOMultiplier; // 0xB0(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeVisualizationProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ExtrudeMeshSelectionToolBuilder
	// Inherited from USingleTargetWithSelectionToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UExtrudeMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ExtrudeMeshSelectionToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ExtrudeMeshSelectionToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UExtrudeMeshSelectionToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		EExtrudeMeshSelectionInteractionMode InputMode; // 0xA8(0x1)
		unsigned char UnknownData05_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		double ExtrudeDistance; // 0xB0(0x8)
		EExtrudeMeshSelectionRegionModifierMode RegionMode; // 0xB8(0x1)
		unsigned char UnknownData06_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		int32_t NumSubdivisions; // 0xBC(0x4)
		double CreaseAngle; // 0xC0(0x8)
		double RaycastMaxDistance; // 0xC8(0x8)
		bool bShellsToSolids; // 0xD0(0x1)
		bool bInferGroupsFromNbrs; // 0xD1(0x1)
		bool bGroupPerSubdivision; // 0xD2(0x1)
		bool bReplaceSelectionGroups; // 0xD3(0x1)
		unsigned char UnknownData07_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		double UVScale; // 0xD8(0x8)
		bool bUVIslandPerGroup; // 0xE0(0x1)
		bool bInferMaterialID; // 0xE1(0x1)
		unsigned char UnknownData08_6[0x2]; // 0xE2(0x2) UNKNOWN PROPERTY
		int32_t SetMaterialID; // 0xE4(0x4)
		bool bShowInputMaterials; // 0xE8(0x1)
		unsigned char UnknownData09_7[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ExtrudeMeshSelectionToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ExtrudeMeshSelectionTool
	// Inherited from USingleTargetWithSelectionTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x748 (0x868 - 0x120)
	class UExtrudeMeshSelectionTool : public USingleTargetWithSelectionTool	
	{
	public:
		UExtrudeMeshSelectionToolProperties ExtrudeProperties; // 0x120(0x8)
		unsigned char UnknownData01_6[0x720]; // 0x128(0x720) UNKNOWN PROPERTY
		UPreviewMesh SourcePreview; // 0x848(0x8)
		UMeshOpPreviewWithBackgroundCompute EditCompute; // 0x850(0x8)
		UCombinedTransformGizmo TransformGizmo; // 0x858(0x8)
		UTransformProxy TransformProxy; // 0x860(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ExtrudeMeshSelectionTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshSculptBrushOpProps
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshSculptBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BaseKelvinletBrushOpProps
	// Inherited from UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps	
	{
	public:
		float Stiffness; // 0xA8(0x4)
		float Incompressiblity; // 0xAC(0x4)
		int32_t BrushSteps; // 0xB0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BaseKelvinletBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ScaleKelvinletBrushOpProps
	// Inherited from UBaseKelvinletBrushOpProps -> UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xC0 - 0xB8)
	class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps	
	{
	public:
		float Strength; // 0xB8(0x4)
		float Falloff; // 0xBC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ScaleKelvinletBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PullKelvinletBrushOpProps
	// Inherited from UBaseKelvinletBrushOpProps -> UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xC0 - 0xB8)
	class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps	
	{
	public:
		float Falloff; // 0xB8(0x4)
		float Depth; // 0xBC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PullKelvinletBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SharpPullKelvinletBrushOpProps
	// Inherited from UBaseKelvinletBrushOpProps -> UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xC0 - 0xB8)
	class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps	
	{
	public:
		float Falloff; // 0xB8(0x4)
		float Depth; // 0xBC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SharpPullKelvinletBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.TwistKelvinletBrushOpProps
	// Inherited from UBaseKelvinletBrushOpProps -> UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xC0 - 0xB8)
	class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps	
	{
	public:
		float Strength; // 0xB8(0x4)
		float Falloff; // 0xBC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.TwistKelvinletBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.GroupEraseBrushOpProps
	// Inherited from UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UGroupEraseBrushOpProps : public UMeshSculptBrushOpProps	
	{
	public:
		int32_t Group; // 0xA8(0x4)
		bool bOnlyEraseCurrent; // 0xAC(0x1)
		unsigned char UnknownData01_7[0x43]; // 0xAD(0x43) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.GroupEraseBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.GroupPaintBrushOpProps
	// Inherited from UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UGroupPaintBrushOpProps : public UMeshSculptBrushOpProps	
	{
	public:
		int32_t Group; // 0xA8(0x4)
		bool bOnlyPaintUngrouped; // 0xAC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.GroupPaintBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.InflateBrushOpProps
	// Inherited from UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UInflateBrushOpProps : public UMeshSculptBrushOpProps	
	{
	public:
		float Strength; // 0xA8(0x4)
		float Falloff; // 0xAC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.InflateBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MoveBrushOpProps
	// Inherited from UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UMoveBrushOpProps : public UMeshSculptBrushOpProps	
	{
	public:
		float Strength; // 0xA8(0x4)
		float Falloff; // 0xAC(0x4)
		float Depth; // 0xB0(0x4)
		FModelingToolsAxisFilter AxisFilters; // 0xB4(0x3)
		unsigned char UnknownData01_7[0x1]; // 0xB7(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MoveBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PinchBrushOpProps
	// Inherited from UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UPinchBrushOpProps : public UMeshSculptBrushOpProps	
	{
	public:
		float Strength; // 0xA8(0x4)
		float Falloff; // 0xAC(0x4)
		float Depth; // 0xB0(0x4)
		bool bPerpDamping; // 0xB4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PinchBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BasePlaneBrushOpProps
	// Inherited from UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BasePlaneBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PlaneBrushOpProps
	// Inherited from UBasePlaneBrushOpProps -> UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UPlaneBrushOpProps : public UBasePlaneBrushOpProps	
	{
	public:
		float Strength; // 0xA8(0x4)
		float Falloff; // 0xAC(0x4)
		float Depth; // 0xB0(0x4)
		EPlaneBrushSideMode WhichSide; // 0xB4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PlaneBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ViewAlignedPlaneBrushOpProps
	// Inherited from UBasePlaneBrushOpProps -> UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps	
	{
	public:
		float Strength; // 0xA8(0x4)
		float Falloff; // 0xAC(0x4)
		float Depth; // 0xB0(0x4)
		EPlaneBrushSideMode WhichSide; // 0xB4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ViewAlignedPlaneBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.FixedPlaneBrushOpProps
	// Inherited from UBasePlaneBrushOpProps -> UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps	
	{
	public:
		float Strength; // 0xA8(0x4)
		float Falloff; // 0xAC(0x4)
		float Depth; // 0xB0(0x4)
		EPlaneBrushSideMode WhichSide; // 0xB4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.FixedPlaneBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.StandardSculptBrushOpProps
	// Inherited from UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps	
	{
	public:
		float Strength; // 0xA8(0x4)
		float Falloff; // 0xAC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.StandardSculptBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ViewAlignedSculptBrushOpProps
	// Inherited from UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps	
	{
	public:
		float Strength; // 0xA8(0x4)
		float Falloff; // 0xAC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ViewAlignedSculptBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SculptMaxBrushOpProps
	// Inherited from UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps	
	{
	public:
		float Strength; // 0xA8(0x4)
		float Falloff; // 0xAC(0x4)
		float MaxHeight; // 0xB0(0x4)
		bool bUseFixedHeight; // 0xB4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY
		float FixedHeight; // 0xB8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SculptMaxBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BaseSmoothBrushOpProps
	// Inherited from UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BaseSmoothBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SmoothBrushOpProps
	// Inherited from UBaseSmoothBrushOpProps -> UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class USmoothBrushOpProps : public UBaseSmoothBrushOpProps	
	{
	public:
		float Strength; // 0xA8(0x4)
		float Falloff; // 0xAC(0x4)
		bool bPreserveUVFlow; // 0xB0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SmoothBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SecondarySmoothBrushOpProps
	// Inherited from UBaseSmoothBrushOpProps -> UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps	
	{
	public:
		float Strength; // 0xA8(0x4)
		float Falloff; // 0xAC(0x4)
		bool bPreserveUVFlow; // 0xB0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SecondarySmoothBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SmoothFillBrushOpProps
	// Inherited from UBaseSmoothBrushOpProps -> UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps	
	{
	public:
		float Strength; // 0xA8(0x4)
		float Falloff; // 0xAC(0x4)
		bool bPreserveUVFlow; // 0xB0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SmoothFillBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.FlattenBrushOpProps
	// Inherited from UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UFlattenBrushOpProps : public UMeshSculptBrushOpProps	
	{
	public:
		float Strength; // 0xA8(0x4)
		float Falloff; // 0xAC(0x4)
		float Depth; // 0xB0(0x4)
		EPlaneBrushSideMode WhichSide; // 0xB4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.FlattenBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.EraseBrushOpProps
	// Inherited from UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UEraseBrushOpProps : public UMeshSculptBrushOpProps	
	{
	public:
		float Strength; // 0xA8(0x4)
		float Falloff; // 0xAC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.EraseBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VertexColorBaseBrushOpProps
	// Inherited from UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UVertexColorBaseBrushOpProps : public UMeshSculptBrushOpProps	
	{
	public:
		float Strength; // 0xA8(0x4)
		float Falloff; // 0xAC(0x4)
		EVertexColorPaintBrushOpBlendMode BlendMode; // 0xB0(0x4)
		bool bApplyFalloff; // 0xB4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VertexColorBaseBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VertexColorPaintBrushOpProps
	// Inherited from UVertexColorBaseBrushOpProps -> UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xC8 - 0xB8)
	class UVertexColorPaintBrushOpProps : public UVertexColorBaseBrushOpProps	
	{
	public:
		FLinearColor Color; // 0xB8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VertexColorPaintBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VertexColorSoftenBrushOpProps
	// Inherited from UVertexColorBaseBrushOpProps -> UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xB8 - 0xB8)
	class UVertexColorSoftenBrushOpProps : public UVertexColorBaseBrushOpProps	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VertexColorSoftenBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VertexColorSmoothBrushOpProps
	// Inherited from UVertexColorBaseBrushOpProps -> UMeshSculptBrushOpProps -> UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xB8 - 0xB8)
	class UVertexColorSmoothBrushOpProps : public UVertexColorBaseBrushOpProps	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VertexColorSmoothBrushOpProps");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.OffsetMeshSelectionToolBuilder
	// Inherited from USingleTargetWithSelectionToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UOffsetMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.OffsetMeshSelectionToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.OffsetMeshSelectionToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x38 (0xE0 - 0xA8)
	class UOffsetMeshSelectionToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		double OffsetDistance; // 0xA8(0x8)
		EOffsetMeshSelectionDirectionMode Direction; // 0xB0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xB1(0x3) UNKNOWN PROPERTY
		int32_t NumSubdivisions; // 0xB4(0x4)
		double CreaseAngle; // 0xB8(0x8)
		bool bShellsToSolids; // 0xC0(0x1)
		bool bInferGroupsFromNbrs; // 0xC1(0x1)
		bool bGroupPerSubdivision; // 0xC2(0x1)
		bool bReplaceSelectionGroups; // 0xC3(0x1)
		unsigned char UnknownData05_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		double UVScale; // 0xC8(0x8)
		bool bUVIslandPerGroup; // 0xD0(0x1)
		bool bInferMaterialID; // 0xD1(0x1)
		unsigned char UnknownData06_6[0x2]; // 0xD2(0x2) UNKNOWN PROPERTY
		int32_t SetMaterialID; // 0xD4(0x4)
		bool bShowInputMaterials; // 0xD8(0x1)
		unsigned char UnknownData07_7[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.OffsetMeshSelectionToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.OffsetMeshSelectionTool
	// Inherited from USingleTargetWithSelectionTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x738 (0x858 - 0x120)
	class UOffsetMeshSelectionTool : public USingleTargetWithSelectionTool	
	{
	public:
		UOffsetMeshSelectionToolProperties OffsetProperties; // 0x120(0x8)
		unsigned char UnknownData01_6[0x720]; // 0x128(0x720) UNKNOWN PROPERTY
		UPreviewMesh SourcePreview; // 0x848(0x8)
		UMeshOpPreviewWithBackgroundCompute EditCompute; // 0x850(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.OffsetMeshSelectionTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PatternToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UPatternToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PatternToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PatternToolSettings
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPatternToolSettings : public UInteractiveToolPropertySet	
	{
	public:
		int32_t Seed; // 0xA8(0x4)
		bool bProjectElementsDown; // 0xAC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		float ProjectionOffset; // 0xB0(0x4)
		bool bHideSources; // 0xB4(0x1)
		bool bUseRelativeTransforms; // 0xB5(0x1)
		bool bRandomlyPickElements; // 0xB6(0x1)
		EPatternToolShape Shape; // 0xB7(0x1)
		EPatternToolSingleAxis SingleAxis; // 0xB8(0x1)
		EPatternToolSinglePlane SinglePlane; // 0xB9(0x1)
		unsigned char UnknownData03_7[0x6]; // 0xBA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PatternToolSettings");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PatternTool_BoundingBoxSettings
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UPatternTool_BoundingBoxSettings : public UInteractiveToolPropertySet	
	{
	public:
		bool bIgnoreTransforms; // 0xA8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		float Adjustment; // 0xAC(0x4)
		bool bVisualize; // 0xB0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PatternTool_BoundingBoxSettings");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PatternTool_LinearSettings
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UPatternTool_LinearSettings : public UInteractiveToolPropertySet	
	{
	public:
		EPatternToolAxisSpacingMode SpacingMode; // 0xA8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		int32_t Count; // 0xAC(0x4)
		double StepSize; // 0xB0(0x8)
		double Extent; // 0xB8(0x8)
		bool bCentered; // 0xC0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PatternTool_LinearSettings");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PatternTool_GridSettings
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x38 (0xE0 - 0xA8)
	class UPatternTool_GridSettings : public UInteractiveToolPropertySet	
	{
	public:
		EPatternToolAxisSpacingMode SpacingX; // 0xA8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		int32_t CountX; // 0xAC(0x4)
		double StepSizeX; // 0xB0(0x8)
		double ExtentX; // 0xB8(0x8)
		bool bCenteredX; // 0xC0(0x1)
		EPatternToolAxisSpacingMode SpacingY; // 0xC1(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xC2(0x2) UNKNOWN PROPERTY
		int32_t CountY; // 0xC4(0x4)
		double StepSizeY; // 0xC8(0x8)
		double ExtentY; // 0xD0(0x8)
		bool bCenteredY; // 0xD8(0x1)
		unsigned char UnknownData05_7[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PatternTool_GridSettings");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PatternTool_RadialSettings
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x38 (0xE0 - 0xA8)
	class UPatternTool_RadialSettings : public UInteractiveToolPropertySet	
	{
	public:
		EPatternToolAxisSpacingMode SpacingMode; // 0xA8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		int32_t Count; // 0xAC(0x4)
		double StepSize; // 0xB0(0x8)
		double Radius; // 0xB8(0x8)
		double StartAngle; // 0xC0(0x8)
		double EndAngle; // 0xC8(0x8)
		double AngleShift; // 0xD0(0x8)
		bool bOriented; // 0xD8(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PatternTool_RadialSettings");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PatternTool_RotationSettings
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class UPatternTool_RotationSettings : public UInteractiveToolPropertySet	
	{
	public:
		bool bInterpolate; // 0xA8(0x1)
		bool bJitter; // 0xA9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY
		FRotator StartRotation; // 0xB0(0x18)
		FRotator EndRotation; // 0xC8(0x18)
		FRotator Jitter; // 0xE0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PatternTool_RotationSettings");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PatternTool_TranslationSettings
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class UPatternTool_TranslationSettings : public UInteractiveToolPropertySet	
	{
	public:
		bool bInterpolate; // 0xA8(0x1)
		bool bJitter; // 0xA9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY
		FVector StartTranslation; // 0xB0(0x18)
		FVector EndTranslation; // 0xC8(0x18)
		FVector Jitter; // 0xE0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PatternTool_TranslationSettings");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PatternTool_ScaleSettings
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class UPatternTool_ScaleSettings : public UInteractiveToolPropertySet	
	{
	public:
		bool bProportional; // 0xA8(0x1)
		bool bInterpolate; // 0xA9(0x1)
		bool bJitter; // 0xAA(0x1)
		unsigned char UnknownData01_6[0x5]; // 0xAB(0x5) UNKNOWN PROPERTY
		FVector StartScale; // 0xB0(0x18)
		FVector EndScale; // 0xC8(0x18)
		FVector Jitter; // 0xE0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PatternTool_ScaleSettings");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PatternTool_OutputSettings
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPatternTool_OutputSettings : public UInteractiveToolPropertySet	
	{
	public:
		bool bSeparateActors; // 0xA8(0x1)
		bool bConvertToDynamic; // 0xA9(0x1)
		bool bCreateISMCs; // 0xAA(0x1)
		bool bHaveStaticMeshes; // 0xAB(0x1)
		bool bEnableCreateISMCs; // 0xAC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PatternTool_OutputSettings");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PatternTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x3F8 (0x4B0 - 0xB8)
	class UPatternTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		UPatternToolSettings Settings; // 0xB8(0x8)
		UPatternTool_BoundingBoxSettings BoundingBoxSettings; // 0xC0(0x8)
		UPatternTool_LinearSettings LinearSettings; // 0xC8(0x8)
		UPatternTool_GridSettings GridSettings; // 0xD0(0x8)
		UPatternTool_RadialSettings RadialSettings; // 0xD8(0x8)
		UPatternTool_RotationSettings RotationSettings; // 0xE0(0x8)
		UPatternTool_TranslationSettings TranslationSettings; // 0xE8(0x8)
		UPatternTool_ScaleSettings ScaleSettings; // 0xF0(0x8)
		unsigned char UnknownData05_6[0x58]; // 0xF8(0x58) UNKNOWN PROPERTY
		UPatternTool_OutputSettings OutputSettings; // 0x150(0x8)
		unsigned char UnknownData06_6[0x48]; // 0x158(0x48) UNKNOWN PROPERTY
		UTransformProxy PatternGizmoProxy; // 0x1A0(0x8)
		UCombinedTransformGizmo PatternGizmo; // 0x1A8(0x8)
		unsigned char UnknownData07_6[0x18]; // 0x1B0(0x18) UNKNOWN PROPERTY
		UDragAlignmentMechanic DragAlignmentMechanic; // 0x1C8(0x8)
		UConstructionPlaneMechanic PlaneMechanic; // 0x1D0(0x8)
		unsigned char UnknownData08_6[0x1E0]; // 0x1D8(0x1E0) UNKNOWN PROPERTY
		TSet AllComponents; // 0x3B8(0x50)
		unsigned char UnknownData09_6[0xA0]; // 0x408(0xA0) UNKNOWN PROPERTY
		UPreviewGeometry PreviewGeometry; // 0x4A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PatternTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshConstraintProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UMeshConstraintProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bPreserveSharpEdges; // 0xA8(0x1)
		EMeshBoundaryConstraint MeshBoundaryConstraint; // 0xA9(0x1)
		EGroupBoundaryConstraint GroupBoundaryConstraint; // 0xAA(0x1)
		EMaterialBoundaryConstraint MaterialBoundaryConstraint; // 0xAB(0x1)
		bool bPreventNormalFlips; // 0xAC(0x1)
		bool bPreventTinyTriangles; // 0xAD(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xAE(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshConstraintProperties");
			return ret;
		}

		bool IsPreventTinyTrianglesEnabled(); // Flags: Native|Protected|Const 0x7FF414CC40B8
		bool IsPreventNormalFlipsEnabled(); // Flags: Native|Protected|Const 0x7FF414CC3FD8
	};


	// Class MeshModelingToolsExp.RemeshProperties
	// Inherited from UMeshConstraintProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB8 - 0xB0)
	class URemeshProperties : public UMeshConstraintProperties	
	{
	public:
		float SmoothingStrength; // 0xB0(0x4)
		bool bFlips; // 0xB4(0x1)
		bool bSplits; // 0xB5(0x1)
		bool bCollapses; // 0xB6(0x1)
		unsigned char UnknownData01_7[0x1]; // 0xB7(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RemeshProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RevolveSplineToolProperties
	// Inherited from URevolveProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x50 (0x168 - 0x118)
	class URevolveSplineToolProperties : public URevolveProperties	
	{
	public:
		ERevolveSplineSampleMode SampleMode; // 0x118(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x119(0x7) UNKNOWN PROPERTY
		double ErrorTolerance; // 0x120(0x8)
		double MaxSampleDistance; // 0x128(0x8)
		ERevolvePropertiesCapFillMode CapFillMode; // 0x130(0x1)
		bool bClosePathToAxis; // 0x131(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x132(0x6) UNKNOWN PROPERTY
		FVector AxisOrigin; // 0x138(0x18)
		FVector2D AxisOrientation; // 0x150(0x10)
		bool bResetAxisOnStart; // 0x160(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x161(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RevolveSplineToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RevolveSplineToolActionPropertySet
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class URevolveSplineToolActionPropertySet : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RevolveSplineToolActionPropertySet");
			return ret;
		}

		void ResetAxis(); // Flags: Final|Native|Public 0x7FF414CC4198
	};


	// Class MeshModelingToolsExp.BaseMeshFromSplinesTool
	// Inherited from UInteractiveTool -> UObject
	// Size: 0x68 (0x100 - 0x98)
	class UBaseMeshFromSplinesTool : public UInteractiveTool	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x98(0x10) UNKNOWN PROPERTY
		UCreateMeshObjectTypeProperties OutputTypeProperties; // 0xA8(0x8)
		UNewMeshMaterialProperties MaterialProperties; // 0xB0(0x8)
		UMeshOpPreviewWithBackgroundCompute Preview; // 0xB8(0x8)
		TWeakObjectPtr TargetWorld; // 0xC0(0x8)
		TArray ActorsWithSplines; // 0xC8(0x10)
		unsigned char UnknownData03_7[0x28]; // 0xD8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BaseMeshFromSplinesTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RevolveSplineTool
	// Inherited from UBaseMeshFromSplinesTool -> UInteractiveTool -> UObject
	// Size: 0x90 (0x190 - 0x100)
	class URevolveSplineTool : public UBaseMeshFromSplinesTool	
	{
	public:
		URevolveSplineToolProperties Settings; // 0x100(0x8)
		URevolveSplineToolActionPropertySet ToolActions; // 0x108(0x8)
		UConstructionPlaneMechanic PlaneMechanic; // 0x110(0x8)
		unsigned char UnknownData01_7[0x78]; // 0x118(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RevolveSplineTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BaseMeshFromSplinesToolBuilder
	// Inherited from UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBaseMeshFromSplinesToolBuilder : public UInteractiveToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BaseMeshFromSplinesToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RevolveSplineToolBuilder
	// Inherited from UBaseMeshFromSplinesToolBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class URevolveSplineToolBuilder : public UBaseMeshFromSplinesToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RevolveSplineToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.AddPatchToolBuilder
	// Inherited from UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAddPatchToolBuilder : public UInteractiveToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.AddPatchToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.AddPatchToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UAddPatchToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		float Width; // 0xA8(0x4)
		float Rotation; // 0xAC(0x4)
		int32_t Subdivisions; // 0xB0(0x4)
		float Shift; // 0xB4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.AddPatchToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.AddPatchTool
	// Inherited from USingleClickTool -> UInteractiveTool -> UObject
	// Size: 0x88 (0x128 - 0xA0)
	class UAddPatchTool : public USingleClickTool	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		UAddPatchToolProperties ShapeSettings; // 0xA8(0x8)
		UNewMeshMaterialProperties MaterialProperties; // 0xB0(0x8)
		UPreviewMesh PreviewMesh; // 0xB8(0x8)
		unsigned char UnknownData03_7[0x68]; // 0xC0(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.AddPatchTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.AlignObjectsToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAlignObjectsToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.AlignObjectsToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.AlignObjectsToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UAlignObjectsToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		EAlignObjectsAlignTypes AlignType; // 0xA8(0x4)
		EAlignObjectsAlignToOptions AlignTo; // 0xAC(0x4)
		EAlignObjectsBoxPoint BoxPosition; // 0xB0(0x4)
		bool bAlignX; // 0xB4(0x1)
		bool bAlignY; // 0xB5(0x1)
		bool bAlignZ; // 0xB6(0x1)
		unsigned char UnknownData01_7[0x1]; // 0xB7(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.AlignObjectsToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.AlignObjectsTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0xA0 (0x158 - 0xB8)
	class UAlignObjectsTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		UAlignObjectsToolProperties AlignProps; // 0xC0(0x8)
		unsigned char UnknownData03_7[0x90]; // 0xC8(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.AlignObjectsTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeMeshAttributeMapsToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBakeMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x90 (0x138 - 0xA8)
	class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		int32_t MapTypes; // 0xA8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FString MapPreview; // 0xB0(0x10)
		EBakeTextureResolution Resolution; // 0xC0(0x4)
		EBakeTextureBitDepth BitDepth; // 0xC4(0x4)
		EBakeTextureSamplesPerPixel SamplesPerPixel; // 0xC8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		UTexture2D SampleFilterMask; // 0xD0(0x8)
		TArray MapPreviewNamesList; // 0xD8(0x10)
		unsigned char UnknownData05_7[0x50]; // 0xE8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties");
			return ret;
		}

		TArray GetMapPreviewNamesFunc(); // Flags: Final|Native|Public 0x7FF414CC4278
	};


	// Class MeshModelingToolsExp.BakeMeshAttributeTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0xF0 (0x1A8 - 0xB8)
	class UBakeMeshAttributeTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0xB8(0x10) UNKNOWN PROPERTY
		UBakeOcclusionMapToolProperties OcclusionSettings; // 0xC8(0x8)
		UBakeCurvatureMapToolProperties CurvatureSettings; // 0xD0(0x8)
		UBakeTexture2DProperties TextureSettings; // 0xD8(0x8)
		UBakeMultiTexture2DProperties MultiTextureSettings; // 0xE0(0x8)
		UMaterialInstanceDynamic WorkingPreviewMaterial; // 0xE8(0x8)
		UMaterialInstanceDynamic ErrorPreviewMaterial; // 0xF0(0x8)
		unsigned char UnknownData03_7[0xB0]; // 0xF8(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeMeshAttributeTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeMeshAttributeMapsToolBase
	// Inherited from UBakeMeshAttributeTool -> UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x178 (0x320 - 0x1A8)
	class UBakeMeshAttributeMapsToolBase : public UBakeMeshAttributeTool	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x1A8(0x8) UNKNOWN PROPERTY
		UBakeVisualizationProperties VisualizationProps; // 0x1B0(0x8)
		UPreviewMesh PreviewMesh; // 0x1B8(0x8)
		UMaterialInstanceDynamic PreviewMaterial; // 0x1C0(0x8)
		UMaterialInstanceDynamic BentNormalPreviewMaterial; // 0x1C8(0x8)
		unsigned char UnknownData04_6[0x50]; // 0x1D0(0x50) UNKNOWN PROPERTY
		TMap CachedMaps; // 0x220(0x50)
		unsigned char UnknownData05_6[0x98]; // 0x270(0x98) UNKNOWN PROPERTY
		UTexture2D EmptyNormalMap; // 0x308(0x8)
		UTexture2D EmptyColorMapBlack; // 0x310(0x8)
		UTexture2D EmptyColorMapWhite; // 0x318(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolBase");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeMeshAttributeMapsTool
	// Inherited from UBakeMeshAttributeMapsToolBase -> UBakeMeshAttributeTool -> UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x70 (0x390 - 0x320)
	class UBakeMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase	
	{
	public:
		UBakeInputMeshProperties InputMeshSettings; // 0x320(0x8)
		UBakeMeshAttributeMapsToolProperties Settings; // 0x328(0x8)
		UBakeMeshAttributeMapsResultToolProperties ResultSettings; // 0x330(0x8)
		unsigned char UnknownData01_7[0x58]; // 0x338(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeMeshAttributeMapsTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeMeshAttributeMapsResultToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class UBakeMeshAttributeMapsResultToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		TMap Result; // 0xA8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeMeshAttributeMapsResultToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeMeshAttributeVertexToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBakeMeshAttributeVertexToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeMeshAttributeVertexToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeMeshAttributeVertexToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UBakeMeshAttributeVertexToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		EBakeVertexOutput OutputMode; // 0xA8(0x4)
		int32_t OutputType; // 0xAC(0x4)
		int32_t OutputTypeR; // 0xB0(0x4)
		int32_t OutputTypeG; // 0xB4(0x4)
		int32_t OutputTypeB; // 0xB8(0x4)
		int32_t OutputTypeA; // 0xBC(0x4)
		EBakeVertexChannel PreviewMode; // 0xC0(0x4)
		bool bSplitAtNormalSeams; // 0xC4(0x1)
		bool bSplitAtUVSeams; // 0xC5(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xC6(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeMeshAttributeVertexToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeMeshAttributeVertexTool
	// Inherited from UBakeMeshAttributeTool -> UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x100 (0x2A8 - 0x1A8)
	class UBakeMeshAttributeVertexTool : public UBakeMeshAttributeTool	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x1A8(0x8) UNKNOWN PROPERTY
		UBakeInputMeshProperties InputMeshSettings; // 0x1B0(0x8)
		UBakeMeshAttributeVertexToolProperties Settings; // 0x1B8(0x8)
		UPreviewMesh PreviewMesh; // 0x1C0(0x8)
		UMaterialInstanceDynamic PreviewMaterial; // 0x1C8(0x8)
		UMaterialInstanceDynamic PreviewAlphaMaterial; // 0x1D0(0x8)
		unsigned char UnknownData03_7[0xD0]; // 0x1D8(0xD0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeMeshAttributeVertexTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBakeMultiMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x90 (0x138 - 0xA8)
	class UBakeMultiMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		int32_t MapTypes; // 0xA8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FString MapPreview; // 0xB0(0x10)
		EBakeTextureResolution Resolution; // 0xC0(0x4)
		EBakeTextureBitDepth BitDepth; // 0xC4(0x4)
		EBakeTextureSamplesPerPixel SamplesPerPixel; // 0xC8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		UTexture2D SampleFilterMask; // 0xD0(0x8)
		TArray MapPreviewNamesList; // 0xD8(0x10)
		unsigned char UnknownData05_7[0x50]; // 0xE8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties");
			return ret;
		}

		TArray GetMapPreviewNamesFunc(); // Flags: Final|Native|Public 0x7FF414CC4358
	};


	// Class MeshModelingToolsExp.BakeMultiMeshInputToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class UBakeMultiMeshInputToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		UStaticMesh TargetStaticMesh; // 0xA8(0x8)
		USkeletalMesh TargetSkeletalMesh; // 0xB0(0x8)
		AActor TargetDynamicMesh; // 0xB8(0x8)
		FString TargetUVLayer; // 0xC0(0x10)
		TArray SourceMeshes; // 0xD0(0x10)
		float ProjectionDistance; // 0xE0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		TArray TargetUVLayerNamesList; // 0xE8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeMultiMeshInputToolProperties");
			return ret;
		}

		TArray GetTargetUVLayerNamesFunc(); // Flags: Final|Native|Public|Const 0x7FF414CC4438
	};


	// Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsTool
	// Inherited from UBakeMeshAttributeMapsToolBase -> UBakeMeshAttributeTool -> UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0xA8 (0x3C8 - 0x320)
	class UBakeMultiMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase	
	{
	public:
		UBakeMultiMeshAttributeMapsToolProperties Settings; // 0x320(0x8)
		UBakeMultiMeshInputToolProperties InputMeshSettings; // 0x328(0x8)
		UBakeMeshAttributeMapsResultToolProperties ResultSettings; // 0x330(0x8)
		unsigned char UnknownData01_7[0x90]; // 0x338(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeTransformToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBakeTransformToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeTransformToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeTransformToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UBakeTransformToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bApplyToAllLODs; // 0xA8(0x1)
		bool bBakeRotation; // 0xA9(0x1)
		EBakeScaleMethod BakeScale; // 0xAA(0x1)
		bool bRecenterPivot; // 0xAB(0x1)
		bool bAllowNoScale; // 0xAC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeTransformToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.BakeTransformTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x20 (0xD8 - 0xB8)
	class UBakeTransformTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		UBakeTransformToolProperties BasicProperties; // 0xC0(0x8)
		unsigned char UnknownData03_7[0x10]; // 0xC8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BakeTransformTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ConvertMeshesToolBuilder
	// Inherited from UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UConvertMeshesToolBuilder : public UInteractiveToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ConvertMeshesToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ConvertMeshesToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UConvertMeshesToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bTransferMaterials; // 0xA8(0x1)
		bool bShowTransferMaterials; // 0xA9(0x1)
		bool bTransferCollision; // 0xAA(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xAB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ConvertMeshesToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ConvertMeshesTool
	// Inherited from UInteractiveTool -> UObject
	// Size: 0x30 (0xC8 - 0x98)
	class UConvertMeshesTool : public UInteractiveTool	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		UConvertMeshesToolProperties BasicProperties; // 0xA0(0x8)
		UCreateMeshObjectTypeProperties OutputTypeProperties; // 0xA8(0x8)
		TArray Inputs; // 0xB0(0x10)
		unsigned char UnknownData03_7[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ConvertMeshesTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ConvertToPolygonsToolBuilder
	// Inherited from USingleTargetWithSelectionToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UConvertToPolygonsToolBuilder : public USingleTargetWithSelectionToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ConvertToPolygonsToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ConvertToPolygonsToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x60 (0x108 - 0xA8)
	class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		EConvertToPolygonsMode ConversionMode; // 0xA8(0x4)
		float AngleTolerance; // 0xAC(0x4)
		bool bUseAverageGroupNormal; // 0xB0(0x1)
		unsigned char UnknownData06_6[0x3]; // 0xB1(0x3) UNKNOWN PROPERTY
		int32_t NumPoints; // 0xB4(0x4)
		bool bSplitExisting; // 0xB8(0x1)
		bool bNormalWeighted; // 0xB9(0x1)
		unsigned char UnknownData07_6[0x2]; // 0xBA(0x2) UNKNOWN PROPERTY
		float NormalWeighting; // 0xBC(0x4)
		float QuadAdjacencyWeight; // 0xC0(0x4)
		float QuadMetricClamp; // 0xC4(0x4)
		int32_t QuadSearchRounds; // 0xC8(0x4)
		bool bRespectUVSeams; // 0xCC(0x1)
		bool bRespectHardNormals; // 0xCD(0x1)
		unsigned char UnknownData08_6[0x2]; // 0xCE(0x2) UNKNOWN PROPERTY
		int32_t MinGroupSize; // 0xD0(0x4)
		bool bShowGroupColors; // 0xD4(0x1)
		bool bCalculateNormals; // 0xD5(0x1)
		unsigned char UnknownData09_6[0x2]; // 0xD6(0x2) UNKNOWN PROPERTY
		FName GroupLayer; // 0xD8(0x4)
		unsigned char UnknownData10_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		TArray OptionsList; // 0xE0(0x10)
		bool bShowNewLayerName; // 0xF0(0x1)
		unsigned char UnknownData11_6[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
		FString NewLayerName; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ConvertToPolygonsToolProperties");
			return ret;
		}

		TArray GetGroupOptionsList(); // Flags: Final|Native|Public 0x7FF414CC4518
	};


	// Class MeshModelingToolsExp.ConvertToPolygonsOperatorFactory
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UConvertToPolygonsOperatorFactory : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UConvertToPolygonsTool ConvertToPolygonsTool; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ConvertToPolygonsOperatorFactory");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ConvertToPolygonsTool
	// Inherited from USingleTargetWithSelectionTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x90 (0x1B0 - 0x120)
	class UConvertToPolygonsTool : public USingleTargetWithSelectionTool	
	{
	public:
		UConvertToPolygonsToolProperties Settings; // 0x120(0x8)
		UPolygroupLayersProperties CopyFromLayerProperties; // 0x128(0x8)
		UMeshOpPreviewWithBackgroundCompute PreviewCompute; // 0x130(0x8)
		UPreviewGeometry PreviewGeometry; // 0x138(0x8)
		UPreviewMesh UnmodifiedAreaPreviewMesh; // 0x140(0x8)
		unsigned char UnknownData01_7[0x68]; // 0x148(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ConvertToPolygonsTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.CubeGridToolBuilder
	// Inherited from UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCubeGridToolBuilder : public UInteractiveToolWithToolTargetsBuilder	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.CubeGridToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.CubeGridToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x100 (0x1A8 - 0xA8)
	class UCubeGridToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		FVector GridFrameOrigin; // 0xA8(0x18)
		FRotator GridFrameOrientation; // 0xC0(0x18)
		bool bShowGrid; // 0xD8(0x1)
		bool bShowGizmo; // 0xD9(0x1)
		unsigned char UnknownData07_6[0xE]; // 0xDA(0xE) UNKNOWN PROPERTY
		char GridPower; // 0xE8(0x1)
		unsigned char UnknownData08_6[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY
		double CurrentBlockSize; // 0xF0(0x8)
		int32_t BlocksPerStep; // 0xF8(0x4)
		bool bPowerOfTwoBlockSizes; // 0xFC(0x1)
		unsigned char UnknownData09_6[0x3]; // 0xFD(0x3) UNKNOWN PROPERTY
		double BlockBaseSize; // 0x100(0x8)
		bool bCrosswiseDiagonal; // 0x108(0x1)
		bool bKeepSideGroups; // 0x109(0x1)
		bool bShowSelectionMeasurements; // 0x10A(0x1)
		unsigned char UnknownData10_6[0x5]; // 0x10B(0x5) UNKNOWN PROPERTY
		double PlaneTolerance; // 0x110(0x8)
		bool bHitUnrelatedGeometry; // 0x118(0x1)
		bool bHitGridGroundPlaneIfCloser; // 0x119(0x1)
		unsigned char UnknownData11_6[0x2]; // 0x11A(0x2) UNKNOWN PROPERTY
		ECubeGridToolFaceSelectionMode FaceSelectionMode; // 0x11C(0x4)
		FString ToggleCornerMode; // 0x120(0x10)
		FString PushPull; // 0x130(0x10)
		FString ResizeGrid; // 0x140(0x10)
		unsigned char UnknownData12_6[0x10]; // 0x150(0x10) UNKNOWN PROPERTY
		FString FlipSelection; // 0x160(0x10)
		FString GridGizmo; // 0x170(0x10)
		FString QuickShiftGizmo; // 0x180(0x10)
		FString AlignGizmo; // 0x190(0x10)
		bool bInCornerMode; // 0x1A0(0x1)
		bool bAllowedToEditGrid; // 0x1A1(0x1)
		unsigned char UnknownData13_7[0x6]; // 0x1A2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.CubeGridToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.CubeGridToolActions
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UCubeGridToolActions : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		AActor GridSourceActor; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.CubeGridToolActions");
			return ret;
		}

		void SlideForward(); // Flags: Final|Native|Public 0x7FF414CC4C18
		void SlideBack(); // Flags: Final|Native|Public 0x7FF414CC4B38
		void ResetGridFromActor(); // Flags: Final|Native|Public 0x7FF414CC4A58
		void Push(); // Flags: Final|Native|Public 0x7FF414CC4978
		void Pull(); // Flags: Final|Native|Public 0x7FF414CC4898
		void Flip(); // Flags: Final|Native|Public 0x7FF414CC47B8
		void CornerMode(); // Flags: Final|Native|Public 0x7FF414CC46D8
		void AcceptAndStartNew(); // Flags: Final|Native|Public 0x7FF414CC45F8
	};


	// Class MeshModelingToolsExp.CubeGridTool
	// Inherited from UInteractiveTool -> UObject
	// Size: 0x588 (0x620 - 0x98)
	class UCubeGridTool : public UInteractiveTool	
	{
	public:
		unsigned char UnknownData03_3[0x28]; // 0x98(0x28) UNKNOWN PROPERTY
		UCombinedTransformGizmo GridGizmo; // 0xC0(0x8)
		UDragAlignmentMechanic GridGizmoAlignmentMechanic; // 0xC8(0x8)
		UTransformProxy GridGizmoTransformProxy; // 0xD0(0x8)
		UPreviewGeometry LineSets; // 0xD8(0x8)
		UClickDragInputBehavior ClickDragBehavior; // 0xE0(0x8)
		UMouseHoverBehavior HoverBehavior; // 0xE8(0x8)
		ULocalSingleClickInputBehavior CtrlMiddleClickBehavior; // 0xF0(0x8)
		ULocalClickDragInputBehavior MiddleClickDragBehavior; // 0xF8(0x8)
		UCubeGridToolProperties Settings; // 0x100(0x8)
		UCubeGridToolActions ToolActions; // 0x108(0x8)
		UNewMeshMaterialProperties MaterialProperties; // 0x110(0x8)
		UCreateMeshObjectTypeProperties OutputTypeProperties; // 0x118(0x8)
		UToolTarget Target; // 0x120(0x8)
		unsigned char UnknownData04_6[0x180]; // 0x128(0x180) UNKNOWN PROPERTY
		UMeshOpPreviewWithBackgroundCompute Preview; // 0x2A8(0x8)
		unsigned char UnknownData05_7[0x370]; // 0x2B0(0x370) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.CubeGridTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DeformMeshPolygonsToolBuilder
	// Inherited from UMeshSurfacePointMeshEditingToolBuilder -> UMeshSurfacePointToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DeformMeshPolygonsToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DeformMeshPolygonsTransformProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet	
	{
	public:
		EGroupTopologyDeformationStrategy DeformationStrategy; // 0xA8(0x1)
		EQuickTransformerMode TransformMode; // 0xA9(0x1)
		bool bSelectFaces; // 0xAA(0x1)
		bool bSelectEdges; // 0xAB(0x1)
		bool bSelectVertices; // 0xAC(0x1)
		bool bShowWireframe; // 0xAD(0x1)
		unsigned char UnknownData03_6[0x2]; // 0xAE(0x2) UNKNOWN PROPERTY
		EWeightScheme SelectedWeightScheme; // 0xB0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		double HandleWeight; // 0xB8(0x8)
		bool bPostFixHandles; // 0xC0(0x1)
		unsigned char UnknownData05_7[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DeformMeshPolygonsTransformProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DeformMeshPolygonsTool
	// Inherited from UMeshSurfacePointTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x1700 (0x1800 - 0x100)
	class UDeformMeshPolygonsTool : public UMeshSurfacePointTool	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x100(0x10) UNKNOWN PROPERTY
		AInternalToolFrameworkActor PreviewMeshActor; // 0x110(0x8)
		UDynamicMeshComponent DynamicMeshComponent; // 0x118(0x8)
		UDeformMeshPolygonsTransformProperties TransformProps; // 0x120(0x8)
		unsigned char UnknownData03_7[0x16D8]; // 0x128(0x16D8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DeformMeshPolygonsTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DisplaceMeshCommonProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0xA8(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DisplaceMeshCommonProperties");
			return ret;
		}

		TArray GetWeightMapsFunc(); // Flags: Final|Native|Public 0x7FF414CC4CF8
	};


	// Class MeshModelingToolsExp.SelectiveTessellationProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class USelectiveTessellationProperties : public UInteractiveToolPropertySet	
	{
	public:
		EDisplaceMeshToolTriangleSelectionType SelectionType; // 0xA8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		FName ActiveMaterial; // 0xAC(0x4)
		TArray MaterialIDList; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SelectiveTessellationProperties");
			return ret;
		}

		void GetMaterialIDsFunc(); // Flags: Final|Native|Public 0x7FF414CC4DD8
	};


	// Class MeshModelingToolsExp.DisplaceMeshTextureMapProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet	
	{
	public:
		UTexture2D DisplacementMap; // 0xA8(0x8)
		EDisplaceMeshToolChannelType Channel; // 0xB0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xB1(0x3) UNKNOWN PROPERTY
		float DisplacementMapBaseValue; // 0xB4(0x4)
		FVector2D UVScale; // 0xB8(0x10)
		FVector2D UVOffset; // 0xC8(0x10)
		bool bApplyAdjustmentCurve; // 0xD8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY
		UCurveFloat AdjustmentCurve; // 0xE0(0x8)
		bool bRecalcNormals; // 0xE8(0x1)
		unsigned char UnknownData05_7[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DisplaceMeshTextureMapProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DisplaceMeshDirectionalFilterProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bEnableFilter; // 0xA8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		FVector FilterDirection; // 0xB0(0x18)
		float FilterWidth; // 0xC8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DisplaceMeshDirectionalFilterProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DisplaceMeshPerlinNoiseProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet	
	{
	public:
		TArray PerlinLayerProperties; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DisplaceMeshPerlinNoiseProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DisplaceMeshSineWaveProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet	
	{
	public:
		float SineWaveFrequency; // 0xA8(0x4)
		float SineWavePhaseShift; // 0xAC(0x4)
		FVector SineWaveDirection; // 0xB0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DisplaceMeshSineWaveProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DisplaceMeshToolBuilder
	// Inherited from USingleTargetWithSelectionToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDisplaceMeshToolBuilder : public USingleTargetWithSelectionToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DisplaceMeshToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DisplaceMeshTool
	// Inherited from USingleTargetWithSelectionTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x3B0 (0x4D0 - 0x120)
	class UDisplaceMeshTool : public USingleTargetWithSelectionTool	
	{
	public:
		UDisplaceMeshCommonProperties CommonProperties; // 0x120(0x8)
		UDisplaceMeshDirectionalFilterProperties DirectionalFilterProperties; // 0x128(0x8)
		UDisplaceMeshTextureMapProperties TextureMapProperties; // 0x130(0x8)
		UDisplaceMeshPerlinNoiseProperties NoiseProperties; // 0x138(0x8)
		UDisplaceMeshSineWaveProperties SineWaveProperties; // 0x140(0x8)
		USelectiveTessellationProperties SelectiveTessellationProperties; // 0x148(0x8)
		UCurveFloat ActiveContrastCurveTarget; // 0x150(0x8)
		UMeshStatisticsProperties MeshStatistics; // 0x158(0x8)
		unsigned char UnknownData02_6[0x348]; // 0x160(0x348) UNKNOWN PROPERTY
		AInternalToolFrameworkActor PreviewMeshActor; // 0x4A8(0x8)
		UDynamicMeshComponent DynamicMeshComponent; // 0x4B0(0x8)
		unsigned char UnknownData03_7[0x18]; // 0x4B8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DisplaceMeshTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DrawPolyPathToolBuilder
	// Inherited from UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDrawPolyPathToolBuilder : public UInteractiveToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DrawPolyPathToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DrawPolyPathProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UDrawPolyPathProperties : public UInteractiveToolPropertySet	
	{
	public:
		EDrawPolyPathWidthMode WidthMode; // 0xA8(0x4)
		float Width; // 0xAC(0x4)
		bool bRoundedCorners; // 0xB0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xB1(0x3) UNKNOWN PROPERTY
		EDrawPolyPathRadiusMode RadiusMode; // 0xB4(0x4)
		float CornerRadius; // 0xB8(0x4)
		int32_t RadialSlices; // 0xBC(0x4)
		bool bSinglePolyGroup; // 0xC0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		EDrawPolyPathExtrudeMode ExtrudeMode; // 0xC4(0x4)
		float ExtrudeHeight; // 0xC8(0x4)
		float RampStartRatio; // 0xCC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DrawPolyPathProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DrawPolyPathExtrudeProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet	
	{
	public:
		EDrawPolyPathExtrudeDirection Direction; // 0xA8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DrawPolyPathExtrudeProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DrawPolyPathTool
	// Inherited from UInteractiveTool -> UObject
	// Size: 0x1E8 (0x280 - 0x98)
	class UDrawPolyPathTool : public UInteractiveTool	
	{
	public:
		unsigned char UnknownData04_3[0x18]; // 0x98(0x18) UNKNOWN PROPERTY
		UCreateMeshObjectTypeProperties OutputTypeProperties; // 0xB0(0x8)
		UDrawPolyPathProperties TransformProps; // 0xB8(0x8)
		UDrawPolyPathExtrudeProperties ExtrudeProperties; // 0xC0(0x8)
		UNewMeshMaterialProperties MaterialProperties; // 0xC8(0x8)
		unsigned char UnknownData05_6[0xC0]; // 0xD0(0xC0) UNKNOWN PROPERTY
		UConstructionPlaneMechanic PlaneMechanic; // 0x190(0x8)
		unsigned char UnknownData06_6[0xC0]; // 0x198(0xC0) UNKNOWN PROPERTY
		UPolyEditPreviewMesh EditPreview; // 0x258(0x8)
		UPlaneDistanceFromHitMechanic ExtrudeHeightMechanic; // 0x260(0x8)
		USpatialCurveDistanceMechanic CurveDistMechanic; // 0x268(0x8)
		UCollectSurfacePathMechanic SurfacePathMechanic; // 0x270(0x8)
		unsigned char UnknownData07_7[0x8]; // 0x278(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DrawPolyPathTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DynamicMeshBrushTool
	// Inherited from UBaseBrushTool -> UMeshSurfacePointTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x48 (0x2D8 - 0x290)
	class UDynamicMeshBrushTool : public UBaseBrushTool	
	{
	public:
		UPreviewMesh PreviewMesh; // 0x290(0x8)
		unsigned char UnknownData01_7[0x40]; // 0x298(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DynamicMeshBrushTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DynamicMeshSculptToolBuilder
	// Inherited from UMeshSurfacePointMeshEditingToolBuilder -> UMeshSurfacePointToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DynamicMeshSculptToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DynamicMeshBrushProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UDynamicMeshBrushProperties : public UInteractiveToolPropertySet	
	{
	public:
		FBrushToolRadius BrushSize; // 0xA8(0x14)
		float BrushFalloffAmount; // 0xBC(0x4)
		float Depth; // 0xC0(0x4)
		bool bHitBackFaces; // 0xC4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xC5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DynamicMeshBrushProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DynamicMeshBrushSculptProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UDynamicMeshBrushSculptProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bIsRemeshingEnabled; // 0xA8(0x1)
		EDynamicMeshSculptBrushType PrimaryBrushType; // 0xA9(0x1)
		unsigned char UnknownData03_6[0x2]; // 0xAA(0x2) UNKNOWN PROPERTY
		float PrimaryBrushSpeed; // 0xAC(0x4)
		bool bPreserveUVFlow; // 0xB0(0x1)
		bool bFreezeTarget; // 0xB1(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xB2(0x2) UNKNOWN PROPERTY
		float SmoothBrushSpeed; // 0xB4(0x4)
		bool bDetailPreservingSmooth; // 0xB8(0x1)
		unsigned char UnknownData05_7[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DynamicMeshBrushSculptProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DynamicSculptToolActions
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UDynamicSculptToolActions : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DynamicSculptToolActions");
			return ret;
		}

		void DiscardAttributes(); // Flags: Final|Native|Public 0x7FF414CC4EB8
	};


	// Class MeshModelingToolsExp.BrushRemeshProperties
	// Inherited from URemeshProperties -> UMeshConstraintProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xC8 - 0xB8)
	class UBrushRemeshProperties : public URemeshProperties	
	{
	public:
		bool bEnableRemeshing; // 0xB8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		int32_t TriangleSize; // 0xBC(0x4)
		int32_t PreserveDetail; // 0xC0(0x4)
		int32_t Iterations; // 0xC4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.BrushRemeshProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.FixedPlaneBrushProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bPropertySetEnabled; // 0xA8(0x1)
		bool bShowGizmo; // 0xA9(0x1)
		unsigned char UnknownData02_6[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY
		FVector Position; // 0xB0(0x18)
		unsigned char UnknownData03_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		FQuat Rotation; // 0xD0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.FixedPlaneBrushProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DynamicMeshSculptTool
	// Inherited from UMeshSurfacePointTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0xF20 (0x1020 - 0x100)
	class UDynamicMeshSculptTool : public UMeshSurfacePointTool	
	{
	public:
		UDynamicMeshBrushProperties BrushProperties; // 0x100(0x8)
		UDynamicMeshBrushSculptProperties SculptProperties; // 0x108(0x8)
		USculptMaxBrushProperties SculptMaxBrushProperties; // 0x110(0x8)
		UKelvinBrushProperties KelvinBrushProperties; // 0x118(0x8)
		UBrushRemeshProperties RemeshProperties; // 0x120(0x8)
		UFixedPlaneBrushProperties GizmoProperties; // 0x128(0x8)
		UMeshEditingViewProperties ViewProperties; // 0x130(0x8)
		UDynamicSculptToolActions SculptToolActions; // 0x138(0x8)
		unsigned char UnknownData03_6[0x60]; // 0x140(0x60) UNKNOWN PROPERTY
		UBrushStampIndicator BrushIndicator; // 0x1A0(0x8)
		UMaterialInstanceDynamic BrushIndicatorMaterial; // 0x1A8(0x8)
		UPreviewMesh BrushIndicatorMesh; // 0x1B0(0x8)
		AInternalToolFrameworkActor PreviewMeshActor; // 0x1B8(0x8)
		UOctreeDynamicMeshComponent DynamicMeshComponent; // 0x1C0(0x8)
		UMaterialInstanceDynamic ActiveOverrideMaterial; // 0x1C8(0x8)
		unsigned char UnknownData04_6[0xE38]; // 0x1D0(0xE38) UNKNOWN PROPERTY
		UCombinedTransformGizmo PlaneTransformGizmo; // 0x1008(0x8)
		UTransformProxy PlaneTransformProxy; // 0x1010(0x8)
		unsigned char UnknownData05_7[0x8]; // 0x1018(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DynamicMeshSculptTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.EditNormalsToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEditNormalsToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.EditNormalsToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.EditNormalsToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UEditNormalsToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bRecomputeNormals; // 0xA8(0x1)
		ENormalCalculationMethod NormalCalculationMethod; // 0xA9(0x1)
		bool bFixInconsistentNormals; // 0xAA(0x1)
		bool bInvertNormals; // 0xAB(0x1)
		ESplitNormalMethod SplitNormalMethod; // 0xAC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		float SharpEdgeAngleThreshold; // 0xB0(0x4)
		bool bAllowSharpVertices; // 0xB4(0x1)
		bool bToolHasSelection; // 0xB5(0x1)
		unsigned char UnknownData03_7[0x2]; // 0xB6(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.EditNormalsToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.EditNormalsOperatorFactory
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UEditNormalsOperatorFactory : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UEditNormalsTool Tool; // 0x30(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.EditNormalsOperatorFactory");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.EditNormalsTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x208 (0x2C0 - 0xB8)
	class UEditNormalsTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		UEditNormalsToolProperties BasicProperties; // 0xC0(0x8)
		UPolygroupLayersProperties PolygroupLayerProperties; // 0xC8(0x8)
		TArray Previews; // 0xD0(0x10)
		unsigned char UnknownData04_6[0x70]; // 0xE0(0x70) UNKNOWN PROPERTY
		UGeometrySelectionVisualizationProperties GeometrySelectionVizProperties; // 0x150(0x8)
		UPreviewGeometry GeometrySelectionViz; // 0x158(0x8)
		unsigned char UnknownData05_7[0x160]; // 0x160(0x160) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.EditNormalsTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.EditPivotToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEditPivotToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.EditPivotToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.EditPivotToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UEditPivotToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bApplyToAllLODs; // 0xA8(0x1)
		bool bEnableSnapDragging; // 0xA9(0x1)
		EEditPivotSnapDragRotationMode RotationMode; // 0xAA(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xAB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.EditPivotToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.EditPivotToolActionPropertySet
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		bool bUseWorldBox; // 0xB0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.EditPivotToolActionPropertySet");
			return ret;
		}

		void WorldOrigin(); // Flags: Final|Native|Public 0x7FF414CC55B8
		void Top(); // Flags: Final|Native|Public 0x7FF414CC54D8
		void Right(); // Flags: Final|Native|Public 0x7FF414CC53F8
		void Left(); // Flags: Final|Native|Public 0x7FF414CC5318
		void Front(); // Flags: Final|Native|Public 0x7FF414CC5238
		void Center(); // Flags: Final|Native|Public 0x7FF414CC5158
		void Bottom(); // Flags: Final|Native|Public 0x7FF414CC5078
		void Back(); // Flags: Final|Native|Public 0x7FF414CC4F98
	};


	// Class MeshModelingToolsExp.EditPivotTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x1F8 (0x2B0 - 0xB8)
	class UEditPivotTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0xB8(0x10) UNKNOWN PROPERTY
		UEditPivotToolProperties TransformProps; // 0xC8(0x8)
		UEditPivotToolActionPropertySet EditPivotActions; // 0xD0(0x8)
		unsigned char UnknownData04_6[0x148]; // 0xD8(0x148) UNKNOWN PROPERTY
		TArray ActiveGizmos; // 0x220(0x10)
		UDragAlignmentMechanic DragAlignmentMechanic; // 0x230(0x8)
		unsigned char UnknownData05_7[0x78]; // 0x238(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.EditPivotTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.EditUVIslandsToolBuilder
	// Inherited from UMeshSurfacePointMeshEditingToolBuilder -> UMeshSurfacePointToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UEditUVIslandsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.EditUVIslandsToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.EditUVIslandsTool
	// Inherited from UMeshSurfacePointTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x3E0 (0x4E0 - 0x100)
	class UEditUVIslandsTool : public UMeshSurfacePointTool	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x100(0x8) UNKNOWN PROPERTY
		UExistingMeshMaterialProperties MaterialSettings; // 0x108(0x8)
		UMaterialInstanceDynamic CheckerMaterial; // 0x110(0x8)
		AInternalToolFrameworkActor PreviewMeshActor; // 0x118(0x8)
		UDynamicMeshComponent DynamicMeshComponent; // 0x120(0x8)
		UPolygonSelectionMechanic SelectionMechanic; // 0x128(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x130(0x8) UNKNOWN PROPERTY
		UCombinedTransformGizmo TransformGizmo; // 0x138(0x8)
		UTransformProxy TransformProxy; // 0x140(0x8)
		unsigned char UnknownData05_7[0x398]; // 0x148(0x398) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.EditUVIslandsTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.HoleFillToolBuilder
	// Inherited from USingleSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UHoleFillToolBuilder : public USingleSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.HoleFillToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SmoothHoleFillProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class USmoothHoleFillProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bConstrainToHoleInterior; // 0xA8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		int32_t RemeshingExteriorRegionWidth; // 0xAC(0x4)
		int32_t SmoothingExteriorRegionWidth; // 0xB0(0x4)
		int32_t SmoothingInteriorRegionWidth; // 0xB4(0x4)
		float InteriorSmoothness; // 0xB8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		double FillDensityScalar; // 0xC0(0x8)
		bool bProjectDuringRemesh; // 0xC8(0x1)
		unsigned char UnknownData05_7[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SmoothHoleFillProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.HoleFillToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UHoleFillToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		EHoleFillOpFillType FillType; // 0xA8(0x1)
		bool bRemoveIsolatedTriangles; // 0xA9(0x1)
		bool bQuickFillSmallHoles; // 0xAA(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xAB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.HoleFillToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.HoleFillToolActions
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UHoleFillToolActions : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.HoleFillToolActions");
			return ret;
		}

		void SelectAll(); // Flags: Final|Native|Public 0x7FF414CC5778
		void Clear(); // Flags: Final|Native|Public 0x7FF414CC5698
	};


	// Class MeshModelingToolsExp.HoleFillStatisticsProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet	
	{
	public:
		FString InitialHoles; // 0xA8(0x10)
		FString SelectedHoles; // 0xB8(0x10)
		FString SuccessfulFills; // 0xC8(0x10)
		FString FailedFills; // 0xD8(0x10)
		FString RemainingHoles; // 0xE8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.HoleFillStatisticsProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.HoleFillOperatorFactory
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UHoleFillOperatorFactory : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UHoleFillTool FillTool; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.HoleFillOperatorFactory");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.HoleFillTool
	// Inherited from USingleSelectionMeshEditingTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x190 (0x240 - 0xB0)
	class UHoleFillTool : public USingleSelectionMeshEditingTool	
	{
	public:
		USmoothHoleFillProperties SmoothHoleFillProperties; // 0xB0(0x8)
		UHoleFillToolProperties Properties; // 0xB8(0x8)
		UHoleFillToolActions Actions; // 0xC0(0x8)
		UHoleFillStatisticsProperties Statistics; // 0xC8(0x8)
		UMeshOpPreviewWithBackgroundCompute Preview; // 0xD0(0x8)
		UBoundarySelectionMechanic SelectionMechanic; // 0xD8(0x8)
		unsigned char UnknownData01_7[0x160]; // 0xE0(0x160) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.HoleFillTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.LatticeDeformerToolBuilder
	// Inherited from UMultiTargetWithSelectionToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULatticeDeformerToolBuilder : public UMultiTargetWithSelectionToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.LatticeDeformerToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.LatticeDeformerToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class ULatticeDeformerToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		int32_t XAxisResolution; // 0xB0(0x4)
		int32_t YAxisResolution; // 0xB4(0x4)
		int32_t ZAxisResolution; // 0xB8(0x4)
		float Padding; // 0xBC(0x4)
		ELatticeInterpolationType InterpolationType; // 0xC0(0x1)
		bool bDeformNormals; // 0xC1(0x1)
		bool bCanChangeResolution; // 0xC2(0x1)
		EToolContextCoordinateSystem GizmoCoordinateSystem; // 0xC3(0x1)
		bool bSetPivotMode; // 0xC4(0x1)
		bool bSoftDeformation; // 0xC5(0x1)
		unsigned char UnknownData03_7[0x2]; // 0xC6(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.LatticeDeformerToolProperties");
			return ret;
		}

		void Constrain(); // Flags: Final|Native|Public 0x7FF414CC5938
		void ClearConstraints(); // Flags: Final|Native|Public 0x7FF414CC5858
	};


	// Class MeshModelingToolsExp.LatticeDeformerOperatorFactory
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class ULatticeDeformerOperatorFactory : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		ULatticeDeformerTool LatticeDeformerTool; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.LatticeDeformerOperatorFactory");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.LatticeDeformerTool
	// Inherited from UMultiTargetWithSelectionTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x128 (0x210 - 0xE8)
	class ULatticeDeformerTool : public UMultiTargetWithSelectionTool	
	{
	public:
		unsigned char UnknownData02_3[0x98]; // 0xE8(0x98) UNKNOWN PROPERTY
		ULatticeControlPointsMechanic ControlPointsMechanic; // 0x180(0x8)
		ULatticeDeformerToolProperties Settings; // 0x188(0x8)
		UMeshOpPreviewWithBackgroundCompute Preview; // 0x190(0x8)
		bool bLatticeDeformed; // 0x198(0x1)
		unsigned char UnknownData03_7[0x77]; // 0x199(0x77) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.LatticeDeformerTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshAttributePaintToolBuilder
	// Inherited from UMeshSurfacePointMeshEditingToolBuilder -> UMeshSurfacePointToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x40 (0x70 - 0x30)
	class UMeshAttributePaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x30(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshAttributePaintToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshAttributePaintBrushOperationProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UMeshAttributePaintBrushOperationProperties : public UInteractiveToolPropertySet	
	{
	public:
		EBrushActionMode BrushAction; // 0xA8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshAttributePaintBrushOperationProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshAttributePaintToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		FString Attribute; // 0xA8(0x10)
		unsigned char UnknownData01_7[0x10]; // 0xB8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshAttributePaintToolProperties");
			return ret;
		}

		TArray GetAttributeNames(); // Flags: Final|Native|Public 0x7FF414CC5A18
	};


	// Class MeshModelingToolsExp.MeshAttributePaintEditActions
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshAttributePaintEditActions");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshAttributePaintTool
	// Inherited from UDynamicMeshBrushTool -> UBaseBrushTool -> UMeshSurfacePointTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x518 (0x7F0 - 0x2D8)
	class UMeshAttributePaintTool : public UDynamicMeshBrushTool	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY
		UMeshAttributePaintBrushOperationProperties BrushActionProps; // 0x2E0(0x8)
		UMeshAttributePaintToolProperties AttribProps; // 0x2E8(0x8)
		unsigned char UnknownData03_7[0x500]; // 0x2F0(0x500) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshAttributePaintTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshBoundaryToolBase
	// Inherited from USingleSelectionMeshEditingTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0xF0 (0x1A0 - 0xB0)
	class UMeshBoundaryToolBase : public USingleSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData02_3[0xE0]; // 0xB0(0xE0) UNKNOWN PROPERTY
		UPolygonSelectionMechanic SelectionMechanic; // 0x190(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x198(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshBoundaryToolBase");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshGroupPaintToolBuilder
	// Inherited from UMeshSurfacePointMeshEditingToolBuilder -> UMeshSurfacePointToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UMeshGroupPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshGroupPaintToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.GroupPaintBrushFilterProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UGroupPaintBrushFilterProperties : public UInteractiveToolPropertySet	
	{
	public:
		EMeshGroupPaintBrushType PrimaryBrushType; // 0xA8(0x1)
		EMeshGroupPaintInteractionType SubToolType; // 0xA9(0x1)
		unsigned char UnknownData06_6[0x2]; // 0xAA(0x2) UNKNOWN PROPERTY
		float BrushSize; // 0xAC(0x4)
		EMeshGroupPaintBrushAreaType BrushAreaMode; // 0xB0(0x1)
		bool bHitBackFaces; // 0xB1(0x1)
		unsigned char UnknownData07_6[0x2]; // 0xB2(0x2) UNKNOWN PROPERTY
		int32_t SetGroup; // 0xB4(0x4)
		bool bOnlySetUngrouped; // 0xB8(0x1)
		unsigned char UnknownData08_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		int32_t EraseGroup; // 0xBC(0x4)
		bool bOnlyEraseCurrent; // 0xC0(0x1)
		unsigned char UnknownData09_6[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		float AngleThreshold; // 0xC4(0x4)
		bool bUVSeams; // 0xC8(0x1)
		bool bNormalSeams; // 0xC9(0x1)
		EMeshGroupPaintVisibilityType VisibilityFilter; // 0xCA(0x1)
		unsigned char UnknownData10_6[0x1]; // 0xCB(0x1) UNKNOWN PROPERTY
		int32_t MinTriVertCount; // 0xCC(0x4)
		bool bShowHitGroup; // 0xD0(0x1)
		bool bShowAllGroups; // 0xD1(0x1)
		unsigned char UnknownData11_7[0x6]; // 0xD2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.GroupPaintBrushFilterProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshGroupPaintToolActionPropertySet
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UMeshGroupPaintToolActionPropertySet : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshGroupPaintToolActionPropertySet");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshGroupPaintToolFreezeActions
	// Inherited from UMeshGroupPaintToolActionPropertySet -> UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UMeshGroupPaintToolFreezeActions : public UMeshGroupPaintToolActionPropertySet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions");
			return ret;
		}

		void UnfreezeAll(); // Flags: Final|Native|Public 0x7FF414CC6118
		void ShrinkCurrent(); // Flags: Final|Native|Public 0x7FF414CC6038
		void GrowCurrent(); // Flags: Final|Native|Public 0x7FF414CC5F58
		void FreezeOthers(); // Flags: Final|Native|Public 0x7FF414CC5E78
		void FreezeCurrent(); // Flags: Final|Native|Public 0x7FF414CC5D98
		void FloodFillCurrent(); // Flags: Final|Native|Public 0x7FF414CC5CB8
		void ClearCurrent(); // Flags: Final|Native|Public 0x7FF414CC5BD8
		void ClearAll(); // Flags: Final|Native|Public 0x7FF414CC5AF8
	};


	// Class MeshModelingToolsExp.MeshSculptToolBase
	// Inherited from UMeshSurfacePointTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0xAA0 (0xBA0 - 0x100)
	class UMeshSculptToolBase : public UMeshSurfacePointTool	
	{
	public:
		USculptBrushProperties BrushProperties; // 0x100(0x8)
		UWorkPlaneProperties GizmoProperties; // 0x108(0x8)
		unsigned char UnknownData05_6[0x120]; // 0x110(0x120) UNKNOWN PROPERTY
		TMap BrushOpPropSets; // 0x230(0x50)
		unsigned char UnknownData06_6[0x50]; // 0x280(0x50) UNKNOWN PROPERTY
		TMap SecondaryBrushOpPropSets; // 0x2D0(0x50)
		unsigned char UnknownData07_6[0x6F0]; // 0x320(0x6F0) UNKNOWN PROPERTY
		UMeshEditingViewProperties ViewProperties; // 0xA10(0x8)
		UMaterialInstanceDynamic ActiveOverrideMaterial; // 0xA18(0x8)
		UBrushStampIndicator BrushIndicator; // 0xA20(0x8)
		bool bIsVolumetricIndicator; // 0xA28(0x1)
		unsigned char UnknownData08_6[0x7]; // 0xA29(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic BrushIndicatorMaterial; // 0xA30(0x8)
		UPreviewMesh BrushIndicatorMesh; // 0xA38(0x8)
		UCombinedTransformGizmo PlaneTransformGizmo; // 0xA40(0x8)
		UTransformProxy PlaneTransformProxy; // 0xA48(0x8)
		unsigned char UnknownData09_7[0x150]; // 0xA50(0x150) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshSculptToolBase");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshGroupPaintTool
	// Inherited from UMeshSculptToolBase -> UMeshSurfacePointTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x440 (0xFE0 - 0xBA0)
	class UMeshGroupPaintTool : public UMeshSculptToolBase	
	{
	public:
		UPolygroupLayersProperties PolygroupLayerProperties; // 0xBA0(0x8)
		UGroupPaintBrushFilterProperties FilterProperties; // 0xBA8(0x8)
		UGroupPaintBrushOpProps PaintBrushOpProperties; // 0xBB0(0x8)
		UGroupEraseBrushOpProps EraseBrushOpProperties; // 0xBB8(0x8)
		UMeshGroupPaintToolFreezeActions FreezeActions; // 0xBC0(0x8)
		unsigned char UnknownData02_6[0x8]; // 0xBC8(0x8) UNKNOWN PROPERTY
		UPolyLassoMarqueeMechanic PolyLassoMechanic; // 0xBD0(0x8)
		AInternalToolFrameworkActor PreviewMeshActor; // 0xBD8(0x8)
		UDynamicMeshComponent DynamicMeshComponent; // 0xBE0(0x8)
		UMeshElementsVisualizer MeshElementsDisplay; // 0xBE8(0x8)
		unsigned char UnknownData03_7[0x3F0]; // 0xBF0(0x3F0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshGroupPaintTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshInspectorToolBuilder
	// Inherited from USingleSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMeshInspectorToolBuilder : public USingleSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshInspectorToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshInspectorProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UMeshInspectorProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bWireframe; // 0xA8(0x1)
		bool bBoundaryEdges; // 0xA9(0x1)
		bool bBowtieVertices; // 0xAA(0x1)
		bool bPolygonBorders; // 0xAB(0x1)
		bool bUVSeams; // 0xAC(0x1)
		bool bUVBowties; // 0xAD(0x1)
		bool bMissingUVs; // 0xAE(0x1)
		bool bNormalSeams; // 0xAF(0x1)
		bool bTangentSeams; // 0xB0(0x1)
		bool bNormalVectors; // 0xB1(0x1)
		bool bTangentVectors; // 0xB2(0x1)
		bool bDrawHiddenEdgesAndSeams; // 0xB3(0x1)
		float NormalLength; // 0xB4(0x4)
		float TangentLength; // 0xB8(0x4)
		EMeshInspectorToolDrawIndexMode ShowIndices; // 0xBC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xBD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshInspectorProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshInspectorMaterialProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x78 (0x120 - 0xA8)
	class UMeshInspectorMaterialProperties : public UInteractiveToolPropertySet	
	{
	public:
		EMeshInspectorMaterialMode MaterialMode; // 0xA8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		float CheckerDensity; // 0xAC(0x4)
		UMaterialInterface OverrideMaterial; // 0xB0(0x8)
		FString UVChannel; // 0xB8(0x10)
		TArray UVChannelNamesList; // 0xC8(0x10)
		bool bFlatShading; // 0xD8(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xD9(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0xDC(0x10)
		unsigned char UnknownData06_6[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
		double Opacity; // 0xF0(0x8)
		FLinearColor TransparentMaterialColor; // 0xF8(0x10)
		bool bTwoSided; // 0x108(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x109(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic CheckerMaterial; // 0x110(0x8)
		UMaterialInstanceDynamic ActiveCustomMaterial; // 0x118(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshInspectorMaterialProperties");
			return ret;
		}

		TArray GetUVChannelNamesFunc(); // Flags: Final|Native|Public|Const 0x7FF414CC61F8
	};


	// Class MeshModelingToolsExp.MeshInspectorTool
	// Inherited from USingleSelectionMeshEditingTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x1A0 (0x250 - 0xB0)
	class UMeshInspectorTool : public USingleSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY
		UMeshInspectorProperties Settings; // 0xB8(0x8)
		UPolygroupLayersProperties PolygroupLayerProperties; // 0xC0(0x8)
		UMeshInspectorMaterialProperties MaterialSettings; // 0xC8(0x8)
		unsigned char UnknownData04_6[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY
		UPreviewMesh PreviewMesh; // 0xD8(0x8)
		ULineSetComponent DrawnLineSet; // 0xE0(0x8)
		UMaterialInterface DefaultMaterial; // 0xE8(0x8)
		unsigned char UnknownData05_7[0x160]; // 0xF0(0x160) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshInspectorTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshSelectionToolBuilder
	// Inherited from UMeshSurfacePointMeshEditingToolBuilder -> UMeshSurfacePointToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UMeshSelectionToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshSelectionToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshSelectionToolActionPropertySet
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshSelectionToolActionPropertySet");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshSelectionEditActions
	// Inherited from UMeshSelectionToolActionPropertySet -> UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshSelectionEditActions");
			return ret;
		}

		void Shrink(); // Flags: Final|Native|Public 0x7FF414CC6AB8
		void SelectAll(); // Flags: Final|Native|Public 0x7FF414CC69D8
		void OptimizeBorder(); // Flags: Final|Native|Public 0x7FF414CC68F8
		void LargestTriCountPart(); // Flags: Final|Native|Public 0x7FF414CC6818
		void LargestAreaPart(); // Flags: Final|Native|Public 0x7FF414CC6738
		void Invert(); // Flags: Final|Native|Public 0x7FF414CC6658
		void Grow(); // Flags: Final|Native|Public 0x7FF414CC6578
		void FloodFill(); // Flags: Final|Native|Public 0x7FF414CC6498
		void ExpandToMaterials(); // Flags: Final|Native|Public 0x7FF414CC63B8
		void Clear(); // Flags: Final|Native|Public 0x7FF414CC62D8
	};


	// Class MeshModelingToolsExp.MeshSelectionMeshEditActions
	// Inherited from UMeshSelectionToolActionPropertySet -> UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshSelectionMeshEditActions");
			return ret;
		}

		void SmoothBorder(); // Flags: Final|Native|Public 0x7FF414CC70D8
		void Separate(); // Flags: Final|Native|Public 0x7FF414CC6FF8
		void FlipNormals(); // Flags: Final|Native|Public 0x7FF414CC6F18
		void Duplicate(); // Flags: Final|Native|Public 0x7FF414CC6E38
		void Disconnect(); // Flags: Final|Native|Public 0x7FF414CC6D58
		void Delete(); // Flags: Final|Native|Public 0x7FF414CC6C78
		void CreatePolygroup(); // Flags: Final|Native|Public 0x7FF414CC6B98
	};


	// Class MeshModelingToolsExp.MeshSelectionToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UMeshSelectionToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		EMeshSelectionToolPrimaryMode SelectionMode; // 0xA8(0x4)
		float AngleTolerance; // 0xAC(0x4)
		bool bHitBackFaces; // 0xB0(0x1)
		bool bShowPoints; // 0xB1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xB2(0x2) UNKNOWN PROPERTY
		EMeshFacesColorMode FaceColorMode; // 0xB4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshSelectionToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshSelectionTool
	// Inherited from UDynamicMeshBrushTool -> UBaseBrushTool -> UMeshSurfacePointTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x448 (0x720 - 0x2D8)
	class UMeshSelectionTool : public UDynamicMeshBrushTool	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY
		UMeshSelectionToolProperties SelectionProps; // 0x2E0(0x8)
		UMeshSelectionEditActions SelectionActions; // 0x2E8(0x8)
		UMeshSelectionToolActionPropertySet EditActions; // 0x2F0(0x8)
		UMeshStatisticsProperties MeshStatisticsProperties; // 0x2F8(0x8)
		UMeshElementsVisualizer MeshElementsDisplay; // 0x300(0x8)
		UMeshUVChannelProperties UVChannelProperties; // 0x308(0x8)
		UPolygroupLayersProperties PolygroupLayerProperties; // 0x310(0x8)
		unsigned char UnknownData04_6[0x58]; // 0x318(0x58) UNKNOWN PROPERTY
		UMeshSelectionSet Selection; // 0x370(0x8)
		TArray SpawnedActors; // 0x378(0x10)
		unsigned char UnknownData05_7[0x398]; // 0x388(0x398) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshSelectionTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshSpaceDeformerToolBuilder
	// Inherited from USingleSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMeshSpaceDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshSpaceDeformerToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshSpaceDeformerToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UMeshSpaceDeformerToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		ENonlinearOperationType SelectedOperationType; // 0xA8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		float UpperBoundsInterval; // 0xAC(0x4)
		float LowerBoundsInterval; // 0xB0(0x4)
		float BendDegrees; // 0xB4(0x4)
		float TwistDegrees; // 0xB8(0x4)
		EFlareProfileType FlareProfileType; // 0xBC(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xBD(0x3) UNKNOWN PROPERTY
		float FlarePercentY; // 0xC0(0x4)
		bool bLockXAndYFlaring; // 0xC4(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xC5(0x3) UNKNOWN PROPERTY
		float FlarePercentX; // 0xC8(0x4)
		bool bLockBottom; // 0xCC(0x1)
		bool bShowOriginalMesh; // 0xCD(0x1)
		bool bDrawVisualization; // 0xCE(0x1)
		bool bAlignToNormalOnCtrlClick; // 0xCF(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshSpaceDeformerToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UMeshSpaceDeformerToolActionPropertySet : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet");
			return ret;
		}

		void ShiftToCenter(); // Flags: Final|Native|Public 0x7FF414CC71B8
	};


	// Class MeshModelingToolsExp.SpaceDeformerOperatorFactory
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class USpaceDeformerOperatorFactory : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UMeshSpaceDeformerTool SpaceDeformerTool; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SpaceDeformerOperatorFactory");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshSpaceDeformerTool
	// Inherited from USingleSelectionMeshEditingTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x210 (0x2C0 - 0xB0)
	class UMeshSpaceDeformerTool : public USingleSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY
		UMeshSpaceDeformerToolProperties Settings; // 0xB8(0x8)
		UMeshSpaceDeformerToolActionPropertySet ToolActions; // 0xC0(0x8)
		UGizmoTransformChangeStateTarget StateTarget; // 0xC8(0x8)
		UDragAlignmentMechanic DragAlignmentMechanic; // 0xD0(0x8)
		UMeshOpPreviewWithBackgroundCompute Preview; // 0xD8(0x8)
		unsigned char UnknownData04_6[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY
		UPreviewMesh OriginalMeshPreview; // 0xF0(0x8)
		UIntervalGizmo IntervalGizmo; // 0xF8(0x8)
		UCombinedTransformGizmo TransformGizmo; // 0x100(0x8)
		UTransformProxy TransformProxy; // 0x108(0x8)
		UGizmoLocalFloatParameterSource UpIntervalSource; // 0x110(0x8)
		UGizmoLocalFloatParameterSource DownIntervalSource; // 0x118(0x8)
		UGizmoLocalFloatParameterSource ForwardIntervalSource; // 0x120(0x8)
		unsigned char UnknownData05_7[0x198]; // 0x128(0x198) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshSpaceDeformerTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshVertexPaintToolBuilder
	// Inherited from UMeshSurfacePointMeshEditingToolBuilder -> UMeshSurfacePointToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UMeshVertexPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshVertexPaintToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VertexPaintBasicProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x38 (0xE0 - 0xA8)
	class UVertexPaintBasicProperties : public UInteractiveToolPropertySet	
	{
	public:
		EMeshVertexPaintBrushType PrimaryBrushType; // 0xA8(0x1)
		EMeshVertexPaintInteractionType SubToolType; // 0xA9(0x1)
		unsigned char UnknownData03_6[0x2]; // 0xAA(0x2) UNKNOWN PROPERTY
		FLinearColor PaintColor; // 0xAC(0x10)
		EMeshVertexPaintColorBlendMode BlendMode; // 0xBC(0x1)
		EMeshVertexPaintSecondaryActionType SecondaryActionType; // 0xBD(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xBE(0x2) UNKNOWN PROPERTY
		FLinearColor EraseColor; // 0xC0(0x10)
		float SmoothStrength; // 0xD0(0x4)
		FModelingToolsColorChannelFilter ChannelFilter; // 0xD4(0x4)
		bool bHardEdges; // 0xD8(0x1)
		unsigned char UnknownData05_7[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VertexPaintBasicProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VertexPaintBrushFilterProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UVertexPaintBrushFilterProperties : public UInteractiveToolPropertySet	
	{
	public:
		EMeshVertexPaintBrushAreaType BrushAreaMode; // 0xA8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		float AngleThreshold; // 0xAC(0x4)
		bool bUVSeams; // 0xB0(0x1)
		bool bNormalSeams; // 0xB1(0x1)
		EMeshVertexPaintVisibilityType VisibilityFilter; // 0xB2(0x1)
		unsigned char UnknownData04_6[0x1]; // 0xB3(0x1) UNKNOWN PROPERTY
		int32_t MinTriVertCount; // 0xB4(0x4)
		EMeshVertexPaintMaterialMode MaterialMode; // 0xB8(0x1)
		bool bShowHitColor; // 0xB9(0x1)
		EMeshVertexPaintInteractionType CurrentSubToolType; // 0xBA(0x1)
		unsigned char UnknownData05_7[0x5]; // 0xBB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VertexPaintBrushFilterProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshVertexPaintToolActionPropertySet
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UMeshVertexPaintToolActionPropertySet : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshVertexPaintToolActionPropertySet");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshVertexPaintToolQuickActions
	// Inherited from UMeshVertexPaintToolActionPropertySet -> UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UMeshVertexPaintToolQuickActions : public UMeshVertexPaintToolActionPropertySet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshVertexPaintToolQuickActions");
			return ret;
		}

		void PaintAll(); // Flags: Final|Native|Public 0x7FF414CC7538
		void FillWhite(); // Flags: Final|Native|Public 0x7FF414CC7458
		void FillBlack(); // Flags: Final|Native|Public 0x7FF414CC7378
		void EraseAll(); // Flags: Final|Native|Public 0x7FF414CC7298
	};


	// Class MeshModelingToolsExp.MeshVertexPaintToolUtilityActions
	// Inherited from UMeshVertexPaintToolActionPropertySet -> UInteractiveToolPropertySet -> UObject
	// Size: 0x48 (0xF8 - 0xB0)
	class UMeshVertexPaintToolUtilityActions : public UMeshVertexPaintToolActionPropertySet	
	{
	public:
		EMeshVertexPaintToolUtilityOperations Operation; // 0xB0(0x4)
		EMeshVertexPaintColorChannel SourceChannel; // 0xB4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY
		float SourceValue; // 0xB8(0x4)
		FName WeightMap; // 0xBC(0x4)
		TArray WeightMapsList; // 0xC0(0x10)
		FModelingToolsColorChannelFilter TargetChannels; // 0xD0(0x4)
		EMeshVertexPaintColorChannel TargetChannel; // 0xD4(0x1)
		bool bCopyToHiRes; // 0xD5(0x1)
		unsigned char UnknownData03_6[0x2]; // 0xD6(0x2) UNKNOWN PROPERTY
		FString CopyToLODName; // 0xD8(0x10)
		TArray LODNamesList; // 0xE8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshVertexPaintToolUtilityActions");
			return ret;
		}

		TArray GetWeightMapsFunc(); // Flags: Final|Native|Public 0x7FF414CC77D8
		TArray GetLODNamesFunc(); // Flags: Final|Native|Public|Const 0x7FF414CC76F8
		void ApplySelectedOperation(); // Flags: Final|Native|Public 0x7FF414CC7618
	};


	// Class MeshModelingToolsExp.MeshVertexPaintTool
	// Inherited from UMeshSculptToolBase -> UMeshSurfacePointTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x5A0 (0x1140 - 0xBA0)
	class UMeshVertexPaintTool : public UMeshSculptToolBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0xBA0(0x8) UNKNOWN PROPERTY
		UPolygroupLayersProperties PolygroupLayerProperties; // 0xBA8(0x8)
		UVertexPaintBasicProperties BasicProperties; // 0xBB0(0x8)
		UVertexPaintBrushFilterProperties FilterProperties; // 0xBB8(0x8)
		UVertexColorPaintBrushOpProps PaintBrushOpProperties; // 0xBC0(0x8)
		UVertexColorPaintBrushOpProps EraseBrushOpProperties; // 0xBC8(0x8)
		UMeshVertexPaintToolQuickActions QuickActions; // 0xBD0(0x8)
		UMeshVertexPaintToolUtilityActions UtilityActions; // 0xBD8(0x8)
		unsigned char UnknownData04_6[0x8]; // 0xBE0(0x8) UNKNOWN PROPERTY
		UPolyLassoMarqueeMechanic PolyLassoMechanic; // 0xBE8(0x8)
		AInternalToolFrameworkActor PreviewMeshActor; // 0xBF0(0x8)
		UDynamicMeshComponent DynamicMeshComponent; // 0xBF8(0x8)
		UMeshElementsVisualizer MeshElementsDisplay; // 0xC00(0x8)
		unsigned char UnknownData05_7[0x538]; // 0xC08(0x538) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshVertexPaintTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshVertexSculptToolBuilder
	// Inherited from UMeshSurfacePointMeshEditingToolBuilder -> UMeshSurfacePointToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UMeshVertexSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshVertexSculptToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VertexBrushSculptProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UVertexBrushSculptProperties : public UInteractiveToolPropertySet	
	{
	public:
		EMeshVertexSculptBrushType PrimaryBrushType; // 0xA8(0x1)
		EMeshSculptFalloffType PrimaryFalloffType; // 0xA9(0x1)
		EMeshVertexSculptBrushFilterType BrushFilter; // 0xAA(0x1)
		bool bFreezeTarget; // 0xAB(0x1)
		TWeakObjectPtr Tool; // 0xAC(0x8)
		unsigned char UnknownData01_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VertexBrushSculptProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VertexBrushAlphaProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UVertexBrushAlphaProperties : public UInteractiveToolPropertySet	
	{
	public:
		UTexture2D Alpha; // 0xA8(0x8)
		float RotationAngle; // 0xB0(0x4)
		bool bRandomize; // 0xB4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY
		float RandomRange; // 0xB8(0x4)
		TWeakObjectPtr Tool; // 0xBC(0x8)
		unsigned char UnknownData03_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VertexBrushAlphaProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshSymmetryProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UMeshSymmetryProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bEnableSymmetry; // 0xA8(0x1)
		bool bSymmetryCanBeEnabled; // 0xA9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshSymmetryProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshVertexSculptTool
	// Inherited from UMeshSculptToolBase -> UMeshSurfacePointTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x960 (0x1500 - 0xBA0)
	class UMeshVertexSculptTool : public UMeshSculptToolBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0xBA0(0x8) UNKNOWN PROPERTY
		UVertexBrushSculptProperties SculptProperties; // 0xBA8(0x8)
		UVertexBrushAlphaProperties AlphaProperties; // 0xBB0(0x8)
		UTexture2D BrushAlpha; // 0xBB8(0x8)
		UMeshSymmetryProperties SymmetryProperties; // 0xBC0(0x8)
		unsigned char UnknownData04_6[0x18]; // 0xBC8(0x18) UNKNOWN PROPERTY
		AInternalToolFrameworkActor PreviewMeshActor; // 0xBE0(0x8)
		UDynamicMeshComponent DynamicMeshComponent; // 0xBE8(0x8)
		unsigned char UnknownData05_7[0x910]; // 0xBF0(0x910) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshVertexSculptTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MirrorToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMirrorToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MirrorToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MirrorToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UMirrorToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		EMirrorOperationMode OperationMode; // 0xA8(0x1)
		bool bCropAlongMirrorPlaneFirst; // 0xA9(0x1)
		bool bSimplifyAlongCrop; // 0xAA(0x1)
		bool bWeldVerticesOnMirrorPlane; // 0xAB(0x1)
		unsigned char UnknownData02_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		double PlaneTolerance; // 0xB0(0x8)
		bool bAllowBowtieVertexCreation; // 0xB8(0x1)
		bool bShowPreview; // 0xB9(0x1)
		EMirrorSaveMode WriteTo; // 0xBA(0x1)
		unsigned char UnknownData03_7[0x5]; // 0xBB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MirrorToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MirrorOperatorFactory
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UMirrorOperatorFactory : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UMirrorTool MirrorTool; // 0x30(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MirrorOperatorFactory");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MirrorToolActionPropertySet
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		bool bButtonsOnlyChangeOrientation; // 0xB0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MirrorToolActionPropertySet");
			return ret;
		}

		void Up(); // Flags: Final|Native|Public 0x7FF414CC7DF8
		void ShiftToCenter(); // Flags: Final|Native|Public 0x7FF414CC7D18
		void Right(); // Flags: Final|Native|Public 0x7FF414CC7C38
		void Left(); // Flags: Final|Native|Public 0x7FF414CC7B58
		void Forward(); // Flags: Final|Native|Public 0x7FF414CC7A78
		void Down(); // Flags: Final|Native|Public 0x7FF414CC7998
		void Backward(); // Flags: Final|Native|Public 0x7FF414CC78B8
	};


	// Class MeshModelingToolsExp.MirrorTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0xC0 (0x178 - 0xB8)
	class UMirrorTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		UMirrorToolProperties Settings; // 0xC0(0x8)
		UCreateMeshObjectTypeProperties OutputTypeProperties; // 0xC8(0x8)
		UOnAcceptHandleSourcesProperties HandleSourcesProperties; // 0xD0(0x8)
		UMirrorToolActionPropertySet ToolActions; // 0xD8(0x8)
		TArray MeshesToMirror; // 0xE0(0x10)
		TArray Previews; // 0xF0(0x10)
		unsigned char UnknownData04_6[0x30]; // 0x100(0x30) UNKNOWN PROPERTY
		UConstructionPlaneMechanic PlaneMechanic; // 0x130(0x8)
		unsigned char UnknownData05_7[0x40]; // 0x138(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MirrorTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.OffsetMeshToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UOffsetMeshToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		EOffsetMeshToolOffsetType OffsetType; // 0xA8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		float Distance; // 0xAC(0x4)
		bool bCreateShell; // 0xB0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.OffsetMeshToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.OffsetWeightMapSetProperties
	// Inherited from UWeightMapSetProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xD0 - 0xC8)
	class UOffsetWeightMapSetProperties : public UWeightMapSetProperties	
	{
	public:
		float MinDistance; // 0xC8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.OffsetWeightMapSetProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.IterativeOffsetProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UIterativeOffsetProperties : public UInteractiveToolPropertySet	
	{
	public:
		int32_t Steps; // 0xA8(0x4)
		bool bOffsetBoundaries; // 0xAC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		float SmoothingPerStep; // 0xB0(0x4)
		bool bReprojectSmooth; // 0xB4(0x1)
		unsigned char UnknownData03_7[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.IterativeOffsetProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ImplicitOffsetProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UImplicitOffsetProperties : public UInteractiveToolPropertySet	
	{
	public:
		float Smoothness; // 0xA8(0x4)
		bool bPreserveUVs; // 0xAC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ImplicitOffsetProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.OffsetMeshTool
	// Inherited from UBaseMeshProcessingTool -> USingleTargetWithSelectionTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x20 (0x490 - 0x470)
	class UOffsetMeshTool : public UBaseMeshProcessingTool	
	{
	public:
		UOffsetMeshToolProperties OffsetProperties; // 0x470(0x8)
		UIterativeOffsetProperties IterativeProperties; // 0x478(0x8)
		UImplicitOffsetProperties ImplicitProperties; // 0x480(0x8)
		UOffsetWeightMapSetProperties WeightMapProperties; // 0x488(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.OffsetMeshTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.OffsetMeshToolBuilder
	// Inherited from UBaseMeshProcessingToolBuilder -> USingleTargetWithSelectionToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.OffsetMeshToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PhysicsObjectToolPropertySet
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x68 (0x110 - 0xA8)
	class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet	
	{
	public:
		FString ObjectName; // 0xA8(0x10)
		ECollisionGeometryMode CollisionType; // 0xB8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		TArray Spheres; // 0xC0(0x10)
		TArray Boxes; // 0xD0(0x10)
		TArray Capsules; // 0xE0(0x10)
		TArray Convexes; // 0xF0(0x10)
		TArray LevelSets; // 0x100(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PhysicsObjectToolPropertySet");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.CollisionGeometryVisualizationProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bShowCollision; // 0xA8(0x1)
		bool bShowSolid; // 0xA9(0x1)
		unsigned char UnknownData03_6[0x2]; // 0xAA(0x2) UNKNOWN PROPERTY
		float LineThickness; // 0xAC(0x4)
		bool bShowHidden; // 0xB0(0x1)
		bool bRandomColors; // 0xB1(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xB2(0x2) UNKNOWN PROPERTY
		FColor Color; // 0xB4(0x4)
		UMaterialInterface LineMaterial; // 0xB8(0x8)
		UMaterialInterface LineMaterialShowingHidden; // 0xC0(0x8)
		UMaterialInterface TriangleMaterial; // 0xC8(0x8)
		bool bEnableShowCollision; // 0xD0(0x1)
		bool bEnableShowSolid; // 0xD1(0x1)
		unsigned char UnknownData05_7[0x6]; // 0xD2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.CollisionGeometryVisualizationProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ExtractCollisionGeometryToolBuilder
	// Inherited from USingleSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UExtractCollisionGeometryToolBuilder : public USingleSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ExtractCollisionGeometryToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ExtractCollisionToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UExtractCollisionToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		EExtractCollisionOutputType CollisionType; // 0xA8(0x1)
		bool bOutputSeparateMeshes; // 0xA9(0x1)
		bool bShowPreview; // 0xAA(0x1)
		bool bShowInputMesh; // 0xAB(0x1)
		bool bWeldEdges; // 0xAC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ExtractCollisionToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ExtractCollisionGeometryTool
	// Inherited from USingleSelectionMeshEditingTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x278 (0x328 - 0xB0)
	class UExtractCollisionGeometryTool : public USingleSelectionMeshEditingTool	
	{
	public:
		UCreateMeshObjectTypeProperties OutputTypeProperties; // 0xB0(0x8)
		UExtractCollisionToolProperties Settings; // 0xB8(0x8)
		UCollisionGeometryVisualizationProperties VizSettings; // 0xC0(0x8)
		UPhysicsObjectToolPropertySet ObjectProps; // 0xC8(0x8)
		UPreviewGeometry PreviewElements; // 0xD0(0x8)
		UPreviewMesh PreviewMesh; // 0xD8(0x8)
		unsigned char UnknownData01_7[0x248]; // 0xE0(0x248) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ExtractCollisionGeometryTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PhysicsInspectorToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPhysicsInspectorToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PhysicsInspectorToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PhysicsInspectorTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x40 (0xF8 - 0xB8)
	class UPhysicsInspectorTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		UCollisionGeometryVisualizationProperties VizSettings; // 0xC0(0x8)
		TArray ObjectData; // 0xC8(0x10)
		TArray PreviewElements; // 0xD8(0x10)
		unsigned char UnknownData03_7[0x10]; // 0xE8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PhysicsInspectorTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SetCollisionGeometryToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USetCollisionGeometryToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SetCollisionGeometryToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SetCollisionGeometryToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x78 (0x120 - 0xA8)
	class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		ECollisionGeometryType GeometryType; // 0xA8(0x4)
		bool bAppendToExisting; // 0xAC(0x1)
		bool bUseWorldSpace; // 0xAD(0x1)
		unsigned char UnknownData07_6[0x2]; // 0xAE(0x2) UNKNOWN PROPERTY
		ESetCollisionGeometryInputMode InputMode; // 0xB0(0x4)
		bool bRemoveContained; // 0xB4(0x1)
		bool bEnableMaxCount; // 0xB5(0x1)
		unsigned char UnknownData08_6[0x2]; // 0xB6(0x2) UNKNOWN PROPERTY
		int32_t MaxCount; // 0xB8(0x4)
		float MinThickness; // 0xBC(0x4)
		bool bDetectBoxes; // 0xC0(0x1)
		bool bDetectSpheres; // 0xC1(0x1)
		bool bDetectCapsules; // 0xC2(0x1)
		bool bMergeCollisionShapes; // 0xC3(0x1)
		int32_t MergeAboveCount; // 0xC4(0x4)
		bool bUseNegativeSpaceInMerge; // 0xC8(0x1)
		bool bSimplifyHulls; // 0xC9(0x1)
		unsigned char UnknownData09_6[0x2]; // 0xCA(0x2) UNKNOWN PROPERTY
		int32_t HullTargetFaceCount; // 0xCC(0x4)
		bool bPreSimplifyToEdgeLength; // 0xD0(0x1)
		unsigned char UnknownData10_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		double DecompositionTargetEdgeLength; // 0xD8(0x8)
		EConvexDecompositionMethod DecompositionMethod; // 0xE0(0x4)
		bool bLimitHullsPerShape; // 0xE4(0x1)
		unsigned char UnknownData11_6[0x3]; // 0xE5(0x3) UNKNOWN PROPERTY
		int32_t MaxHullsPerShape; // 0xE8(0x4)
		float ConvexDecompositionSearchFactor; // 0xEC(0x4)
		float AddHullsErrorTolerance; // 0xF0(0x4)
		float MinPartThickness; // 0xF4(0x4)
		double NegativeSpaceTolerance; // 0xF8(0x8)
		double NegativeSpaceMinRadius; // 0x100(0x8)
		bool bIgnoreInternalNegativeSpace; // 0x108(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x109(0x3) UNKNOWN PROPERTY
		float HullTolerance; // 0x10C(0x4)
		EProjectedHullAxis SweepAxis; // 0x110(0x4)
		int32_t LevelSetResolution; // 0x114(0x4)
		ECollisionGeometryMode SetCollisionType; // 0x118(0x4)
		bool bShowTargetMesh; // 0x11C(0x1)
		bool bUsingMultipleInputs; // 0x11D(0x1)
		unsigned char UnknownData13_7[0x2]; // 0x11E(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SetCollisionGeometryToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SetCollisionGeometryTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x2C8 (0x380 - 0xB8)
	class USetCollisionGeometryTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0xB8(0x10) UNKNOWN PROPERTY
		USetCollisionGeometryToolProperties Settings; // 0xC8(0x8)
		UPolygroupLayersProperties PolygroupLayerProperties; // 0xD0(0x8)
		UCollisionGeometryVisualizationProperties VizSettings; // 0xD8(0x8)
		UPhysicsObjectToolPropertySet CollisionProps; // 0xE0(0x8)
		unsigned char UnknownData04_6[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY
		UPreviewGeometry PreviewGeom; // 0xF0(0x8)
		unsigned char UnknownData05_6[0x278]; // 0xF8(0x278) UNKNOWN PROPERTY
		UGeometrySelectionVisualizationProperties GeometrySelectionVizProperties; // 0x370(0x8)
		UPreviewGeometry GeometrySelectionViz; // 0x378(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SetCollisionGeometryTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SimpleCollisionEditorToolBuilder
	// Inherited from USingleSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USimpleCollisionEditorToolBuilder : public USingleSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SimpleCollisionEditorToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class USimpleCollisionEditorToolActionProperties : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties");
			return ret;
		}

		void Duplicate(); // Flags: Final|Native|Public 0x7FF414CC8338
		void DeleteAll(); // Flags: Final|Native|Public 0x7FF414CC8258
		void Delete(); // Flags: Final|Native|Public 0x7FF414CC8178
		void AddSphere(); // Flags: Final|Native|Public 0x7FF414CC8098
		void AddCapsule(); // Flags: Final|Native|Public 0x7FF414CC7FB8
		void AddBox(); // Flags: Final|Native|Public 0x7FF414CC7ED8
	};


	// Class MeshModelingToolsExp.SimpleCollisionEditorTool
	// Inherited from USingleSelectionMeshEditingTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x30 (0xE0 - 0xB0)
	class USimpleCollisionEditorTool : public USingleSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY
		USimpleCollisionEditorToolActionProperties ActionProperties; // 0xB8(0x8)
		unsigned char UnknownData03_7[0x20]; // 0xC0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SimpleCollisionEditorTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PlaneCutToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPlaneCutToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PlaneCutToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PlaneCutToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UPlaneCutToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bKeepBothHalves; // 0xA8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		float SpacingBetweenHalves; // 0xAC(0x4)
		bool bExportSeparatedPiecesAsNewMeshAssets; // 0xB0(0x1)
		bool bShowPreview; // 0xB1(0x1)
		bool bFillCutHole; // 0xB2(0x1)
		bool bFillSpans; // 0xB3(0x1)
		bool bSimplifyAlongCut; // 0xB4(0x1)
		unsigned char UnknownData03_7[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PlaneCutToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PlaneCutOperatorFactory
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UPlaneCutOperatorFactory : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UPlaneCutTool CutTool; // 0x30(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PlaneCutOperatorFactory");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.PlaneCutTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0xD8 (0x190 - 0xB8)
	class UPlaneCutTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		UPlaneCutToolProperties BasicProperties; // 0xB8(0x8)
		TArray Previews; // 0xC0(0x10)
		TArray MeshesToCut; // 0xD0(0x10)
		UConstructionPlaneMechanic PlaneMechanic; // 0xE0(0x8)
		unsigned char UnknownData01_7[0xA8]; // 0xE8(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.PlaneCutTool");
			return ret;
		}

		void FlipPlane(); // Flags: Final|Native|Protected 0x7FF414CC84F8
		void Cut(); // Flags: Final|Native|Protected 0x7FF414CC8418
	};


	// Class MeshModelingToolsExp.ProjectToTargetToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UProjectToTargetToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ProjectToTargetToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RemeshMeshToolProperties
	// Inherited from URemeshProperties -> UMeshConstraintProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x28 (0xE0 - 0xB8)
	class URemeshMeshToolProperties : public URemeshProperties	
	{
	public:
		int32_t TargetTriangleCount; // 0xB8(0x4)
		ERemeshSmoothingType SmoothingType; // 0xBC(0x1)
		bool bDiscardAttributes; // 0xBD(0x1)
		bool bShowGroupColors; // 0xBE(0x1)
		ERemeshType RemeshType; // 0xBF(0x1)
		int32_t RemeshIterations; // 0xC0(0x4)
		int32_t MaxRemeshIterations; // 0xC4(0x4)
		int32_t ExtraProjectionIterations; // 0xC8(0x4)
		bool bUseTargetEdgeLength; // 0xCC(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xCD(0x3) UNKNOWN PROPERTY
		float TargetEdgeLength; // 0xD0(0x4)
		bool bReproject; // 0xD4(0x1)
		bool bReprojectConstraints; // 0xD5(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xD6(0x2) UNKNOWN PROPERTY
		float BoundaryCornerAngleThreshold; // 0xD8(0x4)
		unsigned char UnknownData05_7[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RemeshMeshToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ProjectToTargetToolProperties
	// Inherited from URemeshMeshToolProperties -> URemeshProperties -> UMeshConstraintProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0x100 - 0xE0)
	class UProjectToTargetToolProperties : public URemeshMeshToolProperties	
	{
	public:
		bool bWorldSpace; // 0xE0(0x1)
		bool bParallel; // 0xE1(0x1)
		unsigned char UnknownData03_6[0x2]; // 0xE2(0x2) UNKNOWN PROPERTY
		int32_t FaceProjectionPassesPerRemeshIteration; // 0xE4(0x4)
		float SurfaceProjectionSpeed; // 0xE8(0x4)
		float NormalAlignmentSpeed; // 0xEC(0x4)
		bool bSmoothInFillAreas; // 0xF0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xF1(0x3) UNKNOWN PROPERTY
		float FillAreaDistanceMultiplier; // 0xF4(0x4)
		float FillAreaSmoothMultiplier; // 0xF8(0x4)
		unsigned char UnknownData05_7[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ProjectToTargetToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RemeshMeshTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x50 (0x108 - 0xB8)
	class URemeshMeshTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		URemeshMeshToolProperties BasicProperties; // 0xC0(0x8)
		UMeshStatisticsProperties MeshStatisticsProperties; // 0xC8(0x8)
		UMeshOpPreviewWithBackgroundCompute Preview; // 0xD0(0x8)
		UMeshElementsVisualizer MeshElementsDisplay; // 0xD8(0x8)
		unsigned char UnknownData03_7[0x28]; // 0xE0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RemeshMeshTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ProjectToTargetTool
	// Inherited from URemeshMeshTool -> UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x10 (0x118 - 0x108)
	class UProjectToTargetTool : public URemeshMeshTool	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x108(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ProjectToTargetTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshAnalysisProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UMeshAnalysisProperties : public UInteractiveToolPropertySet	
	{
	public:
		FString SurfaceArea; // 0xA8(0x10)
		FString Volume; // 0xB8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshAnalysisProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.MeshStatisticsProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UMeshStatisticsProperties : public UInteractiveToolPropertySet	
	{
	public:
		FString Mesh; // 0xA8(0x10)
		FString UV; // 0xB8(0x10)
		FString Attributes; // 0xC8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.MeshStatisticsProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RemeshMeshToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class URemeshMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RemeshMeshToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RemoveOccludedTrianglesToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class URemoveOccludedTrianglesToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RemoveOccludedTrianglesToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RemoveOccludedTrianglesToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		EOcclusionCalculationUIMode OcclusionTestMethod; // 0xA8(0x1)
		EOcclusionTriangleSamplingUIMode TriangleSampling; // 0xA9(0x1)
		unsigned char UnknownData03_6[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY
		double WindingIsoValue; // 0xB0(0x8)
		int32_t AddRandomRays; // 0xB8(0x4)
		int32_t AddTriangleSamples; // 0xBC(0x4)
		bool bOnlySelfOcclude; // 0xC0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		int32_t ShrinkRemoval; // 0xC4(0x4)
		double MinAreaIsland; // 0xC8(0x8)
		int32_t MinTriCountIsland; // 0xD0(0x4)
		EOccludedAction Action; // 0xD4(0x1)
		unsigned char UnknownData05_7[0x3]; // 0xD5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RemoveOccludedTrianglesToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RemoveOccludedTrianglesAdvancedProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RemoveOccludedTrianglesAdvancedProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RemoveOccludedTrianglesOperatorFactory
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class URemoveOccludedTrianglesOperatorFactory : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		URemoveOccludedTrianglesTool Tool; // 0x30(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RemoveOccludedTrianglesOperatorFactory");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RemoveOccludedTrianglesTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x118 (0x1D0 - 0xB8)
	class URemoveOccludedTrianglesTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		URemoveOccludedTrianglesToolProperties BasicProperties; // 0xB8(0x8)
		UPolygroupLayersProperties PolygroupLayersProperties; // 0xC0(0x8)
		URemoveOccludedTrianglesAdvancedProperties AdvancedProperties; // 0xC8(0x8)
		TArray Previews; // 0xD0(0x10)
		TArray PreviewCopies; // 0xE0(0x10)
		unsigned char UnknownData01_7[0xE0]; // 0xF0(0xE0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RemoveOccludedTrianglesTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RevolveBoundaryToolBuilder
	// Inherited from USingleSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class URevolveBoundaryToolBuilder : public USingleSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RevolveBoundaryToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RevolveBoundaryOperatorFactory
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class URevolveBoundaryOperatorFactory : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		URevolveBoundaryTool RevolveBoundaryTool; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RevolveBoundaryOperatorFactory");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RevolveBoundaryToolProperties
	// Inherited from URevolveProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x30 (0x148 - 0x118)
	class URevolveBoundaryToolProperties : public URevolveProperties	
	{
	public:
		ERevolvePropertiesCapFillMode CapFillMode; // 0x118(0x1)
		bool bDisplayInputMesh; // 0x119(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x11A(0x6) UNKNOWN PROPERTY
		FVector AxisOrigin; // 0x120(0x18)
		FVector2D AxisOrientation; // 0x138(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RevolveBoundaryToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.RevolveBoundaryTool
	// Inherited from UMeshBoundaryToolBase -> USingleSelectionMeshEditingTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x70 (0x210 - 0x1A0)
	class URevolveBoundaryTool : public UMeshBoundaryToolBase	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x1A0(0x18) UNKNOWN PROPERTY
		UCreateMeshObjectTypeProperties OutputTypeProperties; // 0x1B8(0x8)
		URevolveBoundaryToolProperties Settings; // 0x1C0(0x8)
		UNewMeshMaterialProperties MaterialProperties; // 0x1C8(0x8)
		UConstructionPlaneMechanic PlaneMechanic; // 0x1D0(0x8)
		UMeshOpPreviewWithBackgroundCompute Preview; // 0x1D8(0x8)
		unsigned char UnknownData03_7[0x30]; // 0x1E0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.RevolveBoundaryTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SculptBrushProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x38 (0xE0 - 0xA8)
	class USculptBrushProperties : public UInteractiveToolPropertySet	
	{
	public:
		FBrushToolRadius BrushSize; // 0xA8(0x14)
		float BrushFalloffAmount; // 0xBC(0x4)
		bool bShowFalloff; // 0xC0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		float Depth; // 0xC4(0x4)
		bool bHitBackFaces; // 0xC8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		float FlowRate; // 0xCC(0x4)
		float Spacing; // 0xD0(0x4)
		float Lazyness; // 0xD4(0x4)
		bool bShowPerBrushProps; // 0xD8(0x1)
		bool bShowLazyness; // 0xD9(0x1)
		bool bShowFlowRate; // 0xDA(0x1)
		bool bShowSpacing; // 0xDB(0x1)
		unsigned char UnknownData05_7[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SculptBrushProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.KelvinBrushProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UKelvinBrushProperties : public UInteractiveToolPropertySet	
	{
	public:
		float FalloffDistance; // 0xA8(0x4)
		float Stiffness; // 0xAC(0x4)
		float Incompressiblity; // 0xB0(0x4)
		int32_t BrushSteps; // 0xB4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.KelvinBrushProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.WorkPlaneProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UWorkPlaneProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bPropertySetEnabled; // 0xA8(0x1)
		bool bShowGizmo; // 0xA9(0x1)
		unsigned char UnknownData02_6[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY
		FVector Position; // 0xB0(0x18)
		unsigned char UnknownData03_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		FQuat Rotation; // 0xD0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.WorkPlaneProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SculptMaxBrushProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class USculptMaxBrushProperties : public UInteractiveToolPropertySet	
	{
	public:
		float MaxHeight; // 0xA8(0x4)
		bool bFreezeCurrentHeight; // 0xAC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SculptMaxBrushProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SeamSculptToolBuilder
	// Inherited from UMeshSurfacePointMeshEditingToolBuilder -> UMeshSurfacePointToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class USeamSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SeamSculptToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SeamSculptToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class USeamSculptToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bShowWireframe; // 0xA8(0x1)
		bool bHitBackFaces; // 0xA9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SeamSculptToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SeamSculptTool
	// Inherited from UDynamicMeshBrushTool -> UBaseBrushTool -> UMeshSurfacePointTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0xF8 (0x3D0 - 0x2D8)
	class USeamSculptTool : public UDynamicMeshBrushTool	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY
		USeamSculptToolProperties Settings; // 0x2E0(0x8)
		UPreviewGeometry PreviewGeom; // 0x2E8(0x8)
		unsigned char UnknownData03_7[0xE0]; // 0x2F0(0xE0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SeamSculptTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SelfUnionMeshesToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bTrimFlaps; // 0xA8(0x1)
		bool bTryFixHoles; // 0xA9(0x1)
		bool bTryCollapseEdges; // 0xAA(0x1)
		unsigned char UnknownData02_6[0x1]; // 0xAB(0x1) UNKNOWN PROPERTY
		float WindingThreshold; // 0xAC(0x4)
		bool bShowNewBoundaryEdges; // 0xB0(0x1)
		bool bOnlyUseFirstMeshMaterials; // 0xB1(0x1)
		unsigned char UnknownData03_7[0x6]; // 0xB2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SelfUnionMeshesToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SelfUnionMeshesTool
	// Inherited from UBaseCreateFromSelectedTool -> UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x48 (0x150 - 0x108)
	class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool	
	{
	public:
		USelfUnionMeshesToolProperties Properties; // 0x108(0x8)
		ULineSetComponent DrawnLineSet; // 0x110(0x8)
		unsigned char UnknownData01_7[0x38]; // 0x118(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SelfUnionMeshesTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SelfUnionMeshesToolBuilder
	// Inherited from UBaseCreateFromSelectedToolBuilder -> UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SelfUnionMeshesToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SmoothMeshToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class USmoothMeshToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		ESmoothMeshToolSmoothType SmoothingType; // 0xA8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SmoothMeshToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.IterativeSmoothProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UIterativeSmoothProperties : public UInteractiveToolPropertySet	
	{
	public:
		float SmoothingPerStep; // 0xA8(0x4)
		int32_t Steps; // 0xAC(0x4)
		bool bSmoothBoundary; // 0xB0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.IterativeSmoothProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.DiffusionSmoothProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UDiffusionSmoothProperties : public UInteractiveToolPropertySet	
	{
	public:
		float SmoothingPerStep; // 0xA8(0x4)
		int32_t Steps; // 0xAC(0x4)
		bool bPreserveUVs; // 0xB0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.DiffusionSmoothProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.ImplicitSmoothProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UImplicitSmoothProperties : public UInteractiveToolPropertySet	
	{
	public:
		float SmoothSpeed; // 0xA8(0x4)
		float Smoothness; // 0xAC(0x4)
		bool bPreserveUVs; // 0xB0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xB1(0x3) UNKNOWN PROPERTY
		float VolumeCorrection; // 0xB4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.ImplicitSmoothProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SmoothWeightMapSetProperties
	// Inherited from UWeightMapSetProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xD0 - 0xC8)
	class USmoothWeightMapSetProperties : public UWeightMapSetProperties	
	{
	public:
		float MinSmoothMultiplier; // 0xC8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SmoothWeightMapSetProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SmoothMeshTool
	// Inherited from UBaseMeshProcessingTool -> USingleTargetWithSelectionTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x30 (0x4A0 - 0x470)
	class USmoothMeshTool : public UBaseMeshProcessingTool	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x470(0x8) UNKNOWN PROPERTY
		USmoothMeshToolProperties SmoothProperties; // 0x478(0x8)
		UIterativeSmoothProperties IterativeProperties; // 0x480(0x8)
		UDiffusionSmoothProperties DiffusionProperties; // 0x488(0x8)
		UImplicitSmoothProperties ImplicitProperties; // 0x490(0x8)
		USmoothWeightMapSetProperties WeightMapProperties; // 0x498(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SmoothMeshTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SmoothMeshToolBuilder
	// Inherited from UBaseMeshProcessingToolBuilder -> USingleTargetWithSelectionToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SmoothMeshToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SplitMeshesToolBuilder
	// Inherited from UMultiTargetWithSelectionToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USplitMeshesToolBuilder : public UMultiTargetWithSelectionToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SplitMeshesToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SplitMeshesToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class USplitMeshesToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		ESplitMeshesMethod SplitMethod; // 0xA8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		double ConnectVerticesThreshold; // 0xB0(0x8)
		bool bTransferMaterials; // 0xB8(0x1)
		bool bShowPreview; // 0xB9(0x1)
		bool bIsInSelectionMode; // 0xBA(0x1)
		unsigned char UnknownData03_7[0x5]; // 0xBB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SplitMeshesToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.SplitMeshesTool
	// Inherited from UMultiTargetWithSelectionTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x50 (0x138 - 0xE8)
	class USplitMeshesTool : public UMultiTargetWithSelectionTool	
	{
	public:
		USplitMeshesToolProperties BasicProperties; // 0xE8(0x8)
		UCreateMeshObjectTypeProperties OutputTypeProperties; // 0xF0(0x8)
		unsigned char UnknownData01_6[0x28]; // 0xF8(0x28) UNKNOWN PROPERTY
		TArray PerTargetPreviews; // 0x120(0x10)
		UMaterialInterface PreviewMaterial; // 0x130(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.SplitMeshesTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.TransferMeshToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTransferMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.TransferMeshToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.TransferMeshToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x78 (0x120 - 0xA8)
	class UTransferMeshToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bTransferMaterials; // 0xA8(0x1)
		bool bTransferCollision; // 0xA9(0x1)
		unsigned char UnknownData05_6[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY
		FString SourceLOD; // 0xB0(0x10)
		FString TargetLod; // 0xC0(0x10)
		bool bIsStaticMeshSource; // 0xD0(0x1)
		unsigned char UnknownData06_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		TArray SourceLODNamesList; // 0xD8(0x10)
		unsigned char UnknownData07_6[0x10]; // 0xE8(0x10) UNKNOWN PROPERTY
		TArray TargetLODNamesList; // 0xF8(0x10)
		unsigned char UnknownData08_6[0x10]; // 0x108(0x10) UNKNOWN PROPERTY
		bool bIsStaticMeshTarget; // 0x118(0x1)
		unsigned char UnknownData09_7[0x7]; // 0x119(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.TransferMeshToolProperties");
			return ret;
		}

		TArray GetTargetLODNamesFunc(); // Flags: Final|Native|Public|Const 0x7FF414CC86B8
		TArray GetSourceLODNamesFunc(); // Flags: Final|Native|Public|Const 0x7FF414CC85D8
	};


	// Class MeshModelingToolsExp.TransferMeshTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x10 (0xC8 - 0xB8)
	class UTransferMeshTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		UTransferMeshToolProperties BasicProperties; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.TransferMeshTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.TransformMeshesToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTransformMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.TransformMeshesToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.TransformMeshesToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UTransformMeshesToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		ETransformMeshesTransformMode TransformMode; // 0xA8(0x1)
		bool bApplyToInstances; // 0xA9(0x1)
		bool bSetPivotMode; // 0xAA(0x1)
		bool bEnableSnapDragging; // 0xAB(0x1)
		ETransformMeshesSnapDragSource SnapDragSource; // 0xAC(0x1)
		ETransformMeshesSnapDragRotationMode RotationMode; // 0xAD(0x1)
		bool bHaveInstances; // 0xAE(0x1)
		unsigned char UnknownData01_7[0x1]; // 0xAF(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.TransformMeshesToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.TransformMeshesTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0xE8 (0x1A0 - 0xB8)
	class UTransformMeshesTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0xB8(0x10) UNKNOWN PROPERTY
		UTransformMeshesToolProperties TransformProps; // 0xC8(0x8)
		TArray ActiveGizmos; // 0xD0(0x10)
		UDragAlignmentMechanic DragAlignmentMechanic; // 0xE0(0x8)
		unsigned char UnknownData03_7[0xB8]; // 0xE8(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.TransformMeshesTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.TriangulateSplinesToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x38 (0xE0 - 0xA8)
	class UTriangulateSplinesToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		double ErrorTolerance; // 0xA8(0x8)
		EFlattenCurveMethod FlattenMethod; // 0xB0(0x1)
		ECombineCurvesMethod CombineMethod; // 0xB1(0x1)
		unsigned char UnknownData03_6[0x6]; // 0xB2(0x6) UNKNOWN PROPERTY
		double Thickness; // 0xB8(0x8)
		bool bFlipResult; // 0xC0(0x1)
		EOffsetOpenCurvesMethod OpenCurves; // 0xC1(0x1)
		unsigned char UnknownData04_6[0x6]; // 0xC2(0x6) UNKNOWN PROPERTY
		double CurveOffset; // 0xC8(0x8)
		EOffsetClosedCurvesMethod OffsetClosedCurves; // 0xD0(0x1)
		EOpenCurveEndShapes EndShapes; // 0xD1(0x1)
		EOffsetJoinMethod JoinMethod; // 0xD2(0x1)
		unsigned char UnknownData05_6[0x5]; // 0xD3(0x5) UNKNOWN PROPERTY
		double MiterLimit; // 0xD8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.TriangulateSplinesToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.TriangulateSplinesTool
	// Inherited from UBaseMeshFromSplinesTool -> UInteractiveTool -> UObject
	// Size: 0x18 (0x118 - 0x100)
	class UTriangulateSplinesTool : public UBaseMeshFromSplinesTool	
	{
	public:
		UTriangulateSplinesToolProperties TriangulateProperties; // 0x100(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x108(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.TriangulateSplinesTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.TriangulateSplinesToolBuilder
	// Inherited from UBaseMeshFromSplinesToolBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTriangulateSplinesToolBuilder : public UBaseMeshFromSplinesToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.TriangulateSplinesToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VolumeToMeshToolBuilder
	// Inherited from UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVolumeToMeshToolBuilder : public UInteractiveToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VolumeToMeshToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VolumeToMeshToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UVolumeToMeshToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bWeldEdges; // 0xA8(0x1)
		bool bAutoRepair; // 0xA9(0x1)
		bool bOptimizeMesh; // 0xAA(0x1)
		bool bShowWireframe; // 0xAB(0x1)
		unsigned char UnknownData01_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VolumeToMeshToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VolumeToMeshTool
	// Inherited from UInteractiveTool -> UObject
	// Size: 0x268 (0x300 - 0x98)
	class UVolumeToMeshTool : public UInteractiveTool	
	{
	public:
		UVolumeToMeshToolProperties Settings; // 0x98(0x8)
		UCreateMeshObjectTypeProperties OutputTypeProperties; // 0xA0(0x8)
		UPreviewMesh PreviewMesh; // 0xA8(0x8)
		TLazyObjectPtr TargetVolume; // 0xB0(0x18)
		ULineSetComponent VolumeEdgesSet; // 0xC8(0x8)
		unsigned char UnknownData01_7[0x230]; // 0xD0(0x230) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VolumeToMeshTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VoxelBlendMeshesToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		double BlendPower; // 0xA8(0x8)
		double BlendFalloff; // 0xB0(0x8)
		EVoxelBlendOperation Operation; // 0xB8(0x1)
		bool bVoxWrap; // 0xB9(0x1)
		bool bRemoveInternalsAfterVoxWrap; // 0xBA(0x1)
		unsigned char UnknownData01_6[0x5]; // 0xBB(0x5) UNKNOWN PROPERTY
		double ThickenShells; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VoxelBlendMeshesToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VoxelBlendMeshesTool
	// Inherited from UBaseVoxelTool -> UBaseCreateFromSelectedTool -> UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x8 (0x128 - 0x120)
	class UVoxelBlendMeshesTool : public UBaseVoxelTool	
	{
	public:
		UVoxelBlendMeshesToolProperties BlendProperties; // 0x120(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VoxelBlendMeshesTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VoxelBlendMeshesToolBuilder
	// Inherited from UBaseCreateFromSelectedToolBuilder -> UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VoxelBlendMeshesToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VoxelMorphologyMeshesToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		EMorphologyOperation Operation; // 0xA8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		double Distance; // 0xB0(0x8)
		bool bVoxWrap; // 0xB8(0x1)
		bool bRemoveInternalsAfterVoxWrap; // 0xB9(0x1)
		unsigned char UnknownData03_6[0x6]; // 0xBA(0x6) UNKNOWN PROPERTY
		double ThickenShells; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VoxelMorphologyMeshesToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VoxelMorphologyMeshesTool
	// Inherited from UBaseVoxelTool -> UBaseCreateFromSelectedTool -> UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x8 (0x128 - 0x120)
	class UVoxelMorphologyMeshesTool : public UBaseVoxelTool	
	{
	public:
		UVoxelMorphologyMeshesToolProperties MorphologyProperties; // 0x120(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VoxelMorphologyMeshesTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VoxelMorphologyMeshesToolBuilder
	// Inherited from UBaseCreateFromSelectedToolBuilder -> UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VoxelMorphologyMeshesToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VoxelSolidifyMeshesToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		double WindingThreshold; // 0xA8(0x8)
		double ExtendBounds; // 0xB0(0x8)
		int32_t SurfaceSearchSteps; // 0xB8(0x4)
		bool bSolidAtBoundaries; // 0xBC(0x1)
		bool bApplyThickenShells; // 0xBD(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xBE(0x2) UNKNOWN PROPERTY
		double ThickenShells; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VoxelSolidifyMeshesToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VoxelSolidifyMeshesTool
	// Inherited from UBaseVoxelTool -> UBaseCreateFromSelectedTool -> UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x8 (0x128 - 0x120)
	class UVoxelSolidifyMeshesTool : public UBaseVoxelTool	
	{
	public:
		UVoxelSolidifyMeshesToolProperties SolidifyProperties; // 0x120(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VoxelSolidifyMeshesTool");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.VoxelSolidifyMeshesToolBuilder
	// Inherited from UBaseCreateFromSelectedToolBuilder -> UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.VoxelSolidifyMeshesToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.WeldMeshEdgesToolBuilder
	// Inherited from USingleTargetWithSelectionToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWeldMeshEdgesToolBuilder : public USingleTargetWithSelectionToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.WeldMeshEdgesToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.WeldMeshEdgesToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UWeldMeshEdgesToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		float Tolerance; // 0xA8(0x4)
		bool bOnlyUnique; // 0xAC(0x1)
		bool bResolveTJunctions; // 0xAD(0x1)
		bool bSplitBowties; // 0xAE(0x1)
		unsigned char UnknownData03_6[0x1]; // 0xAF(0x1) UNKNOWN PROPERTY
		int32_t InitialEdges; // 0xB0(0x4)
		int32_t RemainingEdges; // 0xB4(0x4)
		EWeldMeshEdgesAttributeUIMode AttrWeldingMode; // 0xB8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		float SplitNormalThreshold; // 0xBC(0x4)
		float SplitTangentsThreshold; // 0xC0(0x4)
		float SplitUVThreshold; // 0xC4(0x4)
		float SplitColorThreshold; // 0xC8(0x4)
		unsigned char UnknownData05_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.WeldMeshEdgesToolProperties");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.WeldMeshEdgesOperatorFactory
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UWeldMeshEdgesOperatorFactory : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UWeldMeshEdgesTool WeldMeshEdgesTool; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.WeldMeshEdgesOperatorFactory");
			return ret;
		}
	};


	// Class MeshModelingToolsExp.WeldMeshEdgesTool
	// Inherited from USingleTargetWithSelectionTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x80 (0x1A0 - 0x120)
	class UWeldMeshEdgesTool : public USingleTargetWithSelectionTool	
	{
	public:
		UWeldMeshEdgesToolProperties Settings; // 0x120(0x8)
		UMeshOpPreviewWithBackgroundCompute PreviewCompute; // 0x128(0x8)
		UMeshElementsVisualizer MeshElementsDisplay; // 0x130(0x8)
		UWeldMeshEdgesOperatorFactory OperatorFactory; // 0x138(0x8)
		unsigned char UnknownData01_7[0x60]; // 0x140(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingToolsExp.WeldMeshEdgesTool");
			return ret;
		}
	};

}
