#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicGameplayStatsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/EpicGameplayStatsRuntime.EEpicLeaderboardDataType
	enum EEpicLeaderboardDataType
	{
		EEpicLeaderboardDataType__Integer = 0,
		EEpicLeaderboardDataType__Double = 1,
	};


	// Enum /Script/EpicGameplayStatsRuntime.EEpicLeaderboardTimeWindow
	enum EEpicLeaderboardTimeWindow
	{
		EEpicLeaderboardTimeWindow__Daily = 0,
		EEpicLeaderboardTimeWindow__Weekly = 1,
		EEpicLeaderboardTimeWindow__Monthly = 2,
		EEpicLeaderboardTimeWindow__AllTime = 3,
	};


	// Enum /Script/EpicGameplayStatsRuntime.EEpicLeaderboardUpdateFunction
	enum EEpicLeaderboardUpdateFunction
	{
		EEpicLeaderboardUpdateFunction__Min = 0,
		EEpicLeaderboardUpdateFunction__Max = 1,
		EEpicLeaderboardUpdateFunction__Sum = 2,
		EEpicLeaderboardUpdateFunction__MostRecent = 3,
	};

}
