#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LiveLinkAnimationCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct LiveLinkAnimationCore.AnimNode_LiveLinkPose
	// Inherited from FAnimNode_Base
	// Size: 0x50 (0x60 - 0x10)
	struct FAnimNode_LiveLinkPose : public FAnimNode_Base	
	{
	public:
		FPoseLink InputPose; // 0x10(0x10)
		FLiveLinkSubjectName LiveLinkSubjectName; // 0x20(0x4)
		bool bDoLiveLinkEvaluation; // 0x24(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		UClass RetargetAsset; // 0x28(0x8)
		ULiveLinkRetargetAsset CurrentRetargetAsset; // 0x30(0x8)
		unsigned char UnknownData03_7[0x28]; // 0x38(0x28) UNKNOWN PROPERTY
	};


	// Struct LiveLinkAnimationCore.LiveLinkInstanceProxy
	// Inherited from FAnimInstanceProxy
	// Size: 0x68 (0x800 - 0x798)
	struct FLiveLinkInstanceProxy : public FAnimInstanceProxy	
	{
	public:
		FAnimNode_LiveLinkPose PoseNode; // 0x798(0x60)
		unsigned char UnknownData01_7[0x8]; // 0x7F8(0x8) UNKNOWN PROPERTY
	};

}
