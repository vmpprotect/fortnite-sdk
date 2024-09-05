#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Maps
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct /Game/Maps/UI/FrontendFXData.FrontendFXData
	// Size: 0x80 (0x80 - 0x0)
	struct FFrontendFXData	
	{
	public:
		FTransform Location_9_AA325C52426E915ABCD8DCA54BBB349F; // 0x0(0x60)
		TWeakObjectPtr<UNiagaraSystem*> NiagaraFX_8_127474054B0E4855A2B61394B5701C74; // 0x60(0x20)
	};


	// Struct /Game/Maps/UI/FrontendBackgroundData.FrontendBackgroundData
	// Size: 0x81 (0x81 - 0x0)
	struct FFrontendBackgroundData	
	{
	public:
		TWeakObjectPtr<UTexture*> Texture_2_3547D6284A0E2943DB5EC88EE87E97DF; // 0x0(0x20)
		TWeakObjectPtr<UMaterialInstance*> Material_6_CE9D2295415B51CDF1ED17B4FF554781; // 0x20(0x20)
		TWeakObjectPtr<UMaterialInstance*> PreBlurMaterial_7_D600AA604396EA3D679C70876327DEF8; // 0x40(0x20)
		TArray<FFrontendFXData> SpawnFXList_15_1A6BE00B475CC5544CE786879F76C49C; // 0x60(0x10)
		double FadeGrid_20_F2E82D3040D8341B710155A8337BCAB3; // 0x70(0x8)
		double FadeFloortoBlack_22_216AC34A4AAB1E55AED6918145AD572F; // 0x78(0x8)
		bool ShowBackgroundShapes_25_B3A9B6894AB2C74092C2DF978D2E734D; // 0x80(0x1)
	};

}
