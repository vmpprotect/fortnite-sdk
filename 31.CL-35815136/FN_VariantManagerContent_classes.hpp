#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VariantManagerContent
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VariantManagerContent.LevelVariantSets
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class ULevelVariantSets : public UObject	
	{
	public:
		UBlueprintGeneratedClass* DirectorClass; // 0x28(0x8)
		TArray<UVariantSet*> VariantSets; // 0x30(0x10)
		unsigned char UnknownData00_7[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.LevelVariantSets");
			return ret;
		}

		UVariantSet GetVariantSetByName(FString VariantSetName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF752204AF8(relative to base address)
		UVariantSet GetVariantSet(int32_t VariantSetIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF752204A58(relative to base address)
		int32_t GetNumVariantSets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C5D1804(relative to base address)
	};


	// Class VariantManagerContent.LevelVariantSetsActor
	// Inherited from AActor -> UObject
	// Size: 0x68 (0x2F8 - 0x290)
	class ALevelVariantSetsActor : public AActor	
	{
	public:
		FSoftObjectPath LevelVariantSets; // 0x290(0x18)
		TMap<UBlueprintGeneratedClass*, ULevelVariantSetsFunctionDirector*> DirectorInstances; // 0x2A8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.LevelVariantSetsActor");
			return ret;
		}

		bool SwitchOnVariantByName(FString VariantSetName, FString VariantName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752205900(relative to base address)
		bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522057F8(relative to base address)
		void SetLevelVariantSets(ULevelVariantSets* InVariantSets); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752204F14(relative to base address)
		ULevelVariantSets GetLevelVariantSets(bool bLoad); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752204774(relative to base address)
	};


	// Class VariantManagerContent.LevelVariantSetsFunctionDirector
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class ULevelVariantSetsFunctionDirector : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x60]; // 0x28(0x60) UNKNOWN PROPERTY
		TArray<Properties> Properties; // 0x88(0x10)
		TArray<int32_t> PropertyIndices; // 0x98(0x10)
		TArray<FCapturedPropSegment> CapturedPropSegments; // 0xA8(0x10)
		FString FullDisplayString; // 0xB8(0x10)
		FName PropertySetterName; // 0xC8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		TMap<FString, FString> PropertySetterParameterDefaults; // 0xD0(0x50)
		bool bHasRecordedData; // 0x120(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x121(0x7) UNKNOWN PROPERTY
		UClass* LeafPropertyClass; // 0x128(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x130(0x8) UNKNOWN PROPERTY
		TArray<char> ValueBytes; // 0x138(0x10)
		EPropertyValueCategory PropCategory; // 0x148(0x1)
		unsigned char UnknownData04_7[0x5F]; // 0x149(0x5F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.PropertyValue");
			return ret;
		}

		bool HasRecordedData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DE15548(relative to base address)
		FText GetPropertyTooltip(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75220488C(relative to base address)
		FString GetFullDisplayString(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752204758(relative to base address)
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
		unsigned char UnknownData00_3[0x18]; // 0x290(0x18) UNKNOWN PROPERTY
		USceneComponent* SceneComponent; // 0x2A8(0x8)
		int32_t LastSelectedOption; // 0x2B0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2B4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.SwitchActor");
			return ret;
		}

		void SelectOption(int32_t OptionIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752204C74(relative to base address)
		int32_t GetSelectedOption(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EC991B8(relative to base address)
		TArray GetOptions(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752204804(relative to base address)
	};


	// Class VariantManagerContent.Variant
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UVariant : public UObject	
	{
	public:
		TArray<FVariantDependency> Dependencies; // 0x28(0x10)
		FText DisplayText; // 0x38(0x10)
		unsigned char UnknownData00_6[0x10]; // 0x48(0x10) UNKNOWN PROPERTY
		TArray<UVariantObjectBinding*> ObjectBindings; // 0x58(0x10)
		UTexture2D* Thumbnail; // 0x68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.Variant");
			return ret;
		}

		void SwitchOn(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522057E4(relative to base address)
		void SetThumbnailFromTexture(UTexture2D* NewThumbnail); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522056CC(relative to base address)
		void SetThumbnailFromFile(FString FilePath); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75220553C(relative to base address)
		void SetThumbnailFromEditorViewport(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SetThumbnailFromCamera(UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF752204F94(relative to base address)
		void SetDisplayText(FText& NewDisplayText); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752204DDC(relative to base address)
		void SetDependency(int32_t Index, FVariantDependency& Dependency); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF752204CF4(relative to base address)
		bool IsActive(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752204BE4(relative to base address)
		UTexture2D GetThumbnail(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3166C8(relative to base address)
		UVariantSet GetParent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF752204844(relative to base address)
		int32_t GetNumDependencies(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C3345F8(relative to base address)
		int32_t GetNumActors(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D6D398C(relative to base address)
		FText GetDisplayText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522046E0(relative to base address)
		TArray GetDependents(ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522044C4(relative to base address)
		FVariantDependency GetDependency(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75220442C(relative to base address)
		AActor GetActor(int32_t ActorIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF752204378(relative to base address)
		void DeleteDependency(int32_t Index); // Flags: Final|Native|Public, Memory Exec: 0x7FF7522042F8(relative to base address)
		int32_t AddDependency(FVariantDependency& Dependency); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF75220424C(relative to base address)
	};


	// Class VariantManagerContent.VariantObjectBinding
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UVariantObjectBinding : public UObject	
	{
	public:
		FString CachedActorLabel; // 0x28(0x10)
		FSoftObjectPath ObjectPtr; // 0x38(0x18)
		TLazyObjectPtr<UObject*> LazyObjectPtr; // 0x50(0x18)
		TArray<UPropertyValue*> CapturedProperties; // 0x68(0x10)
		TArray<FFunctionCaller> FunctionCallers; // 0x78(0x10)

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
		unsigned char UnknownData00_6[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
		bool bExpanded; // 0x48(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		TArray<UVariant*> Variants; // 0x50(0x10)
		UTexture2D* Thumbnail; // 0x60(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VariantManagerContent.VariantSet");
			return ret;
		}

		void SetThumbnailFromTexture(UTexture2D* NewThumbnail); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752205758(relative to base address)
		void SetThumbnailFromFile(FString FilePath); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752205604(relative to base address)
		void SetThumbnailFromEditorViewport(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SetThumbnailFromCamera(UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF752205268(relative to base address)
		void SetDisplayText(FText& NewDisplayText); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752204E78(relative to base address)
		UVariant GetVariantByName(FString VariantName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75220496C(relative to base address)
		UVariant GetVariant(int32_t VariantIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7522048CC(relative to base address)
		UTexture2D GetThumbnail(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F97D11C(relative to base address)
		ULevelVariantSets GetParent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF752204868(relative to base address)
		int32_t GetNumVariants(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1D04(relative to base address)
		FText GetDisplayText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75220471C(relative to base address)
	};

}
