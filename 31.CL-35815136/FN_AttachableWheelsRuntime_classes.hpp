#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AttachableWheelsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AttachableWheelsRuntime.AttachableWheel
	// Inherited from AActor -> UObject
	// Size: 0xA0 (0x330 - 0x290)
	class AAttachableWheel : public AActor	
	{
	public:
		UStaticMeshComponent* WheelMeshComponent; // 0x290(0x8)
		FRotator WheelOrientation; // 0x298(0x18)
		float WheelDistance; // 0x2B0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2B4(0x4) UNKNOWN PROPERTY
		UPhysicsConstraintComponent* AxleConstraint; // 0x2B8(0x8)
		FAttachableWheelAttachData AttachData; // 0x2C0(0x58)
		bool bAutoCreateAttachableWheelsComponent; // 0x318(0x1)
		bool bEnableWheelWheelCollision; // 0x319(0x1)
		bool bReplicateRuntimeData; // 0x31A(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x31B(0x1) UNKNOWN PROPERTY
		FAttachableWheelRuntimeData RuntimeData; // 0x31C(0xC)
		unsigned char UnknownData02_7[0x8]; // 0x328(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AttachableWheelsRuntime.AttachableWheel");
			return ret;
		}

		void SetRuntimeData_Velocity(float Velocity); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515A4150(relative to base address)
		void SetRuntimeData_Torque(float Torque); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515A40D0(relative to base address)
		void SetRuntimeData_SteerAngle(float SteerAngle); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515A4050(relative to base address)
		void SetRuntimeData(float Torque, float Velocity, float SteerAngle); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515A3F54(relative to base address)
		void OnRep_RuntimeData(FAttachableWheelRuntimeData& RuntimeDataPrev); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7515A3E50(relative to base address)
		void OnRep_AttachData(FAttachableWheelAttachData& AttachDataPrev); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7515A3D90(relative to base address)
		void OnPhysicsStateChanged(UPrimitiveComponent* PrimitiveComponent, EComponentPhysicsStateChange StateChange); // Flags: Native|Protected, Memory Exec: 0x7FF7515A3CC8(relative to base address)
		void OnDetached(UPrimitiveComponent* DetachedComponent); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAttached(UPrimitiveComponent* AttachedComponent); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetWorldSpaceAttachData(FAttachableWheelAttachData& OutAttachData, UPrimitiveComponent* PrimitiveComponent, FName BodyName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515A3974(relative to base address)
		UPrimitiveComponent GetAttachedComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515A36B0(relative to base address)
		FAttachableWheelAttachData GetAttachData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515A3658(relative to base address)
		void DrawDebug(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74921B8F8(relative to base address)
		bool DetachFrom(UPrimitiveComponent* InComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515A35B0(relative to base address)
		void Detach(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515A3508(relative to base address)
		bool AttachTo(UPrimitiveComponent* InComponent, FVector& WorldLocation, FVector& AxleDirection, FVector SteerAxis); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7515A3294(relative to base address)
		bool AttachInPlace(UPrimitiveComponent* InComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515A3204(relative to base address)
	};


	// Class AttachableWheelsRuntime.AttachableWheelsComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class UAttachableWheelsComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TSet<AAttachableWheel*> AttachedWheels; // 0xA8(0x50)
		float MaxChassisMassFraction; // 0xF8(0x4)
		unsigned char UnknownData01_7[0xC]; // 0xFC(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AttachableWheelsRuntime.AttachableWheelsComponent");
			return ret;
		}

		void SetMaxChassisMassFraction(float InMaxChassisMassFraction); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515A3ED4(relative to base address)
		void OnWheelDetached(AAttachableWheel* AttachedWheel); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWheelAttached(AAttachableWheel* AttachedWheel); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HandleWheelDetached_Internal(AAttachableWheel* AttachedWheel); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515A3C38(relative to base address)
		bool HandleWheelAttached_Internal(AAttachableWheel* AttachedWheel); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515A3BA8(relative to base address)
		TArray GetAttachedWheels(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515A3908(relative to base address)
		AAttachableWheel GetAttachedWheelClosestOnAxis(FVector& Point, float& OutClosetDistanceToAxis, FVector& OutClosestPointOnAxis, FVector& OutClosestAxis); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515A36D4(relative to base address)
		void DrawDebug(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74921B8F8(relative to base address)
		int32_t DetachAllWheels(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515A351C(relative to base address)
	};

}
