#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CloakGameplay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CloakGameplay.FortGameCueNotifyLoop_Cloak
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x78 (0xA28 - 0x9B0)
	class AFortGameCueNotifyLoop_Cloak : public AFortGameplayCueNotify_Loop	
	{
	public:
		AFortPlayerPawn TargetPlayer; // 0x9B0(0x8)
		float VisibilityLevel; // 0x9B8(0x4)
		float StationaryVisMult; // 0x9BC(0x4)
		float MaxSpeedVisMult; // 0x9C0(0x4)
		float SpeedForMaxVis; // 0x9C4(0x4)
		float VisibilityMinFriendly; // 0x9C8(0x4)
		float VisibilityMinNonfriendly; // 0x9CC(0x4)
		float VisibilityLevelChangeRate; // 0x9D0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x9D4(0x4) UNKNOWN PROPERTY
		TMap CloakModifiersByNameMap; // 0x9D8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CloakGameplay.FortGameCueNotifyLoop_Cloak");
			return ret;
		}

		float TickVisibilityLevel(float DeltaSeconds); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BDB818
		bool SetModifierEnabled(FName& ModifierName, bool bNewEnabled); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BDB738
		bool SetModifierCanBeEnabled(FName& ModifierName, bool bNewCanBeEnabled); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BDB658
		bool GetCurrentModifierValues(float& OutVisibilityMultiplier, float& OutVisibilityAddition, FName& ModifierName); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BDB578
	};

}
