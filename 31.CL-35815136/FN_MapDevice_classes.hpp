#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MapDevice
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MapDevice.CRDMapCustomizationComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xF8 (0x198 - 0xA0)
	class UCRDMapCustomizationComponent : public UActorComponent	
	{
	public:
		TWeakObjectPtr<UTexture2D*> TextureToLoad; // 0xA0(0x20)
		TWeakObjectPtr<UMaterialInterface*> MaterialToLoad; // 0xC0(0x20)
		UTexture2D* LoadedTexture; // 0xE0(0x8)
		UMaterialInterface* LoadedMaterial; // 0xE8(0x8)
		unsigned char UnknownData00_7[0xA8]; // 0xF0(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MapDevice.CRDMapCustomizationComponent");
			return ret;
		}

		void SetOverrideSceneCapture(FVector Location, FRotator Rotation, float Width, float Zoom, bool bUseClippingPlanes, float NearClipLength, float FarClipLength); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7516C7694(relative to base address)
		void SetOverrideMapTexture(TWeakObjectPtr<UTexture2D*> TextureOverride, FVector Location, FRotator Rotation, float Width, float Zoom); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7516C71FC(relative to base address)
		void SetOverrideMapMaterial(TWeakObjectPtr<UMaterialInterface*> MaterialOverride, FVector Location, FRotator Rotation, float Width, float Zoom); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7516C6D64(relative to base address)
		void ClearOverrides(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516C6D10(relative to base address)
	};

}
