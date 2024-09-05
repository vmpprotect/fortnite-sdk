#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ImagePlate
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ImagePlate.ImagePlate
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AImagePlate : public AActor	
	{
	public:
		UImagePlateComponent ImagePlate; // 0x290(0x8)

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
		unsigned char UnknownData01_7[0x118]; // 0x508(0x118) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ImagePlate.ImagePlateComponent");
			return ret;
		}

		void SetImagePlate(FImagePlateParameters Plate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E9BF60
		void OnRenderTextureChanged(); // Flags: Final|Native|Public 0x7FF414E9BE80
		FImagePlateParameters GetPlate(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E9BDA0
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
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ImagePlate.ImagePlateFrustumComponent");
			return ret;
		}
	};

}
