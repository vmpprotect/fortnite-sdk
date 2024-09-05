#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VehiclesFrontend
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VehiclesFrontend.DelMarItemDetailsVM
	// Inherited from UAthenaItemDetailsVM -> UFortItemDetailsVM -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x300 - 0x300)
	class UDelMarItemDetailsVM : public UAthenaItemDetailsVM	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehiclesFrontend.DelMarItemDetailsVM");
			return ret;
		}
	};


	// Class VehiclesFrontend.DelMarItemVM
	// Inherited from UAthenaItemVM -> UFortItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x110 - 0x110)
	class UDelMarItemVM : public UAthenaItemVM	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehiclesFrontend.DelMarItemVM");
			return ret;
		}
	};


	// Class VehiclesFrontend.DelMarLockerCategoryConfig
	// Inherited from UAthenaLockerCategoryConfig -> UFortLockerCategoryConfig -> UDataAsset -> UObject
	// Size: 0x0 (0x198 - 0x198)
	class UDelMarLockerCategoryConfig : public UAthenaLockerCategoryConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehiclesFrontend.DelMarLockerCategoryConfig");
			return ret;
		}
	};


	// Class VehiclesFrontend.DelMarLockerCategoryVM
	// Inherited from UAthenaLockerCategoryVM -> UFortLockerCategoryVM -> UFortBatchViewModel -> UFortPerUserViewModel -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x230 - 0x230)
	class UDelMarLockerCategoryVM : public UAthenaLockerCategoryVM	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehiclesFrontend.DelMarLockerCategoryVM");
			return ret;
		}
	};

}
