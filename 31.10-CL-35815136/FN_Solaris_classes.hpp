#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Solaris
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Solaris.VerseStruct
	// Inherited from UScriptStruct -> UStruct -> UField -> UObject
	// Size: 0x40 (0x100 - 0xC0)
	class UVerseStruct : public UScriptStruct	
	{
	public:
		uint32_t VerseClassFlags; // 0xC0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		UFunction* InitFunction; // 0xC8(0x8)
		UVerseClass* ModuleClass; // 0xD0(0x8)
		FGuid Guid; // 0xD8(0x10)
		UFunction* FactoryFunction; // 0xE8(0x8)
		UFunction* OverrideFactoryFunction; // 0xF0(0x8)
		FVerseEffectSet ConstructorEffects; // 0xF8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY

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

		void Type(UClass* KeyType, UClass* ValueType); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F44D8(relative to base address)
		void RefCall(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0F3740(relative to base address)
		void PersistentVarRefCall(FString Path, TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0F313C(relative to base address)
		void PersistentVarCall(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0F2F94(relative to base address)
		void FitsInPlayerMap(FGenericValueType Value); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EF2F8(relative to base address)
		void CompletelyAssignedRefCall(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0EE100(relative to base address)
		void CompletelyAssignedPersistentVarRefCall(FString Path, TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0EDF14(relative to base address)
		void Call(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0ED7A4(relative to base address)
	};


	// Class Solaris.VerseAssetsConfig
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UVerseAssetsConfig : public UObject	
	{
	public:
		TArray<FVerseAssetConfig> AssetConfigs; // 0x28(0x10)

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
		TArray<char> DigestCode; // 0x28(0x10)
		TArray<char> ManifestCode; // 0x38(0x10)
		TArray<FManifestDependency> DependencyPackages; // 0x48(0x10)
		TSet<FSoftObjectPath> ClassImports; // 0x58(0x50)
		FString ProjectName; // 0xA8(0x10)
		EVerseDigestVariant Variant; // 0xB8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		uint32_t VerseVersion; // 0xBC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Solaris.VerseDigest");
			return ret;
		}
	};


	// Class Solaris.VerseEnum
	// Inherited from UEnum -> UField -> UObject
	// Size: 0x8 (0x68 - 0x60)
	class UVerseEnum : public UEnum	
	{
	public:
		EVerseEnumFlags VerseEnumFlags; // 0x60(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY

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

		void UnsafeCall(TArray<FGenericElementType>& Array, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0DEF30(relative to base address)
		void RefCall(TArray<FGenericElementType>& Array, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0DED64(relative to base address)
		void Move(TArray<FGenericElementType>& Target, TArray<FGenericElementType>& Source); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0DEC10(relative to base address)
		int64_t Length(TArray<FGenericElementType>& Array); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0DEB40(relative to base address)
		void Empty(TArray<FGenericElementType>& Array); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0DEAB4(relative to base address)
		TArray ConcatEquals(TArray<FGenericElementType>& LHS, TArray<FGenericElementType>& RHS); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0DE8D0(relative to base address)
		TArray Concat(TArray<FGenericElementType>& LHS, TArray<FGenericElementType>& RHS); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0DE7C0(relative to base address)
		void Call(TArray<FGenericElementType>& Array, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0DE37C(relative to base address)
		int64_t Add(TArray<FGenericElementType>& Array, FGenericElementType& new_item); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0DE138(relative to base address)
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

		UObject TaskMake(UClass* Type, UObject* Caller, int64_t CallerResumeState, int64_t CallerCancelState); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF747BF3718(relative to base address)
		int64_t TaskGetState(UObject* Task); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74976D0FC(relative to base address)
		void TaskGetReturnProperty(UObject* Task); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F42B0(relative to base address)
		void TaskComplete(UObject* Task); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F422C(relative to base address)
		void TaskCancel(UObject* Task); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F41BC(relative to base address)
	};


	// Class Solaris.GameFeature_SolarisObserver
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UGameFeature_SolarisObserver : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

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

		void Move(TMap<FGenericKeyType, FGenericValueType>& Dest, TMap<FGenericKeyType, FGenericValueType>& Src); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0F2304(relative to base address)
		int64_t Length(TMap<FGenericKeyType, FGenericValueType>& Map); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0F1118(relative to base address)
		void InitMap(TMap<FGenericKeyType, FGenericValueType>& Map); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0F071C(relative to base address)
		FGenericValueType GetValueByIndex(TMap<FGenericKeyType, FGenericValueType>& Map, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0EFEF4(relative to base address)
		int64_t GetNextValidIndex(TMap<FGenericKeyType, FGenericValueType>& Map, int64_t InitialIndex); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0EFB24(relative to base address)
		FGenericKeyType GetKeyByIndex(TMap<FGenericKeyType, FGenericValueType>& Map, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0EF858(relative to base address)
		TMap Concat(TMap<FGenericKeyType, FGenericValueType>& LHS, TMap<FGenericKeyType, FGenericValueType>& RHS); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0EE1A0(relative to base address)
		void Add(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType& Key, FGenericValueType& Value); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0EC41C(relative to base address)
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

		void Query(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F3328(relative to base address)
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

		int32_t UncheckedConvertI32I64(int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F4864(relative to base address)
		void SubtractEquals(int64_t& LHS, int64_t RHS); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0F3FF8(relative to base address)
		void Subtract(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F3DB8(relative to base address)
		bool PredicateNotEqual(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF747BF387C(relative to base address)
		bool PredicateLessEqual(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74C64ED1C(relative to base address)
		bool PredicateLess(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74C64F28C(relative to base address)
		bool PredicateGreaterEqual(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74C648528(relative to base address)
		bool PredicateGreater(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74C648A98(relative to base address)
		bool PredicateEqual(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74C63C2A4(relative to base address)
		void Negate(int64_t Value); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F2E00(relative to base address)
		void MultiplyEquals(int64_t& LHS, int64_t RHS); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0F2A1C(relative to base address)
		void Multiply(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F27DC(relative to base address)
		void LessEqual(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F1688(relative to base address)
		void Less(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F1480(relative to base address)
		void GreaterEqual(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F04F4(relative to base address)
		void Greater(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F02F0(relative to base address)
		void Divide(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EF0B4(relative to base address)
		void CheckConstrainedInt(int64_t Min, int64_t Max, int64_t Value); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EDDDC(relative to base address)
		void AddEquals(int64_t& LHS, int64_t RHS); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0ECDF8(relative to base address)
		void Add(int64_t LHS, int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EC9D0(relative to base address)
		void abs(int64_t Value); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EC120(relative to base address)
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

		void floor(FVerseRational Val); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EF668(relative to base address)
		void ceil(FVerseRational Val); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EDAC8(relative to base address)
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

		void SubtractEquals(double& LHS, double RHS); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0F3ECC(relative to base address)
		double Subtract(double LHS, double RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F3CE4(relative to base address)
		double Negate(double Value); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F2D78(relative to base address)
		double MultiplyIntFloat(int64_t LHS, double RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F2CAC(relative to base address)
		double MultiplyFloatInt(double LHS, int64_t RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F2BE0(relative to base address)
		void MultiplyEquals(double& LHS, double RHS); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0F28F0(relative to base address)
		double Multiply(double LHS, double RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F2708(relative to base address)
		void LessEqual(double LHS, double RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F1570(relative to base address)
		void Less(double LHS, double RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F136C(relative to base address)
		void GreaterEqual(double LHS, double RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F03E0(relative to base address)
		void Greater(double LHS, double RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F01DC(relative to base address)
		void DivideEquals(double& LHS, double RHS); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0EF1CC(relative to base address)
		double Divide(double LHS, double RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EEFE0(relative to base address)
		void CheckConstrainedFloat(double Min, double Max, double Value); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EDC98(relative to base address)
		void AddEquals(double& LHS, double RHS); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0ECCCC(relative to base address)
		double Add(double LHS, double RHS); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EC8FC(relative to base address)
		double abs(double Value); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EC098(relative to base address)
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

		void UncheckedCall(int32_t& String, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0F4684(relative to base address)
		void RefCall(int32_t& String, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0F34BC(relative to base address)
		void Move(int32_t& Destination, int32_t& Source); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0F2530(relative to base address)
		int32_t MakeLiteral(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F1EE0(relative to base address)
		void Make(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F18A8(relative to base address)
		int64_t Length(int32_t& Array); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0F1260(relative to base address)
		int32_t ConcatEquals(int32_t& LHS, int32_t& RHS); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0EEA54(relative to base address)
		int32_t Concat(int32_t& LHS, int32_t& RHS); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0EE858(relative to base address)
		void Call(int32_t& String, int64_t Index); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0ED298(relative to base address)
		void Add(int32_t& String, int8_t Character); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0ECAE8(relative to base address)
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

		void Query(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F33C4(relative to base address)
		void Make(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F1778(relative to base address)
	};


	// Class Solaris.SolarisGameFeaturePluginObserver
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class USolarisGameFeaturePluginObserver : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

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
		TArray<FString> Blacklist; // 0x28(0x10)
		int32_t MaxAllowedSize; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

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

		void WriteClassVar(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F4AF8(relative to base address)
		int64_t Validate(int64_t Property, int64_t Value); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F4A50(relative to base address)
		void UnsafeCast(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F48DC(relative to base address)
		int64_t ReplaceOptionValue(int64_t ResultProperty, int64_t Option, int64_t Value); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F3858(relative to base address)
		bool ReferenceIsValid(int64_t Reference); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F37E0(relative to base address)
		bool ObjectHasNoFlags(UObject* Object, int32_t Flags); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F2ED0(relative to base address)
		int64_t MakeUnsetOption(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F2258(relative to base address)
		bool MakeOptionFromValue(UObject* Property, int64_t Value); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F2048(relative to base address)
		void MakeClassVarProxy(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F1B8C(relative to base address)
		bool IsOptionSet(int64_t Option); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F0F84(relative to base address)
		bool IsNonNullObject(UObject* Object); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F0F10(relative to base address)
		void InstantiateObject(UClass* Class, int64_t InstancingGraph); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F0C10(relative to base address)
		void InstanceFunction(UObject* Object, FName MethodName); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F0A94(relative to base address)
		bool HasInterface(UObject* Object, UVerseClass* InterfaceClass); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F05E4(relative to base address)
		int64_t GetOptionValue(int64_t Option); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EFD68(relative to base address)
		UObject GetCurrentlyInstantiatedObject(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EF834(relative to base address)
		void DidClassVarProxyCallSucceed(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EEF78(relative to base address)
		void DestroyClassVarProxy(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EEE68(relative to base address)
		int64_t Dereference(int64_t Reference); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EECD4(relative to base address)
		void CallFunction(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EDA64(relative to base address)
		void CallFinalFunctionWithContext(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0ED9B0(relative to base address)
		void CallClassVarProxySetter(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0ED8B8(relative to base address)
		void CallClassVarProxyGetter(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0ED840(relative to base address)
		int64_t Addressof(int64_t Value); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0ED188(relative to base address)
		void AddPropertyToSubobjectExclusionList(int64_t InstancingGraph, int64_t Property); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0ECFBC(relative to base address)
		void AccessStructMemberViaClassVarProxy(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0EC1F4(relative to base address)
	};


	// Class Solaris.VerseClass
	// Inherited from UVerseClassBase -> UVerseVMClass -> UClass -> UStruct -> UField -> UObject
	// Size: 0x100 (0x300 - 0x200)
	class UVerseClass : public UVerseClassBase	
	{
	public:
		uint32_t SolClassFlags; // 0x200(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x204(0x4) UNKNOWN PROPERTY
		TArray<UVerseClass*> TaskClasses; // 0x208(0x10)
		UFunction* InitInstanceFunction; // 0x218(0x8)
		TArray<FVersePersistentVar> PersistentVars; // 0x220(0x10)
		TArray<FVerseSessionVar> SessionVars; // 0x230(0x10)
		TMap<FName, FVerseClassVarAccessors> VarAccessors; // 0x240(0x50)
		FVerseEffectSet ConstructorEffects; // 0x290(0x4)
		FName MangledPackageVersePath; // 0x294(0x4)
		FString PackageRelativeVersePath; // 0x298(0x10)
		TMap<FName, FName> DisplayToMangledNameMap; // 0x2A8(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

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

		void NotEqual(int32_t Left, int32_t Right); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F8128(relative to base address)
		void MakeRuntimeTypeTuple(TArray<int32_t> ValueType); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7F88(relative to base address)
		void MakeRuntimeTypeStruct(UStruct* Struct); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7F08(relative to base address)
		void MakeRuntimeTypeString(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7EE4(relative to base address)
		void MakeRuntimeTypeOption(int32_t ValueType); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7DD4(relative to base address)
		void MakeRuntimeTypeObject(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7DB0(relative to base address)
		void MakeRuntimeTypeMap(int32_t KeyType, int32_t ValueType); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7BD8(relative to base address)
		void MakeRuntimeTypeLogic(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7BB4(relative to base address)
		void MakeRuntimeTypeInt64(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7B90(relative to base address)
		void MakeRuntimeTypeFunction(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7B6C(relative to base address)
		void MakeRuntimeTypeFloat(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7B48(relative to base address)
		void MakeRuntimeTypeEnum(FName Name); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7AC8(relative to base address)
		void MakeRuntimeTypeDynamic(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7AA4(relative to base address)
		void MakeRuntimeTypeClass(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7A80(relative to base address)
		void MakeRuntimeTypeChar8(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7A5C(relative to base address)
		void MakeRuntimeTypeChar32(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7A38(relative to base address)
		void MakeRuntimeTypeArray(int32_t ElementType); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7928(relative to base address)
		void Equal(int32_t Left, int32_t Right); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F76BC(relative to base address)
		void ConvertToDynamicallyTypedValue(int32_t RuntimeType, int32_t Value); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F74EC(relative to base address)
		void ConvertFromDynamicallyTypedValue(int32_t RuntimeType, int32_t Value); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0F7360(relative to base address)
	};

}
