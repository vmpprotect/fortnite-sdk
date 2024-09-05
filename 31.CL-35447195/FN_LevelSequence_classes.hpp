#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LevelSequence
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class LevelSequence.DefaultLevelSequenceInstanceData
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UDefaultLevelSequenceInstanceData : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		AActor TransformOriginActor; // 0x30(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FTransform TransformOrigin; // 0x40(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.DefaultLevelSequenceInstanceData");
			return ret;
		}
	};


	// Class LevelSequence.AnimSequenceLevelSequenceLink
	// Inherited from UAssetUserData -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UAnimSequenceLevelSequenceLink : public UAssetUserData	
	{
	public:
		FGuid SkelTrackGuid; // 0x28(0x10)
		FSoftObjectPath PathToLevelSequence; // 0x38(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.AnimSequenceLevelSequenceLink");
			return ret;
		}
	};


	// Class LevelSequence.LevelSequence
	// Inherited from UMovieSceneSequence -> UMovieSceneSignedObject -> UObject
	// Size: 0x38 (0xA0 - 0x68)
	class ULevelSequence : public UMovieSceneSequence	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
		UMovieScene MovieScene; // 0x70(0x8)
		FUpgradedLevelSequenceBindingReferences BindingReferences; // 0x78(0x10)
		UClass DirectorClass; // 0x88(0x8)
		TArray AssetUserData; // 0x90(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequence");
			return ret;
		}

		void RemoveMetaDataByClass(UClass InClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144DD418
		UObject FindOrAddMetaDataByClass(UClass InClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144DD338
		UObject FindMetaDataByClass(UClass InClass); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DD258
		UObject CopyMetaData(UObject InMetaData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144DD178
	};


	// Class LevelSequence.LevelSequenceBurnInInitSettings
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULevelSequenceBurnInInitSettings : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequenceBurnInInitSettings");
			return ret;
		}
	};


	// Class LevelSequence.LevelSequenceBurnInOptions
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class ULevelSequenceBurnInOptions : public UObject	
	{
	public:
		bool bUseBurnIn; // 0x28(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FSoftClassPath BurnInClass; // 0x30(0x18)
		ULevelSequenceBurnInInitSettings Settings; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequenceBurnInOptions");
			return ret;
		}

		void SetBurnIn(FSoftClassPath InBurnInClass); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144DD4F8
	};


	// Class LevelSequence.LevelSequenceActor
	// Inherited from AActor -> UObject
	// Size: 0xA0 (0x330 - 0x290)
	class ALevelSequenceActor : public AActor	
	{
	public:
		unsigned char UnknownData05_3[0x18]; // 0x290(0x18) UNKNOWN PROPERTY
		FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x2A8(0x28)
		ULevelSequencePlayer SequencePlayer; // 0x2D0(0x8)
		ULevelSequence LevelSequenceAsset; // 0x2D8(0x8)
		FLevelSequenceCameraSettings CameraSettings; // 0x2E0(0x2)
		unsigned char UnknownData06_6[0x6]; // 0x2E2(0x6) UNKNOWN PROPERTY
		ULevelSequenceBurnInOptions BurnInOptions; // 0x2E8(0x8)
		UMovieSceneBindingOverrides BindingOverrides; // 0x2F0(0x8)
		bool bAutoPlay : 1; // 0x2F8:0(0x1)
		bool bOverrideInstanceData : 1; // 0x2F8:1(0x1)
		bool bReplicatePlayback : 1; // 0x2F8:2(0x1)
		unsigned char UnknownData07_5[0x7]; // 0x2F9(0x7) UNKNOWN PROPERTY
		UObject DefaultInstanceData; // 0x300(0x8)
		ULevelSequenceBurnIn BurnInInstance; // 0x308(0x8)
		bool bShowBurnin; // 0x310(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x311(0x3) UNKNOWN PROPERTY
		FWorldPartitionResolveData WorldPartitionResolveData; // 0x314(0x18)
		unsigned char UnknownData09_7[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequenceActor");
			return ret;
		}

		void ShowBurnin(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41414B9D8
		void SetSequence(ULevelSequence InSequence); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41414B8F8
		void SetReplicatePlayback(bool ReplicatePlayback); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41414B818
		void SetBindingByTag(FName BindingTag, TArray& Actors, bool bAllowBindingsFromAsset); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41414B738
		void SetBinding(FMovieSceneObjectBindingID Binding, TArray& Actors, bool bAllowBindingsFromAsset); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41414B658
		void ResetBindings(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41414B578
		void ResetBinding(FMovieSceneObjectBindingID Binding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41414B498
		void RemoveBindingByTag(FName tag, AActor Actor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41414B3B8
		void RemoveBinding(FMovieSceneObjectBindingID Binding, AActor Actor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41414B2D8
		void OnLevelSequenceLoaded__DelegateSignature(); // Flags: Public|Delegate 0x7FF41414B1F8
		void HideBurnin(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41414B118
		ULevelSequencePlayer GetSequencePlayer(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41414B038
		ULevelSequence GetSequence(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41414AF58
		TArray FindNamedBindings(FName tag); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41414AE78
		FMovieSceneObjectBindingID FindNamedBinding(FName tag); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41414AD98
		void AddBindingByTag(FName BindingTag, AActor Actor, bool bAllowBindingsFromAsset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41414ACB8
		void AddBinding(FMovieSceneObjectBindingID Binding, AActor Actor, bool bAllowBindingsFromAsset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41414ABD8
	};


	// Class LevelSequence.ReplicatedLevelSequenceActor
	// Inherited from ALevelSequenceActor -> AActor -> UObject
	// Size: 0x0 (0x330 - 0x330)
	class AReplicatedLevelSequenceActor : public ALevelSequenceActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.ReplicatedLevelSequenceActor");
			return ret;
		}
	};


	// Class LevelSequence.LevelSequenceAnimSequenceLink
	// Inherited from UAssetUserData -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class ULevelSequenceAnimSequenceLink : public UAssetUserData	
	{
	public:
		TArray AnimSequenceLinks; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequenceAnimSequenceLink");
			return ret;
		}
	};


	// Class LevelSequence.LevelSequenceBurnIn
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x360 - 0x2B8)
	class ULevelSequenceBurnIn : public UUserWidget	
	{
	public:
		FLevelSequencePlayerSnapshot FrameInformation; // 0x2B8(0xA0)
		ALevelSequenceActor LevelSequenceActor; // 0x358(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequenceBurnIn");
			return ret;
		}

		void SetSettings(UObject InSettings); // Flags: RequiredAPI|Event|Public|BlueprintEvent 0x7FF4144DD6B8
		UClass GetSettingsClass(); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent|Const 0x7FF4144DD5D8
	};


	// Class LevelSequence.LevelSequenceDirector
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class ULevelSequenceDirector : public UObject	
	{
	public:
		int32_t SubSequenceID; // 0x28(0x4)
		TWeakObjectPtr WeakLinker; // 0x2C(0x8)
		uint16_t InstanceID; // 0x34(0x2)
		uint16_t InstanceSerial; // 0x36(0x2)
		ULevelSequencePlayer Player; // 0x38(0x8)
		int32_t MovieScenePlayerIndex; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequenceDirector");
			return ret;
		}

		void OnCreated(); // Flags: RequiredAPI|Event|Public|BlueprintEvent 0x7FF4144DDDB8
		UMovieSceneSequence GetSequence(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DDCD8
		FQualifiedFrameTime GetRootSequenceTime(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DDBF8
		FQualifiedFrameTime GetCurrentTime(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DDB18
		TArray GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DDA38
		UObject GetBoundObject(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DD958
		TArray GetBoundActors(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DD878
		AActor GetBoundActor(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DD798
	};


	// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
	// Inherited from UBlueprint -> UBlueprintCore -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LegacyLevelSequenceDirectorBlueprint");
			return ret;
		}
	};


	// Class LevelSequence.LevelSequencePlayer
	// Inherited from UMovieSceneSequencePlayer -> UObject
	// Size: 0x108 (0x570 - 0x468)
	class ULevelSequencePlayer : public UMovieSceneSequencePlayer	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x468(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCameraCut; // 0x470(0x10)
		unsigned char UnknownData03_7[0xF0]; // 0x480(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequencePlayer");
			return ret;
		}

		UCameraComponent GetActiveCameraComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DDF78
		ULevelSequencePlayer CreateLevelSequencePlayer(UObject WorldContextObject, ULevelSequence LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor& OutActor); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144DDE98
	};


	// Class LevelSequence.LevelSequenceProjectSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class ULevelSequenceProjectSettings : public UDeveloperSettings	
	{
	public:
		bool bDefaultLockEngineToDisplayRate; // 0x30(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FString DefaultDisplayRate; // 0x38(0x10)
		FString DefaultTickResolution; // 0x48(0x10)
		EUpdateClockSource DefaultClockSource; // 0x58(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequenceProjectSettings");
			return ret;
		}
	};


	// Class LevelSequence.LevelSequenceMediaController
	// Inherited from AActor -> UObject
	// Size: 0x28 (0x2B8 - 0x290)
	class ALevelSequenceMediaController : public AActor	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		ALevelSequenceActor Sequence; // 0x298(0x8)
		UMediaComponent MediaComponent; // 0x2A0(0x8)
		float ServerStartTimeSeconds; // 0x2A8(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x2AC(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequenceMediaController");
			return ret;
		}

		void SynchronizeToServer(float DesyncThresholdSeconds); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DE3D8
		void Play(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DE2F8
		void OnRep_ServerStartTimeSeconds(); // Flags: Final|RequiredAPI|Native|Private 0x7FF4144DE218
		ALevelSequenceActor GetSequence(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DE138
		UMediaComponent GetMediaComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DE058
	};

}
