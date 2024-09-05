#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: QRCodeGenerator
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class QRCodeGenerator.QRCodeGeneratorBlueprintFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UQRCodeGeneratorBlueprintFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/QRCodeGenerator.QRCodeGeneratorBlueprintFunctionLibrary");
			return ret;
		}

		UTexture2D GenerateQRCodeTextureFromString(FString StringToEncode); // Flags: Final|Native|Static|Private|BlueprintCallable 0x7FF414660FF8
	};


	// Class QRCodeGenerator.QRCodeGeneratorUserWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2D0 - 0x2B8)
	class UQRCodeGeneratorUserWidget : public UUserWidget	
	{
	public:
		UTexture2D QRCodeTexture2D; // 0x2B8(0x8)
		FMulticastInlineDelegate OnQRCodeTextureUpdated; // 0x2C0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/QRCodeGenerator.QRCodeGeneratorUserWidget");
			return ret;
		}

		void EncodeString(FString StringToEncode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146610D8
	};

}
