#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NeuralMorphModel
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class NeuralMorphModel.NeuralMorphInputInfo
	// Inherited from UMLDeformerMorphModelInputInfo -> UMLDeformerInputInfo -> UObject
	// Size: 0x20 (0x88 - 0x68)
	class UNeuralMorphInputInfo : public UMLDeformerMorphModelInputInfo	
	{
	public:
		TArray BoneGroups; // 0x68(0x10)
		TArray CurveGroups; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NeuralMorphModel.NeuralMorphInputInfo");
			return ret;
		}
	};


	// Class NeuralMorphModel.NeuralMorphModelInstance
	// Inherited from UMLDeformerMorphModelInstance -> UMLDeformerModelInstance -> UObject
	// Size: 0x28 (0xB8 - 0x90)
	class UNeuralMorphModelInstance : public UMLDeformerMorphModelInstance	
	{
	public:
		UNeuralMorphNetworkInstance NetworkInstance; // 0x90(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x98(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NeuralMorphModel.NeuralMorphModelInstance");
			return ret;
		}
	};


	// Class NeuralMorphModel.NeuralMorphModelVizSettings
	// Inherited from UMLDeformerMorphModelVizSettings -> UMLDeformerGeomCacheVizSettings -> UMLDeformerVizSettings -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UNeuralMorphModelVizSettings : public UMLDeformerMorphModelVizSettings	
	{
	public:
		ENeuralMorphMaskVizMode MaskVizMode; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NeuralMorphModel.NeuralMorphModelVizSettings");
			return ret;
		}
	};


	// Class NeuralMorphModel.NeuralMorphMLPLayer
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UNeuralMorphMLPLayer : public UObject	
	{
	public:
		int32_t NumInputs; // 0x28(0x4)
		int32_t NumOutputs; // 0x2C(0x4)
		int32_t Depth; // 0x30(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray Weights; // 0x38(0x10)
		TArray Biases; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NeuralMorphModel.NeuralMorphMLPLayer");
			return ret;
		}
	};


	// Class NeuralMorphModel.NeuralMorphMLP
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNeuralMorphMLP : public UObject	
	{
	public:
		TArray Layers; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NeuralMorphModel.NeuralMorphMLP");
			return ret;
		}
	};


	// Class NeuralMorphModel.NeuralMorphNetwork
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UNeuralMorphNetwork : public UObject	
	{
	public:
		UNeuralMorphMLP MainMLP; // 0x28(0x8)
		UNeuralMorphMLP GroupMLP; // 0x30(0x8)
		UNNEModelData MainModelData; // 0x38(0x8)
		unsigned char UnknownData03_6[0x10]; // 0x40(0x10) UNKNOWN PROPERTY
		UNNEModelData GroupModelData; // 0x50(0x8)
		unsigned char UnknownData04_6[0x10]; // 0x58(0x10) UNKNOWN PROPERTY
		TArray InputMeans; // 0x68(0x10)
		TArray InputStd; // 0x78(0x10)
		ENeuralMorphMode Mode; // 0x88(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x89(0x3) UNKNOWN PROPERTY
		int32_t NumMorphs; // 0x8C(0x4)
		int32_t NumMorphsPerBone; // 0x90(0x4)
		int32_t NumBones; // 0x94(0x4)
		int32_t NumCurves; // 0x98(0x4)
		int32_t NumFloatsPerCurve; // 0x9C(0x4)
		int32_t NumGroups; // 0xA0(0x4)
		int32_t NumItemsPerGroup; // 0xA4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NeuralMorphModel.NeuralMorphNetwork");
			return ret;
		}
	};


	// Class NeuralMorphModel.NeuralMorphNetworkInstance
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UNeuralMorphNetworkInstance : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x50]; // 0x28(0x50) UNKNOWN PROPERTY
		UNeuralMorphNetwork Network; // 0x78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NeuralMorphModel.NeuralMorphNetworkInstance");
			return ret;
		}
	};


	// Class NeuralMorphModel.NeuralMorphModel
	// Inherited from UMLDeformerMorphModel -> UMLDeformerGeomCacheModel -> UMLDeformerModel -> UObject
	// Size: 0x1A0 (0x370 - 0x1D0)
	class UNeuralMorphModel : public UMLDeformerMorphModel	
	{
	public:
		TArray BoneGroups; // 0x1D0(0x10)
		TArray CurveGroups; // 0x1E0(0x10)
		TMap BoneMaskInfos; // 0x1F0(0x50)
		TMap BoneGroupMaskInfos; // 0x240(0x50)
		TMap BoneMaskInfoMap; // 0x290(0x50)
		TMap BoneGroupMaskInfoMap; // 0x2E0(0x50)
		ENeuralMorphMode Mode; // 0x330(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x331(0x3) UNKNOWN PROPERTY
		int32_t LocalNumMorphTargetsPerBone; // 0x334(0x4)
		int32_t GlobalNumMorphTargets; // 0x338(0x4)
		int32_t NumIterations; // 0x33C(0x4)
		int32_t LocalNumHiddenLayers; // 0x340(0x4)
		int32_t LocalNumNeuronsPerLayer; // 0x344(0x4)
		int32_t GlobalNumHiddenLayers; // 0x348(0x4)
		int32_t GlobalNumNeuronsPerLayer; // 0x34C(0x4)
		int32_t BatchSize; // 0x350(0x4)
		float LearningRate; // 0x354(0x4)
		float RegularizationFactor; // 0x358(0x4)
		bool bEnableBoneMasks; // 0x35C(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x35D(0x3) UNKNOWN PROPERTY
		float SmoothLossBeta; // 0x360(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x364(0x4) UNKNOWN PROPERTY
		UNeuralMorphNetwork NeuralMorphNetwork; // 0x368(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NeuralMorphModel.NeuralMorphModel");
			return ret;
		}
	};

}
