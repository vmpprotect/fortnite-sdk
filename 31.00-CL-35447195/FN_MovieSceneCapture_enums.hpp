#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MovieSceneCapture
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/MovieSceneCapture.EHDRCaptureGamut
	enum EHDRCaptureGamut
	{
		HCGM_Rec709 = 0,
		HCGM_P3DCI = 1,
		HCGM_Rec2020 = 2,
		HCGM_ACES = 3,
		HCGM_ACEScg = 4,
		HCGM_Linear = 5,
	};


	// Enum /Script/MovieSceneCapture.EMovieSceneCaptureProtocolState
	enum EMovieSceneCaptureProtocolState
	{
		EMovieSceneCaptureProtocolState__Idle = 0,
		EMovieSceneCaptureProtocolState__Initialized = 1,
		EMovieSceneCaptureProtocolState__Capturing = 2,
		EMovieSceneCaptureProtocolState__Finalizing = 3,
	};

}
