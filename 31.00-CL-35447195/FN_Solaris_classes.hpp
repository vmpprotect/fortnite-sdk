#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Solaris
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Solaris.VerseStruct
	// Inherited from UScriptStruct -> UStruct -> UField -> UObject
	// Size: 0x40 (0x100 - 0xC0)
	class UVerseStruct : public UScriptStruct	
	{
	public:
		uint32_t VerseClassFlags; // 0xC0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		UFunction InitFunction; // 0xC8(0x8)
		UVerseClass ModuleClass; // 0xD0(0x8)
		FGuid Guid; // 0xD8(0x10)
		UFunction FactoryFunction; // 0xE8(0x8)
		UFunction OverrideFactoryFunction; // 0xF0(0x8)
		FVerseEffectSet ConstructorEffects; // 0xF8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.VerseStruct");
			return ret;
		}
	};


	// Class Solaris.SolarisWeakMapLibrary
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USolarisWeakMapLibrary : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.SolarisWeakMapLibrary");
			return ret;
		}

		void Type(UClass KeyType, UClass ValueType); // Flags: Final|Native|Static|Public 0x7FF4145BB118
		void RefCall(TMap& Map, FGenericKeyType Key); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BB038
		void PersistentVarRefCall(FString Path, TMap& Map, FGenericKeyType Key); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BAF58
		void PersistentVarCall(TMap& Map, FGenericKeyType Key); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BAE78
		void FitsInPlayerMap(FGenericValueType Value); // Flags: Final|Native|Static|Public 0x7FF4145BAD98
		void CompletelyAssignedRefCall(TMap& Map, FGenericKeyType Key); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BACB8
		void CompletelyAssignedPersistentVarRefCall(FString Path, TMap& Map, FGenericKeyType Key); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BABD8
		void Call(TMap& Map, FGenericKeyType Key); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BAAF8
	};


	// Class Solaris.VerseAssetsConfig
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UVerseAssetsConfig : public UObject	
	{
	public:
		TArray AssetConfigs; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.VerseAssetsConfig");
			return ret;
		}
	};


	// Class Solaris.VerseDigest
	// Inherited from UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UVerseDigest : public UObject	
	{
	public:
		TArray DigestCode; // 0x28(0x10)
		TArray ManifestCode; // 0x38(0x10)
		TArray DependencyPackages; // 0x48(0x10)
		TSet ClassImports; // 0x58(0x50)
		FString ProjectName; // 0xA8(0x10)
		EVerseDigestVariant Variant; // 0xB8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		uint32_t VerseVersion; // 0xBC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.VerseDigest");
			return ret;
		}
	};


	// Class Solaris.VerseEnum
	// Inherited from UEnum -> UField -> UObject
	// Size: 0x8 (0x70 - 0x68)
	class UVerseEnum : public UEnum	
	{
	public:
		EVerseEnumFlags VerseEnumFlags; // 0x68(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.VerseEnum");
			return ret;
		}
	};


	// Class Solaris.SolarisArrayLibrary
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USolarisArrayLibrary : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.SolarisArrayLibrary");
			return ret;
		}

		void UnsafeCall(TArray& Array, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BB8F8
		void RefCall(TArray& Array, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BB818
		void Move(TArray& Target, TArray& Source); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BB738
		int64_t Length(TArray& Array); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BB658
		void Empty(TArray& Array); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BB578
		TArray ConcatEquals(TArray& LHS, TArray& RHS); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BB498
		TArray Concat(TArray& LHS, TArray& RHS); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BB3B8
		void Call(TArray& Array, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BB2D8
		int64_t Add(TArray& Array, FGenericElementType& new_item); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BB1F8
	};


	// Class Solaris.SolarisCoroutineLibrary
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USolarisCoroutineLibrary : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.SolarisCoroutineLibrary");
			return ret;
		}

		UObject TaskMake(UClass Type, UObject Caller, int64_t CallerResumeState, int64_t CallerCancelState); // Flags: Final|Native|Static|Public 0x7FF4145BBD58
		int64_t TaskGetState(UObject Task); // Flags: Final|Native|Static|Public 0x7FF4145BBC78
		void TaskGetReturnProperty(UObject Task); // Flags: Final|Native|Static|Public 0x7FF4145BBB98
		void TaskComplete(UObject Task); // Flags: Final|Native|Static|Public 0x7FF4145BBAB8
		void TaskCancel(UObject Task); // Flags: Final|Native|Static|Public 0x7FF4145BB9D8
	};


	// Class Solaris.GameFeature_SolarisObserver
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UGameFeature_SolarisObserver : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.GameFeature_SolarisObserver");
			return ret;
		}
	};


	// Class Solaris.SolarisMapLibrary
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USolarisMapLibrary : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.SolarisMapLibrary");
			return ret;
		}

		void Move(TMap& Dest, TMap& Src); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BC458
		int64_t Length(TMap& Map); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BC378
		void InitMap(TMap& Map); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BC298
		FGenericValueType GetValueByIndex(TMap& Map, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BC1B8
		int64_t GetNextValidIndex(TMap& Map, int64_t InitialIndex); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BC0D8
		FGenericKeyType GetKeyByIndex(TMap& Map, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BBFF8
		TMap Concat(TMap& LHS, TMap& RHS); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BBF18
		void Add(TMap& Map, FGenericKeyType& Key, FGenericValueType& Value); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BBE38
	};


	// Class Solaris.SolarisMathLibrary_Bool
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USolarisMathLibrary_Bool : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.SolarisMathLibrary_Bool");
			return ret;
		}

		void Query(); // Flags: Final|Native|Static|Public 0x7FF4145BC538
	};


	// Class Solaris.SolarisMathLibrary_Int
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USolarisMathLibrary_Int : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.SolarisMathLibrary_Int");
			return ret;
		}

		int32_t UncheckedConvertI32I64(int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BD798
		void SubtractEquals(int64_t& LHS, int64_t RHS); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BD6B8
		void Subtract(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BD5D8
		bool PredicateNotEqual(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BD4F8
		bool PredicateLessEqual(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BD418
		bool PredicateLess(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BD338
		bool PredicateGreaterEqual(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BD258
		bool PredicateGreater(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BD178
		bool PredicateEqual(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BD098
		void Negate(int64_t Value); // Flags: Final|Native|Static|Public 0x7FF4145BCFB8
		void MultiplyEquals(int64_t& LHS, int64_t RHS); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BCED8
		void Multiply(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BCDF8
		void LessEqual(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BCD18
		void Less(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BCC38
		void GreaterEqual(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BCB58
		void Greater(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BCA78
		void Divide(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BC998
		void CheckConstrainedInt(int64_t Min, int64_t Max, int64_t Value); // Flags: Final|Native|Static|Public 0x7FF4145BC8B8
		void AddEquals(int64_t& LHS, int64_t RHS); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BC7D8
		void Add(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BC6F8
		void abs(int64_t Value); // Flags: Final|Native|Static|Public 0x7FF4145BC618
	};


	// Class Solaris.SolarisMathLibrary_Rational
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USolarisMathLibrary_Rational : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.SolarisMathLibrary_Rational");
			return ret;
		}

		void floor(FVerseRational Val); // Flags: Final|Native|Static|Public 0x7FF4145BD958
		void ceil(FVerseRational Val); // Flags: Final|Native|Static|Public 0x7FF4145BD878
	};


	// Class Solaris.SolarisMathLibrary_Float
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USolarisMathLibrary_Float : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.SolarisMathLibrary_Float");
			return ret;
		}

		void SubtractEquals(double& LHS, double RHS); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BE838
		double Subtract(double LHS, double RHS); // Flags: Final|Native|Static|Public 0x7FF4145BE758
		double Negate(double Value); // Flags: Final|Native|Static|Public 0x7FF4145BE678
		double MultiplyIntFloat(int64_t LHS, double RHS); // Flags: Final|Native|Static|Public 0x7FF4145BE598
		double MultiplyFloatInt(double LHS, int64_t RHS); // Flags: Final|Native|Static|Public 0x7FF4145BE4B8
		void MultiplyEquals(double& LHS, double RHS); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BE3D8
		double Multiply(double LHS, double RHS); // Flags: Final|Native|Static|Public 0x7FF4145BE2F8
		void LessEqual(double LHS, double RHS); // Flags: Final|Native|Static|Public 0x7FF4145BE218
		void Less(double LHS, double RHS); // Flags: Final|Native|Static|Public 0x7FF4145BE138
		void GreaterEqual(double LHS, double RHS); // Flags: Final|Native|Static|Public 0x7FF4145BE058
		void Greater(double LHS, double RHS); // Flags: Final|Native|Static|Public 0x7FF4145BDF78
		void DivideEquals(double& LHS, double RHS); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BDE98
		double Divide(double LHS, double RHS); // Flags: Final|Native|Static|Public 0x7FF4145BDDB8
		void CheckConstrainedFloat(double Min, double Max, double Value); // Flags: Final|Native|Static|Public 0x7FF4145BDCD8
		void AddEquals(double& LHS, double RHS); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BDBF8
		double Add(double LHS, double RHS); // Flags: Final|Native|Static|Public 0x7FF4145BDB18
		double abs(double Value); // Flags: Final|Native|Static|Public 0x7FF4145BDA38
	};


	// Class Solaris.SolarisMathLibrary_String
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USolarisMathLibrary_String : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.SolarisMathLibrary_String");
			return ret;
		}

		void UncheckedCall(int32_t& String, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BF0F8
		void RefCall(int32_t& String, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BF018
		void Move(int32_t& Destination, int32_t& Source); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BEF38
		int32_t MakeLiteral(); // Flags: Final|Native|Static|Public 0x7FF4145BEE58
		void Make(); // Flags: Final|Native|Static|Public 0x7FF4145BED78
		int64_t Length(int32_t& Array); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BEC98
		int32_t ConcatEquals(int32_t& LHS, int32_t& RHS); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BEBB8
		int32_t Concat(int32_t& LHS, int32_t& RHS); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BEAD8
		void Call(int32_t& String, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BE9F8
		void Add(int32_t& String, int8_t Character); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BE918
	};


	// Class Solaris.SolarisMathLibrary_Option
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USolarisMathLibrary_Option : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.SolarisMathLibrary_Option");
			return ret;
		}

		void Query(); // Flags: Final|Native|Static|Public 0x7FF4145BF2B8
		void Make(); // Flags: Final|Native|Static|Public 0x7FF4145BF1D8
	};


	// Class Solaris.SolarisGameFeaturePluginObserver
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class USolarisGameFeaturePluginObserver : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.SolarisGameFeaturePluginObserver");
			return ret;
		}
	};


	// Class Solaris.SolarisGameSettings
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class USolarisGameSettings : public UObject	
	{
	public:
		TArray Blacklist; // 0x28(0x10)
		int32_t MaxAllowedSize; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.SolarisGameSettings");
			return ret;
		}
	};


	// Class Solaris.SolarisUtilLibrary
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USolarisUtilLibrary : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.SolarisUtilLibrary");
			return ret;
		}

		void WriteClassVar(); // Flags: Final|Native|Static|Public 0x7FF4145C0978
		int64_t Validate(int64_t Property, int64_t Value); // Flags: Final|Native|Static|Public 0x7FF4145C0898
		void UnsafeCast(); // Flags: Final|Native|Static|Public 0x7FF4145C07B8
		int64_t ReplaceOptionValue(int64_t ResultProperty, int64_t Option, int64_t Value); // Flags: Final|Native|Static|Public 0x7FF4145C06D8
		bool ReferenceIsValid(int64_t Reference); // Flags: Final|Native|Static|Public 0x7FF4145C05F8
		bool ObjectHasNoFlags(UObject Object, int32_t Flags); // Flags: Final|Native|Static|Public 0x7FF4145C0518
		int64_t MakeUnsetOption(); // Flags: Final|Native|Static|Public 0x7FF4145C0438
		bool MakeOptionFromValue(UObject Property, int64_t Value); // Flags: Final|Native|Static|Public 0x7FF4145C0358
		void MakeClassVarProxy(); // Flags: Final|Native|Static|Public 0x7FF4145C0278
		bool IsOptionSet(int64_t Option); // Flags: Final|Native|Static|Public 0x7FF4145C0198
		bool IsNonNullObject(UObject Object); // Flags: Final|Native|Static|Public 0x7FF4145C00B8
		void InstantiateObject(UClass Class, int64_t InstancingGraph); // Flags: Final|Native|Static|Public 0x7FF4145BFFD8
		void InstanceFunction(UObject Object, FName MethodName); // Flags: Final|Native|Static|Public 0x7FF4145BFEF8
		bool HasInterface(UObject Object, UVerseClass InterfaceClass); // Flags: Final|Native|Static|Public 0x7FF4145BFE18
		int64_t GetOptionValue(int64_t Option); // Flags: Final|Native|Static|Public 0x7FF4145BFD38
		UObject GetCurrentlyInstantiatedObject(); // Flags: Final|Native|Static|Public 0x7FF4145BFC58
		void DidClassVarProxyCallSucceed(); // Flags: Final|Native|Static|Public 0x7FF4145BFB78
		void DestroyClassVarProxy(); // Flags: Final|Native|Static|Public 0x7FF4145BFA98
		int64_t Dereference(int64_t Reference); // Flags: Final|Native|Static|Public 0x7FF4145BF9B8
		void CallFunction(); // Flags: Final|Native|Static|Public 0x7FF4145BF8D8
		void CallFinalFunctionWithContext(); // Flags: Final|Native|Static|Public 0x7FF4145BF7F8
		void CallClassVarProxySetter(); // Flags: Final|Native|Static|Public 0x7FF4145BF718
		void CallClassVarProxyGetter(); // Flags: Final|Native|Static|Public 0x7FF4145BF638
		int64_t Addressof(int64_t Value); // Flags: Final|Native|Static|Public 0x7FF4145BF558
		void AddPropertyToSubobjectExclusionList(int64_t InstancingGraph, int64_t Property); // Flags: Final|Native|Static|Public 0x7FF4145BF478
		void AccessStructMemberViaClassVarProxy(); // Flags: Final|Native|Static|Public 0x7FF4145BF398
	};


	// Class Solaris.VerseClass
	// Inherited from UVerseClassBase -> UVerseVMClass -> UClass -> UStruct -> UField -> UObject
	// Size: 0x100 (0x300 - 0x200)
	class UVerseClass : public UVerseClassBase	
	{
	public:
		uint32_t SolClassFlags; // 0x200(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x204(0x4) UNKNOWN PROPERTY
		TArray TaskClasses; // 0x208(0x10)
		UFunction InitInstanceFunction; // 0x218(0x8)
		TArray PersistentVars; // 0x220(0x10)
		TArray SessionVars; // 0x230(0x10)
		TMap VarAccessors; // 0x240(0x50)
		FVerseEffectSet ConstructorEffects; // 0x290(0x4)
		FName MangledPackageVersePath; // 0x294(0x4)
		FString PackageRelativeVersePath; // 0x298(0x10)
		TMap DisplayToMangledNameMap; // 0x2A8(0x50)
		unsigned char UnknownData03_7[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.VerseClass");
			return ret;
		}
	};


	// Class Solaris.VerseDebugData
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UVerseDebugData : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.VerseDebugData");
			return ret;
		}
	};


	// Class Solaris.VerseDynamicallyTypedValueLibrary
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseDynamicallyTypedValueLibrary : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.VerseDynamicallyTypedValueLibrary");
			return ret;
		}

		void NotEqual(int32_t Left, int32_t Right); // Flags: Final|Native|Static|Public 0x7FF4145C1AF8
		void MakeRuntimeTypeTuple(TArray ValueType); // Flags: Final|Native|Static|Public 0x7FF4145C1A18
		void MakeRuntimeTypeStruct(UStruct Struct); // Flags: Final|Native|Static|Public 0x7FF4145C1938
		void MakeRuntimeTypeString(); // Flags: Final|Native|Static|Public 0x7FF4145C1858
		void MakeRuntimeTypeOption(int32_t ValueType); // Flags: Final|Native|Static|Public 0x7FF4145C1778
		void MakeRuntimeTypeObject(); // Flags: Final|Native|Static|Public 0x7FF4145C1698
		void MakeRuntimeTypeMap(int32_t KeyType, int32_t ValueType); // Flags: Final|Native|Static|Public 0x7FF4145C15B8
		void MakeRuntimeTypeLogic(); // Flags: Final|Native|Static|Public 0x7FF4145C14D8
		void MakeRuntimeTypeInt64(); // Flags: Final|Native|Static|Public 0x7FF4145C13F8
		void MakeRuntimeTypeFunction(); // Flags: Final|Native|Static|Public 0x7FF4145C1318
		void MakeRuntimeTypeFloat(); // Flags: Final|Native|Static|Public 0x7FF4145C1238
		void MakeRuntimeTypeEnum(FName Name); // Flags: Final|Native|Static|Public 0x7FF4145C1158
		void MakeRuntimeTypeDynamic(); // Flags: Final|Native|Static|Public 0x7FF4145C1078
		void MakeRuntimeTypeClass(); // Flags: Final|Native|Static|Public 0x7FF4145C0F98
		void MakeRuntimeTypeChar8(); // Flags: Final|Native|Static|Public 0x7FF4145C0EB8
		void MakeRuntimeTypeChar32(); // Flags: Final|Native|Static|Public 0x7FF4145C0DD8
		void MakeRuntimeTypeArray(int32_t ElementType); // Flags: Final|Native|Static|Public 0x7FF4145C0CF8
		void Equal(int32_t Left, int32_t Right); // Flags: Final|Native|Static|Public 0x7FF4145C0C18
		void ConvertToDynamicallyTypedValue(int32_t RuntimeType, int32_t Value); // Flags: Final|Native|Static|Public 0x7FF4145C0B38
		void ConvertFromDynamicallyTypedValue(int32_t RuntimeType, int32_t Value); // Flags: Final|Native|Static|Public 0x7FF4145C0A58
	};

}
