#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Radio
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Valet/Radio/BP_Vehicle_Radio.BP_Vehicle_Radio_C
	// Inherited from AActor -> UObject
	// Size: 0x59 (0x2E9 - 0x290)
	class ABP_Vehicle_Radio_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		UMediaSoundComponent* RadioSpeaker; // 0x298(0x8)
		USceneComponent* DefaultSceneRoot; // 0x2A0(0x8)
		UMediaPlayer* RadioMediaPlayer; // 0x2A8(0x8)
		UFortStreamMediaSource* RadioMediaSource; // 0x2B0(0x8)
		TArray<FString> RadioStations; // 0x2B8(0x10)
		int32_t RadioRetryCounter; // 0x2C8(0x4)
		int32_t RadioRetries; // 0x2CC(0x4)
		FString RadioURL; // 0x2D0(0x10)
		bool RadioURLFailure; // 0x2E0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2E1(0x3) UNKNOWN PROPERTY
		int32_t RadioStationIndex; // 0x2E4(0x4)
		bool RadioIsPlaying; // 0x2E8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/Radio/BP_Vehicle_Radio.BP_Vehicle_Radio_C");
			return ret;
		}

		void OnRep_RadioIsPlaying(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RadioSendAnalytics(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RadioClosed(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RadioRetry(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RadioUnbindEvents(bool JustURL); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RadioPlay(FString URL); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartRadio(int32_t StationIndex); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayRadio(FString RetrievedUrl); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RadioURLFailed(FString RetrievedUrl); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RadioOpenFailed(FString FailedUrl); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopRadio(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_Vehicle_Radio(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
