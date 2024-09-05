#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BPC_SparksSongPreviewer
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void ForceStopPreviewImmediate(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE9000
		void StopPreviewingSong(bool WithFadeout, FName SongShortName); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE8B00
		void IsPlayingPreview(FName Song, bool& Is Playing Or Pending); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D4BEE8F00
		void StopPreview(bool WithFadeout); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE8C00
		void StartPreview(FName SongShortName); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE8D00
		void ReceiveEndPlay(TEnumAsByte EndPlayReason); // Flags: Event|Public|BlueprintEvent 0x15D4BEE8E00
		void ExecuteUbergraph_BPC_SparksSongPreviewer(int32_t EntryPoint); // Flags: Final 0x15D4BEE9100
	};

}
