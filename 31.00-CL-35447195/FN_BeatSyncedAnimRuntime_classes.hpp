#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BeatSyncedAnimRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class BeatSyncedAnimRuntime.BeatSyncedAnimLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBeatSyncedAnimLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeatSyncedAnimRuntime.BeatSyncedAnimLibrary");
			return ret;
		}

		UFortItemDefinition GetLastEmoteExecuted(AController Controller); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C154F8
		float CalculateMontagePlayRate(UMusicClockComponent MusicClock, UAnimMontage Montage, float MontageBeatLength); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C15418
		FFMontageBeatSyncInfo CalculateMontageBeatSyncInfo(UMusicClockComponent MusicClock, float BeatOffset, UAnimMontage Montage, float LengthInBeats, float MsOffset); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C15338
	};


	// Class BeatSyncedAnimRuntime.FMBeatTimingUtils
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFMBeatTimingUtils : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeatSyncedAnimRuntime.FMBeatTimingUtils");
			return ret;
		}

		float GetCurrentSongTime_Unsafe(UMusicClockComponent InMusicClock, bool bRounded); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C15B18
		float GetCurrentSongTime(UMusicClockComponent InMusicClock, bool bRounded); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C15A38
		float GetCurrentBeatForBPM(float InBPM, UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C15958
		FBeatAndTime GetCurrentBeatAndTime(UMusicClockComponent MusicClock, UObject WorldContext, bool bAlwaysAllowPreviewBPM, float PreviewBPM, bool bForceUnsafe); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C15878
		float GetCurrentBeat_Unsafe(UMusicClockComponent InMusicClock, bool bRounded); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C15798
		float GetCurrentBeat(UMusicClockComponent InMusicClock, bool bRounded); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C156B8
		float GetBeatsPerMeasure(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C155D8
	};


	// Class BeatSyncedAnimRuntime.MontageBeatSyncComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class UMontageBeatSyncComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData05_3[0x4]; // 0xA0(0x4) UNKNOWN PROPERTY
		float UsingMaxPlayRateBeforeHalf; // 0xA4(0x4)
		float UsingMinPlayRateBeforeDoubling; // 0xA8(0x4)
		bool bUpdateMusicClockOnTick; // 0xAC(0x1)
		unsigned char UnknownData06_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		float MontageLengthInBeats; // 0xB0(0x4)
		float MontageOffsetMs; // 0xB4(0x4)
		TWeakObjectPtr WeakMusicClockPtr; // 0xB8(0x8)
		EUserEmoteBeatSyncingPermission UserEmoteBeatSyncingPermission; // 0xC0(0x1)
		bool bIsMusicPlaying; // 0xC1(0x1)
		bool bHaveTimingInfo; // 0xC2(0x1)
		unsigned char UnknownData07_6[0x1]; // 0xC3(0x1) UNKNOWN PROPERTY
		int32_t LastKnownMontageInstanceId; // 0xC4(0x4)
		AFortPlayerPawn OwnerPlayerPawn; // 0xC8(0x8)
		USkeletalMeshComponent OwnerMeshComponent; // 0xD0(0x8)
		TArray YoungerSiblings; // 0xD8(0x10)
		TArray OlderSiblings; // 0xE8(0x10)
		UPreciseBeatSyncedAnimMetaData ActiveTimingInfo; // 0xF8(0x8)
		EUserEmoteBeatSyncingPermission UsingUserEmoteBeatSyncingPermission; // 0x100(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x101(0x3) UNKNOWN PROPERTY
		int32_t LastFrameMontageInstanceId; // 0x104(0x4)
		float LastSongBeat; // 0x108(0x4)
		float SongBeatOffset; // 0x10C(0x4)
		unsigned char UnknownData09_7[0x10]; // 0x110(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent");
			return ret;
		}

		void SetMusicClockReference(UMusicClockComponent MusicClock); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C16218
		void ServerRPC_ReceiveNewAllowingBeatSyncingTheirEmotes(bool bNewState); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF414C16138
		UPreciseBeatSyncedAnimMetaData LookupMontageTimingInfo_BP(UAnimMontage Montage, AFortPlayerPawn PlayerPawn); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414C16058
		bool IsMusicPlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C15F78
		USkeletalMeshComponent GetOwnerSkeletalMeshComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C15E98
		AFortPlayerPawn GetOwnerFortPlayerPawn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C15DB8
		void EndedPlayingMusic(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414C15CD8
		void BeganPlayingMusic(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414C15BF8
	};


	// Class BeatSyncedAnimRuntime.SparksAnimLoggingComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class USparksAnimLoggingComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeatSyncedAnimRuntime.SparksAnimLoggingComponent");
			return ret;
		}

		FString GetCurrentFullBodyAnimName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C162F8
	};


	// Class BeatSyncedAnimRuntime.AnimNotify_BeatMarker
	// Inherited from UAnimNotify -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UAnimNotify_BeatMarker : public UAnimNotify	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeatSyncedAnimRuntime.AnimNotify_BeatMarker");
			return ret;
		}
	};

}
