#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MusicBlocks
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MusicBlocks.MusicSequencerHitComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x140 (0x1E0 - 0xA0)
	class UMusicSequencerHitComponent : public UActorComponent	
	{
	public:
		FMusicSequencerHitArray MusicSequencerEventList; // 0xA0(0x120)
		TArray<USoundBase*> LoadedSoundsList; // 0x1C0(0x10)
		TArray<UClass*> SoundPreloadClassList; // 0x1D0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MusicBlocks.MusicSequencerHitComponent");
			return ret;
		}

		bool ReplicateMusicSequencerHit(UObject* WorldContextObject, TScriptInterface<Class> HitInterface, AController* Instigator); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75134D2E4(relative to base address)
		bool RegisterMusicSequencerActor(UObject* WorldContextObject, TScriptInterface<Class> Actor); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75134D184(relative to base address)
		bool ProcessSequenceHitEvent(FMusicSequencerHitEntry& Event); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75134D09C(relative to base address)
		void OnSequenceHitEventExpired(FMusicSequencerHitHandle ExpiredHandle); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75134CF8C(relative to base address)
		bool AddSequenceHitEvent(TScriptInterface<Class> HitInterface, AController* Instigator); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75134CD94(relative to base address)
		bool AddMusicSequencerActor(TScriptInterface<Class> HitInterface); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75134CC64(relative to base address)
	};


	// Class MusicBlocks.MusicSequencerHitActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AMusicSequencerHitActor : public AActor	
	{
	public:
		UMusicSequencerHitComponent* MusicSequencerHitComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MusicBlocks.MusicSequencerHitActor");
			return ret;
		}

		UMusicSequencerHitComponent GetMusicSequencerHitComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFEA8(relative to base address)
	};


	// Class MusicBlocks.MusicSequencerHitAdderComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UMusicSequencerHitAdderComponent : public UPlayspaceComponent	
	{
	public:
		UClass* MusicSequencerHitActorClass; // 0xA0(0x8)
		TWeakObjectPtr<AMusicSequencerHitActor*> MusicSequencerHitActor; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MusicBlocks.MusicSequencerHitAdderComponent");
			return ret;
		}

		AMusicSequencerHitActor GetMusicSequencerHitActor(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF748995C60(relative to base address)
	};

}
