#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NearestNeighborModel
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class NearestNeighborModel.NearestNeighborModelVizSettings
	// Inherited from UMLDeformerMorphModelVizSettings -> UMLDeformerGeomCacheVizSettings -> UMLDeformerVizSettings -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UNearestNeighborModelVizSettings : public UMLDeformerMorphModelVizSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NearestNeighborModel.NearestNeighborModelVizSettings");
			return ret;
		}
	};


	// Class NearestNeighborModel.NearestNeighborNetworkLayer
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UNearestNeighborNetworkLayer : public UObject	
	{
	public:
		int32_t NumInputs; // 0x28(0x4)
		int32_t NumOutputs; // 0x2C(0x4)
		TArray<FNearestNeighborNetworkParameter> Parameters; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NearestNeighborModel.NearestNeighborNetworkLayer");
			return ret;
		}
	};


	// Class NearestNeighborModel.NearestNeighborNetworkLayer_Gemm_Prelu
	// Inherited from UNearestNeighborNetworkLayer -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UNearestNeighborNetworkLayer_Gemm_Prelu : public UNearestNeighborNetworkLayer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NearestNeighborModel.NearestNeighborNetworkLayer_Gemm_Prelu");
			return ret;
		}
	};


	// Class NearestNeighborModel.NearestNeighborNetworkLayer_Gemm
	// Inherited from UNearestNeighborNetworkLayer -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UNearestNeighborNetworkLayer_Gemm : public UNearestNeighborNetworkLayer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NearestNeighborModel.NearestNeighborNetworkLayer_Gemm");
			return ret;
		}
	};


	// Class NearestNeighborModel.NearestNeighborOptimizedNetwork
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UNearestNeighborOptimizedNetwork : public UObject	
	{
	public:
		UNNEModelData* ModelData; // 0x28(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		int32_t NumInputs; // 0x40(0x4)
		int32_t NumOutputs; // 0x44(0x4)
		TArray<UNearestNeighborNetworkLayer*> Layers; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NearestNeighborModel.NearestNeighborOptimizedNetwork");
			return ret;
		}

		void Empty(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF746F37328(relative to base address)
	};


	// Class NearestNeighborModel.NearestNeighborOptimizedNetworkInstance
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UNearestNeighborOptimizedNetworkInstance : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x28(0x30) UNKNOWN PROPERTY
		UNearestNeighborOptimizedNetwork* Network; // 0x58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NearestNeighborModel.NearestNeighborOptimizedNetworkInstance");
			return ret;
		}
	};


	// Class NearestNeighborModel.NearestNeighborOptimizedNetworkLoader
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UNearestNeighborOptimizedNetworkLoader : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NearestNeighborModel.NearestNeighborOptimizedNetworkLoader");
			return ret;
		}

		bool LoadOptimizedNetwork(FString OnnxPath); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UNearestNeighborOptimizedNetwork GetOptimizedNetwork(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DE734A8(relative to base address)
	};


	// Class NearestNeighborModel.NearestNeighborModelSection
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UNearestNeighborModelSection : public UObject	
	{
	public:
		int32_t NumPCACoeffs; // 0x28(0x4)
		int32_t NumVertices; // 0x2C(0x4)
		int32_t RuntimeNumNeighbors; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray<float> RuntimeNeighborCoeffs; // 0x38(0x10)
		bool bIsReadyForTraining; // 0x48(0x1)
		bool bIsReadyForInference; // 0x49(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NearestNeighborModel.NearestNeighborModelSection");
			return ret;
		}

		int32_t GetNumBasis(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C910E0C(relative to base address)
	};


	// Class NearestNeighborModel.NearestNeighborModel
	// Inherited from UMLDeformerMorphModel -> UMLDeformerGeomCacheModel -> UMLDeformerModel -> UObject
	// Size: 0x98 (0x268 - 0x1D0)
	class UNearestNeighborModel : public UMLDeformerMorphModel	
	{
	public:
		int32_t InputDim; // 0x1D0(0x4)
		int32_t OutputDim; // 0x1D4(0x4)
		bool bUseInputMultipliers; // 0x1D8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1D9(0x7) UNKNOWN PROPERTY
		TArray<FVector3f> InputMultipliers; // 0x1E0(0x10)
		TArray<float> InputsMin; // 0x1F0(0x10)
		TArray<float> InputsMax; // 0x200(0x10)
		bool bUsePCA; // 0x210(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x211(0x3) UNKNOWN PROPERTY
		int32_t NumBasisPerSection; // 0x214(0x4)
		bool bUseDualQuaternionDeltas; // 0x218(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x219(0x3) UNKNOWN PROPERTY
		float DecayFactor; // 0x21C(0x4)
		float NearestNeighborOffsetWeight; // 0x220(0x4)
		bool bUseRBF; // 0x224(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x225(0x3) UNKNOWN PROPERTY
		float RBFSigma; // 0x228(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x22C(0x4) UNKNOWN PROPERTY
		TArray<UNearestNeighborModelSection*> Sections; // 0x230(0x10)
		TArray<int32_t> PCACoeffStarts; // 0x240(0x10)
		bool bIsReadyForTraining; // 0x250(0x1)
		bool bIsReadyForInference; // 0x251(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x252(0x6) UNKNOWN PROPERTY
		UNearestNeighborOptimizedNetwork* OptimizedNetwork; // 0x258(0x8)
		unsigned char UnknownData06_7[0x8]; // 0x260(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NearestNeighborModel.NearestNeighborModel");
			return ret;
		}

		bool IsReadyForTraining(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D741CA8(relative to base address)
		bool IsReadyForInference(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514828AC(relative to base address)
		int32_t GetTotalNumBasis(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751482888(relative to base address)
		UNearestNeighborModelSection GetSectionPtr(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514827F8(relative to base address)
		TArray GetPCACoeffStarts(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514827DC(relative to base address)
		int32_t GetNumSections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C4E7E48(relative to base address)
		bool DoesUsePCA(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C4C6018(relative to base address)
	};


	// Class NearestNeighborModel.NearestNeighborModelInputInfo
	// Inherited from UMLDeformerMorphModelInputInfo -> UMLDeformerInputInfo -> UObject
	// Size: 0x10 (0x78 - 0x68)
	class UNearestNeighborModelInputInfo : public UMLDeformerMorphModelInputInfo	
	{
	public:
		TArray<FQuat> RefBoneRotations; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NearestNeighborModel.NearestNeighborModelInputInfo");
			return ret;
		}
	};


	// Class NearestNeighborModel.NearestNeighborModelInstance
	// Inherited from UMLDeformerMorphModelInstance -> UMLDeformerModelInstance -> UObject
	// Size: 0x30 (0xC0 - 0x90)
	class UNearestNeighborModelInstance : public UMLDeformerMorphModelInstance	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x90(0x28) UNKNOWN PROPERTY
		UNearestNeighborOptimizedNetworkInstance* OptimizedNetworkInstance; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NearestNeighborModel.NearestNeighborModelInstance");
			return ret;
		}

		void Reset(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514828C4(relative to base address)
		TArray Eval(TArray<float>& InputData); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7514826D8(relative to base address)
	};


	// Class NearestNeighborModel.OptimusSkeletonWithQuatsDataInterface
	// Inherited from UOptimusComputeDataInterface -> UComputeDataInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UOptimusSkeletonWithQuatsDataInterface : public UOptimusComputeDataInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NearestNeighborModel.OptimusSkeletonWithQuatsDataInterface");
			return ret;
		}
	};


	// Class NearestNeighborModel.OptimusSkeletonWithQuatsDataProvider
	// Inherited from UComputeDataProvider -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UOptimusSkeletonWithQuatsDataProvider : public UComputeDataProvider	
	{
	public:
		USkinnedMeshComponent* SkinnedMesh; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NearestNeighborModel.OptimusSkeletonWithQuatsDataProvider");
			return ret;
		}
	};

}
