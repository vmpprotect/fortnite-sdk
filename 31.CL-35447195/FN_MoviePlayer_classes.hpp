#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MoviePlayer
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MoviePlayer.MoviePlayerSettings
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UMoviePlayerSettings : public UObject	
	{
	public:
		bool bWaitForMoviesToComplete; // 0x28(0x1)
		bool bMoviesAreSkippable; // 0x29(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
		TArray StartupMovies; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MoviePlayer.MoviePlayerSettings");
			return ret;
		}
	};

}
