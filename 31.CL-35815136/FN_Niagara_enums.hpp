#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Niagara
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/Niagara.ENiagaraSimCacheAttributeCaptureMode
	enum ENiagaraSimCacheAttributeCaptureMode
	{
		ENiagaraSimCacheAttributeCaptureMode__All = 0,
		ENiagaraSimCacheAttributeCaptureMode__RenderingOnly = 1,
		ENiagaraSimCacheAttributeCaptureMode__ExplicitAttributes = 2,
	};


	// Enum /Script/Niagara.ENiagaraAssetLibraryAssetTypes
	enum ENiagaraAssetLibraryAssetTypes
	{
		ENiagaraAssetLibraryAssetTypes__Emitters = 1,
		ENiagaraAssetLibraryAssetTypes__Systems = 2,
		ENiagaraAssetLibraryAssetTypes__Scripts = 4,
	};


	// Enum /Script/Niagara.ENiagaraAssetTagDefinitionImportance
	enum ENiagaraAssetTagDefinitionImportance
	{
		ENiagaraAssetTagDefinitionImportance__Primary = 0,
		ENiagaraAssetTagDefinitionImportance__Secondary = 1,
		ENiagaraAssetTagDefinitionImportance__Internal = 2,
	};


	// Enum /Script/Niagara.ENiagaraCollisionMode
	enum ENiagaraCollisionMode
	{
		ENiagaraCollisionMode__None = 0,
		ENiagaraCollisionMode__SceneGeometry = 1,
		ENiagaraCollisionMode__DepthBuffer = 2,
		ENiagaraCollisionMode__DistanceField = 3,
	};


	// Enum /Script/Niagara.ENiagaraBaseTypes
	enum ENiagaraBaseTypes
	{
		ENiagaraBaseTypes__Half = 0,
		ENiagaraBaseTypes__Float = 1,
		ENiagaraBaseTypes__Int32 = 2,
		ENiagaraBaseTypes__Bool = 3,
		ENiagaraBaseTypes__Max = 4,
	};


	// Enum /Script/Niagara.ENiagaraGpuBufferFormat
	enum ENiagaraGpuBufferFormat
	{
		ENiagaraGpuBufferFormat__Float = 0,
		ENiagaraGpuBufferFormat__HalfFloat = 1,
		ENiagaraGpuBufferFormat__UnsignedNormalizedByte = 2,
		ENiagaraGpuBufferFormat__Max = 3,
	};


	// Enum /Script/Niagara.ENiagaraGpuSyncMode
	enum ENiagaraGpuSyncMode
	{
		ENiagaraGpuSyncMode__None = 0,
		ENiagaraGpuSyncMode__SyncCpuToGpu = 1,
		ENiagaraGpuSyncMode__SyncGpuToCpu = 2,
		ENiagaraGpuSyncMode__SyncBoth = 3,
	};


	// Enum /Script/Niagara.ENiagaraMipMapGeneration
	enum ENiagaraMipMapGeneration
	{
		ENiagaraMipMapGeneration__Disabled = 0,
		ENiagaraMipMapGeneration__PostStage = 1,
		ENiagaraMipMapGeneration__PostSimulate = 2,
	};


	// Enum /Script/Niagara.ENiagaraDefaultMode
	enum ENiagaraDefaultMode
	{
		ENiagaraDefaultMode__Value = 0,
		ENiagaraDefaultMode__Binding = 1,
		ENiagaraDefaultMode__Custom = 2,
		ENiagaraDefaultMode__FailIfPreviouslyNotSet = 3,
	};


	// Enum /Script/Niagara.ENiagaraDefaultRendererMotionVectorSetting
	enum ENiagaraDefaultRendererMotionVectorSetting
	{
		ENiagaraDefaultRendererMotionVectorSetting__Precise = 0,
		ENiagaraDefaultRendererMotionVectorSetting__Approximate = 1,
	};


	// Enum /Script/Niagara.ENiagaraRendererMotionVectorSetting
	enum ENiagaraRendererMotionVectorSetting
	{
		ENiagaraRendererMotionVectorSetting__AutoDetect = 0,
		ENiagaraRendererMotionVectorSetting__Precise = 1,
		ENiagaraRendererMotionVectorSetting__Approximate = 2,
		ENiagaraRendererMotionVectorSetting__Disable = 3,
	};


	// Enum /Script/Niagara.ENiagaraSimTarget
	enum ENiagaraSimTarget
	{
		ENiagaraSimTarget__CPUSim = 0,
		ENiagaraSimTarget__GPUComputeSim = 1,
	};


	// Enum /Script/Niagara.ENiagaraAgeUpdateMode
	enum ENiagaraAgeUpdateMode
	{
		ENiagaraAgeUpdateMode__TickDeltaTime = 0,
		ENiagaraAgeUpdateMode__DesiredAge = 1,
		ENiagaraAgeUpdateMode__DesiredAgeNoSeek = 2,
	};


	// Enum /Script/Niagara.ENiagaraStatEvaluationType
	enum ENiagaraStatEvaluationType
	{
		ENiagaraStatEvaluationType__Average = 0,
		ENiagaraStatEvaluationType__Maximum = 1,
	};


	// Enum /Script/Niagara.ENiagaraStatDisplayMode
	enum ENiagaraStatDisplayMode
	{
		ENiagaraStatDisplayMode__Percent = 0,
		ENiagaraStatDisplayMode__Absolute = 1,
	};


	// Enum /Script/Niagara.ENiagaraDataSetType
	enum ENiagaraDataSetType
	{
		ENiagaraDataSetType__ParticleData = 0,
		ENiagaraDataSetType__Shared = 1,
		ENiagaraDataSetType__Event = 2,
	};


	// Enum /Script/Niagara.ENiagaraInputNodeUsage
	enum ENiagaraInputNodeUsage
	{
		ENiagaraInputNodeUsage__Undefined = 0,
		ENiagaraInputNodeUsage__Parameter = 1,
		ENiagaraInputNodeUsage__Attribute = 2,
		ENiagaraInputNodeUsage__SystemConstant = 3,
		ENiagaraInputNodeUsage__TranslatorConstant = 4,
		ENiagaraInputNodeUsage__RapidIterationParameter = 5,
	};


	// Enum /Script/Niagara.ENiagaraScriptCompileStatus
	enum ENiagaraScriptCompileStatus
	{
		ENiagaraScriptCompileStatus__NCS_Unknown = 0,
		ENiagaraScriptCompileStatus__NCS_Dirty = 1,
		ENiagaraScriptCompileStatus__NCS_Error = 2,
		ENiagaraScriptCompileStatus__NCS_UpToDate = 3,
		ENiagaraScriptCompileStatus__NCS_BeingCreated = 4,
		ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings = 5,
		ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings = 6,
	};


	// Enum /Script/Niagara.ENiagaraScriptUsage
	enum ENiagaraScriptUsage
	{
		ENiagaraScriptUsage__Function = 0,
		ENiagaraScriptUsage__Module = 1,
		ENiagaraScriptUsage__DynamicInput = 2,
		ENiagaraScriptUsage__ParticleSpawnScript = 3,
		ENiagaraScriptUsage__ParticleSpawnScriptInterpolated = 4,
		ENiagaraScriptUsage__ParticleUpdateScript = 5,
		ENiagaraScriptUsage__ParticleEventScript = 6,
		ENiagaraScriptUsage__ParticleSimulationStageScript = 7,
		ENiagaraScriptUsage__ParticleGPUComputeScript = 8,
		ENiagaraScriptUsage__EmitterSpawnScript = 9,
		ENiagaraScriptUsage__EmitterUpdateScript = A,
		ENiagaraScriptUsage__SystemSpawnScript = B,
		ENiagaraScriptUsage__SystemUpdateScript = C,
	};


	// Enum /Script/Niagara.ENiagaraCompileUsageStaticSwitch
	enum ENiagaraCompileUsageStaticSwitch
	{
		ENiagaraCompileUsageStaticSwitch__Spawn = 0,
		ENiagaraCompileUsageStaticSwitch__Update = 1,
		ENiagaraCompileUsageStaticSwitch__Event = 2,
		ENiagaraCompileUsageStaticSwitch__SimulationStage = 3,
		ENiagaraCompileUsageStaticSwitch__Default = 4,
	};


	// Enum /Script/Niagara.ENiagaraScriptContextStaticSwitch
	enum ENiagaraScriptContextStaticSwitch
	{
		ENiagaraScriptContextStaticSwitch__System = 0,
		ENiagaraScriptContextStaticSwitch__Emitter = 1,
		ENiagaraScriptContextStaticSwitch__Particle = 2,
	};


	// Enum /Script/Niagara.ENiagaraScriptGroup
	enum ENiagaraScriptGroup
	{
		ENiagaraScriptGroup__Particle = 0,
		ENiagaraScriptGroup__Emitter = 1,
		ENiagaraScriptGroup__System = 2,
		ENiagaraScriptGroup__Max = 3,
	};


	// Enum /Script/Niagara.ENiagaraBindingSource
	enum ENiagaraBindingSource
	{
		ImplicitFromSource = 0,
		ExplicitParticles = 1,
		ExplicitEmitter = 2,
		ExplicitSystem = 3,
		ExplicitUser = 4,
		MaxBindingSource = 5,
	};


	// Enum /Script/Niagara.ENiagaraRendererSourceDataMode
	enum ENiagaraRendererSourceDataMode
	{
		ENiagaraRendererSourceDataMode__Particles = 0,
		ENiagaraRendererSourceDataMode__Emitter = 1,
	};


	// Enum /Script/Niagara.ENiagaraLegacyTrailWidthMode
	enum ENiagaraLegacyTrailWidthMode
	{
		ENiagaraLegacyTrailWidthMode__FromCentre = 0,
		ENiagaraLegacyTrailWidthMode__FromFirst = 1,
		ENiagaraLegacyTrailWidthMode__FromSecond = 2,
	};


	// Enum /Script/Niagara.ENiagaraSystemInstanceState
	enum ENiagaraSystemInstanceState
	{
		ENiagaraSystemInstanceState__None = 0,
		ENiagaraSystemInstanceState__PendingSpawn = 1,
		ENiagaraSystemInstanceState__PendingSpawnPaused = 2,
		ENiagaraSystemInstanceState__Spawning = 3,
		ENiagaraSystemInstanceState__Running = 4,
		ENiagaraSystemInstanceState__Paused = 5,
		ENiagaraSystemInstanceState__Num = 6,
	};


	// Enum /Script/Niagara.ENiagaraFunctionDebugState
	enum ENiagaraFunctionDebugState
	{
		ENiagaraFunctionDebugState__NoDebug = 0,
		ENiagaraFunctionDebugState__Basic = 1,
	};


	// Enum /Script/Niagara.ENiagaraGpuComputeTickStage
	enum ENiagaraGpuComputeTickStage
	{
		ENiagaraGpuComputeTickStage__PreInitViews = 0,
		ENiagaraGpuComputeTickStage__PostInitViews = 1,
		ENiagaraGpuComputeTickStage__PostOpaqueRender = 2,
		ENiagaraGpuComputeTickStage__Max = 3,
		ENiagaraGpuComputeTickStage__First = 0,
		ENiagaraGpuComputeTickStage__Last = 2,
	};


	// Enum /Script/Niagara.ENiagaraConditionalOperator
	enum ENiagaraConditionalOperator
	{
		ENiagaraConditionalOperator__Equals = 0,
		ENiagaraConditionalOperator__NotEqual = 1,
		ENiagaraConditionalOperator__LessThan = 2,
		ENiagaraConditionalOperator__LessThanOrEqual = 3,
		ENiagaraConditionalOperator__GreaterThan = 4,
		ENiagaraConditionalOperator__GreaterThanOrEqual = 5,
		ENiagaraConditionalOperator__Max = 6,
	};


	// Enum /Script/Niagara.ENCPoolMethod
	enum ENCPoolMethod
	{
		ENCPoolMethod__None = 0,
		ENCPoolMethod__AutoRelease = 1,
		ENCPoolMethod__ManualRelease = 2,
		ENCPoolMethod__ManualRelease_OnComplete = 3,
		ENCPoolMethod__FreeInPool = 4,
	};


	// Enum /Script/Niagara.ENiagraDataChannel_IslandMode
	enum ENiagraDataChannel_IslandMode
	{
		ENiagraDataChannel_IslandMode__AlignedStatic = 0,
		ENiagraDataChannel_IslandMode__Dynamic = 1,
	};


	// Enum /Script/Niagara.ENiagaraDataChannelAllocationMode
	enum ENiagaraDataChannelAllocationMode
	{
		ENiagaraDataChannelAllocationMode__Static = 0,
	};


	// Enum /Script/Niagara.ENDIDataChannelSpawnMode
	enum ENDIDataChannelSpawnMode
	{
		ENDIDataChannelSpawnMode__Override = 0,
		ENDIDataChannelSpawnMode__Accumulate = 1,
		ENDIDataChannelSpawnMode__None = 2,
		ENDIDataChannelSpawnMode__Max = 3,
	};


	// Enum /Script/Niagara.ENDIDataChannelSpawnScaleMode
	enum ENDIDataChannelSpawnScaleMode
	{
		ENDIDataChannelSpawnScaleMode__Override = 0,
		ENDIDataChannelSpawnScaleMode__Scale = 1,
		ENDIDataChannelSpawnScaleMode__Max = 2,
	};


	// Enum /Script/Niagara.ENiagaraSortMode
	enum ENiagaraSortMode
	{
		ENiagaraSortMode__None = 0,
		ENiagaraSortMode__ViewDepth = 1,
		ENiagaraSortMode__ViewDistance = 2,
		ENiagaraSortMode__CustomAscending = 3,
		ENiagaraSortMode__CustomDecending = 4,
	};


	// Enum /Script/Niagara.ENDISkelMesh_GpuMaxInfluences
	enum ENDISkelMesh_GpuMaxInfluences
	{
		ENDISkelMesh_GpuMaxInfluences__AllowMax4 = 0,
		ENDISkelMesh_GpuMaxInfluences__AllowMax8 = 1,
		ENDISkelMesh_GpuMaxInfluences__Unlimited = 2,
	};


	// Enum /Script/Niagara.ENDISkelMesh_GpuUniformSamplingFormat
	enum ENDISkelMesh_GpuUniformSamplingFormat
	{
		ENDISkelMesh_GpuUniformSamplingFormat__Full = 0,
		ENDISkelMesh_GpuUniformSamplingFormat__Limited_24 = 1,
		ENDISkelMesh_GpuUniformSamplingFormat__Limited_23 = 2,
	};


	// Enum /Script/Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
	enum ENDISkelMesh_AdjacencyTriangleIndexFormat
	{
		ENDISkelMesh_AdjacencyTriangleIndexFormat__Full = 0,
		ENDISkelMesh_AdjacencyTriangleIndexFormat__Half = 1,
	};


	// Enum /Script/Niagara.ENiagaraDefaultRendererPixelCoverageMode
	enum ENiagaraDefaultRendererPixelCoverageMode
	{
		ENiagaraDefaultRendererPixelCoverageMode__Enabled = 0,
		ENiagaraDefaultRendererPixelCoverageMode__Disabled = 1,
	};


	// Enum /Script/Niagara.ENiagaraDefaultSortPrecision
	enum ENiagaraDefaultSortPrecision
	{
		ENiagaraDefaultSortPrecision__Low = 0,
		ENiagaraDefaultSortPrecision__High = 1,
	};


	// Enum /Script/Niagara.ENiagaraDefaultGpuTranslucentLatency
	enum ENiagaraDefaultGpuTranslucentLatency
	{
		ENiagaraDefaultGpuTranslucentLatency__Immediate = 0,
		ENiagaraDefaultGpuTranslucentLatency__Latent = 1,
	};


	// Enum /Script/Niagara.ENiagaraCompileErrorSeverity
	enum ENiagaraCompileErrorSeverity
	{
		ENiagaraCompileErrorSeverity__Ignore = 0,
		ENiagaraCompileErrorSeverity__LogOnly = 1,
		ENiagaraCompileErrorSeverity__Warning = 2,
		ENiagaraCompileErrorSeverity__Error = 3,
	};


	// Enum /Script/Niagara.ENDICollisionQuery_AsyncGpuTraceProvider
	enum ENDICollisionQuery_AsyncGpuTraceProvider
	{
		ENDICollisionQuery_AsyncGpuTraceProvider__Default = 0,
		ENDICollisionQuery_AsyncGpuTraceProvider__HWRT = 1,
		ENDICollisionQuery_AsyncGpuTraceProvider__GSDF = 2,
		ENDICollisionQuery_AsyncGpuTraceProvider__None = 3,
	};


	// Enum /Script/Niagara.ENiagaraStripScriptByteCodeOption
	enum ENiagaraStripScriptByteCodeOption
	{
		ENiagaraStripScriptByteCodeOption__Default = 0,
		ENiagaraStripScriptByteCodeOption__Strip_Original = 1,
		ENiagaraStripScriptByteCodeOption__Strip_Experimental = 2,
	};


	// Enum /Script/Niagara.ENiagaraStatelessFeatureMask
	enum ENiagaraStatelessFeatureMask
	{
		ENiagaraStatelessFeatureMask__ExecuteGPU = 1,
		ENiagaraStatelessFeatureMask__ExecuteCPU = 2,
		ENiagaraStatelessFeatureMask__None = 0,
		ENiagaraStatelessFeatureMask__ExecuteAll = 3,
		ENiagaraStatelessFeatureMask__All = 3,
	};


	// Enum /Script/Niagara.ENiagaraDistributionMode
	enum ENiagaraDistributionMode
	{
		ENiagaraDistributionMode__Binding = 0,
		ENiagaraDistributionMode__UniformConstant = 1,
		ENiagaraDistributionMode__NonUniformConstant = 2,
		ENiagaraDistributionMode__UniformRange = 3,
		ENiagaraDistributionMode__NonUniformRange = 4,
		ENiagaraDistributionMode__UniformCurve = 5,
		ENiagaraDistributionMode__NonUniformCurve = 6,
	};


	// Enum /Script/Niagara.ENSM_VelocityType
	enum ENSM_VelocityType
	{
		ENSM_VelocityType__Linear = 0,
		ENSM_VelocityType__FromPoint = 1,
		ENSM_VelocityType__InCone = 2,
	};


	// Enum /Script/Niagara.ENSM_NoiseMode
	enum ENSM_NoiseMode
	{
		ENSM_NoiseMode__VectorField = 0,
		ENSM_NoiseMode__JacobNoise = 1,
		ENSM_NoiseMode__LUTJacob = 2,
		ENSM_NoiseMode__LUTJacobBicubic = 3,
	};


	// Enum /Script/Niagara.ENSM_ShapePrimitive
	enum ENSM_ShapePrimitive
	{
		ENSM_ShapePrimitive__Box = 0,
		ENSM_ShapePrimitive__Cylinder = 1,
		ENSM_ShapePrimitive__Plane = 2,
		ENSM_ShapePrimitive__Ring = 3,
		ENSM_ShapePrimitive__Sphere = 4,
	};


	// Enum /Script/Niagara.ENSMSubUVAnimation_Mode
	enum ENSMSubUVAnimation_Mode
	{
		ENSMSubUVAnimation_Mode__InfiniteLoop = 0,
		ENSMSubUVAnimation_Mode__Linear = 1,
		ENSMSubUVAnimation_Mode__Random = 2,
	};


	// Enum /Script/Niagara.ENiagaraStatelessSpawnInfoType
	enum ENiagaraStatelessSpawnInfoType
	{
		ENiagaraStatelessSpawnInfoType__Burst = 0,
		ENiagaraStatelessSpawnInfoType__Rate = 1,
	};


	// Enum /Script/Niagara.ENiagaraSystemInactiveResponse
	enum ENiagaraSystemInactiveResponse
	{
		ENiagaraSystemInactiveResponse__Complete = 0,
		ENiagaraSystemInactiveResponse__Kill = 1,
	};


	// Enum /Script/Niagara.ENiagaraEmitterInactiveResponse
	enum ENiagaraEmitterInactiveResponse
	{
		ENiagaraEmitterInactiveResponse__Complete = 0,
		ENiagaraEmitterInactiveResponse__Kill = 1,
	};


	// Enum /Script/Niagara.ENiagaraLoopBehavior
	enum ENiagaraLoopBehavior
	{
		ENiagaraLoopBehavior__Infinite = 0,
		ENiagaraLoopBehavior__Multiple = 1,
		ENiagaraLoopBehavior__Once = 2,
	};


	// Enum /Script/Niagara.ENiagaraTickBehavior
	enum ENiagaraTickBehavior
	{
		ENiagaraTickBehavior__UsePrereqs = 0,
		ENiagaraTickBehavior__UseComponentTickGroup = 1,
		ENiagaraTickBehavior__ForceTickFirst = 2,
		ENiagaraTickBehavior__ForceTickLast = 3,
	};


	// Enum /Script/Niagara.ENiagaraInputWidgetType
	enum ENiagaraInputWidgetType
	{
		ENiagaraInputWidgetType__Default = 0,
		ENiagaraInputWidgetType__Slider = 1,
		ENiagaraInputWidgetType__Volume = 2,
		ENiagaraInputWidgetType__NumericDropdown = 3,
		ENiagaraInputWidgetType__EnumStyle = 4,
		ENiagaraInputWidgetType__SegmentedButtons = 5,
	};


	// Enum /Script/Niagara.ENiagaraBoolDisplayMode
	enum ENiagaraBoolDisplayMode
	{
		ENiagaraBoolDisplayMode__DisplayAlways = 0,
		ENiagaraBoolDisplayMode__DisplayIfTrue = 1,
		ENiagaraBoolDisplayMode__DisplayIfFalse = 2,
	};


	// Enum /Script/Niagara.ENDIActorComponentSourceMode
	enum ENDIActorComponentSourceMode
	{
		ENDIActorComponentSourceMode__Default = 0,
		ENDIActorComponentSourceMode__AttachParent = 1,
		ENDIActorComponentSourceMode__LocalPlayer = 2,
	};


	// Enum /Script/Niagara.ENDISceneCapture2DSourceMode
	enum ENDISceneCapture2DSourceMode
	{
		ENDISceneCapture2DSourceMode__UserParameterThenAttachParent = 0,
		ENDISceneCapture2DSourceMode__UserParameterOnly = 1,
		ENDISceneCapture2DSourceMode__AttachParentOnly = 2,
		ENDISceneCapture2DSourceMode__Managed = 3,
	};


	// Enum /Script/Niagara.ENDISceneCapture2DOffsetMode
	enum ENDISceneCapture2DOffsetMode
	{
		ENDISceneCapture2DOffsetMode__Disabled = 0,
		ENDISceneCapture2DOffsetMode__RelativeLocal = 1,
		ENDISceneCapture2DOffsetMode__RelativeWorld = 2,
		ENDISceneCapture2DOffsetMode__AbsoluteWorld = 3,
	};


	// Enum /Script/Niagara.ENDISocketReaderSourceMode
	enum ENDISocketReaderSourceMode
	{
		ENDISocketReaderSourceMode__Default = 0,
		ENDISocketReaderSourceMode__ParameterBindingOnly = 1,
		ENDISocketReaderSourceMode__AttachedParentOnly = 2,
		ENDISocketReaderSourceMode__SourceOnly = 3,
	};


	// Enum /Script/Niagara.ENDIStaticMesh_SourceMode
	enum ENDIStaticMesh_SourceMode
	{
		ENDIStaticMesh_SourceMode__Default = 0,
		ENDIStaticMesh_SourceMode__Source = 1,
		ENDIStaticMesh_SourceMode__AttachParent = 2,
		ENDIStaticMesh_SourceMode__DefaultMeshOnly = 3,
		ENDIStaticMesh_SourceMode__MeshParameterBinding = 4,
	};


	// Enum /Script/Niagara.ENDIObjectPropertyReaderSourceMode
	enum ENDIObjectPropertyReaderSourceMode
	{
		ENDIObjectPropertyReaderSourceMode__Binding = 0,
		ENDIObjectPropertyReaderSourceMode__AttachParentActor = 1,
		ENDIObjectPropertyReaderSourceMode__BindingThenAttachParentActor = 2,
	};


	// Enum /Script/Niagara.ENiagaraSystemSpawnSectionStartBehavior
	enum ENiagaraSystemSpawnSectionStartBehavior
	{
		ENiagaraSystemSpawnSectionStartBehavior__Activate = 0,
	};


	// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
	enum ENiagaraSystemSpawnSectionEvaluateBehavior
	{
		ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive = 0,
		ENiagaraSystemSpawnSectionEvaluateBehavior__None = 1,
	};


	// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEndBehavior
	enum ENiagaraSystemSpawnSectionEndBehavior
	{
		ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive = 0,
		ENiagaraSystemSpawnSectionEndBehavior__Deactivate = 1,
		ENiagaraSystemSpawnSectionEndBehavior__None = 2,
	};


	// Enum /Script/Niagara.ENiagaraCompilationState
	enum ENiagaraCompilationState
	{
		ENiagaraCompilationState__CheckDDC = 0,
		ENiagaraCompilationState__Precompile = 1,
		ENiagaraCompilationState__StartCompileJob = 2,
		ENiagaraCompilationState__AwaitResult = 3,
		ENiagaraCompilationState__OptimizeByteCode = 4,
		ENiagaraCompilationState__ProcessResult = 5,
		ENiagaraCompilationState__PutToDDC = 6,
		ENiagaraCompilationState__Finished = 7,
		ENiagaraCompilationState__Aborted = 8,
	};


	// Enum /Script/Niagara.ENiagaraBakerViewMode
	enum ENiagaraBakerViewMode
	{
		ENiagaraBakerViewMode__Perspective = 0,
		ENiagaraBakerViewMode__OrthoFront = 1,
		ENiagaraBakerViewMode__OrthoBack = 2,
		ENiagaraBakerViewMode__OrthoLeft = 3,
		ENiagaraBakerViewMode__OrthoRight = 4,
		ENiagaraBakerViewMode__OrthoTop = 5,
		ENiagaraBakerViewMode__OrthoBottom = 6,
		ENiagaraBakerViewMode__Num = 7,
	};


	// Enum /Script/Niagara.ENiagaraOcclusionQueryMode
	enum ENiagaraOcclusionQueryMode
	{
		ENiagaraOcclusionQueryMode__Default = 0,
		ENiagaraOcclusionQueryMode__AlwaysEnabled = 1,
		ENiagaraOcclusionQueryMode__AlwaysDisabled = 2,
	};


	// Enum /Script/Niagara.ENiagartaDataChannelReadResult
	enum ENiagartaDataChannelReadResult
	{
		ENiagartaDataChannelReadResult__Success = 0,
		ENiagartaDataChannelReadResult__Failure = 1,
	};


	// Enum /Script/Niagara.ENiagaraDataInterfaceEmitterBindingMode
	enum ENiagaraDataInterfaceEmitterBindingMode
	{
		ENiagaraDataInterfaceEmitterBindingMode__Self = 0,
		ENiagaraDataInterfaceEmitterBindingMode__Other = 1,
	};


	// Enum /Script/Niagara.ENDIExport_GPUAllocationMode
	enum ENDIExport_GPUAllocationMode
	{
		ENDIExport_GPUAllocationMode__FixedSize = 0,
		ENDIExport_GPUAllocationMode__PerParticle = 1,
	};


	// Enum /Script/Niagara.ENDILandscape_SourceMode
	enum ENDILandscape_SourceMode
	{
		ENDILandscape_SourceMode__Default = 0,
		ENDILandscape_SourceMode__Source = 1,
		ENDILandscape_SourceMode__AttachParent = 2,
	};


	// Enum /Script/Niagara.ESetResolutionMethod
	enum ESetResolutionMethod
	{
		ESetResolutionMethod__Independent = 0,
		ESetResolutionMethod__MaxAxis = 1,
		ESetResolutionMethod__CellSize = 2,
	};


	// Enum /Script/Niagara.ENDISkeletalMesh_SourceMode
	enum ENDISkeletalMesh_SourceMode
	{
		ENDISkeletalMesh_SourceMode__Default = 0,
		ENDISkeletalMesh_SourceMode__Source = 1,
		ENDISkeletalMesh_SourceMode__AttachParent = 2,
		ENDISkeletalMesh_SourceMode__DefaultMeshOnly = 3,
	};


	// Enum /Script/Niagara.ENDISkeletalMesh_SkinningMode
	enum ENDISkeletalMesh_SkinningMode
	{
		ENDISkeletalMesh_SkinningMode__Invalid = FF,
		ENDISkeletalMesh_SkinningMode__None = 0,
		ENDISkeletalMesh_SkinningMode__SkinOnTheFly = 1,
		ENDISkeletalMesh_SkinningMode__PreSkin = 2,
	};


	// Enum /Script/Niagara.ENiagaraDebugPlaybackMode
	enum ENiagaraDebugPlaybackMode
	{
		ENiagaraDebugPlaybackMode__Play = 0,
		ENiagaraDebugPlaybackMode__Loop = 1,
		ENiagaraDebugPlaybackMode__Paused = 2,
		ENiagaraDebugPlaybackMode__Step = 3,
	};


	// Enum /Script/Niagara.ENiagaraDebugHudHAlign
	enum ENiagaraDebugHudHAlign
	{
		ENiagaraDebugHudHAlign__Left = 0,
		ENiagaraDebugHudHAlign__Center = 1,
		ENiagaraDebugHudHAlign__Right = 2,
	};


	// Enum /Script/Niagara.ENiagaraDebugHudVAlign
	enum ENiagaraDebugHudVAlign
	{
		ENiagaraDebugHudVAlign__Top = 0,
		ENiagaraDebugHudVAlign__Center = 1,
		ENiagaraDebugHudVAlign__Bottom = 2,
	};


	// Enum /Script/Niagara.ENiagaraDebugHudFont
	enum ENiagaraDebugHudFont
	{
		ENiagaraDebugHudFont__Small = 0,
		ENiagaraDebugHudFont__Normal = 1,
	};


	// Enum /Script/Niagara.ENiagaraDebugHudVerbosity
	enum ENiagaraDebugHudVerbosity
	{
		ENiagaraDebugHudVerbosity__None = 0,
		ENiagaraDebugHudVerbosity__Basic = 1,
		ENiagaraDebugHudVerbosity__Verbose = 2,
	};


	// Enum /Script/Niagara.ENiagaraDebugHUDOverviewMode
	enum ENiagaraDebugHUDOverviewMode
	{
		ENiagaraDebugHUDOverviewMode__Overview = 0,
		ENiagaraDebugHUDOverviewMode__Scalability = 1,
		ENiagaraDebugHUDOverviewMode__Performance = 2,
		ENiagaraDebugHUDOverviewMode__PerformanceGraph = 3,
		ENiagaraDebugHUDOverviewMode__GpuComputePerformance = 4,
	};


	// Enum /Script/Niagara.ENiagaraDebugHUDPerfGraphMode
	enum ENiagaraDebugHUDPerfGraphMode
	{
		ENiagaraDebugHUDPerfGraphMode__GameThread = 0,
		ENiagaraDebugHUDPerfGraphMode__RenderThread = 1,
		ENiagaraDebugHUDPerfGraphMode__GPU = 2,
	};


	// Enum /Script/Niagara.ENiagaraDebugHUDPerfSampleMode
	enum ENiagaraDebugHUDPerfSampleMode
	{
		ENiagaraDebugHUDPerfSampleMode__FrameTotal = 0,
		ENiagaraDebugHUDPerfSampleMode__PerInstanceAverage = 1,
	};


	// Enum /Script/Niagara.ENiagaraDebugHUDPerfUnits
	enum ENiagaraDebugHUDPerfUnits
	{
		ENiagaraDebugHUDPerfUnits__Microseconds = 0,
		ENiagaraDebugHUDPerfUnits__Milliseconds = 1,
	};


	// Enum /Script/Niagara.ENiagaraDebugHUDDOverviewSort
	enum ENiagaraDebugHUDDOverviewSort
	{
		ENiagaraDebugHUDDOverviewSort__Name = 0,
		ENiagaraDebugHUDDOverviewSort__NumberRegistered = 1,
		ENiagaraDebugHUDDOverviewSort__NumberActive = 2,
		ENiagaraDebugHUDDOverviewSort__NumberScalability = 3,
		ENiagaraDebugHUDDOverviewSort__MemoryUsage = 4,
		ENiagaraDebugHUDDOverviewSort__RecentlyVisibilty = 5,
	};


	// Enum /Script/Niagara.ENiagaraCullReaction
	enum ENiagaraCullReaction
	{
		ENiagaraCullReaction__Deactivate = 0,
		ENiagaraCullReaction__DeactivateImmediate = 1,
		ENiagaraCullReaction__DeactivateResume = 2,
		ENiagaraCullReaction__DeactivateImmediateResume = 3,
		ENiagaraCullReaction__PauseResume = 4,
	};


	// Enum /Script/Niagara.ENiagaraScalabilityUpdateFrequency
	enum ENiagaraScalabilityUpdateFrequency
	{
		ENiagaraScalabilityUpdateFrequency__SpawnOnly = 0,
		ENiagaraScalabilityUpdateFrequency__Low = 1,
		ENiagaraScalabilityUpdateFrequency__Medium = 2,
		ENiagaraScalabilityUpdateFrequency__High = 3,
		ENiagaraScalabilityUpdateFrequency__Continuous = 4,
	};


	// Enum /Script/Niagara.ENiagaraCullProxyMode
	enum ENiagaraCullProxyMode
	{
		ENiagaraCullProxyMode__None = 0,
		ENiagaraCullProxyMode__Instanced_Rendered = 1,
	};


	// Enum /Script/Niagara.EScriptExecutionMode
	enum EScriptExecutionMode
	{
		EScriptExecutionMode__EveryParticle = 0,
		EScriptExecutionMode__SpawnedParticles = 1,
		EScriptExecutionMode__SingleParticle = 2,
	};


	// Enum /Script/Niagara.EParticleAllocationMode
	enum EParticleAllocationMode
	{
		EParticleAllocationMode__AutomaticEstimate = 0,
		EParticleAllocationMode__ManualEstimate = 1,
		EParticleAllocationMode__FixedCount = 2,
	};


	// Enum /Script/Niagara.ENiagaraEmitterCalculateBoundMode
	enum ENiagaraEmitterCalculateBoundMode
	{
		ENiagaraEmitterCalculateBoundMode__Dynamic = 0,
		ENiagaraEmitterCalculateBoundMode__Fixed = 1,
		ENiagaraEmitterCalculateBoundMode__Programmable = 2,
	};


	// Enum /Script/Niagara.ENiagaraEmitterMode
	enum ENiagaraEmitterMode
	{
		ENiagaraEmitterMode__Standard = 0,
		ENiagaraEmitterMode__Stateless = 1,
	};


	// Enum /Script/Niagara.ENiagaraMeshFacingMode
	enum ENiagaraMeshFacingMode
	{
		ENiagaraMeshFacingMode__Default = 0,
		ENiagaraMeshFacingMode__Velocity = 1,
		ENiagaraMeshFacingMode__CameraPosition = 2,
		ENiagaraMeshFacingMode__CameraPlane = 3,
	};


	// Enum /Script/Niagara.ENiagaraMeshPivotOffsetSpace
	enum ENiagaraMeshPivotOffsetSpace
	{
		ENiagaraMeshPivotOffsetSpace__Mesh = 0,
		ENiagaraMeshPivotOffsetSpace__Simulation = 1,
		ENiagaraMeshPivotOffsetSpace__World = 2,
		ENiagaraMeshPivotOffsetSpace__Local = 3,
	};


	// Enum /Script/Niagara.ENiagaraMeshLockedAxisSpace
	enum ENiagaraMeshLockedAxisSpace
	{
		ENiagaraMeshLockedAxisSpace__Simulation = 0,
		ENiagaraMeshLockedAxisSpace__World = 1,
		ENiagaraMeshLockedAxisSpace__Local = 2,
	};


	// Enum /Script/Niagara.ENiagaraMeshLODMode
	enum ENiagaraMeshLODMode
	{
		ENiagaraMeshLODMode__LODLevel = 0,
		ENiagaraMeshLODMode__LODBias = 1,
		ENiagaraMeshLODMode__ByComponentBounds = 2,
		ENiagaraMeshLODMode__PerParticle = 3,
	};


	// Enum /Script/Niagara.ENiagaraPlatformSelectionState
	enum ENiagaraPlatformSelectionState
	{
		ENiagaraPlatformSelectionState__Default = 0,
		ENiagaraPlatformSelectionState__Enabled = 1,
		ENiagaraPlatformSelectionState__Disabled = 2,
	};


	// Enum /Script/Niagara.ENiagaraPlatformSetState
	enum ENiagaraPlatformSetState
	{
		ENiagaraPlatformSetState__Disabled = 0,
		ENiagaraPlatformSetState__Enabled = 1,
		ENiagaraPlatformSetState__Active = 2,
		ENiagaraPlatformSetState__Unknown = 3,
	};


	// Enum /Script/Niagara.ENiagaraCVarConditionResponse
	enum ENiagaraCVarConditionResponse
	{
		ENiagaraCVarConditionResponse__None = 0,
		ENiagaraCVarConditionResponse__Enable = 1,
		ENiagaraCVarConditionResponse__Disable = 2,
	};


	// Enum /Script/Niagara.ENiagaraDeviceProfileRedirectMode
	enum ENiagaraDeviceProfileRedirectMode
	{
		ENiagaraDeviceProfileRedirectMode__CVar = 0,
		ENiagaraDeviceProfileRedirectMode__DeviceProfile = 1,
	};


	// Enum /Script/Niagara.ENiagaraPreviewGridResetMode
	enum ENiagaraPreviewGridResetMode
	{
		ENiagaraPreviewGridResetMode__Never = 0,
		ENiagaraPreviewGridResetMode__Individual = 1,
		ENiagaraPreviewGridResetMode__All = 2,
	};


	// Enum /Script/Niagara.ENiagaraRendererSortPrecision
	enum ENiagaraRendererSortPrecision
	{
		ENiagaraRendererSortPrecision__Default = 0,
		ENiagaraRendererSortPrecision__Low = 1,
		ENiagaraRendererSortPrecision__High = 2,
	};


	// Enum /Script/Niagara.ENiagaraRendererGpuTranslucentLatency
	enum ENiagaraRendererGpuTranslucentLatency
	{
		ENiagaraRendererGpuTranslucentLatency__ProjectDefault = 0,
		ENiagaraRendererGpuTranslucentLatency__Immediate = 1,
		ENiagaraRendererGpuTranslucentLatency__Latent = 2,
	};


	// Enum /Script/Niagara.ENiagaraRibbonFacingMode
	enum ENiagaraRibbonFacingMode
	{
		ENiagaraRibbonFacingMode__Screen = 0,
		ENiagaraRibbonFacingMode__Custom = 1,
		ENiagaraRibbonFacingMode__CustomSideVector = 2,
	};


	// Enum /Script/Niagara.ENiagaraRibbonAgeOffsetMode
	enum ENiagaraRibbonAgeOffsetMode
	{
		ENiagaraRibbonAgeOffsetMode__Scale = 0,
		ENiagaraRibbonAgeOffsetMode__Clip = 1,
	};


	// Enum /Script/Niagara.ENiagaraRibbonDrawDirection
	enum ENiagaraRibbonDrawDirection
	{
		ENiagaraRibbonDrawDirection__FrontToBack = 0,
		ENiagaraRibbonDrawDirection__BackToFront = 1,
	};


	// Enum /Script/Niagara.ENiagaraRibbonShapeMode
	enum ENiagaraRibbonShapeMode
	{
		ENiagaraRibbonShapeMode__Plane = 0,
		ENiagaraRibbonShapeMode__MultiPlane = 1,
		ENiagaraRibbonShapeMode__Tube = 2,
		ENiagaraRibbonShapeMode__Custom = 3,
	};


	// Enum /Script/Niagara.ENiagaraRibbonTessellationMode
	enum ENiagaraRibbonTessellationMode
	{
		ENiagaraRibbonTessellationMode__Automatic = 0,
		ENiagaraRibbonTessellationMode__Custom = 1,
		ENiagaraRibbonTessellationMode__Disabled = 2,
	};


	// Enum /Script/Niagara.ENiagaraRibbonUVEdgeMode
	enum ENiagaraRibbonUVEdgeMode
	{
		ENiagaraRibbonUVEdgeMode__SmoothTransition = 0,
		ENiagaraRibbonUVEdgeMode__Locked = 1,
	};


	// Enum /Script/Niagara.ENiagaraRibbonUVDistributionMode
	enum ENiagaraRibbonUVDistributionMode
	{
		ENiagaraRibbonUVDistributionMode__ScaledUniformly = 0,
		ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength = 1,
		ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength = 2,
		ENiagaraRibbonUVDistributionMode__TiledFromStartOverRibbonLength = 3,
	};


	// Enum /Script/Niagara.EUnusedAttributeBehaviour
	enum EUnusedAttributeBehaviour
	{
		EUnusedAttributeBehaviour__Copy = 0,
		EUnusedAttributeBehaviour__Zero = 1,
		EUnusedAttributeBehaviour__None = 2,
		EUnusedAttributeBehaviour__MarkInvalid = 3,
		EUnusedAttributeBehaviour__PassThrough = 4,
	};


	// Enum /Script/Niagara.ENiagaraModuleDependencyType
	enum ENiagaraModuleDependencyType
	{
		ENiagaraModuleDependencyType__PreDependency = 0,
		ENiagaraModuleDependencyType__PostDependency = 1,
	};


	// Enum /Script/Niagara.ENiagaraModuleDependencyScriptConstraint
	enum ENiagaraModuleDependencyScriptConstraint
	{
		ENiagaraModuleDependencyScriptConstraint__SameScript = 0,
		ENiagaraModuleDependencyScriptConstraint__AllScripts = 1,
	};


	// Enum /Script/Niagara.ENiagaraScriptLibraryVisibility
	enum ENiagaraScriptLibraryVisibility
	{
		ENiagaraScriptLibraryVisibility__Invalid = 0,
		ENiagaraScriptLibraryVisibility__Unexposed = 1,
		ENiagaraScriptLibraryVisibility__Library = 2,
		ENiagaraScriptLibraryVisibility__Hidden = 3,
	};


	// Enum /Script/Niagara.ENiagaraScriptTemplateSpecification
	enum ENiagaraScriptTemplateSpecification
	{
		ENiagaraScriptTemplateSpecification__None = 0,
		ENiagaraScriptTemplateSpecification__Template = 1,
		ENiagaraScriptTemplateSpecification__Behavior = 2,
	};


	// Enum /Script/Niagara.ENiagaraEmitterDefaultSummaryState
	enum ENiagaraEmitterDefaultSummaryState
	{
		ENiagaraEmitterDefaultSummaryState__Default = 0,
		ENiagaraEmitterDefaultSummaryState__Summary = 1,
	};


	// Enum /Script/Niagara.ENiagaraModuleDependencyUsage
	enum ENiagaraModuleDependencyUsage
	{
		ENiagaraModuleDependencyUsage__None = 0,
		ENiagaraModuleDependencyUsage__Spawn = 1,
		ENiagaraModuleDependencyUsage__Update = 2,
		ENiagaraModuleDependencyUsage__Event = 3,
		ENiagaraModuleDependencyUsage__SimulationStage = 4,
	};


	// Enum /Script/Niagara.ENiagaraInlineDynamicInputFormatTokenUsage
	enum ENiagaraInlineDynamicInputFormatTokenUsage
	{
		ENiagaraInlineDynamicInputFormatTokenUsage__Input = 0,
		ENiagaraInlineDynamicInputFormatTokenUsage__Decorator = 1,
		ENiagaraInlineDynamicInputFormatTokenUsage__LineBreak = 2,
	};


	// Enum /Script/Niagara.ENiagaraSpriteAlignment
	enum ENiagaraSpriteAlignment
	{
		ENiagaraSpriteAlignment__Unaligned = 0,
		ENiagaraSpriteAlignment__VelocityAligned = 1,
		ENiagaraSpriteAlignment__CustomAlignment = 2,
		ENiagaraSpriteAlignment__Automatic = 3,
	};


	// Enum /Script/Niagara.ENiagaraSpriteFacingMode
	enum ENiagaraSpriteFacingMode
	{
		ENiagaraSpriteFacingMode__FaceCamera = 0,
		ENiagaraSpriteFacingMode__FaceCameraPlane = 1,
		ENiagaraSpriteFacingMode__CustomFacingVector = 2,
		ENiagaraSpriteFacingMode__FaceCameraPosition = 3,
		ENiagaraSpriteFacingMode__FaceCameraDistanceBlend = 4,
		ENiagaraSpriteFacingMode__Automatic = 5,
	};


	// Enum /Script/Niagara.ENiagaraRendererPixelCoverageMode
	enum ENiagaraRendererPixelCoverageMode
	{
		ENiagaraRendererPixelCoverageMode__Automatic = 0,
		ENiagaraRendererPixelCoverageMode__Disabled = 1,
		ENiagaraRendererPixelCoverageMode__Enabled = 2,
		ENiagaraRendererPixelCoverageMode__Enabled_RGBA = 3,
		ENiagaraRendererPixelCoverageMode__Enabled_RGB = 4,
		ENiagaraRendererPixelCoverageMode__Enabled_A = 5,
	};


	// Enum /Script/Niagara.ENiagaraStructConversionType
	enum ENiagaraStructConversionType
	{
		ENiagaraStructConversionType__CopyOnly = 0,
		ENiagaraStructConversionType__DoubleToFloat = 1,
		ENiagaraStructConversionType__Vector2 = 2,
		ENiagaraStructConversionType__Vector3 = 3,
		ENiagaraStructConversionType__Vector4 = 4,
		ENiagaraStructConversionType__Quat = 5,
	};


	// Enum /Script/Niagara.ENiagaraNumericOutputTypeSelectionMode
	enum ENiagaraNumericOutputTypeSelectionMode
	{
		ENiagaraNumericOutputTypeSelectionMode__None = 0,
		ENiagaraNumericOutputTypeSelectionMode__Largest = 1,
		ENiagaraNumericOutputTypeSelectionMode__Smallest = 2,
		ENiagaraNumericOutputTypeSelectionMode__Scalar = 3,
		ENiagaraNumericOutputTypeSelectionMode__Custom = 4,
	};


	// Enum /Script/Niagara.ENiagaraExecutionStateSource
	enum ENiagaraExecutionStateSource
	{
		ENiagaraExecutionStateSource__Scalability = 0,
		ENiagaraExecutionStateSource__Internal = 1,
		ENiagaraExecutionStateSource__Owner = 2,
		ENiagaraExecutionStateSource__InternalCompletion = 3,
	};


	// Enum /Script/Niagara.ENiagaraExecutionState
	enum ENiagaraExecutionState
	{
		ENiagaraExecutionState__Active = 0,
		ENiagaraExecutionState__Inactive = 1,
		ENiagaraExecutionState__InactiveClear = 2,
		ENiagaraExecutionState__Complete = 3,
		ENiagaraExecutionState__Disabled = 4,
		ENiagaraExecutionState__Num = 5,
	};


	// Enum /Script/Niagara.ENiagaraExecutionStateManagement
	enum ENiagaraExecutionStateManagement
	{
		ENiagaraExecutionStateManagement__Awaken = 0,
		ENiagaraExecutionStateManagement__SleepAndLetParticlesFinish = 1,
		ENiagaraExecutionStateManagement__SleepAndClearParticles = 2,
		ENiagaraExecutionStateManagement__KillImmediately = 3,
		ENiagaraExecutionStateManagement__KillAfterParticlesFinish = 4,
		ENiagaraExecutionStateManagement__Num = 5,
	};


	// Enum /Script/Niagara.ENiagaraCoordinateSpace
	enum ENiagaraCoordinateSpace
	{
		ENiagaraCoordinateSpace__Simulation = 0,
		ENiagaraCoordinateSpace__World = 1,
		ENiagaraCoordinateSpace__Local = 2,
	};


	// Enum /Script/Niagara.ENiagaraPythonUpdateScriptReference
	enum ENiagaraPythonUpdateScriptReference
	{
		ENiagaraPythonUpdateScriptReference__None = 0,
		ENiagaraPythonUpdateScriptReference__ScriptAsset = 1,
		ENiagaraPythonUpdateScriptReference__DirectTextEntry = 2,
	};


	// Enum /Script/Niagara.ENiagaraOrientationAxis
	enum ENiagaraOrientationAxis
	{
		ENiagaraOrientationAxis__XAxis = 0,
		ENiagaraOrientationAxis__YAxis = 1,
		ENiagaraOrientationAxis__ZAxis = 2,
	};


	// Enum /Script/Niagara.ENiagaraValidationSeverity
	enum ENiagaraValidationSeverity
	{
		ENiagaraValidationSeverity__Info = 0,
		ENiagaraValidationSeverity__Warning = 1,
		ENiagaraValidationSeverity__Error = 2,
	};


	// Enum /Script/Niagara.ENiagaraVariantMode
	enum ENiagaraVariantMode
	{
		ENiagaraVariantMode__None = 0,
		ENiagaraVariantMode__Object = 1,
		ENiagaraVariantMode__DataInterface = 2,
		ENiagaraVariantMode__Bytes = 3,
	};


	// Enum /Script/Niagara.EVolumeCacheType
	enum EVolumeCacheType
	{
		EVolumeCacheType__OpenVDB = 0,
	};

}
