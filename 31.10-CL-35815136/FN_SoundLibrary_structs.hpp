#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SoundLibrary
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SoundLibrary.SoundLibraryPlayResult
	// Size: 0x18 (0x18 - 0x0)
	struct FSoundLibraryPlayResult	
	{
	public:
		FGameplayTag EventName; // 0x0(0x4)
		bool bWasBlocked; // 0x4(0x1)
		bool bSuccess; // 0x5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		TArray<UAudioComponent*> AudioComponents; // 0x8(0x10)
	};


	// Struct SoundLibrary.SoundLibraryAnimContextSettings
	// Size: 0x24 (0x24 - 0x0)
	struct FSoundLibraryAnimContextSettings	
	{
	public:
		FFloatInterval AnimRateThreshold; // 0x0(0x8)
		FGameplayTag EventName; // 0x8(0x4)
		bool bAttachToActor; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FName AttachName; // 0x10(0x4)
		bool bFadeOutOnEnd; // 0x14(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float FadeTime; // 0x18(0x4)
		float NotifyTriggerChance; // 0x1C(0x4)
		float VolumeMultiplier; // 0x20(0x4)
	};


	// Struct SoundLibrary.SoundLibraryContextEventInput
	// Size: 0x38 (0x38 - 0x0)
	struct FSoundLibraryContextEventInput	
	{
	public:
		USoundBase* Sound; // 0x0(0x8)
		AActor* Owner; // 0x8(0x8)
		FGameplayTag EventTag; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer LibraryTags; // 0x18(0x20)
	};


	// Struct SoundLibrary.SoundLibrarySet
	// Size: 0x70 (0x70 - 0x0)
	struct FSoundLibrarySet	
	{
	public:
		TSet<USoundLibrary*> LibrarySet; // 0x0(0x50)
		ESoundLibrarySelectionBehavior SelectionType; // 0x50(0x1)
		unsigned char UnknownData00_7[0x1F]; // 0x51(0x1F) UNKNOWN PROPERTY
	};


	// Struct SoundLibrary.SoundLibrarySimpleContextSettings
	// Size: 0x58 (0x58 - 0x0)
	struct FSoundLibrarySimpleContextSettings	
	{
	public:
		FGameplayTag EventName; // 0x0(0x4)
		bool bAttachedSound; // 0x4(0x1)
		bool bStopWhenAttachedDestroyed; // 0x5(0x1)
		bool bAutoDestroy; // 0x6(0x1)
		bool bForceComponentCreation; // 0x7(0x1)
		float VolumeMultiplier; // 0x8(0x4)
		float PitchMultiplier; // 0xC(0x4)
		float StartTime; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		USoundConcurrency* ConcurrencySettings; // 0x18(0x8)
		USoundAttenuation* AttenuationSettings; // 0x20(0x8)
		FName AttachName; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		USceneComponent* AttachToComponent; // 0x30(0x8)
		TEnumAsByte<EAttachLocation> LocationType; // 0x38(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FVector Location; // 0x40(0x18)
	};


	// Struct SoundLibrary.SoundLibraryActorData
	// Size: 0x88 (0x88 - 0x0)
	struct FSoundLibraryActorData	
	{
	public:
		unsigned char UnknownData00_7[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
		TSet<USoundLibrary*> SoundLibraries; // 0x20(0x50)
		TArray<USoundLibraryContext*> SoundLibraryContexts; // 0x70(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x80(0x8) UNKNOWN PROPERTY
	};


	// Struct SoundLibrary.SoundLibraryTag
	// Inherited from FGameplayTag
	// Size: 0x0 (0x4 - 0x4)
	struct FSoundLibraryTag : public FGameplayTag	
	{
	public:
	};

}
