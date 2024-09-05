#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMJamPlayspaceRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FMJamPlayspaceRuntime.JamPlayParams
	// Size: 0x28 (0x28 - 0x0)
	struct FJamPlayParams	
	{
	public:
		FName SongShortName; // 0x0(0x4)
		EFMJamLoopType LoopType; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<APlayerState*> PlayerState; // 0x8(0x8)
		int32_t LoopInstanceId; // 0x10(0x4)
		bool bIsAutoJammer; // 0x14(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UCatalogData*> CMSCatalogEntry; // 0x18(0x8)
		TWeakObjectPtr<UFMJamSong*> Song; // 0x20(0x8)
	};


	// Struct FMJamPlayspaceRuntime.JamLoadResult
	// Size: 0x38 (0x38 - 0x0)
	struct FJamLoadResult	
	{
	public:
		UJamMusicSlot* Slot; // 0x0(0x8)
		UFusionPatch* FusionPatch; // 0x8(0x8)
		UMidiFile* MidiFile; // 0x10(0x8)
		USparksJamEmoteItemDefinition* ItemDef; // 0x18(0x8)
		EMusicKeyMode Mode; // 0x20(0x1)
		bool bSuccess; // 0x21(0x1)
		bool bWasCancelled; // 0x22(0x1)
		unsigned char UnknownData00_7[0x15]; // 0x23(0x15) UNKNOWN PROPERTY
	};


	// Struct FMJamPlayspaceRuntime.JamEvent_JamLoopBase
	// Size: 0x40 (0x40 - 0x0)
	struct FJamEvent_JamLoopBase	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FName SongShortName; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UCatalogData* CatalogEntry; // 0x10(0x8)
		EFMJamLoopType LoopType; // 0x18(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		APlayerState* PlayerState; // 0x20(0x8)
		int32_t LoopInstanceId; // 0x28(0x4)
		bool bIsAutoJammer; // 0x2C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		USparksInstrumentAnimations* Animations; // 0x30(0x8)
		bool bChangedLoop; // 0x38(0x1)
		unsigned char UnknownData04_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct FMJamPlayspaceRuntime.JamEvent_JamLoopStarted
	// Inherited from FJamEvent_JamLoopBase
	// Size: 0x0 (0x40 - 0x40)
	struct FJamEvent_JamLoopStarted : public FJamEvent_JamLoopBase	
	{
	public:
	};


	// Struct FMJamPlayspaceRuntime.JamEvent_JamLoopStopped
	// Inherited from FJamEvent_JamLoopBase
	// Size: 0x0 (0x40 - 0x40)
	struct FJamEvent_JamLoopStopped : public FJamEvent_JamLoopBase	
	{
	public:
	};


	// Struct FMJamPlayspaceRuntime.JamEvent_LoopsChangedThisFrame
	// Size: 0x1 (0x1 - 0x0)
	struct FJamEvent_LoopsChangedThisFrame	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct FMJamPlayspaceRuntime.JamEvent_OnPrimaryPlayerPresenceChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FJamEvent_OnPrimaryPlayerPresenceChanged	
	{
	public:
		bool bPrimaryPlayerInPlayspace; // 0x0(0x1)
	};


	// Struct FMJamPlayspaceRuntime.JamReactiveFXState
	// Size: 0x28 (0x28 - 0x0)
	struct FJamReactiveFXState	
	{
	public:
		float OverallAmplitude; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<float> LoopAmplitudes; // 0x8(0x10)
		TArray<FVector4f> LoopBandValues; // 0x18(0x10)
	};


	// Struct FMJamPlayspaceRuntime.JamLoopReactiveFX
	// Size: 0x10 (0x10 - 0x0)
	struct FJamLoopReactiveFX	
	{
	public:
		TArray<TWeakObjectPtr> NiagaraComponents; // 0x0(0x10)
	};

}
