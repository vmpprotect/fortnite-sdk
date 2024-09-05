#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioMotorSim
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AudioMotorSim.AudioMotorSimInputContext
	// Size: 0x2C (0x2C - 0x0)
	struct FAudioMotorSimInputContext	
	{
	public:
		float DeltaTime; // 0x0(0x4)
		float Speed; // 0x4(0x4)
		float ForwardSpeed; // 0x8(0x4)
		float SideSpeed; // 0xC(0x4)
		float UpSpeed; // 0x10(0x4)
		float Throttle; // 0x14(0x4)
		float Brake; // 0x18(0x4)
		float SurfaceFrictionModifier; // 0x1C(0x4)
		float MotorFrictionModifier; // 0x20(0x4)
		float Boost; // 0x24(0x4)
		bool bDriving; // 0x28(0x1)
		bool bGrounded; // 0x29(0x1)
		bool bCanShift; // 0x2A(0x1)
		bool bClutchEngaged; // 0x2B(0x1)
	};


	// Struct AudioMotorSim.AudioMotorSimRuntimeContext
	// Size: 0x14 (0x14 - 0x0)
	struct FAudioMotorSimRuntimeContext	
	{
	public:
		bool bShifting; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t Gear; // 0x4(0x4)
		float RPM; // 0x8(0x4)
		float Volume; // 0xC(0x4)
		float pitch; // 0x10(0x4)
	};


	// Struct AudioMotorSim.MotorSimEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FMotorSimEntry	
	{
	public:
		TScriptInterface<Class> Sim; // 0x0(0x10)
		int32_t SortOrder; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};

}
