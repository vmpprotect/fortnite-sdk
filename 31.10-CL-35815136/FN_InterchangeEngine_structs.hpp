#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InterchangeEngine
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct InterchangeEngine.InterchangeFilePickerParameters
	// Size: 0x40 (0x40 - 0x0)
	struct FInterchangeFilePickerParameters	
	{
	public:
		bool bAllowMultipleFiles; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FText Title; // 0x8(0x10)
		FString DefaultPath; // 0x18(0x10)
		bool bShowAllFactoriesExtension; // 0x28(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TArray<FString> ExtraFormats; // 0x30(0x10)
	};


	// Struct InterchangeEngine.InterchangeStackInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FInterchangeStackInfo	
	{
	public:
		FName StackName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<UInterchangePipelineBase*> Pipelines; // 0x8(0x10)
	};


	// Struct InterchangeEngine.InterchangeTranslatorPipelines
	// Size: 0x30 (0x30 - 0x0)
	struct FInterchangeTranslatorPipelines	
	{
	public:
		TWeakObjectPtr<UClass*> Translator; // 0x0(0x20)
		TArray<FSoftObjectPath> Pipelines; // 0x20(0x10)
	};


	// Struct InterchangeEngine.InterchangePipelineStack
	// Size: 0x20 (0x20 - 0x0)
	struct FInterchangePipelineStack	
	{
	public:
		TArray<FSoftObjectPath> Pipelines; // 0x0(0x10)
		TArray<FInterchangeTranslatorPipelines> PerTranslatorPipelines; // 0x10(0x10)
	};


	// Struct InterchangeEngine.InterchangeImportSettings
	// Size: 0x80 (0x80 - 0x0)
	struct FInterchangeImportSettings	
	{
	public:
		TMap<FName, FInterchangePipelineStack> PipelineStacks; // 0x0(0x50)
		FName DefaultPipelineStack; // 0x50(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> ImportDialogClass; // 0x58(0x20)
		bool bShowImportDialog; // 0x78(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
	};


	// Struct InterchangeEngine.InterchangePerTranslatorDialogOverride
	// Size: 0x28 (0x28 - 0x0)
	struct FInterchangePerTranslatorDialogOverride	
	{
	public:
		TWeakObjectPtr<UClass*> Translator; // 0x0(0x20)
		bool bShowImportDialog; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct InterchangeEngine.InterchangeDialogOverride
	// Size: 0x18 (0x18 - 0x0)
	struct FInterchangeDialogOverride	
	{
	public:
		bool bShowImportDialog; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<FInterchangePerTranslatorDialogOverride> PerTranslatorImportDialogOverride; // 0x8(0x10)
	};


	// Struct InterchangeEngine.InterchangeContentImportSettings
	// Inherited from FInterchangeImportSettings
	// Size: 0xA0 (0x120 - 0x80)
	struct FInterchangeContentImportSettings : public FInterchangeImportSettings	
	{
	public:
		TMap<EInterchangeTranslatorAssetType, FName> DefaultPipelineStackOverride; // 0x80(0x50)
		TMap<EInterchangeTranslatorAssetType, FInterchangeDialogOverride> ShowImportDialogOverride; // 0xD0(0x50)
	};


	// Struct InterchangeEngine.PropertyData
	// Size: 0x18 (0x18 - 0x0)
	struct FPropertyData	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct InterchangeEngine.ImportAssetParameters
	// Size: 0xC0 (0xC0 - 0x0)
	struct FImportAssetParameters	
	{
	public:
		UObject* ReimportAsset; // 0x0(0x8)
		int32_t ReimportSourceIndex; // 0x8(0x4)
		bool bIsAutomated; // 0xC(0x1)
		bool bFollowRedirectors; // 0xD(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
		TArray<FSoftObjectPath> OverridePipelines; // 0x10(0x10)
		ULevel* ImportLevel; // 0x20(0x8)
		FString DestinationName; // 0x28(0x10)
		bool bReplaceExisting; // 0x38(0x1)
		bool bForceShowDialog; // 0x39(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x3A(0x2) UNKNOWN PROPERTY
		FDelegateProperty OnAssetDone; // 0x3C(0xC)
		unsigned char UnknownData02_6[0x10]; // 0x48(0x10) UNKNOWN PROPERTY
		FDelegateProperty OnAssetsImportDone; // 0x58(0xC)
		unsigned char UnknownData03_6[0x14]; // 0x64(0x14) UNKNOWN PROPERTY
		FDelegateProperty OnSceneObjectDone; // 0x78(0xC)
		unsigned char UnknownData04_6[0x14]; // 0x84(0x14) UNKNOWN PROPERTY
		FDelegateProperty OnSceneImportDone; // 0x98(0xC)
		unsigned char UnknownData05_7[0x1C]; // 0xA4(0x1C) UNKNOWN PROPERTY
	};

}
