#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksAlbumArtUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		bool RequestLazyAlbumArt(USparksAlbumArtManager AlbumArtManager, FName& SongShortName, UCommonLazyImage LazyImage); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C12318
	};

}
