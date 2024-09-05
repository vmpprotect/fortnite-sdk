#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FlexLegend_BossDRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FlexLegend_BossDRuntime.FlexLegendDiveKickInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFlexLegendDiveKickInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FlexLegend_BossDRuntime.FlexLegendDiveKickInterface");
			return ret;
		}

		void GetFlexLegendDiveKickData(float& PitchTowardsDiveTarget, float& DiveDistanceToTarget); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF75061E354(relative to base address)
	};


	// Class FlexLegend_BossDRuntime.FlexLegendDiveKickLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x1430 - 0x1420)
	class UFlexLegendDiveKickLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		float PitchTowardsDiveTarget; // 0x1420(0x4)
		float DiveDistanceNormalized; // 0x1424(0x4)
		UAnimMontage* AttackLandMontage; // 0x1428(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FlexLegend_BossDRuntime.FlexLegendDiveKickLayerAnimInstance");
			return ret;
		}
	};

}
