#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRD_VideoSchedule
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CRD_VideoSchedule.VideoScheduleDeviceBase
	// Inherited from ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x108 (0xCE0 - 0xBD8)
	class AVideoScheduleDeviceBase : public ABuildingProp	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0xBD8(0x48) UNKNOWN PROPERTY
		EVideoScheduleDeviceRepeat RepeatSchedule; // 0xC20(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xC21(0x7) UNKNOWN PROPERTY
		TArray<FVideoScheduleDeviceEntryAbsolute> AbsoluteSchedule; // 0xC28(0x10)
		TArray<FVideoScheduleDeviceEntryDaily> DailySchedule; // 0xC38(0x10)
		TArray<FVideoScheduleDeviceEntryHourly> HourlySchedule; // 0xC48(0x10)
		bool bFillSchedule; // 0xC58(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xC59(0x3) UNKNOWN PROPERTY
		int32_t FillScheduleGap; // 0xC5C(0x4)
		int32_t FillScheduleAlign; // 0xC60(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC64(0x4) UNKNOWN PROPERTY
		FString SimpleSchedule; // 0xC68(0x10)
		unsigned char UnknownData04_7[0x68]; // 0xC78(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_VideoSchedule.VideoScheduleDeviceBase");
			return ret;
		}

		void TestControlVideoPlayer(FString VUID, FDateTime StartTime, TArray<AController*>& Players); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7516EDF70(relative to base address)
		void StopSchedule(AController* InPlayer); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516EDE58(relative to base address)
		void StartSchedule(AController* InPlayer); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516EDD88(relative to base address)
		void OnControlVideoPlayer(FString VUID, FDateTime StartTime, TArray<AController*>& Players, ULevelSequence* Sequence); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
