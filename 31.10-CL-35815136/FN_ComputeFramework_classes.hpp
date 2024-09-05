#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ComputeFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ComputeFramework.ComputeDataInterface
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UComputeDataInterface : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ComputeFramework.ComputeDataInterface");
			return ret;
		}
	};


	// Class ComputeFramework.ComputeDataProvider
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UComputeDataProvider : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ComputeFramework.ComputeDataProvider");
			return ret;
		}
	};


	// Class ComputeFramework.ComputeKernelSource
	// Inherited from UObject
	// Size: 0x70 (0x98 - 0x28)
	class UComputeKernelSource : public UObject	
	{
	public:
		FString EntryPoint; // 0x28(0x10)
		FIntVector GroupSize; // 0x38(0xC)
		unsigned char UnknownData00_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FComputeKernelPermutationSet PermutationSet; // 0x48(0x10)
		FComputeKernelDefinitionSet DefinitionsSet; // 0x58(0x10)
		TArray<UComputeSource*> AdditionalSources; // 0x68(0x10)
		TArray<FShaderFunctionDefinition> ExternalInputs; // 0x78(0x10)
		TArray<FShaderFunctionDefinition> ExternalOutputs; // 0x88(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ComputeFramework.ComputeKernelSource");
			return ret;
		}
	};


	// Class ComputeFramework.ComputeSource
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UComputeSource : public UObject	
	{
	public:
		TArray<UComputeSource*> AdditionalSources; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ComputeFramework.ComputeSource");
			return ret;
		}
	};


	// Class ComputeFramework.ComputeGraph
	// Inherited from UObject
	// Size: 0xB8 (0xE0 - 0x28)
	class UComputeGraph : public UObject	
	{
	public:
		TArray<UComputeKernel*> KernelInvocations; // 0x28(0x10)
		TArray<UComputeDataInterface*> DataInterfaces; // 0x38(0x10)
		TArray<FComputeGraphEdge> GraphEdges; // 0x48(0x10)
		TArray<UClass*> Bindings; // 0x58(0x10)
		TArray<int32_t> DataInterfaceToBinding; // 0x68(0x10)
		unsigned char UnknownData00_7[0x68]; // 0x78(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ComputeFramework.ComputeGraph");
			return ret;
		}
	};


	// Class ComputeFramework.ComputeGraphComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UComputeGraphComponent : public UActorComponent	
	{
	public:
		UComputeGraph* ComputeGraph; // 0xA0(0x8)
		FComputeGraphInstance ComputeGraphInstance; // 0xA8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ComputeFramework.ComputeGraphComponent");
			return ret;
		}

		void QueueExecute(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7513F2964(relative to base address)
		void DestroyDataProviders(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7513F2934(relative to base address)
		void CreateDataProviders(int32_t InBindingIndex, UObject* InBindingObject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7513F2854(relative to base address)
	};


	// Class ComputeFramework.ComputeKernel
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UComputeKernel : public UObject	
	{
	public:
		UComputeKernelSource* KernelSource; // 0x28(0x8)
		int32_t KernelFlags; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ComputeFramework.ComputeKernel");
			return ret;
		}
	};


	// Class ComputeFramework.ComputeKernelFromText
	// Inherited from UComputeKernelSource -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UComputeKernelFromText : public UComputeKernelSource	
	{
	public:
		FFilePath SourceFile; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ComputeFramework.ComputeKernelFromText");
			return ret;
		}
	};


	// Class ComputeFramework.ComputeSourceFromText
	// Inherited from UComputeSource -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UComputeSourceFromText : public UComputeSource	
	{
	public:
		FFilePath SourceFile; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ComputeFramework.ComputeSourceFromText");
			return ret;
		}
	};

}
