#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BlendStack
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct BlendStack.BlendStackAnimNodeReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FBlendStackAnimNodeReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct BlendStack.BlendStackInputAnimNodeReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FBlendStackInputAnimNodeReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct BlendStack.BlendStackAnimPlayer
	// Size: 0x388 (0x388 - 0x0)
	struct FBlendStackAnimPlayer	
	{
	public:
		unsigned char UnknownData00_7[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
		FAnimNode_SequencePlayer_Standalone SequencePlayerNode; // 0x20(0x90)
		FAnimNode_BlendSpacePlayer_Standalone BlendSpacePlayerNode; // 0xB0(0x90)
		FAnimNode_Mirror_Standalone MirrorNode; // 0x140(0x60)
		unsigned char UnknownData01_7[0x1E8]; // 0x1A0(0x1E8) UNKNOWN PROPERTY
	};


	// Struct BlendStack.AnimNode_BlendStack_Standalone
	// Inherited from FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x88 (0xC0 - 0x38)
	struct FAnimNode_BlendStack_Standalone : public FAnimNode_AssetPlayerBase	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
		TArray<FPoseLink> PerSampleGraphPoseLinks; // 0x48(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		TArray<FBlendStackAnimPlayer> AnimPlayers; // 0x60(0x10)
		bool bShouldFilterNotifies; // 0x70(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		UObject* StitchDatabase; // 0x78(0x8)
		float StitchBlendTime; // 0x80(0x4)
		float StitchBlendMaxCost; // 0x84(0x4)
		int32_t MaxActiveBlends; // 0x88(0x4)
		bool bStoreBlendedPose; // 0x8C(0x1)
		unsigned char UnknownData03_6[0x23]; // 0x8D(0x23) UNKNOWN PROPERTY
		float NotifyRecencyTimeOut; // 0xB0(0x4)
		float MaxBlendInTimeToOverrideAnimation; // 0xB4(0x4)
		float PlayerDepthBlendInTimeMultiplier; // 0xB8(0x4)
		unsigned char UnknownData04_7[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
	};


	// Struct BlendStack.AnimNode_BlendStack
	// Inherited from FAnimNode_BlendStack_Standalone -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x70 (0x130 - 0xC0)
	struct FAnimNode_BlendStack : public FAnimNode_BlendStack_Standalone	
	{
	public:
		UAnimationAsset* AnimationAsset; // 0xC0(0x8)
		float AnimationTime; // 0xC8(0x4)
		float ActivationDelayTime; // 0xCC(0x4)
		bool bLoop; // 0xD0(0x1)
		bool bMirrored; // 0xD1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xD2(0x2) UNKNOWN PROPERTY
		float WantedPlayRate; // 0xD4(0x4)
		float BlendTime; // 0xD8(0x4)
		float MaxAnimationDeltaTime; // 0xDC(0x4)
		UBlendProfile* BlendProfile; // 0xE0(0x8)
		EAlphaBlendOption BlendOption; // 0xE8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY
		FVector BlendParameters; // 0xF0(0x18)
		UMirrorDataTable* MirrorDataTable; // 0x108(0x8)
		bool bUseInertialBlend; // 0x110(0x1)
		bool bResetOnBecomingRelevant; // 0x111(0x1)
		unsigned char UnknownData02_7[0x1E]; // 0x112(0x1E) UNKNOWN PROPERTY
	};


	// Struct BlendStack.AnimNode_BlendStackInput
	// Inherited from FAnimNode_Base
	// Size: 0x18 (0x28 - 0x10)
	struct FAnimNode_BlendStackInput : public FAnimNode_Base	
	{
	public:
		int32_t SampleIndex; // 0x10(0x4)
		int32_t BlendStackAllocationIndex; // 0x14(0x4)
		bool bOverridePlayRate; // 0x18(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		float PlayRate; // 0x1C(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
	};

}
