#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: InteractiveToolsFramework
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/InteractiveToolsFramework.EGizmoElementState
	enum EGizmoElementState
	{
		EGizmoElementState__None = 0,
		EGizmoElementState__Visible = 2,
		EGizmoElementState__Hittable = 4,
		EGizmoElementState__VisibleAndHittable = 6,
	};


	// Enum /Script/InteractiveToolsFramework.EGizmoElementInteractionState
	enum EGizmoElementInteractionState
	{
		EGizmoElementInteractionState__None = 0,
		EGizmoElementInteractionState__Hovering = 1,
		EGizmoElementInteractionState__Interacting = 2,
	};


	// Enum /Script/InteractiveToolsFramework.EGizmoElementViewDependentType
	enum EGizmoElementViewDependentType
	{
		EGizmoElementViewDependentType__None = 0,
		EGizmoElementViewDependentType__Axis = 1,
		EGizmoElementViewDependentType__Plane = 2,
	};


	// Enum /Script/InteractiveToolsFramework.EGizmoElementViewAlignType
	enum EGizmoElementViewAlignType
	{
		EGizmoElementViewAlignType__None = 0,
		EGizmoElementViewAlignType__PointOnly = 1,
		EGizmoElementViewAlignType__PointEye = 2,
		EGizmoElementViewAlignType__PointScreen = 3,
		EGizmoElementViewAlignType__Axial = 4,
	};


	// Enum /Script/InteractiveToolsFramework.EGizmoElementPartialType
	enum EGizmoElementPartialType
	{
		EGizmoElementPartialType__None = 0,
		EGizmoElementPartialType__Partial = 1,
		EGizmoElementPartialType__PartialViewDependent = 2,
	};


	// Enum /Script/InteractiveToolsFramework.EStandardToolContextMaterials
	enum EStandardToolContextMaterials
	{
		EStandardToolContextMaterials__VertexColorMaterial = 1,
	};


	// Enum /Script/InteractiveToolsFramework.EToolContextCoordinateSystem
	enum EToolContextCoordinateSystem
	{
		EToolContextCoordinateSystem__World = 0,
		EToolContextCoordinateSystem__Local = 1,
	};


	// Enum /Script/InteractiveToolsFramework.EToolContextTransformGizmoMode
	enum EToolContextTransformGizmoMode
	{
		EToolContextTransformGizmoMode__NoGizmo = 0,
		EToolContextTransformGizmoMode__Translation = 1,
		EToolContextTransformGizmoMode__Rotation = 2,
		EToolContextTransformGizmoMode__Scale = 3,
		EToolContextTransformGizmoMode__Combined = 8,
	};


	// Enum /Script/InteractiveToolsFramework.EToolMessageLevel
	enum EToolMessageLevel
	{
		EToolMessageLevel__Internal = 0,
		EToolMessageLevel__UserMessage = 1,
		EToolMessageLevel__UserNotification = 2,
		EToolMessageLevel__UserWarning = 3,
		EToolMessageLevel__UserError = 4,
	};


	// Enum /Script/InteractiveToolsFramework.ESelectedObjectsModificationType
	enum ESelectedObjectsModificationType
	{
		ESelectedObjectsModificationType__Replace = 0,
		ESelectedObjectsModificationType__Add = 1,
		ESelectedObjectsModificationType__Remove = 2,
		ESelectedObjectsModificationType__Clear = 3,
	};


	// Enum /Script/InteractiveToolsFramework.EViewInteractionState
	enum EViewInteractionState
	{
		EViewInteractionState__None = 0,
		EViewInteractionState__Hovered = 1,
		EViewInteractionState__Focused = 2,
	};


	// Enum /Script/InteractiveToolsFramework.EGizmoElementArrowHeadType
	enum EGizmoElementArrowHeadType
	{
		EGizmoElementArrowHeadType__Cone = 0,
		EGizmoElementArrowHeadType__Cube = 1,
	};


	// Enum /Script/InteractiveToolsFramework.EInputCaptureSide
	enum EInputCaptureSide
	{
		EInputCaptureSide__None = 0,
		EInputCaptureSide__Left = 1,
		EInputCaptureSide__Right = 2,
		EInputCaptureSide__Both = 3,
		EInputCaptureSide__Any = 63,
	};


	// Enum /Script/InteractiveToolsFramework.EInputCaptureRequestType
	enum EInputCaptureRequestType
	{
		EInputCaptureRequestType__Begin = 1,
		EInputCaptureRequestType__Ignore = 2,
	};


	// Enum /Script/InteractiveToolsFramework.EInputCaptureState
	enum EInputCaptureState
	{
		EInputCaptureState__Begin = 1,
		EInputCaptureState__Continue = 2,
		EInputCaptureState__End = 3,
		EInputCaptureState__Ignore = 4,
	};


	// Enum /Script/InteractiveToolsFramework.EInputDevices
	enum EInputDevices
	{
		EInputDevices__None = 0,
		EInputDevices__Keyboard = 1,
		EInputDevices__Mouse = 2,
		EInputDevices__Gamepad = 4,
		EInputDevices__OculusTouch = 8,
		EInputDevices__HTCViveWands = 10,
		EInputDevices__AnySpatialDevice = 18,
		EInputDevices__TabletFingers = 400,
	};


	// Enum /Script/InteractiveToolsFramework.ETransformGizmoSubElements
	enum ETransformGizmoSubElements
	{
		ETransformGizmoSubElements__None = 0,
		ETransformGizmoSubElements__TranslateAxisX = 2,
		ETransformGizmoSubElements__TranslateAxisY = 4,
		ETransformGizmoSubElements__TranslateAxisZ = 8,
		ETransformGizmoSubElements__TranslateAllAxes = E,
		ETransformGizmoSubElements__TranslatePlaneXY = 10,
		ETransformGizmoSubElements__TranslatePlaneXZ = 20,
		ETransformGizmoSubElements__TranslatePlaneYZ = 40,
		ETransformGizmoSubElements__TranslateAllPlanes = 70,
		ETransformGizmoSubElements__RotateAxisX = 80,
		ETransformGizmoSubElements__RotateAxisY = 100,
		ETransformGizmoSubElements__RotateAxisZ = 200,
		ETransformGizmoSubElements__RotateAllAxes = 380,
		ETransformGizmoSubElements__ScaleAxisX = 400,
		ETransformGizmoSubElements__ScaleAxisY = 800,
		ETransformGizmoSubElements__ScaleAxisZ = 1000,
		ETransformGizmoSubElements__ScaleAllAxes = 1C00,
		ETransformGizmoSubElements__ScalePlaneYZ = 2000,
		ETransformGizmoSubElements__ScalePlaneXZ = 4000,
		ETransformGizmoSubElements__ScalePlaneXY = 8000,
		ETransformGizmoSubElements__ScaleAllPlanes = E000,
		ETransformGizmoSubElements__ScaleUniform = 10000,
		ETransformGizmoSubElements__StandardTranslateRotate = 3FE,
		ETransformGizmoSubElements__TranslateRotateUniformScale = 103FE,
		ETransformGizmoSubElements__FullTranslateRotateScale = 1FFFE,
	};


	// Enum /Script/InteractiveToolsFramework.EToolShutdownType
	enum EToolShutdownType
	{
		EToolShutdownType__Completed = 0,
		EToolShutdownType__Accept = 1,
		EToolShutdownType__Cancel = 2,
	};


	// Enum /Script/InteractiveToolsFramework.EToolSide
	enum EToolSide
	{
		EToolSide__Left = 1,
		EToolSide__Mouse = 1,
		EToolSide__Right = 2,
	};


	// Enum /Script/InteractiveToolsFramework.EToolChangeTrackingMode
	enum EToolChangeTrackingMode
	{
		EToolChangeTrackingMode__NoChangeTracking = 1,
		EToolChangeTrackingMode__UndoToExit = 2,
		EToolChangeTrackingMode__FullUndoRedo = 3,
	};


	// Enum /Script/InteractiveToolsFramework.ESceneSnapQueryType
	enum ESceneSnapQueryType
	{
		ESceneSnapQueryType__Position = 1,
		ESceneSnapQueryType__Rotation = 2,
	};


	// Enum /Script/InteractiveToolsFramework.ESceneSnapQueryTargetType
	enum ESceneSnapQueryTargetType
	{
		ESceneSnapQueryTargetType__None = 0,
		ESceneSnapQueryTargetType__MeshVertex = 1,
		ESceneSnapQueryTargetType__MeshEdge = 2,
		ESceneSnapQueryTargetType__Grid = 4,
		ESceneSnapQueryTargetType__All = 7,
	};

}
