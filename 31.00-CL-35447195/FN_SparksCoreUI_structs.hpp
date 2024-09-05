#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksCoreUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct SparksCoreUI.DynamicUISceneRequest
	// Size: 0x10 (0x10 - 0x0)
	struct FDynamicUISceneRequest	
	{
	public:
		UObject Requester; // 0x0(0x8)
		UDynamicUIScene Scene; // 0x8(0x8)
	};


	// Struct SparksCoreUI.DynamicUISceneRequestData
	// Size: 0x18 (0x18 - 0x0)
	struct FDynamicUISceneRequestData	
	{
	public:
		FDynamicUISceneRequest Request; // 0x0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct SparksCoreUI.DynamicUISceneRequestHandle
	// Size: 0x10 (0x10 - 0x0)
	struct FDynamicUISceneRequestHandle	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct SparksCoreUI.SparksQuestScreenToggleEvent
	// Size: 0x1 (0x1 - 0x0)
	struct FSparksQuestScreenToggleEvent	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};

}
