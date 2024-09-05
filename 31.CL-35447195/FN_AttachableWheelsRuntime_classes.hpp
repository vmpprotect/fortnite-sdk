#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AttachableWheelsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AttachableWheelsRuntime.AttachableWheel
	// Inherited from AActor -> UObject
	// Size: 0xA0 (0x330 - 0x290)
	class AAttachableWheel : public AActor	
	{
	public:
		UStaticMeshComponent WheelMeshComponent; // 0x290(0x8)
		FRotator WheelOrientation; // 0x298(0x18)
		float WheelDistance; // 0x2B0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2B4(0x4) UNKNOWN PROPERTY
		UPhysicsConstraintComponent AxleConstraint; // 0x2B8(0x8)
		FAttachableWheelAttachData AttachData; // 0x2C0(0x58)
		bool bAutoCreateAttachableWheelsComponent; // 0x318(0x1)
		bool bEnableWheelWheelCollision; // 0x319(0x1)
		bool bReplicateRuntimeData; // 0x31A(0x1)
		unsigned char UnknownData03_7[0x15]; // 0x31B(0x15) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AttachableWheelsRuntime.AttachableWheel");
			return ret;
		}

		void SetRuntimeData_Velocity(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D5B518
		void SetRuntimeData_Torque(float Torque); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D5B438
		void SetRuntimeData_SteerAngle(float SteerAngle); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D5B358
		void SetRuntimeData(float Torque, float Velocity, float SteerAngle); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D5B278
		void OnRep_RuntimeData(FAttachableWheelRuntimeData& RuntimeDataPrev); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D5B198
		void OnRep_AttachData(FAttachableWheelAttachData& AttachDataPrev); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D5B0B8
		void OnPhysicsStateChanged(UPrimitiveComponent PrimitiveComponent, EComponentPhysicsStateChange StateChange); // Flags: Native|Protected 0x7FF414D5AFD8
		void OnDetached(UPrimitiveComponent DetachedComponent); // Flags: Event|Protected|BlueprintEvent 0x7FF414D5AEF8
		void OnAttached(UPrimitiveComponent AttachedComponent); // Flags: Event|Protected|BlueprintEvent 0x7FF414D5AE18
		bool GetWorldSpaceAttachData(FAttachableWheelAttachData& OutAttachData, UPrimitiveComponent PrimitiveComponent, FName BodyName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414D5AD38
		UPrimitiveComponent GetAttachedComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D5AC58
		FAttachableWheelAttachData GetAttachData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D5AB78
		void DrawDebug(); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF414D5AA98
		bool DetachFrom(UPrimitiveComponent InComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D5A9B8
		void Detach(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D5A8D8
		bool AttachTo(UPrimitiveComponent InComponent, FVector& WorldLocation, FVector& AxleDirection, FVector SteerAxis); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D5A7F8
		bool AttachInPlace(UPrimitiveComponent InComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D5A718
	};


	// Class AttachableWheelsRuntime.AttachableWheelsComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class UAttachableWheelsComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TSet AttachedWheels; // 0xA8(0x50)
		float MaxChassisMassFraction; // 0xF8(0x4)
		unsigned char UnknownData03_7[0xC]; // 0xFC(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AttachableWheelsRuntime.AttachableWheelsComponent");
			return ret;
		}

		void SetMaxChassisMassFraction(float InMaxChassisMassFraction); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D5BCF8
		void OnWheelDetached(AAttachableWheel AttachedWheel); // Flags: RequiredAPI|Event|Public|BlueprintEvent 0x7FF414D5BC18
		void OnWheelAttached(AAttachableWheel AttachedWheel); // Flags: RequiredAPI|Event|Public|BlueprintEvent 0x7FF414D5BB38
		bool HandleWheelDetached_Internal(AAttachableWheel AttachedWheel); // Flags: Final|Native|Protected 0x7FF414D5BA58
		bool HandleWheelAttached_Internal(AAttachableWheel AttachedWheel); // Flags: Final|Native|Protected 0x7FF414D5B978
		TArray GetAttachedWheels(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D5B898
		AAttachableWheel GetAttachedWheelClosestOnAxis(FVector& Point, float& OutClosetDistanceToAxis, FVector& OutClosestPointOnAxis, FVector& OutClosestAxis); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D5B7B8
		void DrawDebug(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF414D5B6D8
		int32_t DetachAllWheels(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414D5B5F8
	};

}
