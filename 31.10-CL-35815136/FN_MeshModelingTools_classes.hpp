#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MeshModelingTools
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MeshModelingTools.PolyEditActivityContext
	// Inherited from UObject
	// Size: 0xF8 (0x120 - 0x28)
	class UPolyEditActivityContext : public UObject	
	{
	public:
		UPolyEditCommonProperties* CommonProperties; // 0x28(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		UMeshOpPreviewWithBackgroundCompute* Preview; // 0x40(0x8)
		unsigned char UnknownData01_6[0x28]; // 0x48(0x28) UNKNOWN PROPERTY
		UPolygonSelectionMechanic* SelectionMechanic; // 0x70(0x8)
		unsigned char UnknownData02_7[0xA8]; // 0x78(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditActivityContext");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditExtrudeEdgeActivityProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPolyEditExtrudeEdgeActivityProperties : public UInteractiveToolPropertySet	
	{
	public:
		EPolyEditExtrudeEdgeDirectionMode DirectionMode; // 0xA8(0x4)
		EPolyEditExtrudeEdgeDistanceMode DistanceMode; // 0xAC(0x4)
		double Distance; // 0xB0(0x8)
		bool bUseUnselectedForFrames; // 0xB8(0x1)
		bool bAdjustToExtrudeEvenly; // 0xB9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xBA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditExtrudeEdgeActivityProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditExtrudeEdgeActivity
	// Inherited from UInteractiveToolActivity -> UInteractionMechanic -> UObject
	// Size: 0x2A0 (0x2D0 - 0x30)
	class UPolyEditExtrudeEdgeActivity : public UInteractiveToolActivity	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		UPolyEditExtrudeEdgeActivityProperties* Settings; // 0x38(0x8)
		UPolyEditActivityContext* ActivityContext; // 0x40(0x8)
		UTransformProxy* ExtrudeFrameProxy; // 0x48(0x8)
		UCombinedTransformGizmo* ExtrudeFrameGizmo; // 0x50(0x8)
		UTransformProxy* SingleDirectionProxy; // 0x58(0x8)
		UCombinedTransformGizmo* SingleDirectionGizmo; // 0x60(0x8)
		UPreviewGeometry* PreviewGeometry; // 0x68(0x8)
		unsigned char UnknownData01_7[0x260]; // 0x70(0x260) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditExtrudeEdgeActivity");
			return ret;
		}
	};


	// Class MeshModelingTools.AddPrimitiveToolBuilder
	// Inherited from UInteractiveToolBuilder -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.AddPrimitiveToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingTools.ProceduralShapeToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UProceduralShapeToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		EMakeMeshPolygroupMode PolygroupMode; // 0xA8(0x1)
		EMakeMeshPlacementType TargetSurface; // 0xA9(0x1)
		EMakeMeshPivotLocation PivotLocation; // 0xAA(0x1)
		unsigned char UnknownData00_6[0x1]; // 0xAB(0x1) UNKNOWN PROPERTY
		float Rotation; // 0xAC(0x4)
		bool bAlignToNormal; // 0xB0(0x1)
		bool bShowGizmo; // 0xB1(0x1)
		bool bShowGizmoOptions; // 0xB2(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xB3(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ProceduralShapeToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.ProceduralBoxToolProperties
	// Inherited from UProceduralShapeToolProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xD0 - 0xB8)
	class UProceduralBoxToolProperties : public UProceduralShapeToolProperties	
	{
	public:
		float Width; // 0xB8(0x4)
		float Depth; // 0xBC(0x4)
		float Height; // 0xC0(0x4)
		int32_t WidthSubdivisions; // 0xC4(0x4)
		int32_t DepthSubdivisions; // 0xC8(0x4)
		int32_t HeightSubdivisions; // 0xCC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ProceduralBoxToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.ProceduralRectangleToolProperties
	// Inherited from UProceduralShapeToolProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xD8 - 0xB8)
	class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties	
	{
	public:
		EProceduralRectType RectangleType; // 0xB8(0x4)
		float Width; // 0xBC(0x4)
		float Depth; // 0xC0(0x4)
		int32_t WidthSubdivisions; // 0xC4(0x4)
		int32_t DepthSubdivisions; // 0xC8(0x4)
		bool bMaintainDimension; // 0xCC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xCD(0x3) UNKNOWN PROPERTY
		float CornerRadius; // 0xD0(0x4)
		int32_t CornerSlices; // 0xD4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ProceduralRectangleToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.ProceduralDiscToolProperties
	// Inherited from UProceduralShapeToolProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xD0 - 0xB8)
	class UProceduralDiscToolProperties : public UProceduralShapeToolProperties	
	{
	public:
		EProceduralDiscType DiscType; // 0xB8(0x4)
		float Radius; // 0xBC(0x4)
		int32_t RadialSlices; // 0xC0(0x4)
		int32_t RadialSubdivisions; // 0xC4(0x4)
		float HoleRadius; // 0xC8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ProceduralDiscToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.ProceduralTorusToolProperties
	// Inherited from UProceduralShapeToolProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xC8 - 0xB8)
	class UProceduralTorusToolProperties : public UProceduralShapeToolProperties	
	{
	public:
		float MajorRadius; // 0xB8(0x4)
		float MinorRadius; // 0xBC(0x4)
		int32_t MajorSlices; // 0xC0(0x4)
		int32_t MinorSlices; // 0xC4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ProceduralTorusToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.ProceduralCylinderToolProperties
	// Inherited from UProceduralShapeToolProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xC8 - 0xB8)
	class UProceduralCylinderToolProperties : public UProceduralShapeToolProperties	
	{
	public:
		float Radius; // 0xB8(0x4)
		float Height; // 0xBC(0x4)
		int32_t RadialSlices; // 0xC0(0x4)
		int32_t HeightSubdivisions; // 0xC4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ProceduralCylinderToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.ProceduralConeToolProperties
	// Inherited from UProceduralShapeToolProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xC8 - 0xB8)
	class UProceduralConeToolProperties : public UProceduralShapeToolProperties	
	{
	public:
		float Radius; // 0xB8(0x4)
		float Height; // 0xBC(0x4)
		int32_t RadialSlices; // 0xC0(0x4)
		int32_t HeightSubdivisions; // 0xC4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ProceduralConeToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.ProceduralArrowToolProperties
	// Inherited from UProceduralShapeToolProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xD0 - 0xB8)
	class UProceduralArrowToolProperties : public UProceduralShapeToolProperties	
	{
	public:
		float ShaftRadius; // 0xB8(0x4)
		float ShaftHeight; // 0xBC(0x4)
		float HeadRadius; // 0xC0(0x4)
		float HeadHeight; // 0xC4(0x4)
		int32_t RadialSlices; // 0xC8(0x4)
		int32_t HeightSubdivisions; // 0xCC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ProceduralArrowToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.ProceduralSphereToolProperties
	// Inherited from UProceduralShapeToolProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xD0 - 0xB8)
	class UProceduralSphereToolProperties : public UProceduralShapeToolProperties	
	{
	public:
		float Radius; // 0xB8(0x4)
		EProceduralSphereType SubdivisionType; // 0xBC(0x4)
		int32_t Subdivisions; // 0xC0(0x4)
		int32_t HorizontalSlices; // 0xC4(0x4)
		int32_t VerticalSlices; // 0xC8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ProceduralSphereToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.ProceduralCapsuleToolProperties
	// Inherited from UProceduralShapeToolProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xD0 - 0xB8)
	class UProceduralCapsuleToolProperties : public UProceduralShapeToolProperties	
	{
	public:
		float Radius; // 0xB8(0x4)
		float CylinderLength; // 0xBC(0x4)
		int32_t HemisphereSlices; // 0xC0(0x4)
		int32_t CylinderSlices; // 0xC4(0x4)
		int32_t CylinderSubdivisions; // 0xC8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ProceduralCapsuleToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.ProceduralStairsToolProperties
	// Inherited from UProceduralShapeToolProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xD8 - 0xB8)
	class UProceduralStairsToolProperties : public UProceduralShapeToolProperties	
	{
	public:
		EProceduralStairsType StairsType; // 0xB8(0x4)
		int32_t NumSteps; // 0xBC(0x4)
		float StepWidth; // 0xC0(0x4)
		float StepHeight; // 0xC4(0x4)
		float StepDepth; // 0xC8(0x4)
		float CurveAngle; // 0xCC(0x4)
		float SpiralAngle; // 0xD0(0x4)
		float InnerRadius; // 0xD4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ProceduralStairsToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.AddPrimitiveTool
	// Inherited from USingleClickTool -> UInteractiveTool -> UObject
	// Size: 0x98 (0x138 - 0xA0)
	class UAddPrimitiveTool : public USingleClickTool	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		UCreateMeshObjectTypeProperties* OutputTypeProperties; // 0xB8(0x8)
		UProceduralShapeToolProperties* ShapeSettings; // 0xC0(0x8)
		UNewMeshMaterialProperties* MaterialProperties; // 0xC8(0x8)
		UPreviewMesh* PreviewMesh; // 0xD0(0x8)
		UCombinedTransformGizmo* Gizmo; // 0xD8(0x8)
		UDragAlignmentMechanic* DragAlignmentMechanic; // 0xE0(0x8)
		FString AssetName; // 0xE8(0x10)
		unsigned char UnknownData01_7[0x40]; // 0xF8(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.AddPrimitiveTool");
			return ret;
		}
	};


	// Class MeshModelingTools.AddBoxPrimitiveTool
	// Inherited from UAddPrimitiveTool -> USingleClickTool -> UInteractiveTool -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UAddBoxPrimitiveTool : public UAddPrimitiveTool	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.AddBoxPrimitiveTool");
			return ret;
		}
	};


	// Class MeshModelingTools.AddCylinderPrimitiveTool
	// Inherited from UAddPrimitiveTool -> USingleClickTool -> UInteractiveTool -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UAddCylinderPrimitiveTool : public UAddPrimitiveTool	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.AddCylinderPrimitiveTool");
			return ret;
		}
	};


	// Class MeshModelingTools.AddCapsulePrimitiveTool
	// Inherited from UAddPrimitiveTool -> USingleClickTool -> UInteractiveTool -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UAddCapsulePrimitiveTool : public UAddPrimitiveTool	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.AddCapsulePrimitiveTool");
			return ret;
		}
	};


	// Class MeshModelingTools.AddConePrimitiveTool
	// Inherited from UAddPrimitiveTool -> USingleClickTool -> UInteractiveTool -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UAddConePrimitiveTool : public UAddPrimitiveTool	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.AddConePrimitiveTool");
			return ret;
		}
	};


	// Class MeshModelingTools.AddRectanglePrimitiveTool
	// Inherited from UAddPrimitiveTool -> USingleClickTool -> UInteractiveTool -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UAddRectanglePrimitiveTool : public UAddPrimitiveTool	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.AddRectanglePrimitiveTool");
			return ret;
		}
	};


	// Class MeshModelingTools.AddDiscPrimitiveTool
	// Inherited from UAddPrimitiveTool -> USingleClickTool -> UInteractiveTool -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UAddDiscPrimitiveTool : public UAddPrimitiveTool	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.AddDiscPrimitiveTool");
			return ret;
		}
	};


	// Class MeshModelingTools.AddTorusPrimitiveTool
	// Inherited from UAddPrimitiveTool -> USingleClickTool -> UInteractiveTool -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UAddTorusPrimitiveTool : public UAddPrimitiveTool	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.AddTorusPrimitiveTool");
			return ret;
		}
	};


	// Class MeshModelingTools.AddArrowPrimitiveTool
	// Inherited from UAddPrimitiveTool -> USingleClickTool -> UInteractiveTool -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UAddArrowPrimitiveTool : public UAddPrimitiveTool	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.AddArrowPrimitiveTool");
			return ret;
		}
	};


	// Class MeshModelingTools.AddSpherePrimitiveTool
	// Inherited from UAddPrimitiveTool -> USingleClickTool -> UInteractiveTool -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UAddSpherePrimitiveTool : public UAddPrimitiveTool	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.AddSpherePrimitiveTool");
			return ret;
		}
	};


	// Class MeshModelingTools.AddStairsPrimitiveTool
	// Inherited from UAddPrimitiveTool -> USingleClickTool -> UInteractiveTool -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UAddStairsPrimitiveTool : public UAddPrimitiveTool	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.AddStairsPrimitiveTool");
			return ret;
		}
	};


	// Class MeshModelingTools.CombineMeshesToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCombineMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.CombineMeshesToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingTools.CombineMeshesToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UCombineMeshesToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bIsDuplicateMode; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		EBaseCreateFromSelectedTargetType OutputWriteTo; // 0xAC(0x4)
		FString OutputNewName; // 0xB0(0x10)
		FString OutputExistingName; // 0xC0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.CombineMeshesToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.CombineMeshesTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x28 (0xE0 - 0xB8)
	class UCombineMeshesTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		UCombineMeshesToolProperties* BasicProperties; // 0xC0(0x8)
		UCreateMeshObjectTypeProperties* OutputTypeProperties; // 0xC8(0x8)
		UOnAcceptHandleSourcesPropertiesBase* HandleSourceProperties; // 0xD0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.CombineMeshesTool");
			return ret;
		}
	};


	// Class MeshModelingTools.DeleteGeometrySelectionCommand
	// Inherited from UGeometrySelectionEditCommand -> UInteractiveCommand -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDeleteGeometrySelectionCommand : public UGeometrySelectionEditCommand	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.DeleteGeometrySelectionCommand");
			return ret;
		}
	};


	// Class MeshModelingTools.DisconnectGeometrySelectionCommand
	// Inherited from UGeometrySelectionEditCommand -> UInteractiveCommand -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDisconnectGeometrySelectionCommand : public UGeometrySelectionEditCommand	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.DisconnectGeometrySelectionCommand");
			return ret;
		}
	};


	// Class MeshModelingTools.ModifyGeometrySelectionCommand
	// Inherited from UGeometrySelectionEditCommand -> UInteractiveCommand -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UModifyGeometrySelectionCommand : public UGeometrySelectionEditCommand	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ModifyGeometrySelectionCommand");
			return ret;
		}
	};


	// Class MeshModelingTools.ModifyGeometrySelectionCommand_Invert
	// Inherited from UModifyGeometrySelectionCommand -> UGeometrySelectionEditCommand -> UInteractiveCommand -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UModifyGeometrySelectionCommand_Invert : public UModifyGeometrySelectionCommand	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ModifyGeometrySelectionCommand_Invert");
			return ret;
		}
	};


	// Class MeshModelingTools.ModifyGeometrySelectionCommand_ExpandToConnected
	// Inherited from UModifyGeometrySelectionCommand -> UGeometrySelectionEditCommand -> UInteractiveCommand -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UModifyGeometrySelectionCommand_ExpandToConnected : public UModifyGeometrySelectionCommand	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ModifyGeometrySelectionCommand_ExpandToConnected");
			return ret;
		}
	};


	// Class MeshModelingTools.ModifyGeometrySelectionCommand_InvertConnected
	// Inherited from UModifyGeometrySelectionCommand -> UGeometrySelectionEditCommand -> UInteractiveCommand -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UModifyGeometrySelectionCommand_InvertConnected : public UModifyGeometrySelectionCommand	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ModifyGeometrySelectionCommand_InvertConnected");
			return ret;
		}
	};


	// Class MeshModelingTools.ModifyGeometrySelectionCommand_Expand
	// Inherited from UModifyGeometrySelectionCommand -> UGeometrySelectionEditCommand -> UInteractiveCommand -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UModifyGeometrySelectionCommand_Expand : public UModifyGeometrySelectionCommand	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ModifyGeometrySelectionCommand_Expand");
			return ret;
		}
	};


	// Class MeshModelingTools.ModifyGeometrySelectionCommand_Contract
	// Inherited from UModifyGeometrySelectionCommand -> UGeometrySelectionEditCommand -> UInteractiveCommand -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UModifyGeometrySelectionCommand_Contract : public UModifyGeometrySelectionCommand	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ModifyGeometrySelectionCommand_Contract");
			return ret;
		}
	};


	// Class MeshModelingTools.RetriangulateGeometrySelectionCommand
	// Inherited from UGeometrySelectionEditCommand -> UInteractiveCommand -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class URetriangulateGeometrySelectionCommand : public UGeometrySelectionEditCommand	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.RetriangulateGeometrySelectionCommand");
			return ret;
		}
	};


	// Class MeshModelingTools.CSGMeshesToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UCSGMeshesToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		ECSGOperation Operation; // 0xA8(0x1)
		bool bTryFixHoles; // 0xA9(0x1)
		bool bTryCollapseEdges; // 0xAA(0x1)
		unsigned char UnknownData00_6[0x1]; // 0xAB(0x1) UNKNOWN PROPERTY
		float WindingThreshold; // 0xAC(0x4)
		bool bShowNewBoundaries; // 0xB0(0x1)
		bool bShowSubtractedMesh; // 0xB1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xB2(0x2) UNKNOWN PROPERTY
		float SubtractedMeshOpacity; // 0xB4(0x4)
		FLinearColor SubtractedMeshColor; // 0xB8(0x10)
		bool bUseFirstMeshMaterials; // 0xC8(0x1)
		unsigned char UnknownData02_7[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.CSGMeshesToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.TrimMeshesToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UTrimMeshesToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		ETrimOperation WhichMesh; // 0xA8(0x1)
		ETrimSide TrimSide; // 0xA9(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xAA(0x2) UNKNOWN PROPERTY
		float WindingThreshold; // 0xAC(0x4)
		bool bShowTrimmingMesh; // 0xB0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xB1(0x3) UNKNOWN PROPERTY
		float OpacityOfTrimmingMesh; // 0xB4(0x4)
		FLinearColor ColorOfTrimmingMesh; // 0xB8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.TrimMeshesToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.CSGMeshesTool
	// Inherited from UBaseCreateFromSelectedTool -> UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x58 (0x160 - 0x108)
	class UCSGMeshesTool : public UBaseCreateFromSelectedTool	
	{
	public:
		UCSGMeshesToolProperties* CSGProperties; // 0x108(0x8)
		UTrimMeshesToolProperties* TrimProperties; // 0x110(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x118(0x10) UNKNOWN PROPERTY
		TArray<UPreviewMesh*> OriginalMeshPreviews; // 0x128(0x10)
		UMaterialInstanceDynamic* PreviewsGhostMaterial; // 0x138(0x8)
		ULineSetComponent* DrawnLineSet; // 0x140(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x148(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.CSGMeshesTool");
			return ret;
		}
	};


	// Class MeshModelingTools.CSGMeshesToolBuilder
	// Inherited from UBaseCreateFromSelectedToolBuilder -> UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.CSGMeshesToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingTools.CutMeshWithMeshToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UCutMeshWithMeshToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bTryFixHoles; // 0xA8(0x1)
		bool bTryCollapseEdges; // 0xA9(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xAA(0x2) UNKNOWN PROPERTY
		float WindingThreshold; // 0xAC(0x4)
		bool bShowNewBoundaries; // 0xB0(0x1)
		bool bUseFirstMeshMaterials; // 0xB1(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xB2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.CutMeshWithMeshToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.CutMeshWithMeshTool
	// Inherited from UBaseCreateFromSelectedTool -> UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x278 (0x380 - 0x108)
	class UCutMeshWithMeshTool : public UBaseCreateFromSelectedTool	
	{
	public:
		UCutMeshWithMeshToolProperties* CutProperties; // 0x108(0x8)
		UPreviewMesh* IntersectPreviewMesh; // 0x110(0x8)
		unsigned char UnknownData00_6[0x20]; // 0x118(0x20) UNKNOWN PROPERTY
		ULineSetComponent* DrawnLineSet; // 0x138(0x8)
		unsigned char UnknownData01_7[0x240]; // 0x140(0x240) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.CutMeshWithMeshTool");
			return ret;
		}
	};


	// Class MeshModelingTools.CutMeshWithMeshToolBuilder
	// Inherited from UBaseCreateFromSelectedToolBuilder -> UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCutMeshWithMeshToolBuilder : public UBaseCreateFromSelectedToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.CutMeshWithMeshToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingTools.DrawAndRevolveToolBuilder
	// Inherited from UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.DrawAndRevolveToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingTools.RevolveProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x70 (0x118 - 0xA8)
	class URevolveProperties : public UInteractiveToolPropertySet	
	{
	public:
		double RevolveDegreesClamped; // 0xA8(0x8)
		double RevolveDegrees; // 0xB0(0x8)
		double RevolveDegreesOffset; // 0xB8(0x8)
		double StepsMaxDegrees; // 0xC0(0x8)
		bool bExplicitSteps; // 0xC8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		int32_t NumExplicitSteps; // 0xCC(0x4)
		double HeightOffsetPerDegree; // 0xD0(0x8)
		bool bReverseRevolutionDirection; // 0xD8(0x1)
		bool bFlipMesh; // 0xD9(0x1)
		bool bSharpNormals; // 0xDA(0x1)
		unsigned char UnknownData01_6[0x5]; // 0xDB(0x5) UNKNOWN PROPERTY
		double SharpNormalsDegreeThreshold; // 0xE0(0x8)
		bool bPathAtMidpointOfStep; // 0xE8(0x1)
		ERevolvePropertiesPolygroupMode PolygroupMode; // 0xE9(0x1)
		ERevolvePropertiesQuadSplit QuadSplitMode; // 0xEA(0x1)
		unsigned char UnknownData02_7[0x2D]; // 0xEB(0x2D) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.RevolveProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.RevolveToolProperties
	// Inherited from URevolveProperties -> UInteractiveToolPropertySet -> UObject
	// Size: 0x40 (0x158 - 0x118)
	class URevolveToolProperties : public URevolveProperties	
	{
	public:
		ERevolvePropertiesCapFillMode CapFillMode; // 0x118(0x1)
		bool bClosePathToAxis; // 0x119(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x11A(0x6) UNKNOWN PROPERTY
		FVector DrawPlaneOrigin; // 0x120(0x18)
		FRotator DrawPlaneOrientation; // 0x138(0x18)
		bool bEnableSnapping; // 0x150(0x1)
		bool bAllowedToEditDrawPlane; // 0x151(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x152(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.RevolveToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.RevolveOperatorFactory
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class URevolveOperatorFactory : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UDrawAndRevolveTool* RevolveTool; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.RevolveOperatorFactory");
			return ret;
		}
	};


	// Class MeshModelingTools.DrawAndRevolveTool
	// Inherited from UInteractiveTool -> UObject
	// Size: 0xF8 (0x190 - 0x98)
	class UDrawAndRevolveTool : public UInteractiveTool	
	{
	public:
		unsigned char UnknownData00_3[0xC8]; // 0x98(0xC8) UNKNOWN PROPERTY
		UCurveControlPointsMechanic* ControlPointsMechanic; // 0x160(0x8)
		UConstructionPlaneMechanic* PlaneMechanic; // 0x168(0x8)
		UCreateMeshObjectTypeProperties* OutputTypeProperties; // 0x170(0x8)
		URevolveToolProperties* Settings; // 0x178(0x8)
		UNewMeshMaterialProperties* MaterialProperties; // 0x180(0x8)
		UMeshOpPreviewWithBackgroundCompute* Preview; // 0x188(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.DrawAndRevolveTool");
			return ret;
		}
	};


	// Class MeshModelingTools.DrawPolygonToolBuilder
	// Inherited from UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDrawPolygonToolBuilder : public UInteractiveToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.DrawPolygonToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingTools.DrawPolygonToolStandardProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet	
	{
	public:
		EDrawPolygonDrawMode PolygonDrawMode; // 0xA8(0x1)
		bool bAllowSelfIntersections; // 0xA9(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xAA(0x2) UNKNOWN PROPERTY
		float FeatureSizeRatio; // 0xAC(0x4)
		int32_t RadialSlices; // 0xB0(0x4)
		float Distance; // 0xB4(0x4)
		bool bShowGridGizmo; // 0xB8(0x1)
		EDrawPolygonExtrudeMode ExtrudeMode; // 0xB9(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xBA(0x2) UNKNOWN PROPERTY
		float ExtrudeHeight; // 0xBC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.DrawPolygonToolStandardProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.DrawPolygonToolSnapProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bEnableSnapping; // 0xA8(0x1)
		bool bSnapToWorldGrid; // 0xA9(0x1)
		bool bSnapToVertices; // 0xAA(0x1)
		bool bSnapToEdges; // 0xAB(0x1)
		bool bSnapToAxes; // 0xAC(0x1)
		bool bSnapToLengths; // 0xAD(0x1)
		bool bSnapToSurfaces; // 0xAE(0x1)
		unsigned char UnknownData00_6[0x1]; // 0xAF(0x1) UNKNOWN PROPERTY
		float SnapToSurfacesOffset; // 0xB0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.DrawPolygonToolSnapProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.DrawPolygonTool
	// Inherited from UInteractiveTool -> UObject
	// Size: 0x4F8 (0x590 - 0x98)
	class UDrawPolygonTool : public UInteractiveTool	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		UCreateMeshObjectTypeProperties* OutputTypeProperties; // 0xA0(0x8)
		UDrawPolygonToolStandardProperties* PolygonProperties; // 0xA8(0x8)
		UDrawPolygonToolSnapProperties* SnapProperties; // 0xB0(0x8)
		UNewMeshMaterialProperties* MaterialProperties; // 0xB8(0x8)
		unsigned char UnknownData01_6[0x90]; // 0xC0(0x90) UNKNOWN PROPERTY
		UPreviewMesh* PreviewMesh; // 0x150(0x8)
		unsigned char UnknownData02_6[0x410]; // 0x158(0x410) UNKNOWN PROPERTY
		UPlaneDistanceFromHitMechanic* HeightMechanic; // 0x568(0x8)
		UDragAlignmentMechanic* DragAlignmentMechanic; // 0x570(0x8)
		UConstructionPlaneMechanic* PlaneMechanic; // 0x578(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x580(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.DrawPolygonTool");
			return ret;
		}
	};


	// Class MeshModelingTools.EditMeshPolygonsToolBuilder
	// Inherited from USingleTargetWithSelectionToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UEditMeshPolygonsToolBuilder : public USingleTargetWithSelectionToolBuilder	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.EditMeshPolygonsToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditCommonProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UPolyEditCommonProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bShowWireframe; // 0xA8(0x1)
		bool bShowSelectableCorners; // 0xA9(0x1)
		bool bGizmoVisible; // 0xAA(0x1)
		unsigned char UnknownData00_6[0x1]; // 0xAB(0x1) UNKNOWN PROPERTY
		ELocalFrameMode LocalFrameMode; // 0xAC(0x4)
		bool bLockRotation; // 0xB0(0x1)
		bool bLocalCoordSystem; // 0xB1(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xB2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditCommonProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.EditMeshPolygonsActionModeToolBuilder
	// Inherited from UEditMeshPolygonsToolBuilder -> USingleTargetWithSelectionToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UEditMeshPolygonsActionModeToolBuilder : public UEditMeshPolygonsToolBuilder	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.EditMeshPolygonsActionModeToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingTools.EditMeshPolygonsSelectionModeToolBuilder
	// Inherited from UEditMeshPolygonsToolBuilder -> USingleTargetWithSelectionToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UEditMeshPolygonsSelectionModeToolBuilder : public UEditMeshPolygonsToolBuilder	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.EditMeshPolygonsSelectionModeToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.EditMeshPolygonsToolActionPropertySet");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditTopologyProperties
	// Inherited from UEditMeshPolygonsToolActionPropertySet -> UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xC0 - 0xB0)
	class UPolyEditTopologyProperties : public UEditMeshPolygonsToolActionPropertySet	
	{
	public:
		bool bAddExtraCorners; // 0xB0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY
		double ExtraCornerAngleThresholdDegrees; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditTopologyProperties");
			return ret;
		}

		void RegenerateExtraCorners(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C084(relative to base address)
	};


	// Class MeshModelingTools.EditMeshPolygonsToolActions
	// Inherited from UEditMeshPolygonsToolActionPropertySet -> UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.EditMeshPolygonsToolActions");
			return ret;
		}

		void SimplifyByGroups(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C0CC(relative to base address)
		void Retriangulate(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C09C(relative to base address)
		void RecalcNormals(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C06C(relative to base address)
		void PushPull(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C054(relative to base address)
		void Outset(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C00C(relative to base address)
		void Offset(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BFF4(relative to base address)
		void Merge(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BFDC(relative to base address)
		void Inset(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BFC4(relative to base address)
		void InsertEdgeLoop(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BFAC(relative to base address)
		void InsertEdge(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BF94(relative to base address)
		void Flip(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BF2C(relative to base address)
		void Extrude(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BEE4(relative to base address)
		void Duplicate(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BECC(relative to base address)
		void Disconnect(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BEB4(relative to base address)
		void Delete(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BE9C(relative to base address)
		void Decompose(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BE84(relative to base address)
		void CutFaces(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BE6C(relative to base address)
		void Bevel(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BE0C(relative to base address)
	};


	// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
	// Inherited from UEditMeshPolygonsToolActionPropertySet -> UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles");
			return ret;
		}

		void RecalcNormals(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C06C(relative to base address)
		void PushPull(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C054(relative to base address)
		void Poke(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C03C(relative to base address)
		void Outset(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C00C(relative to base address)
		void Offset(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BFF4(relative to base address)
		void Inset(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BFC4(relative to base address)
		void Flip(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BF2C(relative to base address)
		void Extrude(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BEE4(relative to base address)
		void Duplicate(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BECC(relative to base address)
		void Disconnect(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BEB4(relative to base address)
		void Delete(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BE9C(relative to base address)
		void CutFaces(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BE6C(relative to base address)
	};


	// Class MeshModelingTools.EditMeshPolygonsToolUVActions
	// Inherited from UEditMeshPolygonsToolActionPropertySet -> UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.EditMeshPolygonsToolUVActions");
			return ret;
		}

		void PlanarProjection(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C024(relative to base address)
	};


	// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
	// Inherited from UEditMeshPolygonsToolActionPropertySet -> UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions");
			return ret;
		}

		void Weld(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C114(relative to base address)
		void Straighten(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C0FC(relative to base address)
		void Simplify(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C0B4(relative to base address)
		void FillHole(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BF14(relative to base address)
		void Extrude(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BEFC(relative to base address)
		void DeleteEdge(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BE9C(relative to base address)
		void Bridge(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BE3C(relative to base address)
		void Bevel(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BE24(relative to base address)
	};


	// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
	// Inherited from UEditMeshPolygonsToolActionPropertySet -> UInteractiveToolPropertySet -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles");
			return ret;
		}

		void Weld(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C114(relative to base address)
		void Split(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112C0E4(relative to base address)
		void Flip(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BF44(relative to base address)
		void FillHole(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BF14(relative to base address)
		void Extrude(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BEFC(relative to base address)
		void Collapse(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BE54(relative to base address)
		void Bridge(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BE3C(relative to base address)
	};


	// Class MeshModelingTools.EditMeshPolygonsTool
	// Inherited from USingleTargetWithSelectionTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x7E0 (0x900 - 0x120)
	class UEditMeshPolygonsTool : public USingleTargetWithSelectionTool	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x120(0x20) UNKNOWN PROPERTY
		UMeshOpPreviewWithBackgroundCompute* Preview; // 0x140(0x8)
		UPolyEditCommonProperties* CommonProps; // 0x148(0x8)
		UEditMeshPolygonsToolActions* EditActions; // 0x150(0x8)
		UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles; // 0x158(0x8)
		UEditMeshPolygonsToolEdgeActions* EditEdgeActions; // 0x160(0x8)
		UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles; // 0x168(0x8)
		UEditMeshPolygonsToolUVActions* EditUVActions; // 0x170(0x8)
		UPolyEditTopologyProperties* TopologyProperties; // 0x178(0x8)
		UPolyEditExtrudeActivity* ExtrudeActivity; // 0x180(0x8)
		UPolyEditInsetOutsetActivity* InsetOutsetActivity; // 0x188(0x8)
		UPolyEditCutFacesActivity* CutFacesActivity; // 0x190(0x8)
		UPolyEditPlanarProjectionUVActivity* PlanarProjectionUVActivity; // 0x198(0x8)
		UPolyEditInsertEdgeActivity* InsertEdgeActivity; // 0x1A0(0x8)
		UPolyEditInsertEdgeLoopActivity* InsertEdgeLoopActivity; // 0x1A8(0x8)
		UPolyEditBevelEdgeActivity* BevelEdgeActivity; // 0x1B0(0x8)
		UPolyEditExtrudeEdgeActivity* ExtrudeEdgeActivity; // 0x1B8(0x8)
		unsigned char UnknownData01_6[0xD8]; // 0x1C0(0xD8) UNKNOWN PROPERTY
		UPolyEditActivityContext* ActivityContext; // 0x298(0x8)
		UPolygonSelectionMechanic* SelectionMechanic; // 0x2A0(0x8)
		UDragAlignmentMechanic* DragAlignmentMechanic; // 0x2A8(0x8)
		UCombinedTransformGizmo* TransformGizmo; // 0x2B0(0x8)
		UTransformProxy* TransformProxy; // 0x2B8(0x8)
		unsigned char UnknownData02_7[0x640]; // 0x2C0(0x640) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.EditMeshPolygonsTool");
			return ret;
		}
	};


	// Class MeshModelingTools.NewMeshMaterialProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UNewMeshMaterialProperties : public UInteractiveToolPropertySet	
	{
	public:
		TWeakObjectPtr<UMaterialInterface*> Material; // 0xA8(0x8)
		float UVScale; // 0xB0(0x4)
		bool bWorldSpaceUVScale; // 0xB4(0x1)
		bool bShowWireframe; // 0xB5(0x1)
		bool bShowExtendedOptions; // 0xB6(0x1)
		unsigned char UnknownData00_7[0x1]; // 0xB7(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.NewMeshMaterialProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.ExistingMeshMaterialProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x38 (0xE0 - 0xA8)
	class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet	
	{
	public:
		ESetMeshMaterialMode MaterialMode; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		float CheckerDensity; // 0xAC(0x4)
		UMaterialInterface* OverrideMaterial; // 0xB0(0x8)
		FString UVChannel; // 0xB8(0x10)
		TArray<FString> UVChannelNamesList; // 0xC8(0x10)
		UMaterialInstanceDynamic* CheckerMaterial; // 0xD8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.ExistingMeshMaterialProperties");
			return ret;
		}

		TArray GetUVChannelNamesFunc(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF75112BF5C(relative to base address)
	};


	// Class MeshModelingTools.MeshEditingViewProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class UMeshEditingViewProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bShowWireframe; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		EMeshEditingMaterialModes MaterialMode; // 0xAC(0x4)
		bool bFlatShading; // 0xB0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xB1(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0xB4(0x10)
		unsigned char UnknownData02_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		UTexture2D* Image; // 0xC8(0x8)
		double Opacity; // 0xD0(0x8)
		FLinearColor TransparentMaterialColor; // 0xD8(0x10)
		bool bTwoSided; // 0xE8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xE9(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UMaterialInterface*> CustomMaterial; // 0xEC(0x8)
		unsigned char UnknownData04_7[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.MeshEditingViewProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.MeshUVChannelProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UMeshUVChannelProperties : public UInteractiveToolPropertySet	
	{
	public:
		FString UVChannel; // 0xA8(0x10)
		TArray<FString> UVChannelNamesList; // 0xB8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.MeshUVChannelProperties");
			return ret;
		}

		TArray GetUVChannelNamesFunc(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF75112BF78(relative to base address)
	};


	// Class MeshModelingTools.RecomputeUVsToolBuilder
	// Inherited from USingleSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class URecomputeUVsToolBuilder : public USingleSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.RecomputeUVsToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingTools.RecomputeUVsTool
	// Inherited from USingleSelectionMeshEditingTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x68 (0x118 - 0xB0)
	class URecomputeUVsTool : public USingleSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY
		UMeshUVChannelProperties* UVChannelProperties; // 0xB8(0x8)
		URecomputeUVsToolProperties* Settings; // 0xC0(0x8)
		UPolygroupLayersProperties* PolygroupLayerProperties; // 0xC8(0x8)
		UExistingMeshMaterialProperties* MaterialSettings; // 0xD0(0x8)
		bool bCreateUVLayoutViewOnSetup; // 0xD8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY
		UUVLayoutPreview* UVLayoutView; // 0xE0(0x8)
		URecomputeUVsOpFactory* RecomputeUVsOpFactory; // 0xE8(0x8)
		UMeshOpPreviewWithBackgroundCompute* Preview; // 0xF0(0x8)
		unsigned char UnknownData02_7[0x20]; // 0xF8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.RecomputeUVsTool");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditBevelEdgeProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPolyEditBevelEdgeProperties : public UInteractiveToolPropertySet	
	{
	public:
		double BevelDistance; // 0xA8(0x8)
		int32_t Subdivisions; // 0xB0(0x4)
		float RoundWeight; // 0xB4(0x4)
		bool bInferMaterialID; // 0xB8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		int32_t SetMaterialID; // 0xBC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditBevelEdgeProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditBevelEdgeActivity
	// Inherited from UInteractiveToolActivity -> UInteractionMechanic -> UObject
	// Size: 0x110 (0x140 - 0x30)
	class UPolyEditBevelEdgeActivity : public UInteractiveToolActivity	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		UPolyEditBevelEdgeProperties* BevelProperties; // 0x38(0x8)
		UPolyEditActivityContext* ActivityContext; // 0x40(0x8)
		unsigned char UnknownData01_7[0xF8]; // 0x48(0xF8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditBevelEdgeActivity");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditCutProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPolyEditCutProperties : public UInteractiveToolPropertySet	
	{
	public:
		EPolyEditCutPlaneOrientation orientation; // 0xA8(0x4)
		bool bSnapToVertices; // 0xAC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditCutProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditCutFacesActivity
	// Inherited from UInteractiveToolActivity -> UInteractionMechanic -> UObject
	// Size: 0x90 (0xC0 - 0x30)
	class UPolyEditCutFacesActivity : public UInteractiveToolActivity	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		UPolyEditCutProperties* CutProperties; // 0x40(0x8)
		UPolyEditPreviewMesh* EditPreview; // 0x48(0x8)
		UCollectSurfacePathMechanic* SurfacePathMechanic; // 0x50(0x8)
		UPolyEditActivityContext* ActivityContext; // 0x58(0x8)
		unsigned char UnknownData01_7[0x60]; // 0x60(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditCutFacesActivity");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditExtrudeProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet	
	{
	public:
		EPolyEditExtrudeDistanceMode DistanceMode; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		double Distance; // 0xB0(0x8)
		EPolyEditExtrudeModeOptions DirectionMode; // 0xB8(0x4)
		EPolyEditExtrudeDirection Direction; // 0xBC(0x4)
		double MaxDistanceScaleFactor; // 0xC0(0x8)
		bool bShellsToSolids; // 0xC8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		EPolyEditExtrudeDirection MeasureDirection; // 0xCC(0x4)
		bool bUseColinearityForSettingBorderGroups; // 0xD0(0x1)
		unsigned char UnknownData02_7[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditExtrudeProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditOffsetProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UPolyEditOffsetProperties : public UInteractiveToolPropertySet	
	{
	public:
		EPolyEditExtrudeDistanceMode DistanceMode; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		double Distance; // 0xB0(0x8)
		EPolyEditOffsetModeOptions DirectionMode; // 0xB8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		double MaxDistanceScaleFactor; // 0xC0(0x8)
		bool bShellsToSolids; // 0xC8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		EPolyEditExtrudeDirection MeasureDirection; // 0xCC(0x4)
		bool bUseColinearityForSettingBorderGroups; // 0xD0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditOffsetProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditPushPullProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UPolyEditPushPullProperties : public UInteractiveToolPropertySet	
	{
	public:
		EPolyEditExtrudeDistanceMode DistanceMode; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		double Distance; // 0xB0(0x8)
		EPolyEditPushPullModeOptions DirectionMode; // 0xB8(0x4)
		EPolyEditExtrudeDirection SingleDirection; // 0xBC(0x4)
		double MaxDistanceScaleFactor; // 0xC0(0x8)
		bool bShellsToSolids; // 0xC8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		EPolyEditExtrudeDirection MeasureDirection; // 0xCC(0x4)
		bool bUseColinearityForSettingBorderGroups; // 0xD0(0x1)
		unsigned char UnknownData02_7[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditPushPullProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditExtrudeActivity
	// Inherited from UInteractiveToolActivity -> UInteractionMechanic -> UObject
	// Size: 0x1A0 (0x1D0 - 0x30)
	class UPolyEditExtrudeActivity : public UInteractiveToolActivity	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x30(0x20) UNKNOWN PROPERTY
		UPolyEditExtrudeProperties* ExtrudeProperties; // 0x50(0x8)
		UPolyEditOffsetProperties* OffsetProperties; // 0x58(0x8)
		UPolyEditPushPullProperties* PushPullProperties; // 0x60(0x8)
		UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic; // 0x68(0x8)
		UPolyEditActivityContext* ActivityContext; // 0x70(0x8)
		unsigned char UnknownData01_7[0x158]; // 0x78(0x158) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditExtrudeActivity");
			return ret;
		}
	};


	// Class MeshModelingTools.GroupEdgeInsertionProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet	
	{
	public:
		EGroupEdgeInsertionMode InsertionMode; // 0xA8(0x4)
		bool bContinuousInsertion; // 0xAC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		double VertexTolerance; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.GroupEdgeInsertionProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditInsertEdgeActivity
	// Inherited from UInteractiveToolActivity -> UInteractionMechanic -> UObject
	// Size: 0x440 (0x470 - 0x30)
	class UPolyEditInsertEdgeActivity : public UInteractiveToolActivity	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x30(0x18) UNKNOWN PROPERTY
		UGroupEdgeInsertionProperties* Settings; // 0x48(0x8)
		UPolyEditActivityContext* ActivityContext; // 0x50(0x8)
		unsigned char UnknownData01_7[0x418]; // 0x58(0x418) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditInsertEdgeActivity");
			return ret;
		}
	};


	// Class MeshModelingTools.EdgeLoopInsertionProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet	
	{
	public:
		EEdgeLoopPositioningMode PositionMode; // 0xA8(0x4)
		EEdgeLoopInsertionMode InsertionMode; // 0xAC(0x4)
		int32_t NumLoops; // 0xB0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		double ProportionOffset; // 0xB8(0x8)
		double DistanceOffset; // 0xC0(0x8)
		bool bInteractive; // 0xC8(0x1)
		bool bFlipOffsetDirection; // 0xC9(0x1)
		bool bHighlightProblemGroups; // 0xCA(0x1)
		unsigned char UnknownData01_6[0x5]; // 0xCB(0x5) UNKNOWN PROPERTY
		double VertexTolerance; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.EdgeLoopInsertionProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditInsertEdgeLoopActivity
	// Inherited from UInteractiveToolActivity -> UInteractionMechanic -> UObject
	// Size: 0x3D0 (0x400 - 0x30)
	class UPolyEditInsertEdgeLoopActivity : public UInteractiveToolActivity	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x30(0x18) UNKNOWN PROPERTY
		UEdgeLoopInsertionProperties* Settings; // 0x48(0x8)
		UPolyEditActivityContext* ActivityContext; // 0x50(0x8)
		unsigned char UnknownData01_7[0x3A8]; // 0x58(0x3A8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditInsertEdgeLoopActivity");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditInsetOutsetProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UPolyEditInsetOutsetProperties : public UInteractiveToolPropertySet	
	{
	public:
		float Softness; // 0xA8(0x4)
		bool bBoundaryOnly; // 0xAC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		float AreaScale; // 0xB0(0x4)
		bool bReproject; // 0xB4(0x1)
		bool bOutset; // 0xB5(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xB6(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditInsetOutsetProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditInsetOutsetActivity
	// Inherited from UInteractiveToolActivity -> UInteractionMechanic -> UObject
	// Size: 0x40 (0x70 - 0x30)
	class UPolyEditInsetOutsetActivity : public UInteractiveToolActivity	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		UPolyEditInsetOutsetProperties* Settings; // 0x40(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
		UPolyEditPreviewMesh* EditPreview; // 0x50(0x8)
		USpatialCurveDistanceMechanic* CurveDistMechanic; // 0x58(0x8)
		UPolyEditActivityContext* ActivityContext; // 0x60(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x68(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditInsetOutsetActivity");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditSetUVProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPolyEditSetUVProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bShowMaterial; // 0xA8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditSetUVProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.PolyEditPlanarProjectionUVActivity
	// Inherited from UInteractiveToolActivity -> UInteractionMechanic -> UObject
	// Size: 0xC0 (0xF0 - 0x30)
	class UPolyEditPlanarProjectionUVActivity : public UInteractiveToolActivity	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		UPolyEditSetUVProperties* SetUVProperties; // 0x40(0x8)
		UPolyEditPreviewMesh* EditPreview; // 0x48(0x8)
		UCollectSurfacePathMechanic* SurfacePathMechanic; // 0x50(0x8)
		UPolyEditActivityContext* ActivityContext; // 0x58(0x8)
		unsigned char UnknownData01_7[0x90]; // 0x60(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.PolyEditPlanarProjectionUVActivity");
			return ret;
		}
	};


	// Class MeshModelingTools.UVLayoutToolBuilder
	// Inherited from UMultiSelectionMeshEditingToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UUVLayoutToolBuilder : public UMultiSelectionMeshEditingToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.UVLayoutToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingTools.UVLayoutTool
	// Inherited from UMultiSelectionMeshEditingTool -> UMultiSelectionTool -> UInteractiveTool -> UObject
	// Size: 0xB8 (0x170 - 0xB8)
	class UUVLayoutTool : public UMultiSelectionMeshEditingTool	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		UMeshUVChannelProperties* UVChannelProperties; // 0xC0(0x8)
		UUVLayoutProperties* BasicProperties; // 0xC8(0x8)
		UExistingMeshMaterialProperties* MaterialSettings; // 0xD0(0x8)
		TArray<UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xD8(0x10)
		TArray<UUVLayoutOperatorFactory*> Factories; // 0xE8(0x10)
		unsigned char UnknownData01_6[0x68]; // 0xF8(0x68) UNKNOWN PROPERTY
		UUVLayoutPreview* UVLayoutView; // 0x160(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x168(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.UVLayoutTool");
			return ret;
		}
	};


	// Class MeshModelingTools.UVProjectionToolBuilder
	// Inherited from USingleTargetWithSelectionToolBuilder -> UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UUVProjectionToolBuilder : public USingleTargetWithSelectionToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.UVProjectionToolBuilder");
			return ret;
		}
	};


	// Class MeshModelingTools.UVProjectionToolEditActions
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UUVProjectionToolEditActions : public UInteractiveToolPropertySet	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.UVProjectionToolEditActions");
			return ret;
		}

		void Reset(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BEE4(relative to base address)
		void AutoFitAlign(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BDF4(relative to base address)
		void AutoFit(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75112BDDC(relative to base address)
	};


	// Class MeshModelingTools.UVProjectionToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0xE8 (0x190 - 0xA8)
	class UUVProjectionToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		EUVProjectionMethod ProjectionType; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		FVector Dimensions; // 0xB0(0x18)
		bool bProportionalDimensions; // 0xC8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		EUVProjectionToolInitializationMode Initialization; // 0xCC(0x4)
		float CylinderSplitAngle; // 0xD0(0x4)
		float ExpMapNormalBlending; // 0xD4(0x4)
		int32_t ExpMapSmoothingSteps; // 0xD8(0x4)
		float ExpMapSmoothingAlpha; // 0xDC(0x4)
		float Rotation; // 0xE0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		FVector2D Scale; // 0xE8(0x10)
		FVector2D Translation; // 0xF8(0x10)
		FVector SavedDimensions; // 0x108(0x18)
		bool bSavedProportionalDimensions; // 0x120(0x1)
		unsigned char UnknownData03_6[0xF]; // 0x121(0xF) UNKNOWN PROPERTY
		FTransform SavedTransform; // 0x130(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.UVProjectionToolProperties");
			return ret;
		}
	};


	// Class MeshModelingTools.UVProjectionOperatorFactory
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UUVProjectionOperatorFactory : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UUVProjectionTool* Tool; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.UVProjectionOperatorFactory");
			return ret;
		}
	};


	// Class MeshModelingTools.UVProjectionTool
	// Inherited from USingleTargetWithSelectionTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x3B0 (0x4D0 - 0x120)
	class UUVProjectionTool : public USingleTargetWithSelectionTool	
	{
	public:
		UMeshUVChannelProperties* UVChannelProperties; // 0x120(0x8)
		UUVProjectionToolProperties* BasicProperties; // 0x128(0x8)
		UUVProjectionToolEditActions* EditActions; // 0x130(0x8)
		UExistingMeshMaterialProperties* MaterialSettings; // 0x138(0x8)
		UMeshOpPreviewWithBackgroundCompute* Preview; // 0x140(0x8)
		UMaterialInstanceDynamic* CheckerMaterial; // 0x148(0x8)
		UCombinedTransformGizmo* TransformGizmo; // 0x150(0x8)
		UTransformProxy* TransformProxy; // 0x158(0x8)
		UUVProjectionOperatorFactory* OperatorFactory; // 0x160(0x8)
		UPreviewGeometry* EdgeRenderer; // 0x168(0x8)
		unsigned char UnknownData00_6[0x348]; // 0x170(0x348) UNKNOWN PROPERTY
		USingleClickInputBehavior* ClickToSetPlaneBehavior; // 0x4B8(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x4C0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshModelingTools.UVProjectionTool");
			return ret;
		}
	};

}
