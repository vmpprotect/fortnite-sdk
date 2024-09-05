#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ImageCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		bool IsValid(FSharedImageConstRefBlueprint& Image); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41446D078
		int32_t GetWidth(FSharedImageConstRefBlueprint& Image); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41446CF98
		FVector2f GetSize(FSharedImageConstRefBlueprint& Image); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41446CEB8
		FVector4f GetPixelValue(FSharedImageConstRefBlueprint& Image, int32_t X, int32_t Y, bool& bValid); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41446CDD8
		FLinearColor GetPixelLinearColor(FSharedImageConstRefBlueprint& Image, int32_t X, int32_t Y, bool& bValid, FLinearColor FailureColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41446CCF8
		int32_t GetHeight(FSharedImageConstRefBlueprint& Image); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41446CC18
	};

}
