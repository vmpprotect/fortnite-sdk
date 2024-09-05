#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MovieSceneTracks
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MovieSceneTracks.MovieSceneTransformOrigin
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneTransformOrigin : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneTransformOrigin");
			return ret;
		}

		FTransform BP_GetTransformOrigin(); // Flags: RequiredAPI|Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MovieSceneTracks.MovieSceneConsoleVariableTrackInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneConsoleVariableTrackInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneConsoleVariableTrackInterface");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneDecomposerTestObject
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UMovieSceneDecomposerTestObject : public UObject	
	{
	public:
		float FloatProperty; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneDecomposerTestObject");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScenePartialEvaluationTestObject
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UMovieScenePartialEvaluationTestObject : public UObject	
	{
	public:
		float FloatProperty; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FVector VectorProperty; // 0x30(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePartialEvaluationTestObject");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneReplaceableActorBinding
	// Inherited from UMovieSceneReplaceableBindingBase -> UMovieSceneCustomBinding -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneReplaceableActorBinding : public UMovieSceneReplaceableBindingBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneReplaceableActorBinding");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneReplaceableDirectorBlueprintBinding
	// Inherited from UMovieSceneReplaceableBindingBase -> UMovieSceneCustomBinding -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UMovieSceneReplaceableDirectorBlueprintBinding : public UMovieSceneReplaceableBindingBase	
	{
	public:
		FMovieSceneDynamicBinding DynamicBinding; // 0x28(0x28)
		UClass* PreviewSpawnableType; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneReplaceableDirectorBlueprintBinding");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneSpawnableActorBindingBase
	// Inherited from UMovieSceneSpawnableBindingBase -> UMovieSceneCustomBinding -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UMovieSceneSpawnableActorBindingBase : public UMovieSceneSpawnableBindingBase	
	{
	public:
		bool bNetAddressableName; // 0x30(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		FName LevelName; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSpawnableActorBindingBase");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneSpawnableActorBinding
	// Inherited from UMovieSceneSpawnableActorBindingBase -> UMovieSceneSpawnableBindingBase -> UMovieSceneCustomBinding -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UMovieSceneSpawnableActorBinding : public UMovieSceneSpawnableActorBindingBase	
	{
	public:
		AActor* ActorTemplate; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSpawnableActorBinding");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneSpawnableDirectorBlueprintBinding
	// Inherited from UMovieSceneSpawnableBindingBase -> UMovieSceneCustomBinding -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneSpawnableDirectorBlueprintBinding : public UMovieSceneSpawnableBindingBase	
	{
	public:
		FMovieSceneDynamicBinding DynamicBinding; // 0x30(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSpawnableDirectorBlueprintBinding");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneTestSequence
	// Inherited from UMovieSceneSequence -> UMovieSceneSignedObject -> UObject
	// Size: 0x28 (0x90 - 0x68)
	class UMovieSceneTestSequence : public UMovieSceneSequence	
	{
	public:
		UMovieScene* MovieScene; // 0x68(0x8)
		TArray<UObject*> BoundObjects; // 0x70(0x10)
		TArray<FGuid> BindingGuids; // 0x80(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneTestSequence");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneDoublePerlinNoiseChannelContainer
	// Inherited from UMovieSceneChannelOverrideContainer -> UMovieSceneSignedObject -> UObject
	// Size: 0x68 (0xC0 - 0x58)
	class UMovieSceneDoublePerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer	
	{
	public:
		FMovieSceneDoublePerlinNoiseChannel PerlinNoiseChannel; // 0x58(0x68)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneDoublePerlinNoiseChannelContainer");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneFloatPerlinNoiseChannelContainer
	// Inherited from UMovieSceneChannelOverrideContainer -> UMovieSceneSignedObject -> UObject
	// Size: 0x68 (0xC0 - 0x58)
	class UMovieSceneFloatPerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer	
	{
	public:
		FMovieSceneFloatPerlinNoiseChannel PerlinNoiseChannel; // 0x58(0x68)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneFloatPerlinNoiseChannelContainer");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x1B0 (0x1F0 - 0x40)
	class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem	
	{
	public:
		unsigned char UnknownData00_1[0x1B0]; // 0x40(0x1B0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScene3DConstraintSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x28 (0x118 - 0xF0)
	class UMovieScene3DConstraintSection : public UMovieSceneSection	
	{
	public:
		FGuid ConstraintID; // 0xF0(0x10)
		FMovieSceneObjectBindingID ConstraintBindingID; // 0x100(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DConstraintSection");
			return ret;
		}

		void SetConstraintBindingID(FMovieSceneObjectBindingID& InConstraintBindingID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C1E1E18(relative to base address)
		FMovieSceneObjectBindingID GetConstraintBindingID(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C1E1CEC(relative to base address)
	};


	// Class MovieSceneTracks.MovieScene3DAttachSection
	// Inherited from UMovieScene3DConstraintSection -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x18 (0x130 - 0x118)
	class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x118(0x8) UNKNOWN PROPERTY
		FName AttachSocketName; // 0x120(0x4)
		FName AttachComponentName; // 0x124(0x4)
		EAttachmentRule AttachmentLocationRule; // 0x128(0x1)
		EAttachmentRule AttachmentRotationRule; // 0x129(0x1)
		EAttachmentRule AttachmentScaleRule; // 0x12A(0x1)
		EDetachmentRule DetachmentLocationRule; // 0x12B(0x1)
		EDetachmentRule DetachmentRotationRule; // 0x12C(0x1)
		EDetachmentRule DetachmentScaleRule; // 0x12D(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x12E(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DAttachSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScene3DPathSection
	// Inherited from UMovieScene3DConstraintSection -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x118 (0x230 - 0x118)
	class UMovieScene3DPathSection : public UMovieScene3DConstraintSection	
	{
	public:
		FMovieSceneFloatChannel TimingCurve; // 0x118(0x110)
		MovieScene3DPathSection_Axis FrontAxisEnum; // 0x228(0x1)
		MovieScene3DPathSection_Axis UpAxisEnum; // 0x229(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x22A(0x2) UNKNOWN PROPERTY
		bool bFollow : 1; // 0x22C:0(0x1)
		bool bReverse : 1; // 0x22C:1(0x1)
		bool bForceUpright : 1; // 0x22C:2(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x22D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DPathSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScene3DTransformSectionConstraints
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UMovieScene3DTransformSectionConstraints : public UObject	
	{
	public:
		TArray<FConstraintAndActiveChannel> ConstraintsChannels; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DTransformSectionConstraints");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScene3DTransformSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0xB48 (0xC38 - 0xF0)
	class UMovieScene3DTransformSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x40]; // 0xF0(0x40) UNKNOWN PROPERTY
		FMovieSceneTransformMask TransformMask; // 0x130(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
		FMovieSceneDoubleChannel Translation; // 0x138(0x348)
		FMovieSceneDoubleChannel Rotation; // 0x480(0x348)
		FMovieSceneDoubleChannel Scale; // 0x7C8(0x348)
		FMovieSceneFloatChannel ManualWeight; // 0xB10(0x110)
		UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry; // 0xC20(0x8)
		UMovieScene3DTransformSectionConstraints* Constraints; // 0xC28(0x8)
		bool bUseQuaternionInterpolation; // 0xC30(0x1)
		unsigned char UnknownData02_7[0x7]; // 0xC31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DTransformSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneActorReferenceSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x1A8 (0x298 - 0xF0)
	class UMovieSceneActorReferenceSection : public UMovieSceneSection	
	{
	public:
		FMovieSceneActorReferenceData ActorReferenceData; // 0xF0(0x118)
		FIntegralCurve ActorGuidIndexCurve; // 0x208(0x80)
		TArray<FString> ActorGuidStrings; // 0x288(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneActorReferenceSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneAudioSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x530 (0x620 - 0xF0)
	class UMovieSceneAudioSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		USoundBase* Sound; // 0xF8(0x8)
		FFrameNumber StartFrameOffset; // 0x100(0x4)
		float StartOffset; // 0x104(0x4)
		float AudioStartTime; // 0x108(0x4)
		float AudioDilationFactor; // 0x10C(0x4)
		float AudioVolume; // 0x110(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x114(0x4) UNKNOWN PROPERTY
		FMovieSceneFloatChannel SoundVolume; // 0x118(0x110)
		FMovieSceneFloatChannel PitchMultiplier; // 0x228(0x110)
		TMap<FName, FMovieSceneFloatChannel> Inputs_Float; // 0x338(0x50)
		TMap<FName, FMovieSceneStringChannel> Inputs_String; // 0x388(0x50)
		TMap<FName, FMovieSceneBoolChannel> Inputs_Bool; // 0x3D8(0x50)
		TMap<FName, FMovieSceneIntegerChannel> Inputs_Int; // 0x428(0x50)
		TMap<FName, FMovieSceneAudioTriggerChannel> Inputs_Trigger; // 0x478(0x50)
		FMovieSceneActorReferenceData AttachActorData; // 0x4C8(0x118)
		bool bLooping; // 0x5E0(0x1)
		bool bSuppressSubtitles; // 0x5E1(0x1)
		bool bOverrideAttenuation; // 0x5E2(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x5E3(0x5) UNKNOWN PROPERTY
		USoundAttenuation* AttenuationSettings; // 0x5E8(0x8)
		FDelegateProperty OnQueueSubtitles; // 0x5F0(0xC)
		unsigned char UnknownData03_6[0x4]; // 0x5FC(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAudioFinished; // 0x600(0x10)
		FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x610(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneAudioSection");
			return ret;
		}

		void SetSuppressSubtitles(bool bInSuppressSubtitles); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C1E2150(relative to base address)
		void SetStartOffset(FFrameNumber InStartOffset); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C1E2044(relative to base address)
		void SetSound(USoundBase* InSound); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C1E1FC4(relative to base address)
		void SetOverrideAttenuation(bool bInOverrideAttenuation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C1E1F44(relative to base address)
		void SetLooping(bool bInLooping); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C1E1EC4(relative to base address)
		void SetAttenuationSettings(USoundAttenuation* InAttenuationSettings); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C1E1D8C(relative to base address)
		bool GetSuppressSubtitles(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C1E1D74(relative to base address)
		FFrameNumber GetStartOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C1E1D5C(relative to base address)
		USoundBase GetSound(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C1E1D44(relative to base address)
		bool GetOverrideAttenuation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C1E1D2C(relative to base address)
		bool GetLooping(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C1E1D14(relative to base address)
		USoundAttenuation GetAttenuationSettings(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C1E1CD4(relative to base address)
	};


	// Class MovieSceneTracks.MovieSceneBaseCacheSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xF8 - 0xF0)
	class UMovieSceneBaseCacheSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneBaseCacheSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneByteSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x110 (0x200 - 0xF0)
	class UMovieSceneByteSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneByteChannel ByteCurve; // 0xF8(0x108)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneByteSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCameraCutSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0xB0 (0x1A0 - 0xF0)
	class UMovieSceneCameraCutSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		bool bLockPreviousCamera; // 0xF8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xF9(0x3) UNKNOWN PROPERTY
		FGuid CameraGuid; // 0xFC(0x10)
		FMovieSceneObjectBindingID CameraBindingID; // 0x10C(0x18)
		unsigned char UnknownData02_6[0xC]; // 0x124(0xC) UNKNOWN PROPERTY
		FTransform InitialCameraCutTransform; // 0x130(0x60)
		bool bHasInitialCameraCutTransform; // 0x190(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x191(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCameraCutSection");
			return ret;
		}

		void SetCameraBindingID(FMovieSceneObjectBindingID& InCameraBindingID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C21B668(relative to base address)
		FMovieSceneObjectBindingID GetCameraBindingID(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C21AEEC(relative to base address)
	};


	// Class MovieSceneTracks.MovieSceneCameraShakeSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x58 (0x148 - 0xF0)
	class UMovieSceneCameraShakeSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneCameraShakeSectionData ShakeData; // 0xF8(0x28)
		UClass* ShakeClass; // 0x120(0x8)
		float PlayScale; // 0x128(0x4)
		ECameraShakePlaySpace Playspace; // 0x12C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x12D(0x3) UNKNOWN PROPERTY
		FRotator UserDefinedPlaySpace; // 0x130(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCameraShakeSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x30 (0x120 - 0xF0)
	class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneCameraShakeSectionData ShakeData; // 0xF8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x100 (0x1F0 - 0xF0)
	class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xF8(0xF8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCinematicShotSection
	// Inherited from UMovieSceneSubSection -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x20 (0x158 - 0x138)
	class UMovieSceneCinematicShotSection : public UMovieSceneSubSection	
	{
	public:
		FString ShotDisplayName; // 0x138(0x10)
		FText DisplayName; // 0x148(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCinematicShotSection");
			return ret;
		}

		void SetShotDisplayName(FString InShotDisplayName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C21BB78(relative to base address)
		FString GetShotDisplayName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C21B138(relative to base address)
	};


	// Class MovieSceneTracks.MovieSceneColorSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x448 (0x538 - 0xF0)
	class UMovieSceneColorSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneFloatChannel RedCurve; // 0xF8(0x110)
		FMovieSceneFloatChannel GreenCurve; // 0x208(0x110)
		FMovieSceneFloatChannel BlueCurve; // 0x318(0x110)
		FMovieSceneFloatChannel AlphaCurve; // 0x428(0x110)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneColorSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneComponentMaterialParameterSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x28 (0x118 - 0xF0)
	class UMovieSceneComponentMaterialParameterSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		TArray<FScalarMaterialParameterInfoAndCurve> ScalarParameterInfosAndCurves; // 0xF8(0x10)
		TArray<FColorMaterialParameterInfoAndCurves> ColorParameterInfosAndCurves; // 0x108(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneComponentMaterialParameterSection");
			return ret;
		}

		bool RemoveScalarParameter(FMaterialParameterInfo& InParameterInfo); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C21B398(relative to base address)
		bool RemoveColorParameter(FMaterialParameterInfo& InParameterInfo); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C21B26C(relative to base address)
		void AddScalarParameterKey(FMaterialParameterInfo& InParameterInfo, FFrameNumber InTime, float InValue, FString InLayerName, FString InAssetName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C21A2BC(relative to base address)
		void AddColorParameterKey(FMaterialParameterInfo& InParameterInfo, FFrameNumber InTime, FLinearColor InValue, FString InLayerName, FString InAssetName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C219CD4(relative to base address)
	};


	// Class MovieSceneTracks.MovieSceneConstrainedSection
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneConstrainedSection : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneConstrainedSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneParameterSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x68 (0x158 - 0xF0)
	class UMovieSceneParameterSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xF8(0x10)
		TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0x108(0x10)
		TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x118(0x10)
		TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x128(0x10)
		TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x138(0x10)
		TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x148(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneParameterSection");
			return ret;
		}

		bool RemoveVectorParameter(FName InParameterName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C21B5DC(relative to base address)
		bool RemoveVector2DParameter(FName InParameterName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C21B550(relative to base address)
		bool RemoveTransformParameter(FName InParameterName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C21B4C4(relative to base address)
		bool RemoveScalarParameter(FName InParameterName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C21B438(relative to base address)
		bool RemoveColorParameter(FName InParameterName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C21B30C(relative to base address)
		bool RemoveBoolParameter(FName InParameterName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C21B1E0(relative to base address)
		void GetParameterNames(TSet<FName>& ParameterNames); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C21AFF0(relative to base address)
		void AddVectorParameterKey(FName InParameterName, FFrameNumber InTime, FVector InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C21ACD0(relative to base address)
		void AddVector2DParameterKey(FName InParameterName, FFrameNumber InTime, FVector2D InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C21AABC(relative to base address)
		void AddTransformParameterKey(FName InParameterName, FFrameNumber InTime, FTransform& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C21A884(relative to base address)
		void AddScalarParameterKey(FName InParameterName, FFrameNumber InTime, float InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C21A678(relative to base address)
		void AddColorParameterKey(FName InParameterName, FFrameNumber InTime, FLinearColor InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C21A0A8(relative to base address)
		void AddBoolParameterKey(FName InParameterName, FFrameNumber InTime, bool InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C219AC8(relative to base address)
	};


	// Class MovieSceneTracks.MovieSceneCustomPrimitiveDataSection
	// Inherited from UMovieSceneParameterSection -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0x158 - 0x158)
	class UMovieSceneCustomPrimitiveDataSection : public UMovieSceneParameterSection	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCustomPrimitiveDataSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCVarSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x68 (0x158 - 0xF0)
	class UMovieSceneCVarSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		TArray<FMovieSceneConsoleVariableCollection> ConsoleVariableCollections; // 0xF8(0x10)
		FMovieSceneCVarOverrides ConsoleVariables; // 0x108(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCVarSection");
			return ret;
		}

		void SetFromString(FString InString); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C21B988(relative to base address)
		FString GetString(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C21B178(relative to base address)
	};


	// Class MovieSceneTracks.MovieSceneDataLayerSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x20 (0x110 - 0xF0)
	class UMovieSceneDataLayerSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		TArray<UDataLayerAsset*> DataLayerAssets; // 0xF8(0x10)
		EDataLayerRuntimeState DesiredState; // 0x108(0x1)
		EDataLayerRuntimeState PrerollState; // 0x109(0x1)
		bool bFlushOnActivated; // 0x10A(0x1)
		bool bFlushOnUnload; // 0x10B(0x1)
		unsigned char UnknownData01_7[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneDataLayerSection");
			return ret;
		}

		void SetPrerollState(EDataLayerRuntimeState InPrerollState); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C21BAFC(relative to base address)
		void SetFlushOnUnload(bool bFlushOnUnload); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C21B908(relative to base address)
		void SetFlushOnActivated(bool bFlushOnActivated); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C21B888(relative to base address)
		void SetDesiredState(EDataLayerRuntimeState InDesiredState); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C21B80C(relative to base address)
		void SetDataLayerAssets(TArray<UDataLayerAsset*>& InDataLayerAssets); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C21B714(relative to base address)
		bool HasPreRoll(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF74C21B1B8(relative to base address)
		EDataLayerRuntimeState GetPrerollState(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C21B120(relative to base address)
		bool GetFlushOnUnload(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C21AFBC(relative to base address)
		bool GetFlushOnActivated(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C21AFA4(relative to base address)
		EDataLayerRuntimeState GetDesiredState(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C21AF8C(relative to base address)
		TArray GetDataLayerAssets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C21AF14(relative to base address)
	};


	// Class MovieSceneTracks.MovieSceneDoubleSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x120 (0x210 - 0xF0)
	class UMovieSceneDoubleSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneDoubleChannel DoubleCurve; // 0xF8(0x118)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneDoubleSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneEnumSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x110 (0x200 - 0xF0)
	class UMovieSceneEnumSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneByteChannel EnumCurve; // 0xF8(0x108)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneEnumSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneEventSectionBase
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xF0 - 0xF0)
	class UMovieSceneEventSectionBase : public UMovieSceneSection	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneEventSectionBase");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneEventRepeaterSection
	// Inherited from UMovieSceneEventSectionBase -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x30 (0x120 - 0xF0)
	class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneEvent Event; // 0xF8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneEventRepeaterSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneEventSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x170 (0x260 - 0xF0)
	class UMovieSceneEventSection : public UMovieSceneSection	
	{
	public:
		FNameCurve Events; // 0xF0(0x78)
		FMovieSceneEventSectionData EventData; // 0x168(0xF8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneEventSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneEventTriggerSection
	// Inherited from UMovieSceneEventSectionBase -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x100 (0x1F0 - 0xF0)
	class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneEventChannel EventChannel; // 0xF8(0xF8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneEventTriggerSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneFadeSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x130 (0x220 - 0xF0)
	class UMovieSceneFadeSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneFloatChannel FloatCurve; // 0xF8(0x110)
		FLinearColor FadeColor; // 0x208(0x10)
		bool bFadeAudio : 1; // 0x218:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x219(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneFadeSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneFloatSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x128 (0x218 - 0xF0)
	class UMovieSceneFloatSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xF0(0x10) UNKNOWN PROPERTY
		FMovieSceneFloatChannel FloatCurve; // 0x100(0x110)
		UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry; // 0x210(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneFloatSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneIntegerSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x110 (0x200 - 0xF0)
	class UMovieSceneIntegerSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneIntegerChannel IntegerCurve; // 0xF8(0x108)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneIntegerSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x20 (0x110 - 0xF0)
	class UMovieSceneLevelVisibilitySection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		ELevelVisibility Visibility; // 0xF8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY
		TArray<FName> LevelNames; // 0x100(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneLevelVisibilitySection");
			return ret;
		}

		void SetVisibility(ELevelVisibility InVisibility); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C21BC18(relative to base address)
		void SetLevelNames(TArray<FName>& InLevelNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C21BA1C(relative to base address)
		ELevelVisibility GetVisibility(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7491C7738(relative to base address)
		TArray GetLevelNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C21AFD4(relative to base address)
	};


	// Class MovieSceneTracks.MovieSceneObjectPropertySection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x130 (0x220 - 0xF0)
	class UMovieSceneObjectPropertySection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneObjectPathChannel ObjectChannel; // 0xF8(0x128)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneObjectPropertySection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneParameterSectionExtender
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneParameterSectionExtender : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneParameterSectionExtender");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneParticleSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x108 (0x1F8 - 0xF0)
	class UMovieSceneParticleSection : public UMovieSceneSection	
	{
	public:
		FMovieSceneParticleChannel ParticleKeys; // 0xF0(0x108)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneParticleSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x130 (0x220 - 0xF0)
	class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneObjectPathChannel MaterialChannel; // 0xF8(0x128)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePrimitiveMaterialSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x260 (0x350 - 0xF0)
	class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneSkeletalAnimationParams Params; // 0xF8(0x148)
		UAnimSequence* AnimSequence; // 0x240(0x8)
		UAnimSequenceBase* Animation; // 0x248(0x8)
		float StartOffset; // 0x250(0x4)
		float EndOffset; // 0x254(0x4)
		float PlayRate; // 0x258(0x4)
		bool bReverse : 1; // 0x25C:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x25D(0x3) UNKNOWN PROPERTY
		FName SlotName; // 0x260(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x264(0x4) UNKNOWN PROPERTY
		FVector StartLocationOffset; // 0x268(0x18)
		FRotator StartRotationOffset; // 0x280(0x18)
		bool bMatchWithPrevious; // 0x298(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x299(0x3) UNKNOWN PROPERTY
		FName MatchedBoneName; // 0x29C(0x4)
		FVector MatchedLocationOffset; // 0x2A0(0x18)
		FRotator MatchedRotationOffset; // 0x2B8(0x18)
		bool bMatchTranslation; // 0x2D0(0x1)
		bool bMatchIncludeZHeight; // 0x2D1(0x1)
		bool bMatchRotationYaw; // 0x2D2(0x1)
		bool bMatchRotationPitch; // 0x2D3(0x1)
		bool bMatchRotationRoll; // 0x2D4(0x1)
		unsigned char UnknownData04_7[0x7B]; // 0x2D5(0x7B) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSkeletalAnimationSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneSlomoSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x118 (0x208 - 0xF0)
	class UMovieSceneSlomoSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneFloatChannel FloatCurve; // 0xF8(0x110)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSlomoSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneStringSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x118 (0x208 - 0xF0)
	class UMovieSceneStringSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneStringChannel StringCurve; // 0xF8(0x110)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneStringSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneFloatVectorSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x450 (0x540 - 0xF0)
	class UMovieSceneFloatVectorSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneFloatChannel Curves; // 0xF8(0x440)
		int32_t ChannelsUsed; // 0x538(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x53C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneFloatVectorSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneDoubleVectorSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x470 (0x560 - 0xF0)
	class UMovieSceneDoubleVectorSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneDoubleChannel Curves; // 0xF8(0x460)
		int32_t ChannelsUsed; // 0x558(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x55C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneDoubleVectorSection");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneVisibilitySection
	// Inherited from UMovieSceneBoolSection -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0x208 - 0x200)
	class UMovieSceneVisibilitySection : public UMovieSceneBoolSection	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x200(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneVisibilitySection");
			return ret;
		}
	};


	// Class MovieSceneTracks.BoolChannelEvaluatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UBoolChannelEvaluatorSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.BoolChannelEvaluatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.ByteChannelEvaluatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.ByteChannelEvaluatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.DoubleChannelEvaluatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UDoubleChannelEvaluatorSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.DoubleChannelEvaluatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.DoublePerlinNoiseChannelEvaluatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UDoublePerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.DoublePerlinNoiseChannelEvaluatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.FloatChannelEvaluatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.FloatChannelEvaluatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.FloatPerlinNoiseChannelEvaluatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UFloatPerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.FloatPerlinNoiseChannelEvaluatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.IntegerChannelEvaluatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.IntegerChannelEvaluatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScenePropertySystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieScenePropertySystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x40(0x8) UNKNOWN PROPERTY
		UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x48(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePropertySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DTransformPropertySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneAudioSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0xB0 (0xF0 - 0x40)
	class UMovieSceneAudioSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0xB0]; // 0x40(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneAudioSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneBoolPropertySystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneBoolPropertySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneBytePropertySystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneBytePropertySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCameraShakeInstantiatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x80 (0xC0 - 0x40)
	class UMovieSceneCameraShakeInstantiatorSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x80]; // 0x40(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCameraShakeInstantiatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCameraShakeEvaluatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneCameraShakeEvaluatorSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCameraShakeEvaluatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneColorPropertySystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneColorPropertySystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneColorPropertySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x190 (0x1D0 - 0x40)
	class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem	
	{
	public:
		unsigned char UnknownData00_1[0x190]; // 0x40(0x190) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneComponentAttachmentSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneComponentMaterialSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x168 (0x1A8 - 0x40)
	class UMovieSceneComponentMaterialSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x168]; // 0x40(0x168) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneComponentMaterialSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x1F0 (0x230 - 0x40)
	class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem	
	{
	public:
		unsigned char UnknownData00_1[0x1F0]; // 0x40(0x1F0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneComponentMobilitySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneComponentTransformSystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneComponentTransformSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneConstraintSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x10 (0x50 - 0x40)
	class UMovieSceneConstraintSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneConstraintSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCustomPrimitiveDataSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x198 (0x1D8 - 0x40)
	class UMovieSceneCustomPrimitiveDataSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_3[0x190]; // 0x40(0x190) UNKNOWN PROPERTY
		UMovieScenePiecewiseDoubleBlenderSystem* DoubleBlenderSystem; // 0x1D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCustomPrimitiveDataSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneDataLayerSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x90 (0xD0 - 0x40)
	class UMovieSceneDataLayerSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x90]; // 0x40(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneDataLayerSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneDeferredComponentMovementSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneDoublePropertySystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneDoublePropertySystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneDoublePropertySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneEnumPropertySystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneEnumPropertySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneEulerTransformPropertySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneEventSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x50 (0x90 - 0x40)
	class UMovieSceneEventSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneEventSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
	// Inherited from UMovieSceneEventSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePreSpawnEventSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
	// Inherited from UMovieSceneEventSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePostSpawnEventSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScenePostEvalEventSystem
	// Inherited from UMovieSceneEventSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePostEvalEventSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneFadeSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x10 (0x50 - 0x40)
	class UMovieSceneFadeSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneFadeSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneFloatPropertySystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneFloatPropertySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x8 (0x48 - 0x40)
	class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem	
	{
	public:
		UMovieSceneEntityGroupingSystem* GroupingSystem; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneHierarchicalBiasSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneInitialValueSystem
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneInitialValueSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneIntegerPropertySystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneIntegerPropertySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x148 (0x188 - 0x40)
	class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x148]; // 0x40(0x148) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneLevelVisibilitySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x20 (0x60 - 0x40)
	class UMovieSceneMaterialParameterCollectionSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x40(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneMaterialParameterInstantiatorSystem
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x318 (0x358 - 0x40)
	class UMovieSceneMaterialParameterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem	
	{
	public:
		unsigned char UnknownData00_3[0x310]; // 0x40(0x310) UNKNOWN PROPERTY
		UMovieScenePiecewiseDoubleBlenderSystem* DoubleBlenderSystem; // 0x350(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneMaterialParameterInstantiatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneMaterialParameterEvaluationSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneMaterialParameterEvaluationSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneMaterialParameterEvaluationSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x58 (0x98 - 0x40)
	class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0x40(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneMotionVectorSimulationSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneObjectPropertySystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneObjectPropertySystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneObjectPropertySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
	// Inherited from UMovieSceneBlenderSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x28 (0x90 - 0x68)
	class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x68(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
	// Inherited from UMovieSceneBlenderSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x28 (0x90 - 0x68)
	class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x68(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScenePiecewiseDoubleBlenderSystem
	// Inherited from UMovieSceneBlenderSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0xC8 (0x130 - 0x68)
	class UMovieScenePiecewiseDoubleBlenderSystem : public UMovieSceneBlenderSystem	
	{
	public:
		unsigned char UnknownData00_1[0xC8]; // 0x68(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePiecewiseDoubleBlenderSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
	// Inherited from UMovieSceneBlenderSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x28 (0x90 - 0x68)
	class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x68(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
	// Inherited from UMovieSceneBlenderSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x48 (0xB0 - 0x68)
	class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem	
	{
	public:
		unsigned char UnknownData00_1[0x48]; // 0x68(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UMovieSceneAsyncAction_SequencePrediction : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate Result; // 0x30(0x10)
		FMulticastInlineDelegate Failure; // 0x40(0x10)
		unsigned char UnknownData00_6[0x10]; // 0x50(0x10) UNKNOWN PROPERTY
		UMovieSceneSequencePlayer* SequencePlayer; // 0x60(0x8)
		USceneComponent* SceneComponent; // 0x68(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x70(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction");
			return ret;
		}

		UMovieSceneAsyncAction_SequencePrediction PredictWorldTransformAtTime(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, float TimeInSeconds); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C24EB30(relative to base address)
		UMovieSceneAsyncAction_SequencePrediction PredictWorldTransformAtFrame(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, FFrameTime FrameTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C24E938(relative to base address)
		UMovieSceneAsyncAction_SequencePrediction PredictLocalTransformAtTime(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, float TimeInSeconds); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C24E7D4(relative to base address)
		UMovieSceneAsyncAction_SequencePrediction PredictLocalTransformAtFrame(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, FFrameTime FrameTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C24E5DC(relative to base address)
	};


	// Class MovieSceneTracks.MovieScenePredictionSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0xB0 (0xF0 - 0x40)
	class UMovieScenePredictionSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_3[0x90]; // 0x40(0x90) UNKNOWN PROPERTY
		TArray<UMovieSceneAsyncAction_SequencePrediction*> PendingPredictions; // 0xD0(0x10)
		TArray<UMovieSceneAsyncAction_SequencePrediction*> ProcessingPredictions; // 0xE0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePredictionSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x190 (0x1D0 - 0x40)
	class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem	
	{
	public:
		unsigned char UnknownData00_1[0x190]; // 0x40(0x190) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePropertyInstantiatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneQuaternionBlenderSystem
	// Inherited from UMovieSceneBlenderSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x60 (0xC8 - 0x68)
	class UMovieSceneQuaternionBlenderSystem : public UMovieSceneBlenderSystem	
	{
	public:
		unsigned char UnknownData00_1[0x60]; // 0x68(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneQuaternionBlenderSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneSkeletalAnimationSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0xA0 (0xE0 - 0x40)
	class UMovieSceneSkeletalAnimationSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0xA0]; // 0x40(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSkeletalAnimationSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneSlomoSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneSlomoSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSlomoSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneStringPropertySystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneStringPropertySystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneStringPropertySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneTransformOriginInstantiatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneTransformOriginInstantiatorSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneTransformOriginInstantiatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneTransformOriginSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x38 (0x78 - 0x40)
	class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0x40(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneTransformOriginSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneFloatVectorPropertySystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneFloatVectorPropertySystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneFloatVectorPropertySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneDoubleVectorPropertySystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneDoubleVectorPropertySystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneDoubleVectorPropertySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneVisibilitySystem
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x10 (0x50 - 0x40)
	class UMovieSceneVisibilitySystem : public UMovieSceneEntityInstantiatorSystem	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneVisibilitySystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.ObjectPathChannelEvaluatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UObjectPathChannelEvaluatorSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.ObjectPathChannelEvaluatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.StringChannelEvaluatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UStringChannelEvaluatorSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.StringChannelEvaluatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x98 (0xD8 - 0x40)
	class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem	
	{
	public:
		unsigned char UnknownData00_3[0x88]; // 0x40(0x88) UNKNOWN PROPERTY
		UWeightAndEasingEvaluatorSystem* EvaluatorSystem; // 0xC8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneHierarchicalEasingFinalizationSystem
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneHierarchicalEasingFinalizationSystem : public UMovieSceneEntityInstantiatorSystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneHierarchicalEasingFinalizationSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.WeightAndEasingEvaluatorSystem");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
	// Inherited from UMovieSceneTrackInstance -> UObject
	// Size: 0x28 (0x78 - 0x50)
	class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x50(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCameraCutTrackInstance");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCVarTrackInstance
	// Inherited from UMovieSceneTrackInstance -> UObject
	// Size: 0x50 (0xA0 - 0x50)
	class UMovieSceneCVarTrackInstance : public UMovieSceneTrackInstance	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x50(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCVarTrackInstance");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScene3DConstraintTrack
	// Inherited from UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UMovieScene3DConstraintTrack : public UMovieSceneTrack	
	{
	public:
		TArray<UMovieSceneSection*> ConstraintSections; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DConstraintTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScene3DAttachTrack
	// Inherited from UMovieScene3DConstraintTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DAttachTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScene3DPathTrack
	// Inherited from UMovieScene3DConstraintTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DPathTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScenePropertyTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x28 (0xC0 - 0x98)
	class UMovieScenePropertyTrack : public UMovieSceneNameableTrack	
	{
	public:
		UMovieSceneSection* SectionToKey; // 0x98(0x8)
		FMovieScenePropertyBinding PropertyBinding; // 0xA0(0xC)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TArray<UMovieSceneSection*> Sections; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePropertyTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScene3DTransformTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xD0 - 0xC0)
	class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY
		UClass* BlenderSystemClass; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DTransformTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneActorReferenceTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xC8 - 0xC0)
	class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneActorReferenceTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneAudioTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UMovieSceneAudioTrack : public UMovieSceneNameableTrack	
	{
	public:
		TArray<UMovieSceneSection*> AudioSections; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneAudioTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneBoolTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xC8 - 0xC0)
	class UMovieSceneBoolTrack : public UMovieScenePropertyTrack	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneBoolTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneByteTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xC8 - 0xC0)
	class UMovieSceneByteTrack : public UMovieScenePropertyTrack	
	{
	public:
		UEnum* Enum; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneByteTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCameraCutTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x20 (0xB8 - 0x98)
	class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack	
	{
	public:
		bool bCanBlend; // 0x98(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
		TArray<UMovieSceneSection*> Sections; // 0xA0(0x10)
		bool bAutoArrangeSections; // 0xB0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCameraCutTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack	
	{
	public:
		TArray<UMovieSceneSection*> CameraShakeSections; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
	// Inherited from UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack	
	{
	public:
		TArray<UMovieSceneSection*> Sections; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCameraShakeTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack	
	{
	public:
		TArray<UMovieSceneSection*> CameraShakeSections; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCameraShakeTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCinematicShotTrack
	// Inherited from UMovieSceneSubTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCinematicShotTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneColorTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xC8 - 0xC0)
	class UMovieSceneColorTrack : public UMovieScenePropertyTrack	
	{
	public:
		bool bIsSlateColor; // 0xC0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneColorTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCustomPrimitiveDataTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x28 (0xC0 - 0x98)
	class UMovieSceneCustomPrimitiveDataTrack : public UMovieSceneNameableTrack	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x98(0x10) UNKNOWN PROPERTY
		TArray<UMovieSceneSection*> Sections; // 0xA8(0x10)
		UMovieSceneSection* SectionToKey; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCustomPrimitiveDataTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneCVarTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UMovieSceneCVarTrack : public UMovieSceneNameableTrack	
	{
	public:
		TArray<UMovieSceneSection*> Sections; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneCVarTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneDataLayerTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UMovieSceneDataLayerTrack : public UMovieSceneNameableTrack	
	{
	public:
		TArray<UMovieSceneSection*> Sections; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneDataLayerTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneDoubleTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UMovieSceneDoubleTrack : public UMovieScenePropertyTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneDoubleTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneEnumTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xC8 - 0xC0)
	class UMovieSceneEnumTrack : public UMovieScenePropertyTrack	
	{
	public:
		UEnum* Enum; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneEnumTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneEulerTransformTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneEulerTransformTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneEventTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x28 (0xC0 - 0x98)
	class UMovieSceneEventTrack : public UMovieSceneNameableTrack	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x98(0x10) UNKNOWN PROPERTY
		bool bFireEventsWhenForwards : 1; // 0xA8:0(0x1)
		bool bFireEventsWhenBackwards : 1; // 0xA8:1(0x1)
		unsigned char UnknownData01_5[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		EFireEventsAtPosition EventPosition; // 0xAC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		TArray<UMovieSceneSection*> Sections; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneEventTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneFloatTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UMovieSceneFloatTrack : public UMovieScenePropertyTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneFloatTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneFadeTrack
	// Inherited from UMovieSceneFloatTrack -> UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UMovieSceneFadeTrack : public UMovieSceneFloatTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneFadeTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneIntegerTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneIntegerTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack	
	{
	public:
		TArray<UMovieSceneSection*> Sections; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneLevelVisibilityTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneMaterialTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x18 (0xB0 - 0x98)
	class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack	
	{
	public:
		TArray<UMovieSceneSection*> Sections; // 0x98(0x10)
		UMovieSceneSection* SectionToKey; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneMaterialTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
	// Inherited from UMovieSceneMaterialTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x18 (0xC8 - 0xB0)
	class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xB0(0x10) UNKNOWN PROPERTY
		UMaterialParameterCollection* MPC; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
	// Inherited from UMovieSceneMaterialTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x20 (0xD0 - 0xB0)
	class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xB0(0x10) UNKNOWN PROPERTY
		FComponentMaterialInfo MaterialInfo; // 0xC0(0xC)
		unsigned char UnknownData01_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneComponentMaterialTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xC8 - 0xC0)
	class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack	
	{
	public:
		UClass* PropertyClass; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneObjectPropertyTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneParticleParameterTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x18 (0xB0 - 0x98)
	class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		TArray<UMovieSceneSection*> Sections; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneParticleParameterTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneParticleTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x18 (0xB0 - 0x98)
	class UMovieSceneParticleTrack : public UMovieSceneNameableTrack	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		TArray<UMovieSceneSection*> ParticleSections; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneParticleTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xD0 - 0xC0)
	class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack	
	{
	public:
		FComponentMaterialInfo MaterialInfo; // 0xC0(0xC)
		unsigned char UnknownData00_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePrimitiveMaterialTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0xA8 (0x140 - 0x98)
	class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack	
	{
	public:
		TArray<UMovieSceneSection*> AnimationSections; // 0x98(0x10)
		bool bUseLegacySectionIndexBlend; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0xB0(0x80)
		bool bBlendFirstChildOfRoot; // 0x130(0x1)
		ESwapRootBone SwapRootBone; // 0x131(0x1)
		unsigned char UnknownData01_7[0xE]; // 0x132(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
			return ret;
		}

		void SetSwapRootBone(ESwapRootBone InValue); // Flags: Final|RequiredAPI|Native|Public, Memory Exec: 0x7FF74C262B10(relative to base address)
		ESwapRootBone GetSwapRootBone(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF74C262AF8(relative to base address)
	};


	// Class MovieSceneTracks.MovieSceneSlomoTrack
	// Inherited from UMovieSceneFloatTrack -> UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSlomoTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneStringTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UMovieSceneStringTrack : public UMovieScenePropertyTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneStringTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneTransformTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UMovieSceneTransformTrack : public UMovieScenePropertyTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneTransformTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneFloatVectorTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xC8 - 0xC0)
	class UMovieSceneFloatVectorTrack : public UMovieScenePropertyTrack	
	{
	public:
		int32_t NumChannelsUsed; // 0xC0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneFloatVectorTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneDoubleVectorTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xC8 - 0xC0)
	class UMovieSceneDoubleVectorTrack : public UMovieScenePropertyTrack	
	{
	public:
		int32_t NumChannelsUsed; // 0xC0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneDoubleVectorTrack");
			return ret;
		}
	};


	// Class MovieSceneTracks.MovieSceneVisibilityTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UMovieSceneVisibilityTrack : public UMovieScenePropertyTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneVisibilityTrack");
			return ret;
		}
	};

}
