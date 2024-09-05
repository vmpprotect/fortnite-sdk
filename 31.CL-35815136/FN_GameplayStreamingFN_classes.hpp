#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayStreamingFN
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GameplayStreamingFN.FortLocalPlayerAccountHelper
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UFortLocalPlayerAccountHelper : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x28(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStreamingFN.FortLocalPlayerAccountHelper");
			return ret;
		}
	};


	// Class GameplayStreamingFN.FortGFNGameplayStreamingHandler
	// Inherited from UGFNGameplayStreamingHandler -> UBaseGameplayStreamingHandler -> UObject
	// Size: 0x38 (0xB0 - 0x78)
	class UFortGFNGameplayStreamingHandler : public UGFNGameplayStreamingHandler	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x78(0x8) UNKNOWN PROPERTY
		UFortLocalPlayerAccountHelper* FortLocalPlayerAccountHelper; // 0x80(0x8)
		TWeakObjectPtr<UFortOnlineAccount*> WeakFortOnlineAccount; // 0x88(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x90(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStreamingFN.FortGFNGameplayStreamingHandler");
			return ret;
		}
	};


	// Class GameplayStreamingFN.FortLunaGameplayStreamingHandler
	// Inherited from ULunaGameplayStreamingHandler -> UBaseGameplayStreamingHandler -> UObject
	// Size: 0x80 (0xF8 - 0x78)
	class UFortLunaGameplayStreamingHandler : public ULunaGameplayStreamingHandler	
	{
	public:
		unsigned char UnknownData00_3[0x58]; // 0x78(0x58) UNKNOWN PROPERTY
		UFortLocalPlayerAccountHelper* FortLocalPlayerAccountHelper; // 0xD0(0x8)
		TWeakObjectPtr<UFortOnlineAccount*> WeakFortOnlineAccount; // 0xD8(0x8)
		unsigned char UnknownData01_6[0x8]; // 0xE0(0x8) UNKNOWN PROPERTY
		TArray<FGameEntryDeepLink> GameEntryDeepLinks; // 0xE8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStreamingFN.FortLunaGameplayStreamingHandler");
			return ret;
		}
	};


	// Class GameplayStreamingFN.FortSalmonGameplayStreamingHandler
	// Inherited from USalmonGameplayStreamingHandler -> UBaseGameplayStreamingHandler -> UObject
	// Size: 0x18 (0x90 - 0x78)
	class UFortSalmonGameplayStreamingHandler : public USalmonGameplayStreamingHandler	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x78(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStreamingFN.FortSalmonGameplayStreamingHandler");
			return ret;
		}
	};


	// Class GameplayStreamingFN.FortGameplayStreamingHandler
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortGameplayStreamingHandler : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStreamingFN.FortGameplayStreamingHandler");
			return ret;
		}
	};


	// Class GameplayStreamingFN.FortGameplayStreamingService
	// Inherited from UGameplayStreamingService -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortGameplayStreamingService : public UGameplayStreamingService	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStreamingFN.FortGameplayStreamingService");
			return ret;
		}
	};

}
