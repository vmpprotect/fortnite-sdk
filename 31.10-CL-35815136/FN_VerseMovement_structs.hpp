#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseMovement
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct VerseMovement.NetPhysicsMoveInputTriggerParams
	// Size: 0x28 (0x28 - 0x0)
	struct FNetPhysicsMoveInputTriggerParams	
	{
	public:
		bool bIsAxis; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName Name; // 0x4(0x4)
		UCurveFloat* AxisToMagnitudeCurve; // 0x8(0x8)
		bool AccumulateAxisInput; // 0x10(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FVector2D ClampAxis; // 0x18(0x10)
	};


	// Struct VerseMovement.NetPhysicsMovePhysicsTriggerParams
	// Size: 0x18 (0x18 - 0x0)
	struct FNetPhysicsMovePhysicsTriggerParams	
	{
	public:
		FVector SpeedInDirection; // 0x0(0x18)
	};


	// Struct VerseMovement.NetPhysicsMoveTraceTriggerParams
	// Size: 0x50 (0x50 - 0x0)
	struct FNetPhysicsMoveTraceTriggerParams	
	{
	public:
		FVector Direction; // 0x0(0x18)
		ENetPhysicsMoveResponseFrame Frame; // 0x18(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		float Length; // 0x1C(0x4)
		TEnumAsByte<ECollisionChannel> CollisionChannel; // 0x20(0x1)
		FCollisionResponseContainer ResponseParams; // 0x21(0x20)
		bool bProportionalToHitDistance; // 0x41(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x42(0x6) UNKNOWN PROPERTY
		UCurveFloat* HitDistanceToMagnitudeCurve; // 0x48(0x8)
	};


	// Struct VerseMovement.NetPhysicsMoveTrigger
	// Size: 0x98 (0x98 - 0x0)
	struct FNetPhysicsMoveTrigger	
	{
	public:
		ENetPhysicsMoveTriggerType Type; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FNetPhysicsMoveInputTriggerParams InputParams; // 0x8(0x28)
		FNetPhysicsMovePhysicsTriggerParams PhysicsParams; // 0x30(0x18)
		FNetPhysicsMoveTraceTriggerParams TraceParams; // 0x48(0x50)
	};


	// Struct VerseMovement.NetPhysicsMoveResponse
	// Size: 0x50 (0x50 - 0x0)
	struct FNetPhysicsMoveResponse	
	{
	public:
		FVector Vector; // 0x0(0x18)
		float Magnitude; // 0x18(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		UCurveFloat* MagnitudeCurve; // 0x20(0x8)
		ENetPhysicsMoveResponseType Type; // 0x28(0x1)
		ENetPhysicsMoveResponseFrame Frame; // 0x29(0x1)
		ENetPhysicsMoveResponseEffect Effect; // 0x2A(0x1)
		ENetPhysicsMoveResponseModifier Modifier; // 0x2B(0x1)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FVector ClampVector; // 0x30(0x18)
		ENetPhysicsMoveResponseFrame ClampFrame; // 0x48(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct VerseMovement.NetPhysicsMoveConfigEntry
	// Size: 0x30 (0x30 - 0x0)
	struct FNetPhysicsMoveConfigEntry	
	{
	public:
		FString Name; // 0x0(0x10)
		TArray<FNetPhysicsMoveTrigger> Triggers; // 0x10(0x10)
		TArray<FNetPhysicsMoveResponse> Responses; // 0x20(0x10)
	};


	// Struct VerseMovement.NetPhysicsMoveLimits
	// Size: 0x80 (0x80 - 0x0)
	struct FNetPhysicsMoveLimits	
	{
	public:
		bool bClampVelocity; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector MaxVelocity; // 0x8(0x18)
		bool bClampAngularVelocity; // 0x20(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		FVector MaxAngularVelocity; // 0x28(0x18)
		bool bClampMaxPosition; // 0x40(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		FVector MaxPosition; // 0x48(0x18)
		bool bClampMinPosition; // 0x60(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
		FVector MinPosition; // 0x68(0x18)
	};


	// Struct VerseMovement.NetPhysicsMoveInputCmd
	// Size: 0x38 (0x38 - 0x0)
	struct FNetPhysicsMoveInputCmd	
	{
	public:
		TArray<float> AxisValues; // 0x0(0x10)
		TArray<bool> ActionValues; // 0x10(0x10)
		FRotator ViewRotation; // 0x20(0x18)
	};


	// Struct VerseMovement.NetPhysicsMoveObject
	// Size: 0x1 (0x1 - 0x0)
	struct FNetPhysicsMoveObject	
	{
	public:
		bool bEnabled; // 0x0(0x1)
	};


	// Struct VerseMovement.NetPhysicsMoveObjectLocal
	// Size: 0x88 (0x88 - 0x0)
	struct FNetPhysicsMoveObjectLocal	
	{
	public:
		unsigned char UnknownData00_2[0x88]; // 0x0(0x88) UNKNOWN PROPERTY
	};

}
