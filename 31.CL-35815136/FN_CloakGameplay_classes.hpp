#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CloakGameplay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CloakGameplay.FortGameCueNotifyLoop_Cloak
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x78 (0xA28 - 0x9B0)
	class AFortGameCueNotifyLoop_Cloak : public AFortGameplayCueNotify_Loop	
	{
	public:
		AFortPlayerPawn* TargetPlayer; // 0x9B0(0x8)
		float VisibilityLevel; // 0x9B8(0x4)
		float StationaryVisMult; // 0x9BC(0x4)
		float MaxSpeedVisMult; // 0x9C0(0x4)
		float SpeedForMaxVis; // 0x9C4(0x4)
		float VisibilityMinFriendly; // 0x9C8(0x4)
		float VisibilityMinNonfriendly; // 0x9CC(0x4)
		float VisibilityLevelChangeRate; // 0x9D0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x9D4(0x4) UNKNOWN PROPERTY
		TMap<FName, FFortGameCueCloakModifier> CloakModifiersByNameMap; // 0x9D8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CloakGameplay.FortGameCueNotifyLoop_Cloak");
			return ret;
		}

		float TickVisibilityLevel(float DeltaSeconds); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF748D1BED4(relative to base address)
		bool SetModifierEnabled(FName& ModifierName, bool bNewEnabled); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74936FB90(relative to base address)
		bool SetModifierCanBeEnabled(FName& ModifierName, bool bNewCanBeEnabled); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506B05AC(relative to base address)
		bool GetCurrentModifierValues(float& OutVisibilityMultiplier, float& OutVisibilityAddition, FName& ModifierName); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506B0480(relative to base address)
	};

}
