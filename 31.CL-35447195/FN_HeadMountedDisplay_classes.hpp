#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HeadMountedDisplay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		int32_t Conv_HandKeypointToInt32(EHandKeypoint Input); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414499D38
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
		unsigned char UnknownData02_5[0x3]; // 0x4D1(0x3) UNKNOWN PROPERTY
		ETrackingStatus CurrentTrackingStatus; // 0x4D4(0x1)
		unsigned char UnknownData03_7[0x12B]; // 0x4D5(0x12B) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HeadMountedDisplay.MotionControllerComponent");
			return ret;
		}

		void SetTrackingSource(EControllerHand NewSource); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41449A6D8
		void SetTrackingMotionSource(FName NewSource); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41449A5F8
		void SetAssociatedPlayerIndex(int32_t NewPlayer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41449A518
		void OnMotionControllerUpdated(); // Flags: RequiredAPI|Event|Protected|BlueprintEvent 0x7FF41449A438
		bool IsTracked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41449A358
		EControllerHand GetTrackingSource(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41449A278
		float GetParameterValue(FName InName, bool& bValueFound); // Flags: Final|RequiredAPI|Native|Protected|HasOutParms|BlueprintCallable 0x7FF41449A198
		bool GetLinearVelocity(FVector& OutLinearVelocity); // Flags: Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41449A0B8
		bool GetLinearAcceleration(FVector& OutLinearAcceleration); // Flags: Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414499FD8
		FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound); // Flags: Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414499EF8
		bool GetAngularVelocity(FRotator& OutAngularVelocity); // Flags: Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414499E18
	};

}
