#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksCommonRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SparksCommonRuntime.SparksCommonAllPlayersReadyEvent
	// Size: 0x1 (0x1 - 0x0)
	struct FSparksCommonAllPlayersReadyEvent	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct SparksCommonRuntime.SparksCommonStartCameraEvent
	// Size: 0x1 (0x1 - 0x0)
	struct FSparksCommonStartCameraEvent	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct SparksCommonRuntime.SparksCommonCameraFinishedEvent
	// Size: 0x1 (0x1 - 0x0)
	struct FSparksCommonCameraFinishedEvent	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct SparksCommonRuntime.SparksCommonEnableCameraDirectorEvent
	// Size: 0x1 (0x1 - 0x0)
	struct FSparksCommonEnableCameraDirectorEvent	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct SparksCommonRuntime.SparksCommonCameraDirectorFinishedEvent
	// Size: 0x1 (0x1 - 0x0)
	struct FSparksCommonCameraDirectorFinishedEvent	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct SparksCommonRuntime.CrowdMemberToSpawn
	// Size: 0x40 (0x40 - 0x0)
	struct FCrowdMemberToSpawn	
	{
	public:
		FVector2D Location; // 0x0(0x10)
		FRotator Rotator; // 0x10(0x18)
		float Scale; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UInstancedStaticMeshComponent* Mesh; // 0x30(0x8)
		int32_t ID; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};

}
