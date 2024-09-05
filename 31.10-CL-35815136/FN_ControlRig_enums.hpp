#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ControlRig
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/ControlRig.ERigElementType
	enum ERigElementType
	{
		ERigElementType__None = 0,
		ERigElementType__Bone = 1,
		ERigElementType__Null = 2,
		ERigElementType__Space = 2,
		ERigElementType__Control = 4,
		ERigElementType__Curve = 8,
		ERigElementType__RigidBody = 10,
		ERigElementType__Reference = 20,
		ERigElementType__Connector = 40,
		ERigElementType__Socket = 80,
		ERigElementType__First = 1,
		ERigElementType__Last = 80,
		ERigElementType__All = FF,
		ERigElementType__ToResetAfterConstructionEvent = 8D,
	};


	// Enum /Script/ControlRig.ERigHierarchyNotification
	enum ERigHierarchyNotification
	{
		ERigHierarchyNotification__ElementAdded = 0,
		ERigHierarchyNotification__ElementRemoved = 1,
		ERigHierarchyNotification__ElementRenamed = 2,
		ERigHierarchyNotification__ElementSelected = 3,
		ERigHierarchyNotification__ElementDeselected = 4,
		ERigHierarchyNotification__ParentChanged = 5,
		ERigHierarchyNotification__HierarchyReset = 6,
		ERigHierarchyNotification__ControlSettingChanged = 7,
		ERigHierarchyNotification__ControlVisibilityChanged = 8,
		ERigHierarchyNotification__ControlDrivenListChanged = 9,
		ERigHierarchyNotification__ControlShapeTransformChanged = A,
		ERigHierarchyNotification__ParentWeightsChanged = B,
		ERigHierarchyNotification__InteractionBracketOpened = C,
		ERigHierarchyNotification__InteractionBracketClosed = D,
		ERigHierarchyNotification__ElementReordered = E,
		ERigHierarchyNotification__ConnectorSettingChanged = F,
		ERigHierarchyNotification__SocketColorChanged = 10,
		ERigHierarchyNotification__SocketDescriptionChanged = 11,
		ERigHierarchyNotification__SocketDesiredParentChanged = 12,
		ERigHierarchyNotification__HierarchyCopied = 13,
		ERigHierarchyNotification__Max = 14,
	};


	// Enum /Script/ControlRig.ERigControlTransformChannel
	enum ERigControlTransformChannel
	{
		ERigControlTransformChannel__TranslationX = 0,
		ERigControlTransformChannel__TranslationY = 1,
		ERigControlTransformChannel__TranslationZ = 2,
		ERigControlTransformChannel__Pitch = 3,
		ERigControlTransformChannel__Yaw = 4,
		ERigControlTransformChannel__Roll = 5,
		ERigControlTransformChannel__ScaleX = 6,
		ERigControlTransformChannel__ScaleY = 7,
		ERigControlTransformChannel__ScaleZ = 8,
	};


	// Enum /Script/ControlRig.ERigControlVisibility
	enum ERigControlVisibility
	{
		ERigControlVisibility__UserDefined = 0,
		ERigControlVisibility__BasedOnSelection = 1,
	};


	// Enum /Script/ControlRig.ERigControlAxis
	enum ERigControlAxis
	{
		ERigControlAxis__X = 0,
		ERigControlAxis__Y = 1,
		ERigControlAxis__Z = 2,
	};


	// Enum /Script/ControlRig.ERigControlType
	enum ERigControlType
	{
		ERigControlType__Bool = 0,
		ERigControlType__Float = 1,
		ERigControlType__Integer = 2,
		ERigControlType__Vector2D = 3,
		ERigControlType__Position = 4,
		ERigControlType__Scale = 5,
		ERigControlType__Rotator = 6,
		ERigControlType__Transform = 7,
		ERigControlType__TransformNoScale = 8,
		ERigControlType__EulerTransform = 9,
		ERigControlType__ScaleFloat = A,
	};


	// Enum /Script/ControlRig.ERigControlAnimationType
	enum ERigControlAnimationType
	{
		ERigControlAnimationType__AnimationControl = 0,
		ERigControlAnimationType__AnimationChannel = 1,
		ERigControlAnimationType__ProxyControl = 2,
		ERigControlAnimationType__VisualCue = 3,
	};


	// Enum /Script/ControlRig.EConnectorType
	enum EConnectorType
	{
		EConnectorType__Primary = 0,
		EConnectorType__Secondary = 1,
	};


	// Enum /Script/ControlRig.ERigExecutionType
	enum ERigExecutionType
	{
		ERigExecutionType__Runtime = 0,
		ERigExecutionType__Editing = 1,
		ERigExecutionType__Max = 2,
	};


	// Enum /Script/ControlRig.ERigTransformStackEntryType
	enum ERigTransformStackEntryType
	{
		TransformPose = 0,
		ControlOffset = 1,
		ControlShape = 2,
		CurveValue = 3,
	};


	// Enum /Script/ControlRig.ERigTransformType
	enum ERigTransformType
	{
		ERigTransformType__InitialLocal = 0,
		ERigTransformType__CurrentLocal = 1,
		ERigTransformType__InitialGlobal = 2,
		ERigTransformType__CurrentGlobal = 3,
		ERigTransformType__NumTransformTypes = 4,
	};


	// Enum /Script/ControlRig.EControlRigVectorKind
	enum EControlRigVectorKind
	{
		EControlRigVectorKind__Direction = 0,
		EControlRigVectorKind__Location = 1,
	};


	// Enum /Script/ControlRig.EControlRigComponentSpace
	enum EControlRigComponentSpace
	{
		EControlRigComponentSpace__WorldSpace = 0,
		EControlRigComponentSpace__ActorSpace = 1,
		EControlRigComponentSpace__ComponentSpace = 2,
		EControlRigComponentSpace__RigSpace = 3,
		EControlRigComponentSpace__LocalSpace = 4,
		EControlRigComponentSpace__Max = 5,
	};


	// Enum /Script/ControlRig.EControlRigComponentMapDirection
	enum EControlRigComponentMapDirection
	{
		EControlRigComponentMapDirection__Input = 0,
		EControlRigComponentMapDirection__Output = 1,
	};


	// Enum /Script/ControlRig.ETransformSpaceMode
	enum ETransformSpaceMode
	{
		ETransformSpaceMode__LocalSpace = 0,
		ETransformSpaceMode__GlobalSpace = 1,
		ETransformSpaceMode__BaseSpace = 2,
		ETransformSpaceMode__BaseJoint = 3,
		ETransformSpaceMode__Max = 4,
	};


	// Enum /Script/ControlRig.ETransformGetterType
	enum ETransformGetterType
	{
		ETransformGetterType__Initial = 0,
		ETransformGetterType__Current = 1,
		ETransformGetterType__Max = 2,
	};


	// Enum /Script/ControlRig.EControlRigTestDataPlaybackMode
	enum EControlRigTestDataPlaybackMode
	{
		EControlRigTestDataPlaybackMode__Live = 0,
		EControlRigTestDataPlaybackMode__ReplayInputs = 1,
		EControlRigTestDataPlaybackMode__GroundTruth = 2,
		EControlRigTestDataPlaybackMode__Max = 3,
	};


	// Enum /Script/ControlRig.ECRSimConstraintType
	enum ECRSimConstraintType
	{
		ECRSimConstraintType__Distance = 0,
		ECRSimConstraintType__DistanceFromA = 1,
		ECRSimConstraintType__DistanceFromB = 2,
		ECRSimConstraintType__Plane = 3,
	};


	// Enum /Script/ControlRig.ECRSimPointForceType
	enum ECRSimPointForceType
	{
		ECRSimPointForceType__Direction = 0,
	};


	// Enum /Script/ControlRig.ECRSimSoftCollisionType
	enum ECRSimSoftCollisionType
	{
		ECRSimSoftCollisionType__Plane = 0,
		ECRSimSoftCollisionType__Sphere = 1,
		ECRSimSoftCollisionType__Cone = 2,
	};


	// Enum /Script/ControlRig.EModularRigNotification
	enum EModularRigNotification
	{
		EModularRigNotification__ModuleAdded = 0,
		EModularRigNotification__ModuleRenamed = 1,
		EModularRigNotification__ModuleRemoved = 2,
		EModularRigNotification__ModuleReparented = 3,
		EModularRigNotification__ConnectionChanged = 4,
		EModularRigNotification__ModuleConfigValueChanged = 5,
		EModularRigNotification__ModuleShortNameChanged = 6,
		EModularRigNotification__InteractionBracketOpened = 7,
		EModularRigNotification__InteractionBracketClosed = 8,
		EModularRigNotification__InteractionBracketCanceled = 9,
		EModularRigNotification__ModuleClassChanged = A,
		EModularRigNotification__Max = B,
	};


	// Enum /Script/ControlRig.EControlRigFKRigExecuteMode
	enum EControlRigFKRigExecuteMode
	{
		EControlRigFKRigExecuteMode__Replace = 0,
		EControlRigFKRigExecuteMode__Additive = 1,
		EControlRigFKRigExecuteMode__Direct = 2,
		EControlRigFKRigExecuteMode__Max = 3,
	};


	// Enum /Script/ControlRig.ERigBoneType
	enum ERigBoneType
	{
		ERigBoneType__Imported = 0,
		ERigBoneType__User = 1,
	};


	// Enum /Script/ControlRig.ERigMetadataType
	enum ERigMetadataType
	{
		ERigMetadataType__Bool = 0,
		ERigMetadataType__BoolArray = 1,
		ERigMetadataType__Float = 2,
		ERigMetadataType__FloatArray = 3,
		ERigMetadataType__Int32 = 4,
		ERigMetadataType__Int32Array = 5,
		ERigMetadataType__Name = 6,
		ERigMetadataType__NameArray = 7,
		ERigMetadataType__Vector = 8,
		ERigMetadataType__VectorArray = 9,
		ERigMetadataType__Rotator = A,
		ERigMetadataType__RotatorArray = B,
		ERigMetadataType__Quat = C,
		ERigMetadataType__QuatArray = D,
		ERigMetadataType__Transform = E,
		ERigMetadataType__TransformArray = F,
		ERigMetadataType__LinearColor = 10,
		ERigMetadataType__LinearColorArray = 11,
		ERigMetadataType__RigElementKey = 12,
		ERigMetadataType__RigElementKeyArray = 13,
		ERigMetadataType__Invalid = 14,
	};


	// Enum /Script/ControlRig.ERigEvent
	enum ERigEvent
	{
		ERigEvent__None = 0,
		ERigEvent__RequestAutoKey = 1,
		ERigEvent__OpenUndoBracket = 2,
		ERigEvent__CloseUndoBracket = 3,
		ERigEvent__Max = 4,
	};


	// Enum /Script/ControlRig.EControlRigSetKey
	enum EControlRigSetKey
	{
		EControlRigSetKey__DoNotCare = 0,
		EControlRigSetKey__Always = 1,
		EControlRigSetKey__Never = 2,
	};


	// Enum /Script/ControlRig.ERigControlValueType
	enum ERigControlValueType
	{
		ERigControlValueType__Initial = 0,
		ERigControlValueType__Current = 1,
		ERigControlValueType__Minimum = 2,
		ERigControlValueType__Maximum = 3,
	};


	// Enum /Script/ControlRig.ERigElementResolveState
	enum ERigElementResolveState
	{
		ERigElementResolveState__Unknown = 0,
		ERigElementResolveState__InvalidTarget = 1,
		ERigElementResolveState__PossibleTarget = 2,
		ERigElementResolveState__DefaultTarget = 3,
		ERigElementResolveState__Max = 4,
	};


	// Enum /Script/ControlRig.EModularRigResolveState
	enum EModularRigResolveState
	{
		EModularRigResolveState__Success = 0,
		EModularRigResolveState__Error = 1,
		EModularRigResolveState__Max = 2,
	};


	// Enum /Script/ControlRig.ERigSpaceType
	enum ERigSpaceType
	{
		ERigSpaceType__Global = 0,
		ERigSpaceType__Bone = 1,
		ERigSpaceType__Control = 2,
		ERigSpaceType__Space = 3,
	};


	// Enum /Script/ControlRig.EMovieSceneControlRigSpaceType
	enum EMovieSceneControlRigSpaceType
	{
		EMovieSceneControlRigSpaceType__Parent = 0,
		EMovieSceneControlRigSpaceType__World = 1,
		EMovieSceneControlRigSpaceType__ControlRig = 2,
	};


	// Enum /Script/ControlRig.EControlRigDrawHierarchyMode
	enum EControlRigDrawHierarchyMode
	{
		EControlRigDrawHierarchyMode__Axes = 0,
		EControlRigDrawHierarchyMode__Max = 1,
	};


	// Enum /Script/ControlRig.EAimMode
	enum EAimMode
	{
		EAimMode__AimAtTarget = 0,
		EAimMode__OrientToTarget = 1,
	};


	// Enum /Script/ControlRig.EApplyTransformMode
	enum EApplyTransformMode
	{
		EApplyTransformMode__Override = 0,
		EApplyTransformMode__Additive = 1,
		EApplyTransformMode__Max = 2,
	};


	// Enum /Script/ControlRig.ERigSwitchParentMode
	enum ERigSwitchParentMode
	{
		ERigSwitchParentMode__World = 0,
		ERigSwitchParentMode__DefaultParent = 1,
		ERigSwitchParentMode__ParentItem = 2,
	};


	// Enum /Script/ControlRig.EControlRigCurveAlignment
	enum EControlRigCurveAlignment
	{
		EControlRigCurveAlignment__Front = 0,
		EControlRigCurveAlignment__Stretched = 1,
	};


	// Enum /Script/ControlRig.EControlRigModifyBoneMode
	enum EControlRigModifyBoneMode
	{
		EControlRigModifyBoneMode__OverrideLocal = 0,
		EControlRigModifyBoneMode__OverrideGlobal = 1,
		EControlRigModifyBoneMode__AdditiveLocal = 2,
		EControlRigModifyBoneMode__AdditiveGlobal = 3,
		EControlRigModifyBoneMode__Max = 4,
	};


	// Enum /Script/ControlRig.EConstraintInterpType
	enum EConstraintInterpType
	{
		EConstraintInterpType__Average = 0,
		EConstraintInterpType__Shortest = 1,
		EConstraintInterpType__Max = 2,
	};


	// Enum /Script/ControlRig.EControlRigInteractionType
	enum EControlRigInteractionType
	{
		EControlRigInteractionType__None = 0,
		EControlRigInteractionType__Translate = 1,
		EControlRigInteractionType__Rotate = 2,
		EControlRigInteractionType__Scale = 4,
		EControlRigInteractionType__All = 7,
	};


	// Enum /Script/ControlRig.ERigMetaDataNameSpace
	enum ERigMetaDataNameSpace
	{
		ERigMetaDataNameSpace__None = 0,
		ERigMetaDataNameSpace__Self = 1,
		ERigMetaDataNameSpace__Parent = 2,
		ERigMetaDataNameSpace__Root = 3,
		ERigMetaDataNameSpace__Last = 4,
	};

}
