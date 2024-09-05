#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortniteEngineLoadingScreen
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FortniteEngineLoadingScreen.FortniteUserInterfaceSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x550 (0x580 - 0x30)
	class UFortniteUserInterfaceSettings : public UDeveloperSettings	
	{
	public:
		FRuntimeFloatCurve WidthScaleCurve; // 0x30(0x88)
		FRuntimeFloatCurve HeightScaleCurve; // 0xB8(0x88)
		FRuntimeFloatCurve WidthScaleCurve_iOS_InGame; // 0x140(0x88)
		FRuntimeFloatCurve HeightScaleCurve_iOS_InGame; // 0x1C8(0x88)
		FRuntimeFloatCurve WidthScaleCurve_iOS_FrontEnd; // 0x250(0x88)
		FRuntimeFloatCurve HeightScaleCurve_iOS_FrontEnd; // 0x2D8(0x88)
		FRuntimeFloatCurve WidthScaleCurve_Android_InGame; // 0x360(0x88)
		FRuntimeFloatCurve HeightScaleCurve_Android_InGame; // 0x3E8(0x88)
		FRuntimeFloatCurve WidthScaleCurve_Android_FrontEnd; // 0x470(0x88)
		FRuntimeFloatCurve HeightScaleCurve_Android_FrontEnd; // 0x4F8(0x88)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteEngineLoadingScreen.FortniteUserInterfaceSettings");
			return ret;
		}
	};

}
