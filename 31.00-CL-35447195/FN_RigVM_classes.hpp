#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: RigVM
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData01_3[0x8]; // 0x360(0x8) UNKNOWN PROPERTY
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
		unsigned char UnknownData06_6[0x20]; // 0x118(0x20) UNKNOWN PROPERTY
		FRigVMByteCode ByteCodeStorage; // 0x138(0xB0)
		unsigned char UnknownData07_6[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
		FRigVMInstructionArray Instructions; // 0x1F0(0x10)
		unsigned char UnknownData08_6[0x8]; // 0x200(0x8) UNKNOWN PROPERTY
		TArray FunctionNamesStorage; // 0x208(0x10)
		unsigned char UnknownData09_6[0x38]; // 0x218(0x38) UNKNOWN PROPERTY
		TArray Parameters; // 0x250(0x10)
		unsigned char UnknownData10_6[0xD8]; // 0x260(0xD8) UNKNOWN PROPERTY
		uint32_t CachedVMHash; // 0x338(0x4)
		unsigned char UnknownData11_7[0x54]; // 0x33C(0x54) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.RigVM");
			return ret;
		}

		void SetParameterValueVector2D(FName& InParameterName, FVector2D& InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145A4898
		void SetParameterValueVector(FName& InParameterName, FVector& InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145A47B8
		void SetParameterValueTransform(FName& InParameterName, FTransform& InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145A46D8
		void SetParameterValueString(FName& InParameterName, FString InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A45F8
		void SetParameterValueQuat(FName& InParameterName, FQuat& InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145A4518
		void SetParameterValueName(FName& InParameterName, FName& InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A4438
		void SetParameterValueInt(FName& InParameterName, int32_t InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A4358
		void SetParameterValueFloat(FName& InParameterName, float InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A4278
		void SetParameterValueDouble(FName& InParameterName, double InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A4198
		void SetParameterValueBool(FName& InParameterName, bool InValue, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A40B8
		FRigVMStatistics GetStatistics(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A3FD8
		FString GetRigVMFunctionName(int32_t InFunctionIndex); // Flags: Native|Public|Const 0x7FF4145A3EF8
		FVector2D GetParameterValueVector2D(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145A3E18
		FVector GetParameterValueVector(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145A3D38
		FTransform GetParameterValueTransform(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145A3C58
		FString GetParameterValueString(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A3B78
		FQuat GetParameterValueQuat(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145A3A98
		FName GetParameterValueName(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A39B8
		int32_t GetParameterValueInt(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A38D8
		float GetParameterValueFloat(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A37F8
		double GetParameterValueDouble(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A3718
		bool GetParameterValueBool(FName& InParameterName, int32_t InArrayIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A3638
		bool Execute(FRigVMExtendedExecuteContext& Context, FName& InEntryName); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A3558
		int32_t AddRigVMFunction(UScriptStruct InRigVMStruct, FName& InMethodName); // Flags: Native|Public|HasOutParms 0x7FF4145A3478
	};


	// Class RigVM.NameSpacedUserData
	// Inherited from UAssetUserData -> UObject
	// Size: 0xD8 (0x100 - 0x28)
	class UNameSpacedUserData : public UAssetUserData	
	{
	public:
		FString NameSpace; // 0x28(0x10)
		unsigned char UnknownData01_7[0xC8]; // 0x38(0xC8) UNKNOWN PROPERTY

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
		TWeakObjectPtr DataAsset; // 0x100(0x20)
		UDataAsset DataAssetCached; // 0x120(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.DataAssetLink");
			return ret;
		}

		void SetDataAsset(TWeakObjectPtr InDataAsset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145A4A58
		TWeakObjectPtr GetDataAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A4978
	};


	// Class RigVM.RigVMMemoryStorageGeneratorClass
	// Inherited from UClass -> UStruct -> UField -> UObject
	// Size: 0x40 (0x240 - 0x200)
	class URigVMMemoryStorageGeneratorClass : public UClass	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x200(0x40) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x28]; // 0x390(0x28) UNKNOWN PROPERTY

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
		UObject Subject; // 0x28(0x8)
		FRigVMUserWorkflow Workflow; // 0x30(0x58)
		unsigned char UnknownData01_7[0x10]; // 0x88(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.RigVMUserWorkflowOptions");
			return ret;
		}

		bool RequiresDialog(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A4EB8
		void ReportWarning(FString InMessage); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145A4DD8
		void ReportInfo(FString InMessage); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145A4CF8
		void ReportError(FString InMessage); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145A4C18
		bool IsValid(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A4B38
	};


	// Class RigVM.RigVMHost
	// Inherited from UObject
	// Size: 0x250 (0x278 - 0x28)
	class URigVMHost : public UObject	
	{
	public:
		unsigned char UnknownData06_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FRigVMRuntimeSettings VMRuntimeSettings; // 0x30(0x18)
		unsigned char UnknownData07_6[0x10]; // 0x48(0x10) UNKNOWN PROPERTY
		URigVM VM; // 0x58(0x8)
		TMap UserDefinedStructGuidToPathName; // 0x60(0x50)
		TMap UserDefinedEnumToPathName; // 0xB0(0x50)
		TSet UserDefinedTypesInUse; // 0x100(0x50)
		unsigned char UnknownData08_6[0x8]; // 0x150(0x8) UNKNOWN PROPERTY
		FRigVMDrawContainer DrawContainer; // 0x158(0x18)
		unsigned char UnknownData09_6[0x18]; // 0x170(0x18) UNKNOWN PROPERTY
		TArray EventQueue; // 0x188(0x10)
		unsigned char UnknownData10_6[0x90]; // 0x198(0x90) UNKNOWN PROPERTY
		TArray AssetUserData; // 0x228(0x10)
		unsigned char UnknownData11_7[0x40]; // 0x238(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.RigVMHost");
			return ret;
		}

		bool SupportsEvent(FName& InEventName); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF411BC0AE0
		bool SetVariableFromString(FName& InVariableName, FString InValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF411BC0A00
		void SetFramesPerSecond(float InFramesPerSecond); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411BC0920
		void SetDeltaTime(float InDeltaTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411BC0840
		void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411BC0760
		void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411BC0680
		void RequestRunOnceEvent(FName& InEventName, int32_t InEventIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF411BC05A0
		void RequestInit(); // Flags: Native|Public|BlueprintCallable 0x7FF411BC04C0
		bool RemoveRunOnceEvent(FName& InEventName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF411BC03E0
		bool IsInitRequired(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411BC0300
		URigVM GetVM(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF411BC0220
		FName GetVariableType(FName& InVariableName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF411BC0140
		FString GetVariableAsString(FName& InVariableName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF411BC0060
		TArray GetSupportedEvents(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411BBFF80
		TArray GetScriptAccessibleVariables(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411BBFEA0
		FRigVMExtendedExecuteContext GetExtendedExecuteContext(); // Flags: Native|Public|BlueprintCallable 0x7FF411BBFD00
		float GetDeltaTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411BBFC20
		float GetCurrentFramesPerSecond(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411BBFB40
		float GetAbsoluteTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411BBFA60
		TArray FindRigVMHosts(UObject Outer, UClass OptionalClass); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF411BBF980
		bool ExecuteEvent(FName& InEventName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF411BBF8A0
		bool Execute(FName& InEventName); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF411BBF7C0
		bool CanExecute(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411BBF6E0
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
		TArray VariantTags; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigVM.RigVMProjectSettings");
			return ret;
		}

		FRigVMTag GetTag(FName InTagName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A4F98
	};

}
