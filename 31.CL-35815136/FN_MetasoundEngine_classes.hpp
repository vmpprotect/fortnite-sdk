#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MetasoundEngine
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(FString Value); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF74DBCB094(relative to base address)
		FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray<FString>& Value); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCAE38(relative to base address)
		FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(UObject* Value); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF74DBCA51C(relative to base address)
		FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray<UObject*>& Value); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCA424(relative to base address)
		FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(FAudioParameter& Param); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCA358(relative to base address)
		FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32_t Value); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF74DBCA160(relative to base address)
		FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray<int32_t>& Value); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC9F3C(relative to base address)
		FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF74DBC9D3C(relative to base address)
		FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray<float>& Value); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC9B04(relative to base address)
		FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF74DBC9898(relative to base address)
		FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray<bool>& Value); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC9670(relative to base address)
	};


	// Class MetasoundEngine.MetasoundGeneratorHandle
	// Inherited from UObject
	// Size: 0x88 (0xB0 - 0x28)
	class UMetasoundGeneratorHandle : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x88]; // 0x28(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetasoundGeneratorHandle");
			return ret;
		}

		bool WatchOutput(FName OutputName, FDelegateProperty& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCEF6C(relative to base address)
		void UpdateWatchers(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74921B8F8(relative to base address)
		double GetCPUCoreUtilization(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBCC92C(relative to base address)
		void EnableRuntimeRenderTiming(bool Enable); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74DBCB620(relative to base address)
		UMetasoundGeneratorHandle CreateMetaSoundGeneratorHandle(UAudioComponent* OnComponent); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCA234(relative to base address)
		bool ApplyParameterPack(UMetasoundParameterPack* pack); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBC87AC(relative to base address)
	};


	// Class MetasoundEngine.MetaSoundCacheSubsystem
	// Inherited from UAudioEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UMetaSoundCacheSubsystem : public UAudioEngineSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x48]; // 0x30(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundCacheSubsystem");
			return ret;
		}

		void TouchOrPrecacheMetaSound(UMetaSoundSource* InMetaSound, int32_t InNumInstances); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCECFC(relative to base address)
		void RemoveCachedOperatorsForMetaSound(UMetaSoundSource* InMetaSound); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCDF3C(relative to base address)
		void PrecacheMetaSound(UMetaSoundSource* InMetaSound, int32_t InNumInstances); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCDC98(relative to base address)
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

		bool IsTime(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCD93C(relative to base address)
		bool IsString(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCD8A0(relative to base address)
		bool IsInt32(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCD764(relative to base address)
		bool IsFloat(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCD6C8(relative to base address)
		bool IsBool(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCD62C(relative to base address)
		double GetTimeSeconds(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCD4A0(relative to base address)
		FString GetString(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCD35C(relative to base address)
		int32_t GetInt32(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCCA74(relative to base address)
		float GetFloat(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCC96C(relative to base address)
		bool GetBool(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF748A59F50(relative to base address)
	};


	// Class MetasoundEngine.MetaSoundOutputSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UMetaSoundOutputSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundOutputSubsystem");
			return ret;
		}

		bool WatchOutput(UAudioComponent* AudioComponent, FName OutputName, FDelegateProperty& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF747EB14A4(relative to base address)
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

		TArray GetQualityList(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74C642A74(relative to base address)
	};


	// Class MetasoundEngine.MetaSoundSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UMetaSoundSettings : public UDeveloperSettings	
	{
	public:
		bool bAutoUpdateEnabled; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		TArray<FMetasoundFrontendClassName> AutoUpdateDenylist; // 0x38(0x10)
		TArray<FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist; // 0x48(0x10)
		bool bAutoUpdateLogWarningOnDroppedConnection; // 0x58(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
		TArray<FDirectoryPath> DirectoriesToRegister; // 0x60(0x10)
		int32_t DenyListCacheChangeID; // 0x70(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		TArray<FMetaSoundPageSettings> PageSettings; // 0x78(0x10)
		TArray<FMetaSoundQualitySettings> QualitySettings; // 0x88(0x10)

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
		unsigned char UnknownData00_3[0x30]; // 0x28(0x30) UNKNOWN PROPERTY
		FMetasoundFrontendDocument RootMetaSoundDocument; // 0x58(0x1C0)
		TSet<FString> ReferencedAssetClassKeys; // 0x218(0x50)
		TSet<UObject*> ReferencedAssetClassObjects; // 0x268(0x50)
		TSet<FSoftObjectPath> ReferenceAssetClassCache; // 0x2B8(0x50)
		FGuid AssetClassID; // 0x308(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x318(0x8) UNKNOWN PROPERTY

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

		void UnregisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCEDC4(relative to base address)
		void RegisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCDD60(relative to base address)
	};


	// Class MetasoundEngine.MetaSoundBuilderBase
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UMetaSoundBuilderBase : public UObject	
	{
	public:
		FMetaSoundFrontendDocumentBuilder Builder; // 0x28(0x48)
		unsigned char UnknownData00_7[0x20]; // 0x70(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundBuilderBase");
			return ret;
		}

		void SetNodeInputDefault(FMetaSoundBuilderNodeInputHandle& NodeInputHandle, FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCEB0C(relative to base address)
		void SetGraphOutputDataType(FName OutputName, FName DataType, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCEA08(relative to base address)
		void SetGraphOutputAccessType(FName OutputName, EMetasoundFrontendVertexAccessType AccessType, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCE904(relative to base address)
		void SetGraphInputDefault(FName InputName, FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCE7AC(relative to base address)
		void SetGraphInputDataType(FName InputName, FName DataType, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCE6A8(relative to base address)
		void SetGraphInputAccessType(FName InputName, EMetasoundFrontendVertexAccessType AccessType, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCE5A4(relative to base address)
		void RemoveUnusedDependencies(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCE4BC(relative to base address)
		void RemoveNodeInputDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCE3BC(relative to base address)
		void RemoveNode(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, bool bRemoveUnusedDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCE214(relative to base address)
		void RemoveInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCE144(relative to base address)
		void RemoveGraphOutput(FName Name, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCE078(relative to base address)
		void RemoveGraphInput(FName Name, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCDFAC(relative to base address)
		bool NodesAreConnected(FMetaSoundBuilderNodeOutputHandle& OutputHandle, FMetaSoundBuilderNodeInputHandle& InputHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBCDB50(relative to base address)
		bool NodeOutputIsConnected(FMetaSoundBuilderNodeOutputHandle& OutputHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBCDA84(relative to base address)
		bool NodeInputIsConnected(FMetaSoundBuilderNodeInputHandle& InputHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBCD9D8(relative to base address)
		bool IsPreset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBCD87C(relative to base address)
		bool InterfaceIsDeclared(FName InterfaceName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBCD5A0(relative to base address)
		UObject GetReferencedPresetAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBCD338(relative to base address)
		bool GetNodeOutputIsConstructorPin(FMetaSoundBuilderNodeOutputHandle& OutputHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBCD284(relative to base address)
		void GetNodeOutputData(FMetaSoundBuilderNodeOutputHandle& OutputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCD0EC(relative to base address)
		bool GetNodeInputIsConstructorPin(FMetaSoundBuilderNodeInputHandle& InputHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBCD038(relative to base address)
		FMetasoundFrontendLiteral GetNodeInputDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCCEC8(relative to base address)
		void GetNodeInputData(FMetaSoundBuilderNodeInputHandle& InputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCCD30(relative to base address)
		FMetasoundFrontendLiteral GetNodeInputClassDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCCBC0(relative to base address)
		TArray FindNodeOutputsByDataType(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCC600(relative to base address)
		TArray FindNodeOutputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCC4F4(relative to base address)
		FMetaSoundNodeHandle FindNodeOutputParent(FMetaSoundBuilderNodeOutputHandle& OutputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCBF5C(relative to base address)
		FMetaSoundBuilderNodeOutputHandle FindNodeOutputByName(FMetaSoundNodeHandle& NodeHandle, FName OutputName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCC350(relative to base address)
		TArray FindNodeInputsByDataType(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCC184(relative to base address)
		TArray FindNodeInputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCC078(relative to base address)
		FMetaSoundNodeHandle FindNodeInputParent(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCBF5C(relative to base address)
		FMetaSoundBuilderNodeInputHandle FindNodeInputByName(FMetaSoundNodeHandle& NodeHandle, FName InputName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCBDB8(relative to base address)
		FMetasoundFrontendVersion FindNodeClassVersion(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCBC64(relative to base address)
		TArray FindInterfaceOutputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCBB7C(relative to base address)
		TArray FindInterfaceInputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCBA94(relative to base address)
		FMetaSoundNodeHandle FindGraphOutputNode(FName OutputName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCB9BC(relative to base address)
		FMetaSoundNodeHandle FindGraphInputNode(FName InputName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCB8E4(relative to base address)
		void DisconnectNodesByInterfaceBindings(FMetaSoundNodeHandle& FromNodeHandle, FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCB4DC(relative to base address)
		void DisconnectNodes(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCB388(relative to base address)
		void DisconnectNodeOutput(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCB284(relative to base address)
		void DisconnectNodeInput(FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCB180(relative to base address)
		void ConvertToPreset(TScriptInterface<Class>& ReferencedNodeClass, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC942C(relative to base address)
		void ConvertFromPreset(EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC9394(relative to base address)
		bool ContainsNodeOutput(FMetaSoundBuilderNodeOutputHandle& Output); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBC92E0(relative to base address)
		bool ContainsNodeInput(FMetaSoundBuilderNodeInputHandle& Input); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBC922C(relative to base address)
		bool ContainsNode(FMetaSoundNodeHandle& Node); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBC918C(relative to base address)
		void ConnectNodesByInterfaceBindings(FMetaSoundNodeHandle& FromNodeHandle, FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC9048(relative to base address)
		void ConnectNodes(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC8EF4(relative to base address)
		void ConnectNodeOutputToGraphOutput(FName GraphOutputName, FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC8CBC(relative to base address)
		TArray ConnectNodeOutputsToMatchingGraphInterfaceOutputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC8DE8(relative to base address)
		void ConnectNodeInputToGraphInput(FName GraphInputName, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC8A84(relative to base address)
		TArray ConnectNodeInputsToMatchingGraphInterfaceInputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC8BB0(relative to base address)
		FMetaSoundNodeHandle AddNodeByClassName(FMetasoundFrontendClassName& ClassName, EMetaSoundBuilderResult& OutResult, int32_t MajorVersion); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC85EC(relative to base address)
		FMetaSoundNodeHandle AddNode(TScriptInterface<Class>& NodeClass, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC84F4(relative to base address)
		void AddInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC8428(relative to base address)
		FMetaSoundBuilderNodeInputHandle AddGraphOutputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorOutput); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC8104(relative to base address)
		FMetaSoundBuilderNodeOutputHandle AddGraphInputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorInput); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC7DE0(relative to base address)
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

		TScriptInterface Build(UObject* Parent, FMetaSoundBuilderOptions& Options); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBC898C(relative to base address)
	};


	// Class MetasoundEngine.MetaSoundSourceBuilder
	// Inherited from UMetaSoundBuilderBase -> UObject
	// Size: 0x18 (0xA8 - 0x90)
	class UMetaSoundSourceBuilder : public UMetaSoundBuilderBase	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x90(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundSourceBuilder");
			return ret;
		}

		void SetSampleRateOverride(int32_t SampleRate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void SetQuality(FName Quality); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCEC98(relative to base address)
		void SetFormat(EMetaSoundOutputAudioFormat OutputFormat, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCE4D4(relative to base address)
		void SetBlockRateOverride(float BlockRate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C42CE74(relative to base address)
		bool GetLiveUpdatesEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBCCB78(relative to base address)
		TScriptInterface Build(UObject* Parent, FMetaSoundBuilderOptions& Options); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBC898C(relative to base address)
		void Audition(UObject* Parent, UAudioComponent* AudioComponent, FDelegateProperty OnCreateGenerator, bool bLiveUpdatesEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBC883C(relative to base address)
	};


	// Class MetasoundEngine.MetaSoundBuilderSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UMetaSoundBuilderSubsystem : public UEngineSubsystem	
	{
	public:
		TMap<FName, UMetaSoundBuilderBase*> NamedBuilders; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundBuilderSubsystem");
			return ret;
		}

		bool UnregisterSourceBuilder(FName BuilderName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCEEE0(relative to base address)
		bool UnregisterPatchBuilder(FName BuilderName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCEE54(relative to base address)
		bool UnregisterBuilder(FName BuilderName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCEE54(relative to base address)
		void RegisterSourceBuilder(FName BuilderName, UMetaSoundSourceBuilder* Builder); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCDDF0(relative to base address)
		void RegisterPatchBuilder(FName BuilderName, UMetaSoundPatchBuilder* Builder); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCDDF0(relative to base address)
		void RegisterBuilder(FName BuilderName, UMetaSoundBuilderBase* Builder); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCDDF0(relative to base address)
		bool IsInterfaceRegistered(FName InInterfaceName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBCD800(relative to base address)
		UMetaSoundSourceBuilder FindSourceBuilder(FName BuilderName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCC87C(relative to base address)
		UMetaSoundPatchBuilder FindPatchBuilder(FName BuilderName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCC7CC(relative to base address)
		UMetaSoundBuilderBase FindBuilderOfDocument(TScriptInterface<Class> InMetaSound); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DBCB788(relative to base address)
		UMetaSoundBuilderBase FindBuilder(FName BuilderName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCB6FC(relative to base address)
		FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(FString Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCAF54(relative to base address)
		FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray<FString>& Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCACBC(relative to base address)
		UMetaSoundSourceBuilder CreateSourcePresetBuilder(FName BuilderName, TScriptInterface<Class>& ReferencedSourceClass, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCAB80(relative to base address)
		UMetaSoundSourceBuilder CreateSourceBuilder(FName BuilderName, FMetaSoundBuilderNodeOutputHandle& OnPlayNodeOutput, FMetaSoundBuilderNodeInputHandle& OnFinishedNodeInput, TArray<FMetaSoundBuilderNodeInputHandle>& AudioOutNodeInputs, EMetaSoundBuilderResult& OutResult, EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCA808(relative to base address)
		UMetaSoundPatchBuilder CreatePatchPresetBuilder(FName BuilderName, TScriptInterface<Class>& ReferencedPatchClass, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCA6C8(relative to base address)
		UMetaSoundPatchBuilder CreatePatchBuilder(FName BuilderName, EMetaSoundBuilderResult& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCA5F4(relative to base address)
		FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(UObject* Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DBCA51C(relative to base address)
		FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray<UObject*>& Value); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCA424(relative to base address)
		FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(FAudioParameter& Param); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCA358(relative to base address)
		FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32_t Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBCA034(relative to base address)
		FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray<int32_t>& Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC9DE4(relative to base address)
		FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC9C38(relative to base address)
		FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray<float>& Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC9970(relative to base address)
		FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC9768(relative to base address)
		FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray<bool>& Value, FName& DataType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DBC9518(relative to base address)
	};


	// Class MetasoundEngine.MetaSoundSource
	// Inherited from USoundWaveProcedural -> USoundWave -> USoundBase -> UObject
	// Size: 0x3F0 (0x830 - 0x440)
	class UMetaSoundSource : public USoundWaveProcedural	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x440(0x30) UNKNOWN PROPERTY
		FMetasoundFrontendDocument RootMetaSoundDocument; // 0x470(0x1C0)
		TSet<FString> ReferencedAssetClassKeys; // 0x630(0x50)
		TSet<UObject*> ReferencedAssetClassObjects; // 0x680(0x50)
		TSet<FSoftObjectPath> ReferenceAssetClassCache; // 0x6D0(0x50)
		EMetaSoundOutputAudioFormat OutputFormat; // 0x720(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x721(0x3) UNKNOWN PROPERTY
		FGuid AssetClassID; // 0x724(0x10)
		unsigned char UnknownData02_7[0xFC]; // 0x734(0xFC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundEngine.MetaSoundSource");
			return ret;
		}
	};

}
