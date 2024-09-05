#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayStreaming
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GameplayStreaming.BaseGameplayStreamingHandler
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UBaseGameplayStreamingHandler : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStreaming.BaseGameplayStreamingHandler");
			return ret;
		}
	};


	// Class GameplayStreaming.GFNGameplayStreamingHandler
	// Inherited from UBaseGameplayStreamingHandler -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UGFNGameplayStreamingHandler : public UBaseGameplayStreamingHandler	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStreaming.GFNGameplayStreamingHandler");
			return ret;
		}
	};


	// Class GameplayStreaming.LunaGameplayStreamingHandler
	// Inherited from UBaseGameplayStreamingHandler -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class ULunaGameplayStreamingHandler : public UBaseGameplayStreamingHandler	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStreaming.LunaGameplayStreamingHandler");
			return ret;
		}
	};


	// Class GameplayStreaming.SalmonGameplayStreamingHandler
	// Inherited from UBaseGameplayStreamingHandler -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class USalmonGameplayStreamingHandler : public UBaseGameplayStreamingHandler	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStreaming.SalmonGameplayStreamingHandler");
			return ret;
		}
	};


	// Class GameplayStreaming.GameplayStreamingClassLoader
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGameplayStreamingClassLoader : public UObject	
	{
	public:
		FSoftClassPath GameplayStreamingServiceClassName; // 0x28(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStreaming.GameplayStreamingClassLoader");
			return ret;
		}
	};


	// Class GameplayStreaming.GameplayStreamingService
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UGameplayStreamingService : public UObject	
	{
	public:
		UBaseGameplayStreamingHandler ActiveHandler; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStreaming.GameplayStreamingService");
			return ret;
		}
	};

}
