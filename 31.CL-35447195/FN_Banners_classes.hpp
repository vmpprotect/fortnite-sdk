#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Banners
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void UpdateBannerIconOnMaterial(UMaterialInstanceDynamic Material, UTexture Icon, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D6C034B00
		void UpdateBannerColorOnMaterial(UMaterialInstanceDynamic Material, FLinearColor PrimaryBGColor, FLinearColor SecondaryBGColor, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D66EDE300
		void GenericUpdateMaterial(UMaterialInstanceDynamic Target, UTexture BannerIcon, FLinearColor BG_PrimaryColor, FLinearColor BG_SecondaryColor, UTexture ShapeIcon, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D6B59F500
	};

}
