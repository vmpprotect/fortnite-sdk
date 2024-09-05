#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GLTFExporter
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GLTFExporter.GLTFExportOptions
	// Inherited from UObject
	// Size: 0x88 (0xB0 - 0x28)
	class UGLTFExportOptions : public UObject	
	{
	public:
		float ExportUniformScale; // 0x28(0x4)
		bool bExportPreviewMesh; // 0x2C(0x1)
		bool bSkipNearDefaultValues; // 0x2D(0x1)
		bool bIncludeCopyrightNotice; // 0x2E(0x1)
		bool bExportProxyMaterials; // 0x2F(0x1)
		bool bUseImporterMaterialMapping; // 0x30(0x1)
		bool bExportUnlitMaterials; // 0x31(0x1)
		bool bExportClearCoatMaterials; // 0x32(0x1)
		bool bExportClothMaterials; // 0x33(0x1)
		bool bExportThinTranslucentMaterials; // 0x34(0x1)
		bool bExportSpecularGlossinessMaterials; // 0x35(0x1)
		bool bExportEmissiveStrength; // 0x36(0x1)
		EGLTFMaterialBakeMode BakeMaterialInputs; // 0x37(0x1)
		FGLTFMaterialBakeSize DefaultMaterialBakeSize; // 0x38(0xC)
		TEnumAsByte<TextureFilter> DefaultMaterialBakeFilter; // 0x44(0x1)
		TEnumAsByte<TextureAddress> DefaultMaterialBakeTiling; // 0x45(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x46(0x2) UNKNOWN PROPERTY
		TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings; // 0x48(0x50)
		int32_t DefaultLevelOfDetail; // 0x98(0x4)
		bool bExportVertexColors; // 0x9C(0x1)
		bool bExportVertexSkinWeights; // 0x9D(0x1)
		bool bMakeSkinnedMeshesRoot; // 0x9E(0x1)
		bool bUseMeshQuantization; // 0x9F(0x1)
		bool bExportLevelSequences; // 0xA0(0x1)
		bool bExportAnimationSequences; // 0xA1(0x1)
		EGLTFTextureImageFormat TextureImageFormat; // 0xA2(0x1)
		unsigned char UnknownData01_6[0x1]; // 0xA3(0x1) UNKNOWN PROPERTY
		int32_t TextureImageQuality; // 0xA4(0x4)
		bool bExportTextureTransforms; // 0xA8(0x1)
		bool bAdjustNormalmaps; // 0xA9(0x1)
		bool bExportHiddenInGame; // 0xAA(0x1)
		bool bExportLights; // 0xAB(0x1)
		bool bExportCameras; // 0xAC(0x1)
		EGLTFMaterialVariantMode ExportMaterialVariants; // 0xAD(0x1)
		unsigned char UnknownData02_7[0x2]; // 0xAE(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GLTFExporter.GLTFExportOptions");
			return ret;
		}

		void ResetToDefault(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752235F80(relative to base address)
	};


	// Class GLTFExporter.GLTFExporter
	// Inherited from UExporter -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UGLTFExporter : public UExporter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GLTFExporter.GLTFExporter");
			return ret;
		}

		bool ExportToGLTF(UObject* Object, FString FilePath, UGLTFExportOptions* Options, TSet<AActor*>& SelectedActors, FGLTFExportMessages& OutMessages); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752235D48(relative to base address)
	};


	// Class GLTFExporter.GLTFAnimSequenceExporter
	// Inherited from UGLTFExporter -> UExporter -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UGLTFAnimSequenceExporter : public UGLTFExporter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GLTFExporter.GLTFAnimSequenceExporter");
			return ret;
		}
	};


	// Class GLTFExporter.GLTFLevelExporter
	// Inherited from UGLTFExporter -> UExporter -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UGLTFLevelExporter : public UGLTFExporter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GLTFExporter.GLTFLevelExporter");
			return ret;
		}
	};


	// Class GLTFExporter.GLTFLevelSequenceExporter
	// Inherited from UGLTFExporter -> UExporter -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UGLTFLevelSequenceExporter : public UGLTFExporter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GLTFExporter.GLTFLevelSequenceExporter");
			return ret;
		}
	};


	// Class GLTFExporter.GLTFLevelVariantSetsExporter
	// Inherited from UGLTFExporter -> UExporter -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UGLTFLevelVariantSetsExporter : public UGLTFExporter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GLTFExporter.GLTFLevelVariantSetsExporter");
			return ret;
		}
	};


	// Class GLTFExporter.GLTFMaterialExporter
	// Inherited from UGLTFExporter -> UExporter -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UGLTFMaterialExporter : public UGLTFExporter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GLTFExporter.GLTFMaterialExporter");
			return ret;
		}
	};


	// Class GLTFExporter.GLTFSkeletalMeshExporter
	// Inherited from UGLTFExporter -> UExporter -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UGLTFSkeletalMeshExporter : public UGLTFExporter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GLTFExporter.GLTFSkeletalMeshExporter");
			return ret;
		}
	};


	// Class GLTFExporter.GLTFStaticMeshExporter
	// Inherited from UGLTFExporter -> UExporter -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UGLTFStaticMeshExporter : public UGLTFExporter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GLTFExporter.GLTFStaticMeshExporter");
			return ret;
		}
	};


	// Class GLTFExporter.GLTFProxyOptions
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UGLTFProxyOptions : public UObject	
	{
	public:
		bool bBakeMaterialInputs; // 0x28(0x1)
		bool bUseThinTranslucentShadingModel; // 0x29(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		FGLTFMaterialBakeSize DefaultMaterialBakeSize; // 0x2C(0xC)
		TEnumAsByte<TextureFilter> DefaultMaterialBakeFilter; // 0x38(0x1)
		TEnumAsByte<TextureAddress> DefaultMaterialBakeTiling; // 0x39(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
		TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings; // 0x40(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GLTFExporter.GLTFProxyOptions");
			return ret;
		}

		void ResetToDefault(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752235F94(relative to base address)
	};


	// Class GLTFExporter.GLTFMaterialExportOptions
	// Inherited from UAssetUserData -> UObject
	// Size: 0x70 (0x98 - 0x28)
	class UGLTFMaterialExportOptions : public UAssetUserData	
	{
	public:
		UMaterialInterface* Proxy; // 0x28(0x8)
		FGLTFOverrideMaterialBakeSettings Default; // 0x30(0x14)
		unsigned char UnknownData00_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> Inputs; // 0x48(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GLTFExporter.GLTFMaterialExportOptions");
			return ret;
		}
	};

}
