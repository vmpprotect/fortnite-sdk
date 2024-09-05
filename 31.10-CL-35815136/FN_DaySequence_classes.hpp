#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DaySequence
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		void SetTimeOfDaySpeed(float NewTimeOfDaySpeedMultiplier); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF74E12784C(relative to base address)
		void SetTimeOfDay(float NewTimeOfDay); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF74E1277BC(relative to base address)
	};


	// Class DaySequence.DaySequenceConditionTag
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UDaySequenceConditionTag : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceConditionTag");
			return ret;
		}

		void SetupBroadcastBindings(); // Flags: Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF746F37328(relative to base address)
		FString GetConditionName(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74C4092C8(relative to base address)
		bool Evaluate(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74C5D1DC4(relative to base address)
		void BroadcastOnConditionValueChanged(); // Flags: Final|Native|Protected|BlueprintCallable|Const, Memory Exec: 0x7FF74E1268B0(relative to base address)
	};


	// Class DaySequence.DaySequenceModifierEasingFunction
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UDaySequenceModifierEasingFunction : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x48]; // 0x28(0x48) UNKNOWN PROPERTY

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
		UDaySequenceModifierEasingFunction* EasingFunction; // 0x220(0x8)
		ADaySequenceActor* TargetActor; // 0x228(0x8)
		TArray<FComponentReference> VolumeShapeComponents; // 0x230(0x10)
		TWeakObjectPtr<APlayerController*> ExternalVolumeBlendTarget; // 0x240(0x8)
		UDaySequence* UserDaySequence; // 0x248(0x8)
		UDaySequence* ProceduralDaySequence; // 0x250(0x8)
		UDaySequenceCollectionAsset* DaySequenceCollection; // 0x258(0x8)
		int32_t Bias; // 0x260(0x4)
		float DayNightCycleTime; // 0x264(0x4)
		float BlendAmount; // 0x268(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x26C(0x4) UNKNOWN PROPERTY
		float CustomVolumeBlendWeight; // 0x270(0x4)
		EDayNightCycleMode DayNightCycle; // 0x274(0x1)
		EDaySequenceModifierBlendMode BlendMode; // 0x275(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x276(0x2) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPostReinitializeSubSequences; // 0x278(0x10)
		FMulticastInlineDelegate OnPostEnableModifier; // 0x288(0x10)
		bool bIgnoreBias : 1; // 0x298:0(0x1)
		bool bUseVolume : 1; // 0x298:1(0x1)
		bool bIsComponentEnabled : 1; // 0x298:2(0x1)
		bool bIsEnabled : 1; // 0x298:3(0x1)
		bool bPreview : 1; // 0x298:4(0x1)
		unsigned char UnknownBit02 : 1; // 0x298:5(0x1) UNKNOWN PROPERTY
		bool bUseCollection : 1; // 0x298:6(0x1)
		unsigned char UnknownData03_7[0x57]; // 0x299(0x57) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceModifierComponent");
			return ret;
		}

		void UnbindFromDaySequenceActor(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E127960(relative to base address)
		void SetVolumeCollisionEnabled(TEnumAsByte<ECollisionEnabled> InCollisionType); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF7492E1484(relative to base address)
		void SetUserDaySequence(UDaySequence* InDaySequence); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E1278CC(relative to base address)
		void SetCustomVolumeBlendWeight(float Weight); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749065254(relative to base address)
		void ResetOverrides(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E127508(relative to base address)
		bool IsBlendTargetInAnyVolume(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7491E557C(relative to base address)
		float GetCurrentBlendWeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E126FFC(relative to base address)
		void EnableModifier(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749B50624(relative to base address)
		void EnableDistanceVolumeBlends(APlayerController* InActor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74949318C(relative to base address)
		void EnableComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74959AA20(relative to base address)
		void DisableModifier(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494E5D98(relative to base address)
		void DisableComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E126A60(relative to base address)
		void BindToDaySequenceActor(ADaySequenceActor* DaySequenceActor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7485C4F88(relative to base address)
		void AddVisibilityOverride(UObject* Object, bool bValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E1267E8(relative to base address)
		void AddVectorOverride(UObject* Object, FName PropertyName, FVector Value); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E12665C(relative to base address)
		void AddTransformOverride(UObject* Object, FTransform Value); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E126474(relative to base address)
		void AddStaticTimeOfDayOverride(ADaySequenceActor* Actor, float Hours); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E1263B0(relative to base address)
		void AddScalarOverride(UObject* Object, FName PropertyName, double Value); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E126234(relative to base address)
		void AddScalarMaterialParameterOverride(UObject* Object, int32_t MaterialIndex, FName ParameterName, float Value); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E1260F8(relative to base address)
		void AddMaterialOverride(UObject* Object, int32_t MaterialIndex, UMaterialInterface* Value); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E125EC0(relative to base address)
		void AddColorOverride(UObject* Object, FName PropertyName, FLinearColor Value); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E125D40(relative to base address)
		void AddColorMaterialParameterOverride(UObject* Object, int32_t MaterialIndex, FName ParameterName, FLinearColor Value); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E125B80(relative to base address)
		void AddBoolOverride(UObject* Object, FName PropertyName, bool bValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E125A84(relative to base address)
	};


	// Class DaySequence.DaySequenceModifierVolume
	// Inherited from AActor -> UObject
	// Size: 0x30 (0x2C0 - 0x290)
	class ADaySequenceModifierVolume : public AActor	
	{
	public:
		UDaySequenceModifierComponent* DaySequenceModifier; // 0x290(0x8)
		UBoxComponent* DefaultBox; // 0x298(0x8)
		ADaySequenceActor* DaySequenceActor; // 0x2A0(0x8)
		APlayerController* CachedPlayerController; // 0x2A8(0x8)
		AActor* CurrentBlendTarget; // 0x2B0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceModifierVolume");
			return ret;
		}

		void OnDaySequenceActorBound(ADaySequenceActor* InActor); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DaySequence.DaySequenceActor
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x188 (0x418 - 0x290)
	class ADaySequenceActor : public AInfo	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x290(0x10) UNKNOWN PROPERTY
		UCurveFloat* DayInterpCurve; // 0x2A0(0x8)
		UDaySequenceCollectionAsset* DaySequenceCollection; // 0x2A8(0x8)
		int32_t Bias; // 0x2B0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2B4(0x4) UNKNOWN PROPERTY
		UMovieSceneBindingOverrides* BindingOverrides; // 0x2B8(0x8)
		bool bReplicatePlayback : 1; // 0x2C0:0(0x1)
		unsigned char UnknownData02_5[0x7]; // 0x2C1(0x7) UNKNOWN PROPERTY
		UDaySequencePlayer* SequencePlayer; // 0x2C8(0x8)
		UDaySequence* RootSequence; // 0x2D0(0x8)
		bool bRunDayCycle; // 0x2D8(0x1)
		bool bUseInterpCurve; // 0x2D9(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x2DA(0x2) UNKNOWN PROPERTY
		Ftimecode DayLength; // 0x2DC(0x14)
		unsigned char UnknownData04_6[0x4]; // 0x2F0(0x4) UNKNOWN PROPERTY
		Ftimecode TimePerCycle; // 0x2F4(0x14)
		unsigned char UnknownData05_6[0x4]; // 0x308(0x4) UNKNOWN PROPERTY
		Ftimecode InitialTimeOfDay; // 0x30C(0x14)
		unsigned char UnknownData06_6[0xA8]; // 0x320(0xA8) UNKNOWN PROPERTY
		TMap<UClass*, UDaySequenceConditionTag*> TrackConditionMap; // 0x3C8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceActor");
			return ret;
		}

		void StopDaySequenceUpdateTimer(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF749B22240(relative to base address)
		void StartDaySequenceUpdateTimer(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74E12794C(relative to base address)
		void SetTimeOfDayPreview(float InHours); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C42CE74(relative to base address)
		bool SetTimeOfDay(float InHours); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E12772C(relative to base address)
		void SetStaticTimeOfDay(float InHours); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E1276AC(relative to base address)
		void SetReplicatePlayback(bool ReplicatePlayback); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E12761C(relative to base address)
		void RemoveStaticTimeOfDay(bool bResumeFromStaticTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E127488(relative to base address)
		void Play(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E127474(relative to base address)
		void Pause(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E127460(relative to base address)
		void Multicast_SetTimePerCycle(float InHours); // Flags: Net|NetReliableNative|Event|NetMulticast|Public, Memory Exec: 0x7FF74C088288(relative to base address)
		bool IsPlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E12743C(relative to base address)
		bool IsPaused(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E127418(relative to base address)
		bool HasStaticTimeOfDay(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E127288(relative to base address)
		float GetTimePerCycle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E127260(relative to base address)
		float GetTimeOfDayPreview(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E12724C(relative to base address)
		float GetTimeOfDay(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E127224(relative to base address)
		float GetStaticTimeOfDay(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E1271FC(relative to base address)
		UDaySequencePlayer GetSequencePlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E1271D8(relative to base address)
		float GetInitialTimeOfDay(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E127108(relative to base address)
		float GetDayLength(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E127050(relative to base address)
		bool ContainsDaySequence(UDaySequence* InDaySequence); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E12698C(relative to base address)
	};


	// Class DaySequence.SimpleDaySequenceActor
	// Inherited from ADaySequenceActor -> AInfo -> AActor -> UObject
	// Size: 0x38 (0x450 - 0x418)
	class ASimpleDaySequenceActor : public ADaySequenceActor	
	{
	public:
		USceneComponent* SunRootComponent; // 0x418(0x8)
		UDirectionalLightComponent* SunComponent; // 0x420(0x8)
		USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x428(0x8)
		USkyLightComponent* SkyLightComponent; // 0x430(0x8)
		UExponentialHeightFogComponent* ExponentialHeightFogComponent; // 0x438(0x8)
		UVolumetricCloudComponent* VolumetricCloudComponent; // 0x440(0x8)
		UStaticMeshComponent* SkySphereComponent; // 0x448(0x8)

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
		unsigned char UnknownData00_3[0x8]; // 0x450(0x8) UNKNOWN PROPERTY
		UDaySequence* ProceduralSequence; // 0x458(0x8)

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
		unsigned char UnknownData00_1[0x28]; // 0x28(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.ProceduralDaySequenceBuilder");
			return ret;
		}

		void SetActiveBoundObject(UObject* InObject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E12751C(relative to base address)
		bool IsInitialized(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E1273F8(relative to base address)
		UDaySequence Initialize(ADaySequenceActor* InActor, UDaySequence* InitialSequence, bool bClearInitialSequence); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E1272F8(relative to base address)
		void ClearScalarKeys(FName PropertyName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E12690C(relative to base address)
		void ClearAllKeys(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E1268F8(relative to base address)
		void AddStaticTime(float StaticTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E126330(relative to base address)
		void AddScalarKey(FName PropertyName, float Key, double Value, TEnumAsByte<ERichCurveInterpMode> InterpMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E125FB8(relative to base address)
		void AddBoolKey(FName PropertyName, float Key, bool Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E125980(relative to base address)
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
		unsigned char UnknownData00_6[0x4]; // 0x464(0x4) UNKNOWN PROPERTY
		FDateTime Time; // 0x468(0x8)
		double TimeZone; // 0x470(0x8)
		double Latitude; // 0x478(0x8)
		double Longitude; // 0x480(0x8)
		bool bIsDaylightSavings; // 0x488(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x489(0x7) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_3[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
		UMovieScene* MovieScene; // 0x70(0x8)
		FDaySequenceBindingReferences BindingReferences; // 0x78(0xA0)
		UClass* DirectorClass; // 0x118(0x8)
		TArray<UAssetUserData*> AssetUserData; // 0x120(0x10)

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
		TArray<FDaySequenceCollectionEntry> DaySequences; // 0x30(0x10)

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
		UDaySequencePlayer* Player; // 0x28(0x8)
		int32_t SubSequenceID; // 0x30(0x4)
		int32_t MovieScenePlayerIndex; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceDirector");
			return ret;
		}

		void OnCreated(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UMovieSceneSequence GetSequence(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E127160(relative to base address)
		FQualifiedFrameTime GetRootSequenceTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E127130(relative to base address)
		FQualifiedFrameTime GetCurrentTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E127020(relative to base address)
		TArray GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E126E98(relative to base address)
		UObject GetBoundObject(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E126D4C(relative to base address)
		TArray GetBoundActors(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E126BE8(relative to base address)
		AActor GetBoundActor(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E126A9C(relative to base address)
	};


	// Class DaySequence.DaySequencePlayer
	// Inherited from UMovieSceneSequencePlayer -> UObject
	// Size: 0x8 (0x470 - 0x468)
	class UDaySequencePlayer : public UMovieSceneSequencePlayer	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x468(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FString DefaultDisplayRate; // 0x38(0x10)
		FString DefaultTickResolution; // 0x48(0x10)
		EUpdateClockSource DefaultClockSource; // 0x58(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

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
		TArray<UDaySequence*> DaySequenceAssets; // 0x290(0x10)

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
		unsigned char UnknownData00_7[0x28]; // 0x40(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.DaySequenceSubsystem");
			return ret;
		}

		void SetDaySequenceActor(ADaySequenceActor* InActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E12759C(relative to base address)
		ADaySequenceActor GetDaySequenceActor(bool bFindFallbackOnNull); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E127078(relative to base address)
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
		USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x2A0(0x8)
		USkyLightComponent* SkyLightComponent; // 0x2A8(0x8)
		USceneComponent* SunRootComponent; // 0x2B0(0x8)
		UDirectionalLightComponent* SunComponent; // 0x2B8(0x8)
		UExponentialHeightFogComponent* ExponentialHeightFogComponent; // 0x2C0(0x8)
		UVolumetricCloudComponent* VolumetricCloudComponent; // 0x2C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DaySequence.EnvironmentLightingActor");
			return ret;
		}
	};

}
