#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Rig
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct /FigureCharacter/Rig/Data/CharacterAcc/Figure_PushAwayControl_Struct.Figure_PushAwayControl_Struct
	// Size: 0x150 (0x150 - 0x0)
	struct FFigure_PushAwayControl_Struct	
	{
	public:
		FRigElementKey Affector_2_0F932BFA4FD7345127F934B9413237B3; // 0x0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform AffectorOffset_5_599FE47240583AD027829FBF112F6535; // 0x10(0x60)
		double InnerRadius_8_917B22284DAEE1BBD88B7B83290F3986; // 0x70(0x8)
		double Radius_10_0EDB5CC245EAF1283DBF25AC54A9DD76; // 0x78(0x8)
		double OutterRadius_12_DAEDB4B14711B5DBC7B148BEB0E6ECDB; // 0x80(0x8)
		double TranslateMultiplier_14_1EF925E44F205CD825FB4A9449D399D6; // 0x88(0x8)
		double RotateMultiplier_16_99E3F7034B9EE85B2D6085BF24E4BCE9; // 0x90(0x8)
		double ScaleUMultiplier_18_B3291BED4BAA082AB5582E948F242433; // 0x98(0x8)
		double ScaleVMultiplier_20_775F7EA94B19B923A837E288EA29402F; // 0xA0(0x8)
		double OuterTranslateMultiplier_25_1211C9294DF099D3B75B9B8E22050470; // 0xA8(0x8)
		double OuterRotateMultiplier_26_ED955A2A412C8CEE32E2859BC05C235F; // 0xB0(0x8)
		double OuterScaleUMultiplier_28_0CF915C54896A4E25EA294828EF2362A; // 0xB8(0x8)
		double OuterScaleVMultiplier_30_4FEAAF224A35828D6F1EE2AD379FA0E5; // 0xC0(0x8)
		unsigned char UnknownData01_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		FTransform ScaleOffsetfromChild_33_84F9356748F26B1DFB0FDDA3A97B15DF; // 0xD0(0x60)
		FVector InitialCords_37_C80DCD7E41F3C6BA7F1F9F8002AC2EF9; // 0x130(0x18)
		FRigElementKey DrivenControl_40_C18ED7444157F3A0F3182D9ACA8188B8; // 0x148(0x8)
	};

}
