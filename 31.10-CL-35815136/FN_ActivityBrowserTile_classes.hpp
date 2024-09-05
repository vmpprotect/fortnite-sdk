#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ActivityBrowserTile
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserTile.ActivityBrowserTile_C
	// Inherited from UFortActivityBrowserTile -> UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x1450 - 0x1450)
	class UActivityBrowserTile_C : public UFortActivityBrowserTile	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserTile.ActivityBrowserTile_C");
			return ret;
		}
	};

}
