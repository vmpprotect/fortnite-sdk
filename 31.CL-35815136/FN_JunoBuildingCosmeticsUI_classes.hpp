#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoBuildingCosmeticsUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoBuildingCosmeticsUI.JunoBuildSetLockerCategoryConfig
	// Inherited from UAthenaLockerCategoryConfig -> UFortLockerCategoryConfig -> UDataAsset -> UObject
	// Size: 0x0 (0x198 - 0x198)
	class UJunoBuildSetLockerCategoryConfig : public UAthenaLockerCategoryConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBuildingCosmeticsUI.JunoBuildSetLockerCategoryConfig");
			return ret;
		}
	};


	// Class JunoBuildingCosmeticsUI.JunoPropBundleLockerCategoryConfig
	// Inherited from UAthenaLockerCategoryConfig -> UFortLockerCategoryConfig -> UDataAsset -> UObject
	// Size: 0x0 (0x198 - 0x198)
	class UJunoPropBundleLockerCategoryConfig : public UAthenaLockerCategoryConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBuildingCosmeticsUI.JunoPropBundleLockerCategoryConfig");
			return ret;
		}
	};


	// Class JunoBuildingCosmeticsUI.JunoCollectiblesLockerCategoryVM
	// Inherited from UAthenaLockerCategoryVM -> UFortLockerCategoryVM -> UFortBatchViewModel -> UFortPerUserViewModel -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x230 - 0x230)
	class UJunoCollectiblesLockerCategoryVM : public UAthenaLockerCategoryVM	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBuildingCosmeticsUI.JunoCollectiblesLockerCategoryVM");
			return ret;
		}
	};


	// Class JunoBuildingCosmeticsUI.JunoShopBuildSetVM
	// Inherited from UAthenaItemVM -> UFortItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x110 - 0x110)
	class UJunoShopBuildSetVM : public UAthenaItemVM	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBuildingCosmeticsUI.JunoShopBuildSetVM");
			return ret;
		}
	};


	// Class JunoBuildingCosmeticsUI.JunoShopBuildSetItemDetailsVM
	// Inherited from UAthenaItemDetailsVM -> UFortItemDetailsVM -> UMVVMViewModelBase -> UObject
	// Size: 0x40 (0x340 - 0x300)
	class UJunoShopBuildSetItemDetailsVM : public UAthenaItemDetailsVM	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x300(0x20) UNKNOWN PROPERTY
		TArray<FJunoShopBuildPartInfo> Parts; // 0x320(0x10)
		TArray<FJunoShopBuildResourceRequirement> ResourceRequirements; // 0x330(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBuildingCosmeticsUI.JunoShopBuildSetItemDetailsVM");
			return ret;
		}

		int32_t GetTotalPartCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510ECF40(relative to base address)
		TArray GetFormattedPartList(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510ECEC8(relative to base address)
		void ForceUpdateItemDetails(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510ECEB4(relative to base address)
	};


	// Class JunoBuildingCosmeticsUI.JunoShopPropBundleVM
	// Inherited from UAthenaItemVM -> UFortItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x110 - 0x110)
	class UJunoShopPropBundleVM : public UAthenaItemVM	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBuildingCosmeticsUI.JunoShopPropBundleVM");
			return ret;
		}
	};


	// Class JunoBuildingCosmeticsUI.JunoShopPropBundleItemDetailsVM
	// Inherited from UAthenaItemDetailsVM -> UFortItemDetailsVM -> UMVVMViewModelBase -> UObject
	// Size: 0x20 (0x320 - 0x300)
	class UJunoShopPropBundleItemDetailsVM : public UAthenaItemDetailsVM	
	{
	public:
		TArray<FJunoShopPropInfo> Props; // 0x300(0x10)
		TArray<FJunoShopBuildResourceRequirement> ResourceRequirements; // 0x310(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoBuildingCosmeticsUI.JunoShopPropBundleItemDetailsVM");
			return ret;
		}

		TArray GetPropNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510ECF04(relative to base address)
	};

}
