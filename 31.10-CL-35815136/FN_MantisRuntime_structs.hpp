#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MantisRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MantisRuntime.FortMantisTechniqueMetadata
	// Size: 0x140 (0x140 - 0x0)
	struct FFortMantisTechniqueMetadata	
	{
	public:
		TMap<FGameplayTag, int32_t> IntValues; // 0x0(0x50)
		TMap<FGameplayTag, float> FloatValues; // 0x50(0x50)
		TMap<FGameplayTag, FVector> VectorValues; // 0xA0(0x50)
		TMap<FGameplayTag, FString> StringValues; // 0xF0(0x50)
	};


	// Struct MantisRuntime.FortRootMotionSource_Mantis
	// Inherited from FRootMotionSource
	// Size: 0xD0 (0x190 - 0xC0)
	struct FFortRootMotionSource_Mantis : public FRootMotionSource	
	{
	public:
		float CurrentTechniqueTime; // 0xC0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		UAnimMontage* TechniqueMontage; // 0xC8(0x8)
		FFortMantisRootMotionWarpInfo WarpInfo; // 0xD0(0x68)
		FVector LatestRepMovementLocation; // 0x138(0x18)
		unsigned char UnknownData01_7[0x40]; // 0x150(0x40) UNKNOWN PROPERTY
	};


	// Struct MantisRuntime.FortMantisRootMotionWarpInfo
	// Size: 0x68 (0x68 - 0x0)
	struct FFortMantisRootMotionWarpInfo	
	{
	public:
		TWeakObjectPtr<AActor*> WarpTarget; // 0x0(0x8)
		TWeakObjectPtr<USceneComponent*> BaseComponentForRelativeTargetLocation; // 0x8(0x8)
		FVector_NetQuantize BaseRelativeWarpTargetLocation; // 0x10(0x18)
		FVector_NetQuantize LastValidWarpTargetLocation; // 0x28(0x18)
		unsigned char UnknownBit00 : 1; // 0x40:0(0x1) UNKNOWN PROPERTY
		bool bAllowTranslationWarp : 1; // 0x40:1(0x1)
		bool bAllowRotationWarp : 1; // 0x40:2(0x1)
		bool bSnapshotTargetLocation : 1; // 0x40:3(0x1)
		bool bUseAlternativeWarpingBehavior; // 0x41(0x1)
		EFortMantisWarpTranslationMethod WarpTranslationMethod; // 0x42(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x43(0x5) UNKNOWN PROPERTY
		FVector_NetQuantize WarpTranslationVector; // 0x48(0x18)
		EFortMantisWarpRotationMethod WarpRotationMethod; // 0x60(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x61(0x3) UNKNOWN PROPERTY
		float WarpRotationYaw; // 0x64(0x4)
	};


	// Struct MantisRuntime.FortMantisTargetData
	// Inherited from FGameplayAbilityTargetData
	// Size: 0x1C8 (0x1D0 - 0x8)
	struct FFortMantisTargetData : public FGameplayAbilityTargetData	
	{
	public:
		FFortMantisRootMotionWarpInfo TechniqueWarpInfo; // 0x8(0x68)
		int32_t TechniqueDataIndex; // 0x70(0x4)
		bool bIsLockedOn; // 0x74(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x75(0x3) UNKNOWN PROPERTY
		FName DynamicMontageName; // 0x78(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		FFortMantisTechniqueMetadata TechniqueMetadata; // 0x80(0x140)
		char TechniqueContext; // 0x1C0(0xD)
		unsigned char UnknownData02_7[0x3]; // 0x1CD(0x3) UNKNOWN PROPERTY
	};


	// Struct MantisRuntime.FortMantisTechniqueCharacterSettings
	// Size: 0x1C (0x1C - 0x0)
	struct FFortMantisTechniqueCharacterSettings	
	{
	public:
		bool bDetachCharacterRotationFromCamera; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float ReattachCharacterRotationBlendTime; // 0x4(0x4)
		float ReattachCharacterRotationBlendExponent; // 0x8(0x4)
		bool bReattachCharacterRotationIfNoMovementInput; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		float WindupCharacterRotationRate; // 0x10(0x4)
		float ExecutionCharacterRotationRate; // 0x14(0x4)
		float RecoveryCharacterRotationRate; // 0x18(0x4)
	};


	// Struct MantisRuntime.FortMantisTechniqueData
	// Size: 0x158 (0x158 - 0x0)
	struct FFortMantisTechniqueData	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_7[0x154]; // 0x4(0x154) UNKNOWN PROPERTY
	};


	// Struct MantisRuntime.FortMantisTechniqueBranch
	// Size: 0xC (0xC - 0x0)
	struct FFortMantisTechniqueBranch	
	{
	public:
		FName FromTechnique; // 0x0(0x4)
		FName ToTechnique; // 0x4(0x4)
		EFortMantisBranchPath BranchPath; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct MantisRuntime.FortMantisMontageData
	// Size: 0x18 (0x18 - 0x0)
	struct FFortMantisMontageData	
	{
	public:
		UAnimMontage* Montage; // 0x0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct MantisRuntime.FortMantisReplicatedAnimInstanceInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FFortMantisReplicatedAnimInstanceInfo	
	{
	public:
		bool bIsTechniqueActive; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName ActiveTechniqueName; // 0x4(0x4)
		int32_t ActiveTechniqueIndex; // 0x8(0x4)
		int32_t ActiveTechniqueConsecutiveBranchesToSelf; // 0xC(0x4)
	};


	// Struct MantisRuntime.FortMantisRootMotionWarpInfoNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FFortMantisRootMotionWarpInfoNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};

}
