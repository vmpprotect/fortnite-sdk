#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ModelViewViewModel
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ModelViewViewModel.MVVMConversionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMVVMConversionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMConversionLibrary");
			return ret;
		}

		ESlateVisibility Conv_BoolToSlateVisibility(bool bIsVisible, ESlateVisibility TrueVisibility, ESlateVisibility FalseVisibility); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF4146098D8
	};


	// Class ModelViewViewModel.MVVMSlateBrushConversionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMVVMSlateBrushConversionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMSlateBrushConversionLibrary");
			return ret;
		}

		FSlateBrush Conv_SetVectorParameterMID(FSlateBrush Brush, UMaterialInterface Material, FName ParameterName, FLinearColor Value); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414609E18
		FSlateBrush Conv_SetVectorParameter(FSlateBrush Brush, FName ParameterName, FLinearColor Value); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414609D38
		FSlateBrush Conv_SetTextureParameterMID(FSlateBrush Brush, UMaterialInterface Material, FName ParameterName, UTexture Value); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414609C58
		FSlateBrush Conv_SetTextureParameter(FSlateBrush Brush, FName ParameterName, UTexture Value); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414609B78
		FSlateBrush Conv_SetScalarParameterMID(FSlateBrush Brush, UMaterialInterface Material, FName ParameterName, float Value); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414609A98
		FSlateBrush Conv_SetScalarParameter(FSlateBrush Brush, FName ParameterName, float Value); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4146099B8
	};


	// Class ModelViewViewModel.MVVMView
	// Inherited from UUserWidgetExtension -> UObject
	// Size: 0x48 (0x70 - 0x28)
	class UMVVMView : public UUserWidgetExtension	
	{
	public:
		UMVVMViewClass GeneratedViewClass; // 0x28(0x8)
		TArray Sources; // 0x30(0x10)
		unsigned char UnknownData02_6[0x10]; // 0x40(0x10) UNKNOWN PROPERTY
		TArray Extensions; // 0x50(0x10)
		uint64_t ValidSources; // 0x60(0x8)
		char NumberOfSourceWithTickBinding; // 0x68(0x1)
		bool bLogBinding; // 0x69(0x1)
		bool bConstructed; // 0x6A(0x1)
		bool bSourcesInitialized; // 0x6B(0x1)
		bool bBindingsInitialized; // 0x6C(0x1)
		bool bEventsInitialized; // 0x6D(0x1)
		bool bHasDefaultTickBinding; // 0x6E(0x1)
		unsigned char UnknownData03_7[0x1]; // 0x6F(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMView");
			return ret;
		}

		void UninitializeSources(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41460B4D8
		void UninitializeEvents(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41460B3F8
		void UninitializeBindings(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41460B318
		bool SetViewModelByClass(TScriptInterface NewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41460B238
		bool SetViewModel(FName ViewmodelName, TScriptInterface ViewModel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41460B158
		void InitializeSources(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41460B078
		void InitializeEvents(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41460AF98
		void InitializeBindings(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41460AEB8
		TScriptInterface GetViewModel(FName ViewmodelName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460ADD8
		bool ExecuteViewModelBindings(FName ViewmodelName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41460ACF8
		bool AreSourcesValidForEvent(int32_t EventKey); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const 0x7FF41460AC18
		bool AreSourcesInitialized(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460AB38
		bool AreEventsInitialized(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460AA58
		bool AreBindingsInitialized(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460A978
	};


	// Class ModelViewViewModel.MVVMViewExtension
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMVVMViewExtension : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMViewExtension");
			return ret;
		}
	};


	// Class ModelViewViewModel.MVVMViewClass
	// Inherited from UWidgetBlueprintGeneratedClassExtension -> UObject
	// Size: 0xB0 (0xD8 - 0x28)
	class UMVVMViewClass : public UWidgetBlueprintGeneratedClassExtension	
	{
	public:
		TArray Sources; // 0x28(0x10)
		TArray Bindings; // 0x38(0x10)
		TArray EvaluateSources; // 0x48(0x10)
		TArray Events; // 0x58(0x10)
		TArray ViewClassExtensions; // 0x68(0x10)
		FMVVMCompiledBindingLibrary BindingLibrary; // 0x78(0x50)
		uint64_t OptionalSources; // 0xC8(0x8)
		unsigned char UnknownData01_6[0x4]; // 0xD0(0x4) UNKNOWN PROPERTY
		bool bInitializeSourcesOnConstruct; // 0xD4(0x1)
		bool bInitializeBindingsOnConstruct; // 0xD5(0x1)
		bool bInitializeEventsOnConstruct; // 0xD6(0x1)
		bool bListenToViewModelCollectionChanged; // 0xD7(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMViewClass");
			return ret;
		}
	};


	// Class ModelViewViewModel.MVVMViewClassExtension
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMVVMViewClassExtension : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMViewClassExtension");
			return ret;
		}
	};


	// Class ModelViewViewModel.MVVMViewListViewBaseClassExtension
	// Inherited from UMVVMViewClassExtension -> UObject
	// Size: 0x60 (0x88 - 0x28)
	class UMVVMViewListViewBaseClassExtension : public UMVVMViewClassExtension	
	{
	public:
		FName WidgetName; // 0x28(0x4)
		FName EntryViewModelName; // 0x2C(0x4)
		FMVVMVCompiledFieldPath WidgetPath; // 0x30(0x4)
		unsigned char UnknownData01_7[0x54]; // 0x34(0x54) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMViewListViewBaseClassExtension");
			return ret;
		}
	};


	// Class ModelViewViewModel.MVVMPanelWidgetViewExtension
	// Inherited from UMVVMViewExtension -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UMVVMPanelWidgetViewExtension : public UMVVMViewExtension	
	{
	public:
		UPanelWidget PanelWidget; // 0x28(0x8)
		UMVVMViewPanelWidgetClassExtension ClassExtension; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMPanelWidgetViewExtension");
			return ret;
		}

		void BP_SetItems(TArray& InItems); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414609EF8
	};


	// Class ModelViewViewModel.MVVMViewPanelWidgetClassExtension
	// Inherited from UMVVMViewClassExtension -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UMVVMViewPanelWidgetClassExtension : public UMVVMViewClassExtension	
	{
	public:
		FName WidgetName; // 0x28(0x4)
		FName EntryViewModelName; // 0x2C(0x4)
		UClass EntryWidgetClass; // 0x30(0x8)
		UPanelSlot SlotTemplate; // 0x38(0x8)
		FName PanelPropertyName; // 0x40(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		UClass EntryViewModelClass; // 0x48(0x8)
		FMVVMVCompiledFieldPath WidgetPath; // 0x50(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMViewPanelWidgetClassExtension");
			return ret;
		}
	};


	// Class ModelViewViewModel.MVVMGameSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UMVVMGameSubsystem : public UGameInstanceSubsystem	
	{
	public:
		UMVVMViewModelCollectionObject ViewModelCollection; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMGameSubsystem");
			return ret;
		}

		UMVVMViewModelCollectionObject GetViewModelCollection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414609FD8
	};


	// Class ModelViewViewModel.MVVMSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UMVVMSubsystem : public UEngineSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMSubsystem");
			return ret;
		}

		UMVVMView K2_GetViewFromUserWidget(UUserWidget UserWidget); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460A438
		TArray K2_GetAvailableBindings(UClass Class, UClass Accessor); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460A358
		FMVVMAvailableBinding K2_GetAvailableBinding(UClass Class, FMVVMBindingName BindingName, UClass Accessor); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460A278
		UMVVMViewModelCollectionObject GetGlobalViewModelCollection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460A198
		bool DoesWidgetTreeContainedWidget(UWidgetTree WidgetTree, UWidget ViewWidget); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460A0B8
	};


	// Class ModelViewViewModel.MVVMViewModelBase
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UMVVMViewModelBase : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x28(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMViewModelBase");
			return ret;
		}

		bool K2_SetPropertyValue(int32_t& OldValue, int32_t& NewValue); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF413FCA978
		void K2_RemoveFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCA898
		void K2_BroadcastFieldValueChanged(FFieldNotificationId FieldId); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413FCA7B8
		void K2_AddFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCA6D8
	};


	// Class ModelViewViewModel.MVVMViewModelCollectionObject
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UMVVMViewModelCollectionObject : public UObject	
	{
	public:
		FMVVMViewModelCollection ViewModelCollection; // 0x28(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMViewModelCollectionObject");
			return ret;
		}

		bool RemoveViewModel(FMVVMViewModelContext Context); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41460A898
		int32_t RemoveAllViewModelInstance(UMVVMViewModelBase ViewModel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41460A7B8
		UMVVMViewModelBase FindViewModelInstance(FMVVMViewModelContext Context); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460A6D8
		UMVVMViewModelBase FindFirstViewModelInstanceOfType(UClass& ViewModelClass); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41460A5F8
		bool AddViewModelInstance(FMVVMViewModelContext Context, UMVVMViewModelBase ViewModel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41460A518
	};


	// Class ModelViewViewModel.MVVMInstancedViewModelGeneratedClass
	// Inherited from UBlueprintGeneratedClass -> UClass -> UStruct -> UField -> UObject
	// Size: 0x60 (0x3C0 - 0x360)
	class UMVVMInstancedViewModelGeneratedClass : public UBlueprintGeneratedClass	
	{
	public:
		TArray OnRepFunctionToLink; // 0x360(0x10)
		unsigned char UnknownData01_7[0x50]; // 0x370(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMInstancedViewModelGeneratedClass");
			return ret;
		}
	};


	// Class ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
	// Inherited from UBlueprintGeneratedClass -> UClass -> UStruct -> UField -> UObject
	// Size: 0x0 (0x360 - 0x360)
	class UMVVMViewModelBlueprintGeneratedClass : public UBlueprintGeneratedClass	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass");
			return ret;
		}
	};


	// Class ModelViewViewModel.MVVMBindingSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UMVVMBindingSubsystem : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x68]; // 0x30(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMBindingSubsystem");
			return ret;
		}
	};


	// Class ModelViewViewModel.MVVMViewModelContextResolver
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMVVMViewModelContextResolver : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelViewViewModel.MVVMViewModelContextResolver");
			return ret;
		}

		void K2_DestroyInstance(UObject ViewModel, UMVVMView View); // Flags: Event|Public|BlueprintEvent|Const 0x7FF41460B698
		TScriptInterface K2_CreateInstance(UClass ExpectedType, UUserWidget UserWidget); // Flags: Event|Public|BlueprintEvent|Const 0x7FF41460B5B8
	};

}
