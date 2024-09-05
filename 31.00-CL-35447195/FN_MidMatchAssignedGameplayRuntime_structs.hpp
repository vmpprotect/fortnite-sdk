#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MidMatchAssignedGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MidMatchAssignedGameplayRuntime.FortAssignedObjectiveSquadData
	// Size: 0x20 (0x20 - 0x0)
	struct FFortAssignedObjectiveSquadData	
	{
	public:
		char SquadID; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector CachedSquadAvgLocation; // 0x8(0x18)
	};


	// Struct MidMatchAssignedGameplayRuntime.FortAssignedObjectiveData
	// Size: 0x28 (0x28 - 0x0)
	struct FFortAssignedObjectiveData	
	{
	public:
		TArray AssignedSquadDataArray; // 0x0(0x10)
		FVector ObjectiveLocation; // 0x10(0x18)
	};

}
