#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DaySequence
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DaySequence.DaySequenceCheatManagerExtension
	// Inherited from UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDaySequenceCheatManagerExtension : public UCheatManagerExtension	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceCheatManagerExtension");
			return ret;
		}

		void SetTimeOfDaySpeed(float NewTimeOfDaySpeedMultiplier); // Flags: Final|Exec|Native|Public|Const 0x7FF41466BEF8
		void SetTimeOfDay(float NewTimeOfDay); // Flags: Final|Exec|Native|Public|Const 0x7FF41466BE18
	};


	// Class DaySequence.DaySequenceConditionTag
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UDaySequenceConditionTag : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceConditionTag");
			return ret;
		}

		void SetupBroadcastBindings(); // Flags: Native|Event|Protected|BlueprintEvent|Const 0x7FF41466C278
		FString GetConditionName(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF41466C198
		bool Evaluate(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF41466C0B8
		void BroadcastOnConditionValueChanged(); // Flags: Final|Native|Protected|BlueprintCallable|Const 0x7FF41466BFD8
	};


	// Class DaySequence.DaySequenceModifierEasingFunction
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UDaySequenceModifierEasingFunction : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0x28(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceModifierEasingFunction");
			return ret;
		}
	};


	// Class DaySequence.DaySequenceModifierComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0xD0 (0x2F0 - 0x220)
	class UDaySequenceModifierComponent : public USceneComponent	
	{
	public:
		UDaySequenceModifierEasingFunction EasingFunction; // 0x220(0x8)
		ADaySequenceActor TargetActor; // 0x228(0x8)
		TArray VolumeShapeComponents; // 0x230(0x10)
		TWeakObjectPtr ExternalVolumeBlendTarget; // 0x240(0x8)
		UDaySequence UserDaySequence; // 0x248(0x8)
		UDaySequence ProceduralDaySequence; // 0x250(0x8)
		UDaySequenceCollectionAsset DaySequenceCollection; // 0x258(0x8)
		int32_t Bias; // 0x260(0x4)
		float DayNightCycleTime; // 0x264(0x4)
		float BlendAmount; // 0x268(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x26C(0x4) UNKNOWN PROPERTY
		float CustomVolumeBlendWeight; // 0x270(0x4)
		EDayNightCycleMode DayNightCycle; // 0x274(0x1)
		EDaySequenceModifierBlendMode BlendMode; // 0x275(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x276(0x2) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPostReinitializeSubSequences; // 0x278(0x10)
		FMulticastInlineDelegate OnPostEnableModifier; // 0x288(0x10)
		bool bIgnoreBias : 1; // 0x298:0(0x1)
		bool bUseVolume : 1; // 0x298:1(0x1)
		bool bIsComponentEnabled : 1; // 0x298:2(0x1)
		bool bIsEnabled : 1; // 0x298:3(0x1)
		bool bPreview : 1; // 0x298:4(0x1)
		unsigned char UnknownBit06 : 1; // 0x298:5(0x1) UNKNOWN PROPERTY
		bool bUseCollection : 1; // 0x298:6(0x1)
		unsigned char UnknownData07_7[0x57]; // 0x299(0x57) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceModifierComponent");
			return ret;
		}

		void UnbindFromDaySequenceActor(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466D698
		void SetVolumeCollisionEnabled(TEnumAsByte InCollisionType); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF41466D5B8
		void SetUserDaySequence(UDaySequence InDaySequence); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466D4D8
		void SetCustomVolumeBlendWeight(float Weight); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466D3F8
		void ResetOverrides(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466D318
		bool IsBlendTargetInAnyVolume(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466D238
		float GetCurrentBlendWeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41466D158
		void EnableModifier(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466D078
		void EnableDistanceVolumeBlends(APlayerController InActor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466CF98
		void EnableComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466CEB8
		void DisableModifier(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466CDD8
		void DisableComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466CCF8
		void BindToDaySequenceActor(ADaySequenceActor DaySequenceActor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466CC18
		void AddVisibilityOverride(UObject Object, bool bValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466CB38
		void AddVectorOverride(UObject Object, FName PropertyName, FVector Value); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF41466CA58
		void AddTransformOverride(UObject Object, FTransform Value); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF41466C978
		void AddStaticTimeOfDayOverride(ADaySequenceActor Actor, float Hours); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466C898
		void AddScalarOverride(UObject Object, FName PropertyName, double Value); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466C7B8
		void AddScalarMaterialParameterOverride(UObject Object, int32_t MaterialIndex, FName ParameterName, float Value); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466C6D8
		void AddMaterialOverride(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466C5F8
		void AddColorOverride(UObject Object, FName PropertyName, FLinearColor Value); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF41466C518
		void AddColorMaterialParameterOverride(UObject Object, int32_t MaterialIndex, FName ParameterName, FLinearColor Value); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF41466C438
		void AddBoolOverride(UObject Object, FName PropertyName, bool bValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41466C358
	};


	// Class DaySequence.DaySequenceModifierVolume
	// Inherited from AActor -> UObject
	// Size: 0x30 (0x2C0 - 0x290)
	class ADaySequenceModifierVolume : public AActor	
	{
	public:
		UDaySequenceModifierComponent DaySequenceModifier; // 0x290(0x8)
		UBoxComponent DefaultBox; // 0x298(0x8)
		ADaySequenceActor DaySequenceActor; // 0x2A0(0x8)
		APlayerController CachedPlayerController; // 0x2A8(0x8)
		AActor CurrentBlendTarget; // 0x2B0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceModifierVolume");
			return ret;
		}

		void OnDaySequenceActorBound(ADaySequenceActor InActor); // Flags: Event|Public|BlueprintEvent 0x7FF41466D778
	};


	// Class DaySequence.DaySequenceActor
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x188 (0x418 - 0x290)
	class ADaySequenceActor : public AInfo	
	{
	public:
		unsigned char UnknownData07_3[0x10]; // 0x290(0x10) UNKNOWN PROPERTY
		UCurveFloat DayInterpCurve; // 0x2A0(0x8)
		UDaySequenceCollectionAsset DaySequenceCollection; // 0x2A8(0x8)
		int32_t Bias; // 0x2B0(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x2B4(0x4) UNKNOWN PROPERTY
		UMovieSceneBindingOverrides BindingOverrides; // 0x2B8(0x8)
		bool bReplicatePlayback : 1; // 0x2C0:0(0x1)
		unsigned char UnknownData09_5[0x7]; // 0x2C1(0x7) UNKNOWN PROPERTY
		UDaySequencePlayer SequencePlayer; // 0x2C8(0x8)
		UDaySequence RootSequence; // 0x2D0(0x8)
		bool bRunDayCycle; // 0x2D8(0x1)
		bool bUseInterpCurve; // 0x2D9(0x1)
		unsigned char UnknownData10_6[0x2]; // 0x2DA(0x2) UNKNOWN PROPERTY
		Ftimecode DayLength; // 0x2DC(0x14)
		unsigned char UnknownData11_6[0x4]; // 0x2F0(0x4) UNKNOWN PROPERTY
		Ftimecode TimePerCycle; // 0x2F4(0x14)
		unsigned char UnknownData12_6[0x4]; // 0x308(0x4) UNKNOWN PROPERTY
		Ftimecode InitialTimeOfDay; // 0x30C(0x14)
		unsigned char UnknownData13_6[0xA8]; // 0x320(0xA8) UNKNOWN PROPERTY
		TMap TrackConditionMap; // 0x3C8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceActor");
			return ret;
		}

		void StopDaySequenceUpdateTimer(); // Flags: Final|Native|Protected 0x7FF41466E9D8
		void StartDaySequenceUpdateTimer(); // Flags: Final|Native|Protected 0x7FF41466E8F8
		void SetTimeOfDayPreview(float InHours); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466E818
		bool SetTimeOfDay(float InHours); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466E738
		void SetStaticTimeOfDay(float InHours); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466E658
		void SetReplicatePlayback(bool ReplicatePlayback); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466E578
		void RemoveStaticTimeOfDay(bool bResumeFromStaticTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466E498
		void Play(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466E3B8
		void Pause(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466E2D8
		void Multicast_SetTimePerCycle(float InHours); // Flags: Net|NetReliableNative|Event|NetMulticast|Public 0x7FF41466E1F8
		bool IsPlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41466E118
		bool IsPaused(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41466E038
		bool HasStaticTimeOfDay(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41466DF58
		float GetTimePerCycle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41466DE78
		float GetTimeOfDayPreview(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41466DD98
		float GetTimeOfDay(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41466DCB8
		float GetStaticTimeOfDay(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41466DBD8
		UDaySequencePlayer GetSequencePlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41466DAF8
		float GetInitialTimeOfDay(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41466DA18
		float GetDayLength(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41466D938
		bool ContainsDaySequence(UDaySequence InDaySequence); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466D858
	};


	// Class DaySequence.SimpleDaySequenceActor
	// Inherited from ADaySequenceActor -> AInfo -> AActor -> UObject
	// Size: 0x38 (0x450 - 0x418)
	class ASimpleDaySequenceActor : public ADaySequenceActor	
	{
	public:
		USceneComponent SunRootComponent; // 0x418(0x8)
		UDirectionalLightComponent SunComponent; // 0x420(0x8)
		USkyAtmosphereComponent SkyAtmosphereComponent; // 0x428(0x8)
		USkyLightComponent SkyLightComponent; // 0x430(0x8)
		UExponentialHeightFogComponent ExponentialHeightFogComponent; // 0x438(0x8)
		UVolumetricCloudComponent VolumetricCloudComponent; // 0x440(0x8)
		UStaticMeshComponent SkySphereComponent; // 0x448(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.SimpleDaySequenceActor");
			return ret;
		}
	};


	// Class DaySequence.ProceduralDaySequenceActor
	// Inherited from ASimpleDaySequenceActor -> ADaySequenceActor -> AInfo -> AActor -> UObject
	// Size: 0x10 (0x460 - 0x450)
	class AProceduralDaySequenceActor : public ASimpleDaySequenceActor	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x450(0x8) UNKNOWN PROPERTY
		UDaySequence ProceduralSequence; // 0x458(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.ProceduralDaySequenceActor");
			return ret;
		}
	};


	// Class DaySequence.ProceduralDaySequenceBuilder
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UProceduralDaySequenceBuilder : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x28(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.ProceduralDaySequenceBuilder");
			return ret;
		}

		void SetActiveBoundObject(UObject InObject); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466F0D8
		bool IsInitialized(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41466EFF8
		UDaySequence Initialize(ADaySequenceActor InActor, UDaySequence InitialSequence, bool bClearInitialSequence); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466EF18
		void ClearScalarKeys(FName PropertyName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466EE38
		void ClearAllKeys(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466ED58
		void AddStaticTime(float StaticTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466EC78
		void AddScalarKey(FName PropertyName, float Key, double Value, TEnumAsByte InterpMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466EB98
		void AddBoolKey(FName PropertyName, float Key, bool Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466EAB8
	};


	// Class DaySequence.SunAngleDaySequenceActor
	// Inherited from AProceduralDaySequenceActor -> ASimpleDaySequenceActor -> ADaySequenceActor -> AInfo -> AActor -> UObject
	// Size: 0x18 (0x478 - 0x460)
	class ASunAngleDaySequenceActor : public AProceduralDaySequenceActor	
	{
	public:
		double SunPitch; // 0x460(0x8)
		double SunYaw; // 0x468(0x8)
		double SunRoll; // 0x470(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.SunAngleDaySequenceActor");
			return ret;
		}
	};


	// Class DaySequence.SunPositionDaySequenceActor
	// Inherited from AProceduralDaySequenceActor -> ASimpleDaySequenceActor -> ADaySequenceActor -> AInfo -> AActor -> UObject
	// Size: 0x50 (0x4B0 - 0x460)
	class ASunPositionDaySequenceActor : public AProceduralDaySequenceActor	
	{
	public:
		uint32_t KeyCount; // 0x460(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x464(0x4) UNKNOWN PROPERTY
		FDateTime Time; // 0x468(0x8)
		double TimeZone; // 0x470(0x8)
		double Latitude; // 0x478(0x8)
		double Longitude; // 0x480(0x8)
		bool bIsDaylightSavings; // 0x488(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x489(0x7) UNKNOWN PROPERTY
		double Elevation; // 0x490(0x8)
		double Azimuth; // 0x498(0x8)
		double SunPitch; // 0x4A0(0x8)
		double SunYaw; // 0x4A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.SunPositionDaySequenceActor");
			return ret;
		}
	};


	// Class DaySequence.DaySequence
	// Inherited from UMovieSceneSequence -> UMovieSceneSignedObject -> UObject
	// Size: 0xC8 (0x130 - 0x68)
	class UDaySequence : public UMovieSceneSequence	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
		UMovieScene MovieScene; // 0x70(0x8)
		FDaySequenceBindingReferences BindingReferences; // 0x78(0xA0)
		UClass DirectorClass; // 0x118(0x8)
		TArray AssetUserData; // 0x120(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequence");
			return ret;
		}
	};


	// Class DaySequence.DaySequenceCollectionAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UDaySequenceCollectionAsset : public UDataAsset	
	{
	public:
		TArray DaySequences; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceCollectionAsset");
			return ret;
		}
	};


	// Class DaySequence.DaySequenceDirector
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDaySequenceDirector : public UObject	
	{
	public:
		UDaySequencePlayer Player; // 0x28(0x8)
		int32_t SubSequenceID; // 0x30(0x4)
		int32_t MovieScenePlayerIndex; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceDirector");
			return ret;
		}

		void OnCreated(); // Flags: Event|Public|BlueprintEvent 0x7FF41466F7D8
		UMovieSceneSequence GetSequence(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466F6F8
		FQualifiedFrameTime GetRootSequenceTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41466F618
		FQualifiedFrameTime GetCurrentTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41466F538
		TArray GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466F458
		UObject GetBoundObject(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466F378
		TArray GetBoundActors(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466F298
		AActor GetBoundActor(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466F1B8
	};


	// Class DaySequence.DaySequencePlayer
	// Inherited from UMovieSceneSequencePlayer -> UObject
	// Size: 0x8 (0x470 - 0x468)
	class UDaySequencePlayer : public UMovieSceneSequencePlayer	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x468(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequencePlayer");
			return ret;
		}
	};


	// Class DaySequence.DaySequenceProjectSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UDaySequenceProjectSettings : public UDeveloperSettings	
	{
	public:
		bool bDefaultLockEngineToDisplayRate; // 0x30(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FString DefaultDisplayRate; // 0x38(0x10)
		FString DefaultTickResolution; // 0x48(0x10)
		EUpdateClockSource DefaultClockSource; // 0x58(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceProjectSettings");
			return ret;
		}
	};


	// Class DaySequence.DaySequenceProvider
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class ADaySequenceProvider : public AActor	
	{
	public:
		TArray DaySequenceAssets; // 0x290(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceProvider");
			return ret;
		}
	};


	// Class DaySequence.DaySequenceSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UDaySequenceSubsystem : public UWorldSubsystem	
	{
	public:
		FMulticastInlineDelegate OnDaySequenceActorSet; // 0x30(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x40(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceSubsystem");
			return ret;
		}

		void SetDaySequenceActor(ADaySequenceActor InActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466F998
		ADaySequenceActor GetDaySequenceActor(bool bFindFallbackOnNull); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41466F8B8
	};


	// Class DaySequence.DaySequenceTrack
	// Inherited from UMovieSceneSubTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UDaySequenceTrack : public UMovieSceneSubTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceTrack");
			return ret;
		}
	};


	// Class DaySequence.EnvironmentLightingActor
	// Inherited from ADaySequenceProvider -> AActor -> UObject
	// Size: 0x30 (0x2D0 - 0x2A0)
	class AEnvironmentLightingActor : public ADaySequenceProvider	
	{
	public:
		USkyAtmosphereComponent SkyAtmosphereComponent; // 0x2A0(0x8)
		USkyLightComponent SkyLightComponent; // 0x2A8(0x8)
		USceneComponent SunRootComponent; // 0x2B0(0x8)
		UDirectionalLightComponent SunComponent; // 0x2B8(0x8)
		UExponentialHeightFogComponent ExponentialHeightFogComponent; // 0x2C0(0x8)
		UVolumetricCloudComponent VolumetricCloudComponent; // 0x2C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.EnvironmentLightingActor");
			return ret;
		}
	};

}
