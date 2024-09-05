#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ServerRollQuestsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ServerRollQuestsRuntime.ServerRollQuestTableRow
	// Inherited from FTableRowBase
	// Size: 0x68 (0x70 - 0x8)
	struct FServerRollQuestTableRow : public FTableRowBase	
	{
	public:
		TScriptInterface<Class> Quest; // 0x8(0x10)
		FGameplayTag Bucket; // 0x18(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery PlaylistQuery; // 0x20(0x48)
		float Weight; // 0x68(0x4)
		bool bZeroWeightOverride : 1; // 0x6C:0(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
	};

}
