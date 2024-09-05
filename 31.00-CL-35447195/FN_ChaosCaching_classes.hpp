#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ChaosCaching
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ChaosCaching.MovieSceneSpawnableChaosCacheBinding
	// Inherited from UMovieSceneSpawnableActorBinding -> UMovieSceneSpawnableActorBindingBase -> UMovieSceneSpawnableBindingBase -> UMovieSceneCustomBinding -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneSpawnableChaosCacheBinding : public UMovieSceneSpawnableActorBinding	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosCaching.MovieSceneSpawnableChaosCacheBinding");
			return ret;
		}
	};


	// Class ChaosCaching.ChaosCacheCollection
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UChaosCacheCollection : public UObject	
	{
	public:
		TArray Caches; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosCaching.ChaosCacheCollection");
			return ret;
		}
	};


	// Class ChaosCaching.ChaosCacheManager
	// Inherited from AActor -> UObject
	// Size: 0xB0 (0x340 - 0x290)
	class AChaosCacheManager : public AActor	
	{
	public:
		UChaosCacheCollection CacheCollection; // 0x290(0x8)
		ECacheMode CacheMode; // 0x298(0x1)
		EStartMode StartMode; // 0x299(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x29A(0x2) UNKNOWN PROPERTY
		float StartTime; // 0x29C(0x4)
		unsigned char UnknownData04_6[0x8]; // 0x2A0(0x8) UNKNOWN PROPERTY
		TArray ObservedComponents; // 0x2A8(0x10)
		unsigned char UnknownData05_7[0x88]; // 0x2B8(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosCaching.ChaosCacheManager");
			return ret;
		}

		void TriggerComponentByCache(FName InCacheName); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable 0x7FF414BDC0D8
		void TriggerComponent(UPrimitiveComponent InComponent); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable 0x7FF414BDBFF8
		void TriggerAll(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable 0x7FF414BDBF18
		void SetStartTime(float InStartTime); // Flags: Final|RequiredAPI|Native|Public 0x7FF414BDBE38
		void SetCurrentTime(float CurrentTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BDBD58
		void SetCacheCollection(UChaosCacheCollection InCacheCollection); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable 0x7FF414BDBC78
		void ResetSingleTransform(int32_t InIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414BDBB98
		void ResetAllComponentTransforms(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414BDBAB8
		void EnablePlaybackByCache(FName InCacheName, bool bEnable); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable 0x7FF414BDB9D8
		void EnablePlayback(int32_t Index, bool bEnable); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable 0x7FF414BDB8F8
	};


	// Class ChaosCaching.ChaosCachePlayer
	// Inherited from AChaosCacheManager -> AActor -> UObject
	// Size: 0x0 (0x340 - 0x340)
	class AChaosCachePlayer : public AChaosCacheManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosCaching.ChaosCachePlayer");
			return ret;
		}
	};


	// Class ChaosCaching.ChaosCache
	// Inherited from UObject
	// Size: 0x348 (0x370 - 0x28)
	class UChaosCache : public UObject	
	{
	public:
		float RecordedDuration; // 0x28(0x4)
		uint32_t NumRecordedFrames; // 0x2C(0x4)
		TArray TrackToParticle; // 0x30(0x10)
		TArray ParticleTracks; // 0x40(0x10)
		TArray ChannelCurveToParticle; // 0x50(0x10)
		TMap ChannelsTracks; // 0x60(0x50)
		TMap CompressedChannelsTracks; // 0xB0(0x50)
		TMap CurveData; // 0x100(0x50)
		TMap NamedTransformTracks; // 0x150(0x50)
		bool bCompressChannels; // 0x1A0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1A1(0x3) UNKNOWN PROPERTY
		float ChannelsCompressionErrorThreshold; // 0x1A4(0x4)
		float ChannelsCompressionSampleRate; // 0x1A8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x1AC(0x4) UNKNOWN PROPERTY
		TMap EventTracks; // 0x1B0(0x50)
		FCacheSpawnableTemplate Spawnable; // 0x200(0xD0)
		FGuid AdapterGuid; // 0x2D0(0x10)
		int32_t Version; // 0x2E0(0x4)
		unsigned char UnknownData05_7[0x8C]; // 0x2E4(0x8C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosCaching.ChaosCache");
			return ret;
		}
	};


	// Class ChaosCaching.MovieSceneChaosCacheSection
	// Inherited from UMovieSceneBaseCacheSection -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x28 (0x120 - 0xF8)
	class UMovieSceneChaosCacheSection : public UMovieSceneBaseCacheSection	
	{
	public:
		FMovieSceneChaosCacheParams Params; // 0xF8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosCaching.MovieSceneChaosCacheSection");
			return ret;
		}
	};


	// Class ChaosCaching.MovieSceneChaosCacheTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x18 (0xB0 - 0x98)
	class UMovieSceneChaosCacheTrack : public UMovieSceneNameableTrack	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		TArray AnimationSections; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosCaching.MovieSceneChaosCacheTrack");
			return ret;
		}
	};

}
