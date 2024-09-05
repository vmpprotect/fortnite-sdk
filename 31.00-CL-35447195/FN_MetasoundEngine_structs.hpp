#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MetasoundEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MetasoundEngine.MetaSoundOutput
	// Inherited from FSoundGeneratorOutput
	// Size: 0xC (0x10 - 0x4)
	struct FMetaSoundOutput : public FSoundGeneratorOutput	
	{
	public:
		unsigned char UnknownData01_1[0xC]; // 0x4(0xC) UNKNOWN PROPERTY
	};


	// Struct MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FDefaultMetaSoundAssetAutoUpdateSettings	
	{
	public:
		FSoftObjectPath Metasound; // 0x0(0x18)
	};


	// Struct MetasoundEngine.MetaSoundPageSettings
	// Size: 0x14 (0x14 - 0x0)
	struct FMetaSoundPageSettings	
	{
	public:
		FGuid UniqueID; // 0x0(0x10)
		FName Name; // 0x10(0x4)
	};


	// Struct MetasoundEngine.MetaSoundQualitySettings
	// Size: 0x1C (0x1C - 0x0)
	struct FMetaSoundQualitySettings	
	{
	public:
		FGuid UniqueID; // 0x0(0x10)
		FName Name; // 0x10(0x4)
		FPerPlatformInt SampleRate; // 0x14(0x4)
		FPerPlatformFloat BlockRate; // 0x18(0x4)
	};


	// Struct MetasoundEngine.MetaSoundAssetDirectory
	// Size: 0x10 (0x10 - 0x0)
	struct FMetaSoundAssetDirectory	
	{
	public:
		FDirectoryPath Directory; // 0x0(0x10)
	};


	// Struct MetasoundEngine.MetaSoundAsyncAssetDependencies
	// Size: 0x30 (0x30 - 0x0)
	struct FMetaSoundAsyncAssetDependencies	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		UObject Metasound; // 0x8(0x8)
		unsigned char UnknownData03_7[0x20]; // 0x10(0x20) UNKNOWN PROPERTY
	};


	// Struct MetasoundEngine.MetaSoundBuilderNodeInputHandle
	// Inherited from FMetasoundFrontendVertexHandle
	// Size: 0x0 (0x20 - 0x20)
	struct FMetaSoundBuilderNodeInputHandle : public FMetasoundFrontendVertexHandle	
	{
	public:
	};


	// Struct MetasoundEngine.MetaSoundBuilderNodeOutputHandle
	// Inherited from FMetasoundFrontendVertexHandle
	// Size: 0x0 (0x20 - 0x20)
	struct FMetaSoundBuilderNodeOutputHandle : public FMetasoundFrontendVertexHandle	
	{
	public:
	};


	// Struct MetasoundEngine.MetaSoundNodeHandle
	// Size: 0x10 (0x10 - 0x0)
	struct FMetaSoundNodeHandle	
	{
	public:
		FGuid NodeId; // 0x0(0x10)
	};


	// Struct MetasoundEngine.MetaSoundBuilderOptions
	// Size: 0x18 (0x18 - 0x0)
	struct FMetaSoundBuilderOptions	
	{
	public:
		FName Name; // 0x0(0x4)
		bool bForceUniqueClassName; // 0x4(0x1)
		bool bAddToRegistry; // 0x5(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		TScriptInterface ExistingMetaSound; // 0x8(0x10)
	};

}
