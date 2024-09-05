#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CustomizableObject
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CustomizableObject.CustomizableObjectExtension
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCustomizableObjectExtension : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectExtension");
			return ret;
		}
	};


	// Class CustomizableObject.CustomizableObjectInstanceUserData
	// Inherited from UAssetUserData -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UCustomizableObjectInstanceUserData : public UAssetUserData	
	{
	public:
		FGameplayTagContainer AnimationGameplayTag; // 0x28(0x20)
		TArray<FCustomizableObjectAnimationSlot> AnimationSlots; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectInstanceUserData");
			return ret;
		}

		void SetAnimationGameplayTags(FGameplayTagContainer& InstanceTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D023E24(relative to base address)
		FGameplayTagContainer GetAnimationGameplayTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D023E08(relative to base address)
	};


	// Class CustomizableObject.CustomizableInstancePrivate
	// Inherited from UObject
	// Size: 0x398 (0x3C0 - 0x28)
	class UCustomizableInstancePrivate : public UObject	
	{
	public:
		TArray<USkeletalMesh*> SkeletalMeshes; // 0x28(0x10)
		TArray<FGeneratedMaterial> GeneratedMaterials; // 0x38(0x10)
		TArray<FGeneratedTexture> GeneratedTextures; // 0x48(0x10)
		unsigned char UnknownData00_6[0x10]; // 0x58(0x10) UNKNOWN PROPERTY
		TMap<FString, TWeakObjectPtr> TextureReuseCache; // 0x68(0x50)
		unsigned char UnknownData01_6[0x40]; // 0xB8(0x40) UNKNOWN PROPERTY
		TArray<FCustomizableInstanceComponentData> ComponentsData; // 0xF8(0x10)
		TArray<UMaterialInterface*> ReferencedMaterials; // 0x108(0x10)
		unsigned char UnknownData02_6[0x60]; // 0x118(0x60) UNKNOWN PROPERTY
		TArray<UPhysicsAsset*> ClothingPhysicsAssets; // 0x178(0x10)
		TArray<UClass*> GatheredAnimBPs; // 0x188(0x10)
		FGameplayTagContainer AnimBPGameplayTags; // 0x198(0x20)
		TMap<UClass*, FAnimBpGeneratedPhysicsAssets> AnimBpPhysicsAssets; // 0x1B8(0x50)
		TArray<FExtensionInstanceData> ExtensionInstanceData; // 0x208(0x10)
		unsigned char UnknownData03_6[0x20]; // 0x218(0x20) UNKNOWN PROPERTY
		TArray<UTexture*> LoadedPassThroughTexturesPendingSetMaterial; // 0x238(0x10)
		TArray<UStreamableRenderAsset*> LoadedPassThroughMeshesPendingSetMaterial; // 0x248(0x10)
		unsigned char UnknownData04_6[0x8]; // 0x258(0x8) UNKNOWN PROPERTY
		FCustomizableObjectInstanceDescriptor CommittedDescriptor; // 0x260(0xD8)
		unsigned char UnknownData05_7[0x88]; // 0x338(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableInstancePrivate");
			return ret;
		}
	};


	// Class CustomizableObject.CustomizableObjectInstanceUsage
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UCustomizableObjectInstanceUsage : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		float SkippedLastRenderTime; // 0x30(0x4)
		unsigned char UnknownData01_6[0x14]; // 0x34(0x14) UNKNOWN PROPERTY
		UCustomizableSkeletalComponent* CustomizableSkeletalComponent; // 0x48(0x8)
		TWeakObjectPtr<USkeletalMeshComponent*> UsedSkeletalMeshComponent; // 0x50(0x8)
		UCustomizableObjectInstance* UsedCustomizableObjectInstance; // 0x58(0x8)
		int32_t UsedComponentIndex; // 0x60(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectInstanceUsage");
			return ret;
		}

		void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D023F5C(relative to base address)
		void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D023EE0(relative to base address)
	};


	// Class CustomizableObject.CustomizableObjectPrivate
	// Inherited from UObject
	// Size: 0x818 (0x840 - 0x28)
	class UCustomizableObjectPrivate : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		FModelResources ModelResources; // 0x38(0x370)
		unsigned char UnknownData01_6[0xC8]; // 0x3A8(0xC8) UNKNOWN PROPERTY
		TArray<FMutableModelParameterProperties> ParameterProperties; // 0x470(0x10)
		FModelResources References; // 0x480(0x370)
		unsigned char UnknownData02_7[0x50]; // 0x7F0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectPrivate");
			return ret;
		}
	};


	// Class CustomizableObject.CustomizableObjectResourceDataContainer
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UCustomizableObjectResourceDataContainer : public UObject	
	{
	public:
		FCustomizableObjectResourceData Data; // 0x28(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectResourceDataContainer");
			return ret;
		}
	};


	// Class CustomizableObject.CustomizableObjectSettings
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCustomizableObjectSettings : public UObject	
	{
	public:
		bool bEnableStreamingManager; // 0x28(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectSettings");
			return ret;
		}
	};


	// Class CustomizableObject.CustomizableObjectSkeletalMesh
	// Inherited from USkeletalMesh -> USkinnedAsset -> UStreamableRenderAsset -> UObject
	// Size: 0x50 (0x578 - 0x528)
	class UCustomizableObjectSkeletalMesh : public USkeletalMesh	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x528(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectSkeletalMesh");
			return ret;
		}
	};


	// Class CustomizableObject.CustomizableObjectSystemPrivate
	// Inherited from UObject
	// Size: 0x5C8 (0x5F0 - 0x28)
	class UCustomizableObjectSystemPrivate : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x1D0]; // 0x28(0x1D0) UNKNOWN PROPERTY
		UCustomizableObjectInstance* CurrentInstanceBeingUpdated; // 0x1F8(0x8)
		unsigned char UnknownData01_6[0x2D0]; // 0x200(0x2D0) UNKNOWN PROPERTY
		TArray<FPendingReleaseSkeletalMeshInfo> PendingReleaseSkeletalMesh; // 0x4D0(0x10)
		UCustomizableInstanceLODManagementBase* DefaultInstanceLODManagement; // 0x4E0(0x8)
		UCustomizableInstanceLODManagementBase* CurrentInstanceLODManagement; // 0x4E8(0x8)
		TArray<UTexture2D*> ProtectedCachedTextures; // 0x4F0(0x10)
		unsigned char UnknownData02_7[0xF0]; // 0x500(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectSystemPrivate");
			return ret;
		}
	};


	// Class CustomizableObject.CustomizableSkeletalComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x250 - 0x220)
	class UCustomizableSkeletalComponent : public USceneComponent	
	{
	public:
		UCustomizableObjectInstance* CustomizableObjectInstance; // 0x220(0x8)
		int32_t ComponentIndex; // 0x228(0x4)
		unsigned char UnknownData00_6[0x14]; // 0x22C(0x14) UNKNOWN PROPERTY
		UCustomizableObjectInstanceUsage* CustomizableObjectInstanceUsage; // 0x240(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x248(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableSkeletalComponent");
			return ret;
		}

		void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D038FB8(relative to base address)
		void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D038E20(relative to base address)
	};


	// Class CustomizableObject.CustomizableSystemImageProvider
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCustomizableSystemImageProvider : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableSystemImageProvider");
			return ret;
		}
	};


	// Class CustomizableObject.EditorImageProvider
	// Inherited from UCustomizableSystemImageProvider -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEditorImageProvider : public UCustomizableSystemImageProvider	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.EditorImageProvider");
			return ret;
		}
	};


	// Class CustomizableObject.CustomizableInstanceLODManagementBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCustomizableInstanceLODManagementBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableInstanceLODManagementBase");
			return ret;
		}
	};


	// Class CustomizableObject.CustomizableInstanceLODManagement
	// Inherited from UCustomizableInstanceLODManagementBase -> UObject
	// Size: 0x58 (0x80 - 0x28)
	class UCustomizableInstanceLODManagement : public UCustomizableInstanceLODManagementBase	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0x28(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableInstanceLODManagement");
			return ret;
		}
	};


	// Class CustomizableObject.CustomizableObjectBulk
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UCustomizableObjectBulk : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectBulk");
			return ret;
		}
	};


	// Class CustomizableObject.CustomizableObject
	// Inherited from UObject
	// Size: 0x138 (0x160 - 0x28)
	class UCustomizableObject : public UObject	
	{
	public:
		FMutableLODSettings LODSettings; // 0x28(0x70)
		TArray<FCustomizableObjectResourceData> AlwaysLoadedExtensionData; // 0x98(0x10)
		TArray<FCustomizableObjectStreamedResourceData> StreamedExtensionData; // 0xA8(0x10)
		TArray<FCustomizableObjectStreamedResourceData> StreamedResourceData; // 0xB8(0x10)
		bool bEnableUseRefSkeletalMeshAsPlaceholder; // 0xC8(0x1)
		bool bPreserveUserLODsOnFirstGeneration; // 0xC9(0x1)
		bool bEnableMeshCache; // 0xCA(0x1)
		bool bEnableMeshStreaming; // 0xCB(0x1)
		unsigned char UnknownData00_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		TArray<FName> LowPriorityTextures; // 0xD0(0x10)
		TArray<FString> CustomizableObjectClassTags; // 0xE0(0x10)
		TArray<FString> PopulationClassTags; // 0xF0(0x10)
		TMap<FString, FParameterTags> CustomizableObjectParametersTags; // 0x100(0x50)
		UCustomizableObjectBulk* BulkData; // 0x150(0x8)
		UCustomizableObjectPrivate* Private; // 0x158(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObject");
			return ret;
		}

		bool IsParameterMultidimensional(FString InParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0366D0(relative to base address)
		bool IsCompiled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0365CC(relative to base address)
		FMutableStateUIMetadata GetStateUIMetadata(FString StateName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0362EC(relative to base address)
		FString GetStateParameterName(FString StateName, int32_t ParameterIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D03619C(relative to base address)
		int32_t GetStateParameterCount(FString StateName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0360D0(relative to base address)
		FString GetStateName(int32_t StateIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D03602C(relative to base address)
		int32_t GetStateCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D03600C(relative to base address)
		void GetProjectorParameterDefaultValue(FString InParameterName, FVector3f& OutPos, FVector3f& OutDirection, FVector3f& OutUp, FVector3f& OutScale, float& OutAngle, ECustomizableObjectProjectorType& OutType); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D03542C(relative to base address)
		FMutableParamUIMetadata GetParameterUIMetadata(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D03517C(relative to base address)
		EMutableParameterType GetParameterTypeByName(FString Name); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0350E0(relative to base address)
		EMutableParameterType GetParameterType(int32_t ParamIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D035050(relative to base address)
		FString GetParameterName(int32_t ParamIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034FBC(relative to base address)
		int32_t GetParameterDescriptionCount(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034F38(relative to base address)
		int32_t GetParameterCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034F18(relative to base address)
		FMutableParamUIMetadata GetIntParameterOptionUIMetadata(FString ParamName, FString OptionName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034B0C(relative to base address)
		int32_t GetIntParameterNumOptions(int32_t ParamIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034A80(relative to base address)
		ECustomizableObjectGroupType GetIntParameterGroupType(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0349E4(relative to base address)
		int32_t GetIntParameterDefaultValue(FString InParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034948(relative to base address)
		FString GetIntParameterAvailableOption(int32_t ParamIndex, int32_t K); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034880(relative to base address)
		float GetFloatParameterDefaultValue(FString InParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034638(relative to base address)
		int32_t GetComponentCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034518(relative to base address)
		FLinearColor GetColorParameterDefaultValue(FString InParameterName); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0343C4(relative to base address)
		bool GetBoolParameterDefaultValue(FString InParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034274(relative to base address)
		int32_t FindParameter(FString Name); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D033EBC(relative to base address)
		UCustomizableObjectInstance CreateInstance(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D033C20(relative to base address)
	};


	// Class CustomizableObject.DGGUI
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class UDGGUI : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.DGGUI");
			return ret;
		}

		void SetCustomizableObjectInstanceUsage(UCustomizableObjectInstanceUsage* CustomizableObjectInstanceUsage); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UCustomizableObjectInstanceUsage GetCustomizableObjectInstanceUsage(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CustomizableObject.CustomizableObjectInstance
	// Inherited from UObject
	// Size: 0x1C8 (0x1F0 - 0x28)
	class UCustomizableObjectInstance : public UObject	
	{
	public:
		FMulticastInlineDelegate UpdatedDelegate; // 0x28(0x10)
		unsigned char UnknownData00_6[0x18]; // 0x38(0x18) UNKNOWN PROPERTY
		FCustomizableObjectInstanceDescriptor Descriptor; // 0x50(0xD8)
		UCustomizableInstancePrivate* PrivateData; // 0x128(0x8)
		UCustomizableObject* CustomizableObject; // 0x130(0x8)
		TArray<FCustomizableObjectBoolParameterValue> BoolParameters; // 0x138(0x10)
		TArray<FCustomizableObjectIntParameterValue> IntParameters; // 0x148(0x10)
		TArray<FCustomizableObjectFloatParameterValue> FloatParameters; // 0x158(0x10)
		TArray<FCustomizableObjectTextureParameterValue> TextureParameters; // 0x168(0x10)
		TArray<FCustomizableObjectVectorParameterValue> VectorParameters; // 0x178(0x10)
		TArray<FCustomizableObjectProjectorParameterValue> ProjectorParameters; // 0x188(0x10)
		TMap<FName, FMultilayerProjector> MultilayerProjectors; // 0x198(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectInstance");
			return ret;
		}

		void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D038E9C(relative to base address)
		void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D038D5C(relative to base address)
		void SetVectorParameterSelectedOption(FString VectorParamName, FLinearColor& VectorValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D038C40(relative to base address)
		void SetTextureParameterSelectedOption(FString TextureParamName, FString TextureValue, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D038B10(relative to base address)
		void SetReplacePhysicsAssets(bool bReplaceEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D038A90(relative to base address)
		void SetRandomValuesFromStream(FRandomStream& InStream); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D038A04(relative to base address)
		void SetRandomValues(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0389C0(relative to base address)
		void SetProjectorValue(FString ProjectorParamName, FVector& OutPos, FVector& OutDirection, FVector& OutUp, FVector& OutScale, float OutAngle, int32_t RangeIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D0385E4(relative to base address)
		void SetProjectorUp(FString ProjectorParamName, FVector& Up, int32_t RangeIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D03843C(relative to base address)
		void SetProjectorScale(FString ProjectorParamName, FVector& Scale, int32_t RangeIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D038294(relative to base address)
		void SetProjectorPosition(FString ProjectorParamName, FVector& Pos, int32_t RangeIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D0380EC(relative to base address)
		void SetProjectorDirection(FString ProjectorParamName, FVector& Direction, int32_t RangeIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D037F44(relative to base address)
		void SetProjectorAngle(FString ProjectorParamName, float Angle, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D037E28(relative to base address)
		void SetObject(UCustomizableObject* InObject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D037DA8(relative to base address)
		void SetIntParameterSelectedOption(FString ParamName, FString SelectedOptionName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D037C78(relative to base address)
		void SetFloatParameterSelectedOption(FString FloatParamName, float FloatValue, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D037B5C(relative to base address)
		void SetDefaultValues(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D037B48(relative to base address)
		void SetDefaultValue(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D037AA0(relative to base address)
		void SetCurrentState(FString StateName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D037A10(relative to base address)
		void SetColorParameterSelectedOption(FString ColorParamName, FLinearColor& ColorValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D0378F4(relative to base address)
		void SetBuildParameterRelevancy(bool Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D037874(relative to base address)
		void SetBoolParameterSelectedOption(FString BoolParamName, bool BoolValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D03779C(relative to base address)
		int32_t RemoveValueFromProjectorRange(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0376B8(relative to base address)
		int32_t RemoveValueFromIntRange(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0375D4(relative to base address)
		int32_t RemoveValueFromFloatRange(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0374F0(relative to base address)
		void RemoveMultilayerProjector(FName& ProjectorParamName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D037460(relative to base address)
		void MultilayerProjectorUpdateVirtualLayer(FName& ProjectorParamName, FName& ID, FMultilayerProjectorVirtualLayer& Layer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D037314(relative to base address)
		void MultilayerProjectorUpdateLayer(FName& ProjectorParamName, int32_t Index, FMultilayerProjectorLayer& Layer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D0371BC(relative to base address)
		void MultilayerProjectorRemoveVirtualLayer(FName& ProjectorParamName, FName& ID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D037094(relative to base address)
		void MultilayerProjectorRemoveLayerAt(FName& ProjectorParamName, int32_t Index); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D036F88(relative to base address)
		int32_t MultilayerProjectorNumLayers(FName& ProjectorParamName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D036EF0(relative to base address)
		TArray MultilayerProjectorGetVirtualLayers(FName& ProjectorParamName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D036DEC(relative to base address)
		FMultilayerProjectorVirtualLayer MultilayerProjectorGetVirtualLayer(FName& ProjectorParamName, FName& ID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D036CD0(relative to base address)
		FMultilayerProjectorLayer MultilayerProjectorGetLayer(FName& ProjectorParamName, int32_t Index); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D036B80(relative to base address)
		FMultilayerProjectorVirtualLayer MultilayerProjectorFindOrCreateVirtualLayer(FName& ProjectorParamName, FName& ID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D036A68(relative to base address)
		void MultilayerProjectorCreateVirtualLayer(FName& ProjectorParamName, FName& ID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D036940(relative to base address)
		void MultilayerProjectorCreateLayer(FName& ProjectorParamName, int32_t Index); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D036834(relative to base address)
		bool IsParameterRelevant(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D03676C(relative to base address)
		bool IsParameterDirty(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0365EC(relative to base address)
		bool HasAnySkeletalMesh(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0365AC(relative to base address)
		bool HasAnyParameters(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D036564(relative to base address)
		int32_t GetTextureValueRange(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D03649C(relative to base address)
		FName GetTextureParameterSelectedOption(FString TextureParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0363BC(relative to base address)
		USkeletalMesh GetSkeletalMesh(int32_t ComponentIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D035F80(relative to base address)
		int32_t GetProjectorValueRange(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D035EB8(relative to base address)
		void GetProjectorValue(FString ProjectorParamName, FVector& OutPos, FVector& OutDirection, FVector& OutUp, FVector& OutScale, float& OutAngle, ECustomizableObjectProjectorType& OutType, int32_t RangeIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D035AA4(relative to base address)
		FVector GetProjectorUp(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0359A8(relative to base address)
		FVector GetProjectorScale(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0358AC(relative to base address)
		FVector GetProjectorPosition(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0357B0(relative to base address)
		ECustomizableObjectProjectorType GetProjectorParameterType(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0356CC(relative to base address)
		FVector GetProjectorDirection(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D035330(relative to base address)
		float GetProjectorAngle(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D03524C(relative to base address)
		int32_t GetNumComponents(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034EF8(relative to base address)
		TSet GetMergedAssetUserData(int32_t ComponentIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034DF4(relative to base address)
		int32_t GetIntValueRange(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034D30(relative to base address)
		FString GetIntParameterSelectedOption(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034C44(relative to base address)
		int32_t GetFloatValueRange(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0347BC(relative to base address)
		float GetFloatParameterSelectedOption(FString FloatParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0346D8(relative to base address)
		FInstancedStruct GetExtensionInstanceData(UCustomizableObjectExtension* Extension); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034590(relative to base address)
		UCustomizableObject GetCustomizableObject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034578(relative to base address)
		FString GetCurrentState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034538(relative to base address)
		FLinearColor GetColorParameterSelectedOption(FString ColorParamName); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D03446C(relative to base address)
		bool GetBuildParameterRelevancy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0343AC(relative to base address)
		bool GetBoolParameterSelectedOption(FString BoolParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034310(relative to base address)
		UClass GetAnimBP(int32_t ComponentIndex, FName& Slot); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034174(relative to base address)
		FGameplayTagContainer GetAnimationGameplayTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034250(relative to base address)
		void ForEachAnimInstance(int32_t ComponentIndex, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74D03409C(relative to base address)
		int32_t FindVectorParameterNameIndex(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D033FFC(relative to base address)
		int32_t FindProjectorParameterNameIndex(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D033F5C(relative to base address)
		int32_t FindIntParameterNameIndex(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D033E1C(relative to base address)
		int32_t FindFloatParameterNameIndex(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D033D7C(relative to base address)
		int32_t FindBoolParameterNameIndex(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D033CDC(relative to base address)
		bool CreateMultiLayerProjector(FName& ProjectorParamName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D033C44(relative to base address)
		UCustomizableObjectInstance CloneStatic(UObject* Outer); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D033B78(relative to base address)
		UCustomizableObjectInstance Clone(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D033B28(relative to base address)
		int32_t AddValueToProjectorRange(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D033A88(relative to base address)
		int32_t AddValueToIntRange(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0339E8(relative to base address)
		int32_t AddValueToFloatRange(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D033948(relative to base address)
	};


	// Class CustomizableObject.MutableTextureMipDataProviderFactory
	// Inherited from UTextureMipDataProviderFactory -> UAssetUserData -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UMutableTextureMipDataProviderFactory : public UTextureMipDataProviderFactory	
	{
	public:
		UCustomizableObjectInstance* CustomizableObjectInstance; // 0x28(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x30(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.MutableTextureMipDataProviderFactory");
			return ret;
		}
	};


	// Class CustomizableObject.CustomizableObjectSystem
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCustomizableObjectSystem : public UObject	
	{
	public:
		UCustomizableObjectSystemPrivate* Private; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectSystem");
			return ret;
		}

		void SetReleaseMutableTexturesImmediately(bool bReleaseTextures); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D047044(relative to base address)
		bool IsUpdating(UCustomizableObjectInstance* Instance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D046E70(relative to base address)
		bool IsUpdateResultValid(EUpdateResult UpdateResult); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D046DF4(relative to base address)
		int32_t GetTotalInstances(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D046DD0(relative to base address)
		int64_t GetTextureMemoryUsed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D046D80(relative to base address)
		FString GetPluginVersion(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D046D34(relative to base address)
		int32_t GetNumPendingInstances(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D046CF4(relative to base address)
		int32_t GetNumInstances(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D046CA0(relative to base address)
		UCustomizableObjectSystem GetInstanceChecked(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D046C7C(relative to base address)
		UCustomizableObjectSystem GetInstance(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D046C7C(relative to base address)
		int32_t GetAverageBuildTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D046C18(relative to base address)
	};


	// Class CustomizableObject.CustomizableSkeletalMeshActor
	// Inherited from ASkeletalMeshActor -> AActor -> UObject
	// Size: 0x38 (0x348 - 0x310)
	class ACustomizableSkeletalMeshActor : public ASkeletalMeshActor	
	{
	public:
		TArray<UCustomizableSkeletalComponent*> CustomizableSkeletalComponents; // 0x310(0x10)
		TArray<USkeletalMeshComponent*> SkeletalMeshComponents; // 0x320(0x10)
		UCustomizableSkeletalComponent* CustomizableSkeletalComponent; // 0x330(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x338(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableSkeletalMeshActor");
			return ret;
		}

		void SwitchComponentsMaterials(UCustomizableObjectInstance* Instance); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D0470C8(relative to base address)
		void SetDebugMaterial(UMaterialInterface* InDebugMaterial); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D046FB8(relative to base address)
		void EnableDebugMaterial(bool bEnableDebugMaterial); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D046B98(relative to base address)
	};


	// Class CustomizableObject.DefaultImageProvider
	// Inherited from UCustomizableSystemImageProvider -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UDefaultImageProvider : public UCustomizableSystemImageProvider	
	{
	public:
		TMap<FName, UTexture2D*> Textures; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.DefaultImageProvider");
			return ret;
		}
	};

}
