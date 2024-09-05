#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksMusicPlayspaceRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SparksMusicPlayspaceRuntime.SparksPlayspaceInteractor
	// Size: 0x20 (0x20 - 0x0)
	struct FSparksPlayspaceInteractor	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		bool bIsValidInteractor; // 0x8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		UObject* Object; // 0x10(0x8)
		AActor* AddedForActor; // 0x18(0x8)
	};


	// Struct SparksMusicPlayspaceRuntime.SparksPlayspaceMusicPlayer
	// Inherited from FSparksPlayspaceInteractor
	// Size: 0x8 (0x28 - 0x20)
	struct FSparksPlayspaceMusicPlayer : public FSparksPlayspaceInteractor	
	{
	public:
		bool bIsValidMusicPlayer; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct SparksMusicPlayspaceRuntime.SparksServerPerfMemSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FSparksServerPerfMemSettings	
	{
	public:
		FString GamePhaseName; // 0x0(0x10)
		bool bPeriodicCaptures; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		int32_t PeriodicCaptureCount; // 0x14(0x4)
		int32_t PeriodicCapturePeriodInSeconds; // 0x18(0x4)
		int32_t PeriodicCaptureMinDelayInSeconds; // 0x1C(0x4)
	};


	// Struct SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_KeyChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FSparksPlayspaceEvent_KeyChanged	
	{
	public:
		EMusicKey Key; // 0x0(0x1)
	};


	// Struct SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_KeyModeChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FSparksPlayspaceEvent_KeyModeChanged	
	{
	public:
		EMusicKeyMode KeyMode; // 0x0(0x1)
	};


	// Struct SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_TempoChanged
	// Size: 0x4 (0x4 - 0x0)
	struct FSparksPlayspaceEvent_TempoChanged	
	{
	public:
		int32_t Tempo; // 0x0(0x4)
	};


	// Struct SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_OnBeat
	// Size: 0x8 (0x8 - 0x0)
	struct FSparksPlayspaceEvent_OnBeat	
	{
	public:
		int32_t BeatNumber; // 0x0(0x4)
		int32_t BeatInBar; // 0x4(0x4)
	};


	// Struct SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_OnMeasure
	// Size: 0x4 (0x4 - 0x0)
	struct FSparksPlayspaceEvent_OnMeasure	
	{
	public:
		int32_t MeasureNumber; // 0x0(0x4)
	};

}
