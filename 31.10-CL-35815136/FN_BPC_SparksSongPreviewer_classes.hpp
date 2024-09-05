#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BPC_SparksSongPreviewer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /SparksSongPlayer/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C
	// Inherited from USparksSongPreviewerComponent -> UActorComponent -> UObject
	// Size: 0x9 (0xE1 - 0xD8)
	class UBPC_SparksSongPreviewer_C : public USparksSongPreviewerComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xD8(0x8)
		bool Restore_Equipped_Music_Pack_On_End_Play; // 0xE0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SparksSongPlayer/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C");
			return ret;
		}

		void ForceStopPreviewImmediate(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopPreviewingSong(bool WithFadeout, FName SongShortName); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsPlayingPreview(FName Song, bool& Is Playing Or Pending); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopPreview(bool WithFadeout); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartPreview(FName SongShortName); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BPC_SparksSongPreviewer(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
