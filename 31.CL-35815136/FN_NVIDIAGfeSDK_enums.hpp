#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NVIDIAGfeSDK
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/NVIDIAGfeSDK.EGfeSDKReturnCode
	enum EGfeSDKReturnCode
	{
		EGfeSDKReturnCode__Success = 0,
		EGfeSDKReturnCode__SuccessIpcOldSdk = 1,
		EGfeSDKReturnCode__SuccessIpcOldGfe = 2,
		EGfeSDKReturnCode__Error = 3,
		EGfeSDKReturnCode__ErrorGfeVersion = 4,
		EGfeSDKReturnCode__ErrorSdkVersion = 5,
		EGfeSDKReturnCode__ErrorModuleNotLoaded = 6,
	};


	// Enum /Script/NVIDIAGfeSDK.EGfeSDKScope
	enum EGfeSDKScope
	{
		EGfeSDKScope__Highlights = 0,
		EGfeSDKScope__HighlightsRecordVideo = 1,
		EGfeSDKScope__HighlightsRecordScreenshot = 2,
	};


	// Enum /Script/NVIDIAGfeSDK.EGfeSDKPermission
	enum EGfeSDKPermission
	{
		EGfeSDKPermission__Granted = 0,
		EGfeSDKPermission__Denied = 1,
		EGfeSDKPermission__MustAsk = 2,
		EGfeSDKPermission__Unknown = 3,
	};


	// Enum /Script/NVIDIAGfeSDK.EGfeSDKHighlightType
	enum EGfeSDKHighlightType
	{
		EGfeSDKHighlightType__NONE = 0,
		EGfeSDKHighlightType__Milestone = 1,
		EGfeSDKHighlightType__Achievement = 2,
		EGfeSDKHighlightType__Incident = 4,
		EGfeSDKHighlightType__StateChange = 8,
	};


	// Enum /Script/NVIDIAGfeSDK.EGfeSDKHighlightSignificance
	enum EGfeSDKHighlightSignificance
	{
		EGfeSDKHighlightSignificance__NONE = 0,
		EGfeSDKHighlightSignificance__ExtremelyBad = 1,
		EGfeSDKHighlightSignificance__VeryBad = 2,
		EGfeSDKHighlightSignificance__Bad = 4,
		EGfeSDKHighlightSignificance__Neutral = 8,
		EGfeSDKHighlightSignificance__Good = 10,
		EGfeSDKHighlightSignificance__VeryGood = 20,
		EGfeSDKHighlightSignificance__ExtremelyGood = 40,
	};

}
