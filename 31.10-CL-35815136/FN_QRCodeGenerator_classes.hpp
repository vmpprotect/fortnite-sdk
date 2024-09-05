#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: QRCodeGenerator
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		UTexture2D GenerateQRCodeTextureFromString(FString StringToEncode); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF74DF7AF84(relative to base address)
	};


	// Class QRCodeGenerator.QRCodeGeneratorUserWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2C8 - 0x2B0)
	class UQRCodeGeneratorUserWidget : public UUserWidget	
	{
	public:
		UTexture2D* QRCodeTexture2D; // 0x2B0(0x8)
		FMulticastInlineDelegate OnQRCodeTextureUpdated; // 0x2B8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/QRCodeGenerator.QRCodeGeneratorUserWidget");
			return ret;
		}

		void EncodeString(FString StringToEncode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF7AEB4(relative to base address)
	};

}
