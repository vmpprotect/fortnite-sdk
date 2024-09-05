#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Solaris
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Solaris.GenericKeyType
	// Size: 0x1 (0x1 - 0x0)
	struct FGenericKeyType	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Solaris.GenericValueType
	// Size: 0x1 (0x1 - 0x0)
	struct FGenericValueType	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Solaris.VerseAssetParameterConfig
	// Size: 0x18 (0x18 - 0x0)
	struct FVerseAssetParameterConfig	
	{
	public:
		FString ParameterType; // 0x0(0x10)
		uint32_t PublicVersion; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Solaris.VerseAssetConfig
	// Size: 0x28 (0x28 - 0x0)
	struct FVerseAssetConfig	
	{
	public:
		FString AssetType; // 0x0(0x10)
		uint32_t PublicVersion; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray ParameterConfigs; // 0x18(0x10)
	};


	// Struct Solaris.ManifestDependency
	// Size: 0x10 (0x10 - 0x0)
	struct FManifestDependency	
	{
	public:
		TArray Dependency; // 0x0(0x10)
	};


	// Struct Solaris.VersePackageContainerSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FVersePackageContainerSettings	
	{
	public:
		FString VersePath; // 0x0(0x10)
		EVersePackageScope VerseScope; // 0x10(0x1)
		unsigned char UnknownData01_6[0xF]; // 0x11(0xF) UNKNOWN PROPERTY
		TArray DependencyPackages; // 0x20(0x10)
		FString VniDestDir; // 0x30(0x10)
	};


	// Struct Solaris.VerseSourceCode
	// Size: 0x10 (0x10 - 0x0)
	struct FVerseSourceCode	
	{
	public:
		TArray Code; // 0x0(0x10)
	};


	// Struct Solaris.VerseSourceFile
	// Size: 0x20 (0x20 - 0x0)
	struct FVerseSourceFile	
	{
	public:
		FString Filename; // 0x0(0x10)
		TArray CodeChunks; // 0x10(0x10)
	};


	// Struct Solaris.VersePackageContainer
	// Size: 0xA8 (0xA8 - 0x0)
	struct FVersePackageContainer	
	{
	public:
		FString Name; // 0x0(0x10)
		FString DirPath; // 0x10(0x10)
		EVersePackageType PackageType; // 0x20(0x1)
		bool bEnableVerseAssetReflection; // 0x21(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
		FVersePackageContainerSettings Settings; // 0x28(0x40)
		TArray SourceFiles; // 0x68(0x10)
		TArray AssetDigest; // 0x78(0x10)
		TArray AssetDependencies; // 0x88(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x98(0x10) UNKNOWN PROPERTY
	};


	// Struct Solaris.VerseProjectContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FVerseProjectContainer	
	{
	public:
		TArray Packages; // 0x0(0x10)
	};


	// Struct Solaris.GenericElementType
	// Size: 0x1 (0x1 - 0x0)
	struct FGenericElementType	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Solaris.VersePersistentVar
	// Size: 0x30 (0x30 - 0x0)
	struct FVersePersistentVar	
	{
	public:
		FString Path; // 0x0(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x10(0x20) UNKNOWN PROPERTY
	};


	// Struct Solaris.VerseSessionVar
	// Size: 0x20 (0x20 - 0x0)
	struct FVerseSessionVar	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct Solaris.VerseClassVarAccessor
	// Size: 0x10 (0x10 - 0x0)
	struct FVerseClassVarAccessor	
	{
	public:
		UFunction Func; // 0x0(0x8)
		bool bIsInstanceMember; // 0x8(0x1)
		bool bIsFallible; // 0x9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};


	// Struct Solaris.VerseClassVarAccessors
	// Size: 0xA0 (0xA0 - 0x0)
	struct FVerseClassVarAccessors	
	{
	public:
		TMap Getters; // 0x0(0x50)
		TMap Setters; // 0x50(0x50)
	};


	// Struct Solaris.VerseEffectSet
	// Size: 0x4 (0x4 - 0x0)
	struct FVerseEffectSet	
	{
	public:
		bool suspends : 1; // 0x0:0(0x1)
		bool decides : 1; // 0x0:1(0x1)
		bool diverges : 1; // 0x0:2(0x1)
		bool varies : 1; // 0x0:3(0x1)
		bool reads : 1; // 0x0:4(0x1)
		bool writes : 1; // 0x0:5(0x1)
		bool allocates : 1; // 0x0:6(0x1)
		bool no_rollback : 1; // 0x0:7(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
	};

}
