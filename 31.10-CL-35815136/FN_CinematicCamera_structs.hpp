#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CinematicCamera
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CinematicCamera.CameraFocusSettings
	// Size: 0x58 (0x58 - 0x0)
	struct FCameraFocusSettings	
	{
	public:
		ECameraFocusMethod FocusMethod; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float ManualFocusDistance; // 0x4(0x4)
		FCameraTrackingFocusSettings TrackingFocusSettings; // 0x8(0x40)
		bool bSmoothFocusChanges : 1; // 0x48:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		float FocusSmoothingInterpSpeed; // 0x4C(0x4)
		float FocusOffset; // 0x50(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
	};


	// Struct CinematicCamera.CameraTrackingFocusSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FCameraTrackingFocusSettings	
	{
	public:
		TWeakObjectPtr<AActor*> ActorToTrack; // 0x0(0x20)
		FVector RelativeOffset; // 0x20(0x18)
		bool bDrawDebugTrackingFocusPoint : 1; // 0x38:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct CinematicCamera.CameraLensSettings
	// Size: 0x1C (0x1C - 0x0)
	struct FCameraLensSettings	
	{
	public:
		float MinFocalLength; // 0x0(0x4)
		float MaxFocalLength; // 0x4(0x4)
		float MinFStop; // 0x8(0x4)
		float MaxFStop; // 0xC(0x4)
		float MinimumFocusDistance; // 0x10(0x4)
		float SqueezeFactor; // 0x14(0x4)
		int32_t DiaphragmBladeCount; // 0x18(0x4)
	};


	// Struct CinematicCamera.CameraFilmbackSettings
	// Size: 0xC (0xC - 0x0)
	struct FCameraFilmbackSettings	
	{
	public:
		float SensorWidth; // 0x0(0x4)
		float SensorHeight; // 0x4(0x4)
		float SensorAspectRatio; // 0x8(0x4)
	};


	// Struct CinematicCamera.CameraLookatTrackingSettings
	// Size: 0x60 (0x60 - 0x0)
	struct FCameraLookatTrackingSettings	
	{
	public:
		bool bEnableLookAtTracking : 1; // 0x0:0(0x1)
		bool bDrawDebugLookAtTrackingPosition : 1; // 0x0:1(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float LookAtTrackingInterpSpeed; // 0x4(0x4)
		unsigned char UnknownData01_6[0x18]; // 0x8(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> ActorToTrack; // 0x20(0x20)
		FVector RelativeOffset; // 0x40(0x18)
		bool bAllowRoll : 1; // 0x58:0(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
	};


	// Struct CinematicCamera.NamedFilmbackPreset
	// Size: 0x20 (0x20 - 0x0)
	struct FNamedFilmbackPreset	
	{
	public:
		FString Name; // 0x0(0x10)
		FCameraFilmbackSettings FilmbackSettings; // 0x10(0xC)
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct CinematicCamera.NamedLensPreset
	// Size: 0x30 (0x30 - 0x0)
	struct FNamedLensPreset	
	{
	public:
		FString Name; // 0x0(0x10)
		FCameraLensSettings LensSettings; // 0x10(0x1C)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct CinematicCamera.PlateCropSettings
	// Size: 0x4 (0x4 - 0x0)
	struct FPlateCropSettings	
	{
	public:
		float AspectRatio; // 0x0(0x4)
	};


	// Struct CinematicCamera.NamedPlateCropPreset
	// Size: 0x18 (0x18 - 0x0)
	struct FNamedPlateCropPreset	
	{
	public:
		FString Name; // 0x0(0x10)
		FPlateCropSettings CropSettings; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};

}
