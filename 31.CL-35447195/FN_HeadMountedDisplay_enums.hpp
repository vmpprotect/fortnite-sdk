#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HeadMountedDisplay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
	enum EOrientPositionSelector
	{
		EOrientPositionSelector__Orientation = 0,
		EOrientPositionSelector__Position = 1,
		EOrientPositionSelector__OrientationAndPosition = 2,
	};


	// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
	enum EHMDTrackingOrigin
	{
		EHMDTrackingOrigin__View = 0,
		EHMDTrackingOrigin__LocalFloor = 1,
		EHMDTrackingOrigin__Local = 2,
		EHMDTrackingOrigin__Stage = 3,
		EHMDTrackingOrigin__CustomOpenXR = 4,
	};


	// Enum /Script/HeadMountedDisplay.EHMDWornState
	enum EHMDWornState
	{
		EHMDWornState__Unknown = 0,
		EHMDWornState__Worn = 1,
		EHMDWornState__NotWorn = 2,
	};


	// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
	enum EXRDeviceConnectionResult
	{
		EXRDeviceConnectionResult__NoTrackingSystem = 0,
		EXRDeviceConnectionResult__FeatureNotSupported = 1,
		EXRDeviceConnectionResult__NoValidViewport = 2,
		EXRDeviceConnectionResult__MiscFailure = 3,
		EXRDeviceConnectionResult__Success = 4,
	};


	// Enum /Script/HeadMountedDisplay.EXRSystemFlags
	enum EXRSystemFlags
	{
		EXRSystemFlags__NoFlags = 0,
		EXRSystemFlags__IsAR = 1,
		EXRSystemFlags__IsTablet = 2,
		EXRSystemFlags__IsHeadMounted = 4,
		EXRSystemFlags__SupportsHandTracking = 8,
	};


	// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
	enum ESpectatorScreenMode
	{
		ESpectatorScreenMode__Disabled = 0,
		ESpectatorScreenMode__SingleEyeLetterboxed = 1,
		ESpectatorScreenMode__Undistorted = 2,
		ESpectatorScreenMode__Distorted = 3,
		ESpectatorScreenMode__SingleEye = 4,
		ESpectatorScreenMode__SingleEyeCroppedToFill = 5,
		ESpectatorScreenMode__Texture = 6,
		ESpectatorScreenMode__TexturePlusEye = 7,
	};


	// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
	enum EXRTrackedDeviceType
	{
		EXRTrackedDeviceType__HeadMountedDisplay = 0,
		EXRTrackedDeviceType__Controller = 1,
		EXRTrackedDeviceType__TrackingReference = 2,
		EXRTrackedDeviceType__Tracker = 3,
		EXRTrackedDeviceType__Other = 4,
		EXRTrackedDeviceType__Invalid = FE,
		EXRTrackedDeviceType__Any = FF,
	};


	// Enum /Script/HeadMountedDisplay.EHandKeypoint
	enum EHandKeypoint
	{
		EHandKeypoint__Palm = 0,
		EHandKeypoint__Wrist = 1,
		EHandKeypoint__ThumbMetacarpal = 2,
		EHandKeypoint__ThumbProximal = 3,
		EHandKeypoint__ThumbDistal = 4,
		EHandKeypoint__ThumbTip = 5,
		EHandKeypoint__IndexMetacarpal = 6,
		EHandKeypoint__IndexProximal = 7,
		EHandKeypoint__IndexIntermediate = 8,
		EHandKeypoint__IndexDistal = 9,
		EHandKeypoint__IndexTip = A,
		EHandKeypoint__MiddleMetacarpal = B,
		EHandKeypoint__MiddleProximal = C,
		EHandKeypoint__MiddleIntermediate = D,
		EHandKeypoint__MiddleDistal = E,
		EHandKeypoint__MiddleTip = F,
		EHandKeypoint__RingMetacarpal = 10,
		EHandKeypoint__RingProximal = 11,
		EHandKeypoint__RingIntermediate = 12,
		EHandKeypoint__RingDistal = 13,
		EHandKeypoint__RingTip = 14,
		EHandKeypoint__LittleMetacarpal = 15,
		EHandKeypoint__LittleProximal = 16,
		EHandKeypoint__LittleIntermediate = 17,
		EHandKeypoint__LittleDistal = 18,
		EHandKeypoint__LittleTip = 19,
	};


	// Enum /Script/HeadMountedDisplay.EXRVisualType
	enum EXRVisualType
	{
		EXRVisualType__Controller = 0,
		EXRVisualType__Hand = 1,
	};


	// Enum /Script/HeadMountedDisplay.ETrackingStatus
	enum ETrackingStatus
	{
		ETrackingStatus__NotTracked = 0,
		ETrackingStatus__InertialOnly = 1,
		ETrackingStatus__Tracked = 2,
	};

}
