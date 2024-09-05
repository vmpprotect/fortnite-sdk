#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MLDeformerFramework
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MLDeformerFramework.MLDeformerAsset
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UMLDeformerAsset : public UObject	
	{
	public:
		UMLDeformerModel Model; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerFramework.MLDeformerAsset");
			return ret;
		}
	};


	// Class MLDeformerFramework.MLDeformerVizSettings
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMLDeformerVizSettings : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerFramework.MLDeformerVizSettings");
			return ret;
		}
	};


	// Class MLDeformerFramework.MLDeformerGeomCacheVizSettings
	// Inherited from UMLDeformerVizSettings -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMLDeformerGeomCacheVizSettings : public UMLDeformerVizSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerFramework.MLDeformerGeomCacheVizSettings");
			return ret;
		}
	};


	// Class MLDeformerFramework.MLDeformerMorphModelVizSettings
	// Inherited from UMLDeformerGeomCacheVizSettings -> UMLDeformerVizSettings -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UMLDeformerMorphModelVizSettings : public UMLDeformerGeomCacheVizSettings	
	{
	public:
		float MorphTargetDeltaThreshold; // 0x28(0x4)
		int32_t MorphTargetNumber; // 0x2C(0x4)
		bool bDrawMorphTargets; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerFramework.MLDeformerMorphModelVizSettings");
			return ret;
		}
	};


	// Class MLDeformerFramework.MLDeformerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x40 (0xE0 - 0xA0)
	class UMLDeformerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_3[0x28]; // 0xA0(0x28) UNKNOWN PROPERTY
		UMLDeformerAsset DeformerAsset; // 0xC8(0x8)
		float Weight; // 0xD0(0x4)
		int32_t QualityLevel; // 0xD4(0x4)
		UMLDeformerModelInstance ModelInstance; // 0xD8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerFramework.MLDeformerComponent");
			return ret;
		}

		void UpdateSkeletalMeshComponent(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0A5F8
		void SetWeight(float NormalizedWeightValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0A518
		void SetQualityLevel(int32_t InQualityLevel); // Flags: Final|Native|Public 0x7FF414D0A438
		void SetDeformerAsset(UMLDeformerAsset InDeformerAsset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0A358
		float GetWeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D0A278
		USkeletalMeshComponent GetSkeletalMeshComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D0A198
		int32_t GetQualityLevel(); // Flags: Final|Native|Public|Const 0x7FF414D0A0B8
		UMLDeformerModelInstance GetModelInstance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D09FD8
		UMLDeformerAsset GetDeformerAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D09EF8
		USkeletalMeshComponent FindSkeletalMeshComponent(UMLDeformerAsset Asset); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D09E18
	};


	// Class MLDeformerFramework.MLDeformerComponentSource
	// Inherited from UOptimusComponentSource -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMLDeformerComponentSource : public UOptimusComponentSource	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerFramework.MLDeformerComponentSource");
			return ret;
		}
	};


	// Class MLDeformerFramework.MLDeformerModel
	// Inherited from UObject
	// Size: 0xE8 (0x110 - 0x28)
	class UMLDeformerModel : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x98]; // 0x28(0x98) UNKNOWN PROPERTY
		int32_t NumBaseMeshVerts; // 0xC0(0x4)
		int32_t NumTargetMeshVerts; // 0xC4(0x4)
		FString TrainingDevice; // 0xC8(0x10)
		unsigned char UnknownData04_6[0x10]; // 0xD8(0x10) UNKNOWN PROPERTY
		int32_t MaxNumLODs; // 0xE8(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
		UMLDeformerInputInfo InputInfo; // 0xF0(0x8)
		TArray VertexMap; // 0xF8(0x10)
		USkeletalMesh SkeletalMesh; // 0x108(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerFramework.MLDeformerModel");
			return ret;
		}

		void SetTrainingDevice(FString DeviceName); // Flags: Final|Native|Public 0x7FF414D0A898
		TArray GetTrainingDeviceList(); // Flags: Final|Native|Public|Const 0x7FF414D0A7B8
		FString GetTrainingDevice(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D0A6D8
	};


	// Class MLDeformerFramework.MLDeformerGeomCacheModel
	// Inherited from UMLDeformerModel -> UObject
	// Size: 0x0 (0x110 - 0x110)
	class UMLDeformerGeomCacheModel : public UMLDeformerModel	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerFramework.MLDeformerGeomCacheModel");
			return ret;
		}
	};


	// Class MLDeformerFramework.MLDeformerGraphDebugDataInterface
	// Inherited from UOptimusComputeDataInterface -> UComputeDataInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMLDeformerGraphDebugDataInterface : public UOptimusComputeDataInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerFramework.MLDeformerGraphDebugDataInterface");
			return ret;
		}
	};


	// Class MLDeformerFramework.MLDeformerGraphDebugDataProvider
	// Inherited from UComputeDataProvider -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UMLDeformerGraphDebugDataProvider : public UComputeDataProvider	
	{
	public:
		UMLDeformerComponent DeformerComponent; // 0x28(0x8)
		UMLDeformerAsset DeformerAsset; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerFramework.MLDeformerGraphDebugDataProvider");
			return ret;
		}
	};


	// Class MLDeformerFramework.MLDeformerInputInfo
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UMLDeformerInputInfo : public UObject	
	{
	public:
		FSoftObjectPath SkeletalMesh; // 0x28(0x18)
		TArray BoneNames; // 0x40(0x10)
		TArray CurveNames; // 0x50(0x10)
		int32_t NumBaseMeshVertices; // 0x60(0x4)
		int32_t NumTargetMeshVertices; // 0x64(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerFramework.MLDeformerInputInfo");
			return ret;
		}
	};


	// Class MLDeformerFramework.MLDeformerModelInstance
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UMLDeformerModelInstance : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UMLDeformerModel Model; // 0x30(0x8)
		unsigned char UnknownData03_7[0x50]; // 0x38(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerFramework.MLDeformerModelInstance");
			return ret;
		}
	};


	// Class MLDeformerFramework.MLDeformerMorphModel
	// Inherited from UMLDeformerGeomCacheModel -> UMLDeformerModel -> UObject
	// Size: 0xC0 (0x1D0 - 0x110)
	class UMLDeformerMorphModel : public UMLDeformerGeomCacheModel	
	{
	public:
		unsigned char UnknownData05_3[0x20]; // 0x110(0x20) UNKNOWN PROPERTY
		bool bClampMorphWeights; // 0x130(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x131(0x7) UNKNOWN PROPERTY
		TArray MorphTargetDeltas; // 0x138(0x10)
		int32_t NumMorphTargets; // 0x148(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		uint64_t CompressedMorphDataSizeInBytes; // 0x150(0x8)
		uint64_t UncompressedMorphDataSizeInBytes; // 0x158(0x8)
		TArray MorphTargetErrorOrder; // 0x160(0x10)
		TArray MorphTargetErrors; // 0x170(0x10)
		TArray MaxMorphWeights; // 0x180(0x10)
		TArray MorphTargetsMinMaxWeights; // 0x190(0x10)
		TArray QualityLevels; // 0x1A0(0x10)
		bool bIncludeNormals; // 0x1B0(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x1B1(0x3) UNKNOWN PROPERTY
		float MorphDeltaZeroThreshold; // 0x1B4(0x4)
		float MorphCompressionLevel; // 0x1B8(0x4)
		EMLDeformerMaskChannel MaskChannel; // 0x1BC(0x1)
		bool bInvertMaskChannel; // 0x1BD(0x1)
		unsigned char UnknownData09_7[0x12]; // 0x1BE(0x12) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerFramework.MLDeformerMorphModel");
			return ret;
		}

		void SetMorphTargetsMinMaxWeights(TArray& MinValues, TArray& MaxValues); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D0ADD8
		void SetMorphTargetsMaxWeights(TArray& MaxWeights); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D0ACF8
		void SetMorphTargetsErrorOrder(TArray& MorphTargetOrder, TArray& ErrorValues); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D0AC18
		void SetMorphTargetDeltas(TArray& Deltas); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D0AB38
		void SetMorphTargetDeltaFloats(TArray& Deltas); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D0AA58
		bool CanDynamicallyUpdateMorphTargets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D0A978
	};


	// Class MLDeformerFramework.MLDeformerMorphModelInputInfo
	// Inherited from UMLDeformerInputInfo -> UObject
	// Size: 0x0 (0x68 - 0x68)
	class UMLDeformerMorphModelInputInfo : public UMLDeformerInputInfo	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerFramework.MLDeformerMorphModelInputInfo");
			return ret;
		}
	};


	// Class MLDeformerFramework.MLDeformerMorphModelInstance
	// Inherited from UMLDeformerModelInstance -> UObject
	// Size: 0x8 (0x90 - 0x88)
	class UMLDeformerMorphModelInstance : public UMLDeformerModelInstance	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerFramework.MLDeformerMorphModelInstance");
			return ret;
		}
	};

}
