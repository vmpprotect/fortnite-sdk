#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EventModeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EventModeRuntime.FortGameFrameworkComponent_EventMode
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x170 (0x210 - 0xA0)
	class UFortGameFrameworkComponent_EventMode : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_3[0x60]; // 0xA0(0x60) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortWeaponItemDefinition*> ActivatorAsset; // 0x100(0x20)
		TArray<FUIExtension> UIExtensions; // 0x120(0x10)
		TMap<FGameplayTag, TWeakObjectPtr> TaggedUIExtensions; // 0x130(0x50)
		TArray<FEventModeFocusActor> FocusActors; // 0x180(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x190(0x8) UNKNOWN PROPERTY
		UInputComponent* InputComponent; // 0x198(0x8)
		TArray<FEventModeWidgetCachedData> CachedWidgetData; // 0x1A0(0x10)
		TWeakObjectPtr<AActor*> CurrentlyFocusedActor; // 0x1B0(0x20)
		unsigned char UnknownData02_7[0x40]; // 0x1D0(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventModeRuntime.FortGameFrameworkComponent_EventMode");
			return ret;
		}

		void OnPlayerPawnPossessed(APawn* PossessedPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C088608(relative to base address)
		void OnExitVehicle(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75133EB20(relative to base address)
		void OnEnterVehicle(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75133EB0C(relative to base address)
		bool GetIsFocusing(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75133EAF4(relative to base address)
		bool GetIsFocusAvailable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75133EADC(relative to base address)
		bool GetIsEventModeActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75133EAC4(relative to base address)
	};


	// Class EventModeRuntime.FortWeapon_EventMode
	// Inherited from AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x15F8 - 0x15F8)
	class AFortWeapon_EventMode : public AFortWeapon	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventModeRuntime.FortWeapon_EventMode");
			return ret;
		}
	};

}
