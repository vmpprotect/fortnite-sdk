#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CustomizableObject
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		TArray AnimationSlots; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectInstanceUserData");
			return ret;
		}

		void SetAnimationGameplayTags(FGameplayTagContainer& InstanceTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A6E38
		FGameplayTagContainer GetAnimationGameplayTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A6D58
	};


	// Class CustomizableObject.CustomizableInstancePrivate
	// Inherited from UObject
	// Size: 0x370 (0x398 - 0x28)
	class UCustomizableInstancePrivate : public UObject	
	{
	public:
		TArray SkeletalMeshes; // 0x28(0x10)
		TArray GeneratedMaterials; // 0x38(0x10)
		TArray GeneratedTextures; // 0x48(0x10)
		unsigned char UnknownData06_6[0x10]; // 0x58(0x10) UNKNOWN PROPERTY
		TMap TextureReuseCache; // 0x68(0x50)
		unsigned char UnknownData07_6[0x28]; // 0xB8(0x28) UNKNOWN PROPERTY
		TArray ComponentsData; // 0xE0(0x10)
		TArray ReferencedMaterials; // 0xF0(0x10)
		unsigned char UnknownData08_6[0x60]; // 0x100(0x60) UNKNOWN PROPERTY
		TArray ClothingPhysicsAssets; // 0x160(0x10)
		TArray GatheredAnimBPs; // 0x170(0x10)
		FGameplayTagContainer AnimBPGameplayTags; // 0x180(0x20)
		TMap AnimBpPhysicsAssets; // 0x1A0(0x50)
		unsigned char UnknownData09_6[0x20]; // 0x1F0(0x20) UNKNOWN PROPERTY
		TArray LoadedPassThroughTexturesPendingSetMaterial; // 0x210(0x10)
		TArray LoadedPassThroughMeshesPendingSetMaterial; // 0x220(0x10)
		unsigned char UnknownData10_6[0x8]; // 0x230(0x8) UNKNOWN PROPERTY
		FCustomizableObjectInstanceDescriptor CommittedDescriptor; // 0x238(0xD8)
		unsigned char UnknownData11_7[0x88]; // 0x310(0x88) UNKNOWN PROPERTY

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
		unsigned char UnknownData03_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		float SkippedLastRenderTime; // 0x30(0x4)
		unsigned char UnknownData04_6[0x14]; // 0x34(0x14) UNKNOWN PROPERTY
		UCustomizableSkeletalComponent CustomizableSkeletalComponent; // 0x48(0x8)
		TWeakObjectPtr UsedSkeletalMeshComponent; // 0x50(0x8)
		UCustomizableObjectInstance UsedCustomizableObjectInstance; // 0x58(0x8)
		int32_t UsedComponentIndex; // 0x60(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectInstanceUsage");
			return ret;
		}

		void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145A6FF8
		void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145A6F18
	};


	// Class CustomizableObject.CustomizableObjectPrivate
	// Inherited from UObject
	// Size: 0x818 (0x840 - 0x28)
	class UCustomizableObjectPrivate : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		FModelResources ModelResources; // 0x38(0x370)
		unsigned char UnknownData04_6[0xC8]; // 0x3A8(0xC8) UNKNOWN PROPERTY
		TArray ParameterProperties; // 0x470(0x10)
		FModelResources References; // 0x480(0x370)
		unsigned char UnknownData05_7[0x50]; // 0x7F0(0x50) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x50]; // 0x528(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectSkeletalMesh");
			return ret;
		}
	};


	// Class CustomizableObject.CustomizableObjectSystemPrivate
	// Inherited from UObject
	// Size: 0x598 (0x5C0 - 0x28)
	class UCustomizableObjectSystemPrivate : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x1D0]; // 0x28(0x1D0) UNKNOWN PROPERTY
		UCustomizableObjectInstance CurrentInstanceBeingUpdated; // 0x1F8(0x8)
		unsigned char UnknownData04_6[0x2A0]; // 0x200(0x2A0) UNKNOWN PROPERTY
		TArray PendingReleaseSkeletalMesh; // 0x4A0(0x10)
		UCustomizableInstanceLODManagementBase DefaultInstanceLODManagement; // 0x4B0(0x8)
		UCustomizableInstanceLODManagementBase CurrentInstanceLODManagement; // 0x4B8(0x8)
		TArray ProtectedCachedTextures; // 0x4C0(0x10)
		unsigned char UnknownData05_7[0xF0]; // 0x4D0(0xF0) UNKNOWN PROPERTY

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
		UCustomizableObjectInstance CustomizableObjectInstance; // 0x220(0x8)
		int32_t ComponentIndex; // 0x228(0x4)
		unsigned char UnknownData02_6[0x14]; // 0x22C(0x14) UNKNOWN PROPERTY
		UCustomizableObjectInstanceUsage CustomizableObjectInstanceUsage; // 0x240(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x248(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableSkeletalComponent");
			return ret;
		}

		void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145A71B8
		void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145A70D8
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
		unsigned char UnknownData01_1[0x58]; // 0x28(0x58) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

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
		TArray AlwaysLoadedExtensionData; // 0x98(0x10)
		TArray StreamedExtensionData; // 0xA8(0x10)
		TArray StreamedResourceData; // 0xB8(0x10)
		bool bEnableUseRefSkeletalMeshAsPlaceholder; // 0xC8(0x1)
		bool bPreserveUserLODsOnFirstGeneration; // 0xC9(0x1)
		bool bEnableMeshCache; // 0xCA(0x1)
		bool bEnableMeshStreaming; // 0xCB(0x1)
		unsigned char UnknownData01_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		TArray LowPriorityTextures; // 0xD0(0x10)
		TArray CustomizableObjectClassTags; // 0xE0(0x10)
		TArray PopulationClassTags; // 0xF0(0x10)
		TMap CustomizableObjectParametersTags; // 0x100(0x50)
		UCustomizableObjectBulk BulkData; // 0x150(0x8)
		UCustomizableObjectPrivate Private; // 0x158(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObject");
			return ret;
		}

		bool IsParameterMultidimensional(FString InParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A8798
		bool IsCompiled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A86B8
		FMutableStateUIMetadata GetStateUIMetadata(FString StateName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A85D8
		FString GetStateParameterName(FString StateName, int32_t ParameterIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A84F8
		int32_t GetStateParameterCount(FString StateName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A8418
		FString GetStateName(int32_t StateIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A8338
		int32_t GetStateCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A8258
		void GetProjectorParameterDefaultValue(FString InParameterName, FVector3f& OutPos, FVector3f& OutDirection, FVector3f& OutUp, FVector3f& OutScale, float& OutAngle, ECustomizableObjectProjectorType& OutType); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145A8178
		FMutableParamUIMetadata GetParameterUIMetadata(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A8098
		EMutableParameterType GetParameterTypeByName(FString Name); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A7FB8
		EMutableParameterType GetParameterType(int32_t ParamIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A7ED8
		FString GetParameterName(int32_t ParamIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A7DF8
		int32_t GetParameterDescriptionCount(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A7D18
		int32_t GetParameterCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A7C38
		FMutableParamUIMetadata GetIntParameterOptionUIMetadata(FString ParamName, FString OptionName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A7B58
		int32_t GetIntParameterNumOptions(int32_t ParamIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A7A78
		ECustomizableObjectGroupType GetIntParameterGroupType(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A7998
		int32_t GetIntParameterDefaultValue(FString InParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A78B8
		FString GetIntParameterAvailableOption(int32_t ParamIndex, int32_t K); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A77D8
		float GetFloatParameterDefaultValue(FString InParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A76F8
		int32_t GetComponentCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A7618
		FLinearColor GetColorParameterDefaultValue(FString InParameterName); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145A7538
		bool GetBoolParameterDefaultValue(FString InParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A7458
		int32_t FindParameter(FString Name); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A7378
		UCustomizableObjectInstance CreateInstance(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145A7298
	};


	// Class CustomizableObject.DGGUI
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UDGGUI : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.DGGUI");
			return ret;
		}

		void SetCustomizableObjectInstanceUsage(UCustomizableObjectInstanceUsage CustomizableObjectInstanceUsage); // Flags: Event|Public|BlueprintEvent 0x7FF4145A8958
		UCustomizableObjectInstanceUsage GetCustomizableObjectInstanceUsage(); // Flags: Event|Public|BlueprintEvent 0x7FF4145A8878
	};


	// Class CustomizableObject.CustomizableObjectInstance
	// Inherited from UObject
	// Size: 0x1C8 (0x1F0 - 0x28)
	class UCustomizableObjectInstance : public UObject	
	{
	public:
		FMulticastInlineDelegate UpdatedDelegate; // 0x28(0x10)
		unsigned char UnknownData02_6[0x18]; // 0x38(0x18) UNKNOWN PROPERTY
		FCustomizableObjectInstanceDescriptor Descriptor; // 0x50(0xD8)
		UCustomizableInstancePrivate PrivateData; // 0x128(0x8)
		UCustomizableObject CustomizableObject; // 0x130(0x8)
		TArray BoolParameters; // 0x138(0x10)
		TArray IntParameters; // 0x148(0x10)
		TArray FloatParameters; // 0x158(0x10)
		TArray TextureParameters; // 0x168(0x10)
		TArray VectorParameters; // 0x178(0x10)
		TArray ProjectorParameters; // 0x188(0x10)
		TMap MultilayerProjectors; // 0x198(0x50)
		unsigned char UnknownData03_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectInstance");
			return ret;
		}

		void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145ACCB8
		void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145ACBD8
		void SetVectorParameterSelectedOption(FString VectorParamName, FLinearColor& VectorValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145ACAF8
		void SetTextureParameterSelectedOption(FString TextureParamName, FString TextureValue, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145ACA18
		void SetReplacePhysicsAssets(bool bReplaceEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AC938
		void SetRandomValuesFromStream(FRandomStream& InStream); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145AC858
		void SetRandomValues(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AC778
		void SetProjectorValue(FString ProjectorParamName, FVector& OutPos, FVector& OutDirection, FVector& OutUp, FVector& OutScale, float OutAngle, int32_t RangeIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145AC698
		void SetProjectorUp(FString ProjectorParamName, FVector& Up, int32_t RangeIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145AC5B8
		void SetProjectorScale(FString ProjectorParamName, FVector& Scale, int32_t RangeIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145AC4D8
		void SetProjectorPosition(FString ProjectorParamName, FVector& Pos, int32_t RangeIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145AC3F8
		void SetProjectorDirection(FString ProjectorParamName, FVector& Direction, int32_t RangeIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145AC318
		void SetProjectorAngle(FString ProjectorParamName, float Angle, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AC238
		void SetObject(UCustomizableObject InObject); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AC158
		void SetIntParameterSelectedOption(FString ParamName, FString SelectedOptionName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AC078
		void SetFloatParameterSelectedOption(FString FloatParamName, float FloatValue, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145ABF98
		void SetDefaultValues(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145ABEB8
		void SetDefaultValue(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145ABDD8
		void SetCurrentState(FString StateName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145ABCF8
		void SetColorParameterSelectedOption(FString ColorParamName, FLinearColor& ColorValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145ABC18
		void SetBuildParameterRelevancy(bool Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145ABB38
		void SetBoolParameterSelectedOption(FString BoolParamName, bool BoolValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145ABA58
		int32_t RemoveValueFromProjectorRange(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AB978
		int32_t RemoveValueFromIntRange(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AB898
		int32_t RemoveValueFromFloatRange(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AB7B8
		void RemoveMultilayerProjector(FName& ProjectorParamName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AB6D8
		void MultilayerProjectorUpdateVirtualLayer(FName& ProjectorParamName, FName& ID, FMultilayerProjectorVirtualLayer& Layer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AB5F8
		void MultilayerProjectorUpdateLayer(FName& ProjectorParamName, int32_t Index, FMultilayerProjectorLayer& Layer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AB518
		void MultilayerProjectorRemoveVirtualLayer(FName& ProjectorParamName, FName& ID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AB438
		void MultilayerProjectorRemoveLayerAt(FName& ProjectorParamName, int32_t Index); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AB358
		int32_t MultilayerProjectorNumLayers(FName& ProjectorParamName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145AB278
		TArray MultilayerProjectorGetVirtualLayers(FName& ProjectorParamName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145AB198
		FMultilayerProjectorVirtualLayer MultilayerProjectorGetVirtualLayer(FName& ProjectorParamName, FName& ID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145AB0B8
		FMultilayerProjectorLayer MultilayerProjectorGetLayer(FName& ProjectorParamName, int32_t Index); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145AAFD8
		FMultilayerProjectorVirtualLayer MultilayerProjectorFindOrCreateVirtualLayer(FName& ProjectorParamName, FName& ID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AAEF8
		void MultilayerProjectorCreateVirtualLayer(FName& ProjectorParamName, FName& ID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AAE18
		void MultilayerProjectorCreateLayer(FName& ProjectorParamName, int32_t Index); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AAD38
		bool IsParameterRelevant(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AAC58
		bool IsParameterDirty(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AAB78
		bool HasAnySkeletalMesh(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AAA98
		bool HasAnyParameters(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AA9B8
		int32_t GetTextureValueRange(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AA8D8
		FName GetTextureParameterSelectedOption(FString TextureParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AA7F8
		USkeletalMesh GetSkeletalMesh(int32_t ComponentIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AA718
		int32_t GetProjectorValueRange(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AA638
		void GetProjectorValue(FString ProjectorParamName, FVector& OutPos, FVector& OutDirection, FVector& OutUp, FVector& OutScale, float& OutAngle, ECustomizableObjectProjectorType& OutType, int32_t RangeIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145AA558
		FVector GetProjectorUp(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145AA478
		FVector GetProjectorScale(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145AA398
		FVector GetProjectorPosition(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145AA2B8
		ECustomizableObjectProjectorType GetProjectorParameterType(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AA1D8
		FVector GetProjectorDirection(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145AA0F8
		float GetProjectorAngle(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AA018
		int32_t GetNumComponents(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A9F38
		TSet GetMergedAssetUserData(int32_t ComponentIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A9E58
		int32_t GetIntValueRange(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A9D78
		FString GetIntParameterSelectedOption(FString ParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A9C98
		int32_t GetFloatValueRange(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A9BB8
		float GetFloatParameterSelectedOption(FString FloatParamName, int32_t RangeIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A9AD8
		UCustomizableObject GetCustomizableObject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A99F8
		FString GetCurrentState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A9918
		FLinearColor GetColorParameterSelectedOption(FString ColorParamName); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145A9838
		bool GetBuildParameterRelevancy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A9758
		bool GetBoolParameterSelectedOption(FString BoolParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A9678
		UClass GetAnimBP(int32_t ComponentIndex, FName& Slot); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145A9598
		FGameplayTagContainer GetAnimationGameplayTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A94B8
		void ForEachAnimInstance(int32_t ComponentIndex, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF4145A93D8
		int32_t FindVectorParameterNameIndex(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A92F8
		int32_t FindProjectorParameterNameIndex(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A9218
		int32_t FindIntParameterNameIndex(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A9138
		int32_t FindFloatParameterNameIndex(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A9058
		int32_t FindBoolParameterNameIndex(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A8F78
		bool CreateMultiLayerProjector(FName& ProjectorParamName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A8E98
		UCustomizableObjectInstance CloneStatic(UObject Outer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145A8DB8
		UCustomizableObjectInstance Clone(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145A8CD8
		int32_t AddValueToProjectorRange(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145A8BF8
		int32_t AddValueToIntRange(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145A8B18
		int32_t AddValueToFloatRange(FString ParamName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145A8A38
	};


	// Class CustomizableObject.MutableTextureMipDataProviderFactory
	// Inherited from UTextureMipDataProviderFactory -> UAssetUserData -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UMutableTextureMipDataProviderFactory : public UTextureMipDataProviderFactory	
	{
	public:
		UCustomizableObjectInstance CustomizableObjectInstance; // 0x28(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x30(0x20) UNKNOWN PROPERTY

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
		UCustomizableObjectSystemPrivate Private; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableObjectSystem");
			return ret;
		}

		void SetReleaseMutableTexturesImmediately(bool bReleaseTextures); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AD658
		bool IsUpdating(UCustomizableObjectInstance Instance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AD578
		bool IsUpdateResultValid(EUpdateResult UpdateResult); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145AD498
		int32_t GetTotalInstances(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AD3B8
		int64_t GetTextureMemoryUsed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AD2D8
		FString GetPluginVersion(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AD1F8
		int32_t GetNumPendingInstances(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AD118
		int32_t GetNumInstances(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AD038
		UCustomizableObjectSystem GetInstanceChecked(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145ACF58
		UCustomizableObjectSystem GetInstance(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145ACE78
		int32_t GetAverageBuildTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145ACD98
	};


	// Class CustomizableObject.CustomizableSkeletalMeshActor
	// Inherited from ASkeletalMeshActor -> AActor -> UObject
	// Size: 0x28 (0x338 - 0x310)
	class ACustomizableSkeletalMeshActor : public ASkeletalMeshActor	
	{
	public:
		TArray CustomizableSkeletalComponents; // 0x310(0x10)
		TArray SkeletalMeshComponents; // 0x320(0x10)
		UCustomizableSkeletalComponent CustomizableSkeletalComponent; // 0x330(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.CustomizableSkeletalMeshActor");
			return ret;
		}
	};


	// Class CustomizableObject.DefaultImageProvider
	// Inherited from UCustomizableSystemImageProvider -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UDefaultImageProvider : public UCustomizableSystemImageProvider	
	{
	public:
		TMap Textures; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObject.DefaultImageProvider");
			return ret;
		}
	};

}
