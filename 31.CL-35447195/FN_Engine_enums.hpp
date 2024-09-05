#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Engine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/Engine.ETextGender
	enum ETextGender
	{
		ETextGender__Masculine = 0,
		ETextGender__Feminine = 1,
		ETextGender__Neuter = 2,
	};


	// Enum /Script/Engine.EFormatArgumentType
	enum EFormatArgumentType
	{
		EFormatArgumentType__Int = 0,
		EFormatArgumentType__UInt = 1,
		EFormatArgumentType__Float = 2,
		EFormatArgumentType__Double = 3,
		EFormatArgumentType__Text = 4,
		EFormatArgumentType__Gender = 5,
	};


	// Enum /Script/Engine.EAnimDataModelNotifyType
	enum EAnimDataModelNotifyType
	{
		EAnimDataModelNotifyType__BracketOpened = 0,
		EAnimDataModelNotifyType__BracketClosed = 1,
		EAnimDataModelNotifyType__TrackAdded = 2,
		EAnimDataModelNotifyType__TrackChanged = 3,
		EAnimDataModelNotifyType__TrackRemoved = 4,
		EAnimDataModelNotifyType__SequenceLengthChanged = 5,
		EAnimDataModelNotifyType__FrameRateChanged = 6,
		EAnimDataModelNotifyType__CurveAdded = 7,
		EAnimDataModelNotifyType__CurveChanged = 8,
		EAnimDataModelNotifyType__CurveRemoved = 9,
		EAnimDataModelNotifyType__CurveFlagsChanged = A,
		EAnimDataModelNotifyType__CurveRenamed = B,
		EAnimDataModelNotifyType__CurveScaled = C,
		EAnimDataModelNotifyType__CurveColorChanged = D,
		EAnimDataModelNotifyType__CurveCommentChanged = E,
		EAnimDataModelNotifyType__AttributeAdded = F,
		EAnimDataModelNotifyType__AttributeRemoved = 10,
		EAnimDataModelNotifyType__AttributeChanged = 11,
		EAnimDataModelNotifyType__Populated = 12,
		EAnimDataModelNotifyType__Reset = 13,
		EAnimDataModelNotifyType__SkeletonChanged = 14,
		EAnimDataModelNotifyType__Invalid = 15,
	};


	// Enum /Script/Engine.EMovementMode
	enum EMovementMode
	{
		MOVE_None = 0,
		MOVE_Walking = 1,
		MOVE_NavWalking = 2,
		MOVE_Falling = 3,
		MOVE_Swimming = 4,
		MOVE_Flying = 5,
		MOVE_Custom = 6,
	};


	// Enum /Script/Engine.EAudioComponentPlayState
	enum EAudioComponentPlayState
	{
		EAudioComponentPlayState__Playing = 0,
		EAudioComponentPlayState__Stopped = 1,
		EAudioComponentPlayState__Paused = 2,
		EAudioComponentPlayState__FadingIn = 3,
		EAudioComponentPlayState__FadingOut = 4,
		EAudioComponentPlayState__Count = 5,
	};


	// Enum /Script/Engine.EDataLayerRuntimeState
	enum EDataLayerRuntimeState
	{
		EDataLayerRuntimeState__Unloaded = 0,
		EDataLayerRuntimeState__Loaded = 1,
		EDataLayerRuntimeState__Activated = 2,
	};


	// Enum /Script/Engine.EQuartzCommandDelegateSubType
	enum EQuartzCommandDelegateSubType
	{
		EQuartzCommandDelegateSubType__CommandOnFailedToQueue = 0,
		EQuartzCommandDelegateSubType__CommandOnQueued = 1,
		EQuartzCommandDelegateSubType__CommandOnCanceled = 2,
		EQuartzCommandDelegateSubType__CommandOnAboutToStart = 3,
		EQuartzCommandDelegateSubType__CommandOnStarted = 4,
		EQuartzCommandDelegateSubType__Count = 5,
	};


	// Enum /Script/Engine.EQuartzCommandQuantization
	enum EQuartzCommandQuantization
	{
		EQuartzCommandQuantization__Bar = 0,
		EQuartzCommandQuantization__Beat = 1,
		EQuartzCommandQuantization__ThirtySecondNote = 2,
		EQuartzCommandQuantization__SixteenthNote = 3,
		EQuartzCommandQuantization__EighthNote = 4,
		EQuartzCommandQuantization__QuarterNote = 5,
		EQuartzCommandQuantization__HalfNote = 6,
		EQuartzCommandQuantization__WholeNote = 7,
		EQuartzCommandQuantization__DottedSixteenthNote = 8,
		EQuartzCommandQuantization__DottedEighthNote = 9,
		EQuartzCommandQuantization__DottedQuarterNote = A,
		EQuartzCommandQuantization__DottedHalfNote = B,
		EQuartzCommandQuantization__DottedWholeNote = C,
		EQuartzCommandQuantization__SixteenthNoteTriplet = D,
		EQuartzCommandQuantization__EighthNoteTriplet = E,
		EQuartzCommandQuantization__QuarterNoteTriplet = F,
		EQuartzCommandQuantization__HalfNoteTriplet = 10,
		EQuartzCommandQuantization__Tick = 11,
		EQuartzCommandQuantization__Count = 12,
		EQuartzCommandQuantization__None = 13,
	};


	// Enum /Script/Engine.EPlatformInterfaceDataType
	enum EPlatformInterfaceDataType
	{
		PIDT_None = 0,
		PIDT_Int = 1,
		PIDT_Float = 2,
		PIDT_String = 3,
		PIDT_Object = 4,
		PIDT_Custom = 5,
	};


	// Enum /Script/Engine.EEndPlayReason
	enum EEndPlayReason
	{
		EEndPlayReason__Destroyed = 0,
		EEndPlayReason__LevelTransition = 1,
		EEndPlayReason__EndPlayInEditor = 2,
		EEndPlayReason__RemovedFromWorld = 3,
		EEndPlayReason__Quit = 4,
	};


	// Enum /Script/Engine.ETickingGroup
	enum ETickingGroup
	{
		TG_PrePhysics = 0,
		TG_StartPhysics = 1,
		TG_DuringPhysics = 2,
		TG_EndPhysics = 3,
		TG_PostPhysics = 4,
		TG_PostUpdateWork = 5,
		TG_LastDemotable = 6,
		TG_NewlySpawned = 7,
	};


	// Enum /Script/Engine.EComponentCreationMethod
	enum EComponentCreationMethod
	{
		EComponentCreationMethod__Native = 0,
		EComponentCreationMethod__SimpleConstructionScript = 1,
		EComponentCreationMethod__UserConstructionScript = 2,
		EComponentCreationMethod__Instance = 3,
	};


	// Enum /Script/Engine.ETemperatureSeverityType
	enum ETemperatureSeverityType
	{
		ETemperatureSeverityType__Unknown = 0,
		ETemperatureSeverityType__Good = 1,
		ETemperatureSeverityType__Bad = 2,
		ETemperatureSeverityType__Serious = 3,
		ETemperatureSeverityType__Critical = 4,
		ETemperatureSeverityType__NumSeverities = 5,
	};


	// Enum /Script/Engine.EPlaneConstraintAxisSetting
	enum EPlaneConstraintAxisSetting
	{
		EPlaneConstraintAxisSetting__Custom = 0,
		EPlaneConstraintAxisSetting__X = 1,
		EPlaneConstraintAxisSetting__Y = 2,
		EPlaneConstraintAxisSetting__Z = 3,
		EPlaneConstraintAxisSetting__UseGlobalPhysicsSetting = 4,
	};


	// Enum /Script/Engine.EInterpToBehaviourType
	enum EInterpToBehaviourType
	{
		EInterpToBehaviourType__OneShot = 0,
		EInterpToBehaviourType__OneShot_Reverse = 1,
		EInterpToBehaviourType__Loop_Reset = 2,
		EInterpToBehaviourType__PingPong = 3,
	};


	// Enum /Script/Engine.ETeleportType
	enum ETeleportType
	{
		ETeleportType__None = 0,
		ETeleportType__TeleportPhysics = 1,
		ETeleportType__ResetPhysics = 2,
	};


	// Enum /Script/Engine.EObjectTypeQuery
	enum EObjectTypeQuery
	{
		ObjectTypeQuery1 = 0,
		ObjectTypeQuery2 = 1,
		ObjectTypeQuery3 = 2,
		ObjectTypeQuery4 = 3,
		ObjectTypeQuery5 = 4,
		ObjectTypeQuery6 = 5,
		ObjectTypeQuery7 = 6,
		ObjectTypeQuery8 = 7,
		ObjectTypeQuery9 = 8,
		ObjectTypeQuery10 = 9,
		ObjectTypeQuery11 = A,
		ObjectTypeQuery12 = B,
		ObjectTypeQuery13 = C,
		ObjectTypeQuery14 = D,
		ObjectTypeQuery15 = E,
		ObjectTypeQuery16 = F,
		ObjectTypeQuery17 = 10,
		ObjectTypeQuery18 = 11,
		ObjectTypeQuery19 = 12,
		ObjectTypeQuery20 = 13,
		ObjectTypeQuery21 = 14,
		ObjectTypeQuery22 = 15,
		ObjectTypeQuery23 = 16,
		ObjectTypeQuery24 = 17,
		ObjectTypeQuery25 = 18,
		ObjectTypeQuery26 = 19,
		ObjectTypeQuery27 = 1A,
		ObjectTypeQuery28 = 1B,
		ObjectTypeQuery29 = 1C,
		ObjectTypeQuery30 = 1D,
		ObjectTypeQuery31 = 1E,
		ObjectTypeQuery32 = 1F,
	};


	// Enum /Script/Engine.EDrawDebugTrace
	enum EDrawDebugTrace
	{
		EDrawDebugTrace__None = 0,
		EDrawDebugTrace__ForOneFrame = 1,
		EDrawDebugTrace__ForDuration = 2,
		EDrawDebugTrace__Persistent = 3,
	};


	// Enum /Script/Engine.ETraceTypeQuery
	enum ETraceTypeQuery
	{
		TraceTypeQuery1 = 0,
		TraceTypeQuery2 = 1,
		TraceTypeQuery3 = 2,
		TraceTypeQuery4 = 3,
		TraceTypeQuery5 = 4,
		TraceTypeQuery6 = 5,
		TraceTypeQuery7 = 6,
		TraceTypeQuery8 = 7,
		TraceTypeQuery9 = 8,
		TraceTypeQuery10 = 9,
		TraceTypeQuery11 = A,
		TraceTypeQuery12 = B,
		TraceTypeQuery13 = C,
		TraceTypeQuery14 = D,
		TraceTypeQuery15 = E,
		TraceTypeQuery16 = F,
		TraceTypeQuery17 = 10,
		TraceTypeQuery18 = 11,
		TraceTypeQuery19 = 12,
		TraceTypeQuery20 = 13,
		TraceTypeQuery21 = 14,
		TraceTypeQuery22 = 15,
		TraceTypeQuery23 = 16,
		TraceTypeQuery24 = 17,
		TraceTypeQuery25 = 18,
		TraceTypeQuery26 = 19,
		TraceTypeQuery27 = 1A,
		TraceTypeQuery28 = 1B,
		TraceTypeQuery29 = 1C,
		TraceTypeQuery30 = 1D,
		TraceTypeQuery31 = 1E,
		TraceTypeQuery32 = 1F,
	};


	// Enum /Script/Engine.EMoveComponentAction
	enum EMoveComponentAction
	{
		EMoveComponentAction__Move = 0,
		EMoveComponentAction__Stop = 1,
		EMoveComponentAction__Return = 2,
	};


	// Enum /Script/Engine.EQuitPreference
	enum EQuitPreference
	{
		EQuitPreference__Quit = 0,
		EQuitPreference__Background = 1,
	};


	// Enum /Script/Engine.ETravelFailure
	enum ETravelFailure
	{
		ETravelFailure__NoLevel = 0,
		ETravelFailure__LoadMapFailure = 1,
		ETravelFailure__InvalidURL = 2,
		ETravelFailure__PackageMissing = 3,
		ETravelFailure__PackageVersion = 4,
		ETravelFailure__NoDownload = 5,
		ETravelFailure__TravelFailure = 6,
		ETravelFailure__CheatCommands = 7,
		ETravelFailure__PendingNetGameCreateFailure = 8,
		ETravelFailure__CloudSaveFailure = 9,
		ETravelFailure__ServerTravelFailure = A,
		ETravelFailure__ClientTravelFailure = B,
	};


	// Enum /Script/Engine.EApplicationState
	enum EApplicationState
	{
		EApplicationState__Unknown = 0,
		EApplicationState__Inactive = 1,
		EApplicationState__Background = 2,
		EApplicationState__Active = 3,
	};


	// Enum /Script/Engine.EScreenOrientation
	enum EScreenOrientation
	{
		EScreenOrientation__Unknown = 0,
		EScreenOrientation__Portrait = 1,
		EScreenOrientation__PortraitUpsideDown = 2,
		EScreenOrientation__LandscapeLeft = 3,
		EScreenOrientation__LandscapeRight = 4,
		EScreenOrientation__FaceUp = 5,
		EScreenOrientation__FaceDown = 6,
		EScreenOrientation__PortraitSensor = 7,
		EScreenOrientation__LandscapeSensor = 8,
		EScreenOrientation__FullSensor = 9,
	};


	// Enum /Script/Engine.EComponentPhysicsStateChange
	enum EComponentPhysicsStateChange
	{
		EComponentPhysicsStateChange__Created = 0,
		EComponentPhysicsStateChange__Destroyed = 1,
	};


	// Enum /Script/Engine.ERelativeTransformSpace
	enum ERelativeTransformSpace
	{
		RTS_World = 0,
		RTS_Actor = 1,
		RTS_Component = 2,
		RTS_ParentBoneSpace = 3,
	};


	// Enum /Script/Engine.EAttachLocation
	enum EAttachLocation
	{
		EAttachLocation__KeepRelativeOffset = 0,
		EAttachLocation__KeepWorldPosition = 1,
		EAttachLocation__SnapToTarget = 2,
		EAttachLocation__SnapToTargetIncludingScale = 3,
	};


	// Enum /Script/Engine.EAttachmentRule
	enum EAttachmentRule
	{
		EAttachmentRule__KeepRelative = 0,
		EAttachmentRule__KeepWorld = 1,
		EAttachmentRule__SnapToTarget = 2,
	};


	// Enum /Script/Engine.EDetachmentRule
	enum EDetachmentRule
	{
		EDetachmentRule__KeepRelative = 0,
		EDetachmentRule__KeepWorld = 1,
	};


	// Enum /Script/Engine.EComponentMobility
	enum EComponentMobility
	{
		EComponentMobility__Static = 0,
		EComponentMobility__Stationary = 1,
		EComponentMobility__Movable = 2,
	};


	// Enum /Script/Engine.EDetailMode
	enum EDetailMode
	{
		DM_Low = 0,
		DM_Medium = 1,
		DM_High = 2,
		DM_Epic = 3,
	};


	// Enum /Script/Engine.ECollisionEnabled
	enum ECollisionEnabled
	{
		ECollisionEnabled__NoCollision = 0,
		ECollisionEnabled__QueryOnly = 1,
		ECollisionEnabled__PhysicsOnly = 2,
		ECollisionEnabled__QueryAndPhysics = 3,
		ECollisionEnabled__ProbeOnly = 4,
		ECollisionEnabled__QueryAndProbe = 5,
	};


	// Enum /Script/Engine.ECollisionChannel
	enum ECollisionChannel
	{
		ECC_WorldStatic = 0,
		ECC_WorldDynamic = 1,
		ECC_Pawn = 2,
		ECC_Visibility = 3,
		ECC_Camera = 4,
		ECC_PhysicsBody = 5,
		ECC_Vehicle = 6,
		ECC_Destructible = 7,
		ECC_EngineTraceChannel1 = 8,
		ECC_EngineTraceChannel2 = 9,
		ECC_EngineTraceChannel3 = A,
		ECC_EngineTraceChannel4 = B,
		ECC_EngineTraceChannel5 = C,
		ECC_EngineTraceChannel6 = D,
		ECC_GameTraceChannel1 = E,
		ECC_GameTraceChannel2 = F,
		ECC_GameTraceChannel3 = 10,
		ECC_GameTraceChannel4 = 11,
		ECC_GameTraceChannel5 = 12,
		ECC_GameTraceChannel6 = 13,
		ECC_GameTraceChannel7 = 14,
		ECC_GameTraceChannel8 = 15,
		ECC_GameTraceChannel9 = 16,
		ECC_GameTraceChannel10 = 17,
		ECC_GameTraceChannel11 = 18,
		ECC_GameTraceChannel12 = 19,
		ECC_GameTraceChannel13 = 1A,
		ECC_GameTraceChannel14 = 1B,
		ECC_GameTraceChannel15 = 1C,
		ECC_GameTraceChannel16 = 1D,
		ECC_GameTraceChannel17 = 1E,
		ECC_GameTraceChannel18 = 1F,
		ECC_OverlapAll_Deprecated = 20,
	};


	// Enum /Script/Engine.ECollisionResponse
	enum ECollisionResponse
	{
		ECR_Ignore = 0,
		ECR_Overlap = 1,
		ECR_Block = 2,
	};


	// Enum /Script/Engine.EWalkableSlopeBehavior
	enum EWalkableSlopeBehavior
	{
		WalkableSlope_Default = 0,
		WalkableSlope_Increase = 1,
		WalkableSlope_Decrease = 2,
		WalkableSlope_Unwalkable = 3,
		WalkableSlope_Max = 4,
	};


	// Enum /Script/Engine.EHLODLevelExclusion
	enum EHLODLevelExclusion
	{
		EHLODLevelExclusion__HLOD0 = 1,
		EHLODLevelExclusion__HLOD1 = 2,
		EHLODLevelExclusion__HLOD2 = 4,
		EHLODLevelExclusion__HLOD3 = 8,
		EHLODLevelExclusion__HLOD4 = 10,
		EHLODLevelExclusion__HLOD5 = 20,
		EHLODLevelExclusion__HLOD6 = 40,
		EHLODLevelExclusion__HLOD7 = 80,
	};


	// Enum /Script/Engine.EDOFMode
	enum EDOFMode
	{
		EDOFMode__Default = 0,
		EDOFMode__SixDOF = 1,
		EDOFMode__YZPlane = 2,
		EDOFMode__XZPlane = 3,
		EDOFMode__XYPlane = 4,
		EDOFMode__CustomPlane = 5,
		EDOFMode__None = 6,
	};


	// Enum /Script/Engine.ERendererStencilMask
	enum ERendererStencilMask
	{
		ERendererStencilMask__ERSM_Default = 0,
		ERendererStencilMask__ERSM = 1,
		ERendererStencilMask__ERSM = 2,
		ERendererStencilMask__ERSM = 3,
		ERendererStencilMask__ERSM = 4,
		ERendererStencilMask__ERSM = 5,
		ERendererStencilMask__ERSM = 6,
		ERendererStencilMask__ERSM = 7,
		ERendererStencilMask__ERSM = 8,
		ERendererStencilMask__ERSM = 9,
	};


	// Enum /Script/Engine.ERuntimeVirtualTextureMainPassType
	enum ERuntimeVirtualTextureMainPassType
	{
		ERuntimeVirtualTextureMainPassType__Never = 0,
		ERuntimeVirtualTextureMainPassType__Exclusive = 1,
		ERuntimeVirtualTextureMainPassType__Always = 2,
	};


	// Enum /Script/Engine.ERayTracingGroupCullingPriority
	enum ERayTracingGroupCullingPriority
	{
		ERayTracingGroupCullingPriority__CP_0_NEVER_CULL = 0,
		ERayTracingGroupCullingPriority__CP = 1,
		ERayTracingGroupCullingPriority__CP = 2,
		ERayTracingGroupCullingPriority__CP = 3,
		ERayTracingGroupCullingPriority__CP_4_DEFAULT = 4,
		ERayTracingGroupCullingPriority__CP = 5,
		ERayTracingGroupCullingPriority__CP = 6,
		ERayTracingGroupCullingPriority__CP = 7,
		ERayTracingGroupCullingPriority__CP_8_QUICKLY_CULL = 8,
	};


	// Enum /Script/Engine.ECanBeCharacterBase
	enum ECanBeCharacterBase
	{
		ECB_No = 0,
		ECB_Yes = 1,
		ECB_Owner = 2,
	};


	// Enum /Script/Engine.EHasCustomNavigableGeometry
	enum EHasCustomNavigableGeometry
	{
		EHasCustomNavigableGeometry__No = 0,
		EHasCustomNavigableGeometry__Yes = 1,
		EHasCustomNavigableGeometry__EvenIfNotCollidable = 2,
		EHasCustomNavigableGeometry__DontExport = 3,
	};


	// Enum /Script/Engine.EShadowCacheInvalidationBehavior
	enum EShadowCacheInvalidationBehavior
	{
		EShadowCacheInvalidationBehavior__Auto = 0,
		EShadowCacheInvalidationBehavior__Always = 1,
		EShadowCacheInvalidationBehavior__Rigid = 2,
		EShadowCacheInvalidationBehavior__Static = 3,
	};


	// Enum /Script/Engine.EHLODBatchingPolicy
	enum EHLODBatchingPolicy
	{
		EHLODBatchingPolicy__None = 0,
		EHLODBatchingPolicy__MeshSection = 1,
		EHLODBatchingPolicy__Instancing = 2,
	};


	// Enum /Script/Engine.ELightmapType
	enum ELightmapType
	{
		ELightmapType__Default = 0,
		ELightmapType__ForceSurface = 1,
		ELightmapType__ForceVolumetric = 2,
	};


	// Enum /Script/Engine.EIndirectLightingCacheQuality
	enum EIndirectLightingCacheQuality
	{
		ILCQ_Off = 0,
		ILCQ_Point = 1,
		ILCQ_Volume = 2,
	};


	// Enum /Script/Engine.ESceneDepthPriorityGroup
	enum ESceneDepthPriorityGroup
	{
		SDPG_World = 0,
		SDPG_Foreground = 1,
	};


	// Enum /Script/Engine.EMouseLockMode
	enum EMouseLockMode
	{
		EMouseLockMode__DoNotLock = 0,
		EMouseLockMode__LockOnCapture = 1,
		EMouseLockMode__LockAlways = 2,
		EMouseLockMode__LockInFullscreen = 3,
	};


	// Enum /Script/Engine.EWindowTitleBarMode
	enum EWindowTitleBarMode
	{
		EWindowTitleBarMode__Overlay = 0,
		EWindowTitleBarMode__VerticalBox = 1,
	};


	// Enum /Script/Engine.AnimationKeyFormat
	enum AnimationKeyFormat
	{
		AKF_ConstantKeyLerp = 0,
		AKF_VariableKeyLerp = 1,
		AKF_PerTrackCompression = 2,
	};


	// Enum /Script/Engine.EAnimCurveType
	enum EAnimCurveType
	{
		EAnimCurveType__AttributeCurve = 0,
		EAnimCurveType__MaterialCurve = 1,
		EAnimCurveType__MorphTargetCurve = 2,
		EAnimCurveType__MaxAnimCurveType = 3,
	};


	// Enum /Script/Engine.EAnimAssetCurveFlags
	enum EAnimAssetCurveFlags
	{
		AACF_NONE = 0,
		AACF_DriveMorphTarget_DEPRECATED = 1,
		AACF_DriveAttribute_DEPRECATED = 2,
		AACF_Editable = 4,
		AACF_DriveMaterial_DEPRECATED = 8,
		AACF_Metadata = 10,
		AACF_DriveTrack = 20,
		AACF_Disabled = 40,
	};


	// Enum /Script/Engine.ERawCurveTrackTypes
	enum ERawCurveTrackTypes
	{
		ERawCurveTrackTypes__RCT_Float = 0,
		ERawCurveTrackTypes__RCT_Vector = 1,
		ERawCurveTrackTypes__RCT_Transform = 2,
	};


	// Enum /Script/Engine.ERootMotionRootLock
	enum ERootMotionRootLock
	{
		ERootMotionRootLock__RefPose = 0,
		ERootMotionRootLock__AnimFirstFrame = 1,
		ERootMotionRootLock__Zero = 2,
	};


	// Enum /Script/Engine.ERootMotionMode
	enum ERootMotionMode
	{
		ERootMotionMode__NoRootMotionExtraction = 0,
		ERootMotionMode__IgnoreRootMotion = 1,
		ERootMotionMode__RootMotionFromEverything = 2,
		ERootMotionMode__RootMotionFromMontagesOnly = 3,
	};


	// Enum /Script/Engine.EAdditiveBasePoseType
	enum EAdditiveBasePoseType
	{
		ABPT_None = 0,
		ABPT_RefPose = 1,
		ABPT_AnimScaled = 2,
		ABPT_AnimFrame = 3,
		ABPT_LocalAnimFrame = 4,
	};


	// Enum /Script/Engine.AnimationCompressionFormat
	enum AnimationCompressionFormat
	{
		ACF_None = 0,
		ACF_Float96NoW = 1,
		ACF_Fixed48NoW = 2,
		ACF_IntervalFixed32NoW = 3,
		ACF_Fixed32NoW = 4,
		ACF_Float32NoW = 5,
		ACF_Identity = 6,
	};


	// Enum /Script/Engine.EAnimInstanceLocatorFragmentType
	enum EAnimInstanceLocatorFragmentType
	{
		EAnimInstanceLocatorFragmentType__AnimInstance = 0,
		EAnimInstanceLocatorFragmentType__PostProcessAnimInstance = 1,
	};


	// Enum /Script/Engine.AnimPhysTwistAxis
	enum AnimPhysTwistAxis
	{
		AnimPhysTwistAxis__AxisX = 0,
		AnimPhysTwistAxis__AxisY = 1,
		AnimPhysTwistAxis__AxisZ = 2,
	};


	// Enum /Script/Engine.AnimPhysCollisionType
	enum AnimPhysCollisionType
	{
		AnimPhysCollisionType__CoM = 0,
		AnimPhysCollisionType__CustomSphere = 1,
		AnimPhysCollisionType__InnerSphere = 2,
		AnimPhysCollisionType__OuterSphere = 3,
	};


	// Enum /Script/Engine.ETypeAdvanceAnim
	enum ETypeAdvanceAnim
	{
		ETAA_Default = 0,
		ETAA_Finished = 1,
		ETAA_Looped = 2,
	};


	// Enum /Script/Engine.EBoneAxis
	enum EBoneAxis
	{
		BA_X = 0,
		BA_Y = 1,
		BA_Z = 2,
	};


	// Enum /Script/Engine.EBoneControlSpace
	enum EBoneControlSpace
	{
		BCS_WorldSpace = 0,
		BCS_ComponentSpace = 1,
		BCS_ParentBoneSpace = 2,
		BCS_BoneSpace = 3,
	};


	// Enum /Script/Engine.EBoneRotationSource
	enum EBoneRotationSource
	{
		BRS_KeepComponentSpaceRotation = 0,
		BRS_KeepLocalSpaceRotation = 1,
		BRS_CopyFromTarget = 2,
	};


	// Enum /Script/Engine.EMontageNotifyTickType
	enum EMontageNotifyTickType
	{
		EMontageNotifyTickType__Queued = 0,
		EMontageNotifyTickType__BranchingPoint = 1,
	};


	// Enum /Script/Engine.ENotifyFilterType
	enum ENotifyFilterType
	{
		ENotifyFilterType__NoFiltering = 0,
		ENotifyFilterType__LOD = 1,
	};


	// Enum /Script/Engine.EAdditiveAnimationType
	enum EAdditiveAnimationType
	{
		AAT_None = 0,
		AAT_LocalSpaceBase = 1,
		AAT_RotationOffsetMeshSpace = 2,
	};


	// Enum /Script/Engine.ECurveBlendOption
	enum ECurveBlendOption
	{
		ECurveBlendOption__Override = 0,
		ECurveBlendOption__DoNotOverride = 1,
		ECurveBlendOption__NormalizeByWeight = 2,
		ECurveBlendOption__BlendByWeight = 3,
		ECurveBlendOption__UseBasePose = 4,
		ECurveBlendOption__UseMaxValue = 5,
		ECurveBlendOption__UseMinValue = 6,
	};


	// Enum /Script/Engine.EAnimInterpolationType
	enum EAnimInterpolationType
	{
		EAnimInterpolationType__Linear = 0,
		EAnimInterpolationType__Step = 1,
	};


	// Enum /Script/Engine.EAxisOption
	enum EAxisOption
	{
		EAxisOption__X = 0,
		EAxisOption__Y = 1,
		EAxisOption__Z = 2,
		EAxisOption__X_Neg = 3,
		EAxisOption__Y_Neg = 4,
		EAxisOption__Z_Neg = 5,
		EAxisOption__Custom = 6,
	};


	// Enum /Script/Engine.EComponentType
	enum EComponentType
	{
		EComponentType__None = 0,
		EComponentType__TranslationX = 1,
		EComponentType__TranslationY = 2,
		EComponentType__TranslationZ = 3,
		EComponentType__RotationX = 4,
		EComponentType__RotationY = 5,
		EComponentType__RotationZ = 6,
		EComponentType__Scale = 7,
		EComponentType__ScaleX = 8,
		EComponentType__ScaleY = 9,
		EComponentType__ScaleZ = A,
	};


	// Enum /Script/Engine.EAudioOutputTarget
	enum EAudioOutputTarget
	{
		EAudioOutputTarget__Speaker = 0,
		EAudioOutputTarget__Controller = 1,
		EAudioOutputTarget__ControllerFallbackToSpeaker = 2,
	};


	// Enum /Script/Engine.EBlendableLocation
	enum EBlendableLocation
	{
		BL_SceneColorBeforeDOF = 2,
		BL_SceneColorAfterDOF = 1,
		BL_TranslucencyAfterDOF = 5,
		BL_SSRInput = 4,
		BL_SceneColorBeforeBloom = 6,
		BL_ReplacingTonemapper = 3,
		BL_SceneColorAfterTonemapping = 0,
		BL_BeforeTranslucency = 2,
		BL_BeforeTonemapping = 1,
		BL_AfterTonemapping = 0,
	};


	// Enum /Script/Engine.EBlendSpaceAxis
	enum EBlendSpaceAxis
	{
		BSA_None = 0,
		BSA_X = 1,
		BSA_Y = 2,
	};


	// Enum /Script/Engine.EPreferredTriangulationDirection
	enum EPreferredTriangulationDirection
	{
		EPreferredTriangulationDirection__None = 0,
		EPreferredTriangulationDirection__Tangential = 1,
		EPreferredTriangulationDirection__Radial = 2,
	};


	// Enum /Script/Engine.EBlendSpacePerBoneBlendMode
	enum EBlendSpacePerBoneBlendMode
	{
		EBlendSpacePerBoneBlendMode__ManualPerBoneOverride = 0,
		EBlendSpacePerBoneBlendMode__BlendProfile = 1,
	};


	// Enum /Script/Engine.ENotifyTriggerMode
	enum ENotifyTriggerMode
	{
		ENotifyTriggerMode__AllAnimations = 0,
		ENotifyTriggerMode__HighestWeightedAnimation = 1,
		ENotifyTriggerMode__None = 2,
	};


	// Enum /Script/Engine.EBlueprintStatus
	enum EBlueprintStatus
	{
		BS_Unknown = 0,
		BS_Dirty = 1,
		BS_Error = 2,
		BS_UpToDate = 3,
		BS_BeingCreated = 4,
		BS_UpToDateWithWarnings = 5,
	};


	// Enum /Script/Engine.EBlueprintType
	enum EBlueprintType
	{
		BPTYPE_Normal = 0,
		BPTYPE_Const = 1,
		BPTYPE_MacroLibrary = 2,
		BPTYPE_Interface = 3,
		BPTYPE_LevelScript = 4,
		BPTYPE_FunctionLibrary = 5,
	};


	// Enum /Script/Engine.EBlueprintCompileMode
	enum EBlueprintCompileMode
	{
		EBlueprintCompileMode__Default = 0,
		EBlueprintCompileMode__Development = 1,
		EBlueprintCompileMode__FinalRelease = 2,
	};


	// Enum /Script/Engine.EBlueprintNativizationFlag
	enum EBlueprintNativizationFlag
	{
		EBlueprintNativizationFlag__Disabled = 0,
		EBlueprintNativizationFlag__Dependency = 1,
		EBlueprintNativizationFlag__ExplicitlyEnabled = 2,
	};


	// Enum /Script/Engine.EShouldCookBlueprintPropertyGuids
	enum EShouldCookBlueprintPropertyGuids
	{
		EShouldCookBlueprintPropertyGuids__No = 0,
		EShouldCookBlueprintPropertyGuids__Yes = 1,
		EShouldCookBlueprintPropertyGuids__Inherit = 2,
	};


	// Enum /Script/Engine.ECsgOper
	enum ECsgOper
	{
		CSG_Active = 0,
		CSG_Add = 1,
		CSG_Subtract = 2,
		CSG_Intersect = 3,
		CSG_Deintersect = 4,
		CSG_None = 5,
	};


	// Enum /Script/Engine.EBrushType
	enum EBrushType
	{
		Brush_Default = 0,
		Brush_Add = 1,
		Brush_Subtract = 2,
	};


	// Enum /Script/Engine.ECameraProjectionMode
	enum ECameraProjectionMode
	{
		ECameraProjectionMode__Perspective = 0,
		ECameraProjectionMode__Orthographic = 1,
	};


	// Enum /Script/Engine.ECameraShakePlaySpace
	enum ECameraShakePlaySpace
	{
		ECameraShakePlaySpace__CameraLocal = 0,
		ECameraShakePlaySpace__World = 1,
		ECameraShakePlaySpace__UserDefined = 2,
	};


	// Enum /Script/Engine.ECloudStorageDelegate
	enum ECloudStorageDelegate
	{
		CSD_KeyValueReadComplete = 0,
		CSD_KeyValueWriteComplete = 1,
		CSD_ValueChanged = 2,
		CSD_DocumentQueryComplete = 3,
		CSD_DocumentReadComplete = 4,
		CSD_DocumentWriteComplete = 5,
		CSD_DocumentConflictDetected = 6,
	};


	// Enum /Script/Engine.EContentBundleClientState
	enum EContentBundleClientState
	{
		EContentBundleClientState__Unregistered = 0,
		EContentBundleClientState__Registered = 1,
		EContentBundleClientState__ContentInjectionRequested = 2,
		EContentBundleClientState__ContentRemovalRequested = 3,
		EContentBundleClientState__RegistrationFailed = 4,
	};


	// Enum /Script/Engine.EWorldContentState
	enum EWorldContentState
	{
		EWorldContentState__NoContent = 0,
		EWorldContentState__ContentBundleInjected = 1,
	};


	// Enum /Script/Engine.EContentBundleStatus
	enum EContentBundleStatus
	{
		EContentBundleStatus__Registered = 0,
		EContentBundleStatus__ReadyToInject = 1,
		EContentBundleStatus__FailedToInject = 2,
		EContentBundleStatus__ContentInjected = 3,
		EContentBundleStatus__Unknown = FFFFFFFF,
	};


	// Enum /Script/Engine.ECustomAttributeBlendType
	enum ECustomAttributeBlendType
	{
		ECustomAttributeBlendType__Override = 0,
		ECustomAttributeBlendType__Blend = 1,
	};


	// Enum /Script/Engine.EDataLayerType
	enum EDataLayerType
	{
		EDataLayerType__Runtime = 0,
		EDataLayerType__Editor = 1,
		EDataLayerType__Unknown = 2,
		EDataLayerType__Size = 3,
	};


	// Enum /Script/Engine.DistributionParamMode
	enum DistributionParamMode
	{
		DPM_Normal = 0,
		DPM_Abs = 1,
		DPM_Direct = 2,
	};


	// Enum /Script/Engine.EDistributionVectorLockFlags
	enum EDistributionVectorLockFlags
	{
		EDVLF_None = 0,
		EDVLF_XY = 1,
		EDVLF_XZ = 2,
		EDVLF_YZ = 3,
		EDVLF_XYZ = 4,
	};


	// Enum /Script/Engine.EDistributionVectorMirrorFlags
	enum EDistributionVectorMirrorFlags
	{
		EDVMF_Same = 0,
		EDVMF_Different = 1,
		EDVMF_Mirror = 2,
	};


	// Enum /Script/Engine.EEdGraphPinDirection
	enum EEdGraphPinDirection
	{
		EGPD_Input = 0,
		EGPD_Output = 1,
	};


	// Enum /Script/Engine.EPinContainerType
	enum EPinContainerType
	{
		EPinContainerType__None = 0,
		EPinContainerType__Array = 1,
		EPinContainerType__Set = 2,
		EPinContainerType__Map = 3,
	};


	// Enum /Script/Engine.ENodeTitleType
	enum ENodeTitleType
	{
		ENodeTitleType__FullTitle = 0,
		ENodeTitleType__ListView = 1,
		ENodeTitleType__EditableTitle = 2,
		ENodeTitleType__MenuTitle = 3,
		ENodeTitleType__MAX_TitleTypes = 4,
	};


	// Enum /Script/Engine.ENodeAdvancedPins
	enum ENodeAdvancedPins
	{
		ENodeAdvancedPins__NoPins = 0,
		ENodeAdvancedPins__Shown = 1,
		ENodeAdvancedPins__Hidden = 2,
	};


	// Enum /Script/Engine.ENodeEnabledState
	enum ENodeEnabledState
	{
		ENodeEnabledState__Enabled = 0,
		ENodeEnabledState__Disabled = 1,
		ENodeEnabledState__DevelopmentOnly = 2,
	};


	// Enum /Script/Engine.EBlueprintPinStyleType
	enum EBlueprintPinStyleType
	{
		BPST_Original = 0,
		BPST_VariantA = 1,
	};


	// Enum /Script/Engine.EGraphType
	enum EGraphType
	{
		GT_Function = 0,
		GT_Ubergraph = 1,
		GT_Macro = 2,
		GT_Animation = 3,
		GT_StateMachine = 4,
	};


	// Enum /Script/Engine.ECanCreateConnectionResponse
	enum ECanCreateConnectionResponse
	{
		CONNECT_RESPONSE_MAKE = 0,
		CONNECT_RESPONSE_DISALLOW = 1,
		CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
		CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
		CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
		CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
		CONNECT_RESPONSE_MAKE_WITH_PROMOTION = 6,
	};


	// Enum /Script/Engine.EFullyLoadPackageType
	enum EFullyLoadPackageType
	{
		FULLYLOAD_Map = 0,
		FULLYLOAD_Game_PreLoadClass = 1,
		FULLYLOAD_Game_PostLoadClass = 2,
		FULLYLOAD_Always = 3,
		FULLYLOAD_Mutator = 4,
	};


	// Enum /Script/Engine.ETransitionType
	enum ETransitionType
	{
		ETransitionType__None = 0,
		ETransitionType__Paused = 1,
		ETransitionType__Loading = 2,
		ETransitionType__Saving = 3,
		ETransitionType__Connecting = 4,
		ETransitionType__Precaching = 5,
		ETransitionType__WaitingToConnect = 6,
	};


	// Enum /Script/Engine.EInputEvent
	enum EInputEvent
	{
		IE_Pressed = 0,
		IE_Released = 1,
		IE_Repeat = 2,
		IE_DoubleClick = 3,
		IE_Axis = 4,
	};


	// Enum /Script/Engine.EMouseCaptureMode
	enum EMouseCaptureMode
	{
		EMouseCaptureMode__NoCapture = 0,
		EMouseCaptureMode__CapturePermanently = 1,
		EMouseCaptureMode__CapturePermanently_IncludingInitialMouseDown = 2,
		EMouseCaptureMode__CaptureDuringMouseDown = 3,
		EMouseCaptureMode__CaptureDuringRightMouseDown = 4,
	};


	// Enum /Script/Engine.ENetworkLagState
	enum ENetworkLagState
	{
		ENetworkLagState__NotLagging = 0,
		ENetworkLagState__Lagging = 1,
	};


	// Enum /Script/Engine.ETravelType
	enum ETravelType
	{
		TRAVEL_Absolute = 0,
		TRAVEL_Partial = 1,
		TRAVEL_Relative = 2,
	};


	// Enum /Script/Engine.EDemoPlayFailure
	enum EDemoPlayFailure
	{
		EDemoPlayFailure__Generic = 0,
		EDemoPlayFailure__DemoNotFound = 1,
		EDemoPlayFailure__Corrupt = 2,
		EDemoPlayFailure__InvalidVersion = 3,
		EDemoPlayFailure__InitBase = 4,
		EDemoPlayFailure__GameSpecificHeader = 5,
		EDemoPlayFailure__ReplayStreamerInternal = 6,
		EDemoPlayFailure__LoadMap = 7,
		EDemoPlayFailure__Serialization = 8,
	};


	// Enum /Script/Engine.EViewModeIndex
	enum EViewModeIndex
	{
		VMI_BrushWireframe = 0,
		VMI_Wireframe = 1,
		VMI_Unlit = 2,
		VMI_Lit = 3,
		VMI_Lit_DetailLighting = 4,
		VMI_LightingOnly = 5,
		VMI_LightComplexity = 6,
		VMI_ShaderComplexity = 8,
		VMI_LightmapDensity = 9,
		VMI_LitLightmapDensity = A,
		VMI_ReflectionOverride = B,
		VMI_VisualizeBuffer = C,
		VMI_StationaryLightOverlap = E,
		VMI_CollisionPawn = F,
		VMI_CollisionVisibility = 10,
		VMI_LODColoration = 12,
		VMI_QuadOverdraw = 13,
		VMI_PrimitiveDistanceAccuracy = 14,
		VMI_MeshUVDensityAccuracy = 15,
		VMI_ShaderComplexityWithQuadOverdraw = 16,
		VMI_HLODColoration = 17,
		VMI_GroupLODColoration = 18,
		VMI_MaterialTextureScaleAccuracy = 19,
		VMI_RequiredTextureResolution = 1A,
		VMI_PathTracing = 1B,
		VMI_RayTracingDebug = 1C,
		VMI_VisualizeNanite = 1D,
		VMI_VirtualTexturePendingMips = 1E,
		VMI_VisualizeLumen = 1F,
		VMI_VisualizeVirtualShadowMap = 20,
		VMI_VisualizeGPUSkinCache = 21,
		VMI_VisualizeSubstrate = 22,
		VMI_VisualizeGroom = 23,
		VMI_LWCComplexity = 24,
		VMI_Lit_Wireframe = 25,
		VMI_Max = 26,
		VMI_Unknown = FF,
	};


	// Enum /Script/Engine.EAspectRatioAxisConstraint
	enum EAspectRatioAxisConstraint
	{
		AspectRatio_MaintainYFOV = 0,
		AspectRatio_MaintainXFOV = 1,
		AspectRatio_MajorAxisFOV = 2,
	};


	// Enum /Script/Engine.EOcclusionCombineMode
	enum EOcclusionCombineMode
	{
		OCM_Minimum = 0,
		OCM_Multiply = 1,
	};


	// Enum /Script/Engine.EBlendMode
	enum EBlendMode
	{
		BLEND_Opaque = 0,
		BLEND_Masked = 1,
		BLEND_Translucent = 2,
		BLEND_Additive = 3,
		BLEND_Modulate = 4,
		BLEND_AlphaComposite = 5,
		BLEND_AlphaHoldout = 6,
		BLEND_TranslucentColoredTransmittance = 7,
		BLEND_TranslucentGreyTransmittance = 2,
		BLEND_ColoredTransmittanceOnly = 4,
	};


	// Enum /Script/Engine.EMaterialFloatPrecisionMode
	enum EMaterialFloatPrecisionMode
	{
		MFPM_Default = 0,
		MFPM_Full_MaterialExpressionOnly = 1,
		MFPM_Full = 2,
		MFPM_Half = 3,
	};


	// Enum /Script/Engine.ESamplerSourceMode
	enum ESamplerSourceMode
	{
		SSM_FromTextureAsset = 0,
		SSM_Wrap_WorldGroupSettings = 1,
		SSM_Clamp_WorldGroupSettings = 2,
		SSM_TerrainWeightmapGroupSettings = 3,
	};


	// Enum /Script/Engine.ETextureMipValueMode
	enum ETextureMipValueMode
	{
		TMVM_None = 0,
		TMVM_MipLevel = 1,
		TMVM_MipBias = 2,
		TMVM_Derivative = 3,
	};


	// Enum /Script/Engine.ETranslucencyLightingMode
	enum ETranslucencyLightingMode
	{
		TLM_VolumetricNonDirectional = 0,
		TLM_VolumetricDirectional = 1,
		TLM_VolumetricPerVertexNonDirectional = 2,
		TLM_VolumetricPerVertexDirectional = 3,
		TLM_Surface = 4,
		TLM_SurfacePerPixelLighting = 5,
	};


	// Enum /Script/Engine.ERefractionMode
	enum ERefractionMode
	{
		RM_IndexOfRefraction = 0,
		RM_PixelNormalOffset = 1,
		RM_2DOffset = 2,
		RM_None = 3,
	};


	// Enum /Script/Engine.ERefractionCoverageMode
	enum ERefractionCoverageMode
	{
		RCM_CoverageIgnored = 0,
		RCM_CoverageAccountedFor = 1,
	};


	// Enum /Script/Engine.EPixelDepthOffsetMode
	enum EPixelDepthOffsetMode
	{
		PDOM_Legacy = 0,
		PDOM_AlongCameraVector = 1,
	};


	// Enum /Script/Engine.ETranslucentSortPolicy
	enum ETranslucentSortPolicy
	{
		ETranslucentSortPolicy__SortByDistance = 0,
		ETranslucentSortPolicy__SortByProjectedZ = 1,
		ETranslucentSortPolicy__SortAlongAxis = 2,
	};


	// Enum /Script/Engine.EDynamicGlobalIlluminationMethod
	enum EDynamicGlobalIlluminationMethod
	{
		EDynamicGlobalIlluminationMethod__None = 0,
		EDynamicGlobalIlluminationMethod__Lumen = 1,
		EDynamicGlobalIlluminationMethod__ScreenSpace = 2,
		EDynamicGlobalIlluminationMethod__Plugin = 3,
	};


	// Enum /Script/Engine.EReflectionMethod
	enum EReflectionMethod
	{
		EReflectionMethod__None = 0,
		EReflectionMethod__Lumen = 1,
		EReflectionMethod__ScreenSpace = 2,
	};


	// Enum /Script/Engine.EShadowMapMethod
	enum EShadowMapMethod
	{
		EShadowMapMethod__ShadowMaps = 0,
		EShadowMapMethod__VirtualShadowMaps = 1,
	};


	// Enum /Script/Engine.ECastRayTracedShadow
	enum ECastRayTracedShadow
	{
		ECastRayTracedShadow__Disabled = 0,
		ECastRayTracedShadow__UseProjectSetting = 1,
		ECastRayTracedShadow__Enabled = 2,
	};


	// Enum /Script/Engine.ESceneCaptureSource
	enum ESceneCaptureSource
	{
		SCS_SceneColorHDR = 0,
		SCS_SceneColorHDRNoAlpha = 1,
		SCS_FinalColorLDR = 2,
		SCS_SceneColorSceneDepth = 3,
		SCS_SceneDepth = 4,
		SCS_DeviceDepth = 5,
		SCS_Normal = 6,
		SCS_BaseColor = 7,
		SCS_FinalColorHDR = 8,
		SCS_FinalToneCurveHDR = 9,
	};


	// Enum /Script/Engine.ESceneCaptureCompositeMode
	enum ESceneCaptureCompositeMode
	{
		SCCM_Overwrite = 0,
		SCCM_Additive = 1,
		SCCM_Composite = 2,
	};


	// Enum /Script/Engine.EGBufferFormat
	enum EGBufferFormat
	{
		EGBufferFormat__Force8BitsPerChannel = 0,
		EGBufferFormat__Default = 1,
		EGBufferFormat__HighPrecisionNormals = 3,
		EGBufferFormat__Force16BitsPerChannel = 5,
	};


	// Enum /Script/Engine.EMobileLocalLightSetting
	enum EMobileLocalLightSetting
	{
		LOCAL_LIGHTS_DISABLED = 0,
		LOCAL_LIGHTS_ENABLED = 1,
		LOCAL_LIGHTS_BUFFER = 2,
	};


	// Enum /Script/Engine.ETrailWidthMode
	enum ETrailWidthMode
	{
		ETrailWidthMode_FromCentre = 0,
		ETrailWidthMode_FromFirst = 1,
		ETrailWidthMode_FromSecond = 2,
	};


	// Enum /Script/Engine.EParticleCollisionMode
	enum EParticleCollisionMode
	{
		EParticleCollisionMode__SceneDepth = 0,
		EParticleCollisionMode__DistanceField = 1,
	};


	// Enum /Script/Engine.EMaterialShadingModel
	enum EMaterialShadingModel
	{
		MSM_Unlit = 0,
		MSM_DefaultLit = 1,
		MSM_Subsurface = 2,
		MSM_PreintegratedSkin = 3,
		MSM_ClearCoat = 4,
		MSM_SubsurfaceProfile = 5,
		MSM_TwoSidedFoliage = 6,
		MSM_Hair = 7,
		MSM_Cloth = 8,
		MSM_Eye = 9,
		MSM_SingleLayerWater = A,
		MSM_ThinTranslucent = B,
		MSM_Strata = C,
		MSM_NUM = D,
		MSM_FromMaterialExpression = E,
	};


	// Enum /Script/Engine.EMaterialSamplerType
	enum EMaterialSamplerType
	{
		SAMPLERTYPE_Color = 0,
		SAMPLERTYPE_Grayscale = 1,
		SAMPLERTYPE_Alpha = 2,
		SAMPLERTYPE_Normal = 3,
		SAMPLERTYPE_Masks = 4,
		SAMPLERTYPE_DistanceFieldFont = 5,
		SAMPLERTYPE_LinearColor = 6,
		SAMPLERTYPE_LinearGrayscale = 7,
		SAMPLERTYPE_Data = 8,
		SAMPLERTYPE_External = 9,
		SAMPLERTYPE_VirtualColor = A,
		SAMPLERTYPE_VirtualGrayscale = B,
		SAMPLERTYPE_VirtualAlpha = C,
		SAMPLERTYPE_VirtualNormal = D,
		SAMPLERTYPE_VirtualMasks = E,
		SAMPLERTYPE_VirtualLinearColor = F,
		SAMPLERTYPE_VirtualLinearGrayscale = 10,
	};


	// Enum /Script/Engine.EMaterialStencilCompare
	enum EMaterialStencilCompare
	{
		MSC_Less = 0,
		MSC_LessEqual = 1,
		MSC_Greater = 2,
		MSC_GreaterEqual = 3,
		MSC_Equal = 4,
		MSC_NotEqual = 5,
		MSC_Never = 6,
		MSC_Always = 7,
		MSC_Count = 8,
	};


	// Enum /Script/Engine.EMaterialShadingRate
	enum EMaterialShadingRate
	{
		MSR_1x1 = 0,
		MSR_2x1 = 1,
		MSR_1x2 = 2,
		MSR_2x2 = 3,
		MSR_4x2 = 4,
		MSR_2x4 = 5,
		MSR_4x4 = 6,
		MSR_Count = 7,
	};


	// Enum /Script/Engine.ELightingBuildQuality
	enum ELightingBuildQuality
	{
		Quality_Preview = 0,
		Quality_Medium = 1,
		Quality_High = 2,
		Quality_Production = 3,
	};


	// Enum /Script/Engine.ENetworkSmoothingMode
	enum ENetworkSmoothingMode
	{
		ENetworkSmoothingMode__Disabled = 0,
		ENetworkSmoothingMode__Linear = 1,
		ENetworkSmoothingMode__Exponential = 2,
	};


	// Enum /Script/Engine.EOverlapFilterOption
	enum EOverlapFilterOption
	{
		OverlapFilter_All = 0,
		OverlapFilter_DynamicOnly = 1,
		OverlapFilter_StaticOnly = 2,
	};


	// Enum /Script/Engine.EFilterInterpolationType
	enum EFilterInterpolationType
	{
		BSIT_Average = 0,
		BSIT_Linear = 1,
		BSIT_Cubic = 2,
		BSIT_EaseInOut = 3,
		BSIT_ExponentialDecay = 4,
		BSIT_SpringDamper = 5,
	};


	// Enum /Script/Engine.ETimelineSigType
	enum ETimelineSigType
	{
		ETS_EventSignature = 0,
		ETS_FloatSignature = 1,
		ETS_VectorSignature = 2,
		ETS_LinearColorSignature = 3,
		ETS_InvalidSignature = 4,
	};


	// Enum /Script/Engine.ELightMapPaddingType
	enum ELightMapPaddingType
	{
		LMPT_NormalPadding = 0,
		LMPT_PrePadding = 1,
		LMPT_NoPadding = 2,
	};


	// Enum /Script/Engine.EShadowMapFlags
	enum EShadowMapFlags
	{
		SMF_None = 0,
		SMF_Streamed = 1,
	};


	// Enum /Script/Engine.EUpdateRateShiftBucket
	enum EUpdateRateShiftBucket
	{
		EUpdateRateShiftBucket__ShiftBucket0 = 0,
		EUpdateRateShiftBucket__ShiftBucket1 = 1,
		EUpdateRateShiftBucket__ShiftBucket2 = 2,
		EUpdateRateShiftBucket__ShiftBucket3 = 3,
		EUpdateRateShiftBucket__ShiftBucket4 = 4,
		EUpdateRateShiftBucket__ShiftBucket5 = 5,
		EUpdateRateShiftBucket__ShiftBucketMax = 6,
	};


	// Enum /Script/Engine.ENaniteFallbackTarget
	enum ENaniteFallbackTarget
	{
		ENaniteFallbackTarget__Auto = 0,
		ENaniteFallbackTarget__PercentTriangles = 1,
		ENaniteFallbackTarget__RelativeError = 2,
	};


	// Enum /Script/Engine.ENetRole
	enum ENetRole
	{
		ROLE_None = 0,
		ROLE_SimulatedProxy = 1,
		ROLE_AutonomousProxy = 2,
		ROLE_Authority = 3,
	};


	// Enum /Script/Engine.ENetDormancy
	enum ENetDormancy
	{
		DORM_Never = 0,
		DORM_Awake = 1,
		DORM_DormantAll = 2,
		DORM_DormantPartial = 3,
		DORM_Initial = 4,
	};


	// Enum /Script/Engine.EPhysicsReplicationMode
	enum EPhysicsReplicationMode
	{
		EPhysicsReplicationMode__Default = 0,
		EPhysicsReplicationMode__PredictiveInterpolation = 1,
		EPhysicsReplicationMode__Resimulation = 2,
	};


	// Enum /Script/Engine.EAutoReceiveInput
	enum EAutoReceiveInput
	{
		EAutoReceiveInput__Disabled = 0,
		EAutoReceiveInput__Player0 = 1,
		EAutoReceiveInput__Player1 = 2,
		EAutoReceiveInput__Player2 = 3,
		EAutoReceiveInput__Player3 = 4,
		EAutoReceiveInput__Player4 = 5,
		EAutoReceiveInput__Player5 = 6,
		EAutoReceiveInput__Player6 = 7,
		EAutoReceiveInput__Player7 = 8,
	};


	// Enum /Script/Engine.EAutoPossessAI
	enum EAutoPossessAI
	{
		EAutoPossessAI__Disabled = 0,
		EAutoPossessAI__PlacedInWorld = 1,
		EAutoPossessAI__Spawned = 2,
		EAutoPossessAI__PlacedInWorldOrSpawned = 3,
	};


	// Enum /Script/Engine.EPhysicalMaterialMaskColor
	enum EPhysicalMaterialMaskColor
	{
		EPhysicalMaterialMaskColor__Red = 0,
		EPhysicalMaterialMaskColor__Green = 1,
		EPhysicalMaterialMaskColor__Blue = 2,
		EPhysicalMaterialMaskColor__Cyan = 3,
		EPhysicalMaterialMaskColor__Magenta = 4,
		EPhysicalMaterialMaskColor__Yellow = 5,
		EPhysicalMaterialMaskColor__White = 6,
		EPhysicalMaterialMaskColor__Black = 7,
	};


	// Enum /Script/Engine.EComponentSocketType
	enum EComponentSocketType
	{
		EComponentSocketType__Invalid = 0,
		EComponentSocketType__Bone = 1,
		EComponentSocketType__Socket = 2,
	};


	// Enum /Script/Engine.ESpawnActorCollisionHandlingMethod
	enum ESpawnActorCollisionHandlingMethod
	{
		ESpawnActorCollisionHandlingMethod__Undefined = 0,
		ESpawnActorCollisionHandlingMethod__AlwaysSpawn = 1,
		ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButAlwaysSpawn = 2,
		ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButDontSpawnIfColliding = 3,
		ESpawnActorCollisionHandlingMethod__DontSpawnIfColliding = 4,
	};


	// Enum /Script/Engine.EMeshBufferAccess
	enum EMeshBufferAccess
	{
		EMeshBufferAccess__Default = 0,
		EMeshBufferAccess__ForceCPUAndGPU = 1,
	};


	// Enum /Script/Engine.EFontImportCharacterSet
	enum EFontImportCharacterSet
	{
		FontICS_Default = 0,
		FontICS_Ansi = 1,
		FontICS_Symbol = 2,
	};


	// Enum /Script/Engine.EStandbyType
	enum EStandbyType
	{
		STDBY_Rx = 0,
		STDBY_Tx = 1,
		STDBY_BadPing = 2,
	};


	// Enum /Script/Engine.ESuggestProjVelocityTraceOption
	enum ESuggestProjVelocityTraceOption
	{
		ESuggestProjVelocityTraceOption__DoNotTrace = 0,
		ESuggestProjVelocityTraceOption__TraceFullPath = 1,
		ESuggestProjVelocityTraceOption__OnlyTraceWhileAscending = 2,
	};


	// Enum /Script/Engine.EHISMViewRelevanceType
	enum EHISMViewRelevanceType
	{
		EHISMViewRelevanceType__Grass = 0,
		EHISMViewRelevanceType__Foliage = 1,
		EHISMViewRelevanceType__HISM = 2,
	};


	// Enum /Script/Engine.EHitProxyPriority
	enum EHitProxyPriority
	{
		HPP_World = 0,
		HPP_Wireframe = 1,
		HPP_Foreground = 2,
		HPP_UI = 3,
	};


	// Enum /Script/Engine.EHierarchicalSimplificationMethod
	enum EHierarchicalSimplificationMethod
	{
		EHierarchicalSimplificationMethod__None = 0,
		EHierarchicalSimplificationMethod__Merge = 1,
		EHierarchicalSimplificationMethod__Simplify = 2,
		EHierarchicalSimplificationMethod__Approximate = 3,
	};


	// Enum /Script/Engine.EAdManagerDelegate
	enum EAdManagerDelegate
	{
		AMD_ClickedBanner = 0,
		AMD_UserClosedAd = 1,
	};


	// Enum /Script/Engine.ERoundingMode
	enum ERoundingMode
	{
		HalfToEven = 0,
		HalfFromZero = 1,
		HalfToZero = 2,
		FromZero = 3,
		ToZero = 4,
		ToNegativeInfinity = 5,
		ToPositiveInfinity = 6,
	};


	// Enum /Script/Engine.EViewStatusForScreenPercentage
	enum EViewStatusForScreenPercentage
	{
		EViewStatusForScreenPercentage__NonRealtime = 0,
		EViewStatusForScreenPercentage__Desktop = 1,
		EViewStatusForScreenPercentage__Mobile = 2,
		EViewStatusForScreenPercentage__VR = 3,
		EViewStatusForScreenPercentage__PathTracer = 4,
	};


	// Enum /Script/Engine.EScreenPercentageMode
	enum EScreenPercentageMode
	{
		EScreenPercentageMode__Manual = 0,
		EScreenPercentageMode__BasedOnDisplayResolution = 1,
		EScreenPercentageMode__BasedOnDPIScale = 2,
	};


	// Enum /Script/Engine.ELevelInstanceRuntimeBehavior
	enum ELevelInstanceRuntimeBehavior
	{
		ELevelInstanceRuntimeBehavior__None = 0,
		ELevelInstanceRuntimeBehavior__Embedded_Deprecated = 1,
		ELevelInstanceRuntimeBehavior__Partitioned = 2,
		ELevelInstanceRuntimeBehavior__LevelStreaming = 3,
	};


	// Enum /Script/Engine.ELevelInstanceCreationType
	enum ELevelInstanceCreationType
	{
		ELevelInstanceCreationType__LevelInstance = 0,
		ELevelInstanceCreationType__PackedLevelActor = 1,
	};


	// Enum /Script/Engine.ELevelInstancePivotType
	enum ELevelInstancePivotType
	{
		ELevelInstancePivotType__CenterMinZ = 0,
		ELevelInstancePivotType__Center = 1,
		ELevelInstancePivotType__Actor = 2,
		ELevelInstancePivotType__WorldOrigin = 3,
	};


	// Enum /Script/Engine.EStreamingVolumeUsage
	enum EStreamingVolumeUsage
	{
		SVB_Loading = 0,
		SVB_LoadingAndVisibility = 1,
		SVB_VisibilityBlockingOnLoad = 2,
		SVB_BlockingOnLoad = 3,
		SVB_LoadingNotVisible = 4,
	};


	// Enum /Script/Engine.EMaterialDomain
	enum EMaterialDomain
	{
		MD_Surface = 0,
		MD_DeferredDecal = 1,
		MD_LightFunction = 2,
		MD_Volume = 3,
		MD_PostProcess = 4,
		MD_UI = 5,
		MD_RuntimeVirtualTexture = 6,
	};


	// Enum /Script/Engine.EPositionOrigin
	enum EPositionOrigin
	{
		EPositionOrigin__Absolute = 0,
		EPositionOrigin__CameraRelative = 1,
	};


	// Enum /Script/Engine.ETextureColorChannel
	enum ETextureColorChannel
	{
		TCC_Red = 0,
		TCC_Green = 1,
		TCC_Blue = 2,
		TCC_Alpha = 3,
	};


	// Enum /Script/Engine.EMaterialAttributeBlend
	enum EMaterialAttributeBlend
	{
		EMaterialAttributeBlend__Blend = 0,
		EMaterialAttributeBlend__UseA = 1,
		EMaterialAttributeBlend__UseB = 2,
	};


	// Enum /Script/Engine.EMaterialExpressionBoundsType
	enum EMaterialExpressionBoundsType
	{
		MEILB_InstanceLocal = 0,
		MEILB_ObjectLocal = 1,
		MEILB_PreSkinnedLocal = 2,
	};


	// Enum /Script/Engine.EChannelMaskParameterColor
	enum EChannelMaskParameterColor
	{
		EChannelMaskParameterColor__Red = 0,
		EChannelMaskParameterColor__Green = 1,
		EChannelMaskParameterColor__Blue = 2,
		EChannelMaskParameterColor__Alpha = 3,
	};


	// Enum /Script/Engine.EClampMode
	enum EClampMode
	{
		CMODE_Clamp = 0,
		CMODE_ClampMin = 1,
		CMODE_ClampMax = 2,
	};


	// Enum /Script/Engine.ECustomMaterialOutputType
	enum ECustomMaterialOutputType
	{
		CMOT_Float1 = 0,
		CMOT_Float2 = 1,
		CMOT_Float3 = 2,
		CMOT_Float4 = 3,
		CMOT_MaterialAttributes = 4,
	};


	// Enum /Script/Engine.EDataDrivenShaderPlatformInfoCondition
	enum EDataDrivenShaderPlatformInfoCondition
	{
		COND_True = 0,
		COND_False = 1,
		COND_Max = 2,
	};


	// Enum /Script/Engine.EDBufferTextureId
	enum EDBufferTextureId
	{
		DBT_A = 0,
		DBT_B = 1,
		DBT_C = 2,
	};


	// Enum /Script/Engine.EDepthOfFieldFunctionValue
	enum EDepthOfFieldFunctionValue
	{
		TDOF_NearAndFarMask = 0,
		TDOF_NearMask = 1,
		TDOF_FarMask = 2,
		TDOF_CircleOfConfusionRadius = 3,
	};


	// Enum /Script/Engine.EFunctionInputType
	enum EFunctionInputType
	{
		FunctionInput_Scalar = 0,
		FunctionInput_Vector2 = 1,
		FunctionInput_Vector3 = 2,
		FunctionInput_Vector4 = 3,
		FunctionInput_Texture2D = 4,
		FunctionInput_TextureCube = 5,
		FunctionInput_Texture2DArray = 6,
		FunctionInput_VolumeTexture = 7,
		FunctionInput_StaticBool = 8,
		FunctionInput_MaterialAttributes = 9,
		FunctionInput_TextureExternal = A,
		FunctionInput_Bool = B,
		FunctionInput_Substrate = C,
	};


	// Enum /Script/Engine.EPositionIncludedOffsets
	enum EPositionIncludedOffsets
	{
		EPositionIncludedOffsets__IncludeOffsets = 0,
		EPositionIncludedOffsets__ExcludeOffsets = 1,
	};


	// Enum /Script/Engine.ELocalPositionOrigin
	enum ELocalPositionOrigin
	{
		ELocalPositionOrigin__Instance = 0,
		ELocalPositionOrigin__InstancePreSkinning = 1,
		ELocalPositionOrigin__Primitive = 2,
	};


	// Enum /Script/Engine.ENeuralIndexType
	enum ENeuralIndexType
	{
		NIT_TextureIndex = 0,
		NIT_BufferIndex = 1,
	};


	// Enum /Script/Engine.ENoiseFunction
	enum ENoiseFunction
	{
		NOISEFUNCTION_SimplexTex = 0,
		NOISEFUNCTION_GradientTex = 1,
		NOISEFUNCTION_GradientTex3D = 2,
		NOISEFUNCTION_GradientALU = 3,
		NOISEFUNCTION_ValueALU = 4,
		NOISEFUNCTION_VoronoiALU = 5,
	};


	// Enum /Script/Engine.EPathTracingBufferTextureId
	enum EPathTracingBufferTextureId
	{
		PTBT_Radiance = 0,
		PTBT_DenoisedRadiance = 1,
		PTBT_Albedo = 2,
		PTBT_Normal = 3,
		PTBT_Variance = 4,
	};


	// Enum /Script/Engine.ERuntimeVirtualTextureMipValueMode
	enum ERuntimeVirtualTextureMipValueMode
	{
		RVTMVM_None = 0,
		RVTMVM_MipLevel = 1,
		RVTMVM_MipBias = 2,
		RVTMVM_RecalculateDerivatives = 3,
		RVTMVM_DerivativeUV = 4,
		RVTMVM_DerivativeWorld = 5,
	};


	// Enum /Script/Engine.ERuntimeVirtualTextureTextureAddressMode
	enum ERuntimeVirtualTextureTextureAddressMode
	{
		RVTTA_Clamp = 0,
		RVTTA_Wrap = 1,
	};


	// Enum /Script/Engine.EMaterialSceneAttributeInputMode
	enum EMaterialSceneAttributeInputMode
	{
		EMaterialSceneAttributeInputMode__Coordinates = 0,
		EMaterialSceneAttributeInputMode__OffsetFraction = 1,
	};


	// Enum /Script/Engine.ESpeedTreeGeometryType
	enum ESpeedTreeGeometryType
	{
		STG_Branch = 0,
		STG_Frond = 1,
		STG_Leaf = 2,
		STG_FacingLeaf = 3,
		STG_Billboard = 4,
	};


	// Enum /Script/Engine.ESpeedTreeWindType
	enum ESpeedTreeWindType
	{
		STW_None = 0,
		STW_Fastest = 1,
		STW_Fast = 2,
		STW_Better = 3,
		STW_Best = 4,
		STW_Palm = 5,
		STW_BestPlus = 6,
	};


	// Enum /Script/Engine.ESpeedTreeLODType
	enum ESpeedTreeLODType
	{
		STLOD_Pop = 0,
		STLOD_Smooth = 1,
	};


	// Enum /Script/Engine.ESwitchMaterialOutputType
	enum ESwitchMaterialOutputType
	{
		TMMOT_Float1 = 0,
		TMMOT_Float2 = 1,
		TMMOT_Float3 = 2,
		TMMOT_Float4 = 3,
	};


	// Enum /Script/Engine.ETextureCollectionMemberType
	enum ETextureCollectionMemberType
	{
		ETextureCollectionMemberType__Texture2D = 0,
		ETextureCollectionMemberType__TextureCube = 1,
		ETextureCollectionMemberType__Texture2DArray = 2,
		ETextureCollectionMemberType__TextureCubeArray = 3,
		ETextureCollectionMemberType__TextureVolume = 4,
		ETextureCollectionMemberType__Max = 5,
	};


	// Enum /Script/Engine.EMaterialExposedTextureProperty
	enum EMaterialExposedTextureProperty
	{
		TMTM_TextureSize = 0,
		TMTM_TexelSize = 1,
	};


	// Enum /Script/Engine.EMaterialVectorCoordTransformSource
	enum EMaterialVectorCoordTransformSource
	{
		TRANSFORMSOURCE_Tangent = 0,
		TRANSFORMSOURCE_Local = 1,
		TRANSFORMSOURCE_World = 2,
		TRANSFORMSOURCE_View = 3,
		TRANSFORMSOURCE_Camera = 4,
		TRANSFORMSOURCE_ParticleWorld = 5,
		TRANSFORMSOURCE_Instance = 6,
	};


	// Enum /Script/Engine.EMaterialVectorCoordTransform
	enum EMaterialVectorCoordTransform
	{
		TRANSFORM_Tangent = 0,
		TRANSFORM_Local = 1,
		TRANSFORM_World = 2,
		TRANSFORM_View = 3,
		TRANSFORM_Camera = 4,
		TRANSFORM_ParticleWorld = 5,
		TRANSFORM_Instance = 6,
	};


	// Enum /Script/Engine.EMaterialPositionTransformSource
	enum EMaterialPositionTransformSource
	{
		TRANSFORMPOSSOURCE_Local = 0,
		TRANSFORMPOSSOURCE_World = 1,
		TRANSFORMPOSSOURCE_TranslatedWorld = 2,
		TRANSFORMPOSSOURCE_View = 3,
		TRANSFORMPOSSOURCE_Camera = 4,
		TRANSFORMPOSSOURCE_Particle = 5,
		TRANSFORMPOSSOURCE_Instance = 6,
	};


	// Enum /Script/Engine.EVectorNoiseFunction
	enum EVectorNoiseFunction
	{
		VNF_CellnoiseALU = 0,
		VNF_VectorALU = 1,
		VNF_GradientALU = 2,
		VNF_CurlALU = 3,
		VNF_VoronoiALU = 4,
	};


	// Enum /Script/Engine.EMaterialExposedViewProperty
	enum EMaterialExposedViewProperty
	{
		MEVP_BufferSize = 0,
		MEVP_FieldOfView = 1,
		MEVP_TanHalfFieldOfView = 2,
		MEVP_ViewSize = 3,
		MEVP_WorldSpaceViewPosition = 4,
		MEVP_WorldSpaceCameraPosition = 5,
		MEVP_ViewportOffset = 6,
		MEVP_TemporalSampleCount = 7,
		MEVP_TemporalSampleIndex = 8,
		MEVP_TemporalSampleOffset = 9,
		MEVP_RuntimeVirtualTextureOutputLevel = A,
		MEVP_RuntimeVirtualTextureOutputDerivative = B,
		MEVP_PreExposure = C,
		MEVP_RuntimeVirtualTextureMaxLevel = D,
		MEVP_ResolutionFraction = E,
	};


	// Enum /Script/Engine.EWorldPositionIncludedOffsets
	enum EWorldPositionIncludedOffsets
	{
		WPT_Default = 0,
		WPT_ExcludeAllShaderOffsets = 1,
		WPT_CameraRelative = 2,
		WPT_CameraRelativeNoOffsets = 3,
	};


	// Enum /Script/Engine.EMaterialFunctionUsage
	enum EMaterialFunctionUsage
	{
		EMaterialFunctionUsage__Default = 0,
		EMaterialFunctionUsage__MaterialLayer = 1,
		EMaterialFunctionUsage__MaterialLayerBlend = 2,
	};


	// Enum /Script/Engine.EMaterialUsage
	enum EMaterialUsage
	{
		MATUSAGE_SkeletalMesh = 0,
		MATUSAGE_ParticleSprites = 1,
		MATUSAGE_BeamTrails = 2,
		MATUSAGE_MeshParticles = 3,
		MATUSAGE_StaticLighting = 4,
		MATUSAGE_MorphTargets = 5,
		MATUSAGE_SplineMesh = 6,
		MATUSAGE_InstancedStaticMeshes = 7,
		MATUSAGE_GeometryCollections = 8,
		MATUSAGE_Clothing = 9,
		MATUSAGE_NiagaraSprites = A,
		MATUSAGE_NiagaraRibbons = B,
		MATUSAGE_NiagaraMeshParticles = C,
		MATUSAGE_GeometryCache = D,
		MATUSAGE_Water = E,
		MATUSAGE_HairStrands = F,
		MATUSAGE_LidarPointCloud = 10,
		MATUSAGE_VirtualHeightfieldMesh = 11,
		MATUSAGE_Nanite = 12,
		MATUSAGE_VolumetricCloud = 13,
		MATUSAGE_HeterogeneousVolumes = 14,
	};


	// Enum /Script/Engine.EMaterialLayerLinkState
	enum EMaterialLayerLinkState
	{
		EMaterialLayerLinkState__Uninitialized = 0,
		EMaterialLayerLinkState__LinkedToParent = 1,
		EMaterialLayerLinkState__UnlinkedFromParent = 2,
		EMaterialLayerLinkState__NotFromParent = 3,
	};


	// Enum /Script/Engine.ETextureSizingType
	enum ETextureSizingType
	{
		TextureSizingType_UseSingleTextureSize = 0,
		TextureSizingType_UseAutomaticBiasedSizes = 1,
		TextureSizingType_UseManualOverrideTextureSize = 2,
		TextureSizingType_UseSimplygonAutomaticSizing = 3,
		TextureSizingType_AutomaticFromTexelDensity = 4,
		TextureSizingType_AutomaticFromMeshScreenSize = 5,
		TextureSizingType_AutomaticFromMeshDrawDistance = 6,
	};


	// Enum /Script/Engine.EMaterialMergeType
	enum EMaterialMergeType
	{
		MaterialMergeType_Default = 0,
		MaterialMergeType_Simplygon = 1,
	};


	// Enum /Script/Engine.ESceneTextureId
	enum ESceneTextureId
	{
		PPI_SceneColor = 0,
		PPI_SceneDepth = 1,
		PPI_DiffuseColor = 2,
		PPI_SpecularColor = 3,
		PPI_SubsurfaceColor = 4,
		PPI_BaseColor = 5,
		PPI_Specular = 6,
		PPI_Metallic = 7,
		PPI_WorldNormal = 8,
		PPI_SeparateTranslucency = 9,
		PPI_Opacity = A,
		PPI_Roughness = B,
		PPI_MaterialAO = C,
		PPI_CustomDepth = D,
		PPI_PostProcessInput0 = E,
		PPI_PostProcessInput1 = F,
		PPI_PostProcessInput2 = 10,
		PPI_PostProcessInput3 = 11,
		PPI_PostProcessInput4 = 12,
		PPI_PostProcessInput5 = 13,
		PPI_PostProcessInput6 = 14,
		PPI_DecalMask = 15,
		PPI_ShadingModelColor = 16,
		PPI_ShadingModelID = 17,
		PPI_AmbientOcclusion = 18,
		PPI_CustomStencil = 19,
		PPI_StoredBaseColor = 1A,
		PPI_StoredSpecular = 1B,
		PPI_Velocity = 1C,
		PPI_WorldTangent = 1D,
		PPI_Anisotropy = 1E,
		PPI_UserSceneTexture0 = 20,
		PPI_UserSceneTexture1 = 21,
		PPI_UserSceneTexture2 = 22,
		PPI_UserSceneTexture3 = 23,
		PPI_UserSceneTexture4 = 24,
		PPI_UserSceneTexture5 = 25,
		PPI_UserSceneTexture6 = 26,
	};


	// Enum /Script/Engine.ELWCFunctionKind
	enum ELWCFunctionKind
	{
		ELWCFunctionKind__Constructor = 0,
		ELWCFunctionKind__Promote = 1,
		ELWCFunctionKind__Demote = 2,
		ELWCFunctionKind__Add = 3,
		ELWCFunctionKind__Subtract = 4,
		ELWCFunctionKind__Divide = 5,
		ELWCFunctionKind__MultiplyVectorVector = 6,
		ELWCFunctionKind__MultiplyVectorMatrix = 7,
		ELWCFunctionKind__MultiplyMatrixMatrix = 8,
		ELWCFunctionKind__Other = 9,
		ELWCFunctionKind__Max = A,
	};


	// Enum /Script/Engine.EMaterialParameterAssociation
	enum EMaterialParameterAssociation
	{
		LayerParameter = 0,
		BlendParameter = 1,
		GlobalParameter = 2,
	};


	// Enum /Script/Engine.EMeshApproximationType
	enum EMeshApproximationType
	{
		EMeshApproximationType__MeshAndMaterials = 0,
		EMeshApproximationType__MeshShapeOnly = 1,
	};


	// Enum /Script/Engine.EMeshApproximationBaseCappingType
	enum EMeshApproximationBaseCappingType
	{
		EMeshApproximationBaseCappingType__NoBaseCapping = 0,
		EMeshApproximationBaseCappingType__ConvexPolygon = 1,
		EMeshApproximationBaseCappingType__ConvexSolid = 2,
	};


	// Enum /Script/Engine.EOccludedGeometryFilteringPolicy
	enum EOccludedGeometryFilteringPolicy
	{
		EOccludedGeometryFilteringPolicy__NoOcclusionFiltering = 0,
		EOccludedGeometryFilteringPolicy__VisibilityBasedFiltering = 1,
	};


	// Enum /Script/Engine.EMeshApproximationSimplificationPolicy
	enum EMeshApproximationSimplificationPolicy
	{
		EMeshApproximationSimplificationPolicy__FixedTriangleCount = 0,
		EMeshApproximationSimplificationPolicy__TrianglesPerArea = 1,
		EMeshApproximationSimplificationPolicy__GeometricTolerance = 2,
	};


	// Enum /Script/Engine.EMeshApproximationGroundPlaneClippingPolicy
	enum EMeshApproximationGroundPlaneClippingPolicy
	{
		EMeshApproximationGroundPlaneClippingPolicy__NoGroundClipping = 0,
		EMeshApproximationGroundPlaneClippingPolicy__DiscardWithZPlane = 1,
		EMeshApproximationGroundPlaneClippingPolicy__CutWithZPlane = 2,
		EMeshApproximationGroundPlaneClippingPolicy__CutAndFillWithZPlane = 3,
	};


	// Enum /Script/Engine.EMeshApproximationUVGenerationPolicy
	enum EMeshApproximationUVGenerationPolicy
	{
		EMeshApproximationUVGenerationPolicy__PreferUVAtlas = 0,
		EMeshApproximationUVGenerationPolicy__PreferXAtlas = 1,
		EMeshApproximationUVGenerationPolicy__PreferPatchBuilder = 2,
	};


	// Enum /Script/Engine.EMeshLODSelectionType
	enum EMeshLODSelectionType
	{
		EMeshLODSelectionType__AllLODs = 0,
		EMeshLODSelectionType__SpecificLOD = 1,
		EMeshLODSelectionType__CalculateLOD = 2,
		EMeshLODSelectionType__LowestDetailLOD = 3,
	};


	// Enum /Script/Engine.EMeshMergeType
	enum EMeshMergeType
	{
		EMeshMergeType__MeshMergeType_Default = 0,
		EMeshMergeType__MeshMergeType_MergeActor = 1,
	};


	// Enum /Script/Engine.EUVOutput
	enum EUVOutput
	{
		EUVOutput__DoNotOutputChannel = 0,
		EUVOutput__OutputChannel = 1,
	};


	// Enum /Script/Engine.ELandscapeCullingPrecision
	enum ELandscapeCullingPrecision
	{
		ELandscapeCullingPrecision__High = 0,
		ELandscapeCullingPrecision__Medium = 1,
		ELandscapeCullingPrecision__Low = 2,
	};


	// Enum /Script/Engine.EProxyNormalComputationMethod
	enum EProxyNormalComputationMethod
	{
		EProxyNormalComputationMethod__AngleWeighted = 0,
		EProxyNormalComputationMethod__AreaWeighted = 1,
		EProxyNormalComputationMethod__EqualWeighted = 2,
	};


	// Enum /Script/Engine.EMeshFeatureImportance
	enum EMeshFeatureImportance
	{
		EMeshFeatureImportance__Off = 0,
		EMeshFeatureImportance__Lowest = 1,
		EMeshFeatureImportance__Low = 2,
		EMeshFeatureImportance__Normal = 3,
		EMeshFeatureImportance__High = 4,
		EMeshFeatureImportance__Highest = 5,
	};


	// Enum /Script/Engine.EStaticMeshReductionTerimationCriterion
	enum EStaticMeshReductionTerimationCriterion
	{
		EStaticMeshReductionTerimationCriterion__Triangles = 0,
		EStaticMeshReductionTerimationCriterion__Vertices = 1,
		EStaticMeshReductionTerimationCriterion__Any = 2,
	};


	// Enum /Script/Engine.EMicroTransactionDelegate
	enum EMicroTransactionDelegate
	{
		MTD_PurchaseQueryComplete = 0,
		MTD_PurchaseComplete = 1,
	};


	// Enum /Script/Engine.EMicroTransactionResult
	enum EMicroTransactionResult
	{
		MTR_Succeeded = 0,
		MTR_Failed = 1,
		MTR_Canceled = 2,
		MTR_RestoredFromServer = 3,
	};


	// Enum /Script/Engine.ENavDataGatheringMode
	enum ENavDataGatheringMode
	{
		ENavDataGatheringMode__Default = 0,
		ENavDataGatheringMode__Instant = 1,
		ENavDataGatheringMode__Lazy = 2,
	};


	// Enum /Script/Engine.ENavigationDataResolution
	enum ENavigationDataResolution
	{
		ENavigationDataResolution__Low = 0,
		ENavigationDataResolution__Default = 1,
		ENavigationDataResolution__High = 2,
		ENavigationDataResolution__Invalid = 3,
	};


	// Enum /Script/Engine.ENavigationInvokerPriority
	enum ENavigationInvokerPriority
	{
		ENavigationInvokerPriority__VeryLow = 1,
		ENavigationInvokerPriority__Low = 2,
		ENavigationInvokerPriority__Default = 3,
		ENavigationInvokerPriority__High = 4,
		ENavigationInvokerPriority__VeryHigh = 5,
	};


	// Enum /Script/Engine.ENavLinkDirection
	enum ENavLinkDirection
	{
		ENavLinkDirection__BothWays = 0,
		ENavLinkDirection__LeftToRight = 1,
		ENavLinkDirection__RightToLeft = 2,
	};


	// Enum /Script/Engine.EPingType
	enum EPingType
	{
		EPingType__None = 0,
		EPingType__RoundTrip = 1,
		EPingType__RoundTripExclFrame = 2,
		EPingType__ICMP = 4,
		EPingType__UDPQoS = 8,
		EPingType__Max = 8,
		EPingType__Count = 4,
	};


	// Enum /Script/Engine.EPingAverageType
	enum EPingAverageType
	{
		EPingAverageType__None = 0,
		EPingAverageType__MovingAverage = 1,
		EPingAverageType__PlayerStateAvg = 2,
	};


	// Enum /Script/Engine.EParticleBurstMethod
	enum EParticleBurstMethod
	{
		EPBM_Instant = 0,
		EPBM_Interpolated = 1,
	};


	// Enum /Script/Engine.EParticleSubUVInterpMethod
	enum EParticleSubUVInterpMethod
	{
		PSUVIM_None = 0,
		PSUVIM_Linear = 1,
		PSUVIM_Linear_Blend = 2,
		PSUVIM_Random = 3,
		PSUVIM_Random_Blend = 4,
	};


	// Enum /Script/Engine.EEmitterRenderMode
	enum EEmitterRenderMode
	{
		ERM_Normal = 0,
		ERM_Point = 1,
		ERM_Cross = 2,
		ERM_LightsOnly = 3,
		ERM_None = 4,
	};


	// Enum /Script/Engine.EParticleDetailMode
	enum EParticleDetailMode
	{
		PDM_Low = 0,
		PDM_Medium = 1,
		PDM_High = 2,
		PDM_Epic = 3,
	};


	// Enum /Script/Engine.EParticleSignificanceLevel
	enum EParticleSignificanceLevel
	{
		EParticleSignificanceLevel__Low = 0,
		EParticleSignificanceLevel__Medium = 1,
		EParticleSignificanceLevel__High = 2,
		EParticleSignificanceLevel__Critical = 3,
		EParticleSignificanceLevel__Num = 4,
	};


	// Enum /Script/Engine.EParticleSystemInsignificanceReaction
	enum EParticleSystemInsignificanceReaction
	{
		EParticleSystemInsignificanceReaction__Auto = 0,
		EParticleSystemInsignificanceReaction__Complete = 1,
		EParticleSystemInsignificanceReaction__DisableTick = 2,
		EParticleSystemInsignificanceReaction__DisableTickAndKill = 3,
		EParticleSystemInsignificanceReaction__Num = 4,
	};


	// Enum /Script/Engine.EModuleType
	enum EModuleType
	{
		EPMT_General = 0,
		EPMT_TypeData = 1,
		EPMT_Beam = 2,
		EPMT_Trail = 3,
		EPMT_Spawn = 4,
		EPMT_Required = 5,
		EPMT_Event = 6,
		EPMT_Light = 7,
		EPMT_SubUV = 8,
	};


	// Enum /Script/Engine.EParticleSourceSelectionMethod
	enum EParticleSourceSelectionMethod
	{
		EPSSM_Random = 0,
		EPSSM_Sequential = 1,
	};


	// Enum /Script/Engine.EAttractorParticleSelectionMethod
	enum EAttractorParticleSelectionMethod
	{
		EAPSM_Random = 0,
		EAPSM_Sequential = 1,
	};


	// Enum /Script/Engine.Beam2SourceTargetMethod
	enum Beam2SourceTargetMethod
	{
		PEB2STM_Default = 0,
		PEB2STM_UserSet = 1,
		PEB2STM_Emitter = 2,
		PEB2STM_Particle = 3,
		PEB2STM_Actor = 4,
	};


	// Enum /Script/Engine.Beam2SourceTargetTangentMethod
	enum Beam2SourceTargetTangentMethod
	{
		PEB2STTM_Direct = 0,
		PEB2STTM_UserSet = 1,
		PEB2STTM_Distribution = 2,
		PEB2STTM_Emitter = 3,
	};


	// Enum /Script/Engine.BeamModifierType
	enum BeamModifierType
	{
		PEB2MT_Source = 0,
		PEB2MT_Target = 1,
	};


	// Enum /Script/Engine.EParticleCameraOffsetUpdateMethod
	enum EParticleCameraOffsetUpdateMethod
	{
		EPCOUM_DirectSet = 0,
		EPCOUM_Additive = 1,
		EPCOUM_Scalar = 2,
	};


	// Enum /Script/Engine.EParticleCollisionComplete
	enum EParticleCollisionComplete
	{
		EPCC_Kill = 0,
		EPCC_Freeze = 1,
		EPCC_HaltCollisions = 2,
		EPCC_FreezeTranslation = 3,
		EPCC_FreezeRotation = 4,
		EPCC_FreezeMovement = 5,
	};


	// Enum /Script/Engine.EParticleCollisionResponse
	enum EParticleCollisionResponse
	{
		EParticleCollisionResponse__Bounce = 0,
		EParticleCollisionResponse__Stop = 1,
		EParticleCollisionResponse__Kill = 2,
	};


	// Enum /Script/Engine.ELocationBoneSocketSource
	enum ELocationBoneSocketSource
	{
		BONESOCKETSOURCE_Bones = 0,
		BONESOCKETSOURCE_Sockets = 1,
	};


	// Enum /Script/Engine.ELocationBoneSocketSelectionMethod
	enum ELocationBoneSocketSelectionMethod
	{
		BONESOCKETSEL_Sequential = 0,
		BONESOCKETSEL_Random = 1,
	};


	// Enum /Script/Engine.ELocationEmitterSelectionMethod
	enum ELocationEmitterSelectionMethod
	{
		ELESM_Random = 0,
		ELESM_Sequential = 1,
	};


	// Enum /Script/Engine.CylinderHeightAxis
	enum CylinderHeightAxis
	{
		PMLPC_HEIGHTAXIS_X = 0,
		PMLPC_HEIGHTAXIS_Y = 1,
		PMLPC_HEIGHTAXIS_Z = 2,
	};


	// Enum /Script/Engine.ELocationSkelVertSurfaceSource
	enum ELocationSkelVertSurfaceSource
	{
		VERTSURFACESOURCE_Vert = 0,
		VERTSURFACESOURCE_Surface = 1,
	};


	// Enum /Script/Engine.EOrbitChainMode
	enum EOrbitChainMode
	{
		EOChainMode_Add = 0,
		EOChainMode_Scale = 1,
		EOChainMode_Link = 2,
	};


	// Enum /Script/Engine.EParticleAxisLock
	enum EParticleAxisLock
	{
		EPAL_NONE = 0,
		EPAL_X = 1,
		EPAL_Y = 2,
		EPAL_Z = 3,
		EPAL_NEGATIVE_X = 4,
		EPAL_NEGATIVE_Y = 5,
		EPAL_NEGATIVE_Z = 6,
		EPAL_ROTATE_X = 7,
		EPAL_ROTATE_Y = 8,
		EPAL_ROTATE_Z = 9,
	};


	// Enum /Script/Engine.EEmitterDynamicParameterValue
	enum EEmitterDynamicParameterValue
	{
		EDPV_UserSet = 0,
		EDPV_AutoSet = 1,
		EDPV_VelocityX = 2,
		EDPV_VelocityY = 3,
		EDPV_VelocityZ = 4,
		EDPV_VelocityMag = 5,
	};


	// Enum /Script/Engine.EParticleUVFlipMode
	enum EParticleUVFlipMode
	{
		EParticleUVFlipMode__None = 0,
		EParticleUVFlipMode__FlipUV = 1,
		EParticleUVFlipMode__FlipUOnly = 2,
		EParticleUVFlipMode__FlipVOnly = 3,
		EParticleUVFlipMode__RandomFlipUV = 4,
		EParticleUVFlipMode__RandomFlipUOnly = 5,
		EParticleUVFlipMode__RandomFlipVOnly = 6,
		EParticleUVFlipMode__RandomFlipUVIndependent = 7,
	};


	// Enum /Script/Engine.EParticleSortMode
	enum EParticleSortMode
	{
		PSORTMODE_None = 0,
		PSORTMODE_ViewProjDepth = 1,
		PSORTMODE_DistanceToView = 2,
		PSORTMODE_Age_OldestFirst = 3,
		PSORTMODE_Age_NewestFirst = 4,
	};


	// Enum /Script/Engine.EEmitterNormalsMode
	enum EEmitterNormalsMode
	{
		ENM_CameraFacing = 0,
		ENM_Spherical = 1,
		ENM_Cylindrical = 2,
	};


	// Enum /Script/Engine.ETrail2SourceMethod
	enum ETrail2SourceMethod
	{
		PET2SRCM_Default = 0,
		PET2SRCM_Particle = 1,
		PET2SRCM_Actor = 2,
	};


	// Enum /Script/Engine.EBeam2Method
	enum EBeam2Method
	{
		PEB2M_Distance = 0,
		PEB2M_Target = 1,
		PEB2M_Branch = 2,
	};


	// Enum /Script/Engine.EBeamTaperMethod
	enum EBeamTaperMethod
	{
		PEBTM_None = 0,
		PEBTM_Full = 1,
		PEBTM_Partial = 2,
	};


	// Enum /Script/Engine.EMeshScreenAlignment
	enum EMeshScreenAlignment
	{
		PSMA_MeshFaceCameraWithRoll = 0,
		PSMA_MeshFaceCameraWithSpin = 1,
		PSMA_MeshFaceCameraWithLockedAxis = 2,
	};


	// Enum /Script/Engine.EMeshCameraFacingUpAxis
	enum EMeshCameraFacingUpAxis
	{
		CameraFacing_NoneUP = 0,
		CameraFacing_ZUp = 1,
		CameraFacing_NegativeZUp = 2,
		CameraFacing_YUp = 3,
		CameraFacing_NegativeYUp = 4,
	};


	// Enum /Script/Engine.EMeshCameraFacingOptions
	enum EMeshCameraFacingOptions
	{
		XAxisFacing_NoUp = 0,
		XAxisFacing_ZUp = 1,
		XAxisFacing_NegativeZUp = 2,
		XAxisFacing_YUp = 3,
		XAxisFacing_NegativeYUp = 4,
		LockedAxis_ZAxisFacing = 5,
		LockedAxis_NegativeZAxisFacing = 6,
		LockedAxis_YAxisFacing = 7,
		LockedAxis_NegativeYAxisFacing = 8,
		VelocityAligned_ZAxisFacing = 9,
		VelocityAligned_NegativeZAxisFacing = A,
		VelocityAligned_YAxisFacing = B,
		VelocityAligned_NegativeYAxisFacing = C,
	};


	// Enum /Script/Engine.ETrailsRenderAxisOption
	enum ETrailsRenderAxisOption
	{
		Trails_CameraUp = 0,
		Trails_SourceUp = 1,
		Trails_WorldUp = 2,
	};


	// Enum /Script/Engine.EParticleScreenAlignment
	enum EParticleScreenAlignment
	{
		PSA_FacingCameraPosition = 0,
		PSA_Square = 1,
		PSA_Rectangle = 2,
		PSA_Velocity = 3,
		PSA_AwayFromCenter = 4,
		PSA_TypeSpecific = 5,
		PSA_FacingCameraDistanceBlend = 6,
	};


	// Enum /Script/Engine.EParticleSystemUpdateMode
	enum EParticleSystemUpdateMode
	{
		EPSUM_RealTime = 0,
		EPSUM_FixedTime = 1,
	};


	// Enum /Script/Engine.ParticleSystemLODMethod
	enum ParticleSystemLODMethod
	{
		PARTICLESYSTEMLODMETHOD_Automatic = 0,
		PARTICLESYSTEMLODMETHOD_DirectSet = 1,
		PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	};


	// Enum /Script/Engine.EParticleSystemOcclusionBoundsMethod
	enum EParticleSystemOcclusionBoundsMethod
	{
		EPSOBM_None = 0,
		EPSOBM_ParticleBounds = 1,
		EPSOBM_CustomBounds = 2,
	};


	// Enum /Script/Engine.EParticleSysParamType
	enum EParticleSysParamType
	{
		PSPT_None = 0,
		PSPT_Scalar = 1,
		PSPT_ScalarRand = 2,
		PSPT_Vector = 3,
		PSPT_VectorRand = 4,
		PSPT_Color = 5,
		PSPT_Actor = 6,
		PSPT_Material = 7,
		PSPT_VectorUnitRand = 8,
	};


	// Enum /Script/Engine.ParticleReplayState
	enum ParticleReplayState
	{
		PRS_Disabled = 0,
		PRS_Capturing = 1,
		PRS_Replaying = 2,
	};


	// Enum /Script/Engine.EParticleEventType
	enum EParticleEventType
	{
		EPET_Any = 0,
		EPET_Spawn = 1,
		EPET_Death = 2,
		EPET_Collision = 3,
		EPET_Burst = 4,
		EPET_Blueprint = 5,
	};


	// Enum /Script/Engine.EViewTargetBlendFunction
	enum EViewTargetBlendFunction
	{
		VTBlend_Linear = 0,
		VTBlend_Cubic = 1,
		VTBlend_EaseIn = 2,
		VTBlend_EaseOut = 3,
		VTBlend_EaseInOut = 4,
		VTBlend_PreBlended = 5,
	};


	// Enum /Script/Engine.EViewTargetBlendOrder
	enum EViewTargetBlendOrder
	{
		VTBlendOrder_Base = 0,
		VTBlendOrder_Override = 1,
	};


	// Enum /Script/Engine.ERichCurveInterpMode
	enum ERichCurveInterpMode
	{
		RCIM_Linear = 0,
		RCIM_Constant = 1,
		RCIM_Cubic = 2,
		RCIM_None = 3,
	};


	// Enum /Script/Engine.ERichCurveExtrapolation
	enum ERichCurveExtrapolation
	{
		RCCE_Cycle = 0,
		RCCE_CycleWithOffset = 1,
		RCCE_Oscillate = 2,
		RCCE_Linear = 3,
		RCCE_Constant = 4,
		RCCE_None = 5,
	};


	// Enum /Script/Engine.ReverbPreset
	enum ReverbPreset
	{
		REVERB_Default = 0,
		REVERB_Bathroom = 1,
		REVERB_StoneRoom = 2,
		REVERB_Auditorium = 3,
		REVERB_ConcertHall = 4,
		REVERB_Cave = 5,
		REVERB_Hallway = 6,
		REVERB_StoneCorridor = 7,
		REVERB_Alley = 8,
		REVERB_Forest = 9,
		REVERB_City = A,
		REVERB_Mountains = B,
		REVERB_Quarry = C,
		REVERB_Plain = D,
		REVERB_ParkingLot = E,
		REVERB_SewerPipe = F,
		REVERB_Underwater = 10,
		REVERB_SmallRoom = 11,
		REVERB_MediumRoom = 12,
		REVERB_LargeRoom = 13,
		REVERB_MediumHall = 14,
		REVERB_LargeHall = 15,
		REVERB_Plate = 16,
	};


	// Enum /Script/Engine.ERichCurveTangentMode
	enum ERichCurveTangentMode
	{
		RCTM_Auto = 0,
		RCTM_User = 1,
		RCTM_Break = 2,
		RCTM_None = 3,
		RCTM_SmartAuto = 4,
	};


	// Enum /Script/Engine.ERichCurveTangentWeightMode
	enum ERichCurveTangentWeightMode
	{
		RCTWM_WeightedNone = 0,
		RCTWM_WeightedArrive = 1,
		RCTWM_WeightedLeave = 2,
		RCTWM_WeightedBoth = 3,
	};


	// Enum /Script/Engine.ERichCurveCompressionFormat
	enum ERichCurveCompressionFormat
	{
		RCCF_Empty = 0,
		RCCF_Constant = 1,
		RCCF_Linear = 2,
		RCCF_Cubic = 3,
		RCCF_Mixed = 4,
		RCCF_Weighted = 5,
	};


	// Enum /Script/Engine.ERichCurveKeyTimeCompressionFormat
	enum ERichCurveKeyTimeCompressionFormat
	{
		RCKTCF_uint16 = 0,
		RCKTCF_float32 = 1,
	};


	// Enum /Script/Engine.ERuntimePartitionCellBoundsMethod
	enum ERuntimePartitionCellBoundsMethod
	{
		ERuntimePartitionCellBoundsMethod__UseContent = 0,
		ERuntimePartitionCellBoundsMethod__UseCellBounds = 1,
		ERuntimePartitionCellBoundsMethod__UseMinContentCellBounds = 2,
	};


	// Enum /Script/Engine.ERuntimeVirtualTextureMaterialType
	enum ERuntimeVirtualTextureMaterialType
	{
		ERuntimeVirtualTextureMaterialType__BaseColor = 0,
		ERuntimeVirtualTextureMaterialType__Mask4 = 1,
		ERuntimeVirtualTextureMaterialType__BaseColor_Normal_Roughness = 2,
		ERuntimeVirtualTextureMaterialType__BaseColor_Normal_Specular = 3,
		ERuntimeVirtualTextureMaterialType__BaseColor_Normal_Specular_YCoCg = 4,
		ERuntimeVirtualTextureMaterialType__BaseColor_Normal_Specular_Mask_YCoCg = 5,
		ERuntimeVirtualTextureMaterialType__WorldHeight = 6,
		ERuntimeVirtualTextureMaterialType__Displacement = 7,
		ERuntimeVirtualTextureMaterialType__Count = 8,
	};


	// Enum /Script/Engine.EDepthOfFieldMethod
	enum EDepthOfFieldMethod
	{
		DOFM_BokehDOF = 0,
		DOFM_Gaussian = 1,
		DOFM_CircleDOF = 2,
	};


	// Enum /Script/Engine.EAutoExposureMethod
	enum EAutoExposureMethod
	{
		AEM_Histogram = 0,
		AEM_Basic = 1,
		AEM_Manual = 2,
	};


	// Enum /Script/Engine.EBloomMethod
	enum EBloomMethod
	{
		BM_SOG = 0,
		BM_FFT = 1,
	};


	// Enum /Script/Engine.ETemperatureMethod
	enum ETemperatureMethod
	{
		TEMP_WhiteBalance = 0,
		TEMP_ColorTemperature = 1,
	};


	// Enum /Script/Engine.ELightUnits
	enum ELightUnits
	{
		ELightUnits__Unitless = 0,
		ELightUnits__Candelas = 1,
		ELightUnits__Lumens = 2,
		ELightUnits__EV = 3,
	};


	// Enum /Script/Engine.EReflectionsType
	enum EReflectionsType
	{
		EReflectionsType__ScreenSpace = 0,
		EReflectionsType__RayTracing = 1,
	};


	// Enum /Script/Engine.ELumenRayLightingModeOverride
	enum ELumenRayLightingModeOverride
	{
		ELumenRayLightingModeOverride__Default = 0,
		ELumenRayLightingModeOverride__SurfaceCache = 1,
		ELumenRayLightingModeOverride__HitLightingForReflections = 2,
		ELumenRayLightingModeOverride__HitLighting = 3,
	};


	// Enum /Script/Engine.ETranslucencyType
	enum ETranslucencyType
	{
		ETranslucencyType__Raster = 0,
		ETranslucencyType__RayTracing = 1,
	};


	// Enum /Script/Engine.EReflectedAndRefractedRayTracedShadows
	enum EReflectedAndRefractedRayTracedShadows
	{
		EReflectedAndRefractedRayTracedShadows__Disabled = 0,
		EReflectedAndRefractedRayTracedShadows__Hard_shadows = 1,
		EReflectedAndRefractedRayTracedShadows__Area_shadows = 2,
	};


	// Enum /Script/Engine.EMobilePlanarReflectionMode
	enum EMobilePlanarReflectionMode
	{
		EMobilePlanarReflectionMode__Usual = 0,
		EMobilePlanarReflectionMode__MobilePPRExclusive = 1,
		EMobilePlanarReflectionMode__MobilePPR = 2,
	};


	// Enum /Script/Engine.EMobilePixelProjectedReflectionQuality
	enum EMobilePixelProjectedReflectionQuality
	{
		EMobilePixelProjectedReflectionQuality__Disabled = 0,
		EMobilePixelProjectedReflectionQuality__BestPerformance = 1,
		EMobilePixelProjectedReflectionQuality__BetterQuality = 2,
		EMobilePixelProjectedReflectionQuality__BestQuality = 3,
	};


	// Enum /Script/Engine.EMaterialProperty
	enum EMaterialProperty
	{
		MP_EmissiveColor = 0,
		MP_Opacity = 1,
		MP_OpacityMask = 2,
		MP_DiffuseColor = 3,
		MP_SpecularColor = 4,
		MP_BaseColor = 5,
		MP_Metallic = 6,
		MP_Specular = 7,
		MP_Roughness = 8,
		MP_Anisotropy = 9,
		MP_Normal = A,
		MP_Tangent = B,
		MP_WorldPositionOffset = C,
		MP_WorldDisplacement_DEPRECATED = D,
		MP_TessellationMultiplier_DEPRECATED = E,
		MP_SubsurfaceColor = F,
		MP_CustomData0 = 10,
		MP_CustomData1 = 11,
		MP_AmbientOcclusion = 12,
		MP_Refraction = 13,
		MP_CustomizedUVs0 = 14,
		MP_CustomizedUVs1 = 15,
		MP_CustomizedUVs2 = 16,
		MP_CustomizedUVs3 = 17,
		MP_CustomizedUVs4 = 18,
		MP_CustomizedUVs5 = 19,
		MP_CustomizedUVs6 = 1A,
		MP_CustomizedUVs7 = 1B,
		MP_PixelDepthOffset = 1C,
		MP_ShadingModel = 1D,
		MP_FrontMaterial = 1E,
		MP_SurfaceThickness = 1F,
		MP_Displacement = 20,
		MP_MaterialAttributes = 21,
		MP_CustomOutput = 22,
	};


	// Enum /Script/Engine.EAntiAliasingMethod
	enum EAntiAliasingMethod
	{
		AAM_None = 0,
		AAM_FXAA = 1,
		AAM_TemporalAA = 2,
		AAM_MSAA = 3,
		AAM_TSR = 4,
	};


	// Enum /Script/Engine.SkeletalMeshTerminationCriterion
	enum SkeletalMeshTerminationCriterion
	{
		SMTC_NumOfTriangles = 0,
		SMTC_NumOfVerts = 1,
		SMTC_TriangleOrVert = 2,
		SMTC_AbsNumOfTriangles = 3,
		SMTC_AbsNumOfVerts = 4,
		SMTC_AbsTriangleOrVert = 5,
	};


	// Enum /Script/Engine.SkeletalMeshOptimizationType
	enum SkeletalMeshOptimizationType
	{
		SMOT_NumOfTriangles = 0,
		SMOT_MaxDeviation = 1,
		SMOT_TriangleOrDeviation = 2,
	};


	// Enum /Script/Engine.SkeletalMeshOptimizationImportance
	enum SkeletalMeshOptimizationImportance
	{
		SMOI_Off = 0,
		SMOI_Lowest = 1,
		SMOI_Low = 2,
		SMOI_Normal = 3,
		SMOI_High = 4,
		SMOI_Highest = 5,
	};


	// Enum /Script/Engine.EBoneVisibilityStatus
	enum EBoneVisibilityStatus
	{
		BVS_HiddenByParent = 0,
		BVS_Visible = 1,
		BVS_ExplicitlyHidden = 2,
	};


	// Enum /Script/Engine.EPhysBodyOp
	enum EPhysBodyOp
	{
		PBO_None = 0,
		PBO_Term = 1,
	};


	// Enum /Script/Engine.EVisibilityBasedAnimTickOption
	enum EVisibilityBasedAnimTickOption
	{
		EVisibilityBasedAnimTickOption__AlwaysTickPoseAndRefreshBones = 0,
		EVisibilityBasedAnimTickOption__AlwaysTickPose = 1,
		EVisibilityBasedAnimTickOption__OnlyTickMontagesAndRefreshBonesWhenPlayingMontages = 2,
		EVisibilityBasedAnimTickOption__OnlyTickMontagesWhenNotRendered = 3,
		EVisibilityBasedAnimTickOption__OnlyTickPoseWhenRendered = 4,
	};


	// Enum /Script/Engine.EBoneSpaces
	enum EBoneSpaces
	{
		EBoneSpaces__WorldSpace = 0,
		EBoneSpaces__ComponentSpace = 1,
	};


	// Enum /Script/Engine.ESkyLightSourceType
	enum ESkyLightSourceType
	{
		SLS_CapturedScene = 0,
		SLS_SpecifiedCubemap = 1,
	};


	// Enum /Script/Engine.ESoundDistanceCalc
	enum ESoundDistanceCalc
	{
		SOUNDDISTANCE_Normal = 0,
		SOUNDDISTANCE_InfiniteXYPlane = 1,
		SOUNDDISTANCE_InfiniteXZPlane = 2,
		SOUNDDISTANCE_InfiniteYZPlane = 3,
	};


	// Enum /Script/Engine.ESoundSpatializationAlgorithm
	enum ESoundSpatializationAlgorithm
	{
		SPATIALIZATION_Default = 0,
		SPATIALIZATION_HRTF = 1,
	};


	// Enum /Script/Engine.EAirAbsorptionMethod
	enum EAirAbsorptionMethod
	{
		EAirAbsorptionMethod__Linear = 0,
		EAirAbsorptionMethod__CustomCurve = 1,
	};


	// Enum /Script/Engine.EReverbSendMethod
	enum EReverbSendMethod
	{
		EReverbSendMethod__Linear = 0,
		EReverbSendMethod__CustomCurve = 1,
		EReverbSendMethod__Manual = 2,
	};


	// Enum /Script/Engine.EPriorityAttenuationMethod
	enum EPriorityAttenuationMethod
	{
		EPriorityAttenuationMethod__Linear = 0,
		EPriorityAttenuationMethod__CustomCurve = 1,
		EPriorityAttenuationMethod__Manual = 2,
	};


	// Enum /Script/Engine.ENonSpatializedRadiusSpeakerMapMode
	enum ENonSpatializedRadiusSpeakerMapMode
	{
		ENonSpatializedRadiusSpeakerMapMode__OmniDirectional = 0,
		ENonSpatializedRadiusSpeakerMapMode__Direct2D = 1,
		ENonSpatializedRadiusSpeakerMapMode__Surround2D = 2,
	};


	// Enum /Script/Engine.ESoundGroup
	enum ESoundGroup
	{
		SOUNDGROUP_Default = 0,
		SOUNDGROUP_Effects = 1,
		SOUNDGROUP_UI = 2,
		SOUNDGROUP_Music = 3,
		SOUNDGROUP_Voice = 4,
		SOUNDGROUP_GameSoundGroup1 = 5,
		SOUNDGROUP_GameSoundGroup2 = 6,
		SOUNDGROUP_GameSoundGroup3 = 7,
		SOUNDGROUP_GameSoundGroup4 = 8,
		SOUNDGROUP_GameSoundGroup5 = 9,
		SOUNDGROUP_GameSoundGroup6 = A,
		SOUNDGROUP_GameSoundGroup7 = B,
		SOUNDGROUP_GameSoundGroup8 = C,
		SOUNDGROUP_GameSoundGroup9 = D,
		SOUNDGROUP_GameSoundGroup10 = E,
		SOUNDGROUP_GameSoundGroup11 = F,
		SOUNDGROUP_GameSoundGroup12 = 10,
		SOUNDGROUP_GameSoundGroup13 = 11,
		SOUNDGROUP_GameSoundGroup14 = 12,
		SOUNDGROUP_GameSoundGroup15 = 13,
		SOUNDGROUP_GameSoundGroup16 = 14,
		SOUNDGROUP_GameSoundGroup17 = 15,
		SOUNDGROUP_GameSoundGroup18 = 16,
		SOUNDGROUP_GameSoundGroup19 = 17,
		SOUNDGROUP_GameSoundGroup20 = 18,
	};


	// Enum /Script/Engine.ModulationParamMode
	enum ModulationParamMode
	{
		MPM_Normal = 0,
		MPM_Abs = 1,
		MPM_Direct = 2,
	};


	// Enum /Script/Engine.ESourceBusSendLevelControlMethod
	enum ESourceBusSendLevelControlMethod
	{
		ESourceBusSendLevelControlMethod__Linear = 0,
		ESourceBusSendLevelControlMethod__CustomCurve = 1,
		ESourceBusSendLevelControlMethod__Manual = 2,
	};


	// Enum /Script/Engine.EDecompressionType
	enum EDecompressionType
	{
		DTYPE_Setup = 0,
		DTYPE_Invalid = 1,
		DTYPE_Preview = 2,
		DTYPE_Native = 3,
		DTYPE_RealTime = 4,
		DTYPE_Procedural = 5,
		DTYPE_Xenon = 6,
		DTYPE_Streaming = 7,
	};


	// Enum /Script/Engine.ESoundWaveFFTSize
	enum ESoundWaveFFTSize
	{
		ESoundWaveFFTSize__VerySmall = 0,
		ESoundWaveFFTSize__Small = 1,
		ESoundWaveFFTSize__Medium = 2,
		ESoundWaveFFTSize__Large = 3,
		ESoundWaveFFTSize__VeryLarge = 4,
	};


	// Enum /Script/Engine.ESoundAssetCompressionType
	enum ESoundAssetCompressionType
	{
		ESoundAssetCompressionType__BinkAudio = 0,
		ESoundAssetCompressionType__ADPCM = 1,
		ESoundAssetCompressionType__PCM = 2,
		ESoundAssetCompressionType__Opus = 3,
		ESoundAssetCompressionType__PlatformSpecific = 4,
		ESoundAssetCompressionType__ProjectDefined = 5,
		ESoundAssetCompressionType__RADAudio = 6,
	};


	// Enum /Script/Engine.ESoundWaveLoadingBehavior
	enum ESoundWaveLoadingBehavior
	{
		ESoundWaveLoadingBehavior__Inherited = 0,
		ESoundWaveLoadingBehavior__RetainOnLoad = 1,
		ESoundWaveLoadingBehavior__PrimeOnLoad = 2,
		ESoundWaveLoadingBehavior__LoadOnDemand = 3,
		ESoundWaveLoadingBehavior__ForceInline = 4,
		ESoundWaveLoadingBehavior__Uninitialized = FF,
	};


	// Enum /Script/Engine.EStereoLayerType
	enum EStereoLayerType
	{
		SLT_WorldLocked = 0,
		SLT_TrackerLocked = 1,
		SLT_FaceLocked = 2,
	};


	// Enum /Script/Engine.EStereoLayerShape
	enum EStereoLayerShape
	{
		SLSH_QuadLayer = 0,
		SLSH_CylinderLayer = 1,
		SLSH_CubemapLayer = 2,
		SLSH_EquirectLayer = 3,
	};


	// Enum /Script/Engine.EChunkSeekTableMode
	enum EChunkSeekTableMode
	{
		EChunkSeekTableMode__ConstantSamplesPerEntry = 0,
		EChunkSeekTableMode__VariableSamplesPerEntry = 1,
	};


	// Enum /Script/Engine.ESubUVBoundingVertexCount
	enum ESubUVBoundingVertexCount
	{
		BVC_FourVertices = 0,
		BVC_EightVertices = 1,
	};


	// Enum /Script/Engine.EOpacitySourceMode
	enum EOpacitySourceMode
	{
		OSM_Alpha = 0,
		OSM_ColorBrightness = 1,
		OSM_RedChannel = 2,
		OSM_GreenChannel = 3,
		OSM_BlueChannel = 4,
	};


	// Enum /Script/Engine.EHorizTextAligment
	enum EHorizTextAligment
	{
		EHTA_Left = 0,
		EHTA_Center = 1,
		EHTA_Right = 2,
	};


	// Enum /Script/Engine.EVerticalTextAligment
	enum EVerticalTextAligment
	{
		EVRTA_TextTop = 0,
		EVRTA_TextCenter = 1,
		EVRTA_TextBottom = 2,
		EVRTA_QuadTop = 3,
	};


	// Enum /Script/Engine.TextureGroup
	enum TextureGroup
	{
		TEXTUREGROUP_World = 0,
		TEXTUREGROUP_WorldNormalMap = 1,
		TEXTUREGROUP_WorldSpecular = 2,
		TEXTUREGROUP_Character = 3,
		TEXTUREGROUP_CharacterNormalMap = 4,
		TEXTUREGROUP_CharacterSpecular = 5,
		TEXTUREGROUP_Weapon = 6,
		TEXTUREGROUP_WeaponNormalMap = 7,
		TEXTUREGROUP_WeaponSpecular = 8,
		TEXTUREGROUP_Vehicle = 9,
		TEXTUREGROUP_VehicleNormalMap = A,
		TEXTUREGROUP_VehicleSpecular = B,
		TEXTUREGROUP_Cinematic = C,
		TEXTUREGROUP_Effects = D,
		TEXTUREGROUP_EffectsNotFiltered = E,
		TEXTUREGROUP_Skybox = F,
		TEXTUREGROUP_UI = 10,
		TEXTUREGROUP_Lightmap = 11,
		TEXTUREGROUP_RenderTarget = 12,
		TEXTUREGROUP_MobileFlattened = 13,
		TEXTUREGROUP_ProcBuilding_Face = 14,
		TEXTUREGROUP_ProcBuilding_LightMap = 15,
		TEXTUREGROUP_Shadowmap = 16,
		TEXTUREGROUP_ColorLookupTable = 17,
		TEXTUREGROUP_Terrain_Heightmap = 18,
		TEXTUREGROUP_Terrain_Weightmap = 19,
		TEXTUREGROUP_Bokeh = 1A,
		TEXTUREGROUP_IESLightProfile = 1B,
		TEXTUREGROUP_Pixels2D = 1C,
		TEXTUREGROUP_HierarchicalLOD = 1D,
		TEXTUREGROUP_Impostor = 1E,
		TEXTUREGROUP_ImpostorNormalDepth = 1F,
		TEXTUREGROUP_8BitData = 20,
		TEXTUREGROUP_16BitData = 21,
		TEXTUREGROUP_Project01 = 22,
		TEXTUREGROUP_Project02 = 23,
		TEXTUREGROUP_Project03 = 24,
		TEXTUREGROUP_Project04 = 25,
		TEXTUREGROUP_Project05 = 26,
		TEXTUREGROUP_Project06 = 27,
		TEXTUREGROUP_Project07 = 28,
		TEXTUREGROUP_Project08 = 29,
		TEXTUREGROUP_Project09 = 2A,
		TEXTUREGROUP_Project10 = 2B,
		TEXTUREGROUP_Project11 = 2C,
		TEXTUREGROUP_Project12 = 2D,
		TEXTUREGROUP_Project13 = 2E,
		TEXTUREGROUP_Project14 = 2F,
		TEXTUREGROUP_Project15 = 30,
		TEXTUREGROUP_Project16 = 31,
		TEXTUREGROUP_Project17 = 32,
		TEXTUREGROUP_Project18 = 33,
		TEXTUREGROUP_Project19 = 34,
		TEXTUREGROUP_Project20 = 35,
		TEXTUREGROUP_Project21 = 36,
		TEXTUREGROUP_Project22 = 37,
		TEXTUREGROUP_Project23 = 38,
		TEXTUREGROUP_Project24 = 39,
		TEXTUREGROUP_Project25 = 3A,
		TEXTUREGROUP_Project26 = 3B,
		TEXTUREGROUP_Project27 = 3C,
		TEXTUREGROUP_Project28 = 3D,
		TEXTUREGROUP_Project29 = 3E,
		TEXTUREGROUP_Project30 = 3F,
		TEXTUREGROUP_Project31 = 40,
		TEXTUREGROUP_Project32 = 41,
	};


	// Enum /Script/Engine.TextureMipGenSettings
	enum TextureMipGenSettings
	{
		TMGS_FromTextureGroup = 0,
		TMGS_SimpleAverage = 1,
		TMGS_Sharpen0 = 2,
		TMGS_Sharpen1 = 3,
		TMGS_Sharpen2 = 4,
		TMGS_Sharpen3 = 5,
		TMGS_Sharpen4 = 6,
		TMGS_Sharpen5 = 7,
		TMGS_Sharpen6 = 8,
		TMGS_Sharpen7 = 9,
		TMGS_Sharpen8 = A,
		TMGS_Sharpen9 = B,
		TMGS_Sharpen10 = C,
		TMGS_NoMipmaps = D,
		TMGS_LeaveExistingMips = E,
		TMGS_Blur1 = F,
		TMGS_Blur2 = 10,
		TMGS_Blur3 = 11,
		TMGS_Blur4 = 12,
		TMGS_Blur5 = 13,
		TMGS_Unfiltered = 14,
		TMGS_Angular = 15,
	};


	// Enum /Script/Engine.ETexturePowerOfTwoSetting
	enum ETexturePowerOfTwoSetting
	{
		ETexturePowerOfTwoSetting__None = 0,
		ETexturePowerOfTwoSetting__PadToPowerOfTwo = 1,
		ETexturePowerOfTwoSetting__PadToSquarePowerOfTwo = 2,
		ETexturePowerOfTwoSetting__StretchToPowerOfTwo = 3,
		ETexturePowerOfTwoSetting__StretchToSquarePowerOfTwo = 4,
		ETexturePowerOfTwoSetting__ResizeToSpecificResolution = 5,
	};


	// Enum /Script/Engine.ETextureSamplerFilter
	enum ETextureSamplerFilter
	{
		ETextureSamplerFilter__Point = 0,
		ETextureSamplerFilter__Bilinear = 1,
		ETextureSamplerFilter__Trilinear = 2,
		ETextureSamplerFilter__AnisotropicPoint = 3,
		ETextureSamplerFilter__AnisotropicLinear = 4,
	};


	// Enum /Script/Engine.ETextureMipLoadOptions
	enum ETextureMipLoadOptions
	{
		ETextureMipLoadOptions__Default = 0,
		ETextureMipLoadOptions__AllMips = 1,
		ETextureMipLoadOptions__OnlyFirstMip = 2,
	};


	// Enum /Script/Engine.ETextureAvailability
	enum ETextureAvailability
	{
		ETextureAvailability__GPU = 0,
		ETextureAvailability__CPU = 1,
	};


	// Enum /Script/Engine.ETextureDownscaleOptions
	enum ETextureDownscaleOptions
	{
		ETextureDownscaleOptions__Default = 0,
		ETextureDownscaleOptions__Unfiltered = 1,
		ETextureDownscaleOptions__SimpleAverage = 2,
		ETextureDownscaleOptions__Sharpen0 = 3,
		ETextureDownscaleOptions__Sharpen1 = 4,
		ETextureDownscaleOptions__Sharpen2 = 5,
		ETextureDownscaleOptions__Sharpen3 = 6,
		ETextureDownscaleOptions__Sharpen4 = 7,
		ETextureDownscaleOptions__Sharpen5 = 8,
		ETextureDownscaleOptions__Sharpen6 = 9,
		ETextureDownscaleOptions__Sharpen7 = A,
		ETextureDownscaleOptions__Sharpen8 = B,
		ETextureDownscaleOptions__Sharpen9 = C,
		ETextureDownscaleOptions__Sharpen10 = D,
	};


	// Enum /Script/Engine.ETextureLossyCompressionAmount
	enum ETextureLossyCompressionAmount
	{
		TLCA_Default = 0,
		TLCA_None = 1,
		TLCA_Lowest = 2,
		TLCA_Low = 3,
		TLCA_Medium = 4,
		TLCA_High = 5,
		TLCA_Highest = 6,
	};


	// Enum /Script/Engine.ETextureEncodeSpeed
	enum ETextureEncodeSpeed
	{
		ETextureEncodeSpeed__Final = 0,
		ETextureEncodeSpeed__FinalIfAvailable = 1,
		ETextureEncodeSpeed__Fast = 2,
	};


	// Enum /Script/Engine.ETextureClass
	enum ETextureClass
	{
		ETextureClass__Invalid = 0,
		ETextureClass__TwoD = 1,
		ETextureClass__Cube = 2,
		ETextureClass__Array = 3,
		ETextureClass__CubeArray = 4,
		ETextureClass__Volume = 5,
		ETextureClass__TwoDDynamic = 6,
		ETextureClass__RenderTarget = 7,
		ETextureClass__Other2DNoSource = 8,
		ETextureClass__OtherUnknown = 9,
	};


	// Enum /Script/Engine.ECompositeTextureMode
	enum ECompositeTextureMode
	{
		CTM_Disabled = 0,
		CTM_NormalRoughnessToRed = 1,
		CTM_NormalRoughnessToGreen = 2,
		CTM_NormalRoughnessToBlue = 3,
		CTM_NormalRoughnessToAlpha = 4,
	};


	// Enum /Script/Engine.ETextureSourceCompressionFormat
	enum ETextureSourceCompressionFormat
	{
		TSCF_None = 0,
		TSCF_PNG = 1,
		TSCF_JPEG = 2,
		TSCF_UEJPEG = 3,
		TSCF_UEDELTA = 4,
	};


	// Enum /Script/Engine.ETextureSourceFormat
	enum ETextureSourceFormat
	{
		TSF_Invalid = 0,
		TSF_G8 = 1,
		TSF_BGRA8 = 2,
		TSF_BGRE8 = 3,
		TSF_RGBA16 = 4,
		TSF_RGBA16F = 5,
		TSF_RGBA8_DEPRECATED = 6,
		TSF_RGBE8_DEPRECATED = 7,
		TSF_G16 = 8,
		TSF_RGBA32F = 9,
		TSF_R16F = A,
		TSF_R32F = B,
	};


	// Enum /Script/Engine.TextureCompressionSettings
	enum TextureCompressionSettings
	{
		TC_Default = 0,
		TC_Normalmap = 1,
		TC_Masks = 2,
		TC_Grayscale = 3,
		TC_Displacementmap = 4,
		TC_VectorDisplacementmap = 5,
		TC_HDR = 6,
		TC_EditorIcon = 7,
		TC_Alpha = 8,
		TC_DistanceFieldFont = 9,
		TC_HDR_Compressed = A,
		TC_BC7 = B,
		TC_HalfFloat = C,
		TC_LQ = D,
		TC_EncodedReflectionCapture = E,
		TC_SingleFloat = F,
		TC_HDR_F32 = 10,
	};


	// Enum /Script/Engine.ETextureSourceEncoding
	enum ETextureSourceEncoding
	{
		ETextureSourceEncoding__TSE_None = 0,
		ETextureSourceEncoding__TSE_Linear = 1,
		ETextureSourceEncoding__TSE_sRGB = 2,
		ETextureSourceEncoding__TSE_ST2084 = 3,
		ETextureSourceEncoding__TSE_Gamma22 = 4,
		ETextureSourceEncoding__TSE_BT1886 = 5,
		ETextureSourceEncoding__TSE_Gamma26 = 6,
		ETextureSourceEncoding__TSE_Cineon = 7,
		ETextureSourceEncoding__TSE_REDLog = 8,
		ETextureSourceEncoding__TSE_REDLog3G10 = 9,
		ETextureSourceEncoding__TSE_SLog1 = A,
		ETextureSourceEncoding__TSE_SLog2 = B,
		ETextureSourceEncoding__TSE_SLog3 = C,
		ETextureSourceEncoding__TSE_AlexaV3LogC = D,
		ETextureSourceEncoding__TSE_CanonLog = E,
		ETextureSourceEncoding__TSE_ProTune = F,
		ETextureSourceEncoding__TSE_VLog = 10,
	};


	// Enum /Script/Engine.ETextureColorSpace
	enum ETextureColorSpace
	{
		ETextureColorSpace__TCS_None = 0,
		ETextureColorSpace__TCS_sRGB = 1,
		ETextureColorSpace__TCS_Rec2020 = 2,
		ETextureColorSpace__TCS_ACESAP0 = 3,
		ETextureColorSpace__TCS_ACESAP1 = 4,
		ETextureColorSpace__TCS_P3DCI = 5,
		ETextureColorSpace__TCS_P3D65 = 6,
		ETextureColorSpace__TCS_REDWideGamut = 7,
		ETextureColorSpace__TCS_SonySGamut3 = 8,
		ETextureColorSpace__TCS_SonySGamut3Cine = 9,
		ETextureColorSpace__TCS_AlexaWideGamut = A,
		ETextureColorSpace__TCS_CanonCinemaGamut = B,
		ETextureColorSpace__TCS_GoProProtuneNative = C,
		ETextureColorSpace__TCS_PanasonicVGamut = D,
		ETextureColorSpace__TCS_Custom = 63,
	};


	// Enum /Script/Engine.TextureCookPlatformTilingSettings
	enum TextureCookPlatformTilingSettings
	{
		TCPTS_FromTextureGroup = 0,
		TCPTS_Tile = 1,
		TCPTS_DoNotTile = 2,
	};


	// Enum /Script/Engine.ETextureChromaticAdaptationMethod
	enum ETextureChromaticAdaptationMethod
	{
		ETextureChromaticAdaptationMethod__TCAM_None = 0,
		ETextureChromaticAdaptationMethod__TCAM_Bradford = 1,
		ETextureChromaticAdaptationMethod__TCAM_CAT02 = 2,
	};


	// Enum /Script/Engine.TextureFilter
	enum TextureFilter
	{
		TF_Nearest = 0,
		TF_Bilinear = 1,
		TF_Trilinear = 2,
		TF_Default = 3,
	};


	// Enum /Script/Engine.TextureAddress
	enum TextureAddress
	{
		TA_Wrap = 0,
		TA_Clamp = 1,
		TA_Mirror = 2,
	};


	// Enum /Script/Engine.ETextureMipCount
	enum ETextureMipCount
	{
		TMC_ResidentMips = 0,
		TMC_AllMips = 1,
		TMC_AllMipsBiased = 2,
	};


	// Enum /Script/Engine.ETextureCompressionQuality
	enum ETextureCompressionQuality
	{
		TCQ_Default = 0,
		TCQ_Lowest = 1,
		TCQ_Low = 2,
		TCQ_Medium = 3,
		TCQ_High = 4,
		TCQ_Highest = 5,
	};


	// Enum /Script/Engine.ETimelineLengthMode
	enum ETimelineLengthMode
	{
		TL_TimelineLength = 0,
		TL_LastKeyFrame = 1,
	};


	// Enum /Script/Engine.ETimelineDirection
	enum ETimelineDirection
	{
		ETimelineDirection__Forward = 0,
		ETimelineDirection__Backward = 1,
	};


	// Enum /Script/Engine.ETwitterRequestMethod
	enum ETwitterRequestMethod
	{
		TRM_Get = 0,
		TRM_Post = 1,
		TRM_Delete = 2,
	};


	// Enum /Script/Engine.ETwitterIntegrationDelegate
	enum ETwitterIntegrationDelegate
	{
		TID_AuthorizeComplete = 0,
		TID_TweetUIComplete = 1,
		TID_RequestComplete = 2,
	};


	// Enum /Script/Engine.EVectorFieldConstructionOp
	enum EVectorFieldConstructionOp
	{
		VFCO_Extrude = 0,
		VFCO_Revolve = 1,
	};


	// Enum /Script/Engine.ESplitScreenType
	enum ESplitScreenType
	{
		ESplitScreenType__None = 0,
		ESplitScreenType__TwoPlayer_Horizontal = 1,
		ESplitScreenType__TwoPlayer_Vertical = 2,
		ESplitScreenType__ThreePlayer_FavorTop = 3,
		ESplitScreenType__ThreePlayer_FavorBottom = 4,
		ESplitScreenType__ThreePlayer_Vertical = 5,
		ESplitScreenType__ThreePlayer_Horizontal = 6,
		ESplitScreenType__FourPlayer_Grid = 7,
		ESplitScreenType__FourPlayer_Vertical = 8,
		ESplitScreenType__FourPlayer_Horizontal = 9,
		ESplitScreenType__SplitTypeCount = A,
	};


	// Enum /Script/Engine.EWindSourceType
	enum EWindSourceType
	{
		EWindSourceType__Directional = 0,
		EWindSourceType__Point = 1,
	};


	// Enum /Script/Engine.EVisibilityAggressiveness
	enum EVisibilityAggressiveness
	{
		VIS_LeastAggressive = 0,
		VIS_ModeratelyAggressive = 1,
		VIS_MostAggressive = 2,
		VIS_Max = 3,
	};


	// Enum /Script/Engine.EVolumeLightingMethod
	enum EVolumeLightingMethod
	{
		VLM_VolumetricLightmap = 0,
		VLM_SparseVolumeLightingSamples = 1,
	};


	// Enum /Script/Engine.EQuartzTimeSignatureQuantization
	enum EQuartzTimeSignatureQuantization
	{
		EQuartzTimeSignatureQuantization__HalfNote = 0,
		EQuartzTimeSignatureQuantization__QuarterNote = 1,
		EQuartzTimeSignatureQuantization__EighthNote = 2,
		EQuartzTimeSignatureQuantization__SixteenthNote = 3,
		EQuartzTimeSignatureQuantization__ThirtySecondNote = 4,
		EQuartzTimeSignatureQuantization__Count = 5,
	};


	// Enum /Script/Engine.EQuartzDelegateType
	enum EQuartzDelegateType
	{
		EQuartzDelegateType__MetronomeTick = 0,
		EQuartzDelegateType__CommandEvent = 1,
		EQuartzDelegateType__Count = 2,
	};


	// Enum /Script/Engine.EQuarztQuantizationReference
	enum EQuarztQuantizationReference
	{
		EQuarztQuantizationReference__BarRelative = 0,
		EQuarztQuantizationReference__TransportRelative = 1,
		EQuarztQuantizationReference__CurrentTimeRelative = 2,
		EQuarztQuantizationReference__Count = 3,
	};


	// Enum /Script/Engine.EQuartzCommandType
	enum EQuartzCommandType
	{
		EQuartzCommandType__PlaySound = 0,
		EQuartzCommandType__QueueSoundToPlay = 1,
		EQuartzCommandType__RetriggerSound = 2,
		EQuartzCommandType__TickRateChange = 3,
		EQuartzCommandType__TransportReset = 4,
		EQuartzCommandType__StartOtherClock = 5,
		EQuartzCommandType__Notify = 6,
		EQuartzCommandType__Custom = 7,
	};


	// Enum /Script/Engine.EActorUpdateOverlapsMethod
	enum EActorUpdateOverlapsMethod
	{
		EActorUpdateOverlapsMethod__UseConfigDefault = 0,
		EActorUpdateOverlapsMethod__AlwaysUpdate = 1,
		EActorUpdateOverlapsMethod__OnlyUpdateMovable = 2,
		EActorUpdateOverlapsMethod__NeverUpdate = 3,
	};


	// Enum /Script/Engine.ESpawnActorScaleMethod
	enum ESpawnActorScaleMethod
	{
		ESpawnActorScaleMethod__OverrideRootScale = 0,
		ESpawnActorScaleMethod__MultiplyWithRoot = 1,
		ESpawnActorScaleMethod__SelectDefaultAtRuntime = 2,
	};


	// Enum /Script/Engine.ELevelInstanceType
	enum ELevelInstanceType
	{
		ELevelInstanceType__None = 0,
		ELevelInstanceType__LevelInstance = 1,
		ELevelInstanceType__LevelInstanceEdit = 2,
		ELevelInstanceType__LevelInstancePropertyOverride = 3,
	};


	// Enum /Script/Engine.ELevelInstanceFlags
	enum ELevelInstanceFlags
	{
		ELevelInstanceFlags__None = 0,
		ELevelInstanceFlags__IsInEditHierarchy = 1,
		ELevelInstanceFlags__HasPropertyOverrides = 2,
		ELevelInstanceFlags__HasEditablePropertyOverrides = 4,
	};


	// Enum /Script/Engine.FNavigationSystemRunMode
	enum FNavigationSystemRunMode
	{
		FNavigationSystemRunMode__InvalidMode = 0,
		FNavigationSystemRunMode__GameMode = 1,
		FNavigationSystemRunMode__EditorMode = 2,
		FNavigationSystemRunMode__SimulationMode = 3,
		FNavigationSystemRunMode__PIEMode = 4,
		FNavigationSystemRunMode__InferFromWorldMode = 5,
		FNavigationSystemRunMode__EditorWorldPartitionBuildMode = 6,
	};


	// Enum /Script/Engine.ENavigationOptionFlag
	enum ENavigationOptionFlag
	{
		ENavigationOptionFlag__Default = 0,
		ENavigationOptionFlag__Enable = 1,
		ENavigationOptionFlag__Disable = 2,
	};


	// Enum /Script/Engine.ENavDataGatheringModeConfig
	enum ENavDataGatheringModeConfig
	{
		ENavDataGatheringModeConfig__Invalid = 0,
		ENavDataGatheringModeConfig__Instant = 1,
		ENavDataGatheringModeConfig__Lazy = 2,
	};


	// Enum /Script/Engine.ENavigationSortPendingTilesMethod
	enum ENavigationSortPendingTilesMethod
	{
		ENavigationSortPendingTilesMethod__SortWithSeedLocations = 0,
		ENavigationSortPendingTilesMethod__SortByPriority = 1,
		ENavigationSortPendingTilesMethod__None = 2,
	};


	// Enum /Script/Engine.ENavPathEvent
	enum ENavPathEvent
	{
		ENavPathEvent__Cleared = 0,
		ENavPathEvent__NewPath = 1,
		ENavPathEvent__UpdatedDueToGoalMoved = 2,
		ENavPathEvent__UpdatedDueToNavigationChanged = 3,
		ENavPathEvent__Invalidated = 4,
		ENavPathEvent__RePathFailed = 5,
		ENavPathEvent__MetaPathUpdate = 6,
		ENavPathEvent__Custom = 7,
	};


	// Enum /Script/Engine.ENavigationQueryResult
	enum ENavigationQueryResult
	{
		ENavigationQueryResult__Invalid = 0,
		ENavigationQueryResult__Error = 1,
		ENavigationQueryResult__Fail = 2,
		ENavigationQueryResult__Success = 3,
	};


	// Enum /Script/Engine.EAlphaBlendOption
	enum EAlphaBlendOption
	{
		EAlphaBlendOption__Linear = 0,
		EAlphaBlendOption__Cubic = 1,
		EAlphaBlendOption__HermiteCubic = 2,
		EAlphaBlendOption__Sinusoidal = 3,
		EAlphaBlendOption__QuadraticInOut = 4,
		EAlphaBlendOption__CubicInOut = 5,
		EAlphaBlendOption__QuarticInOut = 6,
		EAlphaBlendOption__QuinticInOut = 7,
		EAlphaBlendOption__CircularIn = 8,
		EAlphaBlendOption__CircularOut = 9,
		EAlphaBlendOption__CircularInOut = A,
		EAlphaBlendOption__ExpIn = B,
		EAlphaBlendOption__ExpOut = C,
		EAlphaBlendOption__ExpInOut = D,
		EAlphaBlendOption__Custom = E,
	};


	// Enum /Script/Engine.EAnimGroupRole
	enum EAnimGroupRole
	{
		EAnimGroupRole__CanBeLeader = 0,
		EAnimGroupRole__AlwaysFollower = 1,
		EAnimGroupRole__AlwaysLeader = 2,
		EAnimGroupRole__TransitionLeader = 3,
		EAnimGroupRole__TransitionFollower = 4,
	};


	// Enum /Script/Engine.EAnimSyncGroupScope
	enum EAnimSyncGroupScope
	{
		EAnimSyncGroupScope__Local = 0,
		EAnimSyncGroupScope__Component = 1,
	};


	// Enum /Script/Engine.EAnimSyncMethod
	enum EAnimSyncMethod
	{
		EAnimSyncMethod__DoNotSync = 0,
		EAnimSyncMethod__SyncGroup = 1,
		EAnimSyncMethod__Graph = 2,
	};


	// Enum /Script/Engine.EAnimExecutionContextConversionResult
	enum EAnimExecutionContextConversionResult
	{
		EAnimExecutionContextConversionResult__Succeeded = 1,
		EAnimExecutionContextConversionResult__Failed = 0,
	};


	// Enum /Script/Engine.EMontagePlayReturnType
	enum EMontagePlayReturnType
	{
		EMontagePlayReturnType__MontageLength = 0,
		EMontagePlayReturnType__Duration = 1,
	};


	// Enum /Script/Engine.EDrawDebugItemType
	enum EDrawDebugItemType
	{
		EDrawDebugItemType__DirectionalArrow = 0,
		EDrawDebugItemType__Sphere = 1,
		EDrawDebugItemType__Line = 2,
		EDrawDebugItemType__OnScreenMessage = 3,
		EDrawDebugItemType__CoordinateSystem = 4,
		EDrawDebugItemType__Point = 5,
		EDrawDebugItemType__Circle = 6,
		EDrawDebugItemType__Cone = 7,
		EDrawDebugItemType__InWorldMessage = 8,
		EDrawDebugItemType__Capsule = 9,
	};


	// Enum /Script/Engine.EAnimLinkMethod
	enum EAnimLinkMethod
	{
		EAnimLinkMethod__Absolute = 0,
		EAnimLinkMethod__Relative = 1,
		EAnimLinkMethod__Proportional = 2,
	};


	// Enum /Script/Engine.EAnimNotifyEventType
	enum EAnimNotifyEventType
	{
		EAnimNotifyEventType__Begin = 0,
		EAnimNotifyEventType__End = 1,
	};


	// Enum /Script/Engine.EMontageBlendMode
	enum EMontageBlendMode
	{
		EMontageBlendMode__Standard = 0,
		EMontageBlendMode__Inertialization = 1,
	};


	// Enum /Script/Engine.EMontageSubStepResult
	enum EMontageSubStepResult
	{
		EMontageSubStepResult__Moved = 0,
		EMontageSubStepResult__NotMoved = 1,
		EMontageSubStepResult__InvalidSection = 2,
		EMontageSubStepResult__InvalidMontage = 3,
	};


	// Enum /Script/Engine.EPinHidingMode
	enum EPinHidingMode
	{
		EPinHidingMode__NeverAsPin = 0,
		EPinHidingMode__PinHiddenByDefault = 1,
		EPinHidingMode__PinShownByDefault = 2,
		EPinHidingMode__AlwaysAsPin = 3,
	};


	// Enum /Script/Engine.EAnimNodeDataFlags
	enum EAnimNodeDataFlags
	{
		EAnimNodeDataFlags__None = 0,
		EAnimNodeDataFlags__HasInitialUpdateFunction = 1,
		EAnimNodeDataFlags__HasBecomeRelevantFunction = 2,
		EAnimNodeDataFlags__HasUpdateFunction = 4,
		EAnimNodeDataFlags__AllFunctions = 7,
	};


	// Enum /Script/Engine.EAnimNodeReferenceConversionResult
	enum EAnimNodeReferenceConversionResult
	{
		EAnimNodeReferenceConversionResult__Succeeded = 1,
		EAnimNodeReferenceConversionResult__Failed = 0,
	};


	// Enum /Script/Engine.EInertializationState
	enum EInertializationState
	{
		EInertializationState__Inactive = 0,
		EInertializationState__Pending = 1,
		EInertializationState__Active = 2,
	};


	// Enum /Script/Engine.EInertializationBoneState
	enum EInertializationBoneState
	{
		EInertializationBoneState__Invalid = 0,
		EInertializationBoneState__Valid = 1,
		EInertializationBoneState__Excluded = 2,
	};


	// Enum /Script/Engine.EInertializationSpace
	enum EInertializationSpace
	{
		EInertializationSpace__Default = 0,
		EInertializationSpace__WorldSpace = 1,
		EInertializationSpace__WorldRotation = 2,
	};


	// Enum /Script/Engine.EEvaluatorDataSource
	enum EEvaluatorDataSource
	{
		EEvaluatorDataSource__EDS_SourcePose = 0,
		EEvaluatorDataSource__EDS_DestinationPose = 1,
	};


	// Enum /Script/Engine.EEvaluatorMode
	enum EEvaluatorMode
	{
		EEvaluatorMode__EM_Standard = 0,
		EEvaluatorMode__EM_Freeze = 1,
		EEvaluatorMode__EM_DelayedFreeze = 2,
	};


	// Enum /Script/Engine.EStripAnimDataOnDedicatedServerSettings
	enum EStripAnimDataOnDedicatedServerSettings
	{
		EStripAnimDataOnDedicatedServerSettings__UseProjectSetting = 0,
		EStripAnimDataOnDedicatedServerSettings__StripAnimDataOnDedicatedServer = 1,
		EStripAnimDataOnDedicatedServerSettings__DoNotStripAnimDataOnDedicatedServer = 2,
	};


	// Enum /Script/Engine.ETransitionRequestQueueMode
	enum ETransitionRequestQueueMode
	{
		ETransitionRequestQueueMode__Shared = 0,
		ETransitionRequestQueueMode__Unique = 1,
	};


	// Enum /Script/Engine.ETransitionRequestOverwriteMode
	enum ETransitionRequestOverwriteMode
	{
		ETransitionRequestOverwriteMode__Append = 0,
		ETransitionRequestOverwriteMode__Ignore = 1,
		ETransitionRequestOverwriteMode__Overwrite = 2,
	};


	// Enum /Script/Engine.ETransitionBlendMode
	enum ETransitionBlendMode
	{
		ETransitionBlendMode__TBM_Linear = 0,
		ETransitionBlendMode__TBM_Cubic = 1,
	};


	// Enum /Script/Engine.ETransitionLogicType
	enum ETransitionLogicType
	{
		ETransitionLogicType__TLT_StandardBlend = 0,
		ETransitionLogicType__TLT_Inertialization = 1,
		ETransitionLogicType__TLT_Custom = 2,
	};


	// Enum /Script/Engine.EAnimPropertyAccessCallSite
	enum EAnimPropertyAccessCallSite
	{
		EAnimPropertyAccessCallSite__WorkerThread_Unbatched = 0,
		EAnimPropertyAccessCallSite__WorkerThread_Batched_PreEventGraph = 1,
		EAnimPropertyAccessCallSite__WorkerThread_Batched_PostEventGraph = 2,
		EAnimPropertyAccessCallSite__GameThread_Batched_PreEventGraph = 3,
		EAnimPropertyAccessCallSite__GameThread_Batched_PostEventGraph = 4,
	};


	// Enum /Script/Engine.EBlendProfileMode
	enum EBlendProfileMode
	{
		EBlendProfileMode__TimeFactor = 0,
		EBlendProfileMode__WeightFactor = 1,
		EBlendProfileMode__BlendMask = 2,
	};


	// Enum /Script/Engine.ETransformCurveChannel
	enum ETransformCurveChannel
	{
		ETransformCurveChannel__Position = 0,
		ETransformCurveChannel__Rotation = 1,
		ETransformCurveChannel__Scale = 2,
		ETransformCurveChannel__Invalid = 3,
	};


	// Enum /Script/Engine.EVectorCurveChannel
	enum EVectorCurveChannel
	{
		EVectorCurveChannel__X = 0,
		EVectorCurveChannel__Y = 1,
		EVectorCurveChannel__Z = 2,
		EVectorCurveChannel__Invalid = 3,
	};


	// Enum /Script/Engine.EPostCopyOperation
	enum EPostCopyOperation
	{
		EPostCopyOperation__None = 0,
		EPostCopyOperation__LogicalNegateBool = 1,
	};


	// Enum /Script/Engine.EAnimAlphaInputType
	enum EAnimAlphaInputType
	{
		EAnimAlphaInputType__Float = 0,
		EAnimAlphaInputType__Bool = 1,
		EAnimAlphaInputType__Curve = 2,
	};


	// Enum /Script/Engine.EMirrorRowType
	enum EMirrorRowType
	{
		EMirrorRowType__Bone = 0,
		EMirrorRowType__AnimationNotify = 1,
		EMirrorRowType__Curve = 2,
		EMirrorRowType__SyncMarker = 3,
		EMirrorRowType__Custom = 4,
	};


	// Enum /Script/Engine.EMirrorFindReplaceMethod
	enum EMirrorFindReplaceMethod
	{
		EMirrorFindReplaceMethod__Prefix = 0,
		EMirrorFindReplaceMethod__Suffix = 1,
		EMirrorFindReplaceMethod__RegularExpression = 2,
	};


	// Enum /Script/Engine.ESkeletalMeshVertexAttributeDataType
	enum ESkeletalMeshVertexAttributeDataType
	{
		ESkeletalMeshVertexAttributeDataType__Float = 0,
		ESkeletalMeshVertexAttributeDataType__HalfFloat = 1,
		ESkeletalMeshVertexAttributeDataType__NUInt8 = 2,
	};


	// Enum /Script/Engine.EBoneTranslationRetargetingMode
	enum EBoneTranslationRetargetingMode
	{
		EBoneTranslationRetargetingMode__Animation = 0,
		EBoneTranslationRetargetingMode__Skeleton = 1,
		EBoneTranslationRetargetingMode__AnimationScaled = 2,
		EBoneTranslationRetargetingMode__AnimationRelative = 3,
		EBoneTranslationRetargetingMode__OrientAndScale = 4,
	};


	// Enum /Script/Engine.ETimeStretchCurveMapping
	enum ETimeStretchCurveMapping
	{
		ETimeStretchCurveMapping__T_Original = 0,
		ETimeStretchCurveMapping__T_TargetMin = 1,
		ETimeStretchCurveMapping__T_TargetMax = 2,
	};


	// Enum /Script/Engine.EPreviewAnimationBlueprintApplicationMethod
	enum EPreviewAnimationBlueprintApplicationMethod
	{
		EPreviewAnimationBlueprintApplicationMethod__LinkedLayers = 0,
		EPreviewAnimationBlueprintApplicationMethod__LinkedAnimGraph = 1,
	};


	// Enum /Script/Engine.EPrimaryAssetCookRule
	enum EPrimaryAssetCookRule
	{
		EPrimaryAssetCookRule__Unknown = 0,
		EPrimaryAssetCookRule__NeverCook = 1,
		EPrimaryAssetCookRule__ProductionNeverCook = 2,
		EPrimaryAssetCookRule__DevelopmentCook = 2,
		EPrimaryAssetCookRule__DevelopmentAlwaysProductionNeverCook = 3,
		EPrimaryAssetCookRule__DevelopmentAlwaysCook = 3,
		EPrimaryAssetCookRule__DevelopmentAlwaysProductionUnknownCook = 4,
		EPrimaryAssetCookRule__AlwaysCook = 5,
	};


	// Enum /Script/Engine.EAttenuationDistanceModel
	enum EAttenuationDistanceModel
	{
		EAttenuationDistanceModel__Linear = 0,
		EAttenuationDistanceModel__Logarithmic = 1,
		EAttenuationDistanceModel__Inverse = 2,
		EAttenuationDistanceModel__LogReverse = 3,
		EAttenuationDistanceModel__NaturalSound = 4,
		EAttenuationDistanceModel__Custom = 5,
	};


	// Enum /Script/Engine.EAttenuationShape
	enum EAttenuationShape
	{
		EAttenuationShape__Sphere = 0,
		EAttenuationShape__Capsule = 1,
		EAttenuationShape__Box = 2,
		EAttenuationShape__Cone = 3,
	};


	// Enum /Script/Engine.ENaturalSoundFalloffMode
	enum ENaturalSoundFalloffMode
	{
		ENaturalSoundFalloffMode__Continues = 0,
		ENaturalSoundFalloffMode__Silent = 1,
		ENaturalSoundFalloffMode__Hold = 2,
	};


	// Enum /Script/Engine.EAudioBusChannels
	enum EAudioBusChannels
	{
		EAudioBusChannels__Mono = 0,
		EAudioBusChannels__Stereo = 1,
		EAudioBusChannels__Quad = 3,
		EAudioBusChannels__FivePointOne = 5,
		EAudioBusChannels__SevenPointOne = 7,
		EAudioBusChannels__MaxChannelCount = 8,
	};


	// Enum /Script/Engine.EVoiceSampleRate
	enum EVoiceSampleRate
	{
		EVoiceSampleRate__Low16000Hz = 3E80,
		EVoiceSampleRate__Normal24000Hz = 5DC0,
	};


	// Enum /Script/Engine.EPanningMethod
	enum EPanningMethod
	{
		EPanningMethod__Linear = 0,
		EPanningMethod__EqualPower = 1,
	};


	// Enum /Script/Engine.EMonoChannelUpmixMethod
	enum EMonoChannelUpmixMethod
	{
		EMonoChannelUpmixMethod__Linear = 0,
		EMonoChannelUpmixMethod__EqualPower = 1,
		EMonoChannelUpmixMethod__FullVolume = 2,
	};


	// Enum /Script/Engine.EDefaultAudioCompressionType
	enum EDefaultAudioCompressionType
	{
		EDefaultAudioCompressionType__BinkAudio = 0,
		EDefaultAudioCompressionType__ADPCM = 1,
		EDefaultAudioCompressionType__PCM = 2,
		EDefaultAudioCompressionType__Opus = 3,
		EDefaultAudioCompressionType__PlatformSpecific = 4,
		EDefaultAudioCompressionType__RADAudio = 5,
	};


	// Enum /Script/Engine.EAudioVolumeLocationState
	enum EAudioVolumeLocationState
	{
		EAudioVolumeLocationState__InsideTheVolume = 0,
		EAudioVolumeLocationState__OutsideTheVolume = 1,
	};


	// Enum /Script/Engine.EStructUtilsResult
	enum EStructUtilsResult
	{
		EStructUtilsResult__Valid = 0,
		EStructUtilsResult__NotValid = 1,
	};


	// Enum /Script/Engine.EInterfaceValidResult
	enum EInterfaceValidResult
	{
		EInterfaceValidResult__Valid = 0,
		EInterfaceValidResult__Invalid = 1,
	};


	// Enum /Script/Engine.ECameraShakePatternUpdateResultFlags
	enum ECameraShakePatternUpdateResultFlags
	{
		ECameraShakePatternUpdateResultFlags__ApplyAsAbsolute = 1,
		ECameraShakePatternUpdateResultFlags__SkipAutoScale = 2,
		ECameraShakePatternUpdateResultFlags__SkipAutoPlaySpace = 4,
		ECameraShakePatternUpdateResultFlags__Default = 0,
	};


	// Enum /Script/Engine.ECameraShakeDurationType
	enum ECameraShakeDurationType
	{
		ECameraShakeDurationType__Fixed = 0,
		ECameraShakeDurationType__Infinite = 1,
		ECameraShakeDurationType__Custom = 2,
	};


	// Enum /Script/Engine.ECameraShakeAttenuation
	enum ECameraShakeAttenuation
	{
		ECameraShakeAttenuation__Linear = 0,
		ECameraShakeAttenuation__Quadratic = 1,
	};


	// Enum /Script/Engine.ECameraAlphaBlendMode
	enum ECameraAlphaBlendMode
	{
		ECameraAlphaBlendMode__CABM_Linear = 0,
		ECameraAlphaBlendMode__CABM_Cubic = 1,
	};


	// Enum /Script/Engine.EAudioFaderCurve
	enum EAudioFaderCurve
	{
		EAudioFaderCurve__Linear = 0,
		EAudioFaderCurve__Logarithmic = 1,
		EAudioFaderCurve__SCurve = 2,
		EAudioFaderCurve__Sin = 3,
		EAudioFaderCurve__Count = 4,
	};


	// Enum /Script/Engine.EControllerAnalogStick
	enum EControllerAnalogStick
	{
		EControllerAnalogStick__CAS_LeftStick = 0,
		EControllerAnalogStick__CAS_RightStick = 1,
	};


	// Enum /Script/Engine.ESyncOption
	enum ESyncOption
	{
		ESyncOption__Drive = 0,
		ESyncOption__Passive = 1,
		ESyncOption__Disabled = 2,
	};


	// Enum /Script/Engine.EPhysicsStateAction
	enum EPhysicsStateAction
	{
		EPhysicsStateAction__AddForce = 0,
		EPhysicsStateAction__AddTorque = 1,
		EPhysicsStateAction__AddForceAtPosition = 2,
		EPhysicsStateAction__AddLinearVelocity = 3,
		EPhysicsStateAction__AddAngularVelocity = 4,
		EPhysicsStateAction__AddVelocityAtPosition = 5,
		EPhysicsStateAction__AddLinearImpulse = 6,
		EPhysicsStateAction__AddAngularImpulse = 7,
		EPhysicsStateAction__AddImpulseAtPosition = 8,
		EPhysicsStateAction__AddAcceleration = 9,
		EPhysicsStateAction__NumActions = A,
	};


	// Enum /Script/Engine.EReflectionSourceType
	enum EReflectionSourceType
	{
		EReflectionSourceType__CapturedScene = 0,
		EReflectionSourceType__SpecifiedCubemap = 1,
	};


	// Enum /Script/Engine.ERuntimeVirtualTextureMaterialQuality
	enum ERuntimeVirtualTextureMaterialQuality
	{
		ERuntimeVirtualTextureMaterialQuality__Low = 0,
		ERuntimeVirtualTextureMaterialQuality__Medium = 1,
		ERuntimeVirtualTextureMaterialQuality__High = 2,
		ERuntimeVirtualTextureMaterialQuality__Epic = 3,
	};


	// Enum /Script/Engine.ESceneCapturePrimitiveRenderMode
	enum ESceneCapturePrimitiveRenderMode
	{
		ESceneCapturePrimitiveRenderMode__PRM_LegacySceneCapture = 0,
		ESceneCapturePrimitiveRenderMode__PRM_RenderScenePrimitives = 1,
		ESceneCapturePrimitiveRenderMode__PRM_UseShowOnlyList = 2,
	};


	// Enum /Script/Engine.ECustomBoneAttributeLookup
	enum ECustomBoneAttributeLookup
	{
		ECustomBoneAttributeLookup__BoneOnly = 0,
		ECustomBoneAttributeLookup__ImmediateParent = 1,
		ECustomBoneAttributeLookup__ParentHierarchy = 2,
	};


	// Enum /Script/Engine.EKinematicBonesUpdateToPhysics
	enum EKinematicBonesUpdateToPhysics
	{
		EKinematicBonesUpdateToPhysics__SkipSimulatingBones = 0,
		EKinematicBonesUpdateToPhysics__SkipAllBones = 1,
	};


	// Enum /Script/Engine.EAnimationMode
	enum EAnimationMode
	{
		EAnimationMode__AnimationBlueprint = 0,
		EAnimationMode__AnimationSingleNode = 1,
		EAnimationMode__AnimationCustomMode = 2,
	};


	// Enum /Script/Engine.EPhysicsTransformUpdateMode
	enum EPhysicsTransformUpdateMode
	{
		EPhysicsTransformUpdateMode__SimulationUpatesComponentTransform = 0,
		EPhysicsTransformUpdateMode__ComponentTransformIsKinematic = 1,
	};


	// Enum /Script/Engine.ESkyAtmosphereTransformMode
	enum ESkyAtmosphereTransformMode
	{
		ESkyAtmosphereTransformMode__PlanetTopAtAbsoluteWorldOrigin = 0,
		ESkyAtmosphereTransformMode__PlanetTopAtComponentTransform = 1,
		ESkyAtmosphereTransformMode__PlanetCenterAtComponentTransform = 2,
	};


	// Enum /Script/Engine.ESplinePointType
	enum ESplinePointType
	{
		ESplinePointType__Linear = 0,
		ESplinePointType__Curve = 1,
		ESplinePointType__Constant = 2,
		ESplinePointType__CurveClamped = 3,
		ESplinePointType__CurveCustomTangent = 4,
	};


	// Enum /Script/Engine.ESplineCoordinateSpace
	enum ESplineCoordinateSpace
	{
		ESplineCoordinateSpace__Local = 0,
		ESplineCoordinateSpace__World = 1,
	};


	// Enum /Script/Engine.ESplineMeshAxis
	enum ESplineMeshAxis
	{
		ESplineMeshAxis__X = 0,
		ESplineMeshAxis__Y = 1,
		ESplineMeshAxis__Z = 2,
	};


	// Enum /Script/Engine.EVolumetricCloudTracingMaxDistanceMode
	enum EVolumetricCloudTracingMaxDistanceMode
	{
		EVolumetricCloudTracingMaxDistanceMode__DistanceFromCloudLayerEntryPoint = 0,
		EVolumetricCloudTracingMaxDistanceMode__DistanceFromPointOfView = 1,
	};


	// Enum /Script/Engine.ECurveTableMode
	enum ECurveTableMode
	{
		ECurveTableMode__Empty = 0,
		ECurveTableMode__SimpleCurves = 1,
		ECurveTableMode__RichCurves = 2,
	};


	// Enum /Script/Engine.FDataDrivenCVarType
	enum FDataDrivenCVarType
	{
		FDataDrivenCVarType__CVarFloat = 0,
		FDataDrivenCVarType__CVarInt = 1,
		FDataDrivenCVarType__CVarBool = 2,
	};


	// Enum /Script/Engine.EEvaluateCurveTableResult
	enum EEvaluateCurveTableResult
	{
		EEvaluateCurveTableResult__RowFound = 0,
		EEvaluateCurveTableResult__RowNotFound = 1,
	};


	// Enum /Script/Engine.EReporterLineStyle
	enum EReporterLineStyle
	{
		EReporterLineStyle__Line = 0,
		EReporterLineStyle__Dash = 1,
	};


	// Enum /Script/Engine.EGraphAxisStyle
	enum EGraphAxisStyle
	{
		EGraphAxisStyle__Lines = 0,
		EGraphAxisStyle__Notches = 1,
		EGraphAxisStyle__Grid = 2,
	};


	// Enum /Script/Engine.EGraphDataStyle
	enum EGraphDataStyle
	{
		EGraphDataStyle__Lines = 0,
		EGraphDataStyle__Filled = 1,
	};


	// Enum /Script/Engine.ELegendPosition
	enum ELegendPosition
	{
		ELegendPosition__Outside = 0,
		ELegendPosition__Inside = 1,
	};


	// Enum /Script/Engine.EGrammaticalGender
	enum EGrammaticalGender
	{
		EGrammaticalGender__Neuter = 0,
		EGrammaticalGender__Masculine = 1,
		EGrammaticalGender__Feminine = 2,
		EGrammaticalGender__Mixed = 3,
	};


	// Enum /Script/Engine.EGrammaticalNumber
	enum EGrammaticalNumber
	{
		EGrammaticalNumber__Singular = 0,
		EGrammaticalNumber__Plural = 1,
	};


	// Enum /Script/Engine.ETypedElementWorldType
	enum ETypedElementWorldType
	{
		ETypedElementWorldType__Game = 0,
		ETypedElementWorldType__Editor = 1,
	};


	// Enum /Script/Engine.ECustomTimeStepSynchronizationState
	enum ECustomTimeStepSynchronizationState
	{
		ECustomTimeStepSynchronizationState__Closed = 0,
		ECustomTimeStepSynchronizationState__Error = 1,
		ECustomTimeStepSynchronizationState__Synchronized = 2,
		ECustomTimeStepSynchronizationState__Synchronizing = 3,
	};


	// Enum /Script/Engine.EVectorQuantization
	enum EVectorQuantization
	{
		EVectorQuantization__RoundWholeNumber = 0,
		EVectorQuantization__RoundOneDecimal = 1,
		EVectorQuantization__RoundTwoDecimals = 2,
	};


	// Enum /Script/Engine.ERotatorQuantization
	enum ERotatorQuantization
	{
		ERotatorQuantization__ByteComponents = 0,
		ERotatorQuantization__ShortComponents = 1,
	};


	// Enum /Script/Engine.ETimecodeProviderSynchronizationState
	enum ETimecodeProviderSynchronizationState
	{
		ETimecodeProviderSynchronizationState__Closed = 0,
		ETimecodeProviderSynchronizationState__Error = 1,
		ETimecodeProviderSynchronizationState__Synchronized = 2,
		ETimecodeProviderSynchronizationState__Synchronizing = 3,
	};


	// Enum /Script/Engine.EFontCacheType
	enum EFontCacheType
	{
		EFontCacheType__Offline = 0,
		EFontCacheType__Runtime = 1,
	};


	// Enum /Script/Engine.ERootMotionAccumulateMode
	enum ERootMotionAccumulateMode
	{
		ERootMotionAccumulateMode__Override = 0,
		ERootMotionAccumulateMode__Additive = 1,
	};


	// Enum /Script/Engine.ERootMotionSourceStatusFlags
	enum ERootMotionSourceStatusFlags
	{
		ERootMotionSourceStatusFlags__Prepared = 1,
		ERootMotionSourceStatusFlags__Finished = 2,
		ERootMotionSourceStatusFlags__MarkedForRemoval = 4,
	};


	// Enum /Script/Engine.ERootMotionSourceSettingsFlags
	enum ERootMotionSourceSettingsFlags
	{
		ERootMotionSourceSettingsFlags__UseSensitiveLiftoffCheck = 1,
		ERootMotionSourceSettingsFlags__DisablePartialEndTick = 2,
		ERootMotionSourceSettingsFlags__IgnoreZAccumulate = 4,
	};


	// Enum /Script/Engine.ERootMotionFinishVelocityMode
	enum ERootMotionFinishVelocityMode
	{
		ERootMotionFinishVelocityMode__MaintainLastRootMotionVelocity = 0,
		ERootMotionFinishVelocityMode__SetVelocity = 1,
		ERootMotionFinishVelocityMode__ClampVelocity = 2,
	};


	// Enum /Script/Engine.EWindowMode
	enum EWindowMode
	{
		EWindowMode__Fullscreen = 0,
		EWindowMode__WindowedFullscreen = 1,
		EWindowMode__Windowed = 2,
	};


	// Enum /Script/Engine.EArraySortOrder
	enum EArraySortOrder
	{
		EArraySortOrder__Ascending = 0,
		EArraySortOrder__Descending = 1,
	};


	// Enum /Script/Engine.ESlateGesture
	enum ESlateGesture
	{
		ESlateGesture__None = 0,
		ESlateGesture__Scroll = 1,
		ESlateGesture__Magnify = 2,
		ESlateGesture__Swipe = 3,
		ESlateGesture__Rotate = 4,
		ESlateGesture__LongPress = 5,
	};


	// Enum /Script/Engine.EMIDCreationFlags
	enum EMIDCreationFlags
	{
		EMIDCreationFlags__None = 0,
		EMIDCreationFlags__Transient = 1,
	};


	// Enum /Script/Engine.EEasingFunc
	enum EEasingFunc
	{
		EEasingFunc__Linear = 0,
		EEasingFunc__Step = 1,
		EEasingFunc__SinusoidalIn = 2,
		EEasingFunc__SinusoidalOut = 3,
		EEasingFunc__SinusoidalInOut = 4,
		EEasingFunc__EaseIn = 5,
		EEasingFunc__EaseOut = 6,
		EEasingFunc__EaseInOut = 7,
		EEasingFunc__ExpoIn = 8,
		EEasingFunc__ExpoOut = 9,
		EEasingFunc__ExpoInOut = A,
		EEasingFunc__CircularIn = B,
		EEasingFunc__CircularOut = C,
		EEasingFunc__CircularInOut = D,
	};


	// Enum /Script/Engine.ELerpInterpolationMode
	enum ELerpInterpolationMode
	{
		ELerpInterpolationMode__QuatInterp = 0,
		ELerpInterpolationMode__EulerInterp = 1,
		ELerpInterpolationMode__DualQuatInterp = 2,
	};


	// Enum /Script/Engine.EMatrixColumns
	enum EMatrixColumns
	{
		EMatrixColumns__First = 0,
		EMatrixColumns__Second = 1,
		EMatrixColumns__Third = 2,
		EMatrixColumns__Fourth = 3,
	};


	// Enum /Script/Engine.EImportanceWeight
	enum EImportanceWeight
	{
		EImportanceWeight__Luminance = 0,
		EImportanceWeight__Red = 1,
		EImportanceWeight__Green = 2,
		EImportanceWeight__Blue = 3,
		EImportanceWeight__Alpha = 4,
	};


	// Enum /Script/Engine.EDecalBlendMode
	enum EDecalBlendMode
	{
		DBM_Translucent = 0,
		DBM_Stain = 1,
		DBM_Normal = 2,
		DBM_Emissive = 3,
		DBM_DBuffer_ColorNormalRoughness = 4,
		DBM_DBuffer_Color = 5,
		DBM_DBuffer_ColorNormal = 6,
		DBM_DBuffer_ColorRoughness = 7,
		DBM_DBuffer_Normal = 8,
		DBM_DBuffer_NormalRoughness = 9,
		DBM_DBuffer_Roughness = A,
		DBM_DBuffer_Emissive = B,
		DBM_DBuffer_AlphaComposite = C,
		DBM_DBuffer_EmissiveAlphaComposite = D,
		DBM_Volumetric_DistanceFunction = E,
		DBM_AlphaComposite = F,
		DBM_AmbientOcclusion = 10,
	};


	// Enum /Script/Engine.EMaterialDecalResponse
	enum EMaterialDecalResponse
	{
		MDR_None = 0,
		MDR_ColorNormalRoughness = 1,
		MDR_Color = 2,
		MDR_ColorNormal = 3,
		MDR_ColorRoughness = 4,
		MDR_Normal = 5,
		MDR_NormalRoughness = 6,
		MDR_Roughness = 7,
	};


	// Enum /Script/Engine.EMaterialTranslucencyPass
	enum EMaterialTranslucencyPass
	{
		MTP_BeforeDOF = 0,
		MTP_AfterDOF = 1,
		MTP_AfterMotionBlur = 2,
	};


	// Enum /Script/Engine.EVertexPaintAxis
	enum EVertexPaintAxis
	{
		EVertexPaintAxis__X = 0,
		EVertexPaintAxis__Y = 1,
		EVertexPaintAxis__Z = 2,
	};


	// Enum /Script/Engine.ENetworkMetricEnableMode
	enum ENetworkMetricEnableMode
	{
		ENetworkMetricEnableMode__EnableForAllReplication = 0,
		ENetworkMetricEnableMode__EnableForIrisOnly = 1,
		ENetworkMetricEnableMode__EnableForNonIrisOnly = 2,
	};


	// Enum /Script/Engine.EReplayResult
	enum EReplayResult
	{
		EReplayResult__Success = 0,
		EReplayResult__ReplayNotFound = 1,
		EReplayResult__Corrupt = 2,
		EReplayResult__UnsupportedCheckpoint = 3,
		EReplayResult__GameSpecific = 4,
		EReplayResult__InitConnect = 5,
		EReplayResult__LoadMap = 6,
		EReplayResult__Serialization = 7,
		EReplayResult__StreamerError = 8,
		EReplayResult__ConnectionClosed = 9,
		EReplayResult__MissingArchive = A,
		EReplayResult__Unknown = B,
	};


	// Enum /Script/Engine.EPSCPoolMethod
	enum EPSCPoolMethod
	{
		EPSCPoolMethod__None = 0,
		EPSCPoolMethod__AutoRelease = 1,
		EPSCPoolMethod__ManualRelease = 2,
		EPSCPoolMethod__ManualRelease_OnComplete = 3,
		EPSCPoolMethod__FreeInPool = 4,
	};


	// Enum /Script/Engine.EPerQualityLevels
	enum EPerQualityLevels
	{
		EPerQualityLevels__Low = 0,
		EPerQualityLevels__Medium = 1,
		EPerQualityLevels__High = 2,
		EPerQualityLevels__Epic = 3,
		EPerQualityLevels__Cinematic = 4,
		EPerQualityLevels__Num = 5,
	};


	// Enum /Script/Engine.EAngularDriveMode
	enum EAngularDriveMode
	{
		EAngularDriveMode__SLERP = 0,
		EAngularDriveMode__TwistAndSwing = 1,
	};


	// Enum /Script/Engine.EConstraintTransformComponentFlags
	enum EConstraintTransformComponentFlags
	{
		EConstraintTransformComponentFlags__None = 0,
		EConstraintTransformComponentFlags__ChildPosition = 1,
		EConstraintTransformComponentFlags__ChildRotation = 2,
		EConstraintTransformComponentFlags__ParentPosition = 4,
		EConstraintTransformComponentFlags__ParentRotation = 8,
		EConstraintTransformComponentFlags__AllChild = 3,
		EConstraintTransformComponentFlags__AllParent = C,
		EConstraintTransformComponentFlags__AllPosition = 5,
		EConstraintTransformComponentFlags__AllRotation = A,
		EConstraintTransformComponentFlags__All = F,
	};


	// Enum /Script/Engine.EPhysicsAssetSolverType
	enum EPhysicsAssetSolverType
	{
		EPhysicsAssetSolverType__RBAN = 0,
		EPhysicsAssetSolverType__World = 1,
	};


	// Enum /Script/Engine.ESettingsDOF
	enum ESettingsDOF
	{
		ESettingsDOF__Full3D = 0,
		ESettingsDOF__YZPlane = 1,
		ESettingsDOF__XZPlane = 2,
		ESettingsDOF__XYPlane = 3,
	};


	// Enum /Script/Engine.ESettingsLockedAxis
	enum ESettingsLockedAxis
	{
		ESettingsLockedAxis__None = 0,
		ESettingsLockedAxis__X = 1,
		ESettingsLockedAxis__Y = 2,
		ESettingsLockedAxis__Z = 3,
		ESettingsLockedAxis__Invalid = 4,
	};


	// Enum /Script/Engine.EDynamicForceFeedbackAction
	enum EDynamicForceFeedbackAction
	{
		EDynamicForceFeedbackAction__Start = 0,
		EDynamicForceFeedbackAction__Update = 1,
		EDynamicForceFeedbackAction__Stop = 2,
	};


	// Enum /Script/Engine.EVoiceBlockReasons
	enum EVoiceBlockReasons
	{
		EVoiceBlockReasons__None = 0,
		EVoiceBlockReasons__Muted = 1,
		EVoiceBlockReasons__Gameplay = 2,
		EVoiceBlockReasons__Blocked = 4,
		EVoiceBlockReasons__BlockedBy = 8,
	};


	// Enum /Script/Engine.EPropertyAccessCopyBatch
	enum EPropertyAccessCopyBatch
	{
		EPropertyAccessCopyBatch__InternalUnbatched = 0,
		EPropertyAccessCopyBatch__ExternalUnbatched = 1,
		EPropertyAccessCopyBatch__InternalBatched = 2,
		EPropertyAccessCopyBatch__ExternalBatched = 3,
		EPropertyAccessCopyBatch__Count = 4,
	};


	// Enum /Script/Engine.EPropertyAccessIndirectionType
	enum EPropertyAccessIndirectionType
	{
		EPropertyAccessIndirectionType__Offset = 0,
		EPropertyAccessIndirectionType__Object = 1,
		EPropertyAccessIndirectionType__Array = 2,
		EPropertyAccessIndirectionType__ScriptFunction = 3,
		EPropertyAccessIndirectionType__NativeFunction = 4,
	};


	// Enum /Script/Engine.EPropertyAccessObjectType
	enum EPropertyAccessObjectType
	{
		EPropertyAccessObjectType__None = 0,
		EPropertyAccessObjectType__Object = 1,
		EPropertyAccessObjectType__WeakObject = 2,
		EPropertyAccessObjectType__SoftObject = 3,
	};


	// Enum /Script/Engine.EPropertyAccessCopyType
	enum EPropertyAccessCopyType
	{
		EPropertyAccessCopyType__None = 0,
		EPropertyAccessCopyType__Plain = 1,
		EPropertyAccessCopyType__Complex = 2,
		EPropertyAccessCopyType__Bool = 3,
		EPropertyAccessCopyType__Struct = 4,
		EPropertyAccessCopyType__Object = 5,
		EPropertyAccessCopyType__Name = 6,
		EPropertyAccessCopyType__Array = 7,
		EPropertyAccessCopyType__PromoteBoolToByte = 8,
		EPropertyAccessCopyType__PromoteBoolToInt32 = 9,
		EPropertyAccessCopyType__PromoteBoolToInt64 = A,
		EPropertyAccessCopyType__PromoteBoolToFloat = B,
		EPropertyAccessCopyType__PromoteBoolToDouble = C,
		EPropertyAccessCopyType__PromoteByteToInt32 = D,
		EPropertyAccessCopyType__PromoteByteToInt64 = E,
		EPropertyAccessCopyType__PromoteByteToFloat = F,
		EPropertyAccessCopyType__PromoteByteToDouble = 10,
		EPropertyAccessCopyType__PromoteInt32ToInt64 = 11,
		EPropertyAccessCopyType__PromoteInt32ToFloat = 12,
		EPropertyAccessCopyType__PromoteInt32ToDouble = 13,
		EPropertyAccessCopyType__PromoteFloatToDouble = 14,
		EPropertyAccessCopyType__DemoteDoubleToFloat = 15,
		EPropertyAccessCopyType__PromoteArrayFloatToDouble = 16,
		EPropertyAccessCopyType__DemoteArrayDoubleToFloat = 17,
		EPropertyAccessCopyType__PromoteMapValueFloatToDouble = 18,
		EPropertyAccessCopyType__DemoteMapValueDoubleToFloat = 19,
	};


	// Enum /Script/Engine.EClearSceneOptions
	enum EClearSceneOptions
	{
		EClearSceneOptions__NoClear = 0,
		EClearSceneOptions__HardwareClear = 1,
		EClearSceneOptions__QuadAtMaxZ = 2,
	};


	// Enum /Script/Engine.ECompositingSampleCount
	enum ECompositingSampleCount
	{
		ECompositingSampleCount__One = 1,
		ECompositingSampleCount__Two = 2,
		ECompositingSampleCount__Four = 4,
		ECompositingSampleCount__Eight = 8,
	};


	// Enum /Script/Engine.ECustomDepthStencil
	enum ECustomDepthStencil
	{
		ECustomDepthStencil__Disabled = 0,
		ECustomDepthStencil__Enabled = 1,
		ECustomDepthStencil__EnabledOnDemand = 2,
		ECustomDepthStencil__EnabledWithStencil = 3,
	};


	// Enum /Script/Engine.EEarlyZPass
	enum EEarlyZPass
	{
		EEarlyZPass__None = 0,
		EEarlyZPass__OpaqueOnly = 1,
		EEarlyZPass__OpaqueAndMasked = 2,
		EEarlyZPass__Auto = 3,
	};


	// Enum /Script/Engine.EVelocityOutputPass
	enum EVelocityOutputPass
	{
		EVelocityOutputPass__DepthPass = 0,
		EVelocityOutputPass__BasePass = 1,
		EVelocityOutputPass__AfterBasePass = 2,
	};


	// Enum /Script/Engine.EVertexDeformationOutputsVelocity
	enum EVertexDeformationOutputsVelocity
	{
		EVertexDeformationOutputsVelocity__Off = 0,
		EVertexDeformationOutputsVelocity__On = 1,
		EVertexDeformationOutputsVelocity__Auto = 2,
	};


	// Enum /Script/Engine.EAlphaChannelMode
	enum EAlphaChannelMode
	{
		EAlphaChannelMode__Disabled = 0,
		EAlphaChannelMode__LinearColorSpaceOnly = 1,
		EAlphaChannelMode__AllowThroughTonemapper = 2,
	};


	// Enum /Script/Engine.EAutoExposureMethodUI
	enum EAutoExposureMethodUI
	{
		EAutoExposureMethodUI__AEM_Histogram = 0,
		EAutoExposureMethodUI__AEM_Basic = 1,
		EAutoExposureMethodUI__AEM_Manual = 2,
	};


	// Enum /Script/Engine.EDefaultBackBufferPixelFormat
	enum EDefaultBackBufferPixelFormat
	{
		EDefaultBackBufferPixelFormat__DBBPF_B8G8R8A8 = 0,
		EDefaultBackBufferPixelFormat__DBBPF_A16B16G16R16_DEPRECATED = 1,
		EDefaultBackBufferPixelFormat__DBBPF_FloatRGB_DEPRECATED = 2,
		EDefaultBackBufferPixelFormat__DBBPF_FloatRGBA = 3,
		EDefaultBackBufferPixelFormat__DBBPF_A2B10G10R10 = 4,
	};


	// Enum /Script/Engine.EFixedFoveationLevels
	enum EFixedFoveationLevels
	{
		EFixedFoveationLevels__Disabled = 0,
		EFixedFoveationLevels__Low = 1,
		EFixedFoveationLevels__Medium = 2,
		EFixedFoveationLevels__High = 3,
		EFixedFoveationLevels__HighTop = 4,
	};


	// Enum /Script/Engine.EMobileAntiAliasingMethod
	enum EMobileAntiAliasingMethod
	{
		EMobileAntiAliasingMethod__None = 0,
		EMobileAntiAliasingMethod__FXAA = 1,
		EMobileAntiAliasingMethod__TemporalAA = 2,
		EMobileAntiAliasingMethod__MSAA = 3,
	};


	// Enum /Script/Engine.EMobileFloatPrecisionMode
	enum EMobileFloatPrecisionMode
	{
		EMobileFloatPrecisionMode__Half = 0,
		EMobileFloatPrecisionMode__Full_MaterialExpressionOnly = 1,
		EMobileFloatPrecisionMode__Full = 2,
	};


	// Enum /Script/Engine.EMobileShadingPath
	enum EMobileShadingPath
	{
		EMobileShadingPath__Forward = 0,
		EMobileShadingPath__Deferred = 1,
	};


	// Enum /Script/Engine.ELightFunctionAtlasPixelFormat
	enum ELightFunctionAtlasPixelFormat
	{
		ELightFunctionAtlasPixelFormat__LFAPF_R8 = 0,
		ELightFunctionAtlasPixelFormat__LFAPF_R8G8B8 = 1,
	};


	// Enum /Script/Engine.EShaderCompressionFormat
	enum EShaderCompressionFormat
	{
		EShaderCompressionFormat__None = 0,
		EShaderCompressionFormat__LZ4 = 1,
		EShaderCompressionFormat__Oodle = 2,
		EShaderCompressionFormat__Zlib = 3,
	};


	// Enum /Script/Engine.ELumenSoftwareTracingMode
	enum ELumenSoftwareTracingMode
	{
		ELumenSoftwareTracingMode__DetailTracing = 1,
		ELumenSoftwareTracingMode__GlobalTracing = 0,
	};


	// Enum /Script/Engine.ELumenRayLightingMode
	enum ELumenRayLightingMode
	{
		ELumenRayLightingMode__SurfaceCache = 0,
		ELumenRayLightingMode__HitLightingForReflections = 2,
		ELumenRayLightingMode__HitLighting = 1,
	};


	// Enum /Script/Engine.EWorkingColorSpace
	enum EWorkingColorSpace
	{
		EWorkingColorSpace__sRGB = 1,
		EWorkingColorSpace__Rec2020 = 2,
		EWorkingColorSpace__ACESAP0 = 3,
		EWorkingColorSpace__ACESAP1 = 4,
		EWorkingColorSpace__P3DCI = 5,
		EWorkingColorSpace__P3D65 = 6,
		EWorkingColorSpace__Custom = 7,
	};


	// Enum /Script/Engine.ENeuralProfileFormat
	enum ENeuralProfileFormat
	{
		ENeuralProfileFormat__Type32 = 0,
		ENeuralProfileFormat__Type16 = 1,
	};


	// Enum /Script/Engine.ENeuralModelTileType
	enum ENeuralModelTileType
	{
		ENeuralModelTileType__OneByOne = 0,
		ENeuralModelTileType__TwoByTwo = 1,
		ENeuralModelTileType__FourByFour = 2,
		ENeuralModelTileType__EightByEight = 3,
		ENeuralModelTileType__Auto = 4,
	};


	// Enum /Script/Engine.ETileOverlapResolveType
	enum ETileOverlapResolveType
	{
		ETileOverlapResolveType__Ignore = 0,
		ETileOverlapResolveType__Feathering = 1,
	};


	// Enum /Script/Engine.ENeuralProfileRuntimeType
	enum ENeuralProfileRuntimeType
	{
		ENeuralProfileRuntimeType__NNERuntimeORTDml = 0,
		ENeuralProfileRuntimeType__NNERuntimeRDGHlsl = 1,
	};


	// Enum /Script/Engine.ESpecularProfileFormat
	enum ESpecularProfileFormat
	{
		ESpecularProfileFormat__ViewLightVector = 0,
		ESpecularProfileFormat__HalfVector = 1,
	};


	// Enum /Script/Engine.ESkeletalMeshAsyncProperties
	enum ESkeletalMeshAsyncProperties
	{
		ESkeletalMeshAsyncProperties__None = 0,
		ESkeletalMeshAsyncProperties__Materials = 1,
		ESkeletalMeshAsyncProperties__Skeleton = 2,
		ESkeletalMeshAsyncProperties__RefSkeleton = 4,
		ESkeletalMeshAsyncProperties__RetargetBasePose = 8,
		ESkeletalMeshAsyncProperties__RefBasesInvMatrix = 10,
		ESkeletalMeshAsyncProperties__MeshClothingAssets = 20,
		ESkeletalMeshAsyncProperties__SourceModels = 40,
		ESkeletalMeshAsyncProperties__HasActiveClothingAssets = 80,
		ESkeletalMeshAsyncProperties__LODSettings = 100,
		ESkeletalMeshAsyncProperties__HasVertexColors = 200,
		ESkeletalMeshAsyncProperties__VertexColorGuid = 400,
		ESkeletalMeshAsyncProperties__MorphTargets = 800,
		ESkeletalMeshAsyncProperties__SkeletalMeshRenderData = 1000,
		ESkeletalMeshAsyncProperties__MeshEditorDataObject = 2000,
		ESkeletalMeshAsyncProperties__NeverStream = 4000,
		ESkeletalMeshAsyncProperties__OverrideLODStreamingSettings = 8000,
		ESkeletalMeshAsyncProperties__SupportLODStreaming = 10000,
		ESkeletalMeshAsyncProperties__MaxNumStreamedLODs = 20000,
		ESkeletalMeshAsyncProperties__MaxNumOptionalLODs = 40000,
		ESkeletalMeshAsyncProperties__ImportedModel = 80000,
		ESkeletalMeshAsyncProperties__LODInfo = 100000,
		ESkeletalMeshAsyncProperties__SkinWeightProfiles = 200000,
		ESkeletalMeshAsyncProperties__CachedComposedRefPoseMatrices = 400000,
		ESkeletalMeshAsyncProperties__SamplingInfo = 800000,
		ESkeletalMeshAsyncProperties__NodeMappingData = 1000000,
		ESkeletalMeshAsyncProperties__ShadowPhysicsAsset = 2000000,
		ESkeletalMeshAsyncProperties__SkelMirrorTable = 4000000,
		ESkeletalMeshAsyncProperties__MinLod = 8000000,
		ESkeletalMeshAsyncProperties__DisableBelowMinLodStripping = 10000000,
		ESkeletalMeshAsyncProperties__SkelMirrorAxis = 20000000,
		ESkeletalMeshAsyncProperties__SkelMirrorFlipAxis = 40000000,
		ESkeletalMeshAsyncProperties__DefaultAnimationRig = 80000000,
		ESkeletalMeshAsyncProperties__NegativeBoundsExtension = 0,
		ESkeletalMeshAsyncProperties__PositiveBoundsExtension = 0,
		ESkeletalMeshAsyncProperties__ExtendedBounds = 0,
		ESkeletalMeshAsyncProperties__EnablePerPolyCollision = 0,
		ESkeletalMeshAsyncProperties__BodySetup = 0,
		ESkeletalMeshAsyncProperties__MorphTargetIndexMap = 0,
		ESkeletalMeshAsyncProperties__FloorOffset = 0,
		ESkeletalMeshAsyncProperties__ImportedBounds = 0,
		ESkeletalMeshAsyncProperties__PhysicsAsset = 0,
		ESkeletalMeshAsyncProperties__AssetImportData = 0,
		ESkeletalMeshAsyncProperties__ThumbnailInfo = 0,
		ESkeletalMeshAsyncProperties__HasCustomDefaultEditorCamera = 0,
		ESkeletalMeshAsyncProperties__DefaultEditorCameraLocation = 0,
		ESkeletalMeshAsyncProperties__DefaultEditorCameraRotation = 0,
		ESkeletalMeshAsyncProperties__RequiresLODScreenSizeConversion = 0,
		ESkeletalMeshAsyncProperties__PostProcessAnimBlueprint = 0,
		ESkeletalMeshAsyncProperties__DefaultEditorCameraLookAt = 0,
		ESkeletalMeshAsyncProperties__PreviewAttachedAssetContainer = 0,
		ESkeletalMeshAsyncProperties__DefaultEditorCameraOrthoZoom = 0,
		ESkeletalMeshAsyncProperties__RequiresLODHysteresisConversion = 0,
		ESkeletalMeshAsyncProperties__bSupportRayTracing = 0,
		ESkeletalMeshAsyncProperties__RayTracingMinLOD = 0,
		ESkeletalMeshAsyncProperties__ClothLODBiasMode = 0,
		ESkeletalMeshAsyncProperties__DefaultMeshDeformer = 0,
		ESkeletalMeshAsyncProperties__OverlayMaterial = 0,
		ESkeletalMeshAsyncProperties__OverlayMaterialMaxDrawDistance = 0,
		ESkeletalMeshAsyncProperties__All = FFFFFFFF,
	};


	// Enum /Script/Engine.EClothLODBiasMode
	enum EClothLODBiasMode
	{
		EClothLODBiasMode__MappingsToSameLOD = 0,
		EClothLODBiasMode__MappingsToMinLOD = 1,
		EClothLODBiasMode__MappingsToAnyLOD = 2,
	};


	// Enum /Script/Engine.EBoneFilterActionOption
	enum EBoneFilterActionOption
	{
		EBoneFilterActionOption__Remove = 0,
		EBoneFilterActionOption__Keep = 1,
		EBoneFilterActionOption__Invalid = 2,
	};


	// Enum /Script/Engine.ESkinCacheUsage
	enum ESkinCacheUsage
	{
		ESkinCacheUsage__Auto = 0,
		ESkinCacheUsage__Disabled = FF,
		ESkinCacheUsage__Enabled = 1,
	};


	// Enum /Script/Engine.ESkinCacheDefaultBehavior
	enum ESkinCacheDefaultBehavior
	{
		ESkinCacheDefaultBehavior__Exclusive = 0,
		ESkinCacheDefaultBehavior__Inclusive = 1,
	};


	// Enum /Script/Engine.EVirtualizationMode
	enum EVirtualizationMode
	{
		EVirtualizationMode__Disabled = 0,
		EVirtualizationMode__PlayWhenSilent = 1,
		EVirtualizationMode__Restart = 2,
	};


	// Enum /Script/Engine.EMaxConcurrentResolutionRule
	enum EMaxConcurrentResolutionRule
	{
		EMaxConcurrentResolutionRule__PreventNew = 0,
		EMaxConcurrentResolutionRule__StopOldest = 1,
		EMaxConcurrentResolutionRule__StopFarthestThenPreventNew = 2,
		EMaxConcurrentResolutionRule__StopFarthestThenOldest = 3,
		EMaxConcurrentResolutionRule__StopLowestPriority = 4,
		EMaxConcurrentResolutionRule__StopQuietest = 5,
		EMaxConcurrentResolutionRule__StopLowestPriorityThenPreventNew = 6,
		EMaxConcurrentResolutionRule__Count = 7,
	};


	// Enum /Script/Engine.EConcurrencyVolumeScaleMode
	enum EConcurrencyVolumeScaleMode
	{
		EConcurrencyVolumeScaleMode__Default = 0,
		EConcurrencyVolumeScaleMode__Distance = 1,
		EConcurrencyVolumeScaleMode__Priority = 2,
	};


	// Enum /Script/Engine.EModulationRouting
	enum EModulationRouting
	{
		EModulationRouting__Disable = 0,
		EModulationRouting__Inherit = 1,
		EModulationRouting__Override = 2,
		EModulationRouting__Union = 3,
	};


	// Enum /Script/Engine.EModulationDestination
	enum EModulationDestination
	{
		EModulationDestination__Volume = 0,
		EModulationDestination__Pitch = 1,
		EModulationDestination__Lowpass = 2,
		EModulationDestination__Highpass = 3,
		EModulationDestination__Count = 4,
	};


	// Enum /Script/Engine.ESourceBusChannels
	enum ESourceBusChannels
	{
		ESourceBusChannels__Mono = 0,
		ESourceBusChannels__Stereo = 1,
	};


	// Enum /Script/Engine.EFFTSize
	enum EFFTSize
	{
		EFFTSize__DefaultSize = 0,
		EFFTSize__Min = 1,
		EFFTSize__Small = 2,
		EFFTSize__Medium = 3,
		EFFTSize__Large = 4,
		EFFTSize__VeryLarge = 5,
		EFFTSize__Max = 6,
	};


	// Enum /Script/Engine.EFFTPeakInterpolationMethod
	enum EFFTPeakInterpolationMethod
	{
		EFFTPeakInterpolationMethod__NearestNeighbor = 0,
		EFFTPeakInterpolationMethod__Linear = 1,
		EFFTPeakInterpolationMethod__Quadratic = 2,
		EFFTPeakInterpolationMethod__ConstantQ = 3,
	};


	// Enum /Script/Engine.EFFTWindowType
	enum EFFTWindowType
	{
		EFFTWindowType__None = 0,
		EFFTWindowType__Hamming = 1,
		EFFTWindowType__Hann = 2,
		EFFTWindowType__Blackman = 3,
	};


	// Enum /Script/Engine.EAudioSpectrumType
	enum EAudioSpectrumType
	{
		EAudioSpectrumType__MagnitudeSpectrum = 0,
		EAudioSpectrumType__PowerSpectrum = 1,
		EAudioSpectrumType__Decibel = 2,
	};


	// Enum /Script/Engine.EGainParamMode
	enum EGainParamMode
	{
		EGainParamMode__Linear = 0,
		EGainParamMode__Decibels = 1,
	};


	// Enum /Script/Engine.EAudioSpectrumBandPresetType
	enum EAudioSpectrumBandPresetType
	{
		EAudioSpectrumBandPresetType__KickDrum = 0,
		EAudioSpectrumBandPresetType__SnareDrum = 1,
		EAudioSpectrumBandPresetType__Voice = 2,
		EAudioSpectrumBandPresetType__Cymbals = 3,
	};


	// Enum /Script/Engine.EAudioRecordingExportType
	enum EAudioRecordingExportType
	{
		EAudioRecordingExportType__SoundWave = 0,
		EAudioRecordingExportType__WavFile = 1,
	};


	// Enum /Script/Engine.ESendLevelControlMethod
	enum ESendLevelControlMethod
	{
		ESendLevelControlMethod__Linear = 0,
		ESendLevelControlMethod__CustomCurve = 1,
		ESendLevelControlMethod__Manual = 2,
	};


	// Enum /Script/Engine.ESubmixSendStage
	enum ESubmixSendStage
	{
		ESubmixSendStage__PostDistanceAttenuation = 0,
		ESubmixSendStage__PreDistanceAttenuation = 1,
	};


	// Enum /Script/Engine.ENormalMode
	enum ENormalMode
	{
		NM_PreserveSmoothingGroups = 0,
		NM_RecalculateNormals = 1,
		NM_RecalculateNormalsSmooth = 2,
		NM_RecalculateNormalsHard = 3,
		TEMP_BROKEN = 4,
	};


	// Enum /Script/Engine.EImportanceLevel
	enum EImportanceLevel
	{
		IL_Off = 0,
		IL_Lowest = 1,
		IL_Low = 2,
		IL_Normal = 3,
		IL_High = 4,
		IL_Highest = 5,
		TEMP_BROKEN2 = 6,
	};


	// Enum /Script/Engine.EOptimizationType
	enum EOptimizationType
	{
		OT_NumOfTriangles = 0,
		OT_MaxDeviation = 1,
	};


	// Enum /Script/Engine.ETextureEncodeEffort
	enum ETextureEncodeEffort
	{
		ETextureEncodeEffort__Default = 0,
		ETextureEncodeEffort__Low = A,
		ETextureEncodeEffort__Normal = 14,
		ETextureEncodeEffort__High = 1E,
	};


	// Enum /Script/Engine.ETextureUniversalTiling
	enum ETextureUniversalTiling
	{
		ETextureUniversalTiling__Disabled = 0,
		ETextureUniversalTiling__Enabled_256KB = 1,
		ETextureUniversalTiling__Enabled_64KB = 2,
	};


	// Enum /Script/Engine.ETextureEncodeSpeedOverride
	enum ETextureEncodeSpeedOverride
	{
		ETextureEncodeSpeedOverride__Disabled = FF,
		ETextureEncodeSpeedOverride__Final = 0,
		ETextureEncodeSpeedOverride__FinalIfAvailable = 1,
		ETextureEncodeSpeedOverride__Fast = 2,
	};


	// Enum /Script/Engine.ETextureRenderTargetFormat
	enum ETextureRenderTargetFormat
	{
		RTF_R8 = 0,
		RTF_RG8 = 1,
		RTF_RGBA8 = 2,
		RTF_RGBA8_SRGB = 3,
		RTF_R16f = 4,
		RTF_RG16f = 5,
		RTF_RGBA16f = 6,
		RTF_R32f = 7,
		RTF_RG32f = 8,
		RTF_RGBA32f = 9,
		RTF_RGB10A2 = A,
	};


	// Enum /Script/Engine.ETextureRenderTargetSampleCount
	enum ETextureRenderTargetSampleCount
	{
		ETextureRenderTargetSampleCount__RTSC = 0,
		ETextureRenderTargetSampleCount__RTSC = 1,
		ETextureRenderTargetSampleCount__RTSC = 2,
		ETextureRenderTargetSampleCount__RTSC = 3,
	};


	// Enum /Script/Engine.ERenderFocusRule
	enum ERenderFocusRule
	{
		ERenderFocusRule__Always = 0,
		ERenderFocusRule__NonPointer = 1,
		ERenderFocusRule__NavigationOnly = 2,
		ERenderFocusRule__Never = 3,
	};


	// Enum /Script/Engine.EUIScalingRule
	enum EUIScalingRule
	{
		EUIScalingRule__ShortestSide = 0,
		EUIScalingRule__LongestSide = 1,
		EUIScalingRule__Horizontal = 2,
		EUIScalingRule__Vertical = 3,
		EUIScalingRule__ScaleToFit = 4,
		EUIScalingRule__Custom = 5,
	};


	// Enum /Script/Engine.EFontDPI
	enum EFontDPI
	{
		EFontDPI__Standard = 0,
		EFontDPI__Unreal = 1,
		EFontDPI__Custom = 2,
	};


	// Enum /Script/Engine.EHardwareDeviceSupportedFeatures
	enum EHardwareDeviceSupportedFeatures
	{
		EHardwareDeviceSupportedFeatures__Unspecified = 0,
		EHardwareDeviceSupportedFeatures__Keypress = 1,
		EHardwareDeviceSupportedFeatures__Pointer = 2,
		EHardwareDeviceSupportedFeatures__Gamepad = 4,
		EHardwareDeviceSupportedFeatures__Touch = 8,
		EHardwareDeviceSupportedFeatures__Camera = 10,
		EHardwareDeviceSupportedFeatures__MotionTracking = 20,
		EHardwareDeviceSupportedFeatures__Lights = 40,
		EHardwareDeviceSupportedFeatures__TriggerHaptics = 80,
		EHardwareDeviceSupportedFeatures__ForceFeedback = 100,
		EHardwareDeviceSupportedFeatures__AudioBasedVibrations = 200,
		EHardwareDeviceSupportedFeatures__Acceleration = 400,
		EHardwareDeviceSupportedFeatures__Virtual = 800,
		EHardwareDeviceSupportedFeatures__Microphone = 1000,
		EHardwareDeviceSupportedFeatures__Orientation = 2000,
		EHardwareDeviceSupportedFeatures__Guitar = 4000,
		EHardwareDeviceSupportedFeatures__Drums = 8000,
		EHardwareDeviceSupportedFeatures__CustomA = 1000000,
		EHardwareDeviceSupportedFeatures__CustomB = 2000000,
		EHardwareDeviceSupportedFeatures__CustomC = 4000000,
		EHardwareDeviceSupportedFeatures__CustomD = 8000000,
		EHardwareDeviceSupportedFeatures__All = 7FFFFFFF,
	};


	// Enum /Script/Engine.EHardwareDevicePrimaryType
	enum EHardwareDevicePrimaryType
	{
		EHardwareDevicePrimaryType__Unspecified = 0,
		EHardwareDevicePrimaryType__KeyboardAndMouse = 1,
		EHardwareDevicePrimaryType__Gamepad = 2,
		EHardwareDevicePrimaryType__Touch = 3,
		EHardwareDevicePrimaryType__MotionTracking = 4,
		EHardwareDevicePrimaryType__RacingWheel = 5,
		EHardwareDevicePrimaryType__FlightStick = 6,
		EHardwareDevicePrimaryType__Camera = 7,
		EHardwareDevicePrimaryType__Instrument = 8,
		EHardwareDevicePrimaryType__CustomTypeA = 9,
		EHardwareDevicePrimaryType__CustomTypeB = A,
		EHardwareDevicePrimaryType__CustomTypeC = B,
		EHardwareDevicePrimaryType__CustomTypeD = C,
	};


	// Enum /Script/Engine.EDataLayerState
	enum EDataLayerState
	{
		EDataLayerState__Unloaded = 0,
		EDataLayerState__Loaded = 1,
		EDataLayerState__Activated = 2,
	};


	// Enum /Script/Engine.EDataLayerLoadFilter
	enum EDataLayerLoadFilter
	{
		EDataLayerLoadFilter__None = 0,
		EDataLayerLoadFilter__ClientOnly = 1,
		EDataLayerLoadFilter__ServerOnly = 2,
	};


	// Enum /Script/Engine.EOverrideBlockOnSlowStreaming
	enum EOverrideBlockOnSlowStreaming
	{
		EOverrideBlockOnSlowStreaming__NoOverride = 0,
		EOverrideBlockOnSlowStreaming__Blocking = 1,
		EOverrideBlockOnSlowStreaming__NotBlocking = 2,
	};


	// Enum /Script/Engine.EHLODLayerType
	enum EHLODLayerType
	{
		EHLODLayerType__Instancing = 0,
		EHLODLayerType__MeshMerge = 1,
		EHLODLayerType__MeshSimplify = 2,
		EHLODLayerType__MeshApproximate = 3,
		EHLODLayerType__Custom = 4,
	};


	// Enum /Script/Engine.EWorldPartitionServerStreamingMode
	enum EWorldPartitionServerStreamingMode
	{
		EWorldPartitionServerStreamingMode__ProjectDefault = 0,
		EWorldPartitionServerStreamingMode__Disabled = 1,
		EWorldPartitionServerStreamingMode__Enabled = 2,
		EWorldPartitionServerStreamingMode__EnabledInPIE = 3,
	};


	// Enum /Script/Engine.EWorldPartitionServerStreamingOutMode
	enum EWorldPartitionServerStreamingOutMode
	{
		EWorldPartitionServerStreamingOutMode__ProjectDefault = 0,
		EWorldPartitionServerStreamingOutMode__Disabled = 1,
		EWorldPartitionServerStreamingOutMode__Enabled = 2,
	};


	// Enum /Script/Engine.EWorldPartitionDataLayersLogicOperator
	enum EWorldPartitionDataLayersLogicOperator
	{
		EWorldPartitionDataLayersLogicOperator__Or = 0,
		EWorldPartitionDataLayersLogicOperator__And = 1,
	};


	// Enum /Script/Engine.EWorldPartitionRuntimeCellState
	enum EWorldPartitionRuntimeCellState
	{
		EWorldPartitionRuntimeCellState__Unloaded = 0,
		EWorldPartitionRuntimeCellState__Loaded = 1,
		EWorldPartitionRuntimeCellState__Activated = 2,
	};


	// Enum /Script/Engine.EWorldPartitionStreamingPerformance
	enum EWorldPartitionStreamingPerformance
	{
		EWorldPartitionStreamingPerformance__Good = 0,
		EWorldPartitionStreamingPerformance__Slow = 1,
		EWorldPartitionStreamingPerformance__Critical = 2,
	};


	// Enum /Script/Engine.EWorldPartitionCVarProjectDefaultOverride
	enum EWorldPartitionCVarProjectDefaultOverride
	{
		EWorldPartitionCVarProjectDefaultOverride__ProjectDefault = 0,
		EWorldPartitionCVarProjectDefaultOverride__Disabled = 1,
		EWorldPartitionCVarProjectDefaultOverride__Enabled = 2,
	};


	// Enum /Script/Engine.EStreamingSourceTargetBehavior
	enum EStreamingSourceTargetBehavior
	{
		EStreamingSourceTargetBehavior__Include = 0,
		EStreamingSourceTargetBehavior__Exclude = 1,
	};


	// Enum /Script/Engine.EStreamingSourceTargetState
	enum EStreamingSourceTargetState
	{
		EStreamingSourceTargetState__Loaded = 0,
		EStreamingSourceTargetState__Activated = 1,
	};


	// Enum /Script/Engine.EStreamingSourcePriority
	enum EStreamingSourcePriority
	{
		EStreamingSourcePriority__Highest = 0,
		EStreamingSourcePriority__High = 40,
		EStreamingSourcePriority__Normal = 80,
		EStreamingSourcePriority__Low = C0,
		EStreamingSourcePriority__Lowest = FF,
		EStreamingSourcePriority__Default = 80,
	};

}
