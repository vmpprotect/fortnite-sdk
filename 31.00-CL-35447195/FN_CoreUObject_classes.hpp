#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CoreUObject
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CoreUObject.Object
	// Size: 0x28 (0x28 - 0x0)
	class UObject	
	{
	public:
		uint64_t vtable; // 0x0(0x8)
		EObjectFlags ObjectFlags; // 0x8(0x4)
		int InternalIndex; // 0xC(0x4)
		UClass ClassPrivate; // 0x10(0x8)
		FName NamePrivate; // 0x18(0x8)
		UObject OuterPrivate; // 0x20(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.Object");
			return ret;
		}

		void ExecuteUbergraph(int32_t EntryPoint); // Flags: Event|Public|BlueprintEvent 0x7FF410F9D9C0
	};


	// Class CoreUObject.TestInstanceDataObjectClass
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UTestInstanceDataObjectClass : public UObject	
	{
	public:
		int32_t int32; // 0x28(0x4)
		FTestInstanceDataObjectStruct Struct; // 0x2C(0x10)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.TestInstanceDataObjectClass");
			return ret;
		}
	};


	// Class CoreUObject.OptionalPropertyTestObject
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UOptionalPropertyTestObject : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x38]; // 0x28(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.OptionalPropertyTestObject");
			return ret;
		}
	};


	// Class CoreUObject.Field
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UField : public UObject	
	{
	public:
		UField Next; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.Field");
			return ret;
		}
	};


	// Class CoreUObject.Struct
	// Inherited from UField -> UObject
	// Size: 0x80 (0xB0 - 0x30)
	class UStruct : public UField	
	{
	public:
		UStruct SuperStruct; // 0x30(0x8)
		UField Children; // 0x38(0x8)
		unsigned char UnknownData01_7[0x70]; // 0x40(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.Struct");
			return ret;
		}
	};


	// Class CoreUObject.ScriptStruct
	// Inherited from UStruct -> UField -> UObject
	// Size: 0x10 (0xC0 - 0xB0)
	class UScriptStruct : public UStruct	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0xB0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.ScriptStruct");
			return ret;
		}
	};


	// Class CoreUObject.UserDefinedStruct
	// Inherited from UScriptStruct -> UStruct -> UField -> UObject
	// Size: 0x48 (0x108 - 0xC0)
	class UUserDefinedStruct : public UScriptStruct	
	{
	public:
		TEnumAsByte Status; // 0xC0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		FGuid Guid; // 0xC4(0x10)
		unsigned char UnknownData03_7[0x34]; // 0xD4(0x34) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.UserDefinedStruct");
			return ret;
		}
	};


	// Class CoreUObject.UserDefinedStructEditorDataBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UUserDefinedStructEditorDataBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.UserDefinedStructEditorDataBase");
			return ret;
		}
	};


	// Class CoreUObject.Package
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UPackage : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.Package");
			return ret;
		}
	};


	// Class CoreUObject.Class
	// Inherited from UStruct -> UField -> UObject
	// Size: 0x150 (0x200 - 0xB0)
	class UClass : public UStruct	
	{
	public:
		unsigned char UnknownData01_1[0x150]; // 0xB0(0x150) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.Class");
			return ret;
		}
	};


	// Class CoreUObject.VerseVMClass
	// Inherited from UClass -> UStruct -> UField -> UObject
	// Size: 0x0 (0x200 - 0x200)
	class UVerseVMClass : public UClass	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.VerseVMClass");
			return ret;
		}
	};


	// Class CoreUObject.Interface
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterface : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.Interface");
			return ret;
		}
	};


	// Class CoreUObject.EditorPathObjectInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEditorPathObjectInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.EditorPathObjectInterface");
			return ret;
		}
	};


	// Class CoreUObject.GCObjectReferencer
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGCObjectReferencer : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.GCObjectReferencer");
			return ret;
		}
	};


	// Class CoreUObject.TextBuffer
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UTextBuffer : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x28(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.TextBuffer");
			return ret;
		}
	};


	// Class CoreUObject.PropertyBagMissingObject
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPropertyBagMissingObject : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.PropertyBagMissingObject");
			return ret;
		}
	};


	// Class CoreUObject.PropertyBag
	// Inherited from UScriptStruct -> UStruct -> UField -> UObject
	// Size: 0x18 (0xD8 - 0xC0)
	class UPropertyBag : public UScriptStruct	
	{
	public:
		TArray PropertyDescs; // 0xC0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.PropertyBag");
			return ret;
		}
	};


	// Class CoreUObject.Function
	// Inherited from UStruct -> UField -> UObject
	// Size: 0x30 (0xE0 - 0xB0)
	class UFunction : public UStruct	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0xB0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.Function");
			return ret;
		}
	};


	// Class CoreUObject.DelegateFunction
	// Inherited from UFunction -> UStruct -> UField -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UDelegateFunction : public UFunction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.DelegateFunction");
			return ret;
		}
	};


	// Class CoreUObject.SparseDelegateFunction
	// Inherited from UDelegateFunction -> UFunction -> UStruct -> UField -> UObject
	// Size: 0x8 (0xE8 - 0xE0)
	class USparseDelegateFunction : public UDelegateFunction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xE0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.SparseDelegateFunction");
			return ret;
		}
	};


	// Class CoreUObject.Enum
	// Inherited from UField -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UEnum : public UField	
	{
	public:
		unsigned char UnknownData01_1[0x38]; // 0x30(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.Enum");
			return ret;
		}
	};


	// Class CoreUObject.EnumCookedMetaData
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UEnumCookedMetaData : public UObject	
	{
	public:
		FObjectCookedMetaDataStore EnumMetaData; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.EnumCookedMetaData");
			return ret;
		}
	};


	// Class CoreUObject.StructCookedMetaData
	// Inherited from UObject
	// Size: 0xA0 (0xC8 - 0x28)
	class UStructCookedMetaData : public UObject	
	{
	public:
		FStructCookedMetaDataStore StructMetaData; // 0x28(0xA0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.StructCookedMetaData");
			return ret;
		}
	};


	// Class CoreUObject.ClassCookedMetaData
	// Inherited from UObject
	// Size: 0xF0 (0x118 - 0x28)
	class UClassCookedMetaData : public UObject	
	{
	public:
		FStructCookedMetaDataStore ClassMetaData; // 0x28(0xA0)
		TMap FunctionsMetaData; // 0xC8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.ClassCookedMetaData");
			return ret;
		}
	};


	// Class CoreUObject.PackageMap
	// Inherited from UObject
	// Size: 0xB8 (0xE0 - 0x28)
	class UPackageMap : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0xB8]; // 0x28(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.PackageMap");
			return ret;
		}
	};


	// Class CoreUObject.ObjectReachabilityStressData
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UObjectReachabilityStressData : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.ObjectReachabilityStressData");
			return ret;
		}
	};


	// Class CoreUObject.LinkerPlaceholderClass
	// Inherited from UClass -> UStruct -> UField -> UObject
	// Size: 0x1C0 (0x3C0 - 0x200)
	class ULinkerPlaceholderClass : public UClass	
	{
	public:
		unsigned char UnknownData01_1[0x1C0]; // 0x200(0x1C0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.LinkerPlaceholderClass");
			return ret;
		}
	};


	// Class CoreUObject.LinkerPlaceholderExportObject
	// Inherited from UObject
	// Size: 0xD0 (0xF8 - 0x28)
	class ULinkerPlaceholderExportObject : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0xD0]; // 0x28(0xD0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.LinkerPlaceholderExportObject");
			return ret;
		}
	};


	// Class CoreUObject.LinkerPlaceholderFunction
	// Inherited from UFunction -> UStruct -> UField -> UObject
	// Size: 0x1C0 (0x2A0 - 0xE0)
	class ULinkerPlaceholderFunction : public UFunction	
	{
	public:
		unsigned char UnknownData01_1[0x1C0]; // 0xE0(0x1C0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.LinkerPlaceholderFunction");
			return ret;
		}
	};


	// Class CoreUObject.MetaData
	// Inherited from UObject
	// Size: 0xA0 (0xC8 - 0x28)
	class UMetaData : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0xA0]; // 0x28(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.MetaData");
			return ret;
		}
	};


	// Class CoreUObject.ObjectRedirector
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UObjectRedirector : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.ObjectRedirector");
			return ret;
		}
	};


	// Class CoreUObject.Property
	// Inherited from UField -> UObject
	// Size: 0x40 (0x70 - 0x30)
	class UProperty : public UField	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x30(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.Property");
			return ret;
		}
	};


	// Class CoreUObject.EnumProperty
	// Inherited from UProperty -> UField -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UEnumProperty : public UProperty	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x70(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.EnumProperty");
			return ret;
		}
	};


	// Class CoreUObject.ArrayProperty
	// Inherited from UProperty -> UField -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UArrayProperty : public UProperty	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.ArrayProperty");
			return ret;
		}
	};


	// Class CoreUObject.ObjectPropertyBase
	// Inherited from UProperty -> UField -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UObjectPropertyBase : public UProperty	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.ObjectPropertyBase");
			return ret;
		}
	};


	// Class CoreUObject.BoolProperty
	// Inherited from UProperty -> UField -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UBoolProperty : public UProperty	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.BoolProperty");
			return ret;
		}
	};


	// Class CoreUObject.NumericProperty
	// Inherited from UProperty -> UField -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UNumericProperty : public UProperty	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.NumericProperty");
			return ret;
		}
	};


	// Class CoreUObject.ByteProperty
	// Inherited from UNumericProperty -> UProperty -> UField -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UByteProperty : public UNumericProperty	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.ByteProperty");
			return ret;
		}
	};


	// Class CoreUObject.ObjectProperty
	// Inherited from UObjectPropertyBase -> UProperty -> UField -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UObjectProperty : public UObjectPropertyBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.ObjectProperty");
			return ret;
		}
	};


	// Class CoreUObject.ClassProperty
	// Inherited from UObjectProperty -> UObjectPropertyBase -> UProperty -> UField -> UObject
	// Size: 0x8 (0x80 - 0x78)
	class UClassProperty : public UObjectProperty	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.ClassProperty");
			return ret;
		}
	};


	// Class CoreUObject.DelegateProperty
	// Inherited from UProperty -> UField -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UDelegateProperty : public UProperty	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.DelegateProperty");
			return ret;
		}
	};


	// Class CoreUObject.DoubleProperty
	// Inherited from UNumericProperty -> UProperty -> UField -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UDoubleProperty : public UNumericProperty	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.DoubleProperty");
			return ret;
		}
	};


	// Class CoreUObject.FloatProperty
	// Inherited from UNumericProperty -> UProperty -> UField -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UFloatProperty : public UNumericProperty	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.FloatProperty");
			return ret;
		}
	};


	// Class CoreUObject.IntProperty
	// Inherited from UNumericProperty -> UProperty -> UField -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UIntProperty : public UNumericProperty	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.IntProperty");
			return ret;
		}
	};


	// Class CoreUObject.Int8Property
	// Inherited from UNumericProperty -> UProperty -> UField -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UInt8Property : public UNumericProperty	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.Int8Property");
			return ret;
		}
	};


	// Class CoreUObject.Int16Property
	// Inherited from UNumericProperty -> UProperty -> UField -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UInt16Property : public UNumericProperty	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.Int16Property");
			return ret;
		}
	};


	// Class CoreUObject.Int64Property
	// Inherited from UNumericProperty -> UProperty -> UField -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UInt64Property : public UNumericProperty	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.Int64Property");
			return ret;
		}
	};


	// Class CoreUObject.InterfaceProperty
	// Inherited from UProperty -> UField -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UInterfaceProperty : public UProperty	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.InterfaceProperty");
			return ret;
		}
	};


	// Class CoreUObject.LazyObjectProperty
	// Inherited from UObjectPropertyBase -> UProperty -> UField -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class ULazyObjectProperty : public UObjectPropertyBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.LazyObjectProperty");
			return ret;
		}
	};


	// Class CoreUObject.MapProperty
	// Inherited from UProperty -> UField -> UObject
	// Size: 0x28 (0x98 - 0x70)
	class UMapProperty : public UProperty	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x70(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.MapProperty");
			return ret;
		}
	};


	// Class CoreUObject.MulticastDelegateProperty
	// Inherited from UProperty -> UField -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UMulticastDelegateProperty : public UProperty	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.MulticastDelegateProperty");
			return ret;
		}
	};


	// Class CoreUObject.MulticastInlineDelegateProperty
	// Inherited from UMulticastDelegateProperty -> UProperty -> UField -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.MulticastInlineDelegateProperty");
			return ret;
		}
	};


	// Class CoreUObject.MulticastSparseDelegateProperty
	// Inherited from UMulticastDelegateProperty -> UProperty -> UField -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.MulticastSparseDelegateProperty");
			return ret;
		}
	};


	// Class CoreUObject.NameProperty
	// Inherited from UProperty -> UField -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UNameProperty : public UProperty	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.NameProperty");
			return ret;
		}
	};


	// Class CoreUObject.SetProperty
	// Inherited from UProperty -> UField -> UObject
	// Size: 0x20 (0x90 - 0x70)
	class USetProperty : public UProperty	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x70(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.SetProperty");
			return ret;
		}
	};


	// Class CoreUObject.SoftObjectProperty
	// Inherited from UObjectPropertyBase -> UProperty -> UField -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class USoftObjectProperty : public UObjectPropertyBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.SoftObjectProperty");
			return ret;
		}
	};


	// Class CoreUObject.SoftClassProperty
	// Inherited from USoftObjectProperty -> UObjectPropertyBase -> UProperty -> UField -> UObject
	// Size: 0x8 (0x80 - 0x78)
	class USoftClassProperty : public USoftObjectProperty	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.SoftClassProperty");
			return ret;
		}
	};


	// Class CoreUObject.StrProperty
	// Inherited from UProperty -> UField -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UStrProperty : public UProperty	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.StrProperty");
			return ret;
		}
	};


	// Class CoreUObject.StructProperty
	// Inherited from UProperty -> UField -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UStructProperty : public UProperty	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.StructProperty");
			return ret;
		}
	};


	// Class CoreUObject.UInt16Property
	// Inherited from UNumericProperty -> UProperty -> UField -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UUInt16Property : public UNumericProperty	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.UInt16Property");
			return ret;
		}
	};


	// Class CoreUObject.UInt32Property
	// Inherited from UNumericProperty -> UProperty -> UField -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UUInt32Property : public UNumericProperty	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.UInt32Property");
			return ret;
		}
	};


	// Class CoreUObject.UInt64Property
	// Inherited from UNumericProperty -> UProperty -> UField -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UUInt64Property : public UNumericProperty	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.UInt64Property");
			return ret;
		}
	};


	// Class CoreUObject.WeakObjectProperty
	// Inherited from UObjectPropertyBase -> UProperty -> UField -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UWeakObjectProperty : public UObjectPropertyBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.WeakObjectProperty");
			return ret;
		}
	};


	// Class CoreUObject.TextProperty
	// Inherited from UProperty -> UField -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UTextProperty : public UProperty	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.TextProperty");
			return ret;
		}
	};


	// Class CoreUObject.PropertyWrapper
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UPropertyWrapper : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.PropertyWrapper");
			return ret;
		}
	};


	// Class CoreUObject.MulticastDelegatePropertyWrapper
	// Inherited from UPropertyWrapper -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UMulticastDelegatePropertyWrapper : public UPropertyWrapper	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.MulticastDelegatePropertyWrapper");
			return ret;
		}
	};


	// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
	// Inherited from UMulticastDelegatePropertyWrapper -> UPropertyWrapper -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CoreUObject.MulticastInlineDelegatePropertyWrapper");
			return ret;
		}
	};

}
