#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EventModeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EventModeRuntime.FortGameFrameworkComponent_EventMode
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x170 (0x210 - 0xA0)
	class UFortGameFrameworkComponent_EventMode : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData03_3[0x60]; // 0xA0(0x60) UNKNOWN PROPERTY
		TWeakObjectPtr ActivatorAsset; // 0x100(0x20)
		TArray UIExtensions; // 0x120(0x10)
		TMap TaggedUIExtensions; // 0x130(0x50)
		TArray FocusActors; // 0x180(0x10)
		unsigned char UnknownData04_6[0x8]; // 0x190(0x8) UNKNOWN PROPERTY
		UInputComponent InputComponent; // 0x198(0x8)
		TArray CachedWidgetData; // 0x1A0(0x10)
		TWeakObjectPtr CurrentlyFocusedActor; // 0x1B0(0x20)
		unsigned char UnknownData05_7[0x40]; // 0x1D0(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventModeRuntime.FortGameFrameworkComponent_EventMode");
			return ret;
		}

		void OnPlayerPawnPossessed(APawn PossessedPawn); // Flags: Final|Native|Private 0x7FF414CF0738
		void OnExitVehicle(); // Flags: Final|Native|Private 0x7FF414CF0658
		void OnEnterVehicle(); // Flags: Final|Native|Private 0x7FF414CF0578
		bool GetIsFocusing(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CF0498
		bool GetIsFocusAvailable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CF03B8
		bool GetIsEventModeActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CF02D8
	};


	// Class EventModeRuntime.FortWeapon_EventMode
	// Inherited from AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x15E0 - 0x15E0)
	class AFortWeapon_EventMode : public AFortWeapon	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventModeRuntime.FortWeapon_EventMode");
			return ret;
		}
	};

}
