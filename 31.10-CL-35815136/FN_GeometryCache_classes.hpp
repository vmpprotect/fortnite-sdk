#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GeometryCache
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GeometryCache.GeometryCache
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UGeometryCache : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray<UMaterialInterface*> Materials; // 0x30(0x10)
		TArray<FName> MaterialSlotNames; // 0x40(0x10)
		TArray<UGeometryCacheTrack*> Tracks; // 0x50(0x10)
		TArray<UAssetUserData*> AssetUserData; // 0x60(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x70(0x8) UNKNOWN PROPERTY
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
		UGeometryCacheComponent* GeometryCacheComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCacheActor");
			return ret;
		}

		UGeometryCacheComponent GetGeometryCacheComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFEA8(relative to base address)
	};


	// Class GeometryCache.GeometryCacheCodecBase
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGeometryCacheCodecBase : public UObject	
	{
	public:
		TArray<int32_t> TopologyRanges; // 0x28(0x10)

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
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

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
		UGeometryCache* GeometryCache; // 0x4F8(0x8)
		bool bRunning; // 0x500(0x1)
		bool bLooping; // 0x501(0x1)
		bool bExtrapolateFrames; // 0x502(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x503(0x1) UNKNOWN PROPERTY
		float StartTimeOffset; // 0x504(0x4)
		float PlaybackSpeed; // 0x508(0x4)
		float MotionVectorScale; // 0x50C(0x4)
		int32_t NumTracks; // 0x510(0x4)
		float ElapsedTime; // 0x514(0x4)
		unsigned char UnknownData01_6[0x4C]; // 0x518(0x4C) UNKNOWN PROPERTY
		float duration; // 0x564(0x4)
		bool bManualTick; // 0x568(0x1)
		bool bOverrideWireframeColor; // 0x569(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x56A(0x2) UNKNOWN PROPERTY
		FLinearColor WireframeOverrideColor; // 0x56C(0x10)
		unsigned char UnknownData03_7[0x4]; // 0x57C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCacheComponent");
			return ret;
		}

		void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751460220(relative to base address)
		void Stop(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751460208(relative to base address)
		void SetWireframeOverrideColor(FLinearColor Color); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7514600FC(relative to base address)
		void SetStartTimeOffset(float NewStartTimeOffset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751460058(relative to base address)
		void SetPlaybackSpeed(float NewPlaybackSpeed); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75145FFC8(relative to base address)
		void SetOverrideWireframeColor(bool bOverride); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75145FF48(relative to base address)
		void SetMotionVectorScale(float NewMotionVectorScale); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75145FEB8(relative to base address)
		void SetLooping(bool bNewLooping); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75145FD80(relative to base address)
		bool SetGeometryCache(UGeometryCache* NewGeomCache); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75145FCF0(relative to base address)
		void SetExtrapolateFrames(bool bNewExtrapolating); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75145FC70(relative to base address)
		void PlayReversedFromEnd(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75145FC20(relative to base address)
		void PlayReversed(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75145FBDC(relative to base address)
		void PlayFromStart(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75145FB94(relative to base address)
		void Play(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75145FB50(relative to base address)
		void Pause(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75145FB30(relative to base address)
		bool IsPlayingReversed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75145FAFC(relative to base address)
		bool IsPlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D2224(relative to base address)
		bool IsLooping(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D21F4(relative to base address)
		bool IsExtrapolatingFrames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D220C(relative to base address)
		FLinearColor GetWireframeOverrideColor(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75145FAE0(relative to base address)
		float GetStartTimeOffset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7504ECD9C(relative to base address)
		float GetPlaybackSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75145FAB4(relative to base address)
		float GetPlaybackDirection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75145FA9C(relative to base address)
		bool GetOverrideWireframeColor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75145FA84(relative to base address)
		int32_t GetNumberOfFrames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75145FA58(relative to base address)
		float GetMotionVectorScale(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75145FA2C(relative to base address)
		float GetDuration(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75145FA14(relative to base address)
		float GetAnimationTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75145F9E0(relative to base address)
	};


	// Class GeometryCache.GeometryCacheTrack
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UGeometryCacheTrack : public UObject	
	{
	public:
		float duration; // 0x28(0x4)
		unsigned char UnknownData00_7[0x2C]; // 0x2C(0x2C) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x24]; // 0x5C(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation");
			return ret;
		}

		void AddMeshSample(FGeometryCacheMeshData& MeshData, float SampleTime); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF75145F84C(relative to base address)
	};


	// Class GeometryCache.GeometryCacheTrackStreamable
	// Inherited from UGeometryCacheTrack -> UObject
	// Size: 0x78 (0xD0 - 0x58)
	class UGeometryCacheTrackStreamable : public UGeometryCacheTrack	
	{
	public:
		UGeometryCacheCodecBase* Codec; // 0x58(0x8)
		unsigned char UnknownData00_6[0x60]; // 0x60(0x60) UNKNOWN PROPERTY
		float StartSampleTime; // 0xC0(0x4)
		unsigned char UnknownData01_7[0xC]; // 0xC4(0xC) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0xC8]; // 0x58(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCacheTrack_TransformAnimation");
			return ret;
		}

		void SetMesh(FGeometryCacheMeshData& NewMeshData); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF75145FE00(relative to base address)
	};


	// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
	// Inherited from UGeometryCacheTrack -> UObject
	// Size: 0xC8 (0x120 - 0x58)
	class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack	
	{
	public:
		unsigned char UnknownData00_1[0xC8]; // 0x58(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation");
			return ret;
		}

		void SetMesh(FGeometryCacheMeshData& NewMeshData); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF75145FE00(relative to base address)
	};


	// Class GeometryCache.NiagaraGeometryCacheRendererProperties
	// Inherited from UNiagaraRendererProperties -> UNiagaraMergeable -> UObject
	// Size: 0x1B8 (0x268 - 0xB0)
	class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties	
	{
	public:
		TArray<FNiagaraGeometryCacheReference> GeometryCaches; // 0xB0(0x10)
		ENiagaraRendererSourceDataMode SourceMode; // 0xC0(0x1)
		bool bIsLooping; // 0xC1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xC2(0x2) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_6[0x3]; // 0x1E5(0x3) UNKNOWN PROPERTY
		FNiagaraRendererMaterialParameters MaterialParameters; // 0x1E8(0x50)
		unsigned char UnknownData02_7[0x30]; // 0x238(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCache.NiagaraGeometryCacheRendererProperties");
			return ret;
		}
	};

}
