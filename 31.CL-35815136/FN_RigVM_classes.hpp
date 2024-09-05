#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: RigVM
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class RigVM.RigVMGraphFunctionHost
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class URigVMGraphFunctionHost : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.RigVMGraphFunctionHost");
			return ret;
		}
	};


	// Class RigVM.RigVMBlueprintGeneratedClass
	// Inherited from UBlueprintGeneratedClass -> UClass -> UStruct -> UField -> UObject
	// Size: 0x28 (0x388 - 0x360)
	class URigVMBlueprintGeneratedClass : public UBlueprintGeneratedClass	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x360(0x8) UNKNOWN PROPERTY
		FRigVMGraphFunctionStore GraphFunctionStore; // 0x368(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.RigVMBlueprintGeneratedClass");
			return ret;
		}
	};


	// Class RigVM.RigVM
	// Inherited from UObject
	// Size: 0x368 (0x390 - 0x28)
	class URigVM : public UObject	
	{
	public:
		FRigVMMemoryStorageStruct LiteralMemoryStorage; // 0x28(0x50)
		FRigVMMemoryStorageStruct DefaultWorkMemoryStorage; // 0x78(0x50)
		FRigVMMemoryStorageStruct DefaultDebugMemoryStorage; // 0xC8(0x50)
		unsigned char UnknownData00_6[0x20]; // 0x118(0x20) UNKNOWN PROPERTY
		FRigVMByteCode ByteCodeStorage; // 0x138(0xB0)
		unsigned char UnknownData01_6[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
		FRigVMInstructionArray Instructions; // 0x1F0(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x200(0x8) UNKNOWN PROPERTY
		TArray<FName> FunctionNamesStorage; // 0x208(0x10)
		unsigned char UnknownData03_6[0x38]; // 0x218(0x38) UNKNOWN PROPERTY
		TArray<FRigVMParameter> Parameters; // 0x250(0x10)
		unsigned char UnknownData04_6[0xD8]; // 0x260(0xD8) UNKNOWN PROPERTY
		uint32_t CachedVMHash; // 0x338(0x4)
		unsigned char UnknownData05_7[0x54]; // 0x33C(0x54) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.RigVM");
			return ret;
		}

		void SetParameterValueVector2D(FName& InParameterName, FVector2D& InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CE39638(relative to base address)
		void SetParameterValueVector(FName& InParameterName, FVector& InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CE3975C(relative to base address)
		void SetParameterValueTransform(FName& InParameterName, FTransform& InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CE394A4(relative to base address)
		void SetParameterValueString(FName& InParameterName, FString InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE39324(relative to base address)
		void SetParameterValueQuat(FName& InParameterName, FQuat& InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CE391C8(relative to base address)
		void SetParameterValueName(FName& InParameterName, FName& InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE390A0(relative to base address)
		void SetParameterValueInt(FName& InParameterName, int32_t InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE38F38(relative to base address)
		void SetParameterValueFloat(FName& InParameterName, float InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE38DD0(relative to base address)
		void SetParameterValueDouble(FName& InParameterName, double InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE38C64(relative to base address)
		void SetParameterValueBool(FName& InParameterName, bool InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE38AFC(relative to base address)
		FRigVMStatistics GetStatistics(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE38934(relative to base address)
		FString GetRigVMFunctionName(int32_t InFunctionIndex); // Flags: Native|Public|Const, Memory Exec: 0x7FF74CE3888C(relative to base address)
		FVector2D GetParameterValueVector2D(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CE38680(relative to base address)
		FVector GetParameterValueVector(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CE38780(relative to base address)
		FTransform GetParameterValueTransform(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CE3854C(relative to base address)
		FString GetParameterValueString(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE38430(relative to base address)
		FQuat GetParameterValueQuat(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CE38328(relative to base address)
		FName GetParameterValueName(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE38234(relative to base address)
		int32_t GetParameterValueInt(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE38234(relative to base address)
		float GetParameterValueFloat(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE38234(relative to base address)
		double GetParameterValueDouble(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE38140(relative to base address)
		bool GetParameterValueBool(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE3804C(relative to base address)
		bool Execute(FRigVMExtendedExecuteContext& Context, FName& InEntryName); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE37E84(relative to base address)
		int32_t AddRigVMFunction(UScriptStruct* InRigVMStruct, FName& InMethodName); // Flags: Native|Public|HasOutParms, Memory Exec: 0x7FF74CE37DB0(relative to base address)
	};


	// Class RigVM.NameSpacedUserData
	// Inherited from UAssetUserData -> UObject
	// Size: 0xD8 (0x100 - 0x28)
	class UNameSpacedUserData : public UAssetUserData	
	{
	public:
		FString NameSpace; // 0x28(0x10)
		unsigned char UnknownData00_7[0xC8]; // 0x38(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.NameSpacedUserData");
			return ret;
		}
	};


	// Class RigVM.DataAssetLink
	// Inherited from UNameSpacedUserData -> UAssetUserData -> UObject
	// Size: 0x28 (0x128 - 0x100)
	class UDataAssetLink : public UNameSpacedUserData	
	{
	public:
		TWeakObjectPtr<UDataAsset*> DataAsset; // 0x100(0x20)
		UDataAsset* DataAssetCached; // 0x120(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.DataAssetLink");
			return ret;
		}

		void SetDataAsset(TWeakObjectPtr<UDataAsset*> InDataAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE38A00(relative to base address)
		TWeakObjectPtr GetDataAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE37F9C(relative to base address)
	};


	// Class RigVM.RigVMMemoryStorageGeneratorClass
	// Inherited from UClass -> UStruct -> UField -> UObject
	// Size: 0x40 (0x240 - 0x200)
	class URigVMMemoryStorageGeneratorClass : public UClass	
	{
	public:
		unsigned char UnknownData00_1[0x40]; // 0x200(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.RigVMMemoryStorageGeneratorClass");
			return ret;
		}
	};


	// Class RigVM.RigVMMemoryStorage
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class URigVMMemoryStorage : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.RigVMMemoryStorage");
			return ret;
		}
	};


	// Class RigVM.RigVMNativized
	// Inherited from URigVM -> UObject
	// Size: 0x28 (0x3B8 - 0x390)
	class URigVMNativized : public URigVM	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x390(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.RigVMNativized");
			return ret;
		}
	};


	// Class RigVM.RigVMUserWorkflowOptions
	// Inherited from UObject
	// Size: 0x70 (0x98 - 0x28)
	class URigVMUserWorkflowOptions : public UObject	
	{
	public:
		UObject* Subject; // 0x28(0x8)
		FRigVMUserWorkflow Workflow; // 0x30(0x58)
		unsigned char UnknownData00_7[0x10]; // 0x88(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.RigVMUserWorkflowOptions");
			return ret;
		}

		bool RequiresDialog(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE7719C(relative to base address)
		void ReportWarning(FString InMessage); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE77108(relative to base address)
		void ReportInfo(FString InMessage); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE77074(relative to base address)
		void ReportError(FString InMessage); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE76FE0(relative to base address)
		bool IsValid(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE76FC4(relative to base address)
	};


	// Class RigVM.RigVMHost
	// Inherited from UObject
	// Size: 0x250 (0x278 - 0x28)
	class URigVMHost : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FRigVMRuntimeSettings VMRuntimeSettings; // 0x30(0x18)
		unsigned char UnknownData01_6[0x10]; // 0x48(0x10) UNKNOWN PROPERTY
		URigVM* VM; // 0x58(0x8)
		TMap<FString, FSoftObjectPath> UserDefinedStructGuidToPathName; // 0x60(0x50)
		TMap<FString, FSoftObjectPath> UserDefinedEnumToPathName; // 0xB0(0x50)
		TSet<UObject*> UserDefinedTypesInUse; // 0x100(0x50)
		unsigned char UnknownData02_6[0x8]; // 0x150(0x8) UNKNOWN PROPERTY
		FRigVMDrawContainer DrawContainer; // 0x158(0x18)
		unsigned char UnknownData03_6[0x18]; // 0x170(0x18) UNKNOWN PROPERTY
		TArray<FName> EventQueue; // 0x188(0x10)
		unsigned char UnknownData04_6[0x90]; // 0x198(0x90) UNKNOWN PROPERTY
		TArray<UAssetUserData*> AssetUserData; // 0x228(0x10)
		unsigned char UnknownData05_7[0x40]; // 0x238(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.RigVMHost");
			return ret;
		}

		bool SupportsEvent(FName& InEventName); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE93DC8(relative to base address)
		bool SetVariableFromString(FName& InVariableName, FString InValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE93CBC(relative to base address)
		void SetFramesPerSecond(float InFramesPerSecond); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE93C3C(relative to base address)
		void SetDeltaTime(float InDeltaTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE93BBC(relative to base address)
		void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE93AF4(relative to base address)
		void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE93A2C(relative to base address)
		void RequestRunOnceEvent(FName& InEventName, int32_t InEventIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE93920(relative to base address)
		void RequestInit(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C4A1D4C(relative to base address)
		bool RemoveRunOnceEvent(FName& InEventName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE93888(relative to base address)
		bool IsInitRequired(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5AD62C(relative to base address)
		URigVM GetVM(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CE93718(relative to base address)
		FName GetVariableType(FName& InVariableName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE937D8(relative to base address)
		FString GetVariableAsString(FName& InVariableName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE9373C(relative to base address)
		TArray GetSupportedEvents(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE935EC(relative to base address)
		TArray GetScriptAccessibleVariables(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE935AC(relative to base address)
		FRigVMExtendedExecuteContext GetExtendedExecuteContext(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE9357C(relative to base address)
		float GetDeltaTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1AC8(relative to base address)
		float GetCurrentFramesPerSecond(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE9355C(relative to base address)
		float GetAbsoluteTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1D3C(relative to base address)
		TArray FindRigVMHosts(UObject* Outer, UClass* OptionalClass); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CE93294(relative to base address)
		bool ExecuteEvent(FName& InEventName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE931FC(relative to base address)
		bool Execute(FName& InEventName); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE9315C(relative to base address)
		bool CanExecute(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7493F5558(relative to base address)
	};


	// Class RigVM.RigVMEditorSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class URigVMEditorSettings : public UDeveloperSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.RigVMEditorSettings");
			return ret;
		}
	};


	// Class RigVM.RigVMProjectSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class URigVMProjectSettings : public UDeveloperSettings	
	{
	public:
		TArray<FRigVMTag> VariantTags; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.RigVMProjectSettings");
			return ret;
		}

		FRigVMTag GetTag(FName InTagName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE9361C(relative to base address)
	};

}
