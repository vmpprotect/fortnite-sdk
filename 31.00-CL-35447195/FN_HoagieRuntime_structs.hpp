#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HoagieRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct HoagieRuntime.FortHeliFlightModel
	// Size: 0x1E8 (0x1E8 - 0x0)
	struct FFortHeliFlightModel	
	{
	public:
		unsigned char UnknownData01_7[0x1E0]; // 0x0(0x1E0) UNKNOWN PROPERTY
		UFortHoagieVehicleConfigs Configs; // 0x1E0(0x8)
	};


	// Struct HoagieRuntime.RotorHit
	// Size: 0x28 (0x28 - 0x0)
	struct FRotorHit	
	{
	public:
		FActorInstanceHandle HitObjectHandle; // 0x0(0x20)
		float LastHitTimer; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct HoagieRuntime.CachedSeatCollision
	// Size: 0x8 (0x8 - 0x0)
	struct FCachedSeatCollision	
	{
	public:
		int32_t SeatIndex; // 0x0(0x4)
		bool bOccupied; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct HoagieRuntime.ReplicatedHeliControlState
	// Size: 0x30 (0x30 - 0x0)
	struct FReplicatedHeliControlState	
	{
	public:
		FVector_NetQuantizeNormal Up; // 0x0(0x18)
		FVector_NetQuantizeNormal Forward; // 0x18(0x18)
	};


	// Struct HoagieRuntime.HoagieCmd
	// Size: 0x78 (0x78 - 0x0)
	struct FHoagieCmd	
	{
	public:
		unsigned char UnknownData01_2[0x78]; // 0x0(0x78) UNKNOWN PROPERTY
	};


	// Struct HoagieRuntime.HoagieInPersistent
	// Inherited from FFortVehicleInPersistent
	// Size: 0x40 (0x1E0 - 0x1A0)
	struct FHoagieInPersistent : public FFortVehicleInPersistent	
	{
	public:
		UFortHoagieVehicleConfigs FortHoagieVehicleConfigs; // 0x1A0(0x8)
		EHoagieState CurrentHoagieState; // 0x1A8(0x4)
		float LastRotorImpulseTime; // 0x1AC(0x4)
		FVector RotorHitLinearImpulse; // 0x1B0(0x18)
		FVector RotorHitAngularImpulse; // 0x1C8(0x18)
	};


	// Struct HoagieRuntime.HoagieInternal
	// Inherited from FFortVehicleInternalPersistent
	// Size: 0x1F0 (0x2D0 - 0xE0)
	struct FHoagieInternal : public FFortVehicleInternalPersistent	
	{
	public:
		FFortHeliFlightModel FlightModel; // 0xE0(0x1E8)
		unsigned char UnknownData01_7[0x8]; // 0x2C8(0x8) UNKNOWN PROPERTY
	};


	// Struct HoagieRuntime.HoagieOutContinuous
	// Inherited from FFortVehicleOutContinuous
	// Size: 0x0 (0x50 - 0x50)
	struct FHoagieOutContinuous : public FFortVehicleOutContinuous	
	{
	public:
	};


	// Struct HoagieRuntime.HoagieOutPersistent
	// Inherited from FFortVehicleOutPersistent
	// Size: 0x0 (0x28 - 0x28)
	struct FHoagieOutPersistent : public FFortVehicleOutPersistent	
	{
	public:
	};


	// Struct HoagieRuntime.HoagieDeathEffectInfo
	// Size: 0x160 (0x160 - 0x0)
	struct FHoagieDeathEffectInfo	
	{
	public:
		float Damage; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer DamageTags; // 0x8(0x20)
		FVector Momentum; // 0x28(0x18)
		FHitResult HitInfo; // 0x40(0xF8)
		AFortPawn InstigatedBy; // 0x138(0x8)
		AActor DamageCauser; // 0x140(0x8)
		FGameplayEffectContextHandle EffectContext; // 0x148(0x18)
	};

}
