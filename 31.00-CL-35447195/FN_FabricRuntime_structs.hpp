#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FabricRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct FabricRuntime.InteractionData
	// Size: 0xC (0xC - 0x0)
	struct FInteractionData	
	{
	public:
		EFabricInteractionToolStates InteractionState; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr InteractableOwnerDevice; // 0x4(0x8)
	};


	// Struct FabricRuntime.InteractionSplinePoints
	// Size: 0x60 (0x60 - 0x0)
	struct FInteractionSplinePoints	
	{
	public:
		FVector_NetQuantize10 SplineStartLocation; // 0x0(0x18)
		FVector_NetQuantize10 SplineStartForward; // 0x18(0x18)
		FVector_NetQuantize10 SplineEndLocation; // 0x30(0x18)
		FVector_NetQuantize10 SplineEndForward; // 0x48(0x18)
	};


	// Struct FabricRuntime.FabricMetaSoundPatchWrapperBinding
	// Size: 0x50 (0x50 - 0x0)
	struct FFabricMetaSoundPatchWrapperBinding	
	{
	public:
		FName FriendlyName; // 0x0(0x4)
		bool bAllowOnDedicatedServer; // 0x4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FFabricMetaSoundPatchWrapperPeakTamer PeakTamer; // 0x8(0x24)
		FName MetaSoundNodeName; // 0x2C(0x4)
		TArray Signals; // 0x30(0x10)
		bool bBoundToWatchEvents; // 0x40(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x41(0xF) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.FabricMetaSoundPatchWrapperPeakTamer
	// Size: 0x24 (0x24 - 0x0)
	struct FFabricMetaSoundPatchWrapperPeakTamer	
	{
	public:
		bool bUseGameplaySmoothing; // 0x0(0x1)
		bool bSortSignals; // 0x1(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		int32_t MaxSignalsToTame; // 0x4(0x4)
		unsigned char UnknownData03_7[0x1C]; // 0x8(0x1C) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.FabricMetaSoundPatchWrapperWetDryOutputBinding
	// Size: 0xA0 (0xA0 - 0x0)
	struct FFabricMetaSoundPatchWrapperWetDryOutputBinding	
	{
	public:
		FFabricMetaSoundPatchWrapperBinding WetOutputSignalBinding; // 0x0(0x50)
		FFabricMetaSoundPatchWrapperBinding DryOutputSignalBinding; // 0x50(0x50)
	};


	// Struct FabricRuntime.FabricMetaSoundSpeakerPatchWrapperEqBandsBinding
	// Inherited from FFabricMetaSoundPatchWrapperBinding
	// Size: 0x8 (0x58 - 0x50)
	struct FFabricMetaSoundSpeakerPatchWrapperEqBandsBinding : public FFabricMetaSoundPatchWrapperBinding	
	{
	public:
		int32_t PrimitiveDataIndex; // 0x50(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.FabricSequencerStepChangedInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FFabricSequencerStepChangedInfo	
	{
	public:
		int32_t Page; // 0x0(0x4)
		int32_t Row; // 0x4(0x4)
		int32_t Step; // 0x8(0x4)
		FStepSequenceCell Cell; // 0xC(0x2)
		unsigned char UnknownData01_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.FabricProgressionPreset
	// Inherited from FTableRowBase
	// Size: 0x18 (0x20 - 0x8)
	struct FFabricProgressionPreset : public FTableRowBase	
	{
	public:
		FText ProgressionName; // 0x8(0x10)
		EHarmonicProgression Interval0; // 0x18(0x1)
		EHarmonicProgression Interval1; // 0x19(0x1)
		EHarmonicProgression Interval2; // 0x1A(0x1)
		EHarmonicProgression Interval3; // 0x1B(0x1)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.FabricTextureProviderTexture
	// Size: 0x18 (0x18 - 0x0)
	struct FFabricTextureProviderTexture	
	{
	public:
		UTexture Texture; // 0x0(0x8)
		FLinearColor Tint; // 0x8(0x10)
	};


	// Struct FabricRuntime.FabricLFOGenerator
	// Size: 0x78 (0x78 - 0x0)
	struct FFabricLFOGenerator	
	{
	public:
		EFabricWaveShape WaveShape; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Minimum; // 0x4(0x4)
		float Maximum; // 0x8(0x4)
		float Shape; // 0xC(0x4)
		int32_t InitialSeed; // 0x10(0x4)
		unsigned char UnknownData03_7[0x64]; // 0x14(0x64) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.FabricStepGenerator
	// Size: 0x20 (0x20 - 0x0)
	struct FFabricStepGenerator	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TArray Values; // 0x8(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.FabricValueSetterGenerator
	// Size: 0x58 (0x58 - 0x0)
	struct FFabricValueSetterGenerator	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		int32_t PhraseLengthInBars; // 0x8(0x4)
		unsigned char UnknownData03_7[0x4C]; // 0xC(0x4C) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.FabricMeshProviderMeshReferenceParamInfo
	// Size: 0xC (0xC - 0x0)
	struct FFabricMeshProviderMeshReferenceParamInfo	
	{
	public:
		FMaterialParameterInfo MaterialParameterInfo; // 0x0(0xC)
	};


	// Struct FabricRuntime.FabricMeshProviderMeshReferenceParamInfo_Scalar
	// Inherited from FFabricMeshProviderMeshReferenceParamInfo
	// Size: 0x4 (0x10 - 0xC)
	struct FFabricMeshProviderMeshReferenceParamInfo_Scalar : public FFabricMeshProviderMeshReferenceParamInfo	
	{
	public:
		float Scalar; // 0xC(0x4)
	};


	// Struct FabricRuntime.FabricMeshProviderMeshReferenceParamInfo_Color
	// Inherited from FFabricMeshProviderMeshReferenceParamInfo
	// Size: 0x10 (0x1C - 0xC)
	struct FFabricMeshProviderMeshReferenceParamInfo_Color : public FFabricMeshProviderMeshReferenceParamInfo	
	{
	public:
		FLinearColor Color; // 0xC(0x10)
	};


	// Struct FabricRuntime.FabricMeshProviderMeshReferenceParams
	// Size: 0x28 (0x28 - 0x0)
	struct FFabricMeshProviderMeshReferenceParams	
	{
	public:
		double UniformScale; // 0x0(0x8)
		TArray ScalarParams; // 0x8(0x10)
		TArray ColorParams; // 0x18(0x10)
	};


	// Struct FabricRuntime.FabricMeshProviderMeshReference
	// Size: 0x38 (0x38 - 0x0)
	struct FFabricMeshProviderMeshReference	
	{
	public:
		UStreamableRenderAsset Mesh; // 0x0(0x8)
		UTexture Texture; // 0x8(0x8)
		FFabricMeshProviderMeshReferenceParams Params; // 0x10(0x28)
	};


	// Struct FabricRuntime.FabricMeshInstanceReference
	// Size: 0x48 (0x48 - 0x0)
	struct FFabricMeshInstanceReference	
	{
	public:
		FFabricMeshProviderMeshReference MeshReference; // 0x0(0x38)
		TArray InstanceTransforms; // 0x38(0x10)
	};


	// Struct FabricRuntime.FabricMetaSoundMergeNode
	// Size: 0x158 (0x158 - 0x0)
	struct FFabricMetaSoundMergeNode	
	{
	public:
		FMetaSoundCombinerNodeHandle CombinerNode; // 0x0(0x150)
		unsigned char UnknownData01_7[0x8]; // 0x150(0x8) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.MetaSoundCombinerNodeHandle
	// Size: 0x150 (0x150 - 0x0)
	struct FMetaSoundCombinerNodeHandle	
	{
	public:
		FFabricMetaSoundNodeInfo NodeInfo; // 0x0(0xF0)
		FMetaSoundBuilderNodeInputHandle CombinerInput1; // 0xF0(0x20)
		FMetaSoundBuilderNodeInputHandle CombinerInput2; // 0x110(0x20)
		FMetaSoundBuilderNodeOutputHandle CombinedOutput; // 0x130(0x20)
	};


	// Struct FabricRuntime.FabricMetaSoundNodeInfo
	// Size: 0xF0 (0xF0 - 0x0)
	struct FFabricMetaSoundNodeInfo	
	{
	public:
		FMetaSoundNodeHandle NodeHandle; // 0x0(0x10)
		FMetaSoundNodeHandle OutputConnectionHandle; // 0x10(0x10)
		FMetaSoundNodeHandle InputConnectionHandle; // 0x20(0x10)
		FName Name; // 0x30(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TMap InputNodeNamesToHandles; // 0x38(0x50)
		FMetaSoundNodeHandle AnalyzerHandle; // 0x88(0x10)
		UMetasoundParameterPack AnalyzerParameterPack; // 0x98(0x8)
		FName AnalyzerName; // 0xA0(0x4)
		FMetaSoundNodeHandle SwitcherHandle; // 0xA4(0x10)
		FMetaSoundNodeHandle SelectHandle; // 0xB4(0x10)
		FName NodeEnabledInput; // 0xC4(0x4)
		FName AnalyzerNodeVisibleInput; // 0xC8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		TArray AnalyzerOutputNames; // 0xD0(0x10)
		UMetaSoundPatch PatchSpawnedFrom; // 0xE0(0x8)
		UMetasoundParameterPack ParameterPack; // 0xE8(0x8)
	};


	// Struct FabricRuntime.FabricMetaSoundConnectionBuilder
	// Size: 0xC0 (0xC0 - 0x0)
	struct FFabricMetaSoundConnectionBuilder	
	{
	public:
		unsigned char UnknownData01_7[0xB0]; // 0x0(0xB0) UNKNOWN PROPERTY
		TArray MergeList; // 0xB0(0x10)
	};


	// Struct FabricRuntime.FabricMetaSoundNodePool
	// Size: 0x20 (0x20 - 0x0)
	struct FFabricMetaSoundNodePool	
	{
	public:
		int32_t NumberAdded; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray FreeNodes; // 0x8(0x10)
		UMetaSoundPatch PatchSpawnedFrom; // 0x18(0x8)
	};


	// Struct FabricRuntime.FabricMetaSoundUtilityParams
	// Size: 0x8 (0x8 - 0x0)
	struct FFabricMetaSoundUtilityParams	
	{
	public:
		FName SwitcherEnabledParam; // 0x0(0x4)
		FName SelectEnabledParam; // 0x4(0x4)
	};


	// Struct FabricRuntime.FabricMetaSoundUtilityPatches
	// Size: 0x88 (0x88 - 0x0)
	struct FFabricMetaSoundUtilityPatches	
	{
	public:
		TWeakObjectPtr CombinerNode; // 0x0(0x20)
		TWeakObjectPtr SwitcherNode; // 0x20(0x20)
		TWeakObjectPtr SelectNode; // 0x40(0x20)
		TWeakObjectPtr AnalyzerNode; // 0x60(0x20)
		FFabricMetaSoundUtilityParams UtilityNodeParams; // 0x80(0x8)
	};


	// Struct FabricRuntime.FabricLoadedUtilityPatches
	// Size: 0x28 (0x28 - 0x0)
	struct FFabricLoadedUtilityPatches	
	{
	public:
		UMetaSoundPatch CombinerNode; // 0x0(0x8)
		UMetaSoundPatch SwitcherNode; // 0x8(0x8)
		UMetaSoundPatch SelectNode; // 0x10(0x8)
		UMetaSoundPatch AnalyzerNode; // 0x18(0x8)
		FFabricMetaSoundUtilityParams UtilityNodeParams; // 0x20(0x8)
	};


	// Struct FabricRuntime.FabricTransportRequestConfig
	// Size: 0xC (0xC - 0x0)
	struct FFabricTransportRequestConfig	
	{
	public:
		EFabricMetasoundPlayStrategy PlayStrategy; // 0x0(0x1)
		EFabricMetasoundPlayPriority PlayPriority; // 0x1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr LockingDevice; // 0x4(0x8)
	};


	// Struct FabricRuntime.FabricMetaSoundDirectInputInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FFabricMetaSoundDirectInputInfo	
	{
	public:
		FName MetaSoundInputName; // 0x0(0x4)
		EFabricUserOptionType InputType; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.FabricMetaSoundUserOptionInputInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FFabricMetaSoundUserOptionInputInfo	
	{
	public:
		FString UserOption; // 0x0(0x10)
		FName MetaSoundInputName; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.FabricMetaSoundRuntimeInputInfo
	// Size: 0x240 (0x240 - 0x0)
	struct FFabricMetaSoundRuntimeInputInfo	
	{
	public:
		FFabricMetaSoundUserOptionInputInfo InputInfo; // 0x0(0x18)
		EFabricMetasoundInputType InputType; // 0x18(0x1)
		EFabricUserOptionType FabricKnobType; // 0x19(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
		FName DataType; // 0x1C(0x4)
		FName MetaSoundInputNodeName; // 0x20(0x4)
		unsigned char UnknownData04_6[0x5C]; // 0x24(0x5C) UNKNOWN PROPERTY
		UFabricMetaSoundUserOption MetaSoundUserOption; // 0x80(0x8)
		unsigned char UnknownData05_6[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
		FFabricMetaSoundNodeInfo UserOptionConverterNode; // 0x90(0xF0)
		FFabricMetaSoundConnectionBuilder InputBuilder; // 0x180(0xC0)
	};


	// Struct FabricRuntime.FabricConnectedInputWrapperInfo
	// Size: 0x230 (0x230 - 0x0)
	struct FFabricConnectedInputWrapperInfo	
	{
	public:
		bool bDirectlyConnected; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UFabricMetaSoundPatchWrapper Wrapper; // 0x8(0x8)
		FFabricMetaSoundNodeInfo OutputNode; // 0x10(0xF0)
		FMetaSoundBuilderNodeOutputHandle ConnectedNodeOutput; // 0x100(0x20)
		FFabricMetaSoundNodeInfo InputNode; // 0x120(0xF0)
		FMetaSoundBuilderNodeInputHandle CombinerNodeInput; // 0x210(0x20)
	};


	// Struct FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformInputTuning
	// Size: 0x8 (0x8 - 0x0)
	struct FFabricMetaSoundPatchWrapper_PerPlatformInputTuning	
	{
	public:
		FName NodeInputName; // 0x0(0x4)
		bool bUseDefaultValues; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning
	// Inherited from FFabricMetaSoundPatchWrapper_PerPlatformInputTuning
	// Size: 0x58 (0x60 - 0x8)
	struct FFabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning : public FFabricMetaSoundPatchWrapper_PerPlatformInputTuning	
	{
	public:
		bool bDefaultValue; // 0x8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		TMap PerPlatformTuning; // 0x10(0x50)
	};


	// Struct FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformIntInputTuning
	// Inherited from FFabricMetaSoundPatchWrapper_PerPlatformInputTuning
	// Size: 0x58 (0x60 - 0x8)
	struct FFabricMetaSoundPatchWrapper_PerPlatformIntInputTuning : public FFabricMetaSoundPatchWrapper_PerPlatformInputTuning	
	{
	public:
		int32_t DefaultValue; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TMap PerPlatformTuning; // 0x10(0x50)
	};


	// Struct FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning
	// Inherited from FFabricMetaSoundPatchWrapper_PerPlatformInputTuning
	// Size: 0x58 (0x60 - 0x8)
	struct FFabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning : public FFabricMetaSoundPatchWrapper_PerPlatformInputTuning	
	{
	public:
		float DefaultValue; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TMap PerPlatformTuning; // 0x10(0x50)
	};


	// Struct FabricRuntime.MusicalPosition
	// Size: 0x8 (0x8 - 0x0)
	struct FMusicalPosition	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.MidiFollowData
	// Size: 0xC (0xC - 0x0)
	struct FMidiFollowData	
	{
	public:
		bool bUseMidiFileTempoMap; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float BeatOffset; // 0x4(0x4)
		float MsOffset; // 0x8(0x4)
	};


	// Struct FabricRuntime.FabricSignificanceBasedUpdateBucket
	// Size: 0x10 (0x10 - 0x0)
	struct FFabricSignificanceBasedUpdateBucket	
	{
	public:
		float MinDistanceFromPlayer; // 0x0(0x4)
		float MaxDistanceFromPlayer; // 0x4(0x4)
		float FramesPerUpdate; // 0x8(0x4)
		int32_t MaxObjectsInBucket; // 0xC(0x4)
	};


	// Struct FabricRuntime.FabricSignificanceBasedUpdateBucketRuntimeGroup
	// Size: 0x18 (0x18 - 0x0)
	struct FFabricSignificanceBasedUpdateBucketRuntimeGroup	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TArray ObjectsInGroup; // 0x8(0x10)
	};


	// Struct FabricRuntime.FabricSignificanceBasedUpdateBucketRuntime
	// Size: 0x28 (0x28 - 0x0)
	struct FFabricSignificanceBasedUpdateBucketRuntime	
	{
	public:
		float ActualMinSignificance; // 0x0(0x4)
		float ActualMaxSignificance; // 0x4(0x4)
		int32_t ActualMaxObjectsInBucket; // 0x8(0x4)
		int32_t ActualFramesPerUpdate; // 0xC(0x4)
		int32_t TotalObjectsInBucketCount; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray UpdateGroups; // 0x18(0x10)
	};


	// Struct FabricRuntime.FabricStepTrackPacked
	// Size: 0x28 (0x28 - 0x0)
	struct FFabricStepTrackPacked	
	{
	public:
		TArray PackedEnabledSquares; // 0x0(0x10)
		TArray PackedContinuationSquares; // 0x10(0x10)
		int32_t TrackIndex; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.FabricStepPagePacked
	// Size: 0x18 (0x18 - 0x0)
	struct FFabricStepPagePacked	
	{
	public:
		TArray PackedTracks; // 0x0(0x10)
		int32_t PageNumber; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.FabricStepTablePacked
	// Size: 0x28 (0x28 - 0x0)
	struct FFabricStepTablePacked	
	{
	public:
		TArray PackedPages; // 0x0(0x10)
		TArray Notes; // 0x10(0x10)
		int32_t StepSkipIndex; // 0x20(0x4)
		bool bHasRepDelayApplied; // 0x24(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
	};


	// Struct FabricRuntime.FabricStepSequencerComponentBaseInstanceData
	// Inherited from FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0x28 (0x90 - 0x68)
	struct FFabricStepSequencerComponentBaseInstanceData : public FActorComponentInstanceData	
	{
	public:
		FFabricStepTablePacked PackedStepTable; // 0x68(0x28)
	};


	// Struct FabricRuntime.TrackRow
	// Size: 0x10 (0x10 - 0x0)
	struct FTrackRow	
	{
	public:
		TArray GridSquares; // 0x0(0x10)
	};


	// Struct FabricRuntime.FabricTimelineSyncServerSongPosition
	// Size: 0x1C (0x1C - 0x0)
	struct FFabricTimelineSyncServerSongPosition	
	{
	public:
		FMusicTimestamp Timestamp; // 0x0(0x8)
		float SecondsIncludingCountIn; // 0x8(0x4)
		float Tempo; // 0xC(0x4)
		float BeatsIncludingCountIn; // 0x10(0x4)
		float NetServerTimeWhenSent; // 0x14(0x4)
		float TimeSigDenominator; // 0x18(0x4)
	};


	// Struct FabricRuntime.FabricVFXTopperDataEntry
	// Size: 0x20 (0x20 - 0x0)
	struct FFabricVFXTopperDataEntry	
	{
	public:
		UStaticMesh StaticMesh; // 0x0(0x8)
		TArray MaterialInstance; // 0x8(0x10)
		UNiagaraSystem NiagaraSystem; // 0x18(0x8)
	};

}
