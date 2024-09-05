#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MovieSceneCapture
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MovieSceneCapture.CompositionGraphCapturePasses
	// Size: 0x10 (0x10 - 0x0)
	struct FCompositionGraphCapturePasses	
	{
	public:
		TArray<FString> Value; // 0x0(0x10)
	};


	// Struct MovieSceneCapture.CaptureResolution
	// Size: 0x8 (0x8 - 0x0)
	struct FCaptureResolution	
	{
	public:
		int32_t ResX; // 0x0(0x4)
		int32_t ResY; // 0x4(0x4)
	};


	// Struct MovieSceneCapture.MovieSceneCaptureSettings
	// Size: 0x70 (0x70 - 0x0)
	struct FMovieSceneCaptureSettings	
	{
	public:
		FDirectoryPath OutputDirectory; // 0x0(0x10)
		UClass* GameModeOverride; // 0x10(0x8)
		FString OutputFormat; // 0x18(0x10)
		bool bOverwriteExisting; // 0x28(0x1)
		bool bUseRelativeFrameNumbers; // 0x29(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		int32_t HandleFrames; // 0x2C(0x4)
		FString MovieExtension; // 0x30(0x10)
		char ZeroPadFrameNumbers; // 0x40(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		FFrameRate FrameRate; // 0x44(0x8)
		bool bUseCustomFrameRate; // 0x4C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		FFrameRate CustomFrameRate; // 0x50(0x8)
		FCaptureResolution Resolution; // 0x58(0x8)
		bool bEnableTextureStreaming; // 0x60(0x1)
		bool bCinematicEngineScalability; // 0x61(0x1)
		bool bCinematicMode; // 0x62(0x1)
		bool bAllowMovement; // 0x63(0x1)
		bool bAllowTurning; // 0x64(0x1)
		bool bShowPlayer; // 0x65(0x1)
		bool bShowHUD; // 0x66(0x1)
		bool bUsePathTracer; // 0x67(0x1)
		int32_t PathTracerSamplePerPixel; // 0x68(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct MovieSceneCapture.FrameMetrics
	// Size: 0x10 (0x10 - 0x0)
	struct FFrameMetrics	
	{
	public:
		float TotalElapsedTime; // 0x0(0x4)
		float FrameDelta; // 0x4(0x4)
		int32_t FrameNumber; // 0x8(0x4)
		int32_t NumDroppedFrames; // 0xC(0x4)
	};


	// Struct MovieSceneCapture.CapturedPixelsID
	// Size: 0x50 (0x50 - 0x0)
	struct FCapturedPixelsID	
	{
	public:
		TMap<FName, FName> Identifiers; // 0x0(0x50)
	};


	// Struct MovieSceneCapture.CapturedPixels
	// Size: 0x10 (0x10 - 0x0)
	struct FCapturedPixels	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};

}
