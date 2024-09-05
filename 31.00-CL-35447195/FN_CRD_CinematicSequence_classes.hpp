#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CRD_CinematicSequence
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CRD_CinematicSequence.CinematicSequenceDeviceBase
	// Inherited from ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0xE0 (0xCB8 - 0xBD8)
	class ACinematicSequenceDeviceBase : public ABuildingProp	
	{
	public:
		unsigned char UnknownData05_3[0x50]; // 0xBD8(0x50) UNKNOWN PROPERTY
		FSoftClassPath AISpawnerDeviceClassPath; // 0xC28(0x18)
		ULevelSequence Sequence; // 0xC40(0x8)
		ALevelSequenceActor LevelSequenceActor; // 0xC48(0x8)
		AFortPlayerController InstigatingController; // 0xC50(0x8)
		char InstigatingTeam; // 0xC58(0x1)
		unsigned char UnknownData06_6[0x3]; // 0xC59(0x3) UNKNOWN PROPERTY
		bool bLoopPlayback : 1; // 0xC5C:0(0x1)
		bool bAutoPlay : 1; // 0xC5C:1(0x1)
		unsigned char UnknownData07_5[0x3]; // 0xC5D(0x3) UNKNOWN PROPERTY
		ECinematicSequenceEnabledOnPhase EnabledOnPhase; // 0xC60(0x1)
		ECinematicSequenceVisibility Visibility; // 0xC61(0x1)
		bool bLevelSequenceActorAlwaysRelevant; // 0xC62(0x1)
		unsigned char UnknownData08_6[0x1]; // 0xC63(0x1) UNKNOWN PROPERTY
		float PlayRate; // 0xC64(0x4)
		EMovieSceneCompletionModeOverride FinishCompletionStateOverride; // 0xC68(0x1)
		unsigned char UnknownData09_7[0x4F]; // 0xC69(0x4F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_CinematicSequence.CinematicSequenceDeviceBase");
			return ret;
		}

		void Stop(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D64FF8
		void SetSequence(ULevelSequence Sequence); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D64F18
		void SetPlayRate(float PlayRate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D64E38
		void SetPlaybackTime(float Time); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D64D58
		void SetPlaybackFrame(int32_t Frame); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D64C78
		void PlayReverse(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D64B98
		void Play(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D64AB8
		void Pause(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D649D8
		void OnSequenceFinished(); // Flags: Final|Native|Protected 0x7FF414D648F8
		void HandleSequencePlayerCreated(ULevelSequencePlayer Player); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D64818
		void GoToEndAndStop(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D64738
		UMovieSceneSequencePlayer GetSequencePlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D64658
		float GetPlayRate(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D64578
		float GetPlaybackTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D64498
		int32_t GetPlaybackFrame(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D643B8
	};

}
