#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: InterchangeImport
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/InterchangeImport.EMaterialXLuminanceMode
	enum EMaterialXLuminanceMode
	{
		EMaterialXLuminanceMode__ACEScg = 0,
		EMaterialXLuminanceMode__Rec709 = 1,
		EMaterialXLuminanceMode__Rec2020 = 2,
		EMaterialXLuminanceMode__Rec2100 = 2,
		EMaterialXLuminanceMode__Custom = 3,
	};


	// Enum /Script/InterchangeImport.EMaterialXTextureSampleBlurFilter
	enum EMaterialXTextureSampleBlurFilter
	{
		EMaterialXTextureSampleBlurFilter__Box = 0,
		EMaterialXTextureSampleBlurFilter__Gaussian = 1,
	};


	// Enum /Script/InterchangeImport.EMAterialXTextureSampleBlurKernel
	enum EMAterialXTextureSampleBlurKernel
	{
		EMAterialXTextureSampleBlurKernel__Kernel1 = 0,
		EMAterialXTextureSampleBlurKernel__Kernel3 = 1,
		EMAterialXTextureSampleBlurKernel__Kernel5 = 2,
		EMAterialXTextureSampleBlurKernel__Kernel7 = 3,
	};

}
