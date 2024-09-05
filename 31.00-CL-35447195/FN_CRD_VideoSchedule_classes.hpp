#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CRD_VideoSchedule
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CRD_VideoSchedule.VideoScheduleDeviceBase
	// Inherited from ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x108 (0xCE0 - 0xBD8)
	class AVideoScheduleDeviceBase : public ABuildingProp	
	{
	public:
		unsigned char UnknownData05_3[0x48]; // 0xBD8(0x48) UNKNOWN PROPERTY
		EVideoScheduleDeviceRepeat RepeatSchedule; // 0xC20(0x1)
		unsigned char UnknownData06_6[0x7]; // 0xC21(0x7) UNKNOWN PROPERTY
		TArray AbsoluteSchedule; // 0xC28(0x10)
		TArray DailySchedule; // 0xC38(0x10)
		TArray HourlySchedule; // 0xC48(0x10)
		bool bFillSchedule; // 0xC58(0x1)
		unsigned char UnknownData07_6[0x3]; // 0xC59(0x3) UNKNOWN PROPERTY
		int32_t FillScheduleGap; // 0xC5C(0x4)
		int32_t FillScheduleAlign; // 0xC60(0x4)
		unsigned char UnknownData08_6[0x4]; // 0xC64(0x4) UNKNOWN PROPERTY
		FString SimpleSchedule; // 0xC68(0x10)
		unsigned char UnknownData09_7[0x68]; // 0xC78(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_VideoSchedule.VideoScheduleDeviceBase");
			return ret;
		}

		void TestControlVideoPlayer(FString VUID, FDateTime StartTime, TArray& Players); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D8DF60
		void StopSchedule(AController InPlayer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8DE80
		void StartSchedule(AController InPlayer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8DDA0
		void OnControlVideoPlayer(FString VUID, FDateTime StartTime, TArray& Players, ULevelSequence Sequence); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414D8DCC0
	};

}
