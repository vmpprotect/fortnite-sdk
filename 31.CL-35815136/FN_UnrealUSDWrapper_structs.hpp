#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: UnrealUSDWrapper
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct UnrealUSDWrapper.Matrix2D
	// Size: 0x20 (0x20 - 0x0)
	struct FMatrix2D	
	{
	public:
		FVector2D Row0; // 0x0(0x10)
		FVector2D Row1; // 0x10(0x10)
	};


	// Struct UnrealUSDWrapper.Matrix3D
	// Size: 0x48 (0x48 - 0x0)
	struct FMatrix3D	
	{
	public:
		FVector Row0; // 0x0(0x18)
		FVector Row1; // 0x18(0x18)
		FVector Row2; // 0x30(0x18)
	};

}
