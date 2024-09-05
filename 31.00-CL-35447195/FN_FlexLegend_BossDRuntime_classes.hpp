#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FlexLegend_BossDRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void GetFlexLegendDiveKickData(float& PitchTowardsDiveTarget, float& DiveDistanceToTarget); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414BC6AB8
	};


	// Class FlexLegend_BossDRuntime.FlexLegendDiveKickLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x1420 - 0x1410)
	class UFlexLegendDiveKickLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		float PitchTowardsDiveTarget; // 0x1410(0x4)
		float DiveDistanceNormalized; // 0x1414(0x4)
		UAnimMontage AttackLandMontage; // 0x1418(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FlexLegend_BossDRuntime.FlexLegendDiveKickLayerAnimInstance");
			return ret;
		}
	};

}
