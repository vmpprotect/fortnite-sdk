#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksAlbumArtRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SparksAlbumArtRuntime.SparksAlbumArtData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class USparksAlbumArtData : public UPrimaryDataAsset	
	{
	public:
		UDataTable BakedAlbumArt; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksAlbumArtRuntime.SparksAlbumArtData");
			return ret;
		}
	};


	// Class SparksAlbumArtRuntime.SparksAlbumArtManager
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class USparksAlbumArtManager : public UGameInstanceSubsystem	
	{
	public:
		USparksAlbumArtData AlbumArtData; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksAlbumArtRuntime.SparksAlbumArtManager");
			return ret;
		}

		bool RequestAlbumArt(FName& SongShortName, FDelegateProperty OnRequestFinished); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C07338
	};

}
