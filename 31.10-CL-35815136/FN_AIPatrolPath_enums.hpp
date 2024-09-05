#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AIPatrolPath
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/AIPatrolPath.EAIPatrolPathVersion
	enum EAIPatrolPathVersion
	{
		EAIPatrolPathVersion__InitialVersion = 0,
		EAIPatrolPathVersion__TemplateFromQuickBarVersion = 1,
		EAIPatrolPathVersion__PatrolPointMovedToUserSettingsVersion = 2,
		EAIPatrolPathVersion__VersionPlusOne = 3,
		EAIPatrolPathVersion__LatestVersion = 2,
	};


	// Enum /Script/AIPatrolPath.SegmentPathStatus
	enum SegmentPathStatus
	{
		SegmentPathStatus__INVALID = 0,
		SegmentPathStatus__CALCULATING = 1,
		SegmentPathStatus__RECALCULATING_PENDING = 2,
		SegmentPathStatus__PATH_FAILED = 3,
		SegmentPathStatus__PATH_SUCCESS = 4,
	};

}
