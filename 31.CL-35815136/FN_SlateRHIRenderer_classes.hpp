#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SlateRHIRenderer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SlateRHIRenderer.SlateFXSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class USlateFXSubsystem : public UEngineSubsystem	
	{
	public:
		TMap<ESlatePostRT, USlateRHIPostBufferProcessor*> SlatePostBufferProcessors; // 0x30(0x50)
		unsigned char UnknownData00_7[0x50]; // 0x80(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlateRHIRenderer.SlateFXSubsystem");
			return ret;
		}

		USlateRHIPostBufferProcessor GetSlatePostProcessor(ESlatePostRT InPostBufferBit); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0950B4(relative to base address)
	};


	// Class SlateRHIRenderer.SlateRHIPostBufferProcessor
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USlateRHIPostBufferProcessor : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlateRHIRenderer.SlateRHIPostBufferProcessor");
			return ret;
		}
	};


	// Class SlateRHIRenderer.SlatePostBufferBlur
	// Inherited from USlateRHIPostBufferProcessor -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class USlatePostBufferBlur : public USlateRHIPostBufferProcessor	
	{
	public:
		float GaussianBlurStrength; // 0x28(0x4)
		unsigned char UnknownData00_7[0x14]; // 0x2C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlateRHIRenderer.SlatePostBufferBlur");
			return ret;
		}
	};


	// Class SlateRHIRenderer.SlateRHIRendererSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class USlateRHIRendererSettings : public UDeveloperSettings	
	{
	public:
		TMap<ESlatePostRT, FSlatePostSettings> SlatePostSettings; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlateRHIRenderer.SlateRHIRendererSettings");
			return ret;
		}

		FSlatePostSettings GetSlatePostSetting(ESlatePostRT InPostBufferBit); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C095144(relative to base address)
		FSlatePostSettings GetMutableSlatePostSetting(ESlatePostRT InPostBufferBit); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C094FD8(relative to base address)
	};

}
