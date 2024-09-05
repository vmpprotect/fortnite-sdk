#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MusicBlocks
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MusicBlocks.MusicSequencerHitComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x140 (0x1E0 - 0xA0)
	class UMusicSequencerHitComponent : public UActorComponent	
	{
	public:
		FMusicSequencerHitArray MusicSequencerEventList; // 0xA0(0x120)
		TArray LoadedSoundsList; // 0x1C0(0x10)
		TArray SoundPreloadClassList; // 0x1D0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MusicBlocks.MusicSequencerHitComponent");
			return ret;
		}

		bool ReplicateMusicSequencerHit(UObject WorldContextObject, TScriptInterface HitInterface, AController Instigator); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414CF16F8
		bool RegisterMusicSequencerActor(UObject WorldContextObject, TScriptInterface Actor); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414CF1618
		bool ProcessSequenceHitEvent(FMusicSequencerHitEntry& Event); // Flags: Final|Native|Protected|HasOutParms 0x7FF414CF1538
		void OnSequenceHitEventExpired(FMusicSequencerHitHandle ExpiredHandle); // Flags: Final|Native|Protected 0x7FF414CF1458
		bool AddSequenceHitEvent(TScriptInterface HitInterface, AController Instigator); // Flags: Final|Native|Protected 0x7FF414CF1378
		bool AddMusicSequencerActor(TScriptInterface HitInterface); // Flags: Final|Native|Protected 0x7FF414CF1298
	};


	// Class MusicBlocks.MusicSequencerHitActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AMusicSequencerHitActor : public AActor	
	{
	public:
		UMusicSequencerHitComponent MusicSequencerHitComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MusicBlocks.MusicSequencerHitActor");
			return ret;
		}

		UMusicSequencerHitComponent GetMusicSequencerHitComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CF17D8
	};


	// Class MusicBlocks.MusicSequencerHitAdderComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UMusicSequencerHitAdderComponent : public UPlayspaceComponent	
	{
	public:
		UClass MusicSequencerHitActorClass; // 0xA0(0x8)
		TWeakObjectPtr MusicSequencerHitActor; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MusicBlocks.MusicSequencerHitAdderComponent");
			return ret;
		}

		AMusicSequencerHitActor GetMusicSequencerHitActor(); // Flags: Final|Native|Public|Const 0x7FF414CF18B8
	};

}
