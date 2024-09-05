#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: KoalaUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/KoalaUI.EKoalaClipEventType
	enum EKoalaClipEventType
	{
		EKoalaClipEventType__Manual = 0,
		EKoalaClipEventType__Elimination = 1,
		EKoalaClipEventType__VictoryRoyale = 2,
		EKoalaClipEventType__Emote = 3,
		EKoalaClipEventType__COUNT = 4,
	};


	// Enum /Script/KoalaUI.EKoalaAvailability
	enum EKoalaAvailability
	{
		EKoalaAvailability__Pending = 0,
		EKoalaAvailability__NotAvailable = 1,
		EKoalaAvailability__Available = 2,
		EKoalaAvailability__COUNT = 3,
	};


	// Enum /Script/KoalaUI.EKoalaRecording
	enum EKoalaRecording
	{
		EKoalaRecording__Pending = 0,
		EKoalaRecording__NotRecording = 1,
		EKoalaRecording__Recording = 2,
		EKoalaRecording__COUNT = 3,
	};


	// Enum /Script/KoalaUI.EKoalaConnectionStatus
	enum EKoalaConnectionStatus
	{
		EKoalaConnectionStatus__Pending = 0,
		EKoalaConnectionStatus__NotConnected = 1,
		EKoalaConnectionStatus__Connected = 2,
		EKoalaConnectionStatus__COUNT = 3,
	};


	// Enum /Script/KoalaUI.EKoalaClipStatus
	enum EKoalaClipStatus
	{
		EKoalaClipStatus__None = 0,
		EKoalaClipStatus__Creating = 1,
		EKoalaClipStatus__Uploading = 2,
		EKoalaClipStatus__Completed = 3,
		EKoalaClipStatus__Failed = 4,
		EKoalaClipStatus__COUNT = 5,
	};


	// Enum /Script/KoalaUI.EKoalaMockClipMode
	enum EKoalaMockClipMode
	{
		EKoalaMockClipMode__None = 0,
		EKoalaMockClipMode__ShortSuccess = 1,
		EKoalaMockClipMode__ShortFailure = 2,
		EKoalaMockClipMode__LongSuccess = 3,
		EKoalaMockClipMode__LongFailure = 4,
		EKoalaMockClipMode__COUNT = 5,
	};

}
