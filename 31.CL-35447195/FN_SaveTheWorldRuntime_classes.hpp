#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SaveTheWorldRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SaveTheWorldRuntime.FortSTWUIDataBase
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortSTWUIDataBase : public UPrimaryDataAsset	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldRuntime.FortSTWUIDataBase");
			return ret;
		}
	};

}
