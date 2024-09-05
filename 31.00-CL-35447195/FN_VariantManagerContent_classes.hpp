#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VariantManagerContent
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VariantManagerContent.LevelVariantSets
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class ULevelVariantSets : public UObject	
	{
	public:
		UBlueprintGeneratedClass DirectorClass; // 0x28(0x8)
		TArray VariantSets; // 0x30(0x10)
		unsigned char UnknownData01_7[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.LevelVariantSets");
			return ret;
		}

		UVariantSet GetVariantSetByName(FString VariantSetName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EC7B60
		UVariantSet GetVariantSet(int32_t VariantSetIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EC7A80
		int32_t GetNumVariantSets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EC79A0
	};


	// Class VariantManagerContent.LevelVariantSetsActor
	// Inherited from AActor -> UObject
	// Size: 0x68 (0x2F8 - 0x290)
	class ALevelVariantSetsActor : public AActor	
	{
	public:
		FSoftObjectPath LevelVariantSets; // 0x290(0x18)
		TMap DirectorInstances; // 0x2A8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.LevelVariantSetsActor");
			return ret;
		}

		bool SwitchOnVariantByName(FString VariantSetName, FString VariantName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC7EE0
		bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC7E00
		void SetLevelVariantSets(ULevelVariantSets InVariantSets); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC7D20
		ULevelVariantSets GetLevelVariantSets(bool bLoad); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC7C40
	};


	// Class VariantManagerContent.LevelVariantSetsFunctionDirector
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class ULevelVariantSetsFunctionDirector : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.LevelVariantSetsFunctionDirector");
			return ret;
		}
	};


	// Class VariantManagerContent.PropertyValue
	// Inherited from UObject
	// Size: 0x180 (0x1A8 - 0x28)
	class UPropertyValue : public UObject	
	{
	public:
		unsigned char UnknownData05_3[0x60]; // 0x28(0x60) UNKNOWN PROPERTY
		TArray Properties; // 0x88(0x10)
		TArray PropertyIndices; // 0x98(0x10)
		TArray CapturedPropSegments; // 0xA8(0x10)
		FString FullDisplayString; // 0xB8(0x10)
		FName PropertySetterName; // 0xC8(0x4)
		unsigned char UnknownData06_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		TMap PropertySetterParameterDefaults; // 0xD0(0x50)
		bool bHasRecordedData; // 0x120(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x121(0x7) UNKNOWN PROPERTY
		UClass LeafPropertyClass; // 0x128(0x8)
		unsigned char UnknownData08_6[0x8]; // 0x130(0x8) UNKNOWN PROPERTY
		TArray ValueBytes; // 0x138(0x10)
		EPropertyValueCategory PropCategory; // 0x148(0x1)
		unsigned char UnknownData09_7[0x5F]; // 0x149(0x5F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.PropertyValue");
			return ret;
		}

		bool HasRecordedData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC8180
		FText GetPropertyTooltip(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC80A0
		FString GetFullDisplayString(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC7FC0
	};


	// Class VariantManagerContent.PropertyValueTransform
	// Inherited from UPropertyValue -> UObject
	// Size: 0x0 (0x1A8 - 0x1A8)
	class UPropertyValueTransform : public UPropertyValue	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.PropertyValueTransform");
			return ret;
		}
	};


	// Class VariantManagerContent.PropertyValueVisibility
	// Inherited from UPropertyValue -> UObject
	// Size: 0x0 (0x1A8 - 0x1A8)
	class UPropertyValueVisibility : public UPropertyValue	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.PropertyValueVisibility");
			return ret;
		}
	};


	// Class VariantManagerContent.PropertyValueColor
	// Inherited from UPropertyValue -> UObject
	// Size: 0x0 (0x1A8 - 0x1A8)
	class UPropertyValueColor : public UPropertyValue	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.PropertyValueColor");
			return ret;
		}
	};


	// Class VariantManagerContent.PropertyValueMaterial
	// Inherited from UPropertyValue -> UObject
	// Size: 0x0 (0x1A8 - 0x1A8)
	class UPropertyValueMaterial : public UPropertyValue	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.PropertyValueMaterial");
			return ret;
		}
	};


	// Class VariantManagerContent.PropertyValueOption
	// Inherited from UPropertyValue -> UObject
	// Size: 0x0 (0x1A8 - 0x1A8)
	class UPropertyValueOption : public UPropertyValue	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.PropertyValueOption");
			return ret;
		}
	};


	// Class VariantManagerContent.PropertyValueSoftObject
	// Inherited from UPropertyValue -> UObject
	// Size: 0x0 (0x1A8 - 0x1A8)
	class UPropertyValueSoftObject : public UPropertyValue	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.PropertyValueSoftObject");
			return ret;
		}
	};


	// Class VariantManagerContent.SwitchActor
	// Inherited from AActor -> UObject
	// Size: 0x28 (0x2B8 - 0x290)
	class ASwitchActor : public AActor	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x290(0x18) UNKNOWN PROPERTY
		USceneComponent SceneComponent; // 0x2A8(0x8)
		int32_t LastSelectedOption; // 0x2B0(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x2B4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.SwitchActor");
			return ret;
		}

		void SelectOption(int32_t OptionIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC8420
		int32_t GetSelectedOption(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC8340
		TArray GetOptions(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC8260
	};


	// Class VariantManagerContent.Variant
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UVariant : public UObject	
	{
	public:
		TArray Dependencies; // 0x28(0x10)
		FText DisplayText; // 0x38(0x10)
		unsigned char UnknownData01_6[0x10]; // 0x48(0x10) UNKNOWN PROPERTY
		TArray ObjectBindings; // 0x58(0x10)
		UTexture2D Thumbnail; // 0x68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.Variant");
			return ret;
		}

		void SwitchOn(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC93E0
		void SetThumbnailFromTexture(UTexture2D NewThumbnail); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC9300
		void SetThumbnailFromFile(FString FilePath); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC9220
		void SetThumbnailFromEditorViewport(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC9140
		void SetThumbnailFromCamera(UObject WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EC9060
		void SetDisplayText(FText& NewDisplayText); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EC8F80
		void SetDependency(int32_t Index, FVariantDependency& Dependency); // Flags: Final|Native|Public|HasOutParms 0x7FF414EC8EA0
		bool IsActive(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC8DC0
		UTexture2D GetThumbnail(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC8CE0
		UVariantSet GetParent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EC8C00
		int32_t GetNumDependencies(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EC8B20
		int32_t GetNumActors(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EC8A40
		FText GetDisplayText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC8960
		TArray GetDependents(ULevelVariantSets LevelVariantSets, bool bOnlyEnabledDependencies); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC8880
		FVariantDependency GetDependency(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EC87A0
		AActor GetActor(int32_t ActorIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EC86C0
		void DeleteDependency(int32_t Index); // Flags: Final|Native|Public 0x7FF414EC85E0
		int32_t AddDependency(FVariantDependency& Dependency); // Flags: Final|Native|Public|HasOutParms 0x7FF414EC8500
	};


	// Class VariantManagerContent.VariantObjectBinding
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UVariantObjectBinding : public UObject	
	{
	public:
		FString CachedActorLabel; // 0x28(0x10)
		FSoftObjectPath ObjectPtr; // 0x38(0x18)
		TLazyObjectPtr LazyObjectPtr; // 0x50(0x18)
		TArray CapturedProperties; // 0x68(0x10)
		TArray FunctionCallers; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.VariantObjectBinding");
			return ret;
		}
	};


	// Class VariantManagerContent.VariantSet
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UVariantSet : public UObject	
	{
	public:
		FText DisplayText; // 0x28(0x10)
		unsigned char UnknownData02_6[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
		bool bExpanded; // 0x48(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		TArray Variants; // 0x50(0x10)
		UTexture2D Thumbnail; // 0x60(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.VariantSet");
			return ret;
		}

		void SetThumbnailFromTexture(UTexture2D NewThumbnail); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC9D80
		void SetThumbnailFromFile(FString FilePath); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC9CA0
		void SetThumbnailFromEditorViewport(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC9BC0
		void SetThumbnailFromCamera(UObject WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EC9AE0
		void SetDisplayText(FText& NewDisplayText); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EC9A00
		UVariant GetVariantByName(FString VariantName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EC9920
		UVariant GetVariant(int32_t VariantIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EC9840
		UTexture2D GetThumbnail(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC9760
		ULevelVariantSets GetParent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EC9680
		int32_t GetNumVariants(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC95A0
		FText GetDisplayText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC94C0
	};

}
