#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VirtualHeightfieldMesh
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VirtualHeightfieldMesh.HeightfieldMinMaxTexture
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UHeightfieldMinMaxTexture : public UObject	
	{
	public:
		UTexture2D* Texture; // 0x28(0x8)
		UTexture2D* LodBiasTexture; // 0x30(0x8)
		UTexture2D* LodBiasMinMaxTexture; // 0x38(0x8)
		int32_t MaxCPULevels; // 0x40(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		TArray<FVector2D> TextureData; // 0x48(0x10)
		FIntPoint TextureDataSize; // 0x58(0x8)
		TArray<int32_t> TextureDataMips; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VirtualHeightfieldMesh.HeightfieldMinMaxTexture");
			return ret;
		}
	};


	// Class VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x10 (0xC0 - 0xB0)
	class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression	
	{
	public:
		UHeightfieldMinMaxTexture* MinMaxTexture; // 0xB0(0x8)
		TEnumAsByte<EMaterialSamplerType> SamplerType; // 0xB8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture");
			return ret;
		}
	};


	// Class VirtualHeightfieldMesh.VirtualHeightfieldMesh
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AVirtualHeightfieldMesh : public AActor	
	{
	public:
		UVirtualHeightfieldMeshComponent* VirtualHeightfieldMeshComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VirtualHeightfieldMesh.VirtualHeightfieldMesh");
			return ret;
		}
	};


	// Class VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x540 - 0x4C8)
	class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent	
	{
	public:
		TWeakObjectPtr<ARuntimeVirtualTextureVolume*> VirtualTexture; // 0x4C8(0x20)
		ARuntimeVirtualTextureVolume* VirtualTextureRef; // 0x4E8(0x8)
		UObject* VirtualTextureThumbnail; // 0x4F0(0x8)
		bool bCopyBoundsButton; // 0x4F8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x4F9(0x7) UNKNOWN PROPERTY
		UHeightfieldMinMaxTexture* MinMaxTexture; // 0x500(0x8)
		int32_t NumMinMaxTextureBuildLevels; // 0x508(0x4)
		bool bBuildMinMaxTextureButton; // 0x50C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x50D(0x3) UNKNOWN PROPERTY
		UMaterialInterface* Material; // 0x510(0x8)
		float LOD0ScreenSize; // 0x518(0x4)
		float Lod0Distribution; // 0x51C(0x4)
		float LodDistribution; // 0x520(0x4)
		float LodBiasScale; // 0x524(0x4)
		int32_t NumForceLoadLods; // 0x528(0x4)
		int32_t NumOcclusionLods; // 0x52C(0x4)
		bool bHiddenInEditor; // 0x530(0x1)
		bool bWorldPositionOffsetVelocity; // 0x531(0x1)
		unsigned char UnknownData02_7[0xE]; // 0x532(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent");
			return ret;
		}

		void GatherHideFlags(bool& InOutHidePrimitivesInEditor, bool& InOutHidePrimitivesInGame); // Flags: Final|Native|Protected|HasOutParms|Const, Memory Exec: 0x7FF752186BAC(relative to base address)
	};

}
