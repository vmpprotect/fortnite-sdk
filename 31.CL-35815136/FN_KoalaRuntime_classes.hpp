#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: KoalaRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class KoalaRuntime.FortContextualTutorial_GameplayEventKoala
	// Inherited from UFortContextualTutorial_GameplayEvent -> UFortContextualTutorial -> UObject
	// Size: 0x8 (0x170 - 0x168)
	class UFortContextualTutorial_GameplayEventKoala : public UFortContextualTutorial_GameplayEvent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x168(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaRuntime.FortContextualTutorial_GameplayEventKoala");
			return ret;
		}
	};


	// Class KoalaRuntime.KoalaAnalytics
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UKoalaAnalytics : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaRuntime.KoalaAnalytics");
			return ret;
		}
	};


	// Class KoalaRuntime.KoalaGlobals
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UKoalaGlobals : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaRuntime.KoalaGlobals");
			return ret;
		}
	};

}
