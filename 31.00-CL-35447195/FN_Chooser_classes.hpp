#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Chooser
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Chooser.ChooserParameterBool_ContextProperty
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UChooserParameterBool_ContextProperty : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray PropertyBindingChain; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserParameterBool_ContextProperty");
			return ret;
		}
	};


	// Class Chooser.ChooserColumnBool
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UChooserColumnBool : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TScriptInterface InputValue; // 0x30(0x10)
		TArray RowValues; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserColumnBool");
			return ret;
		}
	};


	// Class Chooser.ChooserParameterEnum_ContextProperty
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UChooserParameterEnum_ContextProperty : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray PropertyBindingChain; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserParameterEnum_ContextProperty");
			return ret;
		}
	};


	// Class Chooser.ChooserColumnEnum
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UChooserColumnEnum : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TScriptInterface InputValue; // 0x30(0x10)
		TArray RowValues; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserColumnEnum");
			return ret;
		}
	};


	// Class Chooser.FloatAutoPopulator
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFloatAutoPopulator : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.FloatAutoPopulator");
			return ret;
		}
	};


	// Class Chooser.ChooserParameterFloat_ContextProperty
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UChooserParameterFloat_ContextProperty : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray PropertyBindingChain; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserParameterFloat_ContextProperty");
			return ret;
		}
	};


	// Class Chooser.ChooserColumnFloatRange
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UChooserColumnFloatRange : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TScriptInterface InputValue; // 0x30(0x10)
		TArray RowValues; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserColumnFloatRange");
			return ret;
		}
	};


	// Class Chooser.ChooserParameterGameplayTag_ContextProperty
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UChooserParameterGameplayTag_ContextProperty : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray PropertyBindingChain; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserParameterGameplayTag_ContextProperty");
			return ret;
		}
	};


	// Class Chooser.ChooserColumnGameplayTag
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UChooserColumnGameplayTag : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TScriptInterface InputValue; // 0x30(0x10)
		EGameplayContainerMatchType TagMatchType; // 0x40(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		TArray RowValues; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserColumnGameplayTag");
			return ret;
		}
	};


	// Class Chooser.ChooserColumn
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UChooserColumn : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserColumn");
			return ret;
		}
	};


	// Class Chooser.ChooserParameterBool
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UChooserParameterBool : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserParameterBool");
			return ret;
		}
	};


	// Class Chooser.ChooserParameterEnum
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UChooserParameterEnum : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserParameterEnum");
			return ret;
		}
	};


	// Class Chooser.ChooserParameterFloat
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UChooserParameterFloat : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserParameterFloat");
			return ret;
		}
	};


	// Class Chooser.ChooserParameterGameplayTag
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UChooserParameterGameplayTag : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserParameterGameplayTag");
			return ret;
		}
	};


	// Class Chooser.HasContextClass
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UHasContextClass : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.HasContextClass");
			return ret;
		}
	};


	// Class Chooser.ObjectChooser
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UObjectChooser : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ObjectChooser");
			return ret;
		}
	};


	// Class Chooser.ObjectChooser_Asset
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UObjectChooser_Asset : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UObject Asset; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ObjectChooser_Asset");
			return ret;
		}
	};


	// Class Chooser.ChooserTable
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UChooserTable : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		UChooserTable ParentTable; // 0x48(0x8)
		FInstancedStruct FallbackResult; // 0x50(0x10)
		TArray CookedResults; // 0x60(0x10)
		TArray ColumnsStructs; // 0x70(0x10)
		TArray ContextData; // 0x80(0x10)
		UClass OutputObjectType; // 0x90(0x8)
		EObjectChooserResultType ResultType; // 0x98(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserTable");
			return ret;
		}
	};


	// Class Chooser.ObjectChooser_EvaluateChooser
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UObjectChooser_EvaluateChooser : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UChooserTable Chooser; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ObjectChooser_EvaluateChooser");
			return ret;
		}
	};


	// Class Chooser.ChooserColumnMenuContext
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UChooserColumnMenuContext : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserColumnMenuContext");
			return ret;
		}
	};


	// Class Chooser.ChooserFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UChooserFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Chooser.ChooserFunctionLibrary");
			return ret;
		}

		FInstancedStruct MakeEvaluateChooser(UChooserTable Chooser); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414648FD8
		FChooserEvaluationContext MakeChooserEvaluationContext(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414648EF8
		void GetChooserStructOutput(FChooserEvaluationContext& Context, int32_t Index, int32_t& Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414648E18
		TArray EvaluateObjectChooserBaseMulti(FChooserEvaluationContext& Context, FInstancedStruct& ObjectChooser, UClass ObjectClass, bool bResultIsClass); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414648D38
		UObject EvaluateObjectChooserBase(FChooserEvaluationContext& Context, FInstancedStruct& ObjectChooser, UClass ObjectClass, bool bResultIsClass); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414648C58
		TArray EvaluateChooserMulti(UObject ContextObject, UChooserTable ChooserTable, UClass ObjectClass); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414648B78
		UObject EvaluateChooser(UObject ContextObject, UChooserTable ChooserTable, UClass ObjectClass); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414648A98
		void AddChooserStructInput(FChooserEvaluationContext& Context, int32_t Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4146489B8
		void AddChooserObjectInput(FChooserEvaluationContext& Context, UObject Object); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4146488D8
	};

}
