#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CreativeDataChannelTriggerRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelAnalytics
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCreativeDataChannelAnalytics : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelAnalytics");
			return ret;
		}
	};


	// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget
	// Inherited from AElectraDataChannelTarget -> AActor -> UObject
	// Size: 0x50 (0x358 - 0x308)
	class ACreativeDataChannelTarget : public AElectraDataChannelTarget	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x308(0x8) UNKNOWN PROPERTY
		int8_t VersionByte; // 0x310(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x311(0x7) UNKNOWN PROPERTY
		FCreativeDataChannelEvents Events; // 0x318(0x10)
		FMulticastInlineDelegate OnEventsRep; // 0x328(0x10)
		FCreativeDataChannelEvents EventsCache; // 0x338(0x10)
		unsigned char UnknownData05_7[0x10]; // 0x348(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget");
			return ret;
		}

		void TestCreativeDataChannelTarget(FCreativeDataChannelEvents TestEvents); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D68638
		void OnRep_Events(); // Flags: Final|Native|Public 0x7FF414D68558
		void FireEvent(FName EventName); // Flags: Event|Public|BlueprintEvent 0x7FF414D68478
	};


	// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetFN
	// Inherited from AElectraDataChannelTarget -> AActor -> UObject
	// Size: 0x2B8 (0x5C0 - 0x308)
	class ACreativeDataChannelTargetFN : public AElectraDataChannelTarget	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x308(0x8) UNKNOWN PROPERTY
		int32_t VersionByte; // 0x310(0x4)
		FCDCInt VersionByteTracker; // 0x314(0x4)
		FMulticastInlineDelegate VersionByteEvent; // 0x318(0x10)
		FString LeaderBoard; // 0x328(0x10)
		int64_t StormCircleSize; // 0x338(0x8)
		FCDCLargeInt StormCircleSizeTracker; // 0x340(0x8)
		FMulticastInlineDelegate StormCircleSizeEvent; // 0x348(0x10)
		TArray StormCircleLocation; // 0x358(0x10)
		FCDCFloatArray StormCircleLocationTracker; // 0x368(0x10)
		FMulticastInlineDelegate StormCircleLocationEvent; // 0x378(0x10)
		FString PlayerLocation; // 0x388(0x10)
		FCDCStringFloatArrayMap PlayerLocationTracker; // 0x398(0x50)
		FMulticastInlineDelegate PlayerLocationEvent; // 0x3E8(0x10)
		FString ArenaPointLeaderBoard; // 0x3F8(0x10)
		FCDCStringStringMap ArenaPointLeaderBoardTracker; // 0x408(0xA0)
		FMulticastInlineDelegate ArenaPointLeaderBoardEvent; // 0x4A8(0x10)
		FString CashCupDataAllTimeEarners; // 0x4B8(0x10)
		FCDCStringFloatMap CashCupDataAllTimeEanersTracker; // 0x4C8(0x50)
		FMulticastInlineDelegate CashCupDataAllTimeEarnersEvent; // 0x518(0x10)
		FString MythicBossEliminatedPlayer; // 0x528(0x10)
		FCDCString MythicBossEliminatedPlayerTracker; // 0x538(0x10)
		FMulticastInlineDelegate MythicBossEliminatedPlayerEvent; // 0x548(0x10)
		FString MythicWeaponPlayer; // 0x558(0x10)
		FCDCString MythicWeaponPlayerTracker; // 0x568(0x10)
		FMulticastInlineDelegate MythicWeaponPlayerEvent; // 0x578(0x10)
		FString PlayerInfo; // 0x588(0x10)
		FCDCStringArray PlayerInfoTracker; // 0x598(0x18)
		FMulticastInlineDelegate PlayerInfoEvent; // 0x5B0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetFN");
			return ret;
		}
	};


	// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL
	// Inherited from AElectraDataChannelTarget -> AActor -> UObject
	// Size: 0x4C0 (0x7C8 - 0x308)
	class ACreativeDataChannelTargetRL : public AElectraDataChannelTarget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x308(0x8) UNKNOWN PROPERTY
		int32_t VersionByte; // 0x310(0x4)
		FCDCInt VersionByteTracker; // 0x314(0x4)
		FMulticastInlineDelegate VersionByteEvent; // 0x318(0x10)
		int32_t ScoreTeam; // 0x328(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY
		FCDCString ScoreTeamTracker; // 0x330(0x10)
		FMulticastInlineDelegate ScoreTeamEvent; // 0x340(0x10)
		FString ScoreTotal; // 0x350(0x10)
		FCDCStringIntMap ScoreTotalTracker; // 0x360(0x50)
		FMulticastInlineDelegate ScoreTotalEvent; // 0x3B0(0x10)
		int64_t ScoreboardTimeLeft; // 0x3C0(0x8)
		FCDCLargeInt ScoreboardTimeLeftTracker; // 0x3C8(0x8)
		FMulticastInlineDelegate ScoreboardTimeLeftEvent; // 0x3D0(0x10)
		FString ScoreboardBestOf; // 0x3E0(0x10)
		FCDCStringIntMap ScoreboardBestOfTracker; // 0x3F0(0x50)
		FMulticastInlineDelegate ScoreboardBestOfEvent; // 0x440(0x10)
		int32_t OverTime; // 0x450(0x4)
		FCDCInt OvertimeTracker; // 0x454(0x4)
		FMulticastInlineDelegate OvertimeEvent; // 0x458(0x10)
		FString TeamNames; // 0x468(0x10)
		FCDCStringArray TeamNamesTracker; // 0x478(0x18)
		FMulticastInlineDelegate TeamNamesEvent; // 0x490(0x10)
		FString PlayerNames; // 0x4A0(0x10)
		FCDCStringArray PlayerNamesTracker; // 0x4B0(0x18)
		FMulticastInlineDelegate PlayerNamesEvent; // 0x4C8(0x10)
		FString PlayerBoost; // 0x4D8(0x10)
		FCDCStringIntMap PlayerBoostTracker; // 0x4E8(0x50)
		FMulticastInlineDelegate PlayerBoostEvent; // 0x538(0x10)
		FString PlayerBoostCollected; // 0x548(0x10)
		FCDCStringStringMap PlayerBoostCollectedTracker; // 0x558(0xA0)
		FMulticastInlineDelegate PlayerBoostCollectedEvent; // 0x5F8(0x10)
		FString PlayerCoords; // 0x608(0x10)
		FCDCStringFloatArrayMap PlayerCoordsTracker; // 0x618(0x50)
		FMulticastInlineDelegate PlayerCoordsEvent; // 0x668(0x10)
		FString BallCoords; // 0x678(0x10)
		FCDCFloatArray BallCoordsTracker; // 0x688(0x10)
		FMulticastInlineDelegate BallCoordsEvent; // 0x698(0x10)
		FString MediaStart; // 0x6A8(0x10)
		FCDCStringStringMap MediaStartTracker; // 0x6B8(0xA0)
		FMulticastInlineDelegate MediaStartEvent; // 0x758(0x10)
		int32_t MediaStop; // 0x768(0x4)
		FCDCInt MediaStopTracker; // 0x76C(0x4)
		FMulticastInlineDelegate MediaStopEvent; // 0x770(0x10)
		int32_t SeriesState; // 0x780(0x4)
		FCDCInt SeriesStateTracker; // 0x784(0x4)
		FMulticastInlineDelegate SeriesStateEvent; // 0x788(0x10)
		int32_t MatchState; // 0x798(0x4)
		FCDCInt MatchStateTracker; // 0x79C(0x4)
		FMulticastInlineDelegate MatchStateEvent; // 0x7A0(0x10)
		int32_t FinaleState; // 0x7B0(0x4)
		FCDCInt FinaleStateTracker; // 0x7B4(0x4)
		FMulticastInlineDelegate FinaleStateEvent; // 0x7B8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL");
			return ret;
		}

		void ReportServerStateStreamError(FString Error, FString UID, FString URL); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D695F8
		void OnRep_VersionByte(); // Flags: Final|Native|Public 0x7FF414D69518
		void OnRep_TeamNames(); // Flags: Final|Native|Public 0x7FF414D69438
		void OnRep_SeriesState(); // Flags: Final|Native|Public 0x7FF414D69358
		void OnRep_ScoreTotal(); // Flags: Final|Native|Public 0x7FF414D69278
		void OnRep_ScoreTeam(); // Flags: Final|Native|Public 0x7FF414D69198
		void OnRep_ScoreboardTimeLeft(); // Flags: Final|Native|Public 0x7FF414D690B8
		void OnRep_ScoreboardBestOf(); // Flags: Final|Native|Public 0x7FF414D68FD8
		void OnRep_PlayerNames(); // Flags: Final|Native|Public 0x7FF414D68EF8
		void OnRep_PlayerCoords(); // Flags: Final|Native|Public 0x7FF414D68E18
		void OnRep_PlayerBoostCollected(); // Flags: Final|Native|Public 0x7FF414D68D38
		void OnRep_PlayerBoost(); // Flags: Final|Native|Public 0x7FF414D68C58
		void OnRep_Overtime(); // Flags: Final|Native|Public 0x7FF414D68B78
		void OnRep_MediaStop(); // Flags: Final|Native|Public 0x7FF414D68A98
		void OnRep_MediaStart(); // Flags: Final|Native|Public 0x7FF414D689B8
		void OnRep_MatchState(); // Flags: Final|Native|Public 0x7FF414D688D8
		void OnRep_FinaleState(); // Flags: Final|Native|Public 0x7FF414D687F8
		void OnRep_BallCoords(); // Flags: Final|Native|Public 0x7FF414D68718
	};

}
