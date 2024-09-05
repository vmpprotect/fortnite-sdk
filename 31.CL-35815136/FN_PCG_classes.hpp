#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PCG
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PCG.PCGData
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPCGData : public UObject	
	{
	public:
		uint64_t UID; // 0x28(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGData");
			return ret;
		}
	};


	// Class PCG.PCGSettingsInterface
	// Inherited from UPCGData -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UPCGSettingsInterface : public UPCGData	
	{
	public:
		bool bEnabled; // 0x38(0x1)
		bool bDebug; // 0x39(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSettingsInterface");
			return ret;
		}
	};


	// Class PCG.PCGSettings
	// Inherited from UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x68 (0xA8 - 0x40)
	class UPCGSettings : public UPCGSettingsInterface	
	{
	public:
		int32_t Seed; // 0x40(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x44(0xC) UNKNOWN PROPERTY
		bool bUseSeed; // 0x50(0x1)
		unsigned char UnknownData01_6[0x3F]; // 0x51(0x3F) UNKNOWN PROPERTY
		TArray<FPCGSettingsOverridableParam> CachedOverridableParams; // 0x90(0x10)
		unsigned char UnknownData02_7[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSettings");
			return ret;
		}

		int32_t BP_GetTypeUnionOfIncidentEdges(FName& PinLabel); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A51F48(relative to base address)
	};


	// Class PCG.PCGAddComponentSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x98 (0x140 - 0xA8)
	class UPCGAddComponentSettings : public UPCGSettings	
	{
	public:
		bool bUseClassAttribute; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector ClassAttribute; // 0xB0(0x28)
		UClass* TemplateComponentClass; // 0xD8(0x8)
		bool bAllowTemplateComponentEditing; // 0xE0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xE1(0x7) UNKNOWN PROPERTY
		UActorComponent* TemplateComponent; // 0xE8(0x8)
		FPCGAttributePropertyInputSelector ActorReferenceAttribute; // 0xF0(0x28)
		FPCGAttributePropertyOutputSelector ComponentReferenceAttribute; // 0x118(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAddComponentSettings");
			return ret;
		}
	};


	// Class PCG.PCGAddTagSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x38 (0xE0 - 0xA8)
	class UPCGAddTagSettings : public UPCGSettings	
	{
	public:
		FString TagsToAdd; // 0xA8(0x10)
		FString Prefix; // 0xB8(0x10)
		FString Suffix; // 0xC8(0x10)
		bool bIgnoreTagValueParsing; // 0xD8(0x1)
		bool bTokenizeOnWhiteSpace; // 0xD9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xDA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAddTagSettings");
			return ret;
		}
	};


	// Class PCG.PCGApplyOnActorSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class UPCGApplyOnActorSettings : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyInputSelector ObjectReferenceAttribute; // 0xA8(0x28)
		TArray<FPCGObjectPropertyOverrideDescription> PropertyOverrideDescriptions; // 0xD0(0x10)
		TArray<FName> PostProcessFunctionNames; // 0xE0(0x10)
		bool bSilenceErrorOnEmptyObjectPath; // 0xF0(0x1)
		bool bSynchronousLoad; // 0xF1(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xF2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGApplyOnActorSettings");
			return ret;
		}
	};


	// Class PCG.PCGApplyScaleToBoundsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGApplyScaleToBoundsSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGApplyScaleToBoundsSettings");
			return ret;
		}
	};


	// Class PCG.PCGAssetExporter
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGAssetExporter : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAssetExporter");
			return ret;
		}

		UClass BP_GetAssetType(); // Flags: Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7507CE4FC(relative to base address)
		bool BP_ExportToAsset(UPCGDataAsset* Asset); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74F92F0A4(relative to base address)
	};


	// Class PCG.PCGAssetExporterUtils
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGAssetExporterUtils : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAssetExporterUtils");
			return ret;
		}

		void UpdateAssets(TArray<FAssetData>& PCGAssets, FPCGAssetExporterParameters Parameters); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507CF4C0(relative to base address)
		UPackage CreateAsset(UPCGAssetExporter* Exporter, FPCGAssetExporterParameters Parameters); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507CE8BC(relative to base address)
	};


	// Class PCG.PCGAttributeCastSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x58 (0x100 - 0xA8)
	class UPCGAttributeCastSettings : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource; // 0xA8(0x28)
		EPCGMetadataTypes OutputType; // 0xD0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		FPCGAttributePropertyOutputSelector OutputTarget; // 0xD8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAttributeCastSettings");
			return ret;
		}
	};


	// Class PCG.PCGAttributeExtractorTestObject
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UPCGAttributeExtractorTestObject : public UObject	
	{
	public:
		double DoubleValue; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAttributeExtractorTestObject");
			return ret;
		}
	};


	// Class PCG.PCGAttributeFilteringSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x1D8 (0x280 - 0xA8)
	class UPCGAttributeFilteringSettings : public UPCGSettings	
	{
	public:
		EPCGAttributeFilterOperator Operator; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector TargetAttribute; // 0xB0(0x28)
		bool bUseConstantThreshold; // 0xD8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector ThresholdAttribute; // 0xE0(0x28)
		bool bUseSpatialQuery; // 0x108(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x109(0x7) UNKNOWN PROPERTY
		FPCGMetadataTypesConstantStruct AttributeTypes; // 0x110(0x160)
		bool bHasSpatialToPointDeprecation; // 0x270(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x271(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAttributeFilteringSettings");
			return ret;
		}
	};


	// Class PCG.PCGAttributeFilteringRangeSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x378 (0x420 - 0xA8)
	class UPCGAttributeFilteringRangeSettings : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyInputSelector TargetAttribute; // 0xA8(0x28)
		FPCGAttributeFilterThresholdSettings MinThreshold; // 0xD0(0x1A0)
		FPCGAttributeFilterThresholdSettings MaxThreshold; // 0x270(0x1A0)
		bool bHasSpatialToPointDeprecation; // 0x410(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x411(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAttributeFilteringRangeSettings");
			return ret;
		}
	};


	// Class PCG.PCGAttributePropertySelectorBlueprintHelpers
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGAttributePropertySelectorBlueprintHelpers : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAttributePropertySelectorBlueprintHelpers");
			return ret;
		}

		bool SetPointProperty(FPCGAttributePropertySelector& Selector, EPCGPointProperties InPointProperty); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507CF30C(relative to base address)
		bool SetExtraProperty(FPCGAttributePropertySelector& Selector, EPCGExtraProperties InExtraProperty); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507CF158(relative to base address)
		bool SetAttributeName(FPCGAttributePropertySelector& Selector, FName InAttributeName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507CEFA4(relative to base address)
		EPCGAttributePropertySelection GetSelection(FPCGAttributePropertySelector& Selector); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507CEEC4(relative to base address)
		EPCGPointProperties GetPointProperty(FPCGAttributePropertySelector& Selector); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507CEDE4(relative to base address)
		FName GetName(FPCGAttributePropertySelector& Selector); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507CECFC(relative to base address)
		EPCGExtraProperties GetExtraProperty(FPCGAttributePropertySelector& Selector); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507CEC1C(relative to base address)
		TArray GetExtraNames(FPCGAttributePropertySelector& Selector); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507CEB34(relative to base address)
		FName GetAttributeName(FPCGAttributePropertySelector& Selector); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507CEA54(relative to base address)
		FPCGAttributePropertyOutputSelector CopyAndFixSource(FPCGAttributePropertyOutputSelector& OutputSelector, FPCGAttributePropertyInputSelector& InputSelector); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507CE704(relative to base address)
		FPCGAttributePropertyInputSelector CopyAndFixLast(FPCGAttributePropertyInputSelector& Selector, UPCGData* InData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507CE534(relative to base address)
	};


	// Class PCG.PCGMetadataSettingsBase
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UPCGMetadataSettingsBase : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyOutputSelector OutputTarget; // 0xA8(0x28)
		FName OutputDataFromPin; // 0xD0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataSettingsBase");
			return ret;
		}

		TArray GetOutputDataFromPinOptions(); // Flags: Final|Native|Protected|Const, Memory Exec: 0x7FF7508C4210(relative to base address)
	};


	// Class PCG.PCGAttributeRemapSettings
	// Inherited from UPCGMetadataSettingsBase -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x50 (0x128 - 0xD8)
	class UPCGAttributeRemapSettings : public UPCGMetadataSettingsBase	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource; // 0xD8(0x28)
		double InRangeMin; // 0x100(0x8)
		double InRangeMax; // 0x108(0x8)
		double OutRangeMin; // 0x110(0x8)
		double OutRangeMax; // 0x118(0x8)
		bool bClampToUnitRange; // 0x120(0x1)
		bool bIgnoreValuesOutsideInputRange; // 0x121(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x122(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAttributeRemapSettings");
			return ret;
		}
	};


	// Class PCG.PCGBlurSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x70 (0x118 - 0xA8)
	class UPCGBlurSettings : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource; // 0xA8(0x28)
		FPCGAttributePropertyOutputSelector OutputTarget; // 0xD0(0x28)
		int32_t NumIterations; // 0xF8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		double SearchDistance; // 0x100(0x8)
		EPCGBlurElementMode BlurMode; // 0x108(0x4)
		bool bUseCustomStandardDeviation; // 0x10C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x10D(0x3) UNKNOWN PROPERTY
		double CustomStandardDeviation; // 0x110(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGBlurSettings");
			return ret;
		}
	};


	// Class PCG.PCGBooleanSelectSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGBooleanSelectSettings : public UPCGSettings	
	{
	public:
		bool bUseInputB; // 0xA8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGBooleanSelectSettings");
			return ret;
		}
	};


	// Class PCG.PCGBoundsFromMeshSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UPCGBoundsFromMeshSettings : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyInputSelector MeshAttribute; // 0xA8(0x28)
		bool bSilenceAttributeNotFoundErrors; // 0xD0(0x1)
		bool bSynchronousLoad; // 0xD1(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xD2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGBoundsFromMeshSettings");
			return ret;
		}
	};


	// Class PCG.PCGBranchSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGBranchSettings : public UPCGSettings	
	{
	public:
		bool bOutputToB; // 0xA8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGBranchSettings");
			return ret;
		}
	};


	// Class PCG.PCGSpatialData
	// Inherited from UPCGData -> UObject
	// Size: 0x48 (0x80 - 0x38)
	class UPCGSpatialData : public UPCGData	
	{
	public:
		TWeakObjectPtr<AActor*> TargetActor; // 0x38(0x8)
		bool bKeepZeroDensityPoints; // 0x40(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		UPCGMetadata* MetaData; // 0x48(0x8)
		bool bHasCachedLastSelector; // 0x50(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector CachedLastSelector; // 0x58(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSpatialData");
			return ret;
		}

		UPCGPointData ToPointDataWithContext(FPCGContext& Context); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FDDDC(relative to base address)
		UPCGPointData ToPointData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FDDB8(relative to base address)
		UPCGMetadata MutableMetadata(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C45C358(relative to base address)
		UPCGUnionData K2_UnionWith(UPCGSpatialData* InOther); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FDB80(relative to base address)
		UPCGDifferenceData K2_Subtract(UPCGSpatialData* InOther); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FDADC(relative to base address)
		bool K2_SamplePoint(FTransform& Transform, FBox& Bounds, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FD854(relative to base address)
		bool K2_ProjectPoint(FTransform& InTransform, FBox& InBounds, FPCGProjectionParams& InParams, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FD56C(relative to base address)
		UPCGSpatialData K2_ProjectOn(UPCGSpatialData* InOther, FPCGProjectionParams& InParams); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FD468(relative to base address)
		UPCGIntersectionData K2_IntersectWith(UPCGSpatialData* InOther); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FD3C4(relative to base address)
		void InitializeFromData(UPCGSpatialData* InSource, UPCGMetadata* InMetadataParentOverride, bool bInheritMetadata, bool bInheritAttributes); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507FD1E8(relative to base address)
		bool HasNonTrivialTransform(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFD2788(relative to base address)
		FBox GetStrictBounds(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FCE64(relative to base address)
		FVector GetNormal(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FCC94(relative to base address)
		int32_t GetDimension(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFD3678(relative to base address)
		float GetDensityAtPosition(FVector& InPosition); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FCBA0(relative to base address)
		FBox GetBounds(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FCB54(relative to base address)
		UPCGMetadata CreateEmptyMetadata(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507FCAE0(relative to base address)
		UPCGMetadata ConstMetadata(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FC9D4(relative to base address)
	};


	// Class PCG.PCGSpatialDataWithPointCache
	// Inherited from UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x50 (0xD0 - 0x80)
	class UPCGSpatialDataWithPointCache : public UPCGSpatialData	
	{
	public:
		UPCGPointData* CachedPointData; // 0x80(0x8)
		TArray<FBox> CachedBoundedPointDataBoxes; // 0x88(0x10)
		TArray<UPCGPointData*> CachedBoundedPointData; // 0x98(0x10)
		unsigned char UnknownData00_7[0x28]; // 0xA8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSpatialDataWithPointCache");
			return ret;
		}
	};


	// Class PCG.PCGCollisionShapeData
	// Inherited from UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0xF0 (0x1C0 - 0xD0)
	class UPCGCollisionShapeData : public UPCGSpatialDataWithPointCache	
	{
	public:
		FTransform Transform; // 0xD0(0x60)
		unsigned char UnknownData00_6[0x18]; // 0x130(0x18) UNKNOWN PROPERTY
		FBox CachedBounds; // 0x148(0x38)
		FBox CachedStrictBounds; // 0x180(0x38)
		unsigned char UnknownData01_7[0x8]; // 0x1B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGCollisionShapeData");
			return ret;
		}
	};


	// Class PCG.PCGCombinePointsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x68 (0x110 - 0xA8)
	class UPCGCombinePointsSettings : public UPCGSettings	
	{
	public:
		bool bCenterPivot; // 0xA8(0x1)
		bool bUseFirstPointTransform; // 0xA9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY
		FTransform PointTransform; // 0xB0(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGCombinePointsSettings");
			return ret;
		}
	};


	// Class PCG.PCGConvexHull2DSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGConvexHull2DSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGConvexHull2DSettings");
			return ret;
		}
	};


	// Class PCG.PCGCreatePointsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPCGCreatePointsSettings : public UPCGSettings	
	{
	public:
		TArray<FPCGPoint> PointsToCreate; // 0xA8(0x10)
		EPCGCoordinateSpace CoordinateSpace; // 0xB8(0x1)
		bool bCullPointsOutsideVolume; // 0xB9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xBA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGCreatePointsSettings");
			return ret;
		}
	};


	// Class PCG.PCGCreatePointsGridSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x38 (0xE0 - 0xA8)
	class UPCGCreatePointsGridSettings : public UPCGSettings	
	{
	public:
		FVector GridExtents; // 0xA8(0x18)
		FVector CellSize; // 0xC0(0x18)
		float PointSteepness; // 0xD8(0x4)
		EPCGCoordinateSpace CoordinateSpace; // 0xDC(0x1)
		bool bSetPointsBounds; // 0xDD(0x1)
		bool bCullPointsOutsideVolume; // 0xDE(0x1)
		EPCGPointPosition PointPosition; // 0xDF(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGCreatePointsGridSettings");
			return ret;
		}
	};


	// Class PCG.PCGCullPointsOutsideActorBoundsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGCullPointsOutsideActorBoundsSettings : public UPCGSettings	
	{
	public:
		float BoundsExpansion; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGCullPointsOutsideActorBoundsSettings");
			return ret;
		}
	};


	// Class PCG.PCGDataAsset
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UPCGDataAsset : public UObject	
	{
	public:
		FPCGDataCollection Data; // 0x28(0x30)
		FString Name; // 0x58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDataAsset");
			return ret;
		}
	};


	// Class PCG.PCGExternalDataSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class UPCGExternalDataSettings : public UPCGSettings	
	{
	public:
		TMap<FString, FPCGAttributePropertyInputSelector> AttributeMapping; // 0xA8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGExternalDataSettings");
			return ret;
		}
	};


	// Class PCG.PCGLoadDataTableSettings
	// Inherited from UPCGExternalDataSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x28 (0x120 - 0xF8)
	class UPCGLoadDataTableSettings : public UPCGExternalDataSettings	
	{
	public:
		TWeakObjectPtr<UDataTable*> DataTable; // 0xF8(0x20)
		EPCGExclusiveDataType OutputType; // 0x118(0x1)
		bool bSynchronousLoad; // 0x119(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x11A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGLoadDataTableSettings");
			return ret;
		}
	};


	// Class PCG.PCGManagedResource
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPCGManagedResource : public UObject	
	{
	public:
		FPCGCrc Crc; // 0x28(0x8)
		bool bIsMarkedUnused; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGManagedResource");
			return ret;
		}
	};


	// Class PCG.PCGManagedComponentBase
	// Inherited from UPCGManagedResource -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UPCGManagedComponentBase : public UPCGManagedResource	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGManagedComponentBase");
			return ret;
		}
	};


	// Class PCG.PCGManagedComponent
	// Inherited from UPCGManagedComponentBase -> UPCGManagedResource -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UPCGManagedComponent : public UPCGManagedComponentBase	
	{
	public:
		TWeakObjectPtr<UActorComponent*> GeneratedComponent; // 0x38(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGManagedComponent");
			return ret;
		}

		void SetGeneratedComponentFromBP(TWeakObjectPtr<UActorComponent*> InGeneratedComponent); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF750A547E8(relative to base address)
	};


	// Class PCG.PCGManagedDebugDrawComponent
	// Inherited from UPCGManagedComponent -> UPCGManagedComponentBase -> UPCGManagedResource -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UPCGManagedDebugDrawComponent : public UPCGManagedComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGManagedDebugDrawComponent");
			return ret;
		}
	};


	// Class PCG.PCGDebugDrawComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x530 - 0x518)
	class UPCGDebugDrawComponent : public UDebugDrawComponent	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x518(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDebugDrawComponent");
			return ret;
		}
	};


	// Class PCG.PCGDeleteAttributesSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UPCGDeleteAttributesSettings : public UPCGSettings	
	{
	public:
		EPCGAttributeFilterOperation Operation; // 0xA8(0x4)
		EPCGStringMatchingOperator Operator; // 0xAC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		FString SelectedAttributes; // 0xB0(0x10)
		bool bTokenizeOnWhiteSpace; // 0xC0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDeleteAttributesSettings");
			return ret;
		}
	};


	// Class PCG.PCGDeleteTagsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UPCGDeleteTagsSettings : public UPCGSettings	
	{
	public:
		EPCGTagFilterOperation Operation; // 0xA8(0x4)
		EPCGStringMatchingOperator Operator; // 0xAC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		FString SelectedTags; // 0xB0(0x10)
		bool bTokenizeOnWhiteSpace; // 0xC0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDeleteTagsSettings");
			return ret;
		}
	};


	// Class PCG.PCGDistanceSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UPCGDistanceSettings : public UPCGSettings	
	{
	public:
		bool bOutputToAttribute; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		FPCGAttributePropertySelector OutputAttribute; // 0xB0(0x28)
		bool bOutputDistanceVector; // 0xD8(0x1)
		bool bSetDensity; // 0xD9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xDA(0x6) UNKNOWN PROPERTY
		double MaximumDistance; // 0xE0(0x8)
		PCGDistanceShape SourceShape; // 0xE8(0x4)
		PCGDistanceShape TargetShape; // 0xEC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDistanceSettings");
			return ret;
		}
	};


	// Class PCG.PCGDuplicatePointSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x88 (0x130 - 0xA8)
	class UPCGDuplicatePointSettings : public UPCGSettings	
	{
	public:
		int32_t Iterations; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FVector Direction; // 0xB0(0x18)
		bool bDirectionAppliedInRelativeSpace; // 0xC8(0x1)
		bool bOutputSourcePoint; // 0xC9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xCA(0x6) UNKNOWN PROPERTY
		FTransform PointTransform; // 0xD0(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDuplicatePointSettings");
			return ret;
		}
	};


	// Class PCG.PCGBadOutputsNodeSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGBadOutputsNodeSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGBadOutputsNodeSettings");
			return ret;
		}
	};


	// Class PCG.PCGElevationIsolinesSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UPCGElevationIsolinesSettings : public UPCGSettings	
	{
	public:
		double ElevationStart; // 0xA8(0x8)
		double ElevationEnd; // 0xB0(0x8)
		double ElevationIncrement; // 0xB8(0x8)
		double Resolution; // 0xC0(0x8)
		bool bAddTagOnOutputForSameElevation; // 0xC8(0x1)
		bool bProjectSurfaceNormal; // 0xC9(0x1)
		bool bOutputAsSpline; // 0xCA(0x1)
		bool bLinearSpline; // 0xCB(0x1)
		unsigned char UnknownData00_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGElevationIsolinesSettings");
			return ret;
		}
	};


	// Class PCG.PCGEngineSettings
	// Inherited from UDeveloperSettingsBackedByCVars -> UDeveloperSettings -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UPCGEngineSettings : public UDeveloperSettingsBackedByCVars	
	{
	public:
		FVector VolumeScale; // 0x30(0x18)
		bool bGenerateOnDrop; // 0x48(0x1)
		bool bDisplayCullingStateWhenDebugging; // 0x49(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGEngineSettings");
			return ret;
		}
	};


	// Class PCG.PCGFilterDataBaseSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGFilterDataBaseSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGFilterDataBaseSettings");
			return ret;
		}
	};


	// Class PCG.PCGFilterByAttributeSettings
	// Inherited from UPCGFilterDataBaseSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGFilterByAttributeSettings : public UPCGFilterDataBaseSettings	
	{
	public:
		FName Attribute; // 0xA8(0x4)
		EPCGStringMatchingOperator Operator; // 0xAC(0x1)
		bool bIgnoreProperties; // 0xAD(0x1)
		unsigned char UnknownData00_7[0x2]; // 0xAE(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGFilterByAttributeSettings");
			return ret;
		}
	};


	// Class PCG.PCGGatherSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGGatherSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGatherSettings");
			return ret;
		}
	};


	// Class PCG.PCGGenSourceBase
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGGenSourceBase : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGenSourceBase");
			return ret;
		}
	};


	// Class PCG.PCGGetActorPropertySettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x68 (0x110 - 0xA8)
	class UPCGGetActorPropertySettings : public UPCGSettings	
	{
	public:
		FPCGActorSelectorSettings ActorSelector; // 0xA8(0x48)
		bool bSelectComponent; // 0xF0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
		UClass* ComponentClass; // 0xF8(0x8)
		FName PropertyName; // 0x100(0x4)
		bool bForceObjectAndStructExtraction; // 0x104(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x105(0x3) UNKNOWN PROPERTY
		FName OutputAttributeName; // 0x108(0x4)
		bool bOutputActorReference; // 0x10C(0x1)
		bool bAlwaysRequeryActors; // 0x10D(0x1)
		unsigned char UnknownData02_7[0x2]; // 0x10E(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGetActorPropertySettings");
			return ret;
		}
	};


	// Class PCG.PCGDummyGetPropertyTest
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPCGDummyGetPropertyTest : public UObject	
	{
	public:
		int64_t Int64Property; // 0x28(0x8)
		double DoubleProperty; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDummyGetPropertyTest");
			return ret;
		}
	};


	// Class PCG.PCGUnitTestDummyActor
	// Inherited from AActor -> UObject
	// Size: 0x200 (0x490 - 0x290)
	class APCGUnitTestDummyActor : public AActor	
	{
	public:
		int32_t IntProperty; // 0x290(0x4)
		float FloatProperty; // 0x294(0x4)
		int64_t Int64Property; // 0x298(0x8)
		double DoubleProperty; // 0x2A0(0x8)
		bool BoolProperty; // 0x2A8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2A9(0x3) UNKNOWN PROPERTY
		FName NameProperty; // 0x2AC(0x4)
		FString StringProperty; // 0x2B0(0x10)
		EPCGUnitTestDummyEnum EnumProperty; // 0x2C0(0x8)
		FVector VectorProperty; // 0x2C8(0x18)
		FVector4 Vector4Property; // 0x2E0(0x20)
		FTransform TransformProperty; // 0x300(0x60)
		FRotator RotatorProperty; // 0x360(0x18)
		unsigned char UnknownData01_6[0x8]; // 0x378(0x8) UNKNOWN PROPERTY
		FQuat QuatProperty; // 0x380(0x20)
		FSoftObjectPath SoftObjectPathProperty; // 0x3A0(0x18)
		FSoftClassPath SoftClassPathProperty; // 0x3B8(0x18)
		UClass* ClassProperty; // 0x3D0(0x8)
		UPCGDummyGetPropertyTest* ObjectProperty; // 0x3D8(0x8)
		FVector2D Vector2Property; // 0x3E0(0x10)
		FColor ColorProperty; // 0x3F0(0x4)
		FLinearColor LinearColorProperty; // 0x3F4(0x10)
		unsigned char UnknownData02_6[0x4]; // 0x404(0x4) UNKNOWN PROPERTY
		FPCGTestMyColorStruct PCGColorProperty; // 0x408(0x20)
		TArray<int32_t> ArrayOfIntsProperty; // 0x428(0x10)
		TArray<FVector> ArrayOfVectorsProperty; // 0x438(0x10)
		TArray<FPCGTestMyColorStruct> ArrayOfStructsProperty; // 0x448(0x10)
		TArray<UPCGDummyGetPropertyTest*> ArrayOfObjectsProperty; // 0x458(0x10)
		FPCGDummyGetPropertyStruct DummyStruct; // 0x468(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGUnitTestDummyActor");
			return ret;
		}
	};


	// Class PCG.PCGUnitTestDummyComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UPCGUnitTestDummyComponent : public UActorComponent	
	{
	public:
		int32_t IntProperty; // 0xA0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGUnitTestDummyComponent");
			return ret;
		}
	};


	// Class PCG.PCGGetBoundsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGGetBoundsSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGetBoundsSettings");
			return ret;
		}
	};


	// Class PCG.PCGGetPropertyFromObjectPathSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UPCGGetPropertyFromObjectPathSettings : public UPCGSettings	
	{
	public:
		TArray<FSoftObjectPath> ObjectPathsToExtract; // 0xA8(0x10)
		FPCGAttributePropertyInputSelector InputSource; // 0xB8(0x28)
		FName PropertyName; // 0xE0(0x4)
		bool bForceObjectAndStructExtraction; // 0xE4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xE5(0x3) UNKNOWN PROPERTY
		FName OutputAttributeName; // 0xE8(0x4)
		bool bSynchronousLoad; // 0xEC(0x1)
		bool bPersistAllData; // 0xED(0x1)
		bool bSilenceErrorOnEmptyObjectPath; // 0xEE(0x1)
		unsigned char UnknownData01_7[0x1]; // 0xEF(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGetPropertyFromObjectPathSettings");
			return ret;
		}
	};


	// Class PCG.PCGGraphAuthoringTestHelperSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGGraphAuthoringTestHelperSettings : public UPCGSettings	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGraphAuthoringTestHelperSettings");
			return ret;
		}
	};


	// Class PCG.PCGGraphParametersHelpers
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGGraphParametersHelpers : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGraphParametersHelpers");
			return ret;
		}

		void SetVectorParameter(UPCGGraphInterface* GraphInterface, FName Name, FVector& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D32E4(relative to base address)
		void SetVector4Parameter(UPCGGraphInterface* GraphInterface, FName Name, FVector4& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D3178(relative to base address)
		void SetVector2DParameter(UPCGGraphInterface* GraphInterface, FName Name, FVector2D& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D3020(relative to base address)
		void SetTransformParameter(UPCGGraphInterface* GraphInterface, FName Name, FTransform& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D2E5C(relative to base address)
		void SetStringParameter(UPCGGraphInterface* GraphInterface, FName Name, FString Value); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D2CFC(relative to base address)
		void SetSoftObjectPathParameter(UPCGGraphInterface* GraphInterface, FName Name, FSoftObjectPath& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D2B90(relative to base address)
		void SetSoftObjectParameter(UPCGGraphInterface* GraphInterface, FName Name, TWeakObjectPtr<UObject*>& Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507D2A2C(relative to base address)
		void SetSoftClassParameter(UPCGGraphInterface* GraphInterface, FName Name, TWeakObjectPtr<UClass*>& Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507D2A2C(relative to base address)
		void SetRotatorParameter(UPCGGraphInterface* GraphInterface, FName Name, FRotator& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D28D4(relative to base address)
		void SetQuaternionParameter(UPCGGraphInterface* GraphInterface, FName Name, FQuat& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D277C(relative to base address)
		void SetObjectParameter(UPCGGraphInterface* GraphInterface, FName Name, UObject* Value); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D1E68(relative to base address)
		void SetNameParameter(UPCGGraphInterface* GraphInterface, FName Name, FName Value); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D264C(relative to base address)
		void SetInt64Parameter(UPCGGraphInterface* GraphInterface, FName Name, int64_t Value); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D251C(relative to base address)
		void SetInt32Parameter(UPCGGraphInterface* GraphInterface, FName Name, int32_t Value); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D23EC(relative to base address)
		void SetFloatParameter(UPCGGraphInterface* GraphInterface, FName Name, float Value); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D22B0(relative to base address)
		void SetEnumParameter(UPCGGraphInterface* GraphInterface, FName Name, char Value, UEnum* Enum); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D20D8(relative to base address)
		void SetDoubleParameter(UPCGGraphInterface* GraphInterface, FName Name, double Value); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D1F98(relative to base address)
		void SetClassParameter(UPCGGraphInterface* GraphInterface, FName Name, UClass* Value); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D1E68(relative to base address)
		void SetByteParameter(UPCGGraphInterface* GraphInterface, FName Name, char Value); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D1D38(relative to base address)
		void SetBoolParameter(UPCGGraphInterface* GraphInterface, FName Name, bool bValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D1C04(relative to base address)
		bool IsOverridden(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D1B30(relative to base address)
		FVector GetVectorParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D19D0(relative to base address)
		FVector4 GetVector4Parameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D186C(relative to base address)
		FVector2D GetVector2DParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D1734(relative to base address)
		FTransform GetTransformParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D1628(relative to base address)
		FString GetStringParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D14C8(relative to base address)
		FSoftObjectPath GetSoftObjectPathParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D1310(relative to base address)
		TWeakObjectPtr GetSoftObjectParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D1154(relative to base address)
		TWeakObjectPtr GetSoftClassParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D0F98(relative to base address)
		FRotator GetRotatorParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D0E38(relative to base address)
		FQuat GetQuaternionParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D0CE0(relative to base address)
		UObject GetObjectParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D0BD4(relative to base address)
		FName GetNameParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D0AC8(relative to base address)
		int64_t GetInt64Parameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D09BC(relative to base address)
		int32_t GetInt32Parameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D08B0(relative to base address)
		float GetFloatParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D07EC(relative to base address)
		char GetEnumParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D0528(relative to base address)
		double GetDoubleParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D0728(relative to base address)
		UClass GetClassParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D061C(relative to base address)
		char GetByteParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D0528(relative to base address)
		bool GetBoolParameter(UPCGGraphInterface* GraphInterface, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507D0434(relative to base address)
	};


	// Class PCG.PCGFunctionPrototypes
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGFunctionPrototypes : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGFunctionPrototypes");
			return ret;
		}

		void PrototypeWithPointAndMetadata(FPCGPoint Point, UPCGMetadata* MetaData); // Flags: Final|Native|Private, Memory Exec: 0x7FF7507D51DC(relative to base address)
		void PrototypeWithNoParams(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class PCG.PCGHiGenGridSizeSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGHiGenGridSizeSettings : public UPCGSettings	
	{
	public:
		EPCGHiGenGrid HiGenGridSize; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGHiGenGridSizeSettings");
			return ret;
		}
	};


	// Class PCG.PCGLoadDataAssetSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UPCGLoadDataAssetSettings : public UPCGSettings	
	{
	public:
		TWeakObjectPtr<UPCGDataAsset*> Asset; // 0xA8(0x20)
		TArray<FPCGPinProperties> Pins; // 0xC8(0x10)
		FString AssetName; // 0xD8(0x10)
		bool bWarnIfNoAsset; // 0xE8(0x1)
		bool bSynchronousLoad; // 0xE9(0x1)
		bool bTagOutputsBasedOnOutputPins; // 0xEA(0x1)
		unsigned char UnknownData00_7[0x5]; // 0xEB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGLoadDataAssetSettings");
			return ret;
		}
	};


	// Class PCG.PCGMakeConcreteSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGMakeConcreteSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMakeConcreteSettings");
			return ret;
		}
	};


	// Class PCG.PCGMergeAttributesSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGMergeAttributesSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMergeAttributesSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataMakeRotatorSettings
	// Inherited from UPCGMetadataSettingsBase -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x80 (0x158 - 0xD8)
	class UPCGMetadataMakeRotatorSettings : public UPCGMetadataSettingsBase	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource1; // 0xD8(0x28)
		FPCGAttributePropertyInputSelector InputSource2; // 0x100(0x28)
		FPCGAttributePropertyInputSelector InputSource3; // 0x128(0x28)
		EPCGMetadataMakeRotatorOp Operation; // 0x150(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x151(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataMakeRotatorSettings");
			return ret;
		}
	};


	// Class PCG.PCGMultiSelectSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x58 (0x100 - 0xA8)
	class UPCGMultiSelectSettings : public UPCGSettings	
	{
	public:
		EPCGControlFlowSelectionMode SelectionMode; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		int32_t IntegerSelection; // 0xAC(0x4)
		TArray<int32_t> IntOptions; // 0xB0(0x10)
		FString StringSelection; // 0xC0(0x10)
		TArray<FString> StringOptions; // 0xD0(0x10)
		FEnumSelector EnumSelection; // 0xE0(0x10)
		TArray<FName> CachedPinLabels; // 0xF0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMultiSelectSettings");
			return ret;
		}
	};


	// Class PCG.PCGMutateSeedSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGMutateSeedSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMutateSeedSettings");
			return ret;
		}
	};


	// Class PCG.PCGNormalToDensitySettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UPCGNormalToDensitySettings : public UPCGSettings	
	{
	public:
		FVector Normal; // 0xA8(0x18)
		double Offset; // 0xC0(0x8)
		double Strength; // 0xC8(0x8)
		PCGNormalToDensityMode DensityMode; // 0xD0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGNormalToDensitySettings");
			return ret;
		}
	};


	// Class PCG.PCGNumberOfElementsBaseSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGNumberOfElementsBaseSettings : public UPCGSettings	
	{
	public:
		FName OutputAttributeName; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGNumberOfElementsBaseSettings");
			return ret;
		}
	};


	// Class PCG.PCGNumberOfPointsSettings
	// Inherited from UPCGNumberOfElementsBaseSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UPCGNumberOfPointsSettings : public UPCGNumberOfElementsBaseSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGNumberOfPointsSettings");
			return ret;
		}
	};


	// Class PCG.PCGNumberOfEntriesSettings
	// Inherited from UPCGNumberOfElementsBaseSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UPCGNumberOfEntriesSettings : public UPCGNumberOfElementsBaseSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGNumberOfEntriesSettings");
			return ret;
		}
	};


	// Class PCG.PCGOctreeQueries
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGOctreeQueries : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGOctreeQueries");
			return ret;
		}

		TArray GetPointsInsideSphere(UPCGPointData* InPointData, FVector& InCenter, double InRadius); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D4F90(relative to base address)
		TArray GetPointsInsideBounds(UPCGPointData* InPointData, FBox& InBounds); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D4E38(relative to base address)
		void GetFarthestPointFromOtherPoint(UPCGPointData* InPointData, int32_t InPointIndex, bool& bOutFound, FPCGPoint& OutPoint, double InSearchDistance); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507D4A88(relative to base address)
		void GetFarthestPoint(UPCGPointData* InPointData, FVector& InCenter, bool& bOutFound, FPCGPoint& OutPoint, double InSearchDistance); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D47E0(relative to base address)
		void GetClosestPointFromOtherPoint(UPCGPointData* InPointData, int32_t InPointIndex, bool& bOutFound, FPCGPoint& OutPoint, double InSearchDistance); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507D4430(relative to base address)
		void GetClosestPoint(UPCGPointData* InPointData, FVector& InCenter, bool bInDiscardCenter, bool& bOutFound, FPCGPoint& OutPoint, double InSearchDistance); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507D4120(relative to base address)
	};


	// Class PCG.PCGSettingsWithDynamicInputs
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UPCGSettingsWithDynamicInputs : public UPCGSettings	
	{
	public:
		TArray<FPCGPinProperties> DynamicInputPinProperties; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSettingsWithDynamicInputs");
			return ret;
		}
	};


	// Class PCG.PCGOuterIntersectionSettings
	// Inherited from UPCGSettingsWithDynamicInputs -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xC0 - 0xB8)
	class UPCGOuterIntersectionSettings : public UPCGSettingsWithDynamicInputs	
	{
	public:
		EPCGIntersectionDensityFunction DensityFunction; // 0xB8(0x1)
		bool bIgnorePinsWithNoInput; // 0xB9(0x1)
		bool bKeepZeroDensityPoints; // 0xBA(0x1)
		unsigned char UnknownData00_7[0x5]; // 0xBB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGOuterIntersectionSettings");
			return ret;
		}
	};


	// Class PCG.PCGPointNeighborhoodSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UPCGPointNeighborhoodSettings : public UPCGSettings	
	{
	public:
		double SearchDistance; // 0xA8(0x8)
		bool bSetDistanceToAttribute; // 0xB0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xB1(0x3) UNKNOWN PROPERTY
		FName DistanceAttribute; // 0xB4(0x4)
		bool bSetAveragePositionToAttribute; // 0xB8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		FName AveragePositionAttribute; // 0xBC(0x4)
		EPCGPointNeighborhoodDensityMode SetDensity; // 0xC0(0x4)
		bool bSetAveragePosition; // 0xC4(0x1)
		bool bSetAverageColor; // 0xC5(0x1)
		bool bWeightedAverage; // 0xC6(0x1)
		unsigned char UnknownData02_7[0x1]; // 0xC7(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGPointNeighborhoodSettings");
			return ret;
		}
	};


	// Class PCG.PCGManagedDebugStringMessageKey
	// Inherited from UPCGManagedResource -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UPCGManagedDebugStringMessageKey : public UPCGManagedResource	
	{
	public:
		uint64_t HashKey; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGManagedDebugStringMessageKey");
			return ret;
		}
	};


	// Class PCG.PCGPrintElementSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UPCGPrintElementSettings : public UPCGSettings	
	{
	public:
		FString PrintString; // 0xA8(0x10)
		EPCGPrintVerbosity Verbosity; // 0xB8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		FString CustomPrefix; // 0xC0(0x10)
		bool bDisplayOnNode; // 0xD0(0x1)
		bool bPrintPerComponent; // 0xD1(0x1)
		bool bPrefixWithOwner; // 0xD2(0x1)
		bool bPrefixWithComponent; // 0xD3(0x1)
		bool bPrefixWithGraph; // 0xD4(0x1)
		bool bPrefixWithNode; // 0xD5(0x1)
		bool bEnablePrint; // 0xD6(0x1)
		unsigned char UnknownData01_7[0x1]; // 0xD7(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGPrintElementSettings");
			return ret;
		}
	};


	// Class PCG.PCGQualityBranchSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGQualityBranchSettings : public UPCGSettings	
	{
	public:
		bool bUseLowPin; // 0xA8(0x1)
		bool bUseMediumPin; // 0xA9(0x1)
		bool bUseHighPin; // 0xAA(0x1)
		bool bUseEpicPin; // 0xAB(0x1)
		bool bUseCinematicPin; // 0xAC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGQualityBranchSettings");
			return ret;
		}
	};


	// Class PCG.PCGQualitySelectSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGQualitySelectSettings : public UPCGSettings	
	{
	public:
		bool bUseLowPin; // 0xA8(0x1)
		bool bUseMediumPin; // 0xA9(0x1)
		bool bUseHighPin; // 0xAA(0x1)
		bool bUseEpicPin; // 0xAB(0x1)
		bool bUseCinematicPin; // 0xAC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGQualitySelectSettings");
			return ret;
		}
	};


	// Class PCG.PCGRandomChoiceSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UPCGRandomChoiceSettings : public UPCGSettings	
	{
	public:
		bool bFixedMode; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		int32_t FixedNumber; // 0xAC(0x4)
		float Ratio; // 0xB0(0x4)
		bool bOutputDiscardedPoints; // 0xB4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGRandomChoiceSettings");
			return ret;
		}
	};


	// Class PCG.PCGReplaceTagsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UPCGReplaceTagsSettings : public UPCGSettings	
	{
	public:
		FString SelectedTags; // 0xA8(0x10)
		FString ReplacedTags; // 0xB8(0x10)
		bool bTokenizeOnWhiteSpace; // 0xC8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGReplaceTagsSettings");
			return ret;
		}
	};


	// Class PCG.PCGRerouteSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGRerouteSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGRerouteSettings");
			return ret;
		}
	};


	// Class PCG.PCGNamedRerouteBaseSettings
	// Inherited from UPCGRerouteSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGNamedRerouteBaseSettings : public UPCGRerouteSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGNamedRerouteBaseSettings");
			return ret;
		}
	};


	// Class PCG.PCGNamedRerouteDeclarationSettings
	// Inherited from UPCGNamedRerouteBaseSettings -> UPCGRerouteSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGNamedRerouteDeclarationSettings : public UPCGNamedRerouteBaseSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGNamedRerouteDeclarationSettings");
			return ret;
		}
	};


	// Class PCG.PCGNamedRerouteUsageSettings
	// Inherited from UPCGNamedRerouteBaseSettings -> UPCGRerouteSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGNamedRerouteUsageSettings : public UPCGNamedRerouteBaseSettings	
	{
	public:
		UPCGNamedRerouteDeclarationSettings* Declaration; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGNamedRerouteUsageSettings");
			return ret;
		}
	};


	// Class PCG.PCGResetPointCenterSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPCGResetPointCenterSettings : public UPCGSettings	
	{
	public:
		FVector PointCenterLocation; // 0xA8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGResetPointCenterSettings");
			return ret;
		}
	};


	// Class PCG.PCGReverseSplineSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGReverseSplineSettings : public UPCGSettings	
	{
	public:
		EPCGReverseSplineOperation Operation; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGReverseSplineSettings");
			return ret;
		}
	};


	// Class PCG.PCGSampleTextureSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x38 (0xE0 - 0xA8)
	class UPCGSampleTextureSettings : public UPCGSettings	
	{
	public:
		EPCGTextureMappingMethod TextureMappingMethod; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector UVCoordinatesAttribute; // 0xB0(0x28)
		EPCGTextureAddressMode TilingMode; // 0xD8(0x1)
		EPCGDensityMergeOperation DensityMergeFunction; // 0xD9(0x1)
		bool bClampOutputDensity; // 0xDA(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xDB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSampleTextureSettings");
			return ret;
		}
	};


	// Class PCG.PCGSanityCheckPointDataSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGSanityCheckPointDataSettings : public UPCGSettings	
	{
	public:
		int32_t MinPointCount; // 0xA8(0x4)
		int32_t MaxPointCount; // 0xAC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSanityCheckPointDataSettings");
			return ret;
		}
	};


	// Class PCG.PCGSchedulingPolicyBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGSchedulingPolicyBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSchedulingPolicyBase");
			return ret;
		}
	};


	// Class PCG.PCGSlicingBaseSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x70 (0x118 - 0xA8)
	class UPCGSlicingBaseSettings : public UPCGSettings	
	{
	public:
		bool bModuleInfoAsInput; // 0xA8(0x1)
		bool bGrammarAsAttribute; // 0xA9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY
		TArray<FPCGSlicingModule> ModulesInfo; // 0xB0(0x10)
		FString Grammar; // 0xC0(0x10)
		FPCGAttributePropertyInputSelector GrammarAttribute; // 0xD0(0x28)
		bool bForwardAttributesFromModulesInfo; // 0xF8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xF9(0x3) UNKNOWN PROPERTY
		FName SymbolAttributeName; // 0xFC(0x4)
		bool bOutputSizeAttribute; // 0x100(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x101(0x3) UNKNOWN PROPERTY
		FName SizeAttributeName; // 0x104(0x4)
		bool bOutputScalableAttribute; // 0x108(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x109(0x3) UNKNOWN PROPERTY
		FName ScalableAttributeName; // 0x10C(0x4)
		bool bOutputDebugColorAttribute; // 0x110(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x111(0x3) UNKNOWN PROPERTY
		FName DebugColorAttributeName; // 0x114(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSlicingBaseSettings");
			return ret;
		}
	};


	// Class PCG.PCGSegmentSlicerSettings
	// Inherited from UPCGSlicingBaseSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x48 (0x160 - 0x118)
	class UPCGSegmentSlicerSettings : public UPCGSlicingBaseSettings	
	{
	public:
		EPCGSplitAxis SlicingAxis; // 0x118(0x4)
		bool bFlipAxisAsAttribute; // 0x11C(0x1)
		bool bShouldFlipAxis; // 0x11D(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x11E(0x2) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector FlipAxisAttribute; // 0x120(0x28)
		bool bAcceptIncompleteSlicing; // 0x148(0x1)
		bool bOutputModuleIndexAttribute; // 0x149(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x14A(0x2) UNKNOWN PROPERTY
		FName ModuleIndexAttributeName; // 0x14C(0x4)
		bool bOutputExtremityAttribute; // 0x150(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x151(0x3) UNKNOWN PROPERTY
		FName ExtremityAttributeName; // 0x154(0x4)
		bool bOutputExtremityNeighborIndexAttribute; // 0x158(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x159(0x3) UNKNOWN PROPERTY
		FName ExtremityNeighborIndexAttributeName; // 0x15C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSegmentSlicerSettings");
			return ret;
		}
	};


	// Class PCG.PCGSortAttributesSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UPCGSortAttributesSettings : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource; // 0xA8(0x28)
		EPCGSortMethod SortMethod; // 0xD0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSortAttributesSettings");
			return ret;
		}
	};


	// Class PCG.PCGSortTagsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGSortTagsSettings : public UPCGSettings	
	{
	public:
		FName Tag; // 0xA8(0x4)
		EPCGSortMethod SortMethod; // 0xAC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSortTagsSettings");
			return ret;
		}
	};


	// Class PCG.PCGSplineToSegmentSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGSplineToSegmentSettings : public UPCGSettings	
	{
	public:
		bool bExtractTangents; // 0xA8(0x1)
		bool bExtractAngles; // 0xA9(0x1)
		bool bExtractConnectivityInfo; // 0xAA(0x1)
		bool bExtractClockwiseInfo; // 0xAB(0x1)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSplineToSegmentSettings");
			return ret;
		}
	};


	// Class PCG.PCGSplitPointsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGSplitPointsSettings : public UPCGSettings	
	{
	public:
		float SplitPosition; // 0xA8(0x4)
		EPCGSplitAxis SplitAxis; // 0xAC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSplitPointsSettings");
			return ret;
		}
	};


	// Class PCG.PCGSwitchSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x58 (0x100 - 0xA8)
	class UPCGSwitchSettings : public UPCGSettings	
	{
	public:
		EPCGControlFlowSelectionMode SelectionMode; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		int32_t IntegerSelection; // 0xAC(0x4)
		TArray<int32_t> IntOptions; // 0xB0(0x10)
		FString StringSelection; // 0xC0(0x10)
		TArray<FString> StringOptions; // 0xD0(0x10)
		FEnumSelector EnumSelection; // 0xE0(0x10)
		unsigned char UnknownData01_7[0x10]; // 0xF0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSwitchSettings");
			return ret;
		}
	};


	// Class PCG.PCGUserParameterGetSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPCGUserParameterGetSettings : public UPCGSettings	
	{
	public:
		FGuid PropertyGuid; // 0xA8(0x10)
		FName PropertyName; // 0xB8(0x4)
		bool bForceObjectAndStructExtraction; // 0xBC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xBD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGUserParameterGetSettings");
			return ret;
		}
	};


	// Class PCG.PCGGenericUserParameterGetSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPCGGenericUserParameterGetSettings : public UPCGSettings	
	{
	public:
		FString PropertyPath; // 0xA8(0x10)
		bool bForceObjectAndStructExtraction; // 0xB8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		FName OutputAttributeName; // 0xBC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGenericUserParameterGetSettings");
			return ret;
		}
	};


	// Class PCG.PCGUserParametersData
	// Inherited from UPCGData -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UPCGUserParametersData : public UPCGData	
	{
	public:
		FInstancedStruct UserParameters; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGUserParametersData");
			return ret;
		}
	};


	// Class PCG.PCGVisualizeAttributeSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x70 (0x118 - 0xA8)
	class UPCGVisualizeAttributeSettings : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyInputSelector AttributeSource; // 0xA8(0x28)
		FString CustomPrefixString; // 0xD0(0x10)
		bool bPrefixWithIndex; // 0xE0(0x1)
		bool bPrefixWithAttributeName; // 0xE1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xE2(0x6) UNKNOWN PROPERTY
		FVector LocalOffset; // 0xE8(0x18)
		FColor Color; // 0x100(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		double duration; // 0x108(0x8)
		int32_t PointLimit; // 0x110(0x4)
		bool bVisualizeEnabled; // 0x114(0x1)
		unsigned char UnknownData02_7[0x3]; // 0x115(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGVisualizeAttributeSettings");
			return ret;
		}
	};


	// Class PCG.PCGVolumeSlicerSettings
	// Inherited from UPCGSlicingBaseSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x50 (0x168 - 0x118)
	class UPCGVolumeSlicerSettings : public UPCGSlicingBaseSettings	
	{
	public:
		bool bExtrudeVectorAsAttribute; // 0x118(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x119(0x7) UNKNOWN PROPERTY
		FVector ExtrudeVector; // 0x120(0x18)
		FPCGAttributePropertyInputSelector ExtrudeVectorAttribute; // 0x138(0x28)
		bool bOutputSplineIndexAttribute; // 0x160(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x161(0x3) UNKNOWN PROPERTY
		FName SplineIndexAttributeName; // 0x164(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGVolumeSlicerSettings");
			return ret;
		}
	};


	// Class PCG.PCGWaitLandscapeReadySettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGWaitLandscapeReadySettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGWaitLandscapeReadySettings");
			return ret;
		}
	};


	// Class PCG.PCGCollisionWrapperData
	// Inherited from UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x70 (0xF0 - 0x80)
	class UPCGCollisionWrapperData : public UPCGSpatialData	
	{
	public:
		UPCGPointData* PointData; // 0x80(0x8)
		FPCGAttributePropertyInputSelector CollisionSelector; // 0x88(0x28)
		EPCGCollisionQueryFlag CollisionQueryFlag; // 0xB0(0x1)
		unsigned char UnknownData00_7[0x3F]; // 0xB1(0x3F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGCollisionWrapperData");
			return ret;
		}
	};


	// Class PCG.PCGDifferenceData
	// Inherited from UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x28 (0xF8 - 0xD0)
	class UPCGDifferenceData : public UPCGSpatialDataWithPointCache	
	{
	public:
		bool bDiffMetadata; // 0xD0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		UPCGSpatialData* Source; // 0xD8(0x8)
		UPCGSpatialData* Difference; // 0xE0(0x8)
		UPCGUnionData* DifferencesUnion; // 0xE8(0x8)
		EPCGDifferenceDensityFunction DensityFunction; // 0xF0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDifferenceData");
			return ret;
		}

		void SetDensityFunction(EPCGDifferenceDensityFunction InDensityFunction); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507FDC24(relative to base address)
		void K2_AddDifference(UPCGSpatialData* InDifference); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507FD338(relative to base address)
		void Initialize(UPCGSpatialData* InData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507FCEB0(relative to base address)
	};


	// Class PCG.PCGIntersectionData
	// Inherited from UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x88 (0x158 - 0xD0)
	class UPCGIntersectionData : public UPCGSpatialDataWithPointCache	
	{
	public:
		EPCGIntersectionDensityFunction DensityFunction; // 0xD0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		UPCGSpatialData* A; // 0xD8(0x8)
		UPCGSpatialData* B; // 0xE0(0x8)
		FBox CachedBounds; // 0xE8(0x38)
		FBox CachedStrictBounds; // 0x120(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGIntersectionData");
			return ret;
		}

		void Initialize(UPCGSpatialData* InA, UPCGSpatialData* InB); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507FCF30(relative to base address)
	};


	// Class PCG.PCGSurfaceData
	// Inherited from UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0xA0 (0x170 - 0xD0)
	class UPCGSurfaceData : public UPCGSpatialDataWithPointCache	
	{
	public:
		FTransform Transform; // 0xD0(0x60)
		FBox LocalBounds; // 0x130(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSurfaceData");
			return ret;
		}
	};


	// Class PCG.PCGLandscapeData
	// Inherited from UPCGSurfaceData -> UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x78 (0x1E0 - 0x168)
	class UPCGLandscapeData : public UPCGSurfaceData	
	{
	public:
		TArray<TWeakObjectPtr> Landscapes; // 0x168(0x10)
		FBox Bounds; // 0x178(0x38)
		FPCGLandscapeDataProps DataProps; // 0x1B0(0x5)
		unsigned char UnknownData00_7[0x2B]; // 0x1B5(0x2B) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGLandscapeData");
			return ret;
		}
	};


	// Class PCG.PCGPolyLineData
	// Inherited from UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x0 (0xD0 - 0xD0)
	class UPCGPolyLineData : public UPCGSpatialDataWithPointCache	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGPolyLineData");
			return ret;
		}
	};


	// Class PCG.PCGLandscapeSplineData
	// Inherited from UPCGPolyLineData -> UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x20 (0xF0 - 0xD0)
	class UPCGLandscapeSplineData : public UPCGPolyLineData	
	{
	public:
		TWeakObjectPtr<ULandscapeSplinesComponent*> Spline; // 0xD0(0x8)
		unsigned char UnknownData00_7[0x18]; // 0xD8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGLandscapeSplineData");
			return ret;
		}
	};


	// Class PCG.PCGPointData
	// Inherited from UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x130 (0x1B0 - 0x80)
	class UPCGPointData : public UPCGSpatialData	
	{
	public:
		TArray<FPCGPoint> Points; // 0x80(0x10)
		unsigned char UnknownData00_7[0x120]; // 0x90(0x120) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGPointData");
			return ret;
		}

		void SetPoints(TArray<FPCGPoint>& InPoints); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507FDD1C(relative to base address)
		TArray GetPointsCopy(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF7507FCE08(relative to base address)
		TArray GetPoints(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FCDEC(relative to base address)
		FPCGPoint GetPoint(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FCCD0(relative to base address)
		void CopyPointsFrom(UPCGPointData* InData, TArray<int32_t>& InDataIndices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507FC9FC(relative to base address)
	};


	// Class PCG.PCGPrimitiveData
	// Inherited from UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x90 (0x160 - 0xD0)
	class UPCGPrimitiveData : public UPCGSpatialDataWithPointCache	
	{
	public:
		FVector VoxelSize; // 0xD0(0x18)
		TWeakObjectPtr<UPrimitiveComponent*> Primitive; // 0xE8(0x8)
		FBox CachedBounds; // 0xF0(0x38)
		FBox CachedStrictBounds; // 0x128(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGPrimitiveData");
			return ret;
		}
	};


	// Class PCG.PCGProjectionData
	// Inherited from UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0xA0 (0x170 - 0xD0)
	class UPCGProjectionData : public UPCGSpatialDataWithPointCache	
	{
	public:
		UPCGSpatialData* Source; // 0xD0(0x8)
		UPCGSpatialData* Target; // 0xD8(0x8)
		FBox CachedBounds; // 0xE0(0x38)
		FBox CachedStrictBounds; // 0x118(0x38)
		FPCGProjectionParams ProjectionParams; // 0x150(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGProjectionData");
			return ret;
		}
	};


	// Class PCG.PCGBaseTextureData
	// Inherited from UPCGSurfaceData -> UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0xB8 (0x220 - 0x168)
	class UPCGBaseTextureData : public UPCGSurfaceData	
	{
	public:
		bool bUseDensitySourceChannel; // 0x168(0x1)
		EPCGTextureColorChannel ColorChannel; // 0x169(0x1)
		EPCGTextureFilter Filter; // 0x16A(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x16B(0x1) UNKNOWN PROPERTY
		float TexelSize; // 0x16C(0x4)
		bool bUseAdvancedTiling; // 0x170(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x171(0x7) UNKNOWN PROPERTY
		FVector2D Tiling; // 0x178(0x10)
		FVector2D CenterOffset; // 0x188(0x10)
		float Rotation; // 0x198(0x4)
		bool bUseTileBounds; // 0x19C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x19D(0x3) UNKNOWN PROPERTY
		FBox2D TileBounds; // 0x1A0(0x28)
		TArray<FLinearColor> ColorData; // 0x1C8(0x10)
		FBox Bounds; // 0x1D8(0x38)
		int32_t Height; // 0x210(0x4)
		int32_t Width; // 0x214(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGBaseTextureData");
			return ret;
		}

		void SetDensityFunctionEquivalent(EPCGTextureDensityFunction DensityFunction); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7507FDCA4(relative to base address)
		EPCGTextureDensityFunction GetDensityFunctionEquivalent(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FCC78(relative to base address)
	};


	// Class PCG.PCGRenderTargetData
	// Inherited from UPCGBaseTextureData -> UPCGSurfaceData -> UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x8 (0x220 - 0x218)
	class UPCGRenderTargetData : public UPCGBaseTextureData	
	{
	public:
		UTextureRenderTarget2D* RenderTarget; // 0x218(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGRenderTargetData");
			return ret;
		}

		void Initialize(UTextureRenderTarget2D* InRenderTarget, FTransform& InTransform); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507FCFF4(relative to base address)
	};


	// Class PCG.PCGSplineData
	// Inherited from UPCGPolyLineData -> UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x1A0 (0x270 - 0xD0)
	class UPCGSplineData : public UPCGPolyLineData	
	{
	public:
		FPCGSplineStruct SplineStruct; // 0xD0(0x160)
		FBox CachedBounds; // 0x230(0x38)
		unsigned char UnknownData00_7[0x8]; // 0x268(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSplineData");
			return ret;
		}
	};


	// Class PCG.PCGSplineProjectionData
	// Inherited from UPCGProjectionData -> UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x18 (0x188 - 0x170)
	class UPCGSplineProjectionData : public UPCGProjectionData	
	{
	public:
		FInterpCurveVector2D ProjectedPosition; // 0x170(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSplineProjectionData");
			return ret;
		}
	};


	// Class PCG.PCGSplineInteriorSurfaceData
	// Inherited from UPCGSurfaceData -> UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x1C8 (0x330 - 0x168)
	class UPCGSplineInteriorSurfaceData : public UPCGSurfaceData	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x168(0x8) UNKNOWN PROPERTY
		FPCGSplineStruct SplineStruct; // 0x170(0x160)
		FBox CachedBounds; // 0x2D0(0x38)
		TArray<FVector> CachedSplinePoints; // 0x308(0x10)
		TArray<FVector2D> CachedSplinePoints2D; // 0x318(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x328(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSplineInteriorSurfaceData");
			return ret;
		}
	};


	// Class PCG.PCGTextureData
	// Inherited from UPCGBaseTextureData -> UPCGSurfaceData -> UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x18 (0x230 - 0x218)
	class UPCGTextureData : public UPCGBaseTextureData	
	{
	public:
		TWeakObjectPtr<UTexture*> Texture; // 0x218(0x8)
		int32_t TextureIndex; // 0x220(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x224(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGTextureData");
			return ret;
		}
	};


	// Class PCG.PCGUnionData
	// Inherited from UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x98 (0x168 - 0xD0)
	class UPCGUnionData : public UPCGSpatialDataWithPointCache	
	{
	public:
		TArray<UPCGSpatialData*> Data; // 0xD0(0x10)
		UPCGSpatialData* FirstNonTrivialTransformData; // 0xE0(0x8)
		EPCGUnionType UnionType; // 0xE8(0x1)
		EPCGUnionDensityFunction DensityFunction; // 0xE9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xEA(0x6) UNKNOWN PROPERTY
		FBox CachedBounds; // 0xF0(0x38)
		FBox CachedStrictBounds; // 0x128(0x38)
		int32_t CachedDimension; // 0x160(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x164(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGUnionData");
			return ret;
		}

		void Initialize(UPCGSpatialData* InA, UPCGSpatialData* InB); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507FD124(relative to base address)
		void AddData(UPCGSpatialData* InData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507FC954(relative to base address)
	};


	// Class PCG.PCGVolumeData
	// Inherited from UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x98 (0x168 - 0xD0)
	class UPCGVolumeData : public UPCGSpatialDataWithPointCache	
	{
	public:
		FVector VoxelSize; // 0xD0(0x18)
		TWeakObjectPtr<AVolume*> Volume; // 0xE8(0x8)
		FBox Bounds; // 0xF0(0x38)
		FBox StrictBounds; // 0x128(0x38)
		unsigned char UnknownData00_7[0x8]; // 0x160(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGVolumeData");
			return ret;
		}
	};


	// Class PCG.PCGWorldVolumetricData
	// Inherited from UPCGVolumeData -> UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x88 (0x1F0 - 0x168)
	class UPCGWorldVolumetricData : public UPCGVolumeData	
	{
	public:
		TWeakObjectPtr<UWorld*> World; // 0x168(0x8)
		TWeakObjectPtr<UPCGComponent*> OriginatingComponent; // 0x170(0x8)
		FPCGWorldVolumetricQueryParams QueryParams; // 0x178(0x78)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGWorldVolumetricData");
			return ret;
		}
	};


	// Class PCG.PCGWorldRayHitData
	// Inherited from UPCGSurfaceData -> UPCGSpatialDataWithPointCache -> UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x108 (0x270 - 0x168)
	class UPCGWorldRayHitData : public UPCGSurfaceData	
	{
	public:
		TWeakObjectPtr<UWorld*> World; // 0x168(0x8)
		TWeakObjectPtr<UPCGComponent*> OriginatingComponent; // 0x170(0x8)
		FBox Bounds; // 0x178(0x38)
		FPCGWorldRayHitQueryParams QueryParams; // 0x1B0(0xC0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGWorldRayHitData");
			return ret;
		}
	};


	// Class PCG.PCGMetadataBitwiseSettings
	// Inherited from UPCGMetadataSettingsBase -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x58 (0x130 - 0xD8)
	class UPCGMetadataBitwiseSettings : public UPCGMetadataSettingsBase	
	{
	public:
		EPCGMetadataBitwiseOperation Operation; // 0xD8(0x2)
		unsigned char UnknownData00_6[0x6]; // 0xDA(0x6) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector InputSource1; // 0xE0(0x28)
		FPCGAttributePropertyInputSelector InputSource2; // 0x108(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataBitwiseSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataBooleanSettings
	// Inherited from UPCGMetadataSettingsBase -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x58 (0x130 - 0xD8)
	class UPCGMetadataBooleanSettings : public UPCGMetadataSettingsBase	
	{
	public:
		EPCGMetadataBooleanOperation Operation; // 0xD8(0x2)
		unsigned char UnknownData00_6[0x6]; // 0xDA(0x6) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector InputSource1; // 0xE0(0x28)
		FPCGAttributePropertyInputSelector InputSource2; // 0x108(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataBooleanSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataBreakTransformSettings
	// Inherited from UPCGMetadataSettingsBase -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x28 (0x100 - 0xD8)
	class UPCGMetadataBreakTransformSettings : public UPCGMetadataSettingsBase	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource; // 0xD8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataBreakTransformSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataBreakVectorSettings
	// Inherited from UPCGMetadataSettingsBase -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x28 (0x100 - 0xD8)
	class UPCGMetadataBreakVectorSettings : public UPCGMetadataSettingsBase	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource; // 0xD8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataBreakVectorSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataCompareSettings
	// Inherited from UPCGMetadataSettingsBase -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x60 (0x138 - 0xD8)
	class UPCGMetadataCompareSettings : public UPCGMetadataSettingsBase	
	{
	public:
		EPCGMetadataCompareOperation Operation; // 0xD8(0x2)
		unsigned char UnknownData00_6[0x6]; // 0xDA(0x6) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector InputSource1; // 0xE0(0x28)
		FPCGAttributePropertyInputSelector InputSource2; // 0x108(0x28)
		double Tolerance; // 0x130(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataCompareSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataOperationSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x58 (0x100 - 0xA8)
	class UPCGMetadataOperationSettings : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource; // 0xA8(0x28)
		FPCGAttributePropertyOutputSelector OutputTarget; // 0xD0(0x28)
		bool bCopyAllAttributes; // 0xF8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataOperationSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataMakeTransformSettings
	// Inherited from UPCGMetadataSettingsBase -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x78 (0x150 - 0xD8)
	class UPCGMetadataMakeTransformSettings : public UPCGMetadataSettingsBase	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource1; // 0xD8(0x28)
		FPCGAttributePropertyInputSelector InputSource2; // 0x100(0x28)
		FPCGAttributePropertyInputSelector InputSource3; // 0x128(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataMakeTransformSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataMakeVectorSettings
	// Inherited from UPCGMetadataSettingsBase -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0xA8 (0x180 - 0xD8)
	class UPCGMetadataMakeVectorSettings : public UPCGMetadataSettingsBase	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource1; // 0xD8(0x28)
		FPCGAttributePropertyInputSelector InputSource2; // 0x100(0x28)
		FPCGAttributePropertyInputSelector InputSource3; // 0x128(0x28)
		FPCGAttributePropertyInputSelector InputSource4; // 0x150(0x28)
		EPCGMetadataTypes OutputType; // 0x178(0x1)
		EPCGMetadataMakeVector3 MakeVector3Op; // 0x179(0x1)
		EPCGMetadataMakeVector4 MakeVector4Op; // 0x17A(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x17B(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataMakeVectorSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataMathsSettings
	// Inherited from UPCGMetadataSettingsBase -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x80 (0x158 - 0xD8)
	class UPCGMetadataMathsSettings : public UPCGMetadataSettingsBase	
	{
	public:
		EPCGMetadataMathsOperation Operation; // 0xD8(0x2)
		bool bForceRoundingOpToInt; // 0xDA(0x1)
		bool bForceOpToDouble; // 0xDB(0x1)
		unsigned char UnknownData00_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector InputSource1; // 0xE0(0x28)
		FPCGAttributePropertyInputSelector InputSource2; // 0x108(0x28)
		FPCGAttributePropertyInputSelector InputSource3; // 0x130(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataMathsSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataPartitionSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UPCGMetadataPartitionSettings : public UPCGSettings	
	{
	public:
		TArray<FPCGAttributePropertyInputSelector> PartitionAttributeSelectors; // 0xA8(0x10)
		FString PartitionAttributeNames; // 0xB8(0x10)
		bool bTokenizeOnWhiteSpace; // 0xC8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataPartitionSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataRenameSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGMetadataRenameSettings : public UPCGSettings	
	{
	public:
		FName AttributeToRename; // 0xA8(0x4)
		FName NewAttributeName; // 0xAC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataRenameSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataRotatorSettings
	// Inherited from UPCGMetadataSettingsBase -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x80 (0x158 - 0xD8)
	class UPCGMetadataRotatorSettings : public UPCGMetadataSettingsBase	
	{
	public:
		EPCGMetadataRotatorOperation Operation; // 0xD8(0x2)
		unsigned char UnknownData00_6[0x6]; // 0xDA(0x6) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector InputSource1; // 0xE0(0x28)
		FPCGAttributePropertyInputSelector InputSource2; // 0x108(0x28)
		FPCGAttributePropertyInputSelector InputSource3; // 0x130(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataRotatorSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataStringOpSettings
	// Inherited from UPCGMetadataSettingsBase -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x80 (0x158 - 0xD8)
	class UPCGMetadataStringOpSettings : public UPCGMetadataSettingsBase	
	{
	public:
		EPCGMetadataStringOperation Operation; // 0xD8(0x2)
		unsigned char UnknownData00_6[0x6]; // 0xDA(0x6) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector InputSource1; // 0xE0(0x28)
		FPCGAttributePropertyInputSelector InputSource2; // 0x108(0x28)
		FPCGAttributePropertyInputSelector InputSource3; // 0x130(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataStringOpSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataTransformSettings
	// Inherited from UPCGMetadataSettingsBase -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x80 (0x158 - 0xD8)
	class UPCGMetadataTransformSettings : public UPCGMetadataSettingsBase	
	{
	public:
		EPCGMetadataTransformOperation Operation; // 0xD8(0x2)
		EPCGTransformLerpMode TransformLerpMode; // 0xDA(0x2)
		unsigned char UnknownData00_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector InputSource1; // 0xE0(0x28)
		FPCGAttributePropertyInputSelector InputSource2; // 0x108(0x28)
		FPCGAttributePropertyInputSelector InputSource3; // 0x130(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataTransformSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataTrigSettings
	// Inherited from UPCGMetadataSettingsBase -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x58 (0x130 - 0xD8)
	class UPCGMetadataTrigSettings : public UPCGMetadataSettingsBase	
	{
	public:
		EPCGMetadataTrigOperation Operation; // 0xD8(0x2)
		unsigned char UnknownData00_6[0x6]; // 0xDA(0x6) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector InputSource1; // 0xE0(0x28)
		FPCGAttributePropertyInputSelector InputSource2; // 0x108(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataTrigSettings");
			return ret;
		}
	};


	// Class PCG.PCGMetadataVectorSettings
	// Inherited from UPCGMetadataSettingsBase -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x80 (0x158 - 0xD8)
	class UPCGMetadataVectorSettings : public UPCGMetadataSettingsBase	
	{
	public:
		EPCGMetadataVectorOperation Operation; // 0xD8(0x2)
		unsigned char UnknownData00_6[0x6]; // 0xDA(0x6) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector InputSource1; // 0xE0(0x28)
		FPCGAttributePropertyInputSelector InputSource2; // 0x108(0x28)
		FPCGAttributePropertyInputSelector InputSource3; // 0x130(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataVectorSettings");
			return ret;
		}
	};


	// Class PCG.PCGAttributeGetFromIndexSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGAttributeGetFromIndexSettings : public UPCGSettings	
	{
	public:
		int32_t Index; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAttributeGetFromIndexSettings");
			return ret;
		}
	};


	// Class PCG.PCGAttributeGetFromPointIndexSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UPCGAttributeGetFromPointIndexSettings : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource; // 0xA8(0x28)
		int32_t Index; // 0xD0(0x4)
		FName OutputAttributeName; // 0xD4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAttributeGetFromPointIndexSettings");
			return ret;
		}
	};


	// Class PCG.PCGAttributeNoiseSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x60 (0x108 - 0xA8)
	class UPCGAttributeNoiseSettings : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource; // 0xA8(0x28)
		FPCGAttributePropertyOutputSelector OutputTarget; // 0xD0(0x28)
		EPCGAttributeNoiseMode Mode; // 0xF8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xF9(0x3) UNKNOWN PROPERTY
		float NoiseMin; // 0xFC(0x4)
		float NoiseMax; // 0x100(0x4)
		bool bInvertSource; // 0x104(0x1)
		bool bClampResult; // 0x105(0x1)
		bool bHasSpatialToPointDeprecation; // 0x106(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x107(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAttributeNoiseSettings");
			return ret;
		}
	};


	// Class PCG.PCGAttributeReduceSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UPCGAttributeReduceSettings : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource; // 0xA8(0x28)
		FName OutputAttributeName; // 0xD0(0x4)
		EPCGAttributeReduceOperation Operation; // 0xD4(0x4)
		FString JoinDelimiter; // 0xD8(0x10)
		bool bMergeOutputAttributes; // 0xE8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAttributeReduceSettings");
			return ret;
		}
	};


	// Class PCG.PCGAttributeSelectSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x58 (0x100 - 0xA8)
	class UPCGAttributeSelectSettings : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource; // 0xA8(0x28)
		FName OutputAttributeName; // 0xD0(0x4)
		EPCGAttributeSelectOperation Operation; // 0xD4(0x4)
		EPCGAttributeSelectAxis Axis; // 0xD8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		FVector4 CustomAxis; // 0xE0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAttributeSelectSettings");
			return ret;
		}
	};


	// Class PCG.PCGAttributeTransferSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class UPCGAttributeTransferSettings : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyInputSelector SourceAttributeProperty; // 0xA8(0x28)
		FPCGAttributePropertyOutputSelector TargetAttributeProperty; // 0xD0(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAttributeTransferSettings");
			return ret;
		}
	};


	// Class PCG.PCGBoundsModifierSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x40 (0xE8 - 0xA8)
	class UPCGBoundsModifierSettings : public UPCGSettings	
	{
	public:
		EPCGBoundsModifierMode Mode; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		FVector BoundsMin; // 0xB0(0x18)
		FVector BoundsMax; // 0xC8(0x18)
		bool bAffectSteepness; // 0xE0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xE1(0x3) UNKNOWN PROPERTY
		float Steepness; // 0xE4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGBoundsModifierSettings");
			return ret;
		}
	};


	// Class PCG.PCGCollapseSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGCollapseSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGCollapseSettings");
			return ret;
		}
	};


	// Class PCG.PCGConvertToPointDataSettings
	// Inherited from UPCGCollapseSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGConvertToPointDataSettings : public UPCGCollapseSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGConvertToPointDataSettings");
			return ret;
		}
	};


	// Class PCG.PCGConvertToAttributeSetSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGConvertToAttributeSetSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGConvertToAttributeSetSettings");
			return ret;
		}
	};


	// Class PCG.PCGTagsToAttributeSetSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGTagsToAttributeSetSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGTagsToAttributeSetSettings");
			return ret;
		}
	};


	// Class PCG.PCGCopyPointsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGCopyPointsSettings : public UPCGSettings	
	{
	public:
		EPCGCopyPointsInheritanceMode RotationInheritance; // 0xA8(0x1)
		EPCGCopyPointsInheritanceMode ScaleInheritance; // 0xA9(0x1)
		EPCGCopyPointsInheritanceMode ColorInheritance; // 0xAA(0x1)
		EPCGCopyPointsInheritanceMode SeedInheritance; // 0xAB(0x1)
		EPCGCopyPointsMetadataInheritanceMode AttributeInheritance; // 0xAC(0x1)
		EPCGCopyPointsTagInheritanceMode TagInheritance; // 0xAD(0x1)
		bool bCopyEachSourceOnEveryTarget; // 0xAE(0x1)
		unsigned char UnknownData00_7[0x1]; // 0xAF(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGCopyPointsSettings");
			return ret;
		}
	};


	// Class PCG.PCGAddAttributeSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x1C8 (0x270 - 0xA8)
	class UPCGAddAttributeSettings : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource; // 0xA8(0x28)
		FPCGAttributePropertyOutputSelector OutputTarget; // 0xD0(0x28)
		unsigned char UnknownData00_6[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY
		FPCGMetadataTypesConstantStruct AttributeTypes; // 0x100(0x160)
		bool bCopyAllAttributes; // 0x260(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x261(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGAddAttributeSettings");
			return ret;
		}
	};


	// Class PCG.PCGCreateAttributeSetSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x198 (0x240 - 0xA8)
	class UPCGCreateAttributeSetSettings : public UPCGSettings	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FPCGMetadataTypesConstantStruct AttributeTypes; // 0xB0(0x160)
		FPCGAttributePropertyOutputNoSourceSelector OutputTarget; // 0x210(0x28)
		unsigned char UnknownData01_7[0x8]; // 0x238(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGCreateAttributeSetSettings");
			return ret;
		}
	};


	// Class PCG.PCGCreateCollisionDataSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UPCGCreateCollisionDataSettings : public UPCGSettings	
	{
	public:
		FPCGAttributePropertyInputSelector CollisionAttribute; // 0xA8(0x28)
		EPCGCollisionQueryFlag CollisionQueryFlag; // 0xD0(0x1)
		bool bWarnIfAttributeCouldNotBeUsed; // 0xD1(0x1)
		bool bSynchronousLoad; // 0xD2(0x1)
		unsigned char UnknownData00_7[0x5]; // 0xD3(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGCreateCollisionDataSettings");
			return ret;
		}
	};


	// Class PCG.PCGCreatePointsSphereSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x90 (0x138 - 0xA8)
	class UPCGCreatePointsSphereSettings : public UPCGSettings	
	{
	public:
		EPCGSphereGeneration SphereGeneration; // 0xA8(0x1)
		EPCGCoordinateSpace CoordinateSpace; // 0xA9(0x1)
		EPCGSpherePointOrientation PointOrientation; // 0xAA(0x1)
		unsigned char UnknownData00_6[0x5]; // 0xAB(0x5) UNKNOWN PROPERTY
		FVector Origin; // 0xB0(0x18)
		double Radius; // 0xC8(0x8)
		int32_t GeodesicSubdivisions; // 0xD0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		double Theta; // 0xD8(0x8)
		double Phi; // 0xE0(0x8)
		int32_t LatitudinalSegments; // 0xE8(0x4)
		int32_t LongitudinalSegments; // 0xEC(0x4)
		int32_t SampleCount; // 0xF0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY
		double PoissonDistance; // 0xF8(0x8)
		int32_t PoissonMaxAttempts; // 0x100(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		double LatitudinalStartAngle; // 0x108(0x8)
		double LatitudinalEndAngle; // 0x110(0x8)
		double LongitudinalStartAngle; // 0x118(0x8)
		double LongitudinalEndAngle; // 0x120(0x8)
		double Jitter; // 0x128(0x8)
		float PointSteepness; // 0x130(0x4)
		bool bCullPointsOutsideVolume; // 0x134(0x1)
		unsigned char UnknownData04_7[0x3]; // 0x135(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGCreatePointsSphereSettings");
			return ret;
		}
	};


	// Class PCG.PCGCreateSplineSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x40 (0xE8 - 0xA8)
	class UPCGCreateSplineSettings : public UPCGSettings	
	{
	public:
		EPCGCreateSplineMode Mode; // 0xA8(0x1)
		bool bClosedLoop; // 0xA9(0x1)
		bool bLinear; // 0xAA(0x1)
		bool bApplyCustomTangents; // 0xAB(0x1)
		FName ArriveTangentAttribute; // 0xAC(0x4)
		FName LeaveTangentAttribute; // 0xB0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> TargetActor; // 0xB8(0x20)
		TArray<FName> PostProcessFunctionNames; // 0xD8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGCreateSplineSettings");
			return ret;
		}
	};


	// Class PCG.PCGCreateSplineMeshSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x318 (0x3C0 - 0xA8)
	class UPCGCreateSplineMeshSettings : public UPCGSettings	
	{
	public:
		FSoftSplineMeshComponentDescriptor SplineMeshDescriptor; // 0xA8(0x218)
		FPCGSplineMeshParams SplineMeshParams; // 0x2C0(0xC8)
		TWeakObjectPtr<AActor*> TargetActor; // 0x388(0x20)
		TArray<FName> PostProcessFunctionNames; // 0x3A8(0x10)
		bool bSynchronousLoad; // 0x3B8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x3B9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGCreateSplineMeshSettings");
			return ret;
		}
	};


	// Class PCG.PCGCreateSurfaceFromSplineSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGCreateSurfaceFromSplineSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGCreateSurfaceFromSplineSettings");
			return ret;
		}
	};


	// Class PCG.PCGCreateTargetActor
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0xD8 (0x180 - 0xA8)
	class UPCGCreateTargetActor : public UPCGSettings	
	{
	public:
		AActor* TemplateActor; // 0xA8(0x8)
		EPCGAttachOptions AttachOptions; // 0xB0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> RootActor; // 0xB8(0x20)
		FString ActorLabel; // 0xD8(0x10)
		unsigned char UnknownData01_6[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY
		FTransform ActorPivot; // 0xF0(0x60)
		TArray<FPCGObjectPropertyOverrideDescription> PropertyOverrideDescriptions; // 0x150(0x10)
		TArray<FName> PostProcessFunctionNames; // 0x160(0x10)
		UClass* TemplateActorClass; // 0x170(0x8)
		bool bAllowTemplateActorEditing; // 0x178(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x179(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGCreateTargetActor");
			return ret;
		}
	};


	// Class PCG.PCGDataFromActorSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x70 (0x118 - 0xA8)
	class UPCGDataFromActorSettings : public UPCGSettings	
	{
	public:
		FPCGActorSelectorSettings ActorSelector; // 0xA8(0x48)
		EPCGGetDataFromActorMode Mode; // 0xF0(0x1)
		bool bAlsoOutputSinglePointData; // 0xF1(0x1)
		bool bComponentsMustOverlapSelf; // 0xF2(0x1)
		bool bGetDataOnAllGrids; // 0xF3(0x1)
		int32_t AllowedGrids; // 0xF4(0x4)
		bool bMergeSinglePointData; // 0xF8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY
		TArray<FName> ExpectedPins; // 0x100(0x10)
		FName PropertyName; // 0x110(0x4)
		bool bSilenceSanitizedAttributeNameWarnings; // 0x114(0x1)
		bool bDisplayModeSettings; // 0x115(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x116(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDataFromActorSettings");
			return ret;
		}
	};


	// Class PCG.PCGDataNumSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGDataNumSettings : public UPCGSettings	
	{
	public:
		FName OutputAttributeName; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDataNumSettings");
			return ret;
		}
	};


	// Class PCG.PCGDataTableRowToParamDataSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UPCGDataTableRowToParamDataSettings : public UPCGSettings	
	{
	public:
		FName RowName; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UDataTable*> DataTable; // 0xB0(0x20)
		bool bSynchronousLoad; // 0xD0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDataTableRowToParamDataSettings");
			return ret;
		}
	};


	// Class PCG.PCGDebugSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UPCGDebugSettings : public UPCGSettings	
	{
	public:
		TWeakObjectPtr<AActor*> TargetActor; // 0xA8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDebugSettings");
			return ret;
		}
	};


	// Class PCG.PCGDensityFilterSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UPCGDensityFilterSettings : public UPCGSettings	
	{
	public:
		float LowerBound; // 0xA8(0x4)
		float UpperBound; // 0xAC(0x4)
		bool bInvertFilter; // 0xB0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDensityFilterSettings");
			return ret;
		}
	};


	// Class PCG.PCGDensityRemapSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPCGDensityRemapSettings : public UPCGSettings	
	{
	public:
		float InRangeMin; // 0xA8(0x4)
		float InRangeMax; // 0xAC(0x4)
		float OutRangeMin; // 0xB0(0x4)
		float OutRangeMax; // 0xB4(0x4)
		bool bExcludeValuesOutsideInputRange; // 0xB8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDensityRemapSettings");
			return ret;
		}
	};


	// Class PCG.PCGDifferenceSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGDifferenceSettings : public UPCGSettings	
	{
	public:
		EPCGDifferenceDensityFunction DensityFunction; // 0xA8(0x1)
		EPCGDifferenceMode Mode; // 0xA9(0x1)
		bool bDiffMetadata; // 0xAA(0x1)
		bool bKeepZeroDensityPoints; // 0xAB(0x1)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDifferenceSettings");
			return ret;
		}
	};


	// Class PCG.PCGBlueprintElement
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UPCGBlueprintElement : public UObject	
	{
	public:
		bool bIsCacheable; // 0x28(0x1)
		bool bComputeFullDataCrc; // 0x29(0x1)
		bool bRequiresGameThread; // 0x2A(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x2B(0x5) UNKNOWN PROPERTY
		TArray<FPCGPinProperties> CustomInputPins; // 0x30(0x10)
		TArray<FPCGPinProperties> CustomOutputPins; // 0x40(0x10)
		bool bHasDefaultInPin; // 0x50(0x1)
		bool bHasDefaultOutPin; // 0x51(0x1)
		bool bHasDynamicPins; // 0x52(0x1)
		unsigned char UnknownData01_7[0x15]; // 0x53(0x15) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGBlueprintElement");
			return ret;
		}

		TArray VariableLoopBody(FPCGContext& InContext, UPCGPointData* InData, FPCGPoint& InPoint, UPCGMetadata* OutMetadata, int64_t Iteration); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VariableLoop(FPCGContext& InContext, UPCGPointData* InData, UPCGPointData* OutData, UPCGPointData* OptionalOutData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF750913090(relative to base address)
		bool PointLoopBody(FPCGContext& InContext, UPCGPointData* InData, FPCGPoint& InPoint, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata, int64_t Iteration); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PointLoop(FPCGContext& InContext, UPCGPointData* InData, UPCGPointData* OutData, UPCGPointData* OptionalOutData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF750912CE0(relative to base address)
		EPCGSettingsType NodeTypeOverride(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74C5D1DC4(relative to base address)
		FName NodeTitleOverride(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF750912CB0(relative to base address)
		FLinearColor NodeColorOverride(); // Flags: Native|Event|Public|HasDefaults|BlueprintEvent|Const, Memory Exec: 0x7FF750912C7C(relative to base address)
		bool NestedLoopBody(FPCGContext& InContext, UPCGPointData* InOuterData, UPCGPointData* InInnerData, FPCGPoint& InOuterPoint, FPCGPoint& InInnerPoint, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata, int64_t OuterIteration, int64_t InnerIteration); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NestedLoop(FPCGContext& InContext, UPCGPointData* InOuterData, UPCGPointData* InInnerData, UPCGPointData* OutData, UPCGPointData* OptionalOutData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF750912904(relative to base address)
		bool IterationLoopBody(FPCGContext& InContext, int64_t Iteration, UPCGSpatialData* InA, UPCGSpatialData* InB, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IterationLoop(FPCGContext& InContext, int64_t NumIterations, UPCGPointData* OutData, UPCGSpatialData* OptionalA, UPCGSpatialData* OptionalB, UPCGPointData* OptionalOutData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF7509124B4(relative to base address)
		bool IsCacheableOverride(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74C5A798C(relative to base address)
		int32_t GetSeed(FPCGContext& InContext); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7509123F0(relative to base address)
		FRandomStream GetRandomStream(FPCGContext& InContext); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF75091231C(relative to base address)
		TArray GetOutputPins(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7509122DC(relative to base address)
		bool GetOutputPinByLabel(FName InPinLabel, FPCGPinProperties& OutFoundPin); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750912180(relative to base address)
		TArray GetInputPins(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750912140(relative to base address)
		bool GetInputPinByLabel(FName InPinLabel, FPCGPinProperties& OutFoundPin); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750911FE4(relative to base address)
		FPCGContext GetContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750911F8C(relative to base address)
		void ExecuteWithContext(FPCGContext& InContext, FPCGDataCollection& Input, FPCGDataCollection& Output); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF750911DD4(relative to base address)
		void Execute(FPCGDataCollection& Input, FPCGDataCollection& Output); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t DynamicPinTypesOverride(UPCGSettings* InSettings, UPCGPin* InPin); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF750911D08(relative to base address)
		TSet CustomOutputLabels(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750911BDC(relative to base address)
		TSet CustomInputLabels(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750911AB0(relative to base address)
		void ApplyPreconfiguredSettings(FPCGPreConfiguredSettingsInfo& InPreconfigureInfo); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PCG.PCGBlueprintSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UPCGBlueprintSettings : public UPCGSettings	
	{
	public:
		UClass* BlueprintElementType; // 0xA8(0x8)
		UPCGBlueprintElement* BlueprintElementInstance; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGBlueprintSettings");
			return ret;
		}

		void SetElementType(UClass* InElementType, UPCGBlueprintElement* ElementInstance); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750912F98(relative to base address)
		UClass GetElementType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750911FA8(relative to base address)
	};


	// Class PCG.PCGFilterByIndexSettings
	// Inherited from UPCGFilterDataBaseSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPCGFilterByIndexSettings : public UPCGFilterDataBaseSettings	
	{
	public:
		bool bInvertFilter; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		FString SelectedIndices; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGFilterByIndexSettings");
			return ret;
		}
	};


	// Class PCG.PCGFilterByTagSettings
	// Inherited from UPCGFilterDataBaseSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UPCGFilterByTagSettings : public UPCGFilterDataBaseSettings	
	{
	public:
		EPCGFilterByTagOperation Operation; // 0xA8(0x4)
		EPCGStringMatchingOperator Operator; // 0xAC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		FString SelectedTags; // 0xB0(0x10)
		bool bTokenizeOnWhiteSpace; // 0xC0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGFilterByTagSettings");
			return ret;
		}
	};


	// Class PCG.PCGFilterByTypeSettings
	// Inherited from UPCGFilterDataBaseSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGFilterByTypeSettings : public UPCGFilterDataBaseSettings	
	{
	public:
		EPCGDataType TargetType; // 0xA8(0x4)
		bool bShowOutsideFilter; // 0xAC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGFilterByTypeSettings");
			return ret;
		}
	};


	// Class PCG.PCGGetTagsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGGetTagsSettings : public UPCGSettings	
	{
	public:
		bool bExtractTagValues; // 0xA8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGetTagsSettings");
			return ret;
		}
	};


	// Class PCG.PCGGetAttributesSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGGetAttributesSettings : public UPCGSettings	
	{
	public:
		bool bGetType; // 0xA8(0x1)
		bool bGetDefaultValue; // 0xA9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGetAttributesSettings");
			return ret;
		}
	};


	// Class PCG.PCGGetLoopIndexSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGGetLoopIndexSettings : public UPCGSettings	
	{
	public:
		bool bWarnIfCalledOutsideOfLoop; // 0xA8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGetLoopIndexSettings");
			return ret;
		}
	};


	// Class PCG.PCGIndirectionSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x40 (0xE8 - 0xA8)
	class UPCGIndirectionSettings : public UPCGSettings	
	{
	public:
		EPCGProxyInterfaceMode ProxyInterfaceMode; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		UClass* SettingsClass; // 0xB0(0x8)
		UClass* BlueprintElementClass; // 0xB8(0x8)
		TWeakObjectPtr<UPCGSettings*> Settings; // 0xC0(0x20)
		bool bTagOutputsBasedOnOutputPins; // 0xE0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xE1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGIndirectionSettings");
			return ret;
		}
	};


	// Class PCG.PCGInnerIntersectionSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGInnerIntersectionSettings : public UPCGSettings	
	{
	public:
		EPCGIntersectionDensityFunction DensityFunction; // 0xA8(0x1)
		bool bKeepZeroDensityPoints; // 0xA9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGInnerIntersectionSettings");
			return ret;
		}
	};


	// Class PCG.PCGBaseSubgraphSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGBaseSubgraphSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGBaseSubgraphSettings");
			return ret;
		}
	};


	// Class PCG.PCGSubgraphSettings
	// Inherited from UPCGBaseSubgraphSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UPCGSubgraphSettings : public UPCGBaseSubgraphSettings	
	{
	public:
		UPCGGraphInstance* SubgraphInstance; // 0xA8(0x8)
		UPCGGraphInterface* SubgraphOverride; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSubgraphSettings");
			return ret;
		}
	};


	// Class PCG.PCGLoopSettings
	// Inherited from UPCGSubgraphSettings -> UPCGBaseSubgraphSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x30 (0xE8 - 0xB8)
	class UPCGLoopSettings : public UPCGSubgraphSettings	
	{
	public:
		bool bUseGraphDefaultPinUsage; // 0xB8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		FString LoopPins; // 0xC0(0x10)
		FString FeedbackPins; // 0xD0(0x10)
		bool bTokenizeOnWhiteSpace; // 0xE0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xE1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGLoopSettings");
			return ret;
		}
	};


	// Class PCG.PCGMatchAndSetAttributesSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x218 (0x2C0 - 0xA8)
	class UPCGMatchAndSetAttributesSettings : public UPCGSettings	
	{
	public:
		bool bMatchAttributes; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector InputAttribute; // 0xB0(0x28)
		FName MatchAttribute; // 0xD8(0x4)
		bool bKeepUnmatched; // 0xDC(0x1)
		bool bFindNearest; // 0xDD(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xDE(0x2) UNKNOWN PROPERTY
		EPCGMatchMaxDistanceMode MaxDistanceMode; // 0xE0(0x4)
		unsigned char UnknownData02_6[0xC]; // 0xE4(0xC) UNKNOWN PROPERTY
		FPCGMetadataTypesConstantStruct MaxDistanceForNearestMatch; // 0xF0(0x160)
		FPCGAttributePropertyInputSelector MaxDistanceInputAttribute; // 0x250(0x28)
		bool bUseInputWeightAttribute; // 0x278(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x279(0x7) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector InputWeightAttribute; // 0x280(0x28)
		bool bUseWeightAttribute; // 0x2A8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x2A9(0x3) UNKNOWN PROPERTY
		FName WeightAttribute; // 0x2AC(0x4)
		bool bWarnIfNoMatchData; // 0x2B0(0x1)
		unsigned char UnknownData05_7[0xF]; // 0x2B1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMatchAndSetAttributesSettings");
			return ret;
		}
	};


	// Class PCG.PCGMergeSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGMergeSettings : public UPCGSettings	
	{
	public:
		bool bMergeMetadata; // 0xA8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMergeSettings");
			return ret;
		}
	};


	// Class PCG.PCGPointExtentsModifierSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UPCGPointExtentsModifierSettings : public UPCGSettings	
	{
	public:
		FVector Extents; // 0xA8(0x18)
		EPCGPointExtentsModifierMode Mode; // 0xC0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGPointExtentsModifierSettings");
			return ret;
		}
	};


	// Class PCG.PCGPointFromMeshSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UPCGPointFromMeshSettings : public UPCGSettings	
	{
	public:
		TWeakObjectPtr<UStaticMesh*> StaticMesh; // 0xA8(0x20)
		FName MeshPathAttributeName; // 0xC8(0x4)
		bool bSynchronousLoad; // 0xCC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xCD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGPointFromMeshSettings");
			return ret;
		}
	};


	// Class PCG.PCGPointMatchAndSetSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x40 (0xE8 - 0xA8)
	class UPCGPointMatchAndSetSettings : public UPCGSettings	
	{
	public:
		UClass* MatchAndSetType; // 0xA8(0x8)
		UPCGMatchAndSetBase* MatchAndSetInstance; // 0xB0(0x8)
		FPCGAttributePropertyOutputSelector SetTarget; // 0xB8(0x28)
		EPCGMetadataTypes SetTargetType; // 0xE0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xE1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGPointMatchAndSetSettings");
			return ret;
		}

		void SetMatchAndSetType(UClass* InMatchAndSetType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75096542C(relative to base address)
	};


	// Class PCG.PCGProjectionSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UPCGProjectionSettings : public UPCGSettings	
	{
	public:
		FPCGProjectionParams ProjectionParams; // 0xA8(0x20)
		bool bForceCollapseToPoint; // 0xC8(0x1)
		bool bKeepZeroDensityPoints; // 0xC9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xCA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGProjectionSettings");
			return ret;
		}
	};


	// Class PCG.PCGSelectPointsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGSelectPointsSettings : public UPCGSettings	
	{
	public:
		float Ratio; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSelectPointsSettings");
			return ret;
		}
	};


	// Class PCG.PCGSelfPruningSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x68 (0x110 - 0xA8)
	class UPCGSelfPruningSettings : public UPCGSettings	
	{
	public:
		FPCGSelfPruningParameters Parameters; // 0xA8(0x68)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSelfPruningSettings");
			return ret;
		}
	};


	// Class PCG.PCGSpatialNoiseSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x108 (0x1B0 - 0xA8)
	class UPCGSpatialNoiseSettings : public UPCGSettings	
	{
	public:
		PCGSpatialNoiseMode Mode; // 0xA8(0x4)
		PCGSpatialNoiseMask2DMode EdgeMask2DMode; // 0xAC(0x4)
		int32_t Iterations; // 0xB0(0x4)
		bool bTiling; // 0xB4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY
		float Brightness; // 0xB8(0x4)
		float Contrast; // 0xBC(0x4)
		FPCGAttributePropertyOutputNoSourceSelector ValueTarget; // 0xC0(0x28)
		FVector RandomOffset; // 0xE8(0x18)
		FTransform Transform; // 0x100(0x60)
		double VoronoiCellRandomness; // 0x160(0x8)
		FPCGAttributePropertyOutputNoSourceSelector VoronoiCellIDTarget; // 0x168(0x28)
		bool bVoronoiOrientSamplesToCellEdge; // 0x190(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x191(0x3) UNKNOWN PROPERTY
		int32_t TiledVoronoiResolution; // 0x194(0x4)
		int32_t TiledVoronoiEdgeBlendCellCount; // 0x198(0x4)
		float EdgeBlendDistance; // 0x19C(0x4)
		float EdgeBlendCurveOffset; // 0x1A0(0x4)
		float EdgeBlendCurveIntensity; // 0x1A4(0x4)
		bool bForceNoUseSeed; // 0x1A8(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x1A9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSpatialNoiseSettings");
			return ret;
		}
	};


	// Class PCG.PCGSpawnActorSettings
	// Inherited from UPCGBaseSubgraphSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x80 (0x128 - 0xA8)
	class UPCGSpawnActorSettings : public UPCGBaseSubgraphSettings	
	{
	public:
		TArray<FName> PostSpawnFunctionNames; // 0xA8(0x10)
		EPCGSpawnActorOption Option; // 0xB8(0x1)
		bool bForceDisableActorParsing; // 0xB9(0x1)
		EPCGSpawnActorGenerationTrigger GenerationTrigger; // 0xBA(0x1)
		bool bInheritActorTags; // 0xBB(0x1)
		unsigned char UnknownData00_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		TArray<FName> TagsToAddOnActors; // 0xC0(0x10)
		AActor* TemplateActor; // 0xD0(0x8)
		TArray<FPCGObjectPropertyOverrideDescription> SpawnedActorPropertyOverrideDescriptions; // 0xD8(0x10)
		TWeakObjectPtr<AActor*> RootActor; // 0xE8(0x20)
		EPCGAttachOptions AttachOptions; // 0x108(0x4)
		bool bSpawnByAttribute; // 0x10C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x10D(0x3) UNKNOWN PROPERTY
		FName SpawnAttribute; // 0x110(0x4)
		bool bWarnOnIdenticalSpawn; // 0x114(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x115(0x3) UNKNOWN PROPERTY
		UClass* TemplateActorClass; // 0x118(0x8)
		bool bAllowTemplateActorEditing; // 0x120(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x121(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSpawnActorSettings");
			return ret;
		}
	};


	// Class PCG.PCGNode
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UPCGNode : public UObject	
	{
	public:
		FName NodeTitle; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UPCGSettingsInterface* SettingsInterface; // 0x30(0x8)
		TArray<UPCGNode*> OutboundNodes; // 0x38(0x10)
		TArray<UPCGEdge*> InboundEdges; // 0x48(0x10)
		TArray<UPCGEdge*> OutboundEdges; // 0x58(0x10)
		TArray<UPCGPin*> InputPins; // 0x68(0x10)
		TArray<UPCGPin*> OutputPins; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGNode");
			return ret;
		}

		bool RemoveEdgeTo(FName FromPinLable, UPCGNode* To, FName ToPinLabel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A542C8(relative to base address)
		UPCGSettings GetSettings(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A5306C(relative to base address)
		UPCGGraph GetGraph(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A527F8(relative to base address)
		UPCGNode AddEdgeTo(FName FromPinLabel, UPCGNode* To, FName ToPinLabel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A5148C(relative to base address)
	};


	// Class PCG.PCGBaseSubgraphNode
	// Inherited from UPCGNode -> UObject
	// Size: 0x0 (0x88 - 0x88)
	class UPCGBaseSubgraphNode : public UPCGNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGBaseSubgraphNode");
			return ret;
		}
	};


	// Class PCG.PCGSpawnActorNode
	// Inherited from UPCGBaseSubgraphNode -> UPCGNode -> UObject
	// Size: 0x0 (0x88 - 0x88)
	class UPCGSpawnActorNode : public UPCGBaseSubgraphNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSpawnActorNode");
			return ret;
		}
	};


	// Class PCG.PCGSplineSamplerSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x110 (0x1B8 - 0xA8)
	class UPCGSplineSamplerSettings : public UPCGSettings	
	{
	public:
		FPCGSplineSamplerParams SamplerParams; // 0xA8(0x110)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSplineSamplerSettings");
			return ret;
		}
	};


	// Class PCG.PCGStaticMeshSpawnerSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x70 (0x118 - 0xA8)
	class UPCGStaticMeshSpawnerSettings : public UPCGSettings	
	{
	public:
		UClass* MeshSelectorType; // 0xA8(0x8)
		UPCGMeshSelectorBase* MeshSelectorParameters; // 0xB0(0x8)
		UClass* InstanceDataPackerType; // 0xB8(0x8)
		UPCGInstanceDataPackerBase* InstanceDataPackerParameters; // 0xC0(0x8)
		TArray<FPCGObjectPropertyOverrideDescription> StaticMeshComponentPropertyOverrides; // 0xC8(0x10)
		FName OutAttributeName; // 0xD8(0x4)
		bool bApplyMeshBoundsToPoints; // 0xDC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> TargetActor; // 0xE0(0x20)
		TArray<FName> PostProcessFunctionNames; // 0x100(0x10)
		bool bSynchronousLoad; // 0x110(0x1)
		bool bSilenceOverrideAttributeNotFoundErrors; // 0x111(0x1)
		bool bWarnOnIdenticalSpawn; // 0x112(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x113(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGStaticMeshSpawnerSettings");
			return ret;
		}

		void SetMeshSelectorType(UClass* InMeshSelectorType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750965534(relative to base address)
		void SetInstancePackerType(UClass* InInstancePackerType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750965398(relative to base address)
	};


	// Class PCG.PCGSurfaceSamplerSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UPCGSurfaceSamplerSettings : public UPCGSettings	
	{
	public:
		float PointsPerSquaredMeter; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FVector PointExtents; // 0xB0(0x18)
		float Looseness; // 0xC8(0x4)
		bool bUnbounded; // 0xCC(0x1)
		bool bApplyDensityToPoints; // 0xCD(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xCE(0x2) UNKNOWN PROPERTY
		float PointSteepness; // 0xD0(0x4)
		unsigned char UnknownData02_7[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSurfaceSamplerSettings");
			return ret;
		}
	};


	// Class PCG.PCGTextureSamplerSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0xF8 (0x1A0 - 0xA8)
	class UPCGTextureSamplerSettings : public UPCGSettings	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0xB0(0x60)
		bool bUseAbsoluteTransform; // 0x110(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x111(0x3) UNKNOWN PROPERTY
		int32_t TextureArrayIndex; // 0x114(0x4)
		bool bUseDensitySourceChannel; // 0x118(0x1)
		EPCGTextureColorChannel ColorChannel; // 0x119(0x1)
		EPCGTextureFilter Filter; // 0x11A(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x11B(0x1) UNKNOWN PROPERTY
		float TexelSize; // 0x11C(0x4)
		bool bUseAdvancedTiling; // 0x120(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x121(0x7) UNKNOWN PROPERTY
		FVector2D Tiling; // 0x128(0x10)
		FVector2D CenterOffset; // 0x138(0x10)
		float Rotation; // 0x148(0x4)
		bool bUseTileBounds; // 0x14C(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x14D(0x3) UNKNOWN PROPERTY
		FVector2D TileBoundsMin; // 0x150(0x10)
		FVector2D TileBoundsMax; // 0x160(0x10)
		bool bSynchronousLoad; // 0x170(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x171(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UTexture*> Texture; // 0x178(0x20)
		unsigned char UnknownData06_7[0x8]; // 0x198(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGTextureSamplerSettings");
			return ret;
		}

		void SetDensityFunctionEquivalent(EPCGTextureDensityFunction DensityFunction); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750965320(relative to base address)
		EPCGTextureDensityFunction GetDensityFunctionEquivalent(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750965304(relative to base address)
	};


	// Class PCG.PCGTransformPointsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0xB0 (0x158 - 0xA8)
	class UPCGTransformPointsSettings : public UPCGSettings	
	{
	public:
		bool bApplyToAttribute; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		FName AttributeName; // 0xAC(0x4)
		FVector OffsetMin; // 0xB0(0x18)
		FVector OffsetMax; // 0xC8(0x18)
		bool bAbsoluteOffset; // 0xE0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xE1(0x7) UNKNOWN PROPERTY
		FRotator RotationMin; // 0xE8(0x18)
		FRotator RotationMax; // 0x100(0x18)
		bool bAbsoluteRotation; // 0x118(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x119(0x7) UNKNOWN PROPERTY
		FVector ScaleMin; // 0x120(0x18)
		FVector ScaleMax; // 0x138(0x18)
		bool bAbsoluteScale; // 0x150(0x1)
		bool bUniformScale; // 0x151(0x1)
		bool bRecomputeSeed; // 0x152(0x1)
		unsigned char UnknownData03_7[0x5]; // 0x153(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGTransformPointsSettings");
			return ret;
		}
	};


	// Class PCG.PCGGetLandscapeSettings
	// Inherited from UPCGDataFromActorSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0x120 - 0x118)
	class UPCGGetLandscapeSettings : public UPCGDataFromActorSettings	
	{
	public:
		FPCGLandscapeDataProps SamplingProperties; // 0x118(0x5)
		unsigned char UnknownData00_7[0x3]; // 0x11D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGetLandscapeSettings");
			return ret;
		}
	};


	// Class PCG.PCGGetSplineSettings
	// Inherited from UPCGDataFromActorSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0x118 - 0x118)
	class UPCGGetSplineSettings : public UPCGDataFromActorSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGetSplineSettings");
			return ret;
		}
	};


	// Class PCG.PCGGetVolumeSettings
	// Inherited from UPCGDataFromActorSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0x118 - 0x118)
	class UPCGGetVolumeSettings : public UPCGDataFromActorSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGetVolumeSettings");
			return ret;
		}
	};


	// Class PCG.PCGGetPrimitiveSettings
	// Inherited from UPCGDataFromActorSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0x118 - 0x118)
	class UPCGGetPrimitiveSettings : public UPCGDataFromActorSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGetPrimitiveSettings");
			return ret;
		}
	};


	// Class PCG.PCGGetPCGComponentSettings
	// Inherited from UPCGDataFromActorSettings -> UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0x118 - 0x118)
	class UPCGGetPCGComponentSettings : public UPCGDataFromActorSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGetPCGComponentSettings");
			return ret;
		}
	};


	// Class PCG.PCGUnionSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGUnionSettings : public UPCGSettings	
	{
	public:
		EPCGUnionType Type; // 0xA8(0x1)
		EPCGUnionDensityFunction DensityFunction; // 0xA9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGUnionSettings");
			return ret;
		}
	};


	// Class PCG.PCGVolumeSamplerSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UPCGVolumeSamplerSettings : public UPCGSettings	
	{
	public:
		FVector VoxelSize; // 0xA8(0x18)
		bool bUnbounded; // 0xC0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		float PointSteepness; // 0xC4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGVolumeSamplerSettings");
			return ret;
		}
	};


	// Class PCG.PCGWorldQuerySettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x78 (0x120 - 0xA8)
	class UPCGWorldQuerySettings : public UPCGSettings	
	{
	public:
		FPCGWorldVolumetricQueryParams QueryParams; // 0xA8(0x78)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGWorldQuerySettings");
			return ret;
		}
	};


	// Class PCG.PCGWorldRayHitSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0xC0 (0x168 - 0xA8)
	class UPCGWorldRayHitSettings : public UPCGSettings	
	{
	public:
		FPCGWorldRayHitQueryParams QueryParams; // 0xA8(0xC0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGWorldRayHitSettings");
			return ret;
		}
	};


	// Class PCG.PCGWorldRaycastElementSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x160 (0x208 - 0xA8)
	class UPCGWorldRaycastElementSettings : public UPCGSettings	
	{
	public:
		EPCGWorldRaycastMode RaycastMode; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector OriginInputAttribute; // 0xB0(0x28)
		bool bOverrideRayDirections; // 0xD8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY
		FVector RayDirection; // 0xE0(0x18)
		FPCGAttributePropertyInputSelector RayDirectionAttribute; // 0xF8(0x28)
		FPCGAttributePropertyInputSelector EndPointAttribute; // 0x120(0x28)
		bool bOverrideRayLengths; // 0x148(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x149(0x7) UNKNOWN PROPERTY
		double RayLength; // 0x150(0x8)
		FPCGAttributePropertyInputSelector RayLengthAttribute; // 0x158(0x28)
		FPCGWorldRaycastQueryParams WorldQueryParams; // 0x180(0x80)
		bool bKeepOriginalPointOnMiss; // 0x200(0x1)
		bool bUnbounded; // 0x201(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x202(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGWorldRaycastElementSettings");
			return ret;
		}
	};


	// Class PCG.PCGLandscapeCache
	// Inherited from UObject
	// Size: 0xB8 (0xE0 - 0x28)
	class UPCGLandscapeCache : public UObject	
	{
	public:
		EPCGLandscapeCacheSerializationMode SerializationMode; // 0x28(0x1)
		EPCGLandscapeCacheSerializationContents CookedSerializedContents; // 0x29(0x1)
		unsigned char UnknownData00_6[0x56]; // 0x2A(0x56) UNKNOWN PROPERTY
		TSet<FName> CachedLayerNames; // 0x80(0x50)
		unsigned char UnknownData01_7[0x10]; // 0xD0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGLandscapeCache");
			return ret;
		}

		void PrimeCache(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ClearCache(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7509884E0(relative to base address)
	};


	// Class PCG.PCGPartitionActor
	// Inherited from APartitionActor -> AActor -> UObject
	// Size: 0x110 (0x3A0 - 0x290)
	class APCGPartitionActor : public APartitionActor	
	{
	public:
		FGuid PCGGuid; // 0x290(0x10)
		unsigned char UnknownData00_6[0x50]; // 0x2A0(0x50) UNKNOWN PROPERTY
		TMap<UPCGComponent*, TWeakObjectPtr> LocalToOriginal; // 0x2F0(0x50)
		TMap<UPCGComponent*, TWeakObjectPtr> LoadedPreviewComponents; // 0x340(0x50)
		uint32_t PCGGridSize; // 0x390(0x4)
		bool bUse2DGrid; // 0x394(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x395(0x3) UNKNOWN PROPERTY
		uint32_t RuntimeGridDescriptorHash; // 0x398(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x39C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGPartitionActor");
			return ret;
		}

		UPCGComponent GetOriginalComponent(UPCGComponent* LocalComponent); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750988EE0(relative to base address)
		UPCGComponent GetLocalComponent(UPCGComponent* OriginalComponent); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750988E50(relative to base address)
	};


	// Class PCG.PCGActorHelpers
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGActorHelpers : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGActorHelpers");
			return ret;
		}
	};


	// Class PCG.PCGBlueprintHelpers
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGBlueprintHelpers : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGBlueprintHelpers");
			return ret;
		}

		void SetSeedFromPosition(FPCGPoint& InPoint); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750989D0C(relative to base address)
		void SetLocalCenter(FPCGPoint& InPoint, FVector& InLocalCenter); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750989B80(relative to base address)
		void SetExtents(FPCGPoint& InPoint, FVector& InExtents); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7509899F4(relative to base address)
		FBox GetTransformedBounds(FPCGPoint& InPoint); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7509898E4(relative to base address)
		int64_t GetTaskId(FPCGContext& Context); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75098981C(relative to base address)
		AActor GetTargetActor(FPCGContext& Context, UPCGSpatialData* SpatialData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750989688(relative to base address)
		UPCGSettings GetSettings(FPCGContext& Context); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7509895C4(relative to base address)
		FRandomStream GetRandomStreamFromTwoPoints(FPCGPoint& InPointA, FPCGPoint& InPointB, UPCGSettings* OptionalSettings, UPCGComponent* OptionalComponent); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750989290(relative to base address)
		FRandomStream GetRandomStreamFromPoint(FPCGPoint& InPoint, UPCGSettings* OptionalSettings, UPCGComponent* OptionalComponent); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750989034(relative to base address)
		UPCGComponent GetOriginalComponent(FPCGContext& Context); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750988F70(relative to base address)
		FVector GetLocalCenter(FPCGPoint& InPoint); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750988D4C(relative to base address)
		TArray GetInterpolatedPCGLandscapeLayerWeights(UObject* WorldContextObject, FVector& Location); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750988C08(relative to base address)
		UPCGData GetInputData(FPCGContext& Context); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750988B24(relative to base address)
		FVector GetExtents(FPCGPoint& InPoint); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750988A20(relative to base address)
		UPCGComponent GetComponent(FPCGContext& Context); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750988958(relative to base address)
		FBox GetActorLocalBoundsPCG(AActor* InActor, bool bIgnorePCGCreatedComponents); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750988878(relative to base address)
		UPCGData GetActorData(FPCGContext& Context); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750988794(relative to base address)
		FBox GetActorBoundsPCG(AActor* InActor, bool bIgnorePCGCreatedComponents); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7509886B4(relative to base address)
		UPCGData CreatePCGDataFromActor(AActor* InActor, bool bParseActor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7509885EC(relative to base address)
		int32_t ComputeSeedFromPosition(FVector& InPosition); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7509884F4(relative to base address)
	};


	// Class PCG.PCGInstanceDataPackerBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGInstanceDataPackerBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGInstanceDataPackerBase");
			return ret;
		}

		void PackInstances(FPCGContext& Context, UPCGSpatialData* InSpatialData, FPCGMeshInstanceList& InstanceList, FPCGPackedCustomData& OutPackedCustomData); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF750A300D0(relative to base address)
		void PackCustomDataFromAttributes(FPCGMeshInstanceList& InstanceList, UPCGMetadata* MetaData, TArray<FName>& AttributeNames, FPCGPackedCustomData& OutPackedCustomData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A2FDA0(relative to base address)
		bool AddTypeToPacking(int32_t TypeId, FPCGPackedCustomData& OutPackedCustomData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A281BC(relative to base address)
	};


	// Class PCG.PCGInstanceDataPackerByAttribute
	// Inherited from UPCGInstanceDataPackerBase -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPCGInstanceDataPackerByAttribute : public UPCGInstanceDataPackerBase	
	{
	public:
		TArray<FName> AttributeNames; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGInstanceDataPackerByAttribute");
			return ret;
		}
	};


	// Class PCG.PCGInstanceDataPackerByRegex
	// Inherited from UPCGInstanceDataPackerBase -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPCGInstanceDataPackerByRegex : public UPCGInstanceDataPackerBase	
	{
	public:
		TArray<FString> RegexPatterns; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGInstanceDataPackerByRegex");
			return ret;
		}
	};


	// Class PCG.PCGMatchAndSetBase
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UPCGMatchAndSetBase : public UObject	
	{
	public:
		EPCGMetadataTypes Type; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		EPCGMetadataTypesConstantStructStringMode StringMode; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMatchAndSetBase");
			return ret;
		}

		bool ValidatePreconditions(UPCGPointData* InPointData); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF750A3638C(relative to base address)
		void MatchAndSet(FPCGContext& Context, UPCGPointMatchAndSetSettings* InSettings, UPCGPointData* InPointData, UPCGPointData* OutPointData); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF750A2F474(relative to base address)
	};


	// Class PCG.PCGMatchAndSetByAttribute
	// Inherited from UPCGMatchAndSetBase -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UPCGMatchAndSetByAttribute : public UPCGMatchAndSetBase	
	{
	public:
		FName MatchSourceAttribute; // 0x30(0x4)
		EPCGMetadataTypes MatchSourceType; // 0x34(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		EPCGMetadataTypesConstantStructStringMode MatchSourceStringMode; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray<FPCGMatchAndSetByAttributeEntry> Entries; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMatchAndSetByAttribute");
			return ret;
		}
	};


	// Class PCG.PCGMatchAndSetWeighted
	// Inherited from UPCGMatchAndSetBase -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UPCGMatchAndSetWeighted : public UPCGMatchAndSetBase	
	{
	public:
		TArray<FPCGMatchAndSetWeightedEntry> Entries; // 0x30(0x10)
		bool bShouldMutateSeed; // 0x40(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMatchAndSetWeighted");
			return ret;
		}
	};


	// Class PCG.PCGMatchAndSetWeightedByCategory
	// Inherited from UPCGMatchAndSetBase -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UPCGMatchAndSetWeightedByCategory : public UPCGMatchAndSetBase	
	{
	public:
		FName CategoryAttribute; // 0x30(0x4)
		EPCGMetadataTypes CategoryType; // 0x34(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		EPCGMetadataTypesConstantStructStringMode CategoryStringMode; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray<FPCGMatchAndSetWeightedByCategoryEntryList> Categories; // 0x40(0x10)
		bool bShouldMutateSeed; // 0x50(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMatchAndSetWeightedByCategory");
			return ret;
		}
	};


	// Class PCG.PCGMeshSelectorBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGMeshSelectorBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMeshSelectorBase");
			return ret;
		}
	};


	// Class PCG.PCGMeshSelectorByAttribute
	// Inherited from UPCGMeshSelectorBase -> UObject
	// Size: 0x240 (0x268 - 0x28)
	class UPCGMeshSelectorByAttribute : public UPCGMeshSelectorBase	
	{
	public:
		FName AttributeName; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FSoftISMComponentDescriptor TemplateDescriptor; // 0x30(0x220)
		bool bUseAttributeMaterialOverrides; // 0x250(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x251(0x7) UNKNOWN PROPERTY
		TArray<FName> MaterialOverrideAttributes; // 0x258(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMeshSelectorByAttribute");
			return ret;
		}
	};


	// Class PCG.PCGMeshSelectorWeighted
	// Inherited from UPCGMeshSelectorBase -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UPCGMeshSelectorWeighted : public UPCGMeshSelectorBase	
	{
	public:
		TArray<FPCGMeshSelectorWeightedEntry> MeshEntries; // 0x28(0x10)
		bool bUseAttributeMaterialOverrides; // 0x38(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		TArray<FName> MaterialOverrideAttributes; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMeshSelectorWeighted");
			return ret;
		}
	};


	// Class PCG.PCGMeshSelectorWeightedByCategory
	// Inherited from UPCGMeshSelectorBase -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UPCGMeshSelectorWeightedByCategory : public UPCGMeshSelectorBase	
	{
	public:
		FName CategoryAttribute; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray<FPCGWeightedByCategoryEntryList> Entries; // 0x30(0x10)
		bool bUseAttributeMaterialOverrides; // 0x40(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		TArray<FName> MaterialOverrideAttributes; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMeshSelectorWeightedByCategory");
			return ret;
		}
	};


	// Class PCG.PCGMetadata
	// Inherited from UObject
	// Size: 0xE0 (0x108 - 0x28)
	class UPCGMetadata : public UObject	
	{
	public:
		UPCGMetadata* Parent; // 0x28(0x8)
		TSet<TWeakObjectPtr> OtherParents; // 0x30(0x50)
		unsigned char UnknownData00_7[0x88]; // 0x80(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadata");
			return ret;
		}

		void SetPointAttributes(FPCGPoint& Point, UPCGMetadata* MetaData, FPCGPoint& OutPoint); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A330D0(relative to base address)
		void SetAttributesByKey(int64_t Key, UPCGMetadata* InMetaData, int64_t TargetKey, int64_t& OutKey); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A30A70(relative to base address)
		void ResetWeightedAttributesByKey(int64_t TargetKey, int64_t& OutKey); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A304C8(relative to base address)
		void ResetPointWeightedAttributes(FPCGPoint& OutPoint); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A30404(relative to base address)
		bool RenameAttribute(FName AttributeToRename, FName NewAttributeName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A30344(relative to base address)
		void MergePointAttributes(FPCGPoint& PointA, UPCGMetadata* MetadataA, FPCGPoint& PointB, UPCGMetadata* MetadataB, FPCGPoint& TargetPoint, EPCGMetadataOp Op); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A2F9BC(relative to base address)
		void MergeAttributesByKey(int64_t KeyA, UPCGMetadata* MetadataA, int64_t KeyB, UPCGMetadata* MetadataB, int64_t TargetKey, EPCGMetadataOp Op, int64_t& OutKey); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A2F7A4(relative to base address)
		void K2_InitializeAsCopyWithAttributeFilter(UPCGMetadata* InMetadataToCopy, TSet<FName>& InFilteredAttributes, TArray<int64_t>& InOptionalEntriesToCopy, EPCGMetadataFilterMode InFilterMode); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A2F1C8(relative to base address)
		void K2_InitializeAsCopy(UPCGMetadata* InMetadataToCopy, TArray<int64_t>& InOptionalEntriesToCopy); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A2F0CC(relative to base address)
		void InitializeWithAttributeFilter(UPCGMetadata* InParent, TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode, EPCGStringMatchingOperator InMatchOperator); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A2EDB8(relative to base address)
		void Initialize(UPCGMetadata* InParent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A2E8A4(relative to base address)
		bool HasCommonAttributes(UPCGMetadata* InMetaData); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A2E73C(relative to base address)
		bool HasAttribute(FName AttributeName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A2E364(relative to base address)
		int64_t GetItemCountForChild(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A2BE54(relative to base address)
		void GetAttributes(TArray<FName>& AttributeNames, TArray<EPCGMetadataTypes>& AttributeTypes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A2AC80(relative to base address)
		int32_t GetAttributeCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A2AC5C(relative to base address)
		void Flatten(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A2AC00(relative to base address)
		void DeleteAttribute(FName AttributeName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A2AB80(relative to base address)
		UPCGMetadata CreateVectorAttribute(FName AttributeName, FVector DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2A894(relative to base address)
		UPCGMetadata CreateVector4Attribute(FName AttributeName, FVector4 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2A598(relative to base address)
		UPCGMetadata CreateVector2Attribute(FName AttributeName, FVector2D DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2A2B4(relative to base address)
		UPCGMetadata CreateTransformAttribute(FName AttributeName, FTransform DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A29F2C(relative to base address)
		UPCGMetadata CreateStringAttribute(FName AttributeName, FString DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A29DB8(relative to base address)
		UPCGMetadata CreateSoftObjectPathAttribute(FName AttributeName, FSoftObjectPath& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A29B30(relative to base address)
		UPCGMetadata CreateSoftClassPathAttribute(FName AttributeName, FSoftClassPath& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A298A8(relative to base address)
		UPCGMetadata CreateRotatorAttribute(FName AttributeName, FRotator DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A295BC(relative to base address)
		UPCGMetadata CreateQuatAttribute(FName AttributeName, FQuat DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A292D0(relative to base address)
		UPCGMetadata CreateNameAttribute(FName AttributeName, FName DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A29184(relative to base address)
		UPCGMetadata CreateInteger64Attribute(FName AttributeName, int64_t DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A29034(relative to base address)
		UPCGMetadata CreateInteger32Attribute(FName AttributeName, int32_t DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A28EE4(relative to base address)
		UPCGMetadata CreateFloatAttribute(FName AttributeName, float DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A28D94(relative to base address)
		UPCGMetadata CreateDoubleAttribute(FName AttributeName, double DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A28C3C(relative to base address)
		UPCGMetadata CreateBoolAttribute(FName AttributeName, bool DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A28AE4(relative to base address)
		bool CopyExistingAttribute(FName AttributeToCopy, FName NewAttributeName, bool bKeepParent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A28658(relative to base address)
		void CopyAttributes(UPCGMetadata* InOther); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A284B0(relative to base address)
		void CopyAttribute(UPCGMetadata* InOther, FName AttributeToCopy, FName NewAttributeName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A28324(relative to base address)
		void ClearAttribute(FName AttributeToClear); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A282A4(relative to base address)
		int64_t AddEntry(int64_t ParentEntryKey); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A2812C(relative to base address)
		void AddAttributesFiltered(UPCGMetadata* InOther, TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode, EPCGStringMatchingOperator InMatchOperator); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A2798C(relative to base address)
		void AddAttributes(UPCGMetadata* InOther); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A2790C(relative to base address)
		void AddAttribute(UPCGMetadata* InOther, FName AttributeName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A27744(relative to base address)
		void AccumulateWeightedAttributesByKey(int64_t Key, UPCGMetadata* MetaData, float Weight, bool bSetNonInterpolableAttributes, int64_t TargetKey, int64_t& OutKey); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A273B4(relative to base address)
		void AccumulatePointWeightedAttributes(FPCGPoint& InPoint, UPCGMetadata* InMetaData, float Weight, bool bSetNonInterpolableAttributes, FPCGPoint& OutPoint); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A26E70(relative to base address)
	};


	// Class PCG.PCGMetadataAccessorHelpers
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGMetadataAccessorHelpers : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGMetadataAccessorHelpers");
			return ret;
		}

		void SetVectorAttributeByMetadataKey(int64_t& Key, UPCGMetadata* MetaData, FName AttributeName, FVector& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A360D8(relative to base address)
		void SetVectorAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, FVector& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A35DD8(relative to base address)
		void SetVector4AttributeByMetadataKey(int64_t& Key, UPCGMetadata* MetaData, FName AttributeName, FVector4& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A35B90(relative to base address)
		void SetVector4Attribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, FVector4& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A35908(relative to base address)
		void SetVector2AttributeByMetadataKey(int64_t& Key, UPCGMetadata* MetaData, FName AttributeName, FVector2D& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A356D0(relative to base address)
		void SetVector2Attribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, FVector2D& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A3545C(relative to base address)
		void SetTransformAttributeByMetadataKey(int64_t& Key, UPCGMetadata* MetaData, FName AttributeName, FTransform& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A35144(relative to base address)
		void SetTransformAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, FTransform& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A34E10(relative to base address)
		void SetStringAttributeByMetadataKey(int64_t& Key, UPCGMetadata* MetaData, FName AttributeName, FString Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A34B28(relative to base address)
		void SetStringAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, FString Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A347F4(relative to base address)
		void SetSoftObjectPathAttributeByMetadataKey(int64_t& Key, UPCGMetadata* MetaData, FName AttributeName, FSoftObjectPath& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A345A0(relative to base address)
		void SetSoftObjectPathAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, FSoftObjectPath& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A3430C(relative to base address)
		void SetSoftClassPathAttributeByMetadataKey(int64_t& Key, UPCGMetadata* MetaData, FName AttributeName, FSoftClassPath& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A340B8(relative to base address)
		void SetSoftClassPathAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, FSoftClassPath& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A33E24(relative to base address)
		void SetRotatorAttributeByMetadataKey(int64_t& Key, UPCGMetadata* MetaData, FName AttributeName, FRotator& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A33BA8(relative to base address)
		void SetRotatorAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, FRotator& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A338E0(relative to base address)
		void SetQuatAttributeByMetadataKey(int64_t& Key, UPCGMetadata* MetaData, FName AttributeName, FQuat& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A336A8(relative to base address)
		void SetQuatAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, FQuat& Value); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A33434(relative to base address)
		void SetNameAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, FName& Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A32B48(relative to base address)
		void SetInteger64AttributeByMetadataKey(int64_t& Key, UPCGMetadata* MetaData, FName AttributeName, int64_t Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A32870(relative to base address)
		void SetInteger64Attribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, int64_t Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A32548(relative to base address)
		void SetInteger32AttributeByMetadataKey(int64_t& Key, UPCGMetadata* MetaData, FName AttributeName, int32_t Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A32270(relative to base address)
		void SetInteger32Attribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, int32_t Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A31F4C(relative to base address)
		void SetFloatAttributeByMetadataKey(int64_t& Key, UPCGMetadata* MetaData, FName AttributeName, float Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A31C70(relative to base address)
		void SetFloatAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, float Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A31948(relative to base address)
		void SetDoubleAttributeByMetadataKey(int64_t& Key, UPCGMetadata* MetaData, FName AttributeName, double Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A31668(relative to base address)
		void SetDoubleAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, double Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A3133C(relative to base address)
		void SetBoolAttributeByMetadataKey(int64_t& Key, UPCGMetadata* MetaData, FName AttributeName, bool Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A31064(relative to base address)
		void SetBoolAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, bool Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A30D3C(relative to base address)
		bool SetAttributeFromPropertyByMetadataKey(int64_t& Key, UPCGMetadata* MetaData, FName AttributeName, UObject* Object, FName PropertyName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A3059C(relative to base address)
		void InitializeMetadata(FPCGPoint& Point, UPCGMetadata* MetaData, FPCGPoint& ParentPoint, UPCGMetadata* ParentMetadata); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A2E924(relative to base address)
		bool HasAttributeSetByMetadataKey(int64_t Key, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750A2E644(relative to base address)
		bool HasAttributeSet(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A2E3F0(relative to base address)
		FVector GetVectorAttributeByMetadataKey(int64_t Key, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2E258(relative to base address)
		FVector GetVectorAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2DFEC(relative to base address)
		FVector4 GetVector4AttributeByMetadataKey(int64_t Key, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2DEE4(relative to base address)
		FVector4 GetVector4Attribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2DC78(relative to base address)
		FVector2D GetVector2AttributeByMetadataKey(int64_t Key, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2DB78(relative to base address)
		FVector2D GetVector2Attribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2D918(relative to base address)
		FTransform GetTransformAttributeByMetadataKey(int64_t Key, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2D7CC(relative to base address)
		FTransform GetTransformAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2D540(relative to base address)
		FString GetStringAttributeByMetadataKey(int64_t Key, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750A2D430(relative to base address)
		FString GetStringAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A2D1B4(relative to base address)
		FSoftObjectPath GetSoftObjectPathAttributeByMetadataKey(int64_t Key, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2D094(relative to base address)
		FSoftObjectPath GetSoftObjectPathAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2CE18(relative to base address)
		FSoftClassPath GetSoftClassPathAttributeByMetadataKey(int64_t Key, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2CCF8(relative to base address)
		FSoftClassPath GetSoftClassPathAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2CA7C(relative to base address)
		FRotator GetRotatorAttributeByMetadataKey(int64_t Key, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2C970(relative to base address)
		FRotator GetRotatorAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2C704(relative to base address)
		FQuat GetQuatAttributeByMetadataKey(int64_t Key, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2C5FC(relative to base address)
		FQuat GetQuatAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750A2C390(relative to base address)
		FName GetNameAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A2BE78(relative to base address)
		int64_t GetInteger64AttributeByMetadataKey(int64_t Key, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750A2BD5C(relative to base address)
		int64_t GetInteger64Attribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A2BB08(relative to base address)
		int32_t GetInteger32AttributeByMetadataKey(int64_t Key, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750A2BA10(relative to base address)
		int32_t GetInteger32Attribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A2B7BC(relative to base address)
		float GetFloatAttributeByMetadataKey(int64_t Key, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750A2B6C4(relative to base address)
		float GetFloatAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A2B46C(relative to base address)
		double GetDoubleAttributeByMetadataKey(int64_t Key, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750A2B374(relative to base address)
		double GetDoubleAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A2B11C(relative to base address)
		bool GetBoolAttributeByMetadataKey(int64_t Key, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750A2B024(relative to base address)
		bool GetBoolAttribute(FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A2ADD0(relative to base address)
		void CopyPoint(FPCGPoint& InPoint, FPCGPoint& OutPoint, bool bCopyMetadata, UPCGMetadata* InMetaData, UPCGMetadata* OutMetadata); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A28760(relative to base address)
	};


	// Class PCG.PCGComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x230 (0x2D0 - 0xA0)
	class UPCGComponent : public UActorComponent	
	{
	public:
		int32_t Seed; // 0xA0(0x4)
		bool bActivated; // 0xA4(0x1)
		bool bIsComponentPartitioned; // 0xA5(0x1)
		EPCGComponentGenerationTrigger GenerationTrigger; // 0xA6(0x1)
		bool bGenerateOnDropWhenTriggerOnDemand; // 0xA7(0x1)
		bool bOverrideGenerationRadii; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		FPCGRuntimeGenerationRadii GenerationRadii; // 0xB0(0x60)
		UClass* SchedulingPolicyClass; // 0x110(0x8)
		UPCGSchedulingPolicyBase* SchedulingPolicy; // 0x118(0x8)
		FMulticastInlineDelegate OnPCGGraphStartGeneratingExternal; // 0x120(0x10)
		FMulticastInlineDelegate OnPCGGraphCancelledExternal; // 0x130(0x10)
		FMulticastInlineDelegate OnPCGGraphGeneratedExternal; // 0x140(0x10)
		FMulticastInlineDelegate OnPCGGraphCleanedExternal; // 0x150(0x10)
		bool bGenerated; // 0x160(0x1)
		bool bRuntimeGenerated; // 0x161(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x162(0x6) UNKNOWN PROPERTY
		TArray<FName> PostGenerateFunctionNames; // 0x168(0x10)
		UPCGGraphInstance* GraphInstance; // 0x178(0x8)
		uint32_t GenerationGridSize; // 0x180(0x4)
		EPCGEditorDirtyMode CurrentEditingMode; // 0x184(0x1)
		EPCGEditorDirtyMode SerializedEditingMode; // 0x185(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x186(0x1) UNKNOWN PROPERTY
		EPCGComponentInput InputType; // 0x187(0x1)
		bool bParseActorComponents; // 0x188(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x189(0x3) UNKNOWN PROPERTY
		uint32_t RuntimeGridDescriptorHash; // 0x18C(0x4)
		UPCGData* CachedPCGData; // 0x190(0x8)
		UPCGData* CachedInputData; // 0x198(0x8)
		UPCGData* CachedActorData; // 0x1A0(0x8)
		UPCGData* CachedLandscapeData; // 0x1A8(0x8)
		UPCGData* CachedLandscapeHeightData; // 0x1B0(0x8)
		TArray<UPCGManagedResource*> GeneratedResources; // 0x1B8(0x10)
		unsigned char UnknownData04_6[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY
		FBox LastGeneratedBounds; // 0x1D0(0x38)
		FPCGDataCollection GeneratedGraphOutput; // 0x208(0x30)
		TMap<FString, FPCGDataCollection> PerPinGeneratedOutput; // 0x238(0x50)
		unsigned char UnknownData05_6[0x18]; // 0x288(0x18) UNKNOWN PROPERTY
		bool bIsComponentLocal; // 0x2A0(0x1)
		unsigned char UnknownData06_7[0x2F]; // 0x2A1(0x2F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGComponent");
			return ret;
		}

		void SetGraph(UPCGGraphInterface* InGraph); // Flags: Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable, Memory Exec: 0x7FF74DC86EF4(relative to base address)
		void SetEditingMode(EPCGEditorDirtyMode InEditingMode, EPCGEditorDirtyMode InSerializedEditingMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A54720(relative to base address)
		void NotifyPropertiesChangedFromBlueprint(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		EPCGEditorDirtyMode GetSerializedEditingMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A53054(relative to base address)
		FPCGDataCollection GetGeneratedGraphOutput(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A527DC(relative to base address)
		EPCGEditorDirtyMode GetEditingMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D09761C(relative to base address)
		void GenerateLocal(bool bForce); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A52614(relative to base address)
		void Generate(bool bForce); // Flags: Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable, Memory Exec: 0x7FF74CE00C8C(relative to base address)
		AActor ClearPCGLink(UClass* TemplateActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A52454(relative to base address)
		void CleanupLocal(bool bRemoveComponents, bool bSave); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A52398(relative to base address)
		void Cleanup(bool bRemoveComponents, bool bSave); // Flags: Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable, Memory Exec: 0x7FF750A522D0(relative to base address)
		void AddToManagedResources(UPCGManagedResource* InResource); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A51D80(relative to base address)
		void AddComponentsToManagedResources(TArray<UActorComponent*>& InComponents); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A5128C(relative to base address)
		void AddActorsToManagedResources(TArray<AActor*>& InActors); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A511F0(relative to base address)
	};


	// Class PCG.PCGDataFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGDataFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDataFunctionLibrary");
			return ret;
		}

		TArray GetTypedInputsByTag(FPCGDataCollection& InCollection, FString InTag, TArray<FPCGTaggedData>& OutTaggedData, UClass* InDataTypeClass); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A537B4(relative to base address)
		TArray GetTypedInputsByPinLabel(FPCGDataCollection& InCollection, FName InPinLabel, TArray<FPCGTaggedData>& OutTaggedData, UClass* InDataTypeClass); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A53500(relative to base address)
		TArray GetTypedInputsByPin(FPCGDataCollection& InCollection, FPCGPinProperties& InPin, TArray<FPCGTaggedData>& OutTaggedData, UClass* InDataTypeClass); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A53294(relative to base address)
		TArray GetTypedInputs(FPCGDataCollection& InCollection, TArray<FPCGTaggedData>& OutTaggedData, UClass* InDataTypeClass); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A53090(relative to base address)
		TArray GetParamsByTag(FPCGDataCollection& InCollection, FString InTag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A52E9C(relative to base address)
		TArray GetParamsByPinLabel(FPCGDataCollection& InCollection, FName InPinLabel); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A52D00(relative to base address)
		TArray GetParams(FPCGDataCollection& InCollection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A52C38(relative to base address)
		TArray GetInputsByTag(FPCGDataCollection& InCollection, FString InTag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A52A80(relative to base address)
		TArray GetInputsByPinLabel(FPCGDataCollection& InCollection, FName InPinLabel); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A528E4(relative to base address)
		TArray GetInputs(FPCGDataCollection& InCollection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A5281C(relative to base address)
		TArray GetAllSettings(FPCGDataCollection& InCollection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A52694(relative to base address)
		void AddToCollection(FPCGDataCollection& InCollection, UPCGData* InData, FName InPinLabel, TArray<FString> InTags); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A51940(relative to base address)
	};


	// Class PCG.PCGEdge
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UPCGEdge : public UObject	
	{
	public:
		FName InboundLabel; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UPCGNode* InboundNode; // 0x30(0x8)
		FName OutboundLabel; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		UPCGNode* OutboundNode; // 0x40(0x8)
		UPCGPin* InputPin; // 0x48(0x8)
		UPCGPin* OutputPin; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGEdge");
			return ret;
		}
	};


	// Class PCG.PCGGraphInterface
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGGraphInterface : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGraphInterface");
			return ret;
		}

		UPCGGraph GetMutablePCGGraph(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E047ACC(relative to base address)
		UPCGGraph GetConstPCGGraph(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748E00E28(relative to base address)
	};


	// Class PCG.PCGGraph
	// Inherited from UPCGGraphInterface -> UObject
	// Size: 0x108 (0x130 - 0x28)
	class UPCGGraph : public UPCGGraphInterface	
	{
	public:
		bool bLandscapeUsesMetadata; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TArray<UPCGNode*> Nodes; // 0x30(0x10)
		UPCGNode* InputNode; // 0x40(0x8)
		UPCGNode* OutputNode; // 0x48(0x8)
		FInstancedPropertyBag UserParameters; // 0x50(0x10)
		bool bUseHierarchicalGeneration; // 0x60(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x61(0x3) UNKNOWN PROPERTY
		EPCGHiGenGrid HiGenGridSize; // 0x64(0x4)
		bool bUse2DGrid; // 0x68(0x1)
		unsigned char UnknownData02_6[0x5F]; // 0x69(0x5F) UNKNOWN PROPERTY
		bool bIsEditorOnly; // 0xC8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
		FPCGRuntimeGenerationRadii GenerationRadii; // 0xD0(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGraph");
			return ret;
		}

		void RemoveNodes(TArray<UPCGNode*>& InNodes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A54468(relative to base address)
		void RemoveNode(UPCGNode* InNode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A543E8(relative to base address)
		bool RemoveEdge(UPCGNode* From, FName& FromLabel, UPCGNode* To, FName& ToLabel); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A54164(relative to base address)
		UPCGNode GetOutputNode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F67B48C(relative to base address)
		UPCGNode GetInputNode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFB98(relative to base address)
		UPCGNode AddNodeOfType(UClass* InSettingsClass, UPCGSettings* DefaultNodeSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A517DC(relative to base address)
		UPCGNode AddNodeInstance(UPCGSettings* InSettings); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750A516F4(relative to base address)
		UPCGNode AddNodeCopy(UPCGSettings* InSettings, UPCGSettings* DefaultNodeSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A515AC(relative to base address)
		UPCGNode AddEdge(UPCGNode* From, FName& FromPinLabel, UPCGNode* To, FName& ToPinLabel); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A51328(relative to base address)
	};


	// Class PCG.PCGGraphInstance
	// Inherited from UPCGGraphInterface -> UObject
	// Size: 0x68 (0x90 - 0x28)
	class UPCGGraphInstance : public UPCGGraphInterface	
	{
	public:
		UPCGGraphInterface* Graph; // 0x28(0x8)
		FPCGOverrideInstancedPropertyBag ParametersOverrides; // 0x30(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGraphInstance");
			return ret;
		}
	};


	// Class PCG.PCGGraphInputOutputSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x78 (0x120 - 0xA8)
	class UPCGGraphInputOutputSettings : public UPCGSettings	
	{
	public:
		TArray<FPCGPinProperties> Pins; // 0xA8(0x10)
		TSet<FName> PinLabels; // 0xB8(0x50)
		TArray<FPCGPinProperties> CustomPins; // 0x108(0x10)
		bool bHasAddedDefaultPin; // 0x118(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x119(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGraphInputOutputSettings");
			return ret;
		}
	};


	// Class PCG.PCGManagedActors
	// Inherited from UPCGManagedResource -> UObject
	// Size: 0x50 (0x88 - 0x38)
	class UPCGManagedActors : public UPCGManagedResource	
	{
	public:
		TSet<TWeakObjectPtr> GeneratedActors; // 0x38(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGManagedActors");
			return ret;
		}
	};


	// Class PCG.PCGManagedComponentList
	// Inherited from UPCGManagedComponentBase -> UPCGManagedResource -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UPCGManagedComponentList : public UPCGManagedComponentBase	
	{
	public:
		TArray<TWeakObjectPtr> GeneratedComponents; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGManagedComponentList");
			return ret;
		}

		void SetGeneratedComponentsFromBP(TArray<TWeakObjectPtr>& InGeneratedComponent); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A548E4(relative to base address)
	};


	// Class PCG.PCGManagedComponentDefaultList
	// Inherited from UPCGManagedComponentList -> UPCGManagedComponentBase -> UPCGManagedResource -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UPCGManagedComponentDefaultList : public UPCGManagedComponentList	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGManagedComponentDefaultList");
			return ret;
		}
	};


	// Class PCG.PCGManagedISMComponent
	// Inherited from UPCGManagedComponent -> UPCGManagedComponentBase -> UPCGManagedResource -> UObject
	// Size: 0x228 (0x280 - 0x58)
	class UPCGManagedISMComponent : public UPCGManagedComponent	
	{
	public:
		bool bHasDescriptor; // 0x58(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
		FISMComponentDescriptor Descriptor; // 0x60(0x1F0)
		bool bHasRootLocation; // 0x250(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x251(0x7) UNKNOWN PROPERTY
		FVector RootLocation; // 0x258(0x18)
		uint64_t SettingsUID; // 0x270(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x278(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGManagedISMComponent");
			return ret;
		}
	};


	// Class PCG.PCGManagedSplineMeshComponent
	// Inherited from UPCGManagedComponent -> UPCGManagedComponentBase -> UPCGManagedResource -> UObject
	// Size: 0x2C0 (0x318 - 0x58)
	class UPCGManagedSplineMeshComponent : public UPCGManagedComponent	
	{
	public:
		FSplineMeshComponentDescriptor Descriptor; // 0x58(0x1E8)
		FPCGSplineMeshParams SplineMeshParams; // 0x240(0xC8)
		uint64_t SettingsUID; // 0x308(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x310(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGManagedSplineMeshComponent");
			return ret;
		}
	};


	// Class PCG.PCGParamData
	// Inherited from UPCGData -> UObject
	// Size: 0x88 (0xC0 - 0x38)
	class UPCGParamData : public UPCGData	
	{
	public:
		UPCGMetadata* MetaData; // 0x38(0x8)
		TMap<FName, int64_t> NameMap; // 0x40(0x50)
		bool bHasCachedLastSelector; // 0x90(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector CachedLastSelector; // 0x98(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGParamData");
			return ret;
		}

		UPCGMetadata MutableMetadata(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C45C358(relative to base address)
		UPCGParamData K2_FilterParamsByName(FName& InName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A53EC8(relative to base address)
		UPCGParamData K2_FilterParamsByKey(int64_t InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A53E2C(relative to base address)
		int64_t FindOrAddMetadataKey(FName& InName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A5257C(relative to base address)
		int64_t FindMetadataKey(FName& InName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A524E4(relative to base address)
		UPCGMetadata ConstMetadata(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507FC9D4(relative to base address)
	};


	// Class PCG.PCGBlueprintPinHelpers
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGBlueprintPinHelpers : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGBlueprintPinHelpers");
			return ret;
		}

		FPCGPinProperties MakePinProperty(FName Label, bool bAllowMultipleData, bool bAllowMultipleConnections, bool bIsAdvancedPin, EPCGExclusiveDataType AllowedType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750A53FA0(relative to base address)
		bool IsOfType(int32_t AllowedTypes, EPCGExclusiveDataType TypeToCheck); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750A53C98(relative to base address)
		bool IsExactlySameType(int32_t AllowedTypes, EPCGExclusiveDataType TypeToCheck); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750A53B3C(relative to base address)
		int32_t GetCorrespondingDataType(EPCGExclusiveDataType InExclusiveDataType); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750A5275C(relative to base address)
		void BreakPinProperty(FPCGPinProperties& PinProperty, FName& Label, bool& bAllowMultipleData, bool& bAllowMultipleConnections, bool& bIsAdvancedPin, EPCGExclusiveDataType& AllowedType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750A51FE0(relative to base address)
	};


	// Class PCG.PCGPin
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UPCGPin : public UObject	
	{
	public:
		UPCGNode* Node; // 0x28(0x8)
		FName Label; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray<UPCGEdge*> Edges; // 0x38(0x10)
		FPCGPinProperties Properties; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGPin");
			return ret;
		}

		void SetToolTip(FText& InTooltip); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F3E63AC(relative to base address)
		bool IsOutputPin(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A53D5C(relative to base address)
		bool IsConnected(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750A53B18(relative to base address)
		FText GetTooltip(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FC5A540(relative to base address)
	};


	// Class PCG.PCGPinPropertiesBlueprintHelpers
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGPinPropertiesBlueprintHelpers : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGPinPropertiesBlueprintHelpers");
			return ret;
		}

		void SetRequiredPin(FPCGPinProperties& PinProperties); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A54A04(relative to base address)
		void SetNormalPin(FPCGPinProperties& PinProperties); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A5497C(relative to base address)
		void SetAllowMultipleConnections(FPCGPinProperties& PinProperties, bool bAllowMultipleConnections); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A545B0(relative to base address)
		void SetAdvancedPin(FPCGPinProperties& PinProperties); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A54524(relative to base address)
		bool IsRequiredPin(FPCGPinProperties& PinProperties); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A53D90(relative to base address)
		bool IsNormalPin(FPCGPinProperties& PinProperties); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A53C00(relative to base address)
		bool IsAdvancedPin(FPCGPinProperties& PinProperties); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A53A7C(relative to base address)
		bool AllowsMultipleConnections(FPCGPinProperties& PinProperties); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750A51E9C(relative to base address)
	};


	// Class PCG.PCGSettingsInstance
	// Inherited from UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0x48 - 0x40)
	class UPCGSettingsInstance : public UPCGSettingsInterface	
	{
	public:
		UPCGSettings* Settings; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSettingsInstance");
			return ret;
		}
	};


	// Class PCG.PCGTrivialSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGTrivialSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGTrivialSettings");
			return ret;
		}
	};


	// Class PCG.PCGSubgraphNode
	// Inherited from UPCGBaseSubgraphNode -> UPCGNode -> UObject
	// Size: 0x0 (0x88 - 0x88)
	class UPCGSubgraphNode : public UPCGBaseSubgraphNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSubgraphNode");
			return ret;
		}
	};


	// Class PCG.PCGSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x320 (0x360 - 0x40)
	class UPCGSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x320]; // 0x40(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSubsystem");
			return ret;
		}
	};


	// Class PCG.PCGVolume
	// Inherited from AVolume -> ABrush -> AActor -> UObject
	// Size: 0x8 (0x2D0 - 0x2C8)
	class APCGVolume : public AVolume	
	{
	public:
		UPCGComponent* PCGComponent; // 0x2C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGVolume");
			return ret;
		}
	};


	// Class PCG.PCGWorldActor
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class APCGWorldActor : public AActor	
	{
	public:
		uint32_t PartitionGridSize; // 0x290(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		UPCGLandscapeCache* LandscapeCacheObject; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGWorldActor");
			return ret;
		}
	};


	// Class PCG.PCGGenSourceComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UPCGGenSourceComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGenSourceComponent");
			return ret;
		}
	};


	// Class PCG.PCGGenSourceEditorCamera
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UPCGGenSourceEditorCamera : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGenSourceEditorCamera");
			return ret;
		}
	};


	// Class PCG.PCGGenSourcePlayer
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPCGGenSourcePlayer : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGenSourcePlayer");
			return ret;
		}
	};


	// Class PCG.PCGGenSourceWPStreamingSource
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPCGGenSourceWPStreamingSource : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGGenSourceWPStreamingSource");
			return ret;
		}
	};


	// Class PCG.PCGSchedulingPolicyDistanceAndDirection
	// Inherited from UPCGSchedulingPolicyBase -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPCGSchedulingPolicyDistanceAndDirection : public UPCGSchedulingPolicyBase	
	{
	public:
		bool bUseDistance; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float DistanceWeight; // 0x2C(0x4)
		bool bUseDirection; // 0x30(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float DirectionWeight; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGSchedulingPolicyDistanceAndDirection");
			return ret;
		}
	};


	// Class PCG.PCGDeterminismTestBlueprintBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGDeterminismTestBlueprintBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PCG.PCGDeterminismTestBlueprintBase");
			return ret;
		}

		void ExecuteTest(UPCGNode* InPCGNode, FDeterminismTestResult& InOutTestResult); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF750A61410(relative to base address)
	};

}
