#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GeometryCache
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GeometryCache.GeometryCache
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UGeometryCache : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray Materials; // 0x30(0x10)
		TArray MaterialSlotNames; // 0x40(0x10)
		TArray Tracks; // 0x50(0x10)
		TArray AssetUserData; // 0x60(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x70(0x8) UNKNOWN PROPERTY
		int32_t StartFrame; // 0x78(0x4)
		int32_t EndFrame; // 0x7C(0x4)
		uint64_t Hash; // 0x80(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCache");
			return ret;
		}
	};


	// Class GeometryCache.GeometryCacheActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AGeometryCacheActor : public AActor	
	{
	public:
		UGeometryCacheComponent GeometryCacheComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCacheActor");
			return ret;
		}

		UGeometryCacheComponent GetGeometryCacheComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D08218
	};


	// Class GeometryCache.GeometryCacheCodecBase
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGeometryCacheCodecBase : public UObject	
	{
	public:
		TArray TopologyRanges; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCacheCodecBase");
			return ret;
		}
	};


	// Class GeometryCache.GeometryCacheCodecRaw
	// Inherited from UGeometryCacheCodecBase -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase	
	{
	public:
		int32_t DummyProperty; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCacheCodecRaw");
			return ret;
		}
	};


	// Class GeometryCache.GeometryCacheCodecV1
	// Inherited from UGeometryCacheCodecBase -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCacheCodecV1");
			return ret;
		}
	};


	// Class GeometryCache.GeometryCacheComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x580 - 0x4F8)
	class UGeometryCacheComponent : public UMeshComponent	
	{
	public:
		UGeometryCache GeometryCache; // 0x4F8(0x8)
		bool bRunning; // 0x500(0x1)
		bool bLooping; // 0x501(0x1)
		bool bExtrapolateFrames; // 0x502(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x503(0x1) UNKNOWN PROPERTY
		float StartTimeOffset; // 0x504(0x4)
		float PlaybackSpeed; // 0x508(0x4)
		float MotionVectorScale; // 0x50C(0x4)
		int32_t NumTracks; // 0x510(0x4)
		float ElapsedTime; // 0x514(0x4)
		unsigned char UnknownData05_6[0x4C]; // 0x518(0x4C) UNKNOWN PROPERTY
		float duration; // 0x564(0x4)
		bool bManualTick; // 0x568(0x1)
		bool bOverrideWireframeColor; // 0x569(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x56A(0x2) UNKNOWN PROPERTY
		FLinearColor WireframeOverrideColor; // 0x56C(0x10)
		unsigned char UnknownData07_7[0x4]; // 0x57C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCacheComponent");
			return ret;
		}

		void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D09A98
		void Stop(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D099B8
		void SetWireframeOverrideColor(FLinearColor Color); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414D098D8
		void SetStartTimeOffset(float NewStartTimeOffset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D097F8
		void SetPlaybackSpeed(float NewPlaybackSpeed); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D09718
		void SetOverrideWireframeColor(bool bOverride); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D09638
		void SetMotionVectorScale(float NewMotionVectorScale); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D09558
		void SetLooping(bool bNewLooping); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D09478
		bool SetGeometryCache(UGeometryCache NewGeomCache); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D09398
		void SetExtrapolateFrames(bool bNewExtrapolating); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D092B8
		void PlayReversedFromEnd(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D091D8
		void PlayReversed(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D090F8
		void PlayFromStart(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D09018
		void Play(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D08F38
		void Pause(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D08E58
		bool IsPlayingReversed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D08D78
		bool IsPlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D08C98
		bool IsLooping(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D08BB8
		bool IsExtrapolatingFrames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D08AD8
		FLinearColor GetWireframeOverrideColor(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D089F8
		float GetStartTimeOffset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D08918
		float GetPlaybackSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D08838
		float GetPlaybackDirection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D08758
		bool GetOverrideWireframeColor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D08678
		int32_t GetNumberOfFrames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D08598
		float GetMotionVectorScale(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D084B8
		float GetDuration(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D083D8
		float GetAnimationTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D082F8
	};


	// Class GeometryCache.GeometryCacheTrack
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UGeometryCacheTrack : public UObject	
	{
	public:
		float duration; // 0x28(0x4)
		unsigned char UnknownData01_7[0x2C]; // 0x2C(0x2C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCacheTrack");
			return ret;
		}
	};


	// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
	// Inherited from UGeometryCacheTrack -> UObject
	// Size: 0x28 (0x80 - 0x58)
	class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack	
	{
	public:
		uint32_t NumMeshSamples; // 0x58(0x4)
		unsigned char UnknownData01_7[0x24]; // 0x5C(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation");
			return ret;
		}

		void AddMeshSample(FGeometryCacheMeshData& MeshData, float SampleTime); // Flags: Final|Native|Public|HasOutParms 0x7FF414D09B78
	};


	// Class GeometryCache.GeometryCacheTrackStreamable
	// Inherited from UGeometryCacheTrack -> UObject
	// Size: 0x78 (0xD0 - 0x58)
	class UGeometryCacheTrackStreamable : public UGeometryCacheTrack	
	{
	public:
		UGeometryCacheCodecBase Codec; // 0x58(0x8)
		unsigned char UnknownData02_6[0x60]; // 0x60(0x60) UNKNOWN PROPERTY
		float StartSampleTime; // 0xC0(0x4)
		unsigned char UnknownData03_7[0xC]; // 0xC4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCacheTrackStreamable");
			return ret;
		}
	};


	// Class GeometryCache.GeometryCacheTrack_TransformAnimation
	// Inherited from UGeometryCacheTrack -> UObject
	// Size: 0xC8 (0x120 - 0x58)
	class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack	
	{
	public:
		unsigned char UnknownData01_1[0xC8]; // 0x58(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCacheTrack_TransformAnimation");
			return ret;
		}

		void SetMesh(FGeometryCacheMeshData& NewMeshData); // Flags: Final|Native|Public|HasOutParms 0x7FF414D09C58
	};


	// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
	// Inherited from UGeometryCacheTrack -> UObject
	// Size: 0xC8 (0x120 - 0x58)
	class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack	
	{
	public:
		unsigned char UnknownData01_1[0xC8]; // 0x58(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation");
			return ret;
		}

		void SetMesh(FGeometryCacheMeshData& NewMeshData); // Flags: Final|Native|Public|HasOutParms 0x7FF414D09D38
	};


	// Class GeometryCache.NiagaraGeometryCacheRendererProperties
	// Inherited from UNiagaraRendererProperties -> UNiagaraMergeable -> UObject
	// Size: 0x1B8 (0x268 - 0xB0)
	class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties	
	{
	public:
		TArray GeometryCaches; // 0xB0(0x10)
		ENiagaraRendererSourceDataMode SourceMode; // 0xC0(0x1)
		bool bIsLooping; // 0xC1(0x1)
		unsigned char UnknownData03_6[0x2]; // 0xC2(0x2) UNKNOWN PROPERTY
		uint32_t ComponentCountLimit; // 0xC4(0x4)
		FNiagaraVariableAttributeBinding PositionBinding; // 0xC8(0x28)
		FNiagaraVariableAttributeBinding RotationBinding; // 0xF0(0x28)
		FNiagaraVariableAttributeBinding ScaleBinding; // 0x118(0x28)
		FNiagaraVariableAttributeBinding ElapsedTimeBinding; // 0x140(0x28)
		FNiagaraVariableAttributeBinding EnabledBinding; // 0x168(0x28)
		FNiagaraVariableAttributeBinding ArrayIndexBinding; // 0x190(0x28)
		FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x1B8(0x28)
		int32_t RendererVisibility; // 0x1E0(0x4)
		bool bAssignComponentsOnParticleID; // 0x1E4(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x1E5(0x3) UNKNOWN PROPERTY
		FNiagaraRendererMaterialParameters MaterialParameters; // 0x1E8(0x50)
		unsigned char UnknownData05_7[0x30]; // 0x238(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.NiagaraGeometryCacheRendererProperties");
			return ret;
		}
	};

}
