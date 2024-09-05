#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ModelingComponents
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ModelingComponents.MeshTopologySelectionMechanic
	// Inherited from UInteractionMechanic -> UObject
	// Size: 0xB00 (0xB30 - 0x30)
	class UMeshTopologySelectionMechanic : public UInteractionMechanic	
	{
	public:
		unsigned char UnknownData05_3[0x48]; // 0x30(0x48) UNKNOWN PROPERTY
		UMeshTopologySelectionMechanicProperties Properties; // 0x78(0x8)
		unsigned char UnknownData06_6[0x60]; // 0x80(0x60) UNKNOWN PROPERTY
		UMouseHoverBehavior HoverBehavior; // 0xE0(0x8)
		USingleClickOrDragInputBehavior ClickOrDragBehavior; // 0xE8(0x8)
		URectangleMarqueeMechanic MarqueeMechanic; // 0xF0(0x8)
		EMarqueeSelectionUpdateType MarqueeSelectionUpdateType; // 0xF8(0x4)
		unsigned char UnknownData07_6[0x604]; // 0xFC(0x604) UNKNOWN PROPERTY
		APreviewGeometryActor PreviewGeometryActor; // 0x700(0x8)
		UTriangleSetComponent DrawnTriangleSetComponent; // 0x708(0x8)
		unsigned char UnknownData08_6[0x50]; // 0x710(0x50) UNKNOWN PROPERTY
		UMaterialInterface HighlightedFaceMaterial; // 0x760(0x8)
		unsigned char UnknownData09_7[0x3C8]; // 0x768(0x3C8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.MeshTopologySelectionMechanic");
			return ret;
		}
	};


	// Class ModelingComponents.BoundarySelectionMechanic
	// Inherited from UMeshTopologySelectionMechanic -> UInteractionMechanic -> UObject
	// Size: 0x0 (0xB30 - 0xB30)
	class UBoundarySelectionMechanic : public UMeshTopologySelectionMechanic	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.BoundarySelectionMechanic");
			return ret;
		}
	};


	// Class ModelingComponents.DynamicMeshCommitter
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDynamicMeshCommitter : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.DynamicMeshCommitter");
			return ret;
		}
	};


	// Class ModelingComponents.DynamicMeshProvider
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDynamicMeshProvider : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.DynamicMeshProvider");
			return ret;
		}
	};


	// Class ModelingComponents.PersistentDynamicMeshSource
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPersistentDynamicMeshSource : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.PersistentDynamicMeshSource");
			return ret;
		}
	};


	// Class ModelingComponents.GeometrySelectionVisualizationProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x60 (0x108 - 0xA8)
	class UGeometrySelectionVisualizationProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bEnableShowTriangleROIBorder; // 0xA8(0x1)
		bool bEnableShowEdgeSelectionVertices; // 0xA9(0x1)
		EGeometrySelectionElementType SelectionElementType; // 0xAA(0x1)
		EGeometrySelectionTopologyType SelectionTopologyType; // 0xAB(0x1)
		bool bShowSelection; // 0xAC(0x1)
		bool bShowTriangleROIBorder; // 0xAD(0x1)
		bool bShowHidden; // 0xAE(0x1)
		bool bShowEdgeSelectionVertices; // 0xAF(0x1)
		float LineThickness; // 0xB0(0x4)
		float PointSize; // 0xB4(0x4)
		float DepthBias; // 0xB8(0x4)
		FColor FaceColor; // 0xBC(0x4)
		FColor LineColor; // 0xC0(0x4)
		FColor PointColor; // 0xC4(0x4)
		FColor TriangleROIBorderColor; // 0xC8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		UMaterialInterface TriangleMaterial; // 0xD0(0x8)
		UMaterialInterface LineMaterial; // 0xD8(0x8)
		UMaterialInterface PointMaterial; // 0xE0(0x8)
		UMaterialInterface TriangleMaterialShowingHidden; // 0xE8(0x8)
		UMaterialInterface LineMaterialShowingHidden; // 0xF0(0x8)
		UMaterialInterface PointMaterialShowingHidden; // 0xF8(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x100(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.GeometrySelectionVisualizationProperties");
			return ret;
		}
	};


	// Class ModelingComponents.InteractiveToolActivity
	// Inherited from UInteractionMechanic -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UInteractiveToolActivity : public UInteractionMechanic	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.InteractiveToolActivity");
			return ret;
		}
	};


	// Class ModelingComponents.ToolActivityHost
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UToolActivityHost : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.ToolActivityHost");
			return ret;
		}
	};


	// Class ModelingComponents.MeshTopologySelectionMechanicProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UMeshTopologySelectionMechanicProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bSelectVertices; // 0xA8(0x1)
		bool bSelectEdges; // 0xA9(0x1)
		bool bSelectFaces; // 0xAA(0x1)
		bool bSelectEdgeLoops; // 0xAB(0x1)
		bool bSelectEdgeRings; // 0xAC(0x1)
		bool bHitBackFaces; // 0xAD(0x1)
		bool bEnableMarquee; // 0xAE(0x1)
		bool bMarqueeIgnoreOcclusion; // 0xAF(0x1)
		bool bPreferProjectedElement; // 0xB0(0x1)
		bool bSelectDownRay; // 0xB1(0x1)
		bool bIgnoreOcclusion; // 0xB2(0x1)
		unsigned char UnknownData01_7[0xD]; // 0xB3(0xD) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.MeshTopologySelectionMechanicProperties");
			return ret;
		}

		void SelectAll(); // Flags: Final|Native|Public 0x7FF414C44C78
		void InvertSelection(); // Flags: Final|Native|Public 0x7FF414C44B98
	};


	// Class ModelingComponents.GeometrySelectionEditCommandArguments
	// Inherited from UInteractiveCommandArguments -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UGeometrySelectionEditCommandArguments : public UInteractiveCommandArguments	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x30(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.GeometrySelectionEditCommandArguments");
			return ret;
		}
	};


	// Class ModelingComponents.GeometrySelectionEditCommandResult
	// Inherited from UInteractiveCommandResult -> UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UGeometrySelectionEditCommandResult : public UInteractiveCommandResult	
	{
	public:
		unsigned char UnknownData01_1[0x78]; // 0x28(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.GeometrySelectionEditCommandResult");
			return ret;
		}
	};


	// Class ModelingComponents.GeometrySelectionEditCommand
	// Inherited from UInteractiveCommand -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometrySelectionEditCommand : public UInteractiveCommand	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.GeometrySelectionEditCommand");
			return ret;
		}
	};


	// Class ModelingComponents.ToolHostCustomizationAPI
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UToolHostCustomizationAPI : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.ToolHostCustomizationAPI");
			return ret;
		}
	};


	// Class ModelingComponents.VoxelProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UVoxelProperties : public UInteractiveToolPropertySet	
	{
	public:
		int32_t VoxelCount; // 0xA8(0x4)
		bool bAutoSimplify; // 0xAC(0x1)
		bool bRemoveInternalSurfaces; // 0xAD(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xAE(0x2) UNKNOWN PROPERTY
		double SimplifyMaxErrorFactor; // 0xB0(0x8)
		double CubeRootMinComponentVolume; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.VoxelProperties");
			return ret;
		}
	};


	// Class ModelingComponents.MultiSelectionMeshEditingToolBuilder
	// Inherited from UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMultiSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.MultiSelectionMeshEditingToolBuilder");
			return ret;
		}
	};


	// Class ModelingComponents.BaseCreateFromSelectedToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBaseCreateFromSelectedToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.BaseCreateFromSelectedToolBuilder");
			return ret;
		}
	};


	// Class ModelingComponents.OnAcceptHandleSourcesPropertiesBase
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UOnAcceptHandleSourcesPropertiesBase : public UInteractiveToolPropertySet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.OnAcceptHandleSourcesPropertiesBase");
			return ret;
		}
	};


	// Class ModelingComponents.OnAcceptHandleSourcesProperties
	// Inherited from UOnAcceptHandleSourcesPropertiesBase -> UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UOnAcceptHandleSourcesProperties : public UOnAcceptHandleSourcesPropertiesBase	
	{
	public:
		EHandleSourcesMethod HandleInputs; // 0xA8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.OnAcceptHandleSourcesProperties");
			return ret;
		}
	};


	// Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
	// Inherited from UOnAcceptHandleSourcesProperties -> UOnAcceptHandleSourcesPropertiesBase -> UInteractiveToolPropertySet -> UObject
	// Size: 0x28 (0xD8 - 0xB0)
	class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties	
	{
	public:
		EBaseCreateFromSelectedTargetType OutputWriteTo; // 0xB0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FString OutputNewName; // 0xB8(0x10)
		FString OutputExistingName; // 0xC8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.BaseCreateFromSelectedHandleSourceProperties");
			return ret;
		}
	};


	// Class ModelingComponents.BaseCreateFromSelectedCollisionProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UBaseCreateFromSelectedCollisionProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bTransferCollision; // 0xA8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.BaseCreateFromSelectedCollisionProperties");
			return ret;
		}
	};


	// Class ModelingComponents.TransformInputsToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UTransformInputsToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bShowTransformGizmo; // 0xA8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.TransformInputsToolProperties");
			return ret;
		}
	};


	// Class ModelingComponents.MultiSelectionMeshEditingTool
	// Inherited from UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x8 (0xB8 - 0xB0)
	class UMultiSelectionMeshEditingTool : public UMultiSelectionTool	
	{
	public:
		TWeakObjectPtr TargetWorld; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.MultiSelectionMeshEditingTool");
			return ret;
		}
	};


	// Class ModelingComponents.BaseCreateFromSelectedTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x50 (0x108 - 0xB8)
	class UBaseCreateFromSelectedTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		UTransformInputsToolProperties TransformProperties; // 0xC0(0x8)
		UCreateMeshObjectTypeProperties OutputTypeProperties; // 0xC8(0x8)
		UBaseCreateFromSelectedHandleSourceProperties HandleSourcesProperties; // 0xD0(0x8)
		UBaseCreateFromSelectedCollisionProperties CollisionProperties; // 0xD8(0x8)
		UMeshOpPreviewWithBackgroundCompute Preview; // 0xE0(0x8)
		TArray TransformProxies; // 0xE8(0x10)
		TArray TransformGizmos; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.BaseCreateFromSelectedTool");
			return ret;
		}
	};


	// Class ModelingComponents.SingleTargetWithSelectionToolBuilder
	// Inherited from UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USingleTargetWithSelectionToolBuilder : public UInteractiveToolWithToolTargetsBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.SingleTargetWithSelectionToolBuilder");
			return ret;
		}
	};


	// Class ModelingComponents.BaseMeshProcessingToolBuilder
	// Inherited from USingleTargetWithSelectionToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBaseMeshProcessingToolBuilder : public USingleTargetWithSelectionToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.BaseMeshProcessingToolBuilder");
			return ret;
		}
	};


	// Class ModelingComponents.SingleTargetWithSelectionTool
	// Inherited from USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x78 (0x120 - 0xA8)
	class USingleTargetWithSelectionTool : public USingleSelectionTool	
	{
	public:
		TWeakObjectPtr TargetWorld; // 0xA8(0x8)
		unsigned char UnknownData01_6[0x60]; // 0xB0(0x60) UNKNOWN PROPERTY
		UGeometrySelectionVisualizationProperties GeometrySelectionVizProperties; // 0x110(0x8)
		UPreviewGeometry GeometrySelectionViz; // 0x118(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.SingleTargetWithSelectionTool");
			return ret;
		}
	};


	// Class ModelingComponents.BaseMeshProcessingTool
	// Inherited from USingleTargetWithSelectionTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x350 (0x470 - 0x120)
	class UBaseMeshProcessingTool : public USingleTargetWithSelectionTool	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x120(0x18) UNKNOWN PROPERTY
		UMeshOpPreviewWithBackgroundCompute Preview; // 0x138(0x8)
		unsigned char UnknownData03_7[0x330]; // 0x140(0x330) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.BaseMeshProcessingTool");
			return ret;
		}
	};


	// Class ModelingComponents.BaseVoxelTool
	// Inherited from UBaseCreateFromSelectedTool -> UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x18 (0x120 - 0x108)
	class UBaseVoxelTool : public UBaseCreateFromSelectedTool	
	{
	public:
		UVoxelProperties VoxProperties; // 0x108(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x110(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.BaseVoxelTool");
			return ret;
		}
	};


	// Class ModelingComponents.MeshSurfacePointMeshEditingToolBuilder
	// Inherited from UMeshSurfacePointToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UMeshSurfacePointMeshEditingToolBuilder : public UMeshSurfacePointToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.MeshSurfacePointMeshEditingToolBuilder");
			return ret;
		}
	};


	// Class ModelingComponents.MultiTargetWithSelectionToolBuilder
	// Inherited from UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMultiTargetWithSelectionToolBuilder : public UInteractiveToolWithToolTargetsBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.MultiTargetWithSelectionToolBuilder");
			return ret;
		}
	};


	// Class ModelingComponents.MultiTargetWithSelectionTool
	// Inherited from UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x38 (0xE8 - 0xB0)
	class UMultiTargetWithSelectionTool : public UMultiSelectionTool	
	{
	public:
		TWeakObjectPtr TargetWorld; // 0xB0(0x8)
		unsigned char UnknownData01_6[0x20]; // 0xB8(0x20) UNKNOWN PROPERTY
		UGeometrySelectionVisualizationProperties GeometrySelectionVizProperties; // 0xD8(0x8)
		UPreviewGeometry GeometrySelectionViz; // 0xE0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.MultiTargetWithSelectionTool");
			return ret;
		}
	};


	// Class ModelingComponents.SingleSelectionMeshEditingToolBuilder
	// Inherited from UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USingleSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.SingleSelectionMeshEditingToolBuilder");
			return ret;
		}
	};


	// Class ModelingComponents.SingleSelectionMeshEditingTool
	// Inherited from USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class USingleSelectionMeshEditingTool : public USingleSelectionTool	
	{
	public:
		TWeakObjectPtr TargetWorld; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.SingleSelectionMeshEditingTool");
			return ret;
		}
	};


	// Class ModelingComponents.DynamicMeshReplacementChangeTarget
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UDynamicMeshReplacementChangeTarget : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x28(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.DynamicMeshReplacementChangeTarget");
			return ret;
		}
	};


	// Class ModelingComponents.OctreeDynamicMeshComponent
	// Inherited from UBaseDynamicMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x120 (0x680 - 0x560)
	class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent	
	{
	public:
		unsigned char UnknownData02_3[0x60]; // 0x560(0x60) UNKNOWN PROPERTY
		UDynamicMesh MeshObject; // 0x5C0(0x8)
		unsigned char UnknownData03_7[0xB8]; // 0x5C8(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.OctreeDynamicMeshComponent");
			return ret;
		}

		void SetDynamicMesh(UDynamicMesh NewMesh); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C44D58
	};


	// Class ModelingComponents.LineSetComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x580 - 0x4F8)
	class ULineSetComponent : public UMeshComponent	
	{
	public:
		UMaterialInterface LineMaterial; // 0x4F8(0x8)
		FBoxSphereBounds Bounds; // 0x500(0x38)
		bool bBoundsDirty; // 0x538(0x1)
		unsigned char UnknownData01_7[0x47]; // 0x539(0x47) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.LineSetComponent");
			return ret;
		}

		void SetLineMaterial(UMaterialInterface InLineMaterial); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C44FF8
		void Clear(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C44F18
		int32_t AddLines(TArray& InStart, TArray& InEnd, FColor& InColor, float InThickness, float InDepthBias); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C44E38
	};


	// Class ModelingComponents.MeshElementsVisualizerProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UMeshElementsVisualizerProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bVisible; // 0xA8(0x1)
		bool bShowWireframe; // 0xA9(0x1)
		bool bShowBorders; // 0xAA(0x1)
		bool bShowUVSeams; // 0xAB(0x1)
		bool bShowNormalSeams; // 0xAC(0x1)
		bool bShowTangentSeams; // 0xAD(0x1)
		bool bShowColorSeams; // 0xAE(0x1)
		unsigned char UnknownData02_6[0x1]; // 0xAF(0x1) UNKNOWN PROPERTY
		float ThicknessScale; // 0xB0(0x4)
		FColor WireframeColor; // 0xB4(0x4)
		FColor BoundaryEdgeColor; // 0xB8(0x4)
		FColor UVSeamColor; // 0xBC(0x4)
		FColor NormalSeamColor; // 0xC0(0x4)
		FColor TangentSeamColor; // 0xC4(0x4)
		FColor ColorSeamColor; // 0xC8(0x4)
		float DepthBias; // 0xCC(0x4)
		bool bAdjustDepthBiasUsingMeshSize; // 0xD0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.MeshElementsVisualizerProperties");
			return ret;
		}
	};


	// Class ModelingComponents.PreviewGeometry
	// Inherited from UObject
	// Size: 0xF8 (0x120 - 0x28)
	class UPreviewGeometry : public UObject	
	{
	public:
		APreviewGeometryActor ParentActor; // 0x28(0x8)
		TMap TriangleSets; // 0x30(0x50)
		TMap LineSets; // 0x80(0x50)
		TMap PointSets; // 0xD0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.PreviewGeometry");
			return ret;
		}

		bool SetPointSetVisibility(FString PointSetIdentifier, bool bVisible); // Flags: Final|Native|Public 0x7FF414C46258
		bool SetPointSetMaterial(FString PointSetIdentifier, UMaterialInterface NewMaterial); // Flags: Final|Native|Public 0x7FF414C46178
		bool SetLineSetVisibility(FString LineSetIdentifier, bool bVisible); // Flags: Final|Native|Public 0x7FF414C46098
		bool SetLineSetMaterial(FString LineSetIdentifier, UMaterialInterface NewMaterial); // Flags: Final|Native|Public 0x7FF414C45FB8
		void SetAllPointSetsMaterial(UMaterialInterface Material); // Flags: Final|Native|Public 0x7FF414C45ED8
		void SetAllLineSetsMaterial(UMaterialInterface Material); // Flags: Final|Native|Public 0x7FF414C45DF8
		bool RemoveTriangleSet(FString TriangleSetIdentifier, bool bDestroy); // Flags: Final|Native|Public 0x7FF414C45D18
		bool RemovePointSet(FString PointSetIdentifier, bool bDestroy); // Flags: Final|Native|Public 0x7FF414C45C38
		bool RemoveLineSet(FString LineSetIdentifier, bool bDestroy); // Flags: Final|Native|Public 0x7FF414C45B58
		void RemoveAllTriangleSets(bool bDestroy); // Flags: Final|Native|Public 0x7FF414C45A78
		void RemoveAllPointSets(bool bDestroy); // Flags: Final|Native|Public 0x7FF414C45998
		void RemoveAllLineSets(bool bDestroy); // Flags: Final|Native|Public 0x7FF414C458B8
		APreviewGeometryActor GetActor(); // Flags: Final|Native|Public|Const 0x7FF414C457D8
		UTriangleSetComponent FindTriangleSet(FString TriangleSetIdentifier); // Flags: Final|Native|Public 0x7FF414C456F8
		UPointSetComponent FindPointSet(FString PointSetIdentifier); // Flags: Final|Native|Public 0x7FF414C45618
		ULineSetComponent FindLineSet(FString LineSetIdentifier); // Flags: Final|Native|Public 0x7FF414C45538
		void Disconnect(); // Flags: Final|Native|Public 0x7FF414C45458
		void CreateInWorld(UWorld World, FTransform& WithTransform); // Flags: Final|Native|Public|HasOutParms|HasDefaults 0x7FF414C45378
		UTriangleSetComponent AddTriangleSet(FString TriangleSetIdentifier); // Flags: Final|Native|Public 0x7FF414C45298
		UPointSetComponent AddPointSet(FString PointSetIdentifier); // Flags: Final|Native|Public 0x7FF414C451B8
		ULineSetComponent AddLineSet(FString LineSetIdentifier); // Flags: Final|Native|Public 0x7FF414C450D8
	};


	// Class ModelingComponents.MeshElementsVisualizer
	// Inherited from UPreviewGeometry -> UObject
	// Size: 0x28 (0x148 - 0x120)
	class UMeshElementsVisualizer : public UPreviewGeometry	
	{
	public:
		UMeshElementsVisualizerProperties Settings; // 0x120(0x8)
		UMeshWireframeComponent WireframeComponent; // 0x128(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x130(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.MeshElementsVisualizer");
			return ret;
		}
	};


	// Class ModelingComponents.MeshWireframeComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xA8 (0x5A0 - 0x4F8)
	class UMeshWireframeComponent : public UMeshComponent	
	{
	public:
		float LineDepthBias; // 0x4F8(0x4)
		float LineDepthBiasSizeScale; // 0x4FC(0x4)
		float ThicknessScale; // 0x500(0x4)
		bool bEnableWireframe; // 0x504(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x505(0x3) UNKNOWN PROPERTY
		FColor WireframeColor; // 0x508(0x4)
		float WireframeThickness; // 0x50C(0x4)
		bool bEnableBoundaryEdges; // 0x510(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x511(0x3) UNKNOWN PROPERTY
		FColor BoundaryEdgeColor; // 0x514(0x4)
		float BoundaryEdgeThickness; // 0x518(0x4)
		bool bEnableUVSeams; // 0x51C(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x51D(0x3) UNKNOWN PROPERTY
		FColor UVSeamColor; // 0x520(0x4)
		float UVSeamThickness; // 0x524(0x4)
		bool bEnableNormalSeams; // 0x528(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x529(0x3) UNKNOWN PROPERTY
		FColor NormalSeamColor; // 0x52C(0x4)
		float NormalSeamThickness; // 0x530(0x4)
		bool bEnableTangentSeams; // 0x534(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x535(0x3) UNKNOWN PROPERTY
		FColor TangentSeamColor; // 0x538(0x4)
		float TangentSeamThickness; // 0x53C(0x4)
		bool bEnableColorSeams; // 0x540(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x541(0x3) UNKNOWN PROPERTY
		FColor ColorSeamColor; // 0x544(0x4)
		float ColorSeamThickness; // 0x548(0x4)
		unsigned char UnknownData14_6[0x4]; // 0x54C(0x4) UNKNOWN PROPERTY
		UMaterialInterface LineMaterial; // 0x550(0x8)
		FBoxSphereBounds LocalBounds; // 0x558(0x38)
		unsigned char UnknownData15_7[0x10]; // 0x590(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.MeshWireframeComponent");
			return ret;
		}
	};


	// Class ModelingComponents.PointSetComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x580 - 0x4F8)
	class UPointSetComponent : public UMeshComponent	
	{
	public:
		UMaterialInterface PointMaterial; // 0x4F8(0x8)
		FBoxSphereBounds Bounds; // 0x500(0x38)
		bool bBoundsDirty; // 0x538(0x1)
		unsigned char UnknownData01_7[0x47]; // 0x539(0x47) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.PointSetComponent");
			return ret;
		}
	};


	// Class ModelingComponents.PreviewMesh
	// Inherited from UObject
	// Size: 0x118 (0x140 - 0x28)
	class UPreviewMesh : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		bool bBuildSpatialDataStructure; // 0x40(0x1)
		unsigned char UnknownData04_6[0xF]; // 0x41(0xF) UNKNOWN PROPERTY
		UDynamicMeshComponent DynamicMeshComponent; // 0x50(0x8)
		unsigned char UnknownData05_7[0xE8]; // 0x58(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.PreviewMesh");
			return ret;
		}
	};


	// Class ModelingComponents.PolyEditPreviewMesh
	// Inherited from UPreviewMesh -> UObject
	// Size: 0x340 (0x480 - 0x140)
	class UPolyEditPreviewMesh : public UPreviewMesh	
	{
	public:
		unsigned char UnknownData01_1[0x340]; // 0x140(0x340) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.PolyEditPreviewMesh");
			return ret;
		}
	};


	// Class ModelingComponents.PreviewGeometryActor
	// Inherited from AInternalToolFrameworkActor -> AActor -> UObject
	// Size: 0x0 (0x298 - 0x298)
	class APreviewGeometryActor : public AInternalToolFrameworkActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.PreviewGeometryActor");
			return ret;
		}
	};


	// Class ModelingComponents.TriangleSetComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x108 (0x600 - 0x4F8)
	class UTriangleSetComponent : public UMeshComponent	
	{
	public:
		FBoxSphereBounds Bounds; // 0x4F8(0x38)
		bool bBoundsDirty; // 0x530(0x1)
		unsigned char UnknownData01_7[0xCF]; // 0x531(0xCF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.TriangleSetComponent");
			return ret;
		}
	};


	// Class ModelingComponents.UVLayoutPreviewProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bEnabled; // 0xA8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		EUVLayoutPreviewSide Side; // 0xAC(0x4)
		float Scale; // 0xB0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FVector2D Offset; // 0xB8(0x10)
		bool bShowWireframe; // 0xC8(0x1)
		unsigned char UnknownData05_7[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.UVLayoutPreviewProperties");
			return ret;
		}
	};


	// Class ModelingComponents.UVLayoutPreview
	// Inherited from UObject
	// Size: 0x148 (0x170 - 0x28)
	class UUVLayoutPreview : public UObject	
	{
	public:
		UUVLayoutPreviewProperties Settings; // 0x28(0x8)
		UPreviewMesh PreviewMesh; // 0x30(0x8)
		UMeshElementsVisualizer MeshElementsVisualizer; // 0x38(0x8)
		UTriangleSetComponent TriangleComponent; // 0x40(0x8)
		bool bShowBackingRectangle; // 0x48(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		UMaterialInterface BackingRectangleMaterial; // 0x50(0x8)
		unsigned char UnknownData03_7[0x118]; // 0x58(0x118) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.UVLayoutPreview");
			return ret;
		}
	};


	// Class ModelingComponents.CollectSurfacePathMechanic
	// Inherited from UInteractionMechanic -> UObject
	// Size: 0x590 (0x5C0 - 0x30)
	class UCollectSurfacePathMechanic : public UInteractionMechanic	
	{
	public:
		unsigned char UnknownData01_1[0x590]; // 0x30(0x590) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.CollectSurfacePathMechanic");
			return ret;
		}
	};


	// Class ModelingComponents.CollisionPrimitivesMechanic
	// Inherited from UInteractionMechanic -> UObject
	// Size: 0x540 (0x570 - 0x30)
	class UCollisionPrimitivesMechanic : public UInteractionMechanic	
	{
	public:
		unsigned char UnknownData04_3[0x210]; // 0x30(0x210) UNKNOWN PROPERTY
		UPreviewGeometry PreviewGeometry; // 0x240(0x8)
		ULineSetComponent DrawnPrimitiveEdges; // 0x248(0x8)
		unsigned char UnknownData05_6[0x150]; // 0x250(0x150) UNKNOWN PROPERTY
		UTransformProxy TranslateTransformProxy; // 0x3A0(0x8)
		UTransformProxy SphereTransformProxy; // 0x3A8(0x8)
		UTransformProxy BoxTransformProxy; // 0x3B0(0x8)
		UTransformProxy CapsuleTransformProxy; // 0x3B8(0x8)
		UTransformProxy FullTransformProxy; // 0x3C0(0x8)
		UTransformProxy CurrentActiveProxy; // 0x3C8(0x8)
		UCombinedTransformGizmo TranslateTransformGizmo; // 0x3D0(0x8)
		UCombinedTransformGizmo SphereTransformGizmo; // 0x3D8(0x8)
		UCombinedTransformGizmo BoxTransformGizmo; // 0x3E0(0x8)
		UCombinedTransformGizmo CapsuleTransformGizmo; // 0x3E8(0x8)
		UCombinedTransformGizmo FullTransformGizmo; // 0x3F0(0x8)
		unsigned char UnknownData06_6[0x50]; // 0x3F8(0x50) UNKNOWN PROPERTY
		URectangleMarqueeMechanic MarqueeMechanic; // 0x448(0x8)
		unsigned char UnknownData07_7[0x120]; // 0x450(0x120) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.CollisionPrimitivesMechanic");
			return ret;
		}
	};


	// Class ModelingComponents.ConstructionPlaneMechanic
	// Inherited from UInteractionMechanic -> UObject
	// Size: 0xC0 (0xF0 - 0x30)
	class UConstructionPlaneMechanic : public UInteractionMechanic	
	{
	public:
		unsigned char UnknownData02_3[0x98]; // 0x30(0x98) UNKNOWN PROPERTY
		UCombinedTransformGizmo PlaneTransformGizmo; // 0xC8(0x8)
		UTransformProxy PlaneTransformProxy; // 0xD0(0x8)
		unsigned char UnknownData03_6[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY
		USingleClickInputBehavior ClickToSetPlaneBehavior; // 0xE0(0x8)
		ULocalSingleClickInputBehavior MiddleClickToSetGizmoBehavior; // 0xE8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.ConstructionPlaneMechanic");
			return ret;
		}
	};


	// Class ModelingComponents.CurveControlPointsMechanic
	// Inherited from UInteractionMechanic -> UObject
	// Size: 0x650 (0x680 - 0x30)
	class UCurveControlPointsMechanic : public UInteractionMechanic	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		USingleClickInputBehavior ClickBehavior; // 0x40(0x8)
		UMouseHoverBehavior HoverBehavior; // 0x48(0x8)
		unsigned char UnknownData05_6[0x498]; // 0x50(0x498) UNKNOWN PROPERTY
		APreviewGeometryActor PreviewGeometryActor; // 0x4E8(0x8)
		UPointSetComponent DrawnControlPoints; // 0x4F0(0x8)
		ULineSetComponent DrawnControlSegments; // 0x4F8(0x8)
		UPointSetComponent PreviewPoint; // 0x500(0x8)
		ULineSetComponent PreviewSegment; // 0x508(0x8)
		unsigned char UnknownData06_6[0x78]; // 0x510(0x78) UNKNOWN PROPERTY
		UTransformProxy PointTransformProxy; // 0x588(0x8)
		UCombinedTransformGizmo PointTransformGizmo; // 0x590(0x8)
		unsigned char UnknownData07_7[0xE8]; // 0x598(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.CurveControlPointsMechanic");
			return ret;
		}
	};


	// Class ModelingComponents.DragAlignmentMechanic
	// Inherited from UInteractionMechanic -> UObject
	// Size: 0x250 (0x280 - 0x30)
	class UDragAlignmentMechanic : public UInteractionMechanic	
	{
	public:
		unsigned char UnknownData01_1[0x250]; // 0x30(0x250) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.DragAlignmentMechanic");
			return ret;
		}
	};


	// Class ModelingComponents.DragAlignmentInteraction
	// Inherited from UObject
	// Size: 0x2B8 (0x2E0 - 0x28)
	class UDragAlignmentInteraction : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x2B8]; // 0x28(0x2B8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.DragAlignmentInteraction");
			return ret;
		}
	};


	// Class ModelingComponents.LatticeControlPointsMechanic
	// Inherited from UInteractionMechanic -> UObject
	// Size: 0x4E0 (0x510 - 0x30)
	class ULatticeControlPointsMechanic : public UInteractionMechanic	
	{
	public:
		unsigned char UnknownData04_3[0x1F0]; // 0x30(0x1F0) UNKNOWN PROPERTY
		APreviewGeometryActor PreviewGeometryActor; // 0x220(0x8)
		UPointSetComponent DrawnControlPoints; // 0x228(0x8)
		ULineSetComponent DrawnLatticeEdges; // 0x230(0x8)
		unsigned char UnknownData05_6[0xA8]; // 0x238(0xA8) UNKNOWN PROPERTY
		UTransformProxy PointTransformProxy; // 0x2E0(0x8)
		UCombinedTransformGizmo PointTransformGizmo; // 0x2E8(0x8)
		unsigned char UnknownData06_6[0x58]; // 0x2F0(0x58) UNKNOWN PROPERTY
		URectangleMarqueeMechanic MarqueeMechanic; // 0x348(0x8)
		unsigned char UnknownData07_7[0x1C0]; // 0x350(0x1C0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.LatticeControlPointsMechanic");
			return ret;
		}
	};


	// Class ModelingComponents.PlaneDistanceFromHitMechanic
	// Inherited from UInteractionMechanic -> UObject
	// Size: 0x4F0 (0x520 - 0x30)
	class UPlaneDistanceFromHitMechanic : public UInteractionMechanic	
	{
	public:
		unsigned char UnknownData01_1[0x4F0]; // 0x30(0x4F0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.PlaneDistanceFromHitMechanic");
			return ret;
		}
	};


	// Class ModelingComponents.PolyLassoMarqueeMechanic
	// Inherited from UInteractionMechanic -> UObject
	// Size: 0x1A0 (0x1D0 - 0x30)
	class UPolyLassoMarqueeMechanic : public UInteractionMechanic	
	{
	public:
		unsigned char UnknownData03_3[0x58]; // 0x30(0x58) UNKNOWN PROPERTY
		float SpacingTolerance; // 0x88(0x4)
		float LineThickness; // 0x8C(0x4)
		FLinearColor LineColor; // 0x90(0x10)
		FLinearColor ClosedColor; // 0xA0(0x10)
		bool bEnableFreehandPolygons; // 0xB0(0x1)
		bool bEnableMultiClickPolygons; // 0xB1(0x1)
		unsigned char UnknownData04_6[0x6]; // 0xB2(0x6) UNKNOWN PROPERTY
		UClickDragInputBehavior ClickDragBehavior; // 0xB8(0x8)
		UMouseHoverBehavior HoverBehavior; // 0xC0(0x8)
		unsigned char UnknownData05_7[0x108]; // 0xC8(0x108) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.PolyLassoMarqueeMechanic");
			return ret;
		}
	};


	// Class ModelingComponents.RectangleMarqueeMechanic
	// Inherited from UInteractionMechanic -> UObject
	// Size: 0x1F0 (0x220 - 0x30)
	class URectangleMarqueeMechanic : public UInteractionMechanic	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		bool bUseExternalClickDragBehavior; // 0x38(0x1)
		bool bUseExternalUpdateCameraState; // 0x39(0x1)
		unsigned char UnknownData05_6[0x46]; // 0x3A(0x46) UNKNOWN PROPERTY
		double OnDragRectangleChangedDeferredThreshold; // 0x80(0x8)
		unsigned char UnknownData06_6[0x48]; // 0x88(0x48) UNKNOWN PROPERTY
		UClickDragInputBehavior ClickDragBehavior; // 0xD0(0x8)
		unsigned char UnknownData07_7[0x148]; // 0xD8(0x148) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.RectangleMarqueeMechanic");
			return ret;
		}
	};


	// Class ModelingComponents.RectangleMarqueeInteraction
	// Inherited from UObject
	// Size: 0x1E8 (0x210 - 0x28)
	class URectangleMarqueeInteraction : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x1E8]; // 0x28(0x1E8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.RectangleMarqueeInteraction");
			return ret;
		}
	};


	// Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet	
	{
	public:
		ESpaceCurveControlPointTransformMode TransformMode; // 0xA8(0x4)
		ESpaceCurveControlPointOriginMode TransformOrigin; // 0xAC(0x4)
		float Softness; // 0xB0(0x4)
		ESpaceCurveControlPointFalloffType SoftFalloff; // 0xB4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.SpaceCurveDeformationMechanicPropertySet");
			return ret;
		}
	};


	// Class ModelingComponents.SpaceCurveDeformationMechanic
	// Inherited from UInteractionMechanic -> UObject
	// Size: 0x2A0 (0x2D0 - 0x30)
	class USpaceCurveDeformationMechanic : public UInteractionMechanic	
	{
	public:
		unsigned char UnknownData05_3[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		USingleClickInputBehavior ClickBehavior; // 0x40(0x8)
		UMouseHoverBehavior HoverBehavior; // 0x48(0x8)
		unsigned char UnknownData06_6[0x18]; // 0x50(0x18) UNKNOWN PROPERTY
		USpaceCurveDeformationMechanicPropertySet TransformProperties; // 0x68(0x8)
		unsigned char UnknownData07_6[0xF8]; // 0x70(0xF8) UNKNOWN PROPERTY
		APreviewGeometryActor PreviewGeometryActor; // 0x168(0x8)
		UPointSetComponent RenderPoints; // 0x170(0x8)
		ULineSetComponent RenderSegments; // 0x178(0x8)
		unsigned char UnknownData08_6[0x38]; // 0x180(0x38) UNKNOWN PROPERTY
		UTransformProxy PointTransformProxy; // 0x1B8(0x8)
		UCombinedTransformGizmo PointTransformGizmo; // 0x1C0(0x8)
		unsigned char UnknownData09_7[0x108]; // 0x1C8(0x108) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.SpaceCurveDeformationMechanic");
			return ret;
		}
	};


	// Class ModelingComponents.SpatialCurveDistanceMechanic
	// Inherited from UInteractionMechanic -> UObject
	// Size: 0x3E0 (0x410 - 0x30)
	class USpatialCurveDistanceMechanic : public UInteractionMechanic	
	{
	public:
		unsigned char UnknownData01_1[0x3E0]; // 0x30(0x3E0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.SpatialCurveDistanceMechanic");
			return ret;
		}
	};


	// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
	// Inherited from UObject
	// Size: 0x90 (0xB8 - 0x28)
	class UMeshOpPreviewWithBackgroundCompute : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0x28(0x30) UNKNOWN PROPERTY
		UPreviewMesh PreviewMesh; // 0x58(0x8)
		TArray StandardMaterials; // 0x60(0x10)
		UMaterialInterface OverrideMaterial; // 0x70(0x8)
		UMaterialInterface WorkingMaterial; // 0x78(0x8)
		UMaterialInterface SecondaryMaterial; // 0x80(0x8)
		TWeakObjectPtr PreviewWorld; // 0x88(0x8)
		unsigned char UnknownData03_7[0x28]; // 0x90(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.MeshOpPreviewWithBackgroundCompute");
			return ret;
		}
	};


	// Class ModelingComponents.ModelingComponentsSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UModelingComponentsSettings : public UDeveloperSettings	
	{
	public:
		bool bEnableRayTracingWhileEditing; // 0x30(0x1)
		bool bEnableRayTracing; // 0x31(0x1)
		bool bGenerateLightmapUVs; // 0x32(0x1)
		bool bEnableCollision; // 0x33(0x1)
		TEnumAsByte CollisionMode; // 0x34(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x35(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.ModelingComponentsSettings");
			return ret;
		}
	};


	// Class ModelingComponents.ModelingComponentsEditorSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UModelingComponentsEditorSettings : public UDeveloperSettings	
	{
	public:
		EModelingComponentsPlaneVisualizationMode GridMode; // 0x30(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		int32_t NumGridLines; // 0x34(0x4)
		float GridSpacing; // 0x38(0x4)
		float GridScale; // 0x3C(0x4)
		float GridSize; // 0x40(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.ModelingComponentsEditorSettings");
			return ret;
		}
	};


	// Class ModelingComponents.ModelingObjectsCreationAPI
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UModelingObjectsCreationAPI : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.ModelingObjectsCreationAPI");
			return ret;
		}

		FCreateTextureObjectResult CreateTextureObject(FCreateTextureObjectParams& CreateTexParams); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414C465D8
		FCreateActorResult CreateNewActor(FCreateActorParams& CreateActorParams); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414C464F8
		FCreateMeshObjectResult CreateMeshObject(FCreateMeshObjectParams& CreateMeshParams); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414C46418
		FCreateMaterialObjectResult CreateMaterialObject(FCreateMaterialObjectParams& CreateMaterialParams); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414C46338
	};


	// Class ModelingComponents.PreviewMeshActor
	// Inherited from AInternalToolFrameworkActor -> AActor -> UObject
	// Size: 0x0 (0x298 - 0x298)
	class APreviewMeshActor : public AInternalToolFrameworkActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.PreviewMeshActor");
			return ret;
		}
	};


	// Class ModelingComponents.CreateMeshObjectTypeProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UCreateMeshObjectTypeProperties : public UInteractiveToolPropertySet	
	{
	public:
		FString OutputType; // 0xA8(0x10)
		UClass VolumeType; // 0xB8(0x8)
		TArray OutputTypeNamesList; // 0xC0(0x10)
		bool bShowVolumeList; // 0xD0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.CreateMeshObjectTypeProperties");
			return ret;
		}

		bool ShouldShowPropertySet(); // Flags: Final|Native|Public|Const 0x7FF414C46878
		TArray GetOutputTypeNamesFunc(); // Flags: Final|Native|Public 0x7FF414C46798
		ECreateObjectTypeHint GetCurrentCreateMeshType(); // Flags: Final|Native|Public|Const 0x7FF414C466B8
	};


	// Class ModelingComponents.OnAcceptHandleSourcesPropertiesSingle
	// Inherited from UOnAcceptHandleSourcesPropertiesBase -> UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UOnAcceptHandleSourcesPropertiesSingle : public UOnAcceptHandleSourcesPropertiesBase	
	{
	public:
		EHandleSourcesMethod HandleInputs; // 0xA8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.OnAcceptHandleSourcesPropertiesSingle");
			return ret;
		}
	};


	// Class ModelingComponents.PolygroupLayersProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPolygroupLayersProperties : public UInteractiveToolPropertySet	
	{
	public:
		FName ActiveGroupLayer; // 0xA8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TArray GroupLayersList; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.PolygroupLayersProperties");
			return ret;
		}

		TArray GetGroupLayersFunc(); // Flags: Final|Native|Public 0x7FF414C46958
	};


	// Class ModelingComponents.WeightMapSetProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UWeightMapSetProperties : public UInteractiveToolPropertySet	
	{
	public:
		FName WeightMap; // 0xA8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TArray WeightMapsList; // 0xB0(0x10)
		bool bInvertWeightMap; // 0xC0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.WeightMapSetProperties");
			return ret;
		}

		TArray GetWeightMapsFunc(); // Flags: Final|Native|Public 0x7FF414C46A38
	};


	// Class ModelingComponents.GeometrySelectionManager
	// Inherited from UObject
	// Size: 0x498 (0x4C0 - 0x28)
	class UGeometrySelectionManager : public UObject	
	{
	public:
		unsigned char UnknownData05_3[0x28]; // 0x28(0x28) UNKNOWN PROPERTY
		UGeometrySelectionEditCommandArguments SelectionArguments; // 0x50(0x8)
		unsigned char UnknownData06_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		UInteractiveToolsContext ToolsContext; // 0x60(0x8)
		unsigned char UnknownData07_6[0xD8]; // 0x68(0xD8) UNKNOWN PROPERTY
		UPreviewGeometry PreviewGeometry; // 0x140(0x8)
		unsigned char UnknownData08_6[0x178]; // 0x148(0x178) UNKNOWN PROPERTY
		FMeshElementSelectionParams UnselectedParams; // 0x2C0(0x48)
		FMeshElementSelectionParams HoverOverSelectedParams; // 0x308(0x48)
		FMeshElementSelectionParams HoverOverUnselectedParams; // 0x350(0x48)
		FMeshElementSelectionParams SelectedParams; // 0x398(0x48)
		unsigned char UnknownData09_7[0xE0]; // 0x3E0(0xE0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.GeometrySelectionManager");
			return ret;
		}
	};


	// Class ModelingComponents.PolygonSelectionMechanicProperties
	// Inherited from UMeshTopologySelectionMechanicProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UPolygonSelectionMechanicProperties : public UMeshTopologySelectionMechanicProperties	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.PolygonSelectionMechanicProperties");
			return ret;
		}
	};


	// Class ModelingComponents.PolygonSelectionMechanic
	// Inherited from UMeshTopologySelectionMechanic -> UInteractionMechanic -> UObject
	// Size: 0x10 (0xB40 - 0xB30)
	class UPolygonSelectionMechanic : public UMeshTopologySelectionMechanic	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0xB30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.PolygonSelectionMechanic");
			return ret;
		}
	};


	// Class ModelingComponents.ModelingSceneSnappingManager
	// Inherited from USceneSnappingManager -> UObject
	// Size: 0x128 (0x150 - 0x28)
	class UModelingSceneSnappingManager : public USceneSnappingManager	
	{
	public:
		UInteractiveToolsContext ParentContext; // 0x28(0x8)
		unsigned char UnknownData01_7[0x120]; // 0x30(0x120) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.ModelingSceneSnappingManager");
			return ret;
		}
	};


	// Class ModelingComponents.MultiTransformer
	// Inherited from UObject
	// Size: 0x188 (0x1B0 - 0x28)
	class UMultiTransformer : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x60]; // 0x28(0x60) UNKNOWN PROPERTY
		UInteractiveGizmoManager GizmoManager; // 0x88(0x8)
		unsigned char UnknownData04_6[0x70]; // 0x90(0x70) UNKNOWN PROPERTY
		UCombinedTransformGizmo TransformGizmo; // 0x100(0x8)
		UTransformProxy TransformProxy; // 0x108(0x8)
		UDragAlignmentMechanic DragAlignmentMechanic; // 0x110(0x8)
		unsigned char UnknownData05_7[0x98]; // 0x118(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingComponents.MultiTransformer");
			return ret;
		}
	};

}
