#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MediaAssets
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/MediaAssets.MediaTextureOutputFormat
	enum MediaTextureOutputFormat
	{
		MTOF_Default = 0,
		MTOF_SRGB_LINOUT = 1,
	};


	// Enum /Script/MediaAssets.MediaTextureOrientation
	enum MediaTextureOrientation
	{
		MTORI_Original = 0,
		MTORI_CW90 = 1,
		MTORI_CW180 = 2,
		MTORI_CW270 = 3,
	};


	// Enum /Script/MediaAssets.EMediaPlayerTrack
	enum EMediaPlayerTrack
	{
		EMediaPlayerTrack__Audio = 0,
		EMediaPlayerTrack__Caption = 1,
		EMediaPlayerTrack__Metadata = 2,
		EMediaPlayerTrack__Script = 3,
		EMediaPlayerTrack__Subtitle = 4,
		EMediaPlayerTrack__Text = 5,
		EMediaPlayerTrack__Video = 6,
	};


	// Enum /Script/MediaAssets.EMediaTimeRangeBPType
	enum EMediaTimeRangeBPType
	{
		EMediaTimeRangeBPType__Absolute = 0,
		EMediaTimeRangeBPType__Current = 1,
	};


	// Enum /Script/MediaAssets.EMediaSoundChannels
	enum EMediaSoundChannels
	{
		EMediaSoundChannels__Mono = 0,
		EMediaSoundChannels__Stereo = 1,
		EMediaSoundChannels__Surround = 2,
	};


	// Enum /Script/MediaAssets.EMediaSoundComponentFFTSize
	enum EMediaSoundComponentFFTSize
	{
		EMediaSoundComponentFFTSize__Min = 0,
		EMediaSoundComponentFFTSize__Small = 1,
		EMediaSoundComponentFFTSize__Medium = 2,
		EMediaSoundComponentFFTSize__Large = 3,
	};


	// Enum /Script/MediaAssets.EMediaTextureVisibleMipsTiles
	enum EMediaTextureVisibleMipsTiles
	{
		EMediaTextureVisibleMipsTiles__None = 0,
		EMediaTextureVisibleMipsTiles__Plane = 1,
		EMediaTextureVisibleMipsTiles__Sphere = 2,
	};


	// Enum /Script/MediaAssets.EMediaAudioCaptureDeviceFilter
	enum EMediaAudioCaptureDeviceFilter
	{
		EMediaAudioCaptureDeviceFilter__None = 0,
		EMediaAudioCaptureDeviceFilter__Card = 1,
		EMediaAudioCaptureDeviceFilter__Microphone = 2,
		EMediaAudioCaptureDeviceFilter__Software = 4,
		EMediaAudioCaptureDeviceFilter__Unknown = 8,
	};


	// Enum /Script/MediaAssets.EMediaVideoCaptureDeviceFilter
	enum EMediaVideoCaptureDeviceFilter
	{
		EMediaVideoCaptureDeviceFilter__None = 0,
		EMediaVideoCaptureDeviceFilter__Card = 1,
		EMediaVideoCaptureDeviceFilter__Software = 2,
		EMediaVideoCaptureDeviceFilter__Unknown = 4,
		EMediaVideoCaptureDeviceFilter__Webcam = 8,
	};


	// Enum /Script/MediaAssets.EMediaWebcamCaptureDeviceFilter
	enum EMediaWebcamCaptureDeviceFilter
	{
		EMediaWebcamCaptureDeviceFilter__None = 0,
		EMediaWebcamCaptureDeviceFilter__DepthSensor = 1,
		EMediaWebcamCaptureDeviceFilter__Front = 2,
		EMediaWebcamCaptureDeviceFilter__Rear = 4,
		EMediaWebcamCaptureDeviceFilter__Unknown = 8,
	};

}
