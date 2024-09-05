#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PapayaTimedEvents
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PapayaTimedEvents.PapayaTimedEvents
	// Inherited from AActor -> UObject
	// Size: 0x1D8 (0x468 - 0x290)
	class APapayaTimedEvents : public AActor	
	{
	public:
		TMap MediaPlayerMap; // 0x290(0x50)
		UPapayaTimedEventsResponderComponent MeshEventResponder; // 0x2E0(0x8)
		TArray TimedEventActorTargets; // 0x2E8(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY
		FMediaTimeEventArray TimedEventsArray; // 0x300(0x118)
		unsigned char UnknownData04_6[0x18]; // 0x418(0x18) UNKNOWN PROPERTY
		FString ScreenName; // 0x430(0x10)
		unsigned char UnknownData05_7[0x28]; // 0x440(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PapayaTimedEvents.PapayaTimedEvents");
			return ret;
		}

		void ShutdownTimedEvents_Native(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CF11B8
		void SetupTimedEvents_Native(FString ScreenName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CF10D8
		void ResetTimedEvents_Native(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CF0FF8
		void OnRep_TimedEventsArray(FMediaTimeEventArray& PreviousValue); // Flags: Final|Native|Private|HasOutParms 0x7FF414CF0F18
		void OnRep_ScreenName(FString PreviousValue); // Flags: Final|Native|Private 0x7FF414CF0E38
		void AddTimedEvent_Native(FString EventName, int64_t Time, FString EventParam); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CF0D58
	};


	// Class PapayaTimedEvents.PapayaTimedEventsResponderComponent
	// Inherited from UFortEventResponderComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x160 - 0xE8)
	class UPapayaTimedEventsResponderComponent : public UFortEventResponderComponent	
	{
	public:
		unsigned char UnknownData01_1[0x78]; // 0xE8(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PapayaTimedEvents.PapayaTimedEventsResponderComponent");
			return ret;
		}
	};

}
