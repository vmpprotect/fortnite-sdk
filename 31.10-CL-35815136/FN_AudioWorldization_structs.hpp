#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioWorldization
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AudioWorldization.AudioWorldizationSend
	// Size: 0x68 (0x68 - 0x0)
	struct FAudioWorldizationSend	
	{
	public:
		USoundSubmix* Submix; // 0x0(0x8)
		TSet<USoundModulatorBase*> VolumeModulators; // 0x8(0x50)
		TArray<USoundEffectSubmixPreset*> EffectChain; // 0x58(0x10)
	};


	// Struct AudioWorldization.AudioWorldizationSettings
	// Size: 0x78 (0x78 - 0x0)
	struct FAudioWorldizationSettings	
	{
	public:
		FName Identifier; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FAudioWorldizationSend> Sends; // 0x8(0x10)
		float EnclosureSmoothSpeed; // 0x18(0x4)
		float WallDistanceSmoothSpeed; // 0x1C(0x4)
		float TraceRadius; // 0x20(0x4)
		float CrossfadeTime; // 0x24(0x4)
		int32_t TracePoints; // 0x28(0x4)
		int32_t TracesPerFrame; // 0x2C(0x4)
		float SideQuadrantDegrees; // 0x30(0x4)
		float UpQuadrantDegrees; // 0x34(0x4)
		FVector TraceOrigin; // 0x38(0x18)
		TEnumAsByte<ECollisionChannel> TraceChannel; // 0x50(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		TArray<TEnumAsByte> ResponseChannels; // 0x58(0x10)
		UClass* TracePolicy; // 0x68(0x8)
		UClass* TraceDirectionPolicy; // 0x70(0x8)
	};


	// Struct AudioWorldization.AudioWorldizationQuadrantSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FAudioWorldizationQuadrantSettings	
	{
	public:
		USoundControlBus* WallDistanceBus; // 0x0(0x8)
		USoundControlBus* EnclosureBus; // 0x8(0x8)
	};


	// Struct AudioWorldization.AudioWorldizationGlobalSettings
	// Size: 0x30 (0x30 - 0x0)
	struct FAudioWorldizationGlobalSettings	
	{
	public:
		float EffectCrossfadeTime; // 0x0(0x4)
		FName IgnoreTraceActorTag; // 0x4(0x4)
		USoundControlBus* EnclosureBus; // 0x8(0x8)
		USoundControlBus* WallDistanceBus; // 0x10(0x8)
		USoundControlBus* ListenerAzimuthBus; // 0x18(0x8)
		TArray<FAudioWorldizationQuadrantSettings> Quadrants; // 0x20(0x10)
	};


	// Struct AudioWorldization.AudioSphereTraceResult
	// Size: 0xC (0xC - 0x0)
	struct FAudioSphereTraceResult	
	{
	public:
		bool bBlocking; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Distance; // 0x4(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x8(0x4) UNKNOWN PROPERTY
	};

}
