#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MovieScene
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MovieScene.MovieSceneBlenderSystemSupport
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneBlenderSystemSupport : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneBlenderSystemSupport");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneBoundObjectProxy
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneBoundObjectProxy : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneBoundObjectProxy");
			return ret;
		}

		UObject BP_GetBoundObjectForSequencer(UObject* ResolvedObject); // Flags: RequiredAPI|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MovieScene.MovieSceneChannelOverrideProvider
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneChannelOverrideProvider : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneChannelOverrideProvider");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneDeterminismSource
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneDeterminismSource : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneDeterminismSource");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneMetaDataInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneMetaDataInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneMetaDataInterface");
			return ret;
		}
	};


	// Class MovieScene.MovieScenePlaybackClient
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieScenePlaybackClient : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieScenePlaybackClient");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneSequencePlayerObserver
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneSequencePlayerObserver : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSequencePlayerObserver");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneBindingEventReceiverInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneBindingEventReceiverInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneBindingEventReceiverInterface");
			return ret;
		}

		void OnObjectUnboundBySequencer(UMovieSceneSequencePlayer* Player, FMovieSceneObjectBindingID BindingID); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74C0A4C98(relative to base address)
		void OnObjectBoundBySequencer(UMovieSceneSequencePlayer* Player, FMovieSceneObjectBindingID BindingID); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74C0A4B1C(relative to base address)
	};


	// Class MovieScene.MovieSceneBindingOwnerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneBindingOwnerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneBindingOwnerInterface");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneCachedTrack
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneCachedTrack : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneCachedTrack");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneCustomBinding
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneCustomBinding : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneCustomBinding");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneEasingFunction
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneEasingFunction : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneEasingFunction");
			return ret;
		}

		float OnEvaluate(float Interp); // Flags: RequiredAPI|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MovieScene.MovieSceneEntitySystem
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UMovieSceneEntitySystem : public UObject	
	{
	public:
		UMovieSceneEntitySystemLinker* Linker; // 0x28(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneEntitySystem");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneEntityGroupingSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0xA8 (0xE8 - 0x40)
	class UMovieSceneEntityGroupingSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0xA8]; // 0x40(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneEntityGroupingSystem");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneKeyProxy
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneKeyProxy : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneKeyProxy");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneReplaceableBindingBase
	// Inherited from UMovieSceneCustomBinding -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneReplaceableBindingBase : public UMovieSceneCustomBinding	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneReplaceableBindingBase");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneSequenceTickManagerClient
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneSequenceTickManagerClient : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSequenceTickManagerClient");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneSpawnableBindingBase
	// Inherited from UMovieSceneCustomBinding -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UMovieSceneSpawnableBindingBase : public UMovieSceneCustomBinding	
	{
	public:
		ESpawnOwnership SpawnOwnership; // 0x28(0x1)
		bool bContinuouslyRespawn; // 0x29(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSpawnableBindingBase");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneSignedObject
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UMovieSceneSignedObject : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x28(0x4) UNKNOWN PROPERTY
		FGuid Signature; // 0x2C(0x10)
		unsigned char UnknownData01_7[0x1C]; // 0x3C(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSignedObject");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneChannelOverrideContainer
	// Inherited from UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneChannelOverrideContainer : public UMovieSceneSignedObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneChannelOverrideContainer");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneSectionChannelOverrideRegistry
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UMovieSceneSectionChannelOverrideRegistry : public UObject	
	{
	public:
		TMap<FName, UMovieSceneChannelOverrideContainer*> Overrides; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSectionChannelOverrideRegistry");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneTrackTemplateProducer
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneTrackTemplateProducer : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneTrackTemplateProducer");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneCompiledData
	// Inherited from UObject
	// Size: 0x3D8 (0x400 - 0x28)
	class UMovieSceneCompiledData : public UObject	
	{
	public:
		FMovieSceneEvaluationTemplate EvaluationTemplate; // 0x28(0x160)
		FMovieSceneSequenceHierarchy Hierarchy; // 0x188(0x120)
		FMovieSceneEntityComponentField EntityComponentField; // 0x2A8(0xF0)
		FMovieSceneEvaluationField TrackTemplateField; // 0x398(0x30)
		TArray<FFrameTime> DeterminismFences; // 0x3C8(0x10)
		FGuid CompiledSignature; // 0x3D8(0x10)
		FGuid CompilerVersion; // 0x3E8(0x10)
		EMovieSceneSequenceCompilerMask AccumulatedMask; // 0x3F8(0x1)
		EMovieSceneSequenceCompilerMask AllocatedMask; // 0x3F9(0x1)
		EMovieSceneSequenceFlags AccumulatedFlags; // 0x3FA(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x3FB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneCompiledData");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneCompiledDataManager
	// Inherited from UObject
	// Size: 0x208 (0x230 - 0x28)
	class UMovieSceneCompiledDataManager : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0xB0]; // 0x28(0xB0) UNKNOWN PROPERTY
		TMap<int32_t, FMovieSceneSequenceHierarchy> Hierarchies; // 0xD8(0x50)
		TMap<int32_t, FMovieSceneEvaluationTemplate> TrackTemplates; // 0x128(0x50)
		TMap<int32_t, FMovieSceneEvaluationField> TrackTemplateFields; // 0x178(0x50)
		TMap<int32_t, FMovieSceneEntityComponentField> EntityComponentFields; // 0x1C8(0x50)
		unsigned char UnknownData01_7[0x18]; // 0x218(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneCompiledDataManager");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneEntityProvider
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneEntityProvider : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneEntityProvider");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneBindingLifetimeSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneBindingLifetimeSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneBindingLifetimeSystem");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneBlenderSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x28 (0x68 - 0x40)
	class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x40(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneBlenderSystem");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneEntityInstantiatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneEntityInstantiatorSystem");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneGenericBoundObjectInstantiator");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneBoundSceneComponentInstantiator");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneValueDecomposer
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneValueDecomposer : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneValueDecomposer");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneEntitySystemLinker
	// Inherited from UObject
	// Size: 0x728 (0x750 - 0x28)
	class UMovieSceneEntitySystemLinker : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x278]; // 0x28(0x278) UNKNOWN PROPERTY
		FMovieSceneEntitySystemGraph SystemGraph; // 0x2A0(0x190)
		unsigned char UnknownData01_7[0x320]; // 0x430(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneEntitySystemLinker");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneEvalTimeSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x170 (0x1B0 - 0x40)
	class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x170]; // 0x40(0x170) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneEvalTimeSystem");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneEvaluationHookSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x50 (0x90 - 0x40)
	class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem	
	{
	public:
		TMap<FMovieSceneEvaluationInstanceKey, FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance; // 0x40(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneEvaluationHookSystem");
			return ret;
		}
	};


	// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieScenePreAnimatedStateSystemInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieScenePreAnimatedStateSystemInterface");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneCachePreAnimatedStateSystem");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x10 (0x50 - 0x40)
	class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneRestorePreAnimatedStateSystem");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneRootInstantiatorSystem
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneRootInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneRootInstantiatorSystem");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneSpawnablesSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSpawnablesSystem");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneTrackInstance
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UMovieSceneTrackInstance : public UObject	
	{
	public:
		TWeakObjectPtr<UObject*> WeakAnimatedObject; // 0x28(0x8)
		bool bIsRootTrackInstance; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		UMovieSceneEntitySystemLinker* PrivateLinker; // 0x38(0x8)
		TArray<FMovieSceneTrackInstanceInput> Inputs; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneTrackInstance");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneTrackInstanceInstantiator
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0xB0 (0xF0 - 0x40)
	class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem	
	{
	public:
		unsigned char UnknownData00_1[0xB0]; // 0x40(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneTrackInstanceInstantiator");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneTrackInstanceSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x8 (0x48 - 0x40)
	class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem	
	{
	public:
		UMovieSceneTrackInstanceInstantiator* Instantiator; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneTrackInstanceSystem");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneCustomClockSource
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneCustomClockSource : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneCustomClockSource");
			return ret;
		}

		void OnTick(float DeltaSeconds, float InPlayRate); // Flags: Native|Public, Memory Exec: 0x7FF74C0C839C(relative to base address)
		void OnStopPlaying(FQualifiedFrameTime& InStopTime); // Flags: Native|Public|HasOutParms, Memory Exec: 0x7FF74C0C8300(relative to base address)
		void OnStartPlaying(FQualifiedFrameTime& InStartTime); // Flags: Native|Public|HasOutParms, Memory Exec: 0x7FF74C0C8264(relative to base address)
		FFrameTime OnRequestCurrentTime(FQualifiedFrameTime& InCurrentTime, float InPlayRate); // Flags: Native|Public|HasOutParms, Memory Exec: 0x7FF74C0C80E4(relative to base address)
	};


	// Class MovieScene.MovieSceneEvaluationHook
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneEvaluationHook : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneEvaluationHook");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneBuiltInEasingFunction
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UMovieSceneBuiltInEasingFunction : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		EMovieSceneBuiltInEasing Type; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneBuiltInEasingFunction");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneEasingExternalCurve
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UMovieSceneEasingExternalCurve : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UCurveFloat* Curve; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneEasingExternalCurve");
			return ret;
		}
	};


	// Class MovieScene.NodeAndChannelMappings
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNodeAndChannelMappings : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.NodeAndChannelMappings");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneNodeGroup
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneNodeGroup : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneNodeGroup");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneNodeGroupCollection
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneNodeGroupCollection : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneNodeGroupCollection");
			return ret;
		}
	};


	// Class MovieScene.MovieScene
	// Inherited from UMovieSceneSignedObject -> UObject
	// Size: 0x100 (0x158 - 0x58)
	class UMovieScene : public UMovieSceneSignedObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		TArray<FMovieSceneSpawnable> Spawnables; // 0x60(0x10)
		TArray<FMovieScenePossessable> Possessables; // 0x70(0x10)
		TArray<FMovieSceneBinding> ObjectBindings; // 0x80(0x10)
		TMap<FName, FMovieSceneObjectBindingIDs> BindingGroups; // 0x90(0x50)
		TArray<UMovieSceneTrack*> Tracks; // 0xE0(0x10)
		UMovieSceneTrack* CameraCutTrack; // 0xF0(0x8)
		FMovieSceneFrameRange SelectionRange; // 0xF8(0x10)
		FMovieSceneFrameRange PlaybackRange; // 0x108(0x10)
		FFrameRate TickResolution; // 0x118(0x8)
		FFrameRate DisplayRate; // 0x120(0x8)
		EMovieSceneEvaluationType EvaluationType; // 0x128(0x1)
		EUpdateClockSource ClockSource; // 0x129(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x12A(0x6) UNKNOWN PROPERTY
		FSoftObjectPath CustomClockSourcePath; // 0x130(0x18)
		TArray<FMovieSceneMarkedFrame> MarkedFrames; // 0x148(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieScene");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneBindingOverrides
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UMovieSceneBindingOverrides : public UObject	
	{
	public:
		TArray<FMovieSceneBindingOverrideData> BindingData; // 0x28(0x10)
		unsigned char UnknownData00_7[0x58]; // 0x38(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneBindingOverrides");
			return ret;
		}
	};


	// Class MovieScene.BuiltInDynamicBindingResolverLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBuiltInDynamicBindingResolverLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.BuiltInDynamicBindingResolverLibrary");
			return ret;
		}

		FMovieSceneDynamicBindingResolveResult ResolveToPlayerPawn(UObject* WorldContextObject, int32_t PlayerControllerIndex); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C0E0A60(relative to base address)
	};


	// Class MovieScene.MovieSceneFolder
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UMovieSceneFolder : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x28(0x4) UNKNOWN PROPERTY
		FName FolderName; // 0x2C(0x4)
		TArray<UMovieSceneFolder*> ChildFolders; // 0x30(0x10)
		TArray<UMovieSceneTrack*> ChildTracks; // 0x40(0x10)
		TArray<FString> ChildObjectBindingStrings; // 0x50(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneFolder");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneMetaData
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UMovieSceneMetaData : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FString Author; // 0x30(0x10)
		FDateTime Created; // 0x40(0x8)
		FString Notes; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneMetaData");
			return ret;
		}

		void SetNotes(FString InNotes); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E1334(relative to base address)
		void SetCreated(FDateTime InCreated); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C0E0E74(relative to base address)
		void SetAuthor(FString InAuthor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E0BF4(relative to base address)
		FString GetNotes(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFCD8(relative to base address)
		FDateTime GetCreated(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFB98(relative to base address)
		FString GetAuthor(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DF988(relative to base address)
	};


	// Class MovieScene.MovieSceneTrack
	// Inherited from UMovieSceneSignedObject -> UObject
	// Size: 0x40 (0x98 - 0x58)
	class UMovieSceneTrack : public UMovieSceneSignedObject	
	{
	public:
		FMovieSceneTrackEvalOptions EvalOptions; // 0x58(0x4)
		unsigned char UnknownData00_6[0x1]; // 0x5C(0x1) UNKNOWN PROPERTY
		bool bIsEvalDisabled; // 0x5D(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x5E(0x2) UNKNOWN PROPERTY
		TArray<int32_t> RowsDisabled; // 0x60(0x10)
		unsigned char UnknownData02_6[0x4]; // 0x70(0x4) UNKNOWN PROPERTY
		FGuid EvaluationFieldGuid; // 0x74(0x10)
		unsigned char UnknownData03_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		FMovieSceneTrackEvaluationField EvaluationField; // 0x88(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneTrack");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneNameableTrack
	// Inherited from UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0x98 - 0x98)
	class UMovieSceneNameableTrack : public UMovieSceneTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneNameableTrack");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneSection
	// Inherited from UMovieSceneSignedObject -> UObject
	// Size: 0x98 (0xF0 - 0x58)
	class UMovieSceneSection : public UMovieSceneSignedObject	
	{
	public:
		FMovieSceneSectionEvalOptions EvalOptions; // 0x58(0x2)
		unsigned char UnknownData00_6[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY
		FMovieSceneEasingSettings Easing; // 0x60(0x38)
		FMovieSceneFrameRange SectionRange; // 0x98(0x10)
		FFrameNumber PreRollFrames; // 0xA8(0x4)
		FFrameNumber PostRollFrames; // 0xAC(0x4)
		int32_t RowIndex; // 0xB0(0x4)
		int32_t OverlapPriority; // 0xB4(0x4)
		bool bIsActive : 1; // 0xB8:0(0x1)
		bool bIsLocked : 1; // 0xB8:1(0x1)
		unsigned char UnknownData01_5[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		float StartTime; // 0xBC(0x4)
		float EndTime; // 0xC0(0x4)
		float PrerollTime; // 0xC4(0x4)
		float PostrollTime; // 0xC8(0x4)
		bool bIsInfinite : 1; // 0xCC:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0xCD(0x3) UNKNOWN PROPERTY
		bool bSupportsInfiniteRange; // 0xD0(0x1)
		FOptionalMovieSceneBlendType BlendType; // 0xD1(0x2)
		unsigned char UnknownData03_7[0x1D]; // 0xD3(0x1D) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSection");
			return ret;
		}

		void SetRowIndex(int32_t NewRowIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E173C(relative to base address)
		void SetPreRollFrames(int32_t InPreRollFrames); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E16B4(relative to base address)
		void SetPostRollFrames(int32_t InPostRollFrames); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E162C(relative to base address)
		void SetOverlapPriority(int32_t NewPriority); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E13D0(relative to base address)
		void SetIsLocked(bool bInIsLocked); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E12A4(relative to base address)
		void SetIsActive(bool bInIsActive); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E1224(relative to base address)
		void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E0D78(relative to base address)
		void SetColorTint(FColor& InColorTint); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C0E0D14(relative to base address)
		void SetBlendType(EMovieSceneBlendType InBlendType); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E0C90(relative to base address)
		bool IsLocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFFD4(relative to base address)
		bool IsActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFFB8(relative to base address)
		int32_t GetRowIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFE90(relative to base address)
		int32_t GetPreRollFrames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFE78(relative to base address)
		int32_t GetPostRollFrames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFE60(relative to base address)
		int32_t GetOverlapPriority(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFE30(relative to base address)
		EMovieSceneCompletionMode GetCompletionMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFB6C(relative to base address)
		FColor GetColorTint(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFB50(relative to base address)
		FOptionalMovieSceneBlendType GetBlendType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DF9D0(relative to base address)
	};


	// Class MovieScene.MovieSceneSequence
	// Inherited from UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0x68 - 0x58)
	class UMovieSceneSequence : public UMovieSceneSignedObject	
	{
	public:
		UMovieSceneCompiledData* CompiledData; // 0x58(0x8)
		EMovieSceneCompletionMode DefaultCompletionMode; // 0x60(0x1)
		bool bParentContextsAreSignificant; // 0x61(0x1)
		bool bPlayableDirectly; // 0x62(0x1)
		EMovieSceneSequenceFlags SequenceFlags; // 0x63(0x1)
		unsigned char UnknownData00_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSequence");
			return ret;
		}

		FMovieSceneTimecodeSource GetEarliestTimecodeSource(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFC3C(relative to base address)
		TArray FindBindingsByTag(FName InBindingName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DF8F4(relative to base address)
		FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DF854(relative to base address)
	};


	// Class MovieScene.MovieSceneSequencePlayer
	// Inherited from UObject
	// Size: 0x440 (0x468 - 0x28)
	class UMovieSceneSequencePlayer : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x1F0]; // 0x28(0x1F0) UNKNOWN PROPERTY
		TScriptInterface<Class> Observer; // 0x218(0x10)
		FMulticastInlineDelegate OnPlay; // 0x228(0x10)
		FMulticastInlineDelegate OnPlayReverse; // 0x238(0x10)
		FMulticastInlineDelegate OnStop; // 0x248(0x10)
		FMulticastInlineDelegate OnPause; // 0x258(0x10)
		FMulticastInlineDelegate OnFinished; // 0x268(0x10)
		unsigned char UnknownData01_6[0x10]; // 0x278(0x10) UNKNOWN PROPERTY
		TEnumAsByte<EMovieScenePlayerStatus> Status; // 0x288(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x289(0x3) UNKNOWN PROPERTY
		bool bReversePlayback : 1; // 0x28C:0(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x28D(0x3) UNKNOWN PROPERTY
		UMovieSceneSequence* Sequence; // 0x290(0x8)
		FFrameNumber StartTime; // 0x298(0x4)
		int32_t DurationFrames; // 0x29C(0x4)
		float DurationSubFrames; // 0x2A0(0x4)
		int32_t CurrentNumLoops; // 0x2A4(0x4)
		int32_t SerialNumber; // 0x2A8(0x4)
		FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x2AC(0x28)
		unsigned char UnknownData04_6[0x4]; // 0x2D4(0x4) UNKNOWN PROPERTY
		FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x2D8(0x20)
		unsigned char UnknownData05_6[0x8C]; // 0x2F8(0x8C) UNKNOWN PROPERTY
		FMovieSceneSequenceReplProperties NetSyncProps; // 0x384(0x14)
		TScriptInterface<Class> PlaybackClient; // 0x398(0x10)
		UMovieSceneSequenceTickManager* TickManager; // 0x3A8(0x8)
		unsigned char UnknownData06_7[0xB8]; // 0x3B0(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSequencePlayer");
			return ret;
		}

		void StopAtCurrentTime(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E191C(relative to base address)
		void Stop(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E1908(relative to base address)
		void SetWeight(double InWeight); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E187C(relative to base address)
		void SetTimeRange(float StartTime, float duration); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E17B8(relative to base address)
		void SetPlayRate(float PlayRate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E144C(relative to base address)
		void SetPlaybackPosition(FMovieSceneSequencePlaybackParams PlaybackParams); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E14CC(relative to base address)
		void SetFrameRate(FFrameRate FrameRate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E1108(relative to base address)
		void SetFrameRange(int32_t StartFrame, int32_t duration, float SubFrames); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E1010(relative to base address)
		void SetDisableCameraCuts(bool bInDisableCameraCuts); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E0F80(relative to base address)
		void SetCompletionModeOverride(EMovieSceneCompletionModeOverride CompletionModeOverride); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E0DF4(relative to base address)
		void Scrub(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E0BE0(relative to base address)
		void RPC_OnStopEvent(FFrameTime StoppedTime, int32_t NewSerialNumber); // Flags: Final|RequiredAPI|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF74C0E0710(relative to base address)
		void RPC_OnFinishPlaybackEvent(FFrameTime StoppedTime, int32_t NewSerialNumber); // Flags: Final|RequiredAPI|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF74C0E0534(relative to base address)
		void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime, int32_t NewSerialNumber); // Flags: Final|RequiredAPI|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF74C0E0330(relative to base address)
		void RestoreState(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E0B94(relative to base address)
		void RequestInvalidateBinding(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E0924(relative to base address)
		void RemoveWeight(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E08EC(relative to base address)
		void PlayTo(FMovieSceneSequencePlaybackParams PlaybackParams, FMovieSceneSequencePlayToParams PlayToParams); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E0100(relative to base address)
		void PlayReverse(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E00EC(relative to base address)
		void PlayLooping(int32_t NumLoops); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E006C(relative to base address)
		void Play(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E0058(relative to base address)
		void Pause(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E0044(relative to base address)
		bool IsReversed(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0E0028(relative to base address)
		bool IsPlaying(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0E000C(relative to base address)
		bool IsPaused(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFFF0(relative to base address)
		void GoToEndAndStop(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0DFFA4(relative to base address)
		FQualifiedFrameTime GetStartTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFF68(relative to base address)
		FString GetSequenceName(bool bAddClientInfo); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFEC0(relative to base address)
		UMovieSceneSequence GetSequence(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFEA8(relative to base address)
		float GetPlayRate(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFE48(relative to base address)
		TArray GetObjectBindings(UObject* InObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0DFD20(relative to base address)
		FFrameRate GetFrameRate(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFCC0(relative to base address)
		int32_t GetFrameDuration(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFCA8(relative to base address)
		FQualifiedFrameTime GetEndTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFC7C(relative to base address)
		FQualifiedFrameTime GetDuration(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFBF0(relative to base address)
		bool GetDisableCameraCuts(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0DFBD4(relative to base address)
		FQualifiedFrameTime GetCurrentTime(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFBB0(relative to base address)
		EMovieSceneCompletionModeOverride GetCompletionModeOverride(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFB80(relative to base address)
		TArray GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0DF9EC(relative to base address)
		void ChangePlaybackDirection(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0DF840(relative to base address)
	};


	// Class MovieScene.MovieSceneSequenceTickManager
	// Inherited from UObject
	// Size: 0x70 (0x98 - 0x28)
	class UMovieSceneSequenceTickManager : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x70]; // 0x28(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSequenceTickManager");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneBindingLifetimeSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xF8 - 0xF0)
	class UMovieSceneBindingLifetimeSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneBindingLifetimeSection");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneBoolSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x110 (0x200 - 0xF0)
	class UMovieSceneBoolSection : public UMovieSceneSection	
	{
	public:
		bool DefaultValue; // 0xF0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
		FMovieSceneBoolChannel BoolCurve; // 0xF8(0x108)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneBoolSection");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneHookSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x18 (0x108 - 0xF0)
	class UMovieSceneHookSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xF0(0x10) UNKNOWN PROPERTY
		bool bRequiresRangedHook : 1; // 0x100:0(0x1)
		bool bRequiresTriggerHooks : 1; // 0x100:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x101(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneHookSection");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneSpawnSection
	// Inherited from UMovieSceneBoolSection -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0x208 - 0x200)
	class UMovieSceneSpawnSection : public UMovieSceneBoolSection	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x200(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSpawnSection");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneSubSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x48 (0x138 - 0xF0)
	class UMovieSceneSubSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneSectionParameters Parameters; // 0xF8(0x28)
		float StartOffset; // 0x120(0x4)
		float timescale; // 0x124(0x4)
		float PrerollTime; // 0x128(0x4)
		char NetworkMask; // 0x12C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x12D(0x3) UNKNOWN PROPERTY
		UMovieSceneSequence* SubSequence; // 0x130(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSubSection");
			return ret;
		}

		void SetSequence(UMovieSceneSequence* Sequence); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0E7C60(relative to base address)
		UMovieSceneSequence GetSequence(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0E7C48(relative to base address)
	};


	// Class MovieScene.TestMovieSceneTrack
	// Inherited from UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x20 (0xB8 - 0x98)
	class UTestMovieSceneTrack : public UMovieSceneTrack	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		bool bHighPassFilter; // 0xA0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		TArray<UMovieSceneSection*> SectionArray; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.TestMovieSceneTrack");
			return ret;
		}
	};


	// Class MovieScene.TestMovieSceneSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xF0 - 0xF0)
	class UTestMovieSceneSection : public UMovieSceneSection	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.TestMovieSceneSection");
			return ret;
		}
	};


	// Class MovieScene.TestMovieSceneSequence
	// Inherited from UMovieSceneSequence -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0x70 - 0x68)
	class UTestMovieSceneSequence : public UMovieSceneSequence	
	{
	public:
		UMovieScene* MovieScene; // 0x68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.TestMovieSceneSequence");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneSubTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UMovieSceneSubTrack : public UMovieSceneNameableTrack	
	{
	public:
		TArray<UMovieSceneSection*> Sections; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSubTrack");
			return ret;
		}
	};


	// Class MovieScene.TestMovieSceneSubTrack
	// Inherited from UMovieSceneSubTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UTestMovieSceneSubTrack : public UMovieSceneSubTrack	
	{
	public:
		TArray<UMovieSceneSection*> SectionArray; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.TestMovieSceneSubTrack");
			return ret;
		}
	};


	// Class MovieScene.TestMovieSceneSubSection
	// Inherited from UMovieSceneSubSection -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UTestMovieSceneSubSection : public UMovieSceneSubSection	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.TestMovieSceneSubSection");
			return ret;
		}
	};


	// Class MovieScene.TestMovieSceneEvalHookTrack
	// Inherited from UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack	
	{
	public:
		TArray<UMovieSceneSection*> SectionArray; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.TestMovieSceneEvalHookTrack");
			return ret;
		}
	};


	// Class MovieScene.TestMovieSceneEvalHookSection
	// Inherited from UMovieSceneHookSection -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x18 (0x120 - 0x108)
	class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x108(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.TestMovieSceneEvalHookSection");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneBindingLifetimeTrack
	// Inherited from UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x18 (0xB0 - 0x98)
	class UMovieSceneBindingLifetimeTrack : public UMovieSceneTrack	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		TArray<UMovieSceneSection*> Sections; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneBindingLifetimeTrack");
			return ret;
		}
	};


	// Class MovieScene.MovieSceneSpawnTrack
	// Inherited from UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x20 (0xB8 - 0x98)
	class UMovieSceneSpawnTrack : public UMovieSceneTrack	
	{
	public:
		TArray<UMovieSceneSection*> Sections; // 0x98(0x10)
		FGuid ObjectGuid; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSpawnTrack");
			return ret;
		}
	};

}
