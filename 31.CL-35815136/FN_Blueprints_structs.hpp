#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Blueprints
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct /GrindRail/Blueprints/GrindRail_TipOptions.GrindRail_TipOptions
	// Size: 0x2 (0x2 - 0x0)
	struct FGrindRail_TipOptions	
	{
	public:
		bool CapStartTip_14_BE02D3114E8D77DE637964B9E3B9BF78; // 0x0(0x1)
		bool CapEndTip_15_1938E7644D71206872041C932B0DF129; // 0x1(0x1)
	};


	// Struct /GrindRail/Blueprints/GrindRail_Booster_Directional.GrindRail_Booster_Directional
	// Size: 0x13 (0x13 - 0x0)
	struct FGrindRail_Booster_Directional	
	{
	public:
		double LocationOnRailinTiles_21_4C298D7E43D6D531E9294D9EBF6D35AF; // 0x0(0x8)
		double LengthinTiles_22_72B92E3B4647946BC77E16B7C38E3157; // 0x8(0x8)
		bool FlipLocation_24_A14D038B4CE3B99F148CE080581B9B64; // 0x10(0x1)
		TEnumAsByte<GleefulRake_BoosterMode> PositiveMode_18_F5DE4E09428A0EE407A054BBEDC68176; // 0x11(0x1)
		TEnumAsByte<GleefulRake_BoosterMode> NegativeMode_20_6D6ECC5845390875BEC167B11090B704; // 0x12(0x1)
	};

}
