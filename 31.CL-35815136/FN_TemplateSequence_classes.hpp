#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TemplateSequence
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class TemplateSequence.TemplateSequence
	// Inherited from UMovieSceneSequence -> UMovieSceneSignedObject -> UObject
	// Size: 0x78 (0xE0 - 0x68)
	class UTemplateSequence : public UMovieSceneSequence	
	{
	public:
		UMovieScene* MovieScene; // 0x68(0x8)
		TWeakObjectPtr<UClass*> BoundActorClass; // 0x70(0x20)
		TMap<FGuid, FName> BoundActorComponents; // 0x90(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.TemplateSequence");
			return ret;
		}
	};


	// Class TemplateSequence.CameraAnimationSequence
	// Inherited from UTemplateSequence -> UMovieSceneSequence -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UCameraAnimationSequence : public UTemplateSequence	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.CameraAnimationSequence");
			return ret;
		}
	};


	// Class TemplateSequence.CameraAnimationSequenceCameraStandIn
	// Inherited from UObject
	// Size: 0x818 (0x840 - 0x28)
	class UCameraAnimationSequenceCameraStandIn : public UObject	
	{
	public:
		float FieldOfView; // 0x28(0x4)
		bool bConstrainAspectRatio : 1; // 0x2C:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		float AspectRatio; // 0x30(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x34(0xC) UNKNOWN PROPERTY
		FPostProcessSettings PostProcessSettings; // 0x40(0x6F0)
		float PostProcessBlendWeight; // 0x730(0x4)
		FCameraFilmbackSettings Filmback; // 0x734(0xC)
		FCameraLensSettings LensSettings; // 0x740(0x1C)
		unsigned char UnknownData02_6[0x4]; // 0x75C(0x4) UNKNOWN PROPERTY
		FCameraFocusSettings FocusSettings; // 0x760(0x58)
		float CurrentFocalLength; // 0x7B8(0x4)
		float CurrentAperture; // 0x7BC(0x4)
		float CurrentFocusDistance; // 0x7C0(0x4)
		unsigned char UnknownData03_7[0x7C]; // 0x7C4(0x7C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.CameraAnimationSequenceCameraStandIn");
			return ret;
		}
	};


	// Class TemplateSequence.CameraAnimationSequencePlayer
	// Inherited from UObject
	// Size: 0x300 (0x328 - 0x28)
	class UCameraAnimationSequencePlayer : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x260]; // 0x28(0x260) UNKNOWN PROPERTY
		UObject* BoundObjectOverride; // 0x288(0x8)
		UMovieSceneSequence* Sequence; // 0x290(0x8)
		FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x298(0x20)
		unsigned char UnknownData01_7[0x70]; // 0x2B8(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.CameraAnimationSequencePlayer");
			return ret;
		}
	};


	// Class TemplateSequence.CameraAnimationSpawnableSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UCameraAnimationSpawnableSystem : public UMovieSceneEntitySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.CameraAnimationSpawnableSystem");
			return ret;
		}
	};


	// Class TemplateSequence.CameraAnimationBoundObjectInstantiator
	// Inherited from UMovieSceneEntityInstantiatorSystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UCameraAnimationBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.CameraAnimationBoundObjectInstantiator");
			return ret;
		}
	};


	// Class TemplateSequence.CameraAnimationEntitySystemLinker
	// Inherited from UMovieSceneEntitySystemLinker -> UObject
	// Size: 0x0 (0x750 - 0x750)
	class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.CameraAnimationEntitySystemLinker");
			return ret;
		}
	};


	// Class TemplateSequence.CameraAnimationSequenceSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UCameraAnimationSequenceSubsystem : public UWorldSubsystem	
	{
	public:
		UMovieSceneEntitySystemLinker* Linker; // 0x30(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.CameraAnimationSequenceSubsystem");
			return ret;
		}
	};


	// Class TemplateSequence.TemplateSequenceSection
	// Inherited from UMovieSceneSubSection -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0x148 - 0x138)
	class UTemplateSequenceSection : public UMovieSceneSubSection	
	{
	public:
		TArray<FTemplateSectionPropertyScale> PropertyScales; // 0x138(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.TemplateSequenceSection");
			return ret;
		}
	};


	// Class TemplateSequence.SequenceCameraShakePattern
	// Inherited from UCameraShakePattern -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class USequenceCameraShakePattern : public UCameraShakePattern	
	{
	public:
		UCameraAnimationSequence* Sequence; // 0x28(0x8)
		float PlayRate; // 0x30(0x4)
		float Scale; // 0x34(0x4)
		float BlendInTime; // 0x38(0x4)
		float BlendOutTime; // 0x3C(0x4)
		float RandomSegmentDuration; // 0x40(0x4)
		bool bRandomSegment; // 0x44(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		UCameraAnimationSequencePlayer* Player; // 0x48(0x8)
		UCameraAnimationSequenceCameraStandIn* CameraStandIn; // 0x50(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x58(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.SequenceCameraShakePattern");
			return ret;
		}
	};


	// Class TemplateSequence.TemplateSequenceSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x70 (0xB0 - 0x40)
	class UTemplateSequenceSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x70]; // 0x40(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.TemplateSequenceSystem");
			return ret;
		}
	};


	// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x58 (0x98 - 0x40)
	class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0x40(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem");
			return ret;
		}
	};


	// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x50 (0x90 - 0x40)
	class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem");
			return ret;
		}
	};


	// Class TemplateSequence.TemplateSequenceActor
	// Inherited from AActor -> UObject
	// Size: 0x60 (0x2F0 - 0x290)
	class ATemplateSequenceActor : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x298(0x28)
		UTemplateSequencePlayer* SequencePlayer; // 0x2C0(0x8)
		FSoftObjectPath TemplateSequence; // 0x2C8(0x18)
		FTemplateSequenceBindingOverrideData BindingOverride; // 0x2E0(0xC)
		unsigned char UnknownData01_7[0x4]; // 0x2EC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.TemplateSequenceActor");
			return ret;
		}

		void SetSequence(UTemplateSequence* InSequence); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D35A484(relative to base address)
		void SetBinding(AActor* Actor, bool bOverridesDefault); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D35A2EC(relative to base address)
		UTemplateSequence LoadSequence(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D35A2C8(relative to base address)
		UTemplateSequencePlayer GetSequencePlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D35A27C(relative to base address)
		UTemplateSequence GetSequence(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D35A258(relative to base address)
	};


	// Class TemplateSequence.TemplateSequencePlayer
	// Inherited from UMovieSceneSequencePlayer -> UObject
	// Size: 0x8 (0x470 - 0x468)
	class UTemplateSequencePlayer : public UMovieSceneSequencePlayer	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x468(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.TemplateSequencePlayer");
			return ret;
		}

		UTemplateSequencePlayer CreateTemplateSequencePlayer(UObject* WorldContextObject, UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, ATemplateSequenceActor* OutActor); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D359B24(relative to base address)
	};


	// Class TemplateSequence.SequenceCameraShakeTestUtil
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.SequenceCameraShakeTestUtil");
			return ret;
		}

		bool GetPostProcessBlendCache(APlayerController* PlayerController, int32_t PPIndex, FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D35A064(relative to base address)
		FMinimalViewInfo GetLastFrameCameraCachePOV(APlayerController* PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D359F8C(relative to base address)
		FMinimalViewInfo GetCameraCachePOV(APlayerController* PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D359EB4(relative to base address)
	};


	// Class TemplateSequence.TemplateSequenceTrack
	// Inherited from UMovieSceneSubTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UTemplateSequenceTrack : public UMovieSceneSubTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TemplateSequence.TemplateSequenceTrack");
			return ret;
		}
	};

}
