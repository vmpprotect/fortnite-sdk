#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EngineSettings
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/EngineSettings.ETwoPlayerSplitScreenType
	enum ETwoPlayerSplitScreenType
	{
		ETwoPlayerSplitScreenType__Horizontal = 0,
		ETwoPlayerSplitScreenType__Vertical = 1,
	};


	// Enum /Script/EngineSettings.EThreePlayerSplitScreenType
	enum EThreePlayerSplitScreenType
	{
		EThreePlayerSplitScreenType__FavorTop = 0,
		EThreePlayerSplitScreenType__FavorBottom = 1,
		EThreePlayerSplitScreenType__Vertical = 2,
		EThreePlayerSplitScreenType__Horizontal = 3,
	};


	// Enum /Script/EngineSettings.EFourPlayerSplitScreenType
	enum EFourPlayerSplitScreenType
	{
		EFourPlayerSplitScreenType__Grid = 0,
		EFourPlayerSplitScreenType__Vertical = 1,
		EFourPlayerSplitScreenType__Horizontal = 2,
	};


	// Enum /Script/EngineSettings.ESubLevelStripMode
	enum ESubLevelStripMode
	{
		ESubLevelStripMode__ExactClass = 0,
		ESubLevelStripMode__IsChildOf = 1,
	};

}