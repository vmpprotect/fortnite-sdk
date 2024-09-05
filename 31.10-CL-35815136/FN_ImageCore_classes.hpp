#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ImageCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ImageCore.SharedImageConstRefBlueprintFns
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USharedImageConstRefBlueprintFns : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ImageCore.SharedImageConstRefBlueprintFns");
			return ret;
		}

		bool IsValid(FSharedImageConstRefBlueprint& Image); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74B5C85D8(relative to base address)
		int32_t GetWidth(FSharedImageConstRefBlueprint& Image); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74B5C8510(relative to base address)
		FVector2f GetSize(FSharedImageConstRefBlueprint& Image); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74B5C841C(relative to base address)
		FVector4f GetPixelValue(FSharedImageConstRefBlueprint& Image, int32_t X, int32_t Y, bool& bValid); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74B5C8178(relative to base address)
		FLinearColor GetPixelLinearColor(FSharedImageConstRefBlueprint& Image, int32_t X, int32_t Y, bool& bValid, FLinearColor FailureColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74B5C7E04(relative to base address)
		int32_t GetHeight(FSharedImageConstRefBlueprint& Image); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74B5C7D3C(relative to base address)
	};

}
