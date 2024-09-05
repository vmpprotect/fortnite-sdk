#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MovieSceneCapture
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UMovieSceneCaptureProtocolBase : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x28]; // 0x28(0x28) UNKNOWN PROPERTY
		EMovieSceneCaptureProtocolState State; // 0x50(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.MovieSceneCaptureProtocolBase");
			return ret;
		}

		bool IsCapturing(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D4C78
		EMovieSceneCaptureProtocolState GetState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D4B98
	};


	// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
	// Inherited from UMovieSceneCaptureProtocolBase -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.MovieSceneAudioCaptureProtocolBase");
			return ret;
		}
	};


	// Class MovieSceneCapture.NullAudioCaptureProtocol
	// Inherited from UMovieSceneAudioCaptureProtocolBase -> UMovieSceneCaptureProtocolBase -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.NullAudioCaptureProtocol");
			return ret;
		}
	};


	// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
	// Inherited from UMovieSceneAudioCaptureProtocolBase -> UMovieSceneCaptureProtocolBase -> UObject
	// Size: 0x38 (0x90 - 0x58)
	class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase	
	{
	public:
		FString Filename; // 0x58(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x68(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.MasterAudioSubmixCaptureProtocol");
			return ret;
		}
	};


	// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
	// Inherited from UMovieSceneCaptureProtocolBase -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.MovieSceneImageCaptureProtocolBase");
			return ret;
		}
	};


	// Class MovieSceneCapture.CompositionGraphCaptureProtocol
	// Inherited from UMovieSceneImageCaptureProtocolBase -> UMovieSceneCaptureProtocolBase -> UObject
	// Size: 0x68 (0xC0 - 0x58)
	class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase	
	{
	public:
		FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58(0x10)
		bool bCaptureFramesInHDR; // 0x68(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		int32_t HDRCompressionQuality; // 0x6C(0x4)
		TEnumAsByte CaptureGamut; // 0x70(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		FSoftObjectPath PostProcessingMaterial; // 0x78(0x18)
		bool bDisableScreenPercentage; // 0x90(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		UMaterialInterface PostProcessingMaterialPtr; // 0x98(0x8)
		unsigned char UnknownData07_7[0x20]; // 0xA0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.CompositionGraphCaptureProtocol");
			return ret;
		}
	};


	// Class MovieSceneCapture.MovieSceneCaptureInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneCaptureInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.MovieSceneCaptureInterface");
			return ret;
		}
	};


	// Class MovieSceneCapture.FrameGrabberProtocol
	// Inherited from UMovieSceneImageCaptureProtocolBase -> UMovieSceneCaptureProtocolBase -> UObject
	// Size: 0x10 (0x68 - 0x58)
	class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x58(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.FrameGrabberProtocol");
			return ret;
		}
	};


	// Class MovieSceneCapture.ImageSequenceProtocol
	// Inherited from UFrameGrabberProtocol -> UMovieSceneImageCaptureProtocolBase -> UMovieSceneCaptureProtocolBase -> UObject
	// Size: 0x70 (0xD8 - 0x68)
	class UImageSequenceProtocol : public UFrameGrabberProtocol	
	{
	public:
		unsigned char UnknownData01_1[0x70]; // 0x68(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.ImageSequenceProtocol");
			return ret;
		}
	};


	// Class MovieSceneCapture.CompressedImageSequenceProtocol
	// Inherited from UImageSequenceProtocol -> UFrameGrabberProtocol -> UMovieSceneImageCaptureProtocolBase -> UMovieSceneCaptureProtocolBase -> UObject
	// Size: 0x8 (0xE0 - 0xD8)
	class UCompressedImageSequenceProtocol : public UImageSequenceProtocol	
	{
	public:
		int32_t CompressionQuality; // 0xD8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.CompressedImageSequenceProtocol");
			return ret;
		}
	};


	// Class MovieSceneCapture.ImageSequenceProtocol_BMP
	// Inherited from UImageSequenceProtocol -> UFrameGrabberProtocol -> UMovieSceneImageCaptureProtocolBase -> UMovieSceneCaptureProtocolBase -> UObject
	// Size: 0x0 (0xD8 - 0xD8)
	class UImageSequenceProtocol_BMP : public UImageSequenceProtocol	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.ImageSequenceProtocol_BMP");
			return ret;
		}
	};


	// Class MovieSceneCapture.ImageSequenceProtocol_PNG
	// Inherited from UCompressedImageSequenceProtocol -> UImageSequenceProtocol -> UFrameGrabberProtocol -> UMovieSceneImageCaptureProtocolBase -> UMovieSceneCaptureProtocolBase -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.ImageSequenceProtocol_PNG");
			return ret;
		}
	};


	// Class MovieSceneCapture.ImageSequenceProtocol_JPG
	// Inherited from UCompressedImageSequenceProtocol -> UImageSequenceProtocol -> UFrameGrabberProtocol -> UMovieSceneImageCaptureProtocolBase -> UMovieSceneCaptureProtocolBase -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.ImageSequenceProtocol_JPG");
			return ret;
		}
	};


	// Class MovieSceneCapture.ImageSequenceProtocol_EXR
	// Inherited from UImageSequenceProtocol -> UFrameGrabberProtocol -> UMovieSceneImageCaptureProtocolBase -> UMovieSceneCaptureProtocolBase -> UObject
	// Size: 0x10 (0xE8 - 0xD8)
	class UImageSequenceProtocol_EXR : public UImageSequenceProtocol	
	{
	public:
		bool bCompressed; // 0xD8(0x1)
		TEnumAsByte CaptureGamut; // 0xD9(0x1)
		unsigned char UnknownData01_7[0xE]; // 0xDA(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.ImageSequenceProtocol_EXR");
			return ret;
		}
	};


	// Class MovieSceneCapture.MovieSceneCapture
	// Inherited from UObject
	// Size: 0x200 (0x228 - 0x28)
	class UMovieSceneCapture : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		FSoftClassPath ImageCaptureProtocolType; // 0x38(0x18)
		FSoftClassPath AudioCaptureProtocolType; // 0x50(0x18)
		UMovieSceneImageCaptureProtocolBase ImageCaptureProtocol; // 0x68(0x8)
		UMovieSceneAudioCaptureProtocolBase AudioCaptureProtocol; // 0x70(0x8)
		FMovieSceneCaptureSettings Settings; // 0x78(0x70)
		bool bUseSeparateProcess; // 0xE8(0x1)
		bool bCloseEditorWhenCaptureStarts; // 0xE9(0x1)
		unsigned char UnknownData04_6[0x6]; // 0xEA(0x6) UNKNOWN PROPERTY
		FString AdditionalCommandLineArguments; // 0xF0(0x10)
		FString InheritedCommandLineArguments; // 0x100(0x10)
		unsigned char UnknownData05_7[0x118]; // 0x110(0x118) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.MovieSceneCapture");
			return ret;
		}

		void SetImageCaptureProtocolType(UClass ProtocolType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D4FF8
		void SetAudioCaptureProtocolType(UClass ProtocolType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D4F18
		UMovieSceneCaptureProtocolBase GetImageCaptureProtocol(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144D4E38
		UMovieSceneCaptureProtocolBase GetAudioCaptureProtocol(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144D4D58
	};


	// Class MovieSceneCapture.LevelCapture
	// Inherited from UMovieSceneCapture -> UObject
	// Size: 0x20 (0x248 - 0x228)
	class ULevelCapture : public UMovieSceneCapture	
	{
	public:
		bool bAutoStartCapture; // 0x228(0x1)
		unsigned char UnknownData02_6[0xB]; // 0x229(0xB) UNKNOWN PROPERTY
		FGuid PrerequisiteActorId; // 0x234(0x10)
		unsigned char UnknownData03_7[0x4]; // 0x244(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.LevelCapture");
			return ret;
		}
	};


	// Class MovieSceneCapture.MovieSceneCaptureEnvironment
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneCaptureEnvironment : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.MovieSceneCaptureEnvironment");
			return ret;
		}

		bool IsCaptureInProgress(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144D5458
		int32_t GetCaptureFrameNumber(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144D5378
		float GetCaptureElapsedTime(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144D5298
		UMovieSceneImageCaptureProtocolBase FindImageCaptureProtocol(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144D51B8
		UMovieSceneAudioCaptureProtocolBase FindAudioCaptureProtocol(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144D50D8
	};


	// Class MovieSceneCapture.UserDefinedCaptureProtocol
	// Inherited from UMovieSceneImageCaptureProtocolBase -> UMovieSceneCaptureProtocolBase -> UObject
	// Size: 0x80 (0xD8 - 0x58)
	class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase	
	{
	public:
		UWorld World; // 0x58(0x8)
		unsigned char UnknownData01_7[0x78]; // 0x60(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.UserDefinedCaptureProtocol");
			return ret;
		}

		void StopCapturingFinalPixels(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D6258
		void StartCapturingFinalPixels(FCapturedPixelsID& StreamID); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D6178
		void ResolveBuffer(UTexture Buffer, FCapturedPixelsID& BufferID); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D6098
		void OnWarmUp(); // Flags: RequiredAPI|Event|Protected|BlueprintEvent 0x7FF4144D5FB8
		void OnTick(); // Flags: RequiredAPI|Event|Protected|BlueprintEvent 0x7FF4144D5ED8
		void OnStartCapture(); // Flags: RequiredAPI|Event|Protected|BlueprintEvent 0x7FF4144D5DF8
		bool OnSetup(); // Flags: RequiredAPI|Native|Event|Protected|BlueprintEvent 0x7FF4144D5D18
		void OnPreTick(); // Flags: RequiredAPI|Event|Protected|BlueprintEvent 0x7FF4144D5C38
		void OnPixelsReceived(FCapturedPixels& Pixels, FCapturedPixelsID& ID, FFrameMetrics FrameMetrics); // Flags: RequiredAPI|Event|Protected|HasOutParms|BlueprintEvent 0x7FF4144D5B58
		void OnPauseCapture(); // Flags: RequiredAPI|Event|Protected|BlueprintEvent 0x7FF4144D5A78
		void OnFinalize(); // Flags: RequiredAPI|Event|Protected|BlueprintEvent 0x7FF4144D5998
		void OnCaptureFrame(); // Flags: RequiredAPI|Event|Protected|BlueprintEvent 0x7FF4144D58B8
		bool OnCanFinalize(); // Flags: RequiredAPI|Native|Event|Protected|BlueprintEvent|Const 0x7FF4144D57D8
		void OnBeginFinalize(); // Flags: RequiredAPI|Event|Protected|BlueprintEvent 0x7FF4144D56F8
		FFrameMetrics GetCurrentFrameMetrics(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D5618
		FString GenerateFilename(FFrameMetrics& InFrameMetrics); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4144D5538
	};


	// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
	// Inherited from UUserDefinedCaptureProtocol -> UMovieSceneImageCaptureProtocolBase -> UMovieSceneCaptureProtocolBase -> UObject
	// Size: 0x8 (0xE0 - 0xD8)
	class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol	
	{
	public:
		EDesiredImageFormat Format; // 0xD8(0x1)
		bool bEnableCompression; // 0xD9(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xDA(0x2) UNKNOWN PROPERTY
		int32_t CompressionQuality; // 0xDC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.UserDefinedImageCaptureProtocol");
			return ret;
		}

		void WriteImageToDisk(FCapturedPixels& PixelData, FCapturedPixelsID& StreamID, FFrameMetrics& FrameMetrics, bool bCopyImageData); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D64F8
		FString GenerateFilenameForCurrentFrame(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D6418
		FString GenerateFilenameForBuffer(UTexture Buffer, FCapturedPixelsID& StreamID); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D6338
	};


	// Class MovieSceneCapture.VideoCaptureProtocol
	// Inherited from UFrameGrabberProtocol -> UMovieSceneImageCaptureProtocolBase -> UMovieSceneCaptureProtocolBase -> UObject
	// Size: 0x18 (0x80 - 0x68)
	class UVideoCaptureProtocol : public UFrameGrabberProtocol	
	{
	public:
		bool bUseCompression; // 0x68(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		float CompressionQuality; // 0x6C(0x4)
		unsigned char UnknownData03_7[0x10]; // 0x70(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneCapture.VideoCaptureProtocol");
			return ret;
		}
	};

}
