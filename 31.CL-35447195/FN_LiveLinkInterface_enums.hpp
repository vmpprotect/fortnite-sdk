#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LiveLinkInterface
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/LiveLinkInterface.ELiveLinkSubjectState
	enum ELiveLinkSubjectState
	{
		ELiveLinkSubjectState__Connected = 0,
		ELiveLinkSubjectState__Unresponsive = 1,
		ELiveLinkSubjectState__Disconnected = 2,
		ELiveLinkSubjectState__InvalidOrDisabled = 3,
		ELiveLinkSubjectState__Unknown = 4,
	};


	// Enum /Script/LiveLinkInterface.ELiveLinkCameraProjectionMode
	enum ELiveLinkCameraProjectionMode
	{
		ELiveLinkCameraProjectionMode__Perspective = 0,
		ELiveLinkCameraProjectionMode__Orthographic = 1,
	};


	// Enum /Script/LiveLinkInterface.ELiveLinkSourceMode
	enum ELiveLinkSourceMode
	{
		ELiveLinkSourceMode__Latest = 0,
		ELiveLinkSourceMode__EngineTime = 1,
		ELiveLinkSourceMode__Timecode = 2,
	};

}
