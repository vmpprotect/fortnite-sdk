#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PapayaTimedEvents
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PapayaTimedEvents.PapayaTimedEvents
	// Inherited from AActor -> UObject
	// Size: 0x1D8 (0x468 - 0x290)
	class APapayaTimedEvents : public AActor	
	{
	public:
		TMap<FString, UMediaPlayer*> MediaPlayerMap; // 0x290(0x50)
		UPapayaTimedEventsResponderComponent* MeshEventResponder; // 0x2E0(0x8)
		TArray<AActor*> TimedEventActorTargets; // 0x2E8(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY
		FMediaTimeEventArray TimedEventsArray; // 0x300(0x118)
		unsigned char UnknownData01_6[0x18]; // 0x418(0x18) UNKNOWN PROPERTY
		FString ScreenName; // 0x430(0x10)
		unsigned char UnknownData02_7[0x28]; // 0x440(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PapayaTimedEvents.PapayaTimedEvents");
			return ret;
		}

		void ShutdownTimedEvents_Native(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751343E0C(relative to base address)
		void SetupTimedEvents_Native(FString ScreenName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751343D7C(relative to base address)
		void ResetTimedEvents_Native(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751343D68(relative to base address)
		void OnRep_TimedEventsArray(FMediaTimeEventArray& PreviousValue); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751343CB0(relative to base address)
		void OnRep_ScreenName(FString PreviousValue); // Flags: Final|Native|Private, Memory Exec: 0x7FF751343C24(relative to base address)
		void AddTimedEvent_Native(FString EventName, int64_t Time, FString EventParam); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751343AF4(relative to base address)
	};


	// Class PapayaTimedEvents.PapayaTimedEventsResponderComponent
	// Inherited from UFortEventResponderComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x160 - 0xE8)
	class UPapayaTimedEventsResponderComponent : public UFortEventResponderComponent	
	{
	public:
		unsigned char UnknownData00_1[0x78]; // 0xE8(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PapayaTimedEvents.PapayaTimedEventsResponderComponent");
			return ret;
		}
	};

}
