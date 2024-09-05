#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LiveLink
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct LiveLink.LiveLinkRetargetAssetReference
	// Size: 0x1 (0x1 - 0x0)
	struct FLiveLinkRetargetAssetReference	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct LiveLink.LiveLinkVirtualSubjectBoneAttachment
	// Size: 0x58 (0x58 - 0x0)
	struct FLiveLinkVirtualSubjectBoneAttachment	
	{
	public:
		FLiveLinkSubjectName ParentSubject; // 0x0(0x4)
		FName ParentBone; // 0x4(0x4)
		FLiveLinkSubjectName ChildSubject; // 0x8(0x4)
		FName ChildBone; // 0xC(0x4)
		FVector LocationOffset; // 0x10(0x18)
		FRotator RotationOffset; // 0x28(0x18)
		bool bIgnoreParentLocation; // 0x40(0x1)
		bool bIgnoreParentRotation; // 0x41(0x1)
		unsigned char UnknownData00_7[0x16]; // 0x42(0x16) UNKNOWN PROPERTY
	};


	// Struct LiveLink.ProviderPollResult
	// Size: 0x90 (0x90 - 0x0)
	struct FProviderPollResult	
	{
	public:
		unsigned char UnknownData00_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		FString Name; // 0x10(0x10)
		FString MachineName; // 0x20(0x10)
		double MachineTimeOffset; // 0x30(0x8)
		bool bIsValidProvider; // 0x38(0x1)
		unsigned char UnknownData01_7[0x57]; // 0x39(0x57) UNKNOWN PROPERTY
	};


	// Struct LiveLink.LiveLinkRoleProjectSetting
	// Size: 0x28 (0x28 - 0x0)
	struct FLiveLinkRoleProjectSetting	
	{
	public:
		UClass* Role; // 0x0(0x8)
		UClass* SettingClass; // 0x8(0x8)
		UClass* FrameInterpolationProcessor; // 0x10(0x8)
		TArray<UClass*> FramePreProcessors; // 0x18(0x10)
	};

}
