#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Overlay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Overlay.Overlays
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UOverlays : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Overlay.Overlays");
			return ret;
		}
	};


	// Class Overlay.BasicOverlays
	// Inherited from UOverlays -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UBasicOverlays : public UOverlays	
	{
	public:
		TArray<FOverlayItem> Overlays; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Overlay.BasicOverlays");
			return ret;
		}
	};


	// Class Overlay.LocalizedOverlays
	// Inherited from UOverlays -> UObject
	// Size: 0x58 (0x80 - 0x28)
	class ULocalizedOverlays : public UOverlays	
	{
	public:
		UBasicOverlays* DefaultOverlays; // 0x28(0x8)
		TMap<FString, UBasicOverlays*> LocaleToOverlaysMap; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Overlay.LocalizedOverlays");
			return ret;
		}
	};

}
