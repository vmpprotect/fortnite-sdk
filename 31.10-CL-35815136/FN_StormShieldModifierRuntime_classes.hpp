#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: StormShieldModifierRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class StormShieldModifierRuntime.FortAthenaMutator_SplitStorm
	// Inherited from AFortAthenaMutator_GameModeBase -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x1E0 (0x668 - 0x488)
	class AFortAthenaMutator_SplitStorm : public AFortAthenaMutator_GameModeBase	
	{
	public:
		UClass* SafeZoneProxyClass; // 0x488(0x8)
		FScalableFloat ProxyUpdateFrequency; // 0x490(0x28)
		FScalableFloat SplitParallelTravelDistance; // 0x4B8(0x28)
		FScalableFloat JoinParallelTravelDistance; // 0x4E0(0x28)
		FScalableFloat SplitPerpendicularTravelDistance; // 0x508(0x28)
		FScalableFloat JoinAngleFromParallelDegrees; // 0x530(0x28)
		FScalableFloat PhaseToSplitStorm; // 0x558(0x28)
		FLinearColor ProxyMapCircleColor; // 0x580(0x10)
		float ProxyMapCircleLineThickness; // 0x590(0x4)
		int32_t ProxyMapCircleLineSegments; // 0x594(0x4)
		AActor* SafeZoneProxy; // 0x598(0x8)
		ESplitStormProxyPhase CurrentProxyPhase; // 0x5A0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5A1(0x3) UNKNOWN PROPERTY
		float MoveToHoldWaitDuration; // 0x5A4(0x4)
		float MoveToHoldDuration; // 0x5A8(0x4)
		float MoveToEndWaitDuration; // 0x5AC(0x4)
		float MoveToEndDuration; // 0x5B0(0x4)
		float MoveStartTime; // 0x5B4(0x4)
		FSplitStormProxyCircle ProxyStartCircle; // 0x5B8(0x20)
		FSplitStormProxyCircle ProxyEndCircle; // 0x5D8(0x20)
		FSplitStormProxyCircle ProxyHoldCircle; // 0x5F8(0x20)
		FSplitStormProxyCircle CurrentProxyCircle; // 0x618(0x20)
		unsigned char UnknownData01_7[0x30]; // 0x638(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm");
			return ret;
		}

		void UpdateProxyCenterAndRadius(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void StartProxyUpdateTimer(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SetSafeZoneProxyPhase(ESplitStormProxyPhase NewPhase); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74E2263E0(relative to base address)
		void SetProxyRadius(float NewRadius); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF75155E5E4(relative to base address)
		void SetProxyCenter(FVector NewCenter); // Flags: Native|Event|Protected|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF75155E4C0(relative to base address)
		void OnSafeZonePhaseChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void OnSafeZoneIndicatorSpawned(FFortSafeZoneIndicatorUpdatedEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74E226444(relative to base address)
		void OnRep_CurrentProxyCircle(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75155E3D4(relative to base address)
	};

}
