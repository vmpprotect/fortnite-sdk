#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksCosmeticsUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SparksCosmeticsUI.SparksItemLockerCategoryConfig
	// Inherited from UAthenaLockerCategoryConfig -> UFortLockerCategoryConfig -> UDataAsset -> UObject
	// Size: 0x0 (0x198 - 0x198)
	class USparksItemLockerCategoryConfig : public UAthenaLockerCategoryConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCosmeticsUI.SparksItemLockerCategoryConfig");
			return ret;
		}
	};


	// Class SparksCosmeticsUI.SparksItemVM
	// Inherited from UAthenaItemVM -> UFortItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x110 - 0x110)
	class USparksItemVM : public UAthenaItemVM	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCosmeticsUI.SparksItemVM");
			return ret;
		}
	};

}
