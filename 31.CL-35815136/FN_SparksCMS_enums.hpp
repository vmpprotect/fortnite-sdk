#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksCMS
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/SparksCMS.ESparksSongAgeRating
	enum ESparksSongAgeRating
	{
		ESparksSongAgeRating__None = 0,
		ESparksSongAgeRating__E = 1,
		ESparksSongAgeRating__E10p = 2,
		ESparksSongAgeRating__T = 3,
	};


	// Enum /Script/SparksCMS.ESparksGenre
	enum ESparksGenre
	{
		ESparksGenre__None = 0,
		ESparksGenre__RapHipHop = 1,
		ESparksGenre__RnB = 2,
		ESparksGenre__Pop = 3,
		ESparksGenre__Rock = 4,
		ESparksGenre__DanceElectronic = 5,
		ESparksGenre__Country = 6,
		ESparksGenre__LatinCarribean = 7,
		ESparksGenre__Other = 8,
		ESparksGenre__Count = 9,
	};


	// Enum /Script/SparksCMS.ESongSortMethod
	enum ESongSortMethod
	{
		ESongSortMethod__Title = 0,
		ESongSortMethod__Shortname = 1,
		ESongSortMethod__Artist = 2,
		ESongSortMethod__Album = 3,
		ESongSortMethod__Genre = 4,
		ESongSortMethod__ReleaseYear = 5,
		ESongSortMethod__None = 6,
	};


	// Enum /Script/SparksCMS.ESongSortDirection
	enum ESongSortDirection
	{
		ESongSortDirection__Ascending = 0,
		ESongSortDirection__Descending = 1,
		ESongSortDirection__None = 2,
	};

}
