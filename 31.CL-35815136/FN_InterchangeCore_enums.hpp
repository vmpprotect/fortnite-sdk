#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InterchangeCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/InterchangeCore.EInterchangeFactoryAssetType
	enum EInterchangeFactoryAssetType
	{
		EInterchangeFactoryAssetType__None = 0,
		EInterchangeFactoryAssetType__Textures = 1,
		EInterchangeFactoryAssetType__Materials = 2,
		EInterchangeFactoryAssetType__Meshes = 3,
		EInterchangeFactoryAssetType__Animations = 4,
		EInterchangeFactoryAssetType__Physics = 5,
	};


	// Enum /Script/InterchangeCore.EInterchangePipelineTask
	enum EInterchangePipelineTask
	{
		EInterchangePipelineTask__PostTranslator = 0,
		EInterchangePipelineTask__PostFactory = 1,
		EInterchangePipelineTask__PostImport = 2,
		EInterchangePipelineTask__Export = 3,
	};


	// Enum /Script/InterchangeCore.EInterchangePipelineContext
	enum EInterchangePipelineContext
	{
		EInterchangePipelineContext__None = 0,
		EInterchangePipelineContext__AssetImport = 1,
		EInterchangePipelineContext__AssetReimport = 2,
		EInterchangePipelineContext__SceneImport = 3,
		EInterchangePipelineContext__SceneReimport = 4,
		EInterchangePipelineContext__AssetCustomLODImport = 5,
		EInterchangePipelineContext__AssetCustomLODReimport = 6,
		EInterchangePipelineContext__AssetAlternateSkinningImport = 7,
		EInterchangePipelineContext__AssetAlternateSkinningReimport = 8,
		EInterchangePipelineContext__AssetCustomMorphTargetImport = 9,
		EInterchangePipelineContext__AssetCustomMorphTargetReImport = A,
	};


	// Enum /Script/InterchangeCore.EInterchangeResultType
	enum EInterchangeResultType
	{
		EInterchangeResultType__Success = 0,
		EInterchangeResultType__Warning = 1,
		EInterchangeResultType__Error = 2,
	};


	// Enum /Script/InterchangeCore.EInterchangeTranslatorType
	enum EInterchangeTranslatorType
	{
		EInterchangeTranslatorType__Invalid = 0,
		EInterchangeTranslatorType__Assets = 2,
		EInterchangeTranslatorType__Actors = 4,
		EInterchangeTranslatorType__Scenes = 6,
	};


	// Enum /Script/InterchangeCore.EInterchangeTranslatorAssetType
	enum EInterchangeTranslatorAssetType
	{
		EInterchangeTranslatorAssetType__None = 0,
		EInterchangeTranslatorAssetType__Textures = 1,
		EInterchangeTranslatorAssetType__Materials = 2,
		EInterchangeTranslatorAssetType__Meshes = 4,
		EInterchangeTranslatorAssetType__Animations = 8,
	};


	// Enum /Script/InterchangeCore.EInterchangeNodeContainerType
	enum EInterchangeNodeContainerType
	{
		EInterchangeNodeContainerType__None = 0,
		EInterchangeNodeContainerType__TranslatedScene = 1,
		EInterchangeNodeContainerType__TranslatedAsset = 2,
		EInterchangeNodeContainerType__FactoryData = 3,
	};


	// Enum /Script/InterchangeCore.EInterchangeNodeUserInterfaceContext
	enum EInterchangeNodeUserInterfaceContext
	{
		EInterchangeNodeUserInterfaceContext__None = 0,
		EInterchangeNodeUserInterfaceContext__Preview = 1,
	};


	// Enum /Script/InterchangeCore.EReimportStrategyFlags
	enum EReimportStrategyFlags
	{
		EReimportStrategyFlags__ApplyNoProperties = 0,
		EReimportStrategyFlags__ApplyPipelineProperties = 1,
		EReimportStrategyFlags__ApplyEditorChangedProperties = 2,
	};

}
