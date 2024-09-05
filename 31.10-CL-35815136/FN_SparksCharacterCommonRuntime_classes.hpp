#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksCharacterCommonRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SparksCharacterCommonRuntime.SparksAnimationSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x88 (0xB8 - 0x30)
	class USparksAnimationSubsystem : public UWorldSubsystem	
	{
	public:
		TWeakObjectPtr<USparksInstrumentAnimations*> Anims_Default; // 0x30(0x20)
		TWeakObjectPtr<USparksInstrumentAnimations*> Anims_Light; // 0x50(0x20)
		unsigned char UnknownData00_6[0x28]; // 0x70(0x28) UNKNOWN PROPERTY
		int32_t NumAnimationRefs; // 0x98(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x9C(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCharacterCommonRuntime.SparksAnimationSubsystem");
			return ret;
		}

		USparksInstrumentAnimations GetLoadedSparksAnimations(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CAC7C(relative to base address)
	};


	// Class SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance
	// Inherited from UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x98 (0x550 - 0x4B8)
	class USparksBaseLayerAnimInstance : public UFortBaseLayerAnimInstance	
	{
	public:
		float MinTempo; // 0x4B8(0x4)
		float MaxTempo; // 0x4BC(0x4)
		TArray<float> BPMBucketMaxTempos; // 0x4C0(0x10)
		int32_t BPMBucketCooldownBeats; // 0x4D0(0x4)
		float PreviewBPM; // 0x4D4(0x4)
		float BPMBucketHysteresis; // 0x4D8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4DC(0x4) UNKNOWN PROPERTY
		USparksInstrumentAnimPlayerStateComponent* InstrumentPSC; // 0x4E0(0x8)
		ASparksMusicPlayspace* SparksPlayspace; // 0x4E8(0x8)
		UMusicClockComponent* MusicClock; // 0x4F0(0x8)
		FBeatAndTime SongBeatAndTime; // 0x4F8(0xC)
		FBeatAndTime AnimBeatAndTime; // 0x504(0xC)
		float SongBPM; // 0x510(0x4)
		int32_t BPMBucketCooldownRemaining; // 0x514(0x4)
		int32_t BPMBucket; // 0x518(0x4)
		ESparksInstrumentType Instrument; // 0x51C(0x1)
		bool bCanPlayMidiAnimations; // 0x51D(0x1)
		bool bMusicBeatIsActive; // 0x51E(0x1)
		bool bIsRoamingOrNotAnimatable; // 0x51F(0x1)
		FName InstrumentSlotTag; // 0x520(0x4)
		FBeatAndTime PrevSongBeatAndTime; // 0x524(0xC)
		FBeatAndTime PrevAnimBeatAndTime; // 0x530(0xC)
		float TempoHalfOrDoubleFactor; // 0x53C(0x4)
		ESparksAnimatableState AnimatableState; // 0x540(0x1)
		bool bIsRoaming; // 0x541(0x1)
		unsigned char UnknownData01_7[0xE]; // 0x542(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance");
			return ret;
		}

		void SetIsRoaming(bool bInIsRoaming); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CB0EC(relative to base address)
		bool GetIsRoaming(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B86B0(relative to base address)
		ESparksAnimatableState GetAnimatableState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CAB4C(relative to base address)
		void BP_OnSetInstrumentPSC(USparksInstrumentAnimPlayerStateComponent* OldInstrumentPSC, USparksInstrumentAnimPlayerStateComponent* NewInstrumentPSC); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SparksCharacterCommonRuntime.SparksInstrumentAnimInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x68 (0x420 - 0x3B8)
	class USparksInstrumentAnimInstance : public UAnimInstance	
	{
	public:
		USparksInstrumentAnimPlayerStateComponent* InstrumentPSC; // 0x3B8(0x8)
		ASparksMusicPlayspace* SparksMusicPlayspace; // 0x3C0(0x8)
		UMusicClockComponent* MusicClock; // 0x3C8(0x8)
		TScriptInterface<Class> MidiEventDriver; // 0x3D0(0x10)
		TWeakObjectPtr<UAnimSequence*> LipSyncAsset; // 0x3E0(0x20)
		ESparksInstrumentType Instrument; // 0x400(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x401(0x3) UNKNOWN PROPERTY
		float PreviewBPM; // 0x404(0x4)
		FBeatAndTime SongBeatAndTime; // 0x408(0xC)
		FBeatAndTime AnimBeatAndTime; // 0x414(0xC)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCharacterCommonRuntime.SparksInstrumentAnimInstance");
			return ret;
		}

		void BP_SparksDebugUpdate(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSetInstrumentPSC(USparksInstrumentAnimPlayerStateComponent* OldInstrumentPSC, USparksInstrumentAnimPlayerStateComponent* NewInstrumentPSC); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnMidiEventDriverChanged(TScriptInterface<Class>& NewMidiEventDriver); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnLipSyncAssetChanged(TWeakObjectPtr<UAnimSequence*>& NewLipSyncAsset); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnCosmeticInstrumentTypeChanged(ESparksInstrumentType NewInstrument); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SparksCharacterCommonRuntime.SparksGuitarAnimInstance
	// Inherited from USparksInstrumentAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x430 - 0x420)
	class USparksGuitarAnimInstance : public USparksInstrumentAnimInstance	
	{
	public:
		int32_t FretNumber; // 0x420(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x424(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCharacterCommonRuntime.SparksGuitarAnimInstance");
			return ret;
		}

		int32_t GetFretNumberFromMidiNote(char MidiNote); // Flags: Final|Native|Static|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510CAB90(relative to base address)
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
		UClass* BandPlayAnimBP; // 0x30(0x8)
		UClass* InstrumentAnimBPs; // 0x38(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCharacterCommonRuntime.SparksInstrumentAnimations");
			return ret;
		}

		UClass GetAnimClassForInstrument(ESparksInstrumentType Instrument); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510CAAC0(relative to base address)
	};


	// Class SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent
	// Inherited from UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x1B0 (0x250 - 0xA0)
	class USparksInstrumentAnimPlayerStateComponent : public UPlayerStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		USparksInstrumentAnimations* InstrumentAnimations; // 0xA8(0x8)
		ASparksMusicPlayspace* SparksPlayspace; // 0xB0(0x8)
		UMusicClockComponent* MusicClock; // 0xB8(0x8)
		TScriptInterface<Class> MidiEventDriver; // 0xC0(0x10)
		TWeakObjectPtr<UAnimSequence*> LipSyncAsset; // 0xD0(0x20)
		ESparksInstrumentType CosmeticInstrumentType; // 0xF0(0x1)
		ESparksAnimatableState AnimatableState; // 0xF1(0x1)
		bool bCanPlayMidiAnimations; // 0xF2(0x1)
		unsigned char UnknownData01_6[0x5]; // 0xF3(0x5) UNKNOWN PROPERTY
		UClass* SparksPlayspaceType; // 0xF8(0x8)
		FMulticastInlineDelegate BP_OnEnteredSparksMusicPlayspace; // 0x100(0x10)
		unsigned char UnknownData02_6[0x18]; // 0x110(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnExitedSparksMusicPlayspace; // 0x128(0x10)
		unsigned char UnknownData03_6[0x18]; // 0x138(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnPlayerMusicClockChanged; // 0x150(0x10)
		unsigned char UnknownData04_6[0x18]; // 0x160(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnPlayerMidiEventDriverChanged; // 0x178(0x10)
		unsigned char UnknownData05_6[0x18]; // 0x188(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnPlayerLipSyncAssetChanged; // 0x1A0(0x10)
		unsigned char UnknownData06_6[0x18]; // 0x1B0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnPlayerCosmeticInstrumentTypeChanged; // 0x1C8(0x10)
		unsigned char UnknownData07_6[0x18]; // 0x1D8(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnPlayerAnimatableStateChanged; // 0x1F0(0x10)
		unsigned char UnknownData08_6[0x18]; // 0x200(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnPlayerCanPlayMidiAnimationsChanged; // 0x218(0x10)
		unsigned char UnknownData09_7[0x28]; // 0x228(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent");
			return ret;
		}

		void UnlinkInstrumentAnimationLayer(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749AC80D4(relative to base address)
		void SwapCosmeticInstrument(ESparksInstrumentType NewInstrumentType); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMusicClock(UMusicClockComponent* NewMusicClock); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74941B6F8(relative to base address)
		void SetMidiEventDriver(TScriptInterface<Class> NewMidiEventDriver); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CB26C(relative to base address)
		void SetLipSyncAsset(TWeakObjectPtr<UAnimSequence*> NewLipSyncAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CB170(relative to base address)
		void SetCosmeticInstrumentType(ESparksInstrumentType NewCosmeticInstrumentType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74878C3A8(relative to base address)
		void SetCanPlayMidiAnimations(bool bNewCanPlayMidiAnimations); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494568D4(relative to base address)
		void SetAnimatableState(ESparksAnimatableState NewAnimatableState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749348A4C(relative to base address)
		bool PlayerHasTrackInstrument(ESparksInstrumentType InstrumentType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CB01C(relative to base address)
		bool PlayerHasCosmeticInstrument(ESparksInstrumentType InstrumentType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CAF50(relative to base address)
		void OverridePlayspace(ASparksMusicPlayspace* Playspace); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CAE80(relative to base address)
		void LinkInstrumentAnimationLayer(USparksInstrumentAnimations* Animations); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74878C328(relative to base address)
		bool IsUsable(); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsInstrumentAnimationLayerLinked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CAE54(relative to base address)
		void HandlePlayerPawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF7510CAD5C(relative to base address)
		void HandlePawnFinishedCharacterCustomization(AFortPlayerPawn* Pawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF7510CACDC(relative to base address)
		ESparksInstrumentType GetTrackInstrumentType(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		ASparksMusicPlayspace GetSparksPlayspace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7491595E0(relative to base address)
		ESparksInstrumentType GetRecentOrFirstInstrument(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74878C428(relative to base address)
		UMusicClockComponent GetMusicClock(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EF53020(relative to base address)
		TScriptInterface GetMidiEventDriver(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CACA0(relative to base address)
		TWeakObjectPtr GetLipSyncAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CAC34(relative to base address)
		USparksBaseLayerAnimInstance GetLinkedInstrumentAnimationLayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CAC10(relative to base address)
		USparksInstrumentAnimations GetInstrumentAnimations(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333214(relative to base address)
		FName GetCurrentTrackName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CAB64(relative to base address)
		ESparksInstrumentType GetCosmeticInstrumentType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EBF9174(relative to base address)
		ESparksAnimatableState GetAnimatableState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C52081C(relative to base address)
		bool CanSwapToInstrument(ESparksInstrumentType NewInstrumentType); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CanPlayMidiAnimations(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CAAA8(relative to base address)
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
