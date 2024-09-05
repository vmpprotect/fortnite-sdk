#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ModelViewViewModel
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ModelViewViewModel.MVVMAvailableBinding
	// Size: 0x8 (0x8 - 0x0)
	struct FMVVMAvailableBinding	
	{
	public:
		FMVVMBindingName BindingName; // 0x0(0x4)
		bool bIsReadable; // 0x4(0x1)
		bool bIsWritable; // 0x5(0x1)
		bool bHasNotify; // 0x6(0x1)
		unsigned char UnknownData00_7[0x1]; // 0x7(0x1) UNKNOWN PROPERTY
	};


	// Struct ModelViewViewModel.MVVMBindingName
	// Size: 0x4 (0x4 - 0x0)
	struct FMVVMBindingName	
	{
	public:
		FName BindingName; // 0x0(0x4)
	};


	// Struct ModelViewViewModel.MVVMEventField
	// Size: 0x1 (0x1 - 0x0)
	struct FMVVMEventField	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct ModelViewViewModel.MVVMVCompiledFieldId
	// Size: 0x2 (0x2 - 0x0)
	struct FMVVMVCompiledFieldId	
	{
	public:
		int16_t FieldIdIndex; // 0x0(0x2)
	};


	// Struct ModelViewViewModel.MVVMViewSource
	// Size: 0x18 (0x18 - 0x0)
	struct FMVVMViewSource	
	{
	public:
		UObject* Source; // 0x0(0x8)
		FName SourceName; // 0x8(0x4)
		int32_t RegisteredCount; // 0xC(0x4)
		bool bCreatedSource; // 0x10(0x1)
		bool bBindingsInitialized; // 0x11(0x1)
		bool bSetManually; // 0x12(0x1)
		bool bAssignedToUserWidgetProperty; // 0x13(0x1)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct ModelViewViewModel.MVVMViewClass_SourceCreator
	// Size: 0x30 (0x30 - 0x0)
	struct FMVVMViewClass_SourceCreator	
	{
	public:
		UClass* ExpectedSourceType; // 0x0(0x8)
		UMVVMViewModelContextResolver* Resolver; // 0x8(0x8)
		FMVVMViewModelContext GlobalViewModelInstance; // 0x10(0x10)
		FMVVMVCompiledFieldPath FieldPath; // 0x20(0x4)
		FName PropertyName; // 0x24(0x4)
		FName ParentSourceName; // 0x28(0x4)
		char Flags; // 0x2C(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
	};


	// Struct ModelViewViewModel.MVVMVCompiledFieldPath
	// Size: 0x4 (0x4 - 0x0)
	struct FMVVMVCompiledFieldPath	
	{
	public:
		int16_t StartIndex; // 0x0(0x2)
		int16_t Num; // 0x2(0x2)
	};


	// Struct ModelViewViewModel.MVVMViewModelContext
	// Size: 0x10 (0x10 - 0x0)
	struct FMVVMViewModelContext	
	{
	public:
		UClass* ContextClass; // 0x0(0x8)
		FName ContextName; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct ModelViewViewModel.MVVMViewClass_CompiledBinding
	// Size: 0x1C (0x1C - 0x0)
	struct FMVVMViewClass_CompiledBinding	
	{
	public:
		FMVVMVCompiledFieldId FieldId; // 0x0(0x2)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		FName SourcePropertyName; // 0x4(0x4)
		FMVVMVCompiledBinding Binding; // 0x8(0xE)
		EMVVMExecutionMode ExecutionMode; // 0x16(0x1)
		int8_t EvaluateSourceCreatorIndex; // 0x17(0x1)
		char Flags; // 0x18(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
	};


	// Struct ModelViewViewModel.MVVMVCompiledBinding
	// Size: 0xE (0xE - 0x0)
	struct FMVVMVCompiledBinding	
	{
	public:
		FMVVMVCompiledFieldPath SourceFieldPath; // 0x0(0x4)
		FMVVMVCompiledFieldPath DestinationFieldPath; // 0x4(0x4)
		FMVVMVCompiledFieldPath ConversionFunctionFieldPath; // 0x8(0x4)
		char Type; // 0xC(0x1)
		unsigned char UnknownData00_7[0x1]; // 0xD(0x1) UNKNOWN PROPERTY
	};


	// Struct ModelViewViewModel.MVVMViewClass_CompiledEvent
	// Size: 0xC (0xC - 0x0)
	struct FMVVMViewClass_CompiledEvent	
	{
	public:
		FMVVMVCompiledFieldPath FieldPath; // 0x0(0x4)
		FName FunctionName; // 0x4(0x4)
		FName SourceName; // 0x8(0x4)
	};


	// Struct ModelViewViewModel.MVVMViewModelContextInstance
	// Size: 0x18 (0x18 - 0x0)
	struct FMVVMViewModelContextInstance	
	{
	public:
		FMVVMViewModelContext Context; // 0x0(0x10)
		UMVVMViewModelBase* Instance; // 0x10(0x8)
	};


	// Struct ModelViewViewModel.MVVMViewClass_FieldId
	// Size: 0x8 (0x8 - 0x0)
	struct FMVVMViewClass_FieldId	
	{
	public:
		FName FieldName; // 0x0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
	};


	// Struct ModelViewViewModel.MVVMViewClass_SourceKey
	// Size: 0x4 (0x4 - 0x0)
	struct FMVVMViewClass_SourceKey	
	{
	public:
		int32_t Index; // 0x0(0x4)
	};


	// Struct ModelViewViewModel.MVVMViewClass_BindingKey
	// Size: 0x4 (0x4 - 0x0)
	struct FMVVMViewClass_BindingKey	
	{
	public:
		int32_t Index; // 0x0(0x4)
	};


	// Struct ModelViewViewModel.MVVMViewClass_EvaluateBindingKey
	// Size: 0x4 (0x4 - 0x0)
	struct FMVVMViewClass_EvaluateBindingKey	
	{
	public:
		int32_t Index; // 0x0(0x4)
	};


	// Struct ModelViewViewModel.MVVMViewClass_EventKey
	// Size: 0x4 (0x4 - 0x0)
	struct FMVVMViewClass_EventKey	
	{
	public:
		int32_t Index; // 0x0(0x4)
	};


	// Struct ModelViewViewModel.MVVMView_SourceKey
	// Size: 0x4 (0x4 - 0x0)
	struct FMVVMView_SourceKey	
	{
	public:
		int32_t Index; // 0x0(0x4)
	};


	// Struct ModelViewViewModel.MVVMVCompiledFields
	// Size: 0x10 (0x10 - 0x0)
	struct FMVVMVCompiledFields	
	{
	public:
		UStruct* ClassOrScriptStruct; // 0x0(0x8)
		int16_t LibraryStartIndex; // 0x8(0x2)
		int16_t NumberOfProperties; // 0xA(0x2)
		int16_t NumberOfFunctions; // 0xC(0x2)
		unsigned char UnknownData00_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};


	// Struct ModelViewViewModel.MVVMCompiledLoadedPropertyOrFunctionIndex
	// Size: 0x4 (0x4 - 0x0)
	struct FMVVMCompiledLoadedPropertyOrFunctionIndex	
	{
	public:
		int16_t Index; // 0x0(0x2)
		bool bIsObjectProperty : 1; // 0x2:0(0x1)
		bool bIsScriptStructProperty : 1; // 0x2:1(0x1)
		bool bIsProperty : 1; // 0x2:2(0x1)
		unsigned char UnknownData00_7[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
	};


	// Struct ModelViewViewModel.MVVMCompiledBindingLibrary
	// Size: 0x50 (0x50 - 0x0)
	struct FMVVMCompiledBindingLibrary	
	{
	public:
		unsigned char UnknownData00_7[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
		TArray<FMVVMCompiledLoadedPropertyOrFunctionIndex> FieldPaths; // 0x20(0x10)
		TArray<FMVVMVCompiledFields> CompiledFields; // 0x30(0x10)
		TArray<FName> CompiledFieldNames; // 0x40(0x10)
	};


	// Struct ModelViewViewModel.MVVMViewModelCollection
	// Size: 0x28 (0x28 - 0x0)
	struct FMVVMViewModelCollection	
	{
	public:
		TArray<FMVVMViewModelContextInstance> ViewModelInstances; // 0x0(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x10(0x18) UNKNOWN PROPERTY
	};


	// Struct ModelViewViewModel.MVVMView_Source
	// Size: 0x18 (0x18 - 0x0)
	struct FMVVMView_Source	
	{
	public:
		UObject* Source; // 0x0(0x8)
		FMVVMViewClass_SourceKey ClassKey; // 0x8(0x4)
		int32_t RegisteredCount; // 0xC(0x4)
		bool bSourceInitialized; // 0x10(0x1)
		bool bBindingsInitialized; // 0x11(0x1)
		bool bSetManually; // 0x12(0x1)
		bool bAssignedToUserWidgetProperty; // 0x13(0x1)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct ModelViewViewModel.MVVMViewClass_SourceBinding
	// Size: 0xC (0xC - 0x0)
	struct FMVVMViewClass_SourceBinding	
	{
	public:
		FFieldNotificationId FieldId; // 0x0(0x4)
		FMVVMViewClass_BindingKey BindingKey; // 0x4(0x4)
		char Flags; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct ModelViewViewModel.MVVMViewClass_Binding
	// Size: 0x18 (0x18 - 0x0)
	struct FMVVMViewClass_Binding	
	{
	public:
		FMVVMVCompiledBinding Binding; // 0x0(0xE)
		char Flags; // 0xE(0x1)
		EMVVMExecutionMode ExecutionMode; // 0xF(0x1)
		uint64_t SourceBitField; // 0x10(0x8)
	};


	// Struct ModelViewViewModel.MVVMViewClass_EvaluateSource
	// Size: 0xC (0xC - 0x0)
	struct FMVVMViewClass_EvaluateSource	
	{
	public:
		FFieldNotificationId ParentFieldId; // 0x0(0x4)
		FMVVMViewClass_SourceKey ParentSource; // 0x4(0x4)
		FMVVMViewClass_SourceKey ToEvaluate; // 0x8(0x4)
	};


	// Struct ModelViewViewModel.MVVMViewClass_Source
	// Size: 0x50 (0x50 - 0x0)
	struct FMVVMViewClass_Source	
	{
	public:
		UClass* ExpectedSourceType; // 0x0(0x8)
		UMVVMViewModelContextResolver* Resolver; // 0x8(0x8)
		FMVVMViewModelContext GlobalViewModelInstance; // 0x10(0x10)
		FMVVMVCompiledFieldPath FieldPath; // 0x20(0x4)
		FName PropertyName; // 0x24(0x4)
		TArray<FMVVMViewClass_FieldId> FieldToRegisterTo; // 0x28(0x10)
		TArray<FMVVMViewClass_SourceBinding> Bindings; // 0x38(0x10)
		uint16_t Flags; // 0x48(0x2)
		unsigned char UnknownData00_7[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY
	};


	// Struct ModelViewViewModel.MVVMViewClass_Event
	// Size: 0x18 (0x18 - 0x0)
	struct FMVVMViewClass_Event	
	{
	public:
		FMVVMVCompiledFieldPath FieldPath; // 0x0(0x4)
		FName UserWidgetFunctionName; // 0x4(0x4)
		FMVVMViewClass_SourceKey SourceToReevaluate; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		uint64_t SourceBitField; // 0x10(0x8)
	};

}
