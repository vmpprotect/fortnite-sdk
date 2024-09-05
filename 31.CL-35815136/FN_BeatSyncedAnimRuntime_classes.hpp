#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BeatSyncedAnimRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		UFortItemDefinition GetLastEmoteExecuted(AController* Controller); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510AB234(relative to base address)
		float CalculateMontagePlayRate(UMusicClockComponent* MusicClock, UAnimMontage* Montage, float MontageBeatLength); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510AAAEC(relative to base address)
		FFMontageBeatSyncInfo CalculateMontageBeatSyncInfo(UMusicClockComponent* MusicClock, float BeatOffset, UAnimMontage* Montage, float LengthInBeats, float MsOffset); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510AA734(relative to base address)
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

		float GetCurrentSongTime_Unsafe(UMusicClockComponent* InMusicClock, bool bRounded); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510AB16C(relative to base address)
		float GetCurrentSongTime(UMusicClockComponent* InMusicClock, bool bRounded); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510AB0A4(relative to base address)
		float GetCurrentBeatForBPM(float InBPM, UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510AAED4(relative to base address)
		FBeatAndTime GetCurrentBeatAndTime(UMusicClockComponent* MusicClock, UObject* WorldContext, bool bAlwaysAllowPreviewBPM, float PreviewBPM, bool bForceUnsafe); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510AAD3C(relative to base address)
		float GetCurrentBeat_Unsafe(UMusicClockComponent* InMusicClock, bool bRounded); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510AAF9C(relative to base address)
		float GetCurrentBeat(UMusicClockComponent* InMusicClock, bool bRounded); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510AAC74(relative to base address)
		float GetBeatsPerMeasure(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510AAC5C(relative to base address)
	};


	// Class BeatSyncedAnimRuntime.MontageBeatSyncComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class UMontageBeatSyncComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0xA0(0x4) UNKNOWN PROPERTY
		float UsingMaxPlayRateBeforeHalf; // 0xA4(0x4)
		float UsingMinPlayRateBeforeDoubling; // 0xA8(0x4)
		bool bUpdateMusicClockOnTick; // 0xAC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		float MontageLengthInBeats; // 0xB0(0x4)
		float MontageOffsetMs; // 0xB4(0x4)
		TWeakObjectPtr<UMusicClockComponent*> WeakMusicClockPtr; // 0xB8(0x8)
		EUserEmoteBeatSyncingPermission UserEmoteBeatSyncingPermission; // 0xC0(0x1)
		bool bIsMusicPlaying; // 0xC1(0x1)
		bool bHaveTimingInfo; // 0xC2(0x1)
		unsigned char UnknownData02_6[0x1]; // 0xC3(0x1) UNKNOWN PROPERTY
		int32_t LastKnownMontageInstanceId; // 0xC4(0x4)
		AFortPlayerPawn* OwnerPlayerPawn; // 0xC8(0x8)
		USkeletalMeshComponent* OwnerMeshComponent; // 0xD0(0x8)
		TArray<TWeakObjectPtr> YoungerSiblings; // 0xD8(0x10)
		TArray<TWeakObjectPtr> OlderSiblings; // 0xE8(0x10)
		UPreciseBeatSyncedAnimMetaData* ActiveTimingInfo; // 0xF8(0x8)
		EUserEmoteBeatSyncingPermission UsingUserEmoteBeatSyncingPermission; // 0x100(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x101(0x3) UNKNOWN PROPERTY
		int32_t LastFrameMontageInstanceId; // 0x104(0x4)
		float LastSongBeat; // 0x108(0x4)
		float SongBeatOffset; // 0x10C(0x4)
		unsigned char UnknownData04_7[0x10]; // 0x110(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent");
			return ret;
		}

		void SetMusicClockReference(UMusicClockComponent* MusicClock); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510AB3B8(relative to base address)
		void ServerRPC_ReceiveNewAllowingBeatSyncingTheirEmotes(bool bNewState); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF75077F254(relative to base address)
		UPreciseBeatSyncedAnimMetaData LookupMontageTimingInfo_BP(UAnimMontage* Montage, AFortPlayerPawn* PlayerPawn); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7510AB2EC(relative to base address)
		bool IsMusicPlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510AB2D4(relative to base address)
		USkeletalMeshComponent GetOwnerSkeletalMeshComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74EFBA6E4(relative to base address)
		AFortPlayerPawn GetOwnerFortPlayerPawn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74ED765BC(relative to base address)
		void EndedPlayingMusic(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BeganPlayingMusic(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class BeatSyncedAnimRuntime.SparksAnimLoggingComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class USparksAnimLoggingComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeatSyncedAnimRuntime.SparksAnimLoggingComponent");
			return ret;
		}

		FString GetCurrentFullBodyAnimName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510AB064(relative to base address)
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
