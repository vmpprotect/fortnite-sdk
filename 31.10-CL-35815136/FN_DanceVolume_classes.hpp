#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DanceVolume
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DanceVolume.DanceSynchronizerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UDanceSynchronizerComponent : public UActorComponent	
	{
	public:
		bool bShouldHalfOrDoubleTimeDances : 1; // 0xA0:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		FDanceBeatInfo BeatInfo; // 0xA4(0x8)
		EDanceBeatSyncMode SyncMode; // 0xAC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		float Tempo; // 0xB0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		AFortPlayerPawn* OwnerPlayerPawn; // 0xB8(0x8)
		USkeletalMeshComponent* OwnerMeshComponent; // 0xC0(0x8)
		USkeletalMeshComponent* LeaderMeshComponent; // 0xC8(0x8)
		unsigned char UnknownData03_7[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DanceVolume.DanceSynchronizerComponent");
			return ret;
		}

		void StopOwnerEmoteAudio(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516007E4(relative to base address)
		void SetTempo(float NewTempo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751600764(relative to base address)
		void SetDanceBeatInfo(FDanceBeatInfo& NewDanceBeatInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7516006D0(relative to base address)
		void SetBeatSyncMode(EDanceBeatSyncMode NewMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751600654(relative to base address)
		void OnRep_SyncMode(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516005F4(relative to base address)
		bool IsTempoSyncEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516005D8(relative to base address)
		USkeletalMeshComponent GetOwnerSkeletalMeshComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C75D448(relative to base address)
		AFortPlayerPawn GetOwnerFortPlayerPawn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74EF53020(relative to base address)
		float CalculateDanceMontagePlayRate(float CurrentTempo, UAnimMontage* Montage, FDanceBeatInfo& DanceBeatInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75160039C(relative to base address)
	};


	// Class DanceVolume.DanceVolumeLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDanceVolumeLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DanceVolume.DanceVolumeLibrary");
			return ret;
		}

		UFortItemDefinition GetLastEmoteExecuted(AController* Controller); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510AB234(relative to base address)
		void ForceStopMontage(AFortPawn* FortPawn); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751600518(relative to base address)
	};

}
