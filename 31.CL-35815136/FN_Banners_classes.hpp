#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Banners
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/Banners/BannerLibrary.BannerLibrary_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBannerLibrary_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Banners/BannerLibrary.BannerLibrary_C");
			return ret;
		}

		void UpdateBannerIconOnMaterial(UMaterialInstanceDynamic* Material, UTexture* Icon, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateBannerColorOnMaterial(UMaterialInstanceDynamic* Material, FLinearColor PrimaryBGColor, FLinearColor SecondaryBGColor, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GenericUpdateMaterial(UMaterialInstanceDynamic* Target, UTexture* BannerIcon, FLinearColor BG_PrimaryColor, FLinearColor BG_SecondaryColor, UTexture* ShapeIcon, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
