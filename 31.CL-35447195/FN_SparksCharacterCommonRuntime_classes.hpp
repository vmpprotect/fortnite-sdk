#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksCharacterCommonRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SparksCharacterCommonRuntime.SparksAnimationSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x88 (0xB8 - 0x30)
	class USparksAnimationSubsystem : public UWorldSubsystem	
	{
	public:
		TWeakObjectPtr Anims_Default; // 0x30(0x20)
		TWeakObjectPtr Anims_Light; // 0x50(0x20)
		unsigned char UnknownData02_6[0x28]; // 0x70(0x28) UNKNOWN PROPERTY
		int32_t NumAnimationRefs; // 0x98(0x4)
		unsigned char UnknownData03_7[0x1C]; // 0x9C(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCharacterCommonRuntime.SparksAnimationSubsystem");
			return ret;
		}

		USparksInstrumentAnimations GetLoadedSparksAnimations(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C1D9F8
	};


	// Class SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance
	// Inherited from UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x88 (0x540 - 0x4B8)
	class USparksBaseLayerAnimInstance : public UFortBaseLayerAnimInstance	
	{
	public:
		float MinTempo; // 0x4B8(0x4)
		float MaxTempo; // 0x4BC(0x4)
		TArray BPMBucketMaxTempos; // 0x4C0(0x10)
		int32_t BPMBucketCooldownBeats; // 0x4D0(0x4)
		float PreviewBPM; // 0x4D4(0x4)
		USparksInstrumentAnimPlayerStateComponent InstrumentPSC; // 0x4D8(0x8)
		ASparksMusicPlayspace SparksPlayspace; // 0x4E0(0x8)
		UMusicClockComponent MusicClock; // 0x4E8(0x8)
		FBeatAndTime SongBeatAndTime; // 0x4F0(0xC)
		FBeatAndTime AnimBeatAndTime; // 0x4FC(0xC)
		float SongBPM; // 0x508(0x4)
		int32_t BPMBucketCooldownRemaining; // 0x50C(0x4)
		int32_t BPMBucket; // 0x510(0x4)
		ESparksInstrumentType Instrument; // 0x514(0x1)
		bool bCanPlayMidiAnimations; // 0x515(0x1)
		bool bMusicBeatIsActive; // 0x516(0x1)
		bool bIsRoamingOrNotAnimatable; // 0x517(0x1)
		FName InstrumentSlotTag; // 0x518(0x4)
		FBeatAndTime PrevSongBeatAndTime; // 0x51C(0xC)
		FBeatAndTime PrevAnimBeatAndTime; // 0x528(0xC)
		float TempoHalfOrDoubleFactor; // 0x534(0x4)
		ESparksAnimatableState AnimatableState; // 0x538(0x1)
		bool bIsRoaming; // 0x539(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x53A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance");
			return ret;
		}

		void SetIsRoaming(bool bInIsRoaming); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C1DD78
		bool GetIsRoaming(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1DC98
		ESparksAnimatableState GetAnimatableState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1DBB8
		void BP_OnSetInstrumentPSC(USparksInstrumentAnimPlayerStateComponent OldInstrumentPSC, USparksInstrumentAnimPlayerStateComponent NewInstrumentPSC); // Flags: Event|Public|BlueprintEvent 0x7FF414C1DAD8
	};


	// Class SparksCharacterCommonRuntime.SparksInstrumentAnimInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x68 (0x420 - 0x3B8)
	class USparksInstrumentAnimInstance : public UAnimInstance	
	{
	public:
		USparksInstrumentAnimPlayerStateComponent InstrumentPSC; // 0x3B8(0x8)
		ASparksMusicPlayspace SparksMusicPlayspace; // 0x3C0(0x8)
		UMusicClockComponent MusicClock; // 0x3C8(0x8)
		TScriptInterface MidiEventDriver; // 0x3D0(0x10)
		TWeakObjectPtr LipSyncAsset; // 0x3E0(0x20)
		ESparksInstrumentType Instrument; // 0x400(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x401(0x3) UNKNOWN PROPERTY
		float PreviewBPM; // 0x404(0x4)
		FBeatAndTime SongBeatAndTime; // 0x408(0xC)
		FBeatAndTime AnimBeatAndTime; // 0x414(0xC)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCharacterCommonRuntime.SparksInstrumentAnimInstance");
			return ret;
		}

		void BP_OnSetInstrumentPSC(USparksInstrumentAnimPlayerStateComponent OldInstrumentPSC, USparksInstrumentAnimPlayerStateComponent NewInstrumentPSC); // Flags: Event|Public|BlueprintEvent 0x7FF414C1E0F8
		void BP_OnMidiEventDriverChanged(TScriptInterface& NewMidiEventDriver); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414C1E018
		void BP_OnLipSyncAssetChanged(TWeakObjectPtr& NewLipSyncAsset); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414C1DF38
		void BP_OnCosmeticInstrumentTypeChanged(ESparksInstrumentType NewInstrument); // Flags: Event|Public|BlueprintEvent 0x7FF414C1DE58
	};


	// Class SparksCharacterCommonRuntime.SparksGuitarAnimInstance
	// Inherited from USparksInstrumentAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x430 - 0x420)
	class USparksGuitarAnimInstance : public USparksInstrumentAnimInstance	
	{
	public:
		int32_t FretNumber; // 0x420(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x424(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCharacterCommonRuntime.SparksGuitarAnimInstance");
			return ret;
		}

		int32_t GetFretNumberFromMidiNote(char MidiNote); // Flags: Final|Native|Static|Protected|BlueprintCallable|BlueprintPure 0x7FF414C1E1D8
	};


	// Class SparksCharacterCommonRuntime.SparksBassAnimInstance
	// Inherited from USparksGuitarAnimInstance -> USparksInstrumentAnimInstance -> UAnimInstance -> UObject
	// Size: 0x0 (0x430 - 0x430)
	class USparksBassAnimInstance : public USparksGuitarAnimInstance	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCharacterCommonRuntime.SparksBassAnimInstance");
			return ret;
		}
	};


	// Class SparksCharacterCommonRuntime.SparksDrumsAnimInstance
	// Inherited from USparksInstrumentAnimInstance -> UAnimInstance -> UObject
	// Size: 0x0 (0x420 - 0x420)
	class USparksDrumsAnimInstance : public USparksInstrumentAnimInstance	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCharacterCommonRuntime.SparksDrumsAnimInstance");
			return ret;
		}
	};


	// Class SparksCharacterCommonRuntime.SparksInstrumentAnimations
	// Inherited from UDataAsset -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class USparksInstrumentAnimations : public UDataAsset	
	{
	public:
		UClass BandPlayAnimBP; // 0x30(0x8)
		UClass InstrumentAnimBPs; // 0x38(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCharacterCommonRuntime.SparksInstrumentAnimations");
			return ret;
		}

		UClass GetAnimClassForInstrument(ESparksInstrumentType Instrument); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C1E2B8
	};


	// Class SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent
	// Inherited from UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x1B0 (0x250 - 0xA0)
	class USparksInstrumentAnimPlayerStateComponent : public UPlayerStateComponent	
	{
	public:
		unsigned char UnknownData10_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		USparksInstrumentAnimations InstrumentAnimations; // 0xA8(0x8)
		ASparksMusicPlayspace SparksPlayspace; // 0xB0(0x8)
		UMusicClockComponent MusicClock; // 0xB8(0x8)
		TScriptInterface MidiEventDriver; // 0xC0(0x10)
		TWeakObjectPtr LipSyncAsset; // 0xD0(0x20)
		ESparksInstrumentType CosmeticInstrumentType; // 0xF0(0x1)
		ESparksAnimatableState AnimatableState; // 0xF1(0x1)
		bool bCanPlayMidiAnimations; // 0xF2(0x1)
		unsigned char UnknownData11_6[0x5]; // 0xF3(0x5) UNKNOWN PROPERTY
		UClass SparksPlayspaceType; // 0xF8(0x8)
		FMulticastInlineDelegate BP_OnEnteredSparksMusicPlayspace; // 0x100(0x10)
		unsigned char UnknownData12_6[0x18]; // 0x110(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnExitedSparksMusicPlayspace; // 0x128(0x10)
		unsigned char UnknownData13_6[0x18]; // 0x138(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnPlayerMusicClockChanged; // 0x150(0x10)
		unsigned char UnknownData14_6[0x18]; // 0x160(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnPlayerMidiEventDriverChanged; // 0x178(0x10)
		unsigned char UnknownData15_6[0x18]; // 0x188(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnPlayerLipSyncAssetChanged; // 0x1A0(0x10)
		unsigned char UnknownData16_6[0x18]; // 0x1B0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnPlayerCosmeticInstrumentTypeChanged; // 0x1C8(0x10)
		unsigned char UnknownData17_6[0x18]; // 0x1D8(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnPlayerAnimatableStateChanged; // 0x1F0(0x10)
		unsigned char UnknownData18_6[0x18]; // 0x200(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnPlayerCanPlayMidiAnimationsChanged; // 0x218(0x10)
		unsigned char UnknownData19_7[0x28]; // 0x228(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent");
			return ret;
		}

		void UnlinkInstrumentAnimationLayer(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C1FC18
		void SwapCosmeticInstrument(ESparksInstrumentType NewInstrumentType); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414C1FB38
		void SetMusicClock(UMusicClockComponent NewMusicClock); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C1FA58
		void SetMidiEventDriver(TScriptInterface NewMidiEventDriver); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C1F978
		void SetLipSyncAsset(TWeakObjectPtr NewLipSyncAsset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C1F898
		void SetCosmeticInstrumentType(ESparksInstrumentType NewCosmeticInstrumentType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C1F7B8
		void SetCanPlayMidiAnimations(bool bNewCanPlayMidiAnimations); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C1F6D8
		void SetAnimatableState(ESparksAnimatableState NewAnimatableState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C1F5F8
		bool PlayerHasTrackInstrument(ESparksInstrumentType InstrumentType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1F518
		bool PlayerHasCosmeticInstrument(ESparksInstrumentType InstrumentType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1F438
		void OverridePlayspace(ASparksMusicPlayspace Playspace); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C1F358
		void LinkInstrumentAnimationLayer(USparksInstrumentAnimations Animations); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C1F278
		bool IsUsable(); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414C1F198
		bool IsInstrumentAnimationLayerLinked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1F0B8
		void HandlePlayerPawnSet(APlayerState Player, APawn NewPawn, APawn OldPawn); // Flags: Final|Native|Private 0x7FF414C1EFD8
		void HandlePawnFinishedCharacterCustomization(AFortPlayerPawn Pawn); // Flags: Final|Native|Private 0x7FF414C1EEF8
		ESparksInstrumentType GetTrackInstrumentType(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414C1EE18
		ASparksMusicPlayspace GetSparksPlayspace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1ED38
		ESparksInstrumentType GetRecentOrFirstInstrument(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1EC58
		UMusicClockComponent GetMusicClock(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1EB78
		TScriptInterface GetMidiEventDriver(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1EA98
		TWeakObjectPtr GetLipSyncAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1E9B8
		USparksBaseLayerAnimInstance GetLinkedInstrumentAnimationLayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1E8D8
		USparksInstrumentAnimations GetInstrumentAnimations(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1E7F8
		FName GetCurrentTrackName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1E718
		ESparksInstrumentType GetCosmeticInstrumentType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1E638
		ESparksAnimatableState GetAnimatableState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1E558
		bool CanSwapToInstrument(ESparksInstrumentType NewInstrumentType); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414C1E478
		bool CanPlayMidiAnimations(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1E398
	};


	// Class SparksCharacterCommonRuntime.SparksMicAnimInstance
	// Inherited from USparksInstrumentAnimInstance -> UAnimInstance -> UObject
	// Size: 0x0 (0x420 - 0x420)
	class USparksMicAnimInstance : public USparksInstrumentAnimInstance	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCharacterCommonRuntime.SparksMicAnimInstance");
			return ret;
		}
	};

}
