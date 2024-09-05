#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LevelSequence
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class LevelSequence.DefaultLevelSequenceInstanceData
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UDefaultLevelSequenceInstanceData : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		AActor* TransformOriginActor; // 0x30(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_3[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
		UMovieScene* MovieScene; // 0x70(0x8)
		FUpgradedLevelSequenceBindingReferences BindingReferences; // 0x78(0x10)
		UClass* DirectorClass; // 0x88(0x8)
		TArray<UAssetUserData*> AssetUserData; // 0x90(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequence");
			return ret;
		}

		void RemoveMetaDataByClass(UClass* InClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3425C4(relative to base address)
		UObject FindOrAddMetaDataByClass(UClass* InClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3419F0(relative to base address)
		UObject FindMetaDataByClass(UClass* InClass); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3419F0(relative to base address)
		UObject CopyMetaData(UObject* InMetaData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C341778(relative to base address)
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
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FSoftClassPath BurnInClass; // 0x30(0x18)
		ULevelSequenceBurnInInitSettings* Settings; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequenceBurnInOptions");
			return ret;
		}

		void SetBurnIn(FSoftClassPath InBurnInClass); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C342BBC(relative to base address)
	};


	// Class LevelSequence.LevelSequenceActor
	// Inherited from AActor -> UObject
	// Size: 0xA0 (0x330 - 0x290)
	class ALevelSequenceActor : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x290(0x18) UNKNOWN PROPERTY
		FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x2A8(0x28)
		ULevelSequencePlayer* SequencePlayer; // 0x2D0(0x8)
		ULevelSequence* LevelSequenceAsset; // 0x2D8(0x8)
		FLevelSequenceCameraSettings CameraSettings; // 0x2E0(0x2)
		unsigned char UnknownData01_6[0x6]; // 0x2E2(0x6) UNKNOWN PROPERTY
		ULevelSequenceBurnInOptions* BurnInOptions; // 0x2E8(0x8)
		UMovieSceneBindingOverrides* BindingOverrides; // 0x2F0(0x8)
		bool bAutoPlay : 1; // 0x2F8:0(0x1)
		bool bOverrideInstanceData : 1; // 0x2F8:1(0x1)
		bool bReplicatePlayback : 1; // 0x2F8:2(0x1)
		unsigned char UnknownData02_5[0x7]; // 0x2F9(0x7) UNKNOWN PROPERTY
		UObject* DefaultInstanceData; // 0x300(0x8)
		ULevelSequenceBurnIn* BurnInInstance; // 0x308(0x8)
		bool bShowBurnin; // 0x310(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x311(0x3) UNKNOWN PROPERTY
		FWorldPartitionResolveData WorldPartitionResolveData; // 0x314(0x18)
		unsigned char UnknownData04_7[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequenceActor");
			return ret;
		}

		void ShowBurnin(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C342DF8(relative to base address)
		void SetSequence(ULevelSequence* InSequence); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C342D78(relative to base address)
		void SetReplicatePlayback(bool ReplicatePlayback); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C342CF8(relative to base address)
		void SetBindingByTag(FName BindingTag, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C342A50(relative to base address)
		void SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C3427F0(relative to base address)
		void ResetBindings(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C342778(relative to base address)
		void ResetBinding(FMovieSceneObjectBindingID Binding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C34263C(relative to base address)
		void RemoveBindingByTag(FName Tag, AActor* Actor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C342500(relative to base address)
		void RemoveBinding(FMovieSceneObjectBindingID Binding, AActor* Actor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C342304(relative to base address)
		void OnLevelSequenceLoaded__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HideBurnin(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3422C0(relative to base address)
		ULevelSequencePlayer GetSequencePlayer(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749B404A0(relative to base address)
		ULevelSequence GetSequence(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C342234(relative to base address)
		TArray FindNamedBindings(FName Tag); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C341B48(relative to base address)
		FMovieSceneObjectBindingID FindNamedBinding(FName Tag); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C341A78(relative to base address)
		void AddBindingByTag(FName BindingTag, AActor* Actor, bool bAllowBindingsFromAsset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C341680(relative to base address)
		void AddBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3413CC(relative to base address)
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
		TArray<FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequenceAnimSequenceLink");
			return ret;
		}
	};


	// Class LevelSequence.LevelSequenceBurnIn
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x358 - 0x2B0)
	class ULevelSequenceBurnIn : public UUserWidget	
	{
	public:
		FLevelSequencePlayerSnapshot FrameInformation; // 0x2B0(0xA0)
		ALevelSequenceActor* LevelSequenceActor; // 0x350(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequenceBurnIn");
			return ret;
		}

		void SetSettings(UObject* InSettings); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UClass GetSettingsClass(); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74C342288(relative to base address)
	};


	// Class LevelSequence.LevelSequenceDirector
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class ULevelSequenceDirector : public UObject	
	{
	public:
		int32_t SubSequenceID; // 0x28(0x4)
		TWeakObjectPtr<UMovieSceneEntitySystemLinker*> WeakLinker; // 0x2C(0x8)
		uint16_t InstanceID; // 0x34(0x2)
		uint16_t InstanceSerial; // 0x36(0x2)
		ULevelSequencePlayer* Player; // 0x38(0x8)
		int32_t MovieScenePlayerIndex; // 0x40(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequenceDirector");
			return ret;
		}

		void OnCreated(); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UMovieSceneSequence GetSequence(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C342264(relative to base address)
		FQualifiedFrameTime GetRootSequenceTime(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C342204(relative to base address)
		FQualifiedFrameTime GetCurrentTime(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3421D4(relative to base address)
		TArray GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C342070(relative to base address)
		UObject GetBoundObject(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C341F24(relative to base address)
		TArray GetBoundActors(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C341DC0(relative to base address)
		AActor GetBoundActor(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C341C74(relative to base address)
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
		unsigned char UnknownData00_3[0x8]; // 0x468(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCameraCut; // 0x470(0x10)
		unsigned char UnknownData01_7[0xF0]; // 0x480(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequencePlayer");
			return ret;
		}

		UCameraComponent GetActiveCameraComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C341C4C(relative to base address)
		ULevelSequencePlayer CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor* OutActor); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C3417E8(relative to base address)
	};


	// Class LevelSequence.LevelSequenceProjectSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class ULevelSequenceProjectSettings : public UDeveloperSettings	
	{
	public:
		bool bDefaultLockEngineToDisplayRate; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FString DefaultDisplayRate; // 0x38(0x10)
		FString DefaultTickResolution; // 0x48(0x10)
		EUpdateClockSource DefaultClockSource; // 0x58(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		ALevelSequenceActor* Sequence; // 0x298(0x8)
		UMediaComponent* MediaComponent; // 0x2A0(0x8)
		float ServerStartTimeSeconds; // 0x2A8(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x2AC(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LevelSequence.LevelSequenceMediaController");
			return ret;
		}

		void SynchronizeToServer(float DesyncThresholdSeconds); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C342E14(relative to base address)
		void Play(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3422F0(relative to base address)
		void OnRep_ServerStartTimeSeconds(); // Flags: Final|RequiredAPI|Native|Private, Memory Exec: 0x7FF74C3422DC(relative to base address)
		ALevelSequenceActor GetSequence(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C34224C(relative to base address)
		UMediaComponent GetMediaComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2DA7CC(relative to base address)
	};

}
