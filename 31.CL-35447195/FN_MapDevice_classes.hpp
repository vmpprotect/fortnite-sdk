#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MapDevice
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MapDevice.CRDMapCustomizationComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xF8 (0x198 - 0xA0)
	class UCRDMapCustomizationComponent : public UActorComponent	
	{
	public:
		TWeakObjectPtr TextureToLoad; // 0xA0(0x20)
		TWeakObjectPtr MaterialToLoad; // 0xC0(0x20)
		UTexture2D LoadedTexture; // 0xE0(0x8)
		UMaterialInterface LoadedMaterial; // 0xE8(0x8)
		unsigned char UnknownData01_7[0xA8]; // 0xF0(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MapDevice.CRDMapCustomizationComponent");
			return ret;
		}

		void SetOverrideSceneCapture(FVector Location, FRotator Rotation, float Width, float Zoom, bool bUseClippingPlanes, float NearClipLength, float FarClipLength); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414D872E0
		void SetOverrideMapTexture(TWeakObjectPtr TextureOverride, FVector Location, FRotator Rotation, float Width, float Zoom); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414D87200
		void SetOverrideMapMaterial(TWeakObjectPtr MaterialOverride, FVector Location, FRotator Rotation, float Width, float Zoom); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414D87120
		void ClearOverrides(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D87040
	};

}
