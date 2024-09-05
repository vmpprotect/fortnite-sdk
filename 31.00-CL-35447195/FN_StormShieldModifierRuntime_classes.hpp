#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: StormShieldModifierRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class StormShieldModifierRuntime.FortAthenaMutator_SplitStorm
	// Inherited from AFortAthenaMutator_GameModeBase -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x1E0 (0x668 - 0x488)
	class AFortAthenaMutator_SplitStorm : public AFortAthenaMutator_GameModeBase	
	{
	public:
		UClass SafeZoneProxyClass; // 0x488(0x8)
		FScalableFloat ProxyUpdateFrequency; // 0x490(0x28)
		FScalableFloat SplitParallelTravelDistance; // 0x4B8(0x28)
		FScalableFloat JoinParallelTravelDistance; // 0x4E0(0x28)
		FScalableFloat SplitPerpendicularTravelDistance; // 0x508(0x28)
		FScalableFloat JoinAngleFromParallelDegrees; // 0x530(0x28)
		FScalableFloat PhaseToSplitStorm; // 0x558(0x28)
		FLinearColor ProxyMapCircleColor; // 0x580(0x10)
		float ProxyMapCircleLineThickness; // 0x590(0x4)
		int32_t ProxyMapCircleLineSegments; // 0x594(0x4)
		AActor SafeZoneProxy; // 0x598(0x8)
		ESplitStormProxyPhase CurrentProxyPhase; // 0x5A0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5A1(0x3) UNKNOWN PROPERTY
		float MoveToHoldWaitDuration; // 0x5A4(0x4)
		float MoveToHoldDuration; // 0x5A8(0x4)
		float MoveToEndWaitDuration; // 0x5AC(0x4)
		float MoveToEndDuration; // 0x5B0(0x4)
		float MoveStartTime; // 0x5B4(0x4)
		FSplitStormProxyCircle ProxyStartCircle; // 0x5B8(0x20)
		FSplitStormProxyCircle ProxyEndCircle; // 0x5D8(0x20)
		FSplitStormProxyCircle ProxyHoldCircle; // 0x5F8(0x20)
		FSplitStormProxyCircle CurrentProxyCircle; // 0x618(0x20)
		unsigned char UnknownData03_7[0x30]; // 0x638(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm");
			return ret;
		}

		void UpdateProxyCenterAndRadius(); // Flags: Final|Native|Private 0x7FF414D4E238
		void StartProxyUpdateTimer(); // Flags: Final|Native|Private 0x7FF414D4E158
		void SetSafeZoneProxyPhase(ESplitStormProxyPhase NewPhase); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D4E078
		void SetProxyRadius(float NewRadius); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D4DF98
		void SetProxyCenter(FVector NewCenter); // Flags: Native|Event|Protected|HasDefaults|BlueprintEvent 0x7FF414D4DEB8
		void OnSafeZonePhaseChanged(); // Flags: Final|Native|Private 0x7FF414D4DDD8
		void OnSafeZoneIndicatorSpawned(FFortSafeZoneIndicatorUpdatedEvent& Event); // Flags: Final|Native|Private|HasOutParms 0x7FF414D4DCF8
		void OnRep_CurrentProxyCircle(); // Flags: Final|Native|Private 0x7FF414D4DC18
	};

}
