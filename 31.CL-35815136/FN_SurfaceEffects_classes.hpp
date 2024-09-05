#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SurfaceEffects
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SurfaceEffects.SurfaceEffectsSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class USurfaceEffectsSettings : public UDeveloperSettings	
	{
	public:
		FSoftObjectPath SurfaceEffectsDataTable; // 0x30(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SurfaceEffects.SurfaceEffectsSettings");
			return ret;
		}
	};


	// Class SurfaceEffects.SurfaceEffectRule
	// Inherited from UDataAsset -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class USurfaceEffectRule : public UDataAsset	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SurfaceEffects.SurfaceEffectRule");
			return ret;
		}
	};


	// Class SurfaceEffects.SurfaceEffectsSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class USurfaceEffectsSubsystem : public UGameInstanceSubsystem	
	{
	public:
		UDataTable* SurfaceEffectsData; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SurfaceEffects.SurfaceEffectsSubsystem");
			return ret;
		}
	};

}
