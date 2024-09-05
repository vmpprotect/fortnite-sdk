#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Creative
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct /Game/Creative/Devices/Common/PawnHighlight.PawnHighlight
	// Size: 0x30 (0x30 - 0x0)
	struct FPawnHighlight	
	{
	public:
		float Priority_28_E2E1B5344846E187B9C11B863A7F0698; // 0x0(0x4)
		FLinearColor Inner_21_4CC2801147EA190DE16F59B34F36853E; // 0x4(0x10)
		FLinearColor Outer_22_5A1D7D0543D303E8B54B66A7F7BD2E2E; // 0x14(0x10)
		float FresnelBrightness_23_52B0F96447FF640F47DF2895B0602E92; // 0x24(0x4)
		float FresnelExponent_24_B427CF0C441AA37ED49833BF7579DE6D; // 0x28(0x4)
		float UsesPulse_25_E29229F64E540F0617E4C4987AD77605; // 0x2C(0x4)
	};


	// Struct /Game/Creative/Devices/Common/Components/Creative_EnabledState.Creative_EnabledState
	// Size: 0x8 (0x8 - 0x0)
	struct FCreative_EnabledState	
	{
	public:
		TEnumAsByte<EEnabledState> EnabledState_5_1AA41F2A4889E79F9EB31CBEA2AA0731; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float ResetTime_4_627345954070C685370F9CB7BEB6B42C; // 0x4(0x4)
	};

}
