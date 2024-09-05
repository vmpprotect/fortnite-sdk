#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ImagePlate
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ImagePlate.ImagePlate
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AImagePlate : public AActor	
	{
	public:
		UImagePlateComponent* ImagePlate; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ImagePlate.ImagePlate");
			return ret;
		}
	};


	// Class ImagePlate.ImagePlateComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x158 (0x620 - 0x4C8)
	class UImagePlateComponent : public UPrimitiveComponent	
	{
	public:
		FImagePlateParameters Plate; // 0x4C8(0x40)
		unsigned char UnknownData00_7[0x118]; // 0x508(0x118) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ImagePlate.ImagePlateComponent");
			return ret;
		}

		void SetImagePlate(FImagePlateParameters Plate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751EED780(relative to base address)
		void OnRenderTextureChanged(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751EED76C(relative to base address)
		FImagePlateParameters GetPlate(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751EED6F4(relative to base address)
	};


	// Class ImagePlate.ImagePlateSettings
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UImagePlateSettings : public UObject	
	{
	public:
		FString ProxyName; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ImagePlate.ImagePlateSettings");
			return ret;
		}
	};


	// Class ImagePlate.ImagePlateFileSequence
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UImagePlateFileSequence : public UObject	
	{
	public:
		FDirectoryPath SequencePath; // 0x28(0x10)
		FString FileWildcard; // 0x38(0x10)
		float FrameRate; // 0x48(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ImagePlate.ImagePlateFileSequence");
			return ret;
		}
	};


	// Class ImagePlate.ImagePlateFrustumComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x4D0 - 0x4C8)
	class UImagePlateFrustumComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ImagePlate.ImagePlateFrustumComponent");
			return ret;
		}
	};

}
