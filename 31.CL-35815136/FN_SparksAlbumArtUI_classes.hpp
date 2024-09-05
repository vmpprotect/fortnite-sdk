#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksAlbumArtUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SparksAlbumArtUI.SparksAlbumArtUtils
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USparksAlbumArtUtils : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksAlbumArtUI.SparksAlbumArtUtils");
			return ret;
		}

		bool RequestLazyAlbumArt(USparksAlbumArtManager* AlbumArtManager, FName& SongShortName, UCommonLazyImage* LazyImage); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510605D4(relative to base address)
	};

}
