#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Serialization
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Serialization.StructSerializerNumericTestStruct
	// Size: 0x30 (0x30 - 0x0)
	struct FStructSerializerNumericTestStruct	
	{
	public:
		int8_t int8; // 0x0(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x1(0x1) UNKNOWN PROPERTY
		int16_t int16; // 0x2(0x2)
		int32_t int32; // 0x4(0x4)
		int64_t int64; // 0x8(0x8)
		char uint8; // 0x10(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x11(0x1) UNKNOWN PROPERTY
		uint16_t uint16; // 0x12(0x2)
		uint32_t uint32; // 0x14(0x4)
		uint64_t uint64; // 0x18(0x8)
		float float; // 0x20(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		double Double; // 0x28(0x8)
	};


	// Struct Serialization.StructSerializerBooleanTestStruct
	// Size: 0x3 (0x3 - 0x0)
	struct FStructSerializerBooleanTestStruct	
	{
	public:
		bool BoolFalse; // 0x0(0x1)
		bool BoolTrue; // 0x1(0x1)
		bool Bitfield0 : 1; // 0x2:0(0x1)
		bool Bitfield1 : 1; // 0x2:1(0x1)
		bool Bitfield2Set : 1; // 0x2:2(0x1)
		bool Bitfield3 : 1; // 0x2:3(0x1)
		bool Bitfield4Set : 1; // 0x2:4(0x1)
		bool Bitfield5Set : 1; // 0x2:5(0x1)
		bool Bitfield6 : 1; // 0x2:6(0x1)
		bool Bitfield7Set : 1; // 0x2:7(0x1)
	};


	// Struct Serialization.StructSerializerObjectTestStruct
	// Size: 0xA0 (0xA0 - 0x0)
	struct FStructSerializerObjectTestStruct	
	{
	public:
		UClass RawClass; // 0x0(0x8)
		UClass WrappedClass; // 0x8(0x8)
		UClass SubClass; // 0x10(0x8)
		TWeakObjectPtr SoftClass; // 0x18(0x20)
		UObject RawObject; // 0x38(0x8)
		UObject WrappedObject; // 0x40(0x8)
		TWeakObjectPtr WeakObject; // 0x48(0x8)
		TWeakObjectPtr SoftObject; // 0x50(0x20)
		FSoftClassPath ClassPath; // 0x70(0x18)
		FSoftObjectPath ObjectPath; // 0x88(0x18)
	};


	// Struct Serialization.StructSerializerBuiltinTestStruct
	// Size: 0xD0 (0xD0 - 0x0)
	struct FStructSerializerBuiltinTestStruct	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		FName Name; // 0x10(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FString String; // 0x18(0x10)
		FText Text; // 0x28(0x10)
		FDateTime DateTime; // 0x38(0x8)
		FTimespan Timespan; // 0x40(0x8)
		FVector Vector; // 0x48(0x18)
		FVector4 Vector4; // 0x60(0x20)
		FRotator Rotator; // 0x80(0x18)
		unsigned char UnknownData04_6[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		FQuat Quat; // 0xA0(0x20)
		FColor Color; // 0xC0(0x4)
		unsigned char UnknownData05_7[0xC]; // 0xC4(0xC) UNKNOWN PROPERTY
	};


	// Struct Serialization.StructSerializerLWCTypesTest
	// Size: 0x360 (0x360 - 0x0)
	struct FStructSerializerLWCTypesTest	
	{
	public:
		FVector Vector; // 0x0(0x18)
		FVector2D Vector2D; // 0x18(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FVector4 Vector4; // 0x30(0x20)
		FMatrix Matrix; // 0x50(0x80)
		FPlane Plane; // 0xD0(0x20)
		FQuat Quat; // 0xF0(0x20)
		FRotator Rotator; // 0x110(0x18)
		unsigned char UnknownData04_6[0x8]; // 0x128(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x130(0x60)
		FBox Box; // 0x190(0x38)
		FBox2D Box2D; // 0x1C8(0x28)
		FBoxSphereBounds BoxSphereBounds; // 0x1F0(0x38)
		FOrientedBox OrientedBox; // 0x228(0x78)
		float float; // 0x2A0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x2A4(0x4) UNKNOWN PROPERTY
		double Double; // 0x2A8(0x8)
		TArray VectorArray; // 0x2B0(0x10)
		TMap StrToVec; // 0x2C0(0x50)
		TSet VectorSet; // 0x310(0x50)
	};


	// Struct Serialization.OrientedBoxFloat
	// Size: 0x3C (0x3C - 0x0)
	struct FOrientedBoxFloat	
	{
	public:
		FVector3f Center; // 0x0(0xC)
		FVector3f AxisX; // 0xC(0xC)
		FVector3f AxisY; // 0x18(0xC)
		FVector3f AxisZ; // 0x24(0xC)
		float ExtentX; // 0x30(0x4)
		float ExtentY; // 0x34(0x4)
		float ExtentZ; // 0x38(0x4)
	};


	// Struct Serialization.StructSerializerNonLWCTypesTest
	// Size: 0x220 (0x220 - 0x0)
	struct FStructSerializerNonLWCTypesTest	
	{
	public:
		FVector3f Vector; // 0x0(0xC)
		FVector2f Vector2D; // 0xC(0x8)
		unsigned char UnknownData04_6[0xC]; // 0x14(0xC) UNKNOWN PROPERTY
		FVector4f Vector4; // 0x20(0x10)
		FMatrix44f Matrix; // 0x30(0x40)
		FPlane4f Plane; // 0x70(0x10)
		FQuat4f Quat; // 0x80(0x10)
		FRotator3f Rotator; // 0x90(0xC)
		unsigned char UnknownData05_6[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
		FTransform3f Transform; // 0xA0(0x30)
		FBox3f Box; // 0xD0(0x1C)
		FBox2f Box2D; // 0xEC(0x14)
		FBoxSphereBounds3f BoxSphereBounds; // 0x100(0x1C)
		FOrientedBoxFloat OrientedBox; // 0x11C(0x3C)
		float float; // 0x158(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x15C(0x4) UNKNOWN PROPERTY
		double Double; // 0x160(0x8)
		TArray VectorArray; // 0x168(0x10)
		TMap StrToVec; // 0x178(0x50)
		TSet VectorSet; // 0x1C8(0x50)
		unsigned char UnknownData07_7[0x8]; // 0x218(0x8) UNKNOWN PROPERTY
	};


	// Struct Serialization.StructSerializerByteArray
	// Size: 0x38 (0x38 - 0x0)
	struct FStructSerializerByteArray	
	{
	public:
		int32_t Dummy1; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray ByteArray; // 0x8(0x10)
		int32_t Dummy2; // 0x18(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		TArray Int8Array; // 0x20(0x10)
		int32_t Dummy3; // 0x30(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct Serialization.StructSerializerArrayTestStruct
	// Size: 0x60 (0x60 - 0x0)
	struct FStructSerializerArrayTestStruct	
	{
	public:
		TArray Int32Array; // 0x0(0x10)
		TArray ByteArray; // 0x10(0x10)
		int32_t StaticSingleElement; // 0x20(0x4)
		int32_t StaticInt32Array; // 0x24(0xC)
		float StaticFloatArray; // 0x30(0xC)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray VectorArray; // 0x40(0x10)
		TArray StructArray; // 0x50(0x10)
	};


	// Struct Serialization.StructSerializerMapTestStruct
	// Size: 0x140 (0x140 - 0x0)
	struct FStructSerializerMapTestStruct	
	{
	public:
		TMap IntToStr; // 0x0(0x50)
		TMap StrToStr; // 0x50(0x50)
		TMap StrToVec; // 0xA0(0x50)
		TMap StrToStruct; // 0xF0(0x50)
	};


	// Struct Serialization.StructSerializerSetTestStruct
	// Size: 0x140 (0x140 - 0x0)
	struct FStructSerializerSetTestStruct	
	{
	public:
		TSet StrSet; // 0x0(0x50)
		TSet IntSet; // 0x50(0x50)
		TSet NameSet; // 0xA0(0x50)
		TSet StructSet; // 0xF0(0x50)
	};


	// Struct Serialization.StructSerializerOptionalTestStruct
	// Size: 0x210 (0x210 - 0x0)
	struct FStructSerializerOptionalTestStruct	
	{
	public:
		unsigned char UnknownData01_2[0x210]; // 0x0(0x210) UNKNOWN PROPERTY
	};


	// Struct Serialization.StructSerializerTestStruct
	// Size: 0xA00 (0xA00 - 0x0)
	struct FStructSerializerTestStruct	
	{
	public:
		FStructSerializerNumericTestStruct Numerics; // 0x0(0x30)
		FStructSerializerBooleanTestStruct Booleans; // 0x30(0x3)
		unsigned char UnknownData02_6[0x5]; // 0x33(0x5) UNKNOWN PROPERTY
		FStructSerializerObjectTestStruct Objects; // 0x38(0xA0)
		unsigned char UnknownData03_6[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY
		FStructSerializerBuiltinTestStruct Builtins; // 0xE0(0xD0)
		FStructSerializerArrayTestStruct Arrays; // 0x1B0(0x60)
		FStructSerializerMapTestStruct Maps; // 0x210(0x140)
		FStructSerializerSetTestStruct Sets; // 0x350(0x140)
		FStructSerializerOptionalTestStruct Optionals; // 0x490(0x210)
		FStructSerializerLWCTypesTest LWCTypes; // 0x6A0(0x360)
	};

}
