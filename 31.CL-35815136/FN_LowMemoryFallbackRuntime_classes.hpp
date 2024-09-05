#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LowMemoryFallbackRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class LowMemoryFallbackRuntime.LowMemoryFallbackStrategy
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class ULowMemoryFallbackStrategy : public UObject	
	{
	public:
		FString FriendlyNameForAnalytics; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LowMemoryFallbackRuntime.LowMemoryFallbackStrategy");
			return ret;
		}
	};


	// Class LowMemoryFallbackRuntime.BootToFrontend_LowMemoryFallbackStrategy
	// Inherited from ULowMemoryFallbackStrategy -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UBootToFrontend_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy	
	{
	public:
		FText Message; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LowMemoryFallbackRuntime.BootToFrontend_LowMemoryFallbackStrategy");
			return ret;
		}
	};


	// Class LowMemoryFallbackRuntime.LowMemoryFallbackWorldSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0xE8 (0x118 - 0x30)
	class ULowMemoryFallbackWorldSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x98]; // 0x30(0x98) UNKNOWN PROPERTY
		FString PluginName; // 0xC8(0x10)
		TArray<FLowMemoryFallbackThreshold> Thresholds; // 0xD8(0x10)
		TArray<FLowMemoryFallbackThresholdState> ThresholdStates; // 0xE8(0x10)
		unsigned char UnknownData01_7[0x20]; // 0xF8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LowMemoryFallbackRuntime.LowMemoryFallbackWorldSubsystem");
			return ret;
		}
	};


	// Class LowMemoryFallbackRuntime.Toast_LowMemoryFallbackStrategy
	// Inherited from ULowMemoryFallbackStrategy -> UObject
	// Size: 0x40 (0x78 - 0x38)
	class UToast_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy	
	{
	public:
		FText ToastTitle; // 0x38(0x10)
		FText ToastDescription; // 0x48(0x10)
		TWeakObjectPtr<UObject*> ToastIcon; // 0x58(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LowMemoryFallbackRuntime.Toast_LowMemoryFallbackStrategy");
			return ret;
		}
	};

}
