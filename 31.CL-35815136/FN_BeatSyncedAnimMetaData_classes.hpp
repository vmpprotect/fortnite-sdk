#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BeatSyncedAnimMetaData
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class BeatSyncedAnimMetaData.BeatSyncedAnimMetaData
	// Inherited from UAnimMetaData -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UBeatSyncedAnimMetaData : public UAnimMetaData	
	{
	public:
		bool bAllowBeatsyncing; // 0x28(0x1)
		bool bIsForEmote; // 0x29(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeatSyncedAnimMetaData.BeatSyncedAnimMetaData");
			return ret;
		}
	};


	// Class BeatSyncedAnimMetaData.PreciseBeatSyncedAnimMetaData
	// Inherited from UBeatSyncedAnimMetaData -> UAnimMetaData -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UPreciseBeatSyncedAnimMetaData : public UBeatSyncedAnimMetaData	
	{
	public:
		float FirstBeatAtFrame; // 0x30(0x4)
		float BeatB; // 0x34(0x4)
		bool bShouldHalfOrDoublePlayRate; // 0x38(0x1)
		bool bOverrideGlobalHalfOrDoublePlayRateLimits; // 0x39(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x3A(0x2) UNKNOWN PROPERTY
		float MaxPlayRateBeforeHalf; // 0x3C(0x4)
		float MinPlayRateBeforeDouble; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeatSyncedAnimMetaData.PreciseBeatSyncedAnimMetaData");
			return ret;
		}
	};


	// Class BeatSyncedAnimMetaData.TimeSyncedBeatSyncedAnimMetaData
	// Inherited from UBeatSyncedAnimMetaData -> UAnimMetaData -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UTimeSyncedBeatSyncedAnimMetaData : public UBeatSyncedAnimMetaData	
	{
	public:
		float AnimTimeZeroOffsetSeconds; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeatSyncedAnimMetaData.TimeSyncedBeatSyncedAnimMetaData");
			return ret;
		}
	};

}
