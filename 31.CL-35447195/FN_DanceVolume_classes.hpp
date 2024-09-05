#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DanceVolume
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DanceVolume.DanceSynchronizerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UDanceSynchronizerComponent : public UActorComponent	
	{
	public:
		bool bShouldHalfOrDoubleTimeDances : 1; // 0xA0:0(0x1)
		unsigned char UnknownData04_5[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		FDanceBeatInfo BeatInfo; // 0xA4(0x8)
		EDanceBeatSyncMode SyncMode; // 0xAC(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		float Tempo; // 0xB0(0x4)
		unsigned char UnknownData06_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		AFortPlayerPawn OwnerPlayerPawn; // 0xB8(0x8)
		USkeletalMeshComponent OwnerMeshComponent; // 0xC0(0x8)
		USkeletalMeshComponent LeaderMeshComponent; // 0xC8(0x8)
		unsigned char UnknownData07_7[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DanceVolume.DanceSynchronizerComponent");
			return ret;
		}

		void StopOwnerEmoteAudio(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D67758
		void SetTempo(float NewTempo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D67678
		void SetDanceBeatInfo(FDanceBeatInfo& NewDanceBeatInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D67598
		void SetBeatSyncMode(EDanceBeatSyncMode NewMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D674B8
		void OnRep_SyncMode(); // Flags: Final|Native|Private 0x7FF414D673D8
		bool IsTempoSyncEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414D672F8
		USkeletalMeshComponent GetOwnerSkeletalMeshComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414D67218
		AFortPlayerPawn GetOwnerFortPlayerPawn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414D67138
		float CalculateDanceMontagePlayRate(float CurrentTempo, UAnimMontage Montage, FDanceBeatInfo& DanceBeatInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414D67058
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

		UFortItemDefinition GetLastEmoteExecuted(AController Controller); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D67918
		void ForceStopMontage(AFortPawn FortPawn); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D67838
	};

}
