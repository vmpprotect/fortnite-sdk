#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AIPatrolPath
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
