#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BeatSyncedAnimRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct BeatSyncedAnimRuntime.AnimNode_PlayBeatSyncedAnim
	// Inherited from FAnimNode_SequenceEvaluator -> FAnimNode_SequenceEvaluatorBase -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x60 (0xA0 - 0x40)
	struct FAnimNode_PlayBeatSyncedAnim : public FAnimNode_SequenceEvaluator	
	{
	public:
		UAnimSequenceBase InSequence; // 0x40(0x8)
		FBeatAndTime BeatAndTime; // 0x48(0xC)
		float PreviewBPM; // 0x54(0x4)
		bool bAlwaysAllowPreviewBPM; // 0x58(0x1)
		ESyncAnimBeatTo SyncAnimBeatTo; // 0x59(0x1)
		EBeatSyncAnimNodeLogging Logging; // 0x5A(0x1)
		bool bSideloadedLipSync; // 0x5B(0x1)
		unsigned char UnknownData01_7[0x44]; // 0x5C(0x44) UNKNOWN PROPERTY
	};


	// Struct BeatSyncedAnimRuntime.BeatAndTime
	// Size: 0xC (0xC - 0x0)
	struct FBeatAndTime	
	{
	public:
		EGotBeatAndTimeFrom GotBeatTimeFrom; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Beat; // 0x4(0x4)
		float Time; // 0x8(0x4)
	};


	// Struct BeatSyncedAnimRuntime.FMontageBeatSyncInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FFMontageBeatSyncInfo	
	{
	public:
		float PlayRate; // 0x0(0x4)
		float Offset; // 0x4(0x4)
	};

}
