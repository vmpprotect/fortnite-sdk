#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MetasoundEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMetasoundFrontendLiteralBlueprintAccess : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess");
			return ret;
		}

		FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(FString Value); // Flags: Final|Native|Static|Private|BlueprintCallable 0x7FF41463DB98
		FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray& Value); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463DAB8
		FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(UObject Value); // Flags: Final|Native|Static|Private|BlueprintCallable 0x7FF41463D9D8
		FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray& Value); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463D8F8
		FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(FAudioParameter& Param); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463D818
		FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32_t Value); // Flags: Final|Native|Static|Private|BlueprintCallable 0x7FF41463D738
		FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray& Value); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463D658
		FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value); // Flags: Final|Native|Static|Private|BlueprintCallable 0x7FF41463D578
		FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray& Value); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463D498
		FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value); // Flags: Final|Native|Static|Private|BlueprintCallable 0x7FF41463D3B8
		FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray& Value); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463D2D8
	};


	// Class MetasoundEngine.MetasoundGeneratorHandle
	// Inherited from UObject
	// Size: 0x88 (0xB0 - 0x28)
	class UMetasoundGeneratorHandle : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x88]; // 0x28(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetasoundGeneratorHandle");
			return ret;
		}

		bool WatchOutput(FName OutputName, FDelegateProperty& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463E0D8
		void UpdateWatchers(); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF41463DFF8
		double GetCPUCoreUtilization(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41463DF18
		void EnableRuntimeRenderTiming(bool Enable); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF41463DE38
		UMetasoundGeneratorHandle CreateMetaSoundGeneratorHandle(UAudioComponent OnComponent); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41463DD58
		bool ApplyParameterPack(UMetasoundParameterPack pack); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463DC78
	};


	// Class MetasoundEngine.MetaSoundCacheSubsystem
	// Inherited from UAudioEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UMetaSoundCacheSubsystem : public UAudioEngineSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0x30(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundCacheSubsystem");
			return ret;
		}

		void TouchOrPrecacheMetaSound(UMetaSoundSource InMetaSound, int32_t InNumInstances); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463E378
		void RemoveCachedOperatorsForMetaSound(UMetaSoundSource InMetaSound); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463E298
		void PrecacheMetaSound(UMetaSoundSource InMetaSound, int32_t InNumInstances); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463E1B8
	};


	// Class MetasoundEngine.MetasoundOutputBlueprintAccess
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMetasoundOutputBlueprintAccess : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetasoundOutputBlueprintAccess");
			return ret;
		}

		bool IsTime(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463EC38
		bool IsString(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463EB58
		bool IsInt32(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463EA78
		bool IsFloat(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463E998
		bool IsBool(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463E8B8
		double GetTimeSeconds(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463E7D8
		FString GetString(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463E6F8
		int32_t GetInt32(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463E618
		float GetFloat(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463E538
		bool GetBool(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41463E458
	};


	// Class MetasoundEngine.MetaSoundOutputSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UMetaSoundOutputSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundOutputSubsystem");
			return ret;
		}

		bool WatchOutput(UAudioComponent AudioComponent, FName OutputName, FDelegateProperty& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463ED18
	};


	// Class MetasoundEngine.MetaSoundQualityHelper
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMetaSoundQualityHelper : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundQualityHelper");
			return ret;
		}

		TArray GetQualityList(); // Flags: Final|Native|Static|Public 0x7FF41463EDF8
	};


	// Class MetasoundEngine.MetaSoundSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UMetaSoundSettings : public UDeveloperSettings	
	{
	public:
		bool bAutoUpdateEnabled; // 0x30(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		TArray AutoUpdateDenylist; // 0x38(0x10)
		TArray AutoUpdateAssetDenylist; // 0x48(0x10)
		bool bAutoUpdateLogWarningOnDroppedConnection; // 0x58(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
		TArray DirectoriesToRegister; // 0x60(0x10)
		int32_t DenyListCacheChangeID; // 0x70(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		TArray PageSettings; // 0x78(0x10)
		TArray QualitySettings; // 0x88(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundSettings");
			return ret;
		}
	};


	// Class MetasoundEngine.MetasoundEditorGraphBase
	// Inherited from UEdGraph -> UObject
	// Size: 0x0 (0x60 - 0x60)
	class UMetasoundEditorGraphBase : public UEdGraph	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetasoundEditorGraphBase");
			return ret;
		}
	};


	// Class MetasoundEngine.MetaSoundPatch
	// Inherited from UObject
	// Size: 0x2F8 (0x320 - 0x28)
	class UMetaSoundPatch : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0x28(0x30) UNKNOWN PROPERTY
		FMetasoundFrontendDocument RootMetaSoundDocument; // 0x58(0x1C0)
		TSet ReferencedAssetClassKeys; // 0x218(0x50)
		TSet ReferencedAssetClassObjects; // 0x268(0x50)
		TSet ReferenceAssetClassCache; // 0x2B8(0x50)
		FGuid AssetClassID; // 0x308(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x318(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundPatch");
			return ret;
		}
	};


	// Class MetasoundEngine.MetaSoundAssetSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UMetaSoundAssetSubsystem : public UEngineSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundAssetSubsystem");
			return ret;
		}

		void UnregisterAssetClassesInDirectories(TArray& Directories); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463EFB8
		void RegisterAssetClassesInDirectories(TArray& Directories); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463EED8
	};


	// Class MetasoundEngine.MetaSoundBuilderBase
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UMetaSoundBuilderBase : public UObject	
	{
	public:
		FMetaSoundFrontendDocumentBuilder Builder; // 0x28(0x48)
		unsigned char UnknownData01_7[0x20]; // 0x70(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundBuilderBase");
			return ret;
		}

		void SetNodeInputDefault(FMetaSoundBuilderNodeInputHandle& NodeInputHandle, FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414642198
		void SetGraphOutputDataType(FName OutputName, FName DataType, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146420B8
		void SetGraphOutputAccessType(FName OutputName, EMetasoundFrontendVertexAccessType AccessType, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414641FD8
		void SetGraphInputDefault(FName InputName, FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414641EF8
		void SetGraphInputDataType(FName InputName, FName DataType, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414641E18
		void SetGraphInputAccessType(FName InputName, EMetasoundFrontendVertexAccessType AccessType, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414641D38
		void RemoveUnusedDependencies(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414641C58
		void RemoveNodeInputDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414641B78
		void RemoveNode(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, bool bRemoveUnusedDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414641A98
		void RemoveInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146419B8
		void RemoveGraphOutput(FName Name, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146418D8
		void RemoveGraphInput(FName Name, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146417F8
		bool NodesAreConnected(FMetaSoundBuilderNodeOutputHandle& OutputHandle, FMetaSoundBuilderNodeInputHandle& InputHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414641718
		bool NodeOutputIsConnected(FMetaSoundBuilderNodeOutputHandle& OutputHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414641638
		bool NodeInputIsConnected(FMetaSoundBuilderNodeInputHandle& InputHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414641558
		bool IsPreset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414641478
		bool InterfaceIsDeclared(FName InterfaceName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414641398
		UObject GetReferencedPresetAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146412B8
		bool GetNodeOutputIsConstructorPin(FMetaSoundBuilderNodeOutputHandle& OutputHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4146411D8
		void GetNodeOutputData(FMetaSoundBuilderNodeOutputHandle& OutputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146410F8
		bool GetNodeInputIsConstructorPin(FMetaSoundBuilderNodeInputHandle& InputHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414641018
		FMetasoundFrontendLiteral GetNodeInputDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414640F38
		void GetNodeInputData(FMetaSoundBuilderNodeInputHandle& InputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414640E58
		FMetasoundFrontendLiteral GetNodeInputClassDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414640D78
		TArray FindNodeOutputsByDataType(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414640C98
		TArray FindNodeOutputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414640BB8
		FMetaSoundNodeHandle FindNodeOutputParent(FMetaSoundBuilderNodeOutputHandle& OutputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414640AD8
		FMetaSoundBuilderNodeOutputHandle FindNodeOutputByName(FMetaSoundNodeHandle& NodeHandle, FName OutputName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146409F8
		TArray FindNodeInputsByDataType(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414640918
		TArray FindNodeInputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414640838
		FMetaSoundNodeHandle FindNodeInputParent(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414640758
		FMetaSoundBuilderNodeInputHandle FindNodeInputByName(FMetaSoundNodeHandle& NodeHandle, FName InputName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414640678
		FMetasoundFrontendVersion FindNodeClassVersion(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414640598
		TArray FindInterfaceOutputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146404B8
		TArray FindInterfaceInputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146403D8
		FMetaSoundNodeHandle FindGraphOutputNode(FName OutputName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146402F8
		FMetaSoundNodeHandle FindGraphInputNode(FName InputName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414640218
		void DisconnectNodesByInterfaceBindings(FMetaSoundNodeHandle& FromNodeHandle, FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414640138
		void DisconnectNodes(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414640058
		void DisconnectNodeOutput(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463FF78
		void DisconnectNodeInput(FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463FE98
		void ConvertToPreset(TScriptInterface& ReferencedNodeClass, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463FDB8
		void ConvertFromPreset(EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463FCD8
		bool ContainsNodeOutput(FMetaSoundBuilderNodeOutputHandle& Output); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41463FBF8
		bool ContainsNodeInput(FMetaSoundBuilderNodeInputHandle& Input); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41463FB18
		bool ContainsNode(FMetaSoundNodeHandle& Node); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41463FA38
		void ConnectNodesByInterfaceBindings(FMetaSoundNodeHandle& FromNodeHandle, FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463F958
		void ConnectNodes(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463F878
		void ConnectNodeOutputToGraphOutput(FName GraphOutputName, FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463F798
		TArray ConnectNodeOutputsToMatchingGraphInterfaceOutputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463F6B8
		void ConnectNodeInputToGraphInput(FName GraphInputName, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463F5D8
		TArray ConnectNodeInputsToMatchingGraphInterfaceInputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463F4F8
		FMetaSoundNodeHandle AddNodeByClassName(FMetasoundFrontendClassName& ClassName, EMetaSoundBuilderResult& OutResult, int32_t MajorVersion); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463F418
		FMetaSoundNodeHandle AddNode(TScriptInterface& NodeClass, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463F338
		void AddInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463F258
		FMetaSoundBuilderNodeInputHandle AddGraphOutputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorOutput); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463F178
		FMetaSoundBuilderNodeOutputHandle AddGraphInputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorInput); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41463F098
	};


	// Class MetasoundEngine.MetaSoundPatchBuilder
	// Inherited from UMetaSoundBuilderBase -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UMetaSoundPatchBuilder : public UMetaSoundBuilderBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundPatchBuilder");
			return ret;
		}

		TScriptInterface Build(UObject Parent, FMetaSoundBuilderOptions& Options); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414642278
	};


	// Class MetasoundEngine.MetaSoundSourceBuilder
	// Inherited from UMetaSoundBuilderBase -> UObject
	// Size: 0x18 (0xA8 - 0x90)
	class UMetaSoundSourceBuilder : public UMetaSoundBuilderBase	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x90(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundSourceBuilder");
			return ret;
		}

		void SetSampleRateOverride(int32_t SampleRate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414642898
		void SetQuality(FName Quality); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146427B8
		void SetFormat(EMetaSoundOutputAudioFormat OutputFormat, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146426D8
		void SetBlockRateOverride(float BlockRate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146425F8
		bool GetLiveUpdatesEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414642518
		TScriptInterface Build(UObject Parent, FMetaSoundBuilderOptions& Options); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414642438
		void Audition(UObject Parent, UAudioComponent AudioComponent, FDelegateProperty OnCreateGenerator, bool bLiveUpdatesEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414642358
	};


	// Class MetasoundEngine.MetaSoundBuilderSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UMetaSoundBuilderSubsystem : public UEngineSubsystem	
	{
	public:
		TMap NamedBuilders; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundBuilderSubsystem");
			return ret;
		}

		bool UnregisterSourceBuilder(FName BuilderName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414643F58
		bool UnregisterPatchBuilder(FName BuilderName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414643E78
		bool UnregisterBuilder(FName BuilderName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414643D98
		void RegisterSourceBuilder(FName BuilderName, UMetaSoundSourceBuilder Builder); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414643CB8
		void RegisterPatchBuilder(FName BuilderName, UMetaSoundPatchBuilder Builder); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414643BD8
		void RegisterBuilder(FName BuilderName, UMetaSoundBuilderBase Builder); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414643AF8
		bool IsInterfaceRegistered(FName InInterfaceName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414643A18
		UMetaSoundSourceBuilder FindSourceBuilder(FName BuilderName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414643938
		UMetaSoundPatchBuilder FindPatchBuilder(FName BuilderName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414643858
		UMetaSoundBuilderBase FindBuilderOfDocument(TScriptInterface InMetaSound); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414643778
		UMetaSoundBuilderBase FindBuilder(FName BuilderName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414643698
		FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(FString Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146435B8
		FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray& Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146434D8
		UMetaSoundSourceBuilder CreateSourcePresetBuilder(FName BuilderName, TScriptInterface& ReferencedSourceClass, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146433F8
		UMetaSoundSourceBuilder CreateSourceBuilder(FName BuilderName, FMetaSoundBuilderNodeOutputHandle& OnPlayNodeOutput, FMetaSoundBuilderNodeInputHandle& OnFinishedNodeInput, TArray& AudioOutNodeInputs, EMetaSoundBuilderResult& OutResult, EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414643318
		UMetaSoundPatchBuilder CreatePatchPresetBuilder(FName BuilderName, TScriptInterface& ReferencedPatchClass, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414643238
		UMetaSoundPatchBuilder CreatePatchBuilder(FName BuilderName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414643158
		FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(UObject Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414643078
		FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray& Value); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414642F98
		FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(FAudioParameter& Param); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414642EB8
		FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32_t Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414642DD8
		FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray& Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414642CF8
		FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414642C18
		FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray& Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414642B38
		FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414642A58
		FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray& Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414642978
	};


	// Class MetasoundEngine.MetaSoundSource
	// Inherited from USoundWaveProcedural -> USoundWave -> USoundBase -> UObject
	// Size: 0x3F0 (0x830 - 0x440)
	class UMetaSoundSource : public USoundWaveProcedural	
	{
	public:
		unsigned char UnknownData03_3[0x30]; // 0x440(0x30) UNKNOWN PROPERTY
		FMetasoundFrontendDocument RootMetaSoundDocument; // 0x470(0x1C0)
		TSet ReferencedAssetClassKeys; // 0x630(0x50)
		TSet ReferencedAssetClassObjects; // 0x680(0x50)
		TSet ReferenceAssetClassCache; // 0x6D0(0x50)
		EMetaSoundOutputAudioFormat OutputFormat; // 0x720(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x721(0x3) UNKNOWN PROPERTY
		FGuid AssetClassID; // 0x724(0x10)
		unsigned char UnknownData05_7[0xFC]; // 0x734(0xFC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundSource");
			return ret;
		}
	};

}
