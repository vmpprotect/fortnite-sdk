#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FlyingCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FlyingCodeRuntime.FortCameraMode_Flying
	// Inherited from UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x10 (0x1D10 - 0x1D00)
	class UFortCameraMode_Flying : public UFortCameraMode_ThirdPerson	
	{
	public:
		float LastActiveTimeSeconds; // 0x1D00(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x1D04(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FlyingCodeRuntime.FortCameraMode_Flying");
			return ret;
		}

		void BP_ProcessViewRotation(FRotator& InViewRotation, FRotator& InDeltaRot, float DeltaTime, bool& bOutShouldOverride, FRotator& OutViewRotation, FRotator& OutDeltaRot); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF414CF7FF8
	};


	// Class FlyingCodeRuntime.FortMovementMode_FlyingRuntimeData
	// Inherited from UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x38 (0x78 - 0x40)
	class UFortMovementMode_FlyingRuntimeData : public UFortMovementMode_BaseExtRuntimeData	
	{
	public:
		FVector2D MovementInput; // 0x40(0x10)
		float CeilingHeight; // 0x50(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FRotator MoveOrientation; // 0x58(0x18)
		unsigned char UnknownData03_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FlyingCodeRuntime.FortMovementMode_FlyingRuntimeData");
			return ret;
		}
	};


	// Class FlyingCodeRuntime.FortMovementMode_ExtLogicFlying
	// Inherited from UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x8 (0x128 - 0x120)
	class UFortMovementMode_ExtLogicFlying : public UFortMovementMode_BaseExtLogic	
	{
	public:
		bool bEnableInput; // 0x120(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x121(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FlyingCodeRuntime.FortMovementMode_ExtLogicFlying");
			return ret;
		}

		void SetInputActionDisplayContext(UFortInputMappingContext InputMappingContext); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414CF8298
		void ClearInputActionDisplayContext(UFortInputMappingContext InputMappingContext); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414CF81B8
		bool CanBeginFlying(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414CF80D8
	};


	// Class FlyingCodeRuntime.FlyingAttributeSet
	// Inherited from UFortAttributeSet -> UAttributeSet -> UObject
	// Size: 0x80 (0xB0 - 0x30)
	class UFlyingAttributeSet : public UFortAttributeSet	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FFortGameplayAttributeData MaxFuel; // 0x38(0x28)
		FFortGameplayAttributeData FuelUsageRate; // 0x60(0x28)
		FFortGameplayAttributeData LocalFuel; // 0x88(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FlyingCodeRuntime.FlyingAttributeSet");
			return ret;
		}

		void OnRep_LocalFuel(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Private|HasOutParms 0x7FF414CF8458
		void OnRep_FuelUsageRate(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Private|HasOutParms 0x7FF414CF8378
	};

}
