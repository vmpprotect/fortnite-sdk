#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRD_CinematicSequence
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CRD_CinematicSequence.CinematicSequenceDeviceBase
	// Inherited from ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0xE0 (0xCB8 - 0xBD8)
	class ACinematicSequenceDeviceBase : public ABuildingProp	
	{
	public:
		unsigned char UnknownData00_3[0x50]; // 0xBD8(0x50) UNKNOWN PROPERTY
		FSoftClassPath AISpawnerDeviceClassPath; // 0xC28(0x18)
		ULevelSequence* Sequence; // 0xC40(0x8)
		ALevelSequenceActor* LevelSequenceActor; // 0xC48(0x8)
		AFortPlayerController* InstigatingController; // 0xC50(0x8)
		char InstigatingTeam; // 0xC58(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xC59(0x3) UNKNOWN PROPERTY
		bool bLoopPlayback : 1; // 0xC5C:0(0x1)
		bool bAutoPlay : 1; // 0xC5C:1(0x1)
		unsigned char UnknownData02_5[0x3]; // 0xC5D(0x3) UNKNOWN PROPERTY
		ECinematicSequenceEnabledOnPhase EnabledOnPhase; // 0xC60(0x1)
		ECinematicSequenceVisibility Visibility; // 0xC61(0x1)
		bool bLevelSequenceActorAlwaysRelevant; // 0xC62(0x1)
		unsigned char UnknownData03_6[0x1]; // 0xC63(0x1) UNKNOWN PROPERTY
		float PlayRate; // 0xC64(0x4)
		EMovieSceneCompletionModeOverride FinishCompletionStateOverride; // 0xC68(0x1)
		unsigned char UnknownData04_7[0x4F]; // 0xC69(0x4F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_CinematicSequence.CinematicSequenceDeviceBase");
			return ret;
		}

		void Stop(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515F82D0(relative to base address)
		void SetSequence(ULevelSequence* Sequence); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515F8250(relative to base address)
		void SetPlayRate(float PlayRate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515F80D0(relative to base address)
		void SetPlaybackTime(float Time); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515F81D0(relative to base address)
		void SetPlaybackFrame(int32_t Frame); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515F8150(relative to base address)
		void PlayReverse(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515F80BC(relative to base address)
		void Play(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515F80A8(relative to base address)
		void Pause(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515F8094(relative to base address)
		void OnSequenceFinished(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515F8080(relative to base address)
		void HandleSequencePlayerCreated(ULevelSequencePlayer* Player); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74E90ED84(relative to base address)
		void GoToEndAndStop(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515F806C(relative to base address)
		UMovieSceneSequencePlayer GetSequencePlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515F804C(relative to base address)
		float GetPlayRate(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515F7FD8(relative to base address)
		float GetPlaybackTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515F8024(relative to base address)
		int32_t GetPlaybackFrame(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515F8000(relative to base address)
	};

}
