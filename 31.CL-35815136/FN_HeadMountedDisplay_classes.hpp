#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HeadMountedDisplay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class HeadMountedDisplay.HandKeypointConversion
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UHandKeypointConversion : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HeadMountedDisplay.HandKeypointConversion");
			return ret;
		}

		int32_t Conv_HandKeypointToInt32(EHandKeypoint Input); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BF42ED0(relative to base address)
	};


	// Class HeadMountedDisplay.MotionControllerComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x138 (0x600 - 0x4C8)
	class UMotionControllerComponent : public UPrimitiveComponent	
	{
	public:
		int32_t PlayerIndex; // 0x4C8(0x4)
		FName MotionSource; // 0x4CC(0x4)
		bool bDisableLowLatencyUpdate : 1; // 0x4D0:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x4D1(0x3) UNKNOWN PROPERTY
		ETrackingStatus CurrentTrackingStatus; // 0x4D4(0x1)
		unsigned char UnknownData01_7[0x12B]; // 0x4D5(0x12B) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HeadMountedDisplay.MotionControllerComponent");
			return ret;
		}

		void SetTrackingSource(EControllerHand NewSource); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BF43534(relative to base address)
		void SetTrackingMotionSource(FName NewSource); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BF4348C(relative to base address)
		void SetAssociatedPlayerIndex(int32_t NewPlayer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BF433E4(relative to base address)
		void OnMotionControllerUpdated(); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsTracked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BF433CC(relative to base address)
		EControllerHand GetTrackingSource(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BF43394(relative to base address)
		float GetParameterValue(FName InName, bool& bValueFound); // Flags: Final|RequiredAPI|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BF4329C(relative to base address)
		bool GetLinearVelocity(FVector& OutLinearVelocity); // Flags: Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BF431C8(relative to base address)
		bool GetLinearAcceleration(FVector& OutLinearAcceleration); // Flags: Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BF430F4(relative to base address)
		FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound); // Flags: Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74BF42FE0(relative to base address)
		bool GetAngularVelocity(FRotator& OutAngularVelocity); // Flags: Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BF42F4C(relative to base address)
	};

}
