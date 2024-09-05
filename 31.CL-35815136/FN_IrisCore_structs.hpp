#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: IrisCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct IrisCore.DataStreamDefinition
	// Size: 0x18 (0x18 - 0x0)
	struct FDataStreamDefinition	
	{
	public:
		FName DataStreamName; // 0x0(0x4)
		FName ClassName; // 0x4(0x4)
		UClass* Class; // 0x8(0x8)
		EDataStreamSendStatus DefaultSendStatus; // 0x10(0x1)
		bool bAutoCreate; // 0x11(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
	};


	// Struct IrisCore.NetSerializerConfig
	// Size: 0x10 (0x10 - 0x0)
	struct FNetSerializerConfig	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct IrisCore.DateTimeNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FDateTimeNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.EnumInt8NetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x10 (0x20 - 0x10)
	struct FEnumInt8NetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		int8_t LowerBound; // 0x10(0x1)
		int8_t UpperBound; // 0x11(0x1)
		char BitCount; // 0x12(0x1)
		unsigned char UnknownData00_7[0xD]; // 0x13(0xD) UNKNOWN PROPERTY
	};


	// Struct IrisCore.EnumInt16NetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x10 (0x20 - 0x10)
	struct FEnumInt16NetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		int16_t LowerBound; // 0x10(0x2)
		int16_t UpperBound; // 0x12(0x2)
		char BitCount; // 0x14(0x1)
		unsigned char UnknownData00_7[0xB]; // 0x15(0xB) UNKNOWN PROPERTY
	};


	// Struct IrisCore.EnumInt32NetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x18 (0x28 - 0x10)
	struct FEnumInt32NetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		int32_t LowerBound; // 0x10(0x4)
		int32_t UpperBound; // 0x14(0x4)
		char BitCount; // 0x18(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x19(0xF) UNKNOWN PROPERTY
	};


	// Struct IrisCore.EnumInt64NetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x20 (0x30 - 0x10)
	struct FEnumInt64NetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		int64_t LowerBound; // 0x10(0x8)
		int64_t UpperBound; // 0x18(0x8)
		char BitCount; // 0x20(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x21(0xF) UNKNOWN PROPERTY
	};


	// Struct IrisCore.EnumUint8NetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x10 (0x20 - 0x10)
	struct FEnumUint8NetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		char LowerBound; // 0x10(0x1)
		char UpperBound; // 0x11(0x1)
		char BitCount; // 0x12(0x1)
		unsigned char UnknownData00_7[0xD]; // 0x13(0xD) UNKNOWN PROPERTY
	};


	// Struct IrisCore.EnumUint16NetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x10 (0x20 - 0x10)
	struct FEnumUint16NetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		uint16_t LowerBound; // 0x10(0x2)
		uint16_t UpperBound; // 0x12(0x2)
		char BitCount; // 0x14(0x1)
		unsigned char UnknownData00_7[0xB]; // 0x15(0xB) UNKNOWN PROPERTY
	};


	// Struct IrisCore.EnumUint32NetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x18 (0x28 - 0x10)
	struct FEnumUint32NetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		uint32_t LowerBound; // 0x10(0x4)
		uint32_t UpperBound; // 0x14(0x4)
		char BitCount; // 0x18(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x19(0xF) UNKNOWN PROPERTY
	};


	// Struct IrisCore.EnumUint64NetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x20 (0x30 - 0x10)
	struct FEnumUint64NetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		uint64_t LowerBound; // 0x10(0x8)
		uint64_t UpperBound; // 0x18(0x8)
		char BitCount; // 0x20(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x21(0xF) UNKNOWN PROPERTY
	};


	// Struct IrisCore.FloatNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FFloatNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.DoubleNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FDoubleNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.GuidNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FGuidNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.BitfieldNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x8 (0x18 - 0x10)
	struct FBitfieldNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		char BitMask; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct IrisCore.ArrayPropertyNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x30 (0x40 - 0x10)
	struct FArrayPropertyNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		uint16_t MaxElementCount; // 0x10(0x2)
		uint16_t ElementCountBitCount; // 0x12(0x2)
		unsigned char UnknownData00_7[0x2C]; // 0x14(0x2C) UNKNOWN PROPERTY
	};


	// Struct IrisCore.LastResortPropertyNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x28 (0x38 - 0x10)
	struct FLastResortPropertyNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x10(0x20) UNKNOWN PROPERTY
		uint32_t MaxAllowedObjectReferences; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct IrisCore.NetRoleNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x18 (0x28 - 0x10)
	struct FNetRoleNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		int32_t RelativeInternalOffsetToOtherRole; // 0x10(0x4)
		int32_t RelativeExternalOffsetToOtherRole; // 0x14(0x4)
		char LowerBound; // 0x18(0x1)
		char UpperBound; // 0x19(0x1)
		char BitCount; // 0x1A(0x1)
		char AutonomousProxyValue; // 0x1B(0x1)
		char SimulatedProxyValue; // 0x1C(0x1)
		unsigned char UnknownData00_7[0xB]; // 0x1D(0xB) UNKNOWN PROPERTY
	};


	// Struct IrisCore.FieldPathNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x20 (0x30 - 0x10)
	struct FFieldPathNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x10(0x20) UNKNOWN PROPERTY
	};


	// Struct IrisCore.FieldPathNetSerializerSerializationHelper
	// Size: 0x18 (0x18 - 0x0)
	struct FFieldPathNetSerializerSerializationHelper	
	{
	public:
		TWeakObjectPtr<UStruct*> Owner; // 0x0(0x8)
		TArray<FName> PropertyPath; // 0x8(0x10)
	};


	// Struct IrisCore.IntNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x8 (0x18 - 0x10)
	struct FIntNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		char BitCount; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct IrisCore.Int8RangeNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x8 (0x18 - 0x10)
	struct FInt8RangeNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		int8_t LowerBound; // 0x10(0x1)
		int8_t UpperBound; // 0x11(0x1)
		char BitCount; // 0x12(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x13(0x5) UNKNOWN PROPERTY
	};


	// Struct IrisCore.Int16RangeNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x8 (0x18 - 0x10)
	struct FInt16RangeNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		int16_t LowerBound; // 0x10(0x2)
		int16_t UpperBound; // 0x12(0x2)
		char BitCount; // 0x14(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct IrisCore.Int32RangeNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x10 (0x20 - 0x10)
	struct FInt32RangeNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		int32_t LowerBound; // 0x10(0x4)
		int32_t UpperBound; // 0x14(0x4)
		char BitCount; // 0x18(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct IrisCore.Int64RangeNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x18 (0x28 - 0x10)
	struct FInt64RangeNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		int64_t LowerBound; // 0x10(0x8)
		int64_t UpperBound; // 0x18(0x8)
		char BitCount; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct IrisCore.IrisFastArraySerializer
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FIrisFastArraySerializer : public FFastArraySerializer	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x108(0x4) UNKNOWN PROPERTY
		uint32_t ChangeMaskStorage; // 0x10C(0x10)
		unsigned char UnknownData01_7[0x4]; // 0x11C(0x4) UNKNOWN PROPERTY
	};


	// Struct IrisCore.NetBlobHandlerDefinition
	// Size: 0x4 (0x4 - 0x0)
	struct FNetBlobHandlerDefinition	
	{
	public:
		FName ClassName; // 0x0(0x4)
	};


	// Struct IrisCore.NetObjectFilterDefinition
	// Size: 0xC (0xC - 0x0)
	struct FNetObjectFilterDefinition	
	{
	public:
		FName FilterName; // 0x0(0x4)
		FName ClassName; // 0x4(0x4)
		FName ConfigClassName; // 0x8(0x4)
	};


	// Struct IrisCore.NetObjectGridFilterProfile
	// Size: 0x8 (0x8 - 0x0)
	struct FNetObjectGridFilterProfile	
	{
	public:
		FName FilterProfileName; // 0x0(0x4)
		uint16_t FrameCountBeforeCulling; // 0x4(0x2)
		unsigned char UnknownData00_7[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
	};


	// Struct IrisCore.NetObjectPrioritizerDefinition
	// Size: 0x20 (0x20 - 0x0)
	struct FNetObjectPrioritizerDefinition	
	{
	public:
		FName PrioritizerName; // 0x0(0x4)
		FName ClassName; // 0x4(0x4)
		UClass* Class; // 0x8(0x8)
		FName ConfigClassName; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		UClass* ConfigClass; // 0x18(0x8)
	};


	// Struct IrisCore.BoolNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FBoolNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.StructNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x8 (0x18 - 0x10)
	struct FStructNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct IrisCore.NopNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FNopNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.ObjectNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FObjectNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.WeakObjectNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FWeakObjectNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.ScriptInterfaceNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x8 (0x18 - 0x10)
	struct FScriptInterfaceNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		UClass* InterfaceClass; // 0x10(0x8)
	};


	// Struct IrisCore.ObjectReplicationBridgePollConfig
	// Size: 0xC (0xC - 0x0)
	struct FObjectReplicationBridgePollConfig	
	{
	public:
		FName ClassName; // 0x0(0x4)
		float PollFrequency; // 0x4(0x4)
		bool bIncludeSubclasses; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct IrisCore.ObjectReplicationBridgeFilterConfig
	// Size: 0x10 (0x10 - 0x0)
	struct FObjectReplicationBridgeFilterConfig	
	{
	public:
		FName ClassName; // 0x0(0x4)
		FName DynamicFilterName; // 0x4(0x4)
		FName FilterProfile; // 0x8(0x4)
		bool bForceEnableOnAllInstances; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct IrisCore.ObjectReplicationBridgePrioritizerConfig
	// Size: 0xC (0xC - 0x0)
	struct FObjectReplicationBridgePrioritizerConfig	
	{
	public:
		FName ClassName; // 0x0(0x4)
		FName PrioritizerName; // 0x4(0x4)
		bool bForceEnableOnAllInstances; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct IrisCore.ObjectReplicationBridgeDeltaCompressionConfig
	// Size: 0x8 (0x8 - 0x0)
	struct FObjectReplicationBridgeDeltaCompressionConfig	
	{
	public:
		FName ClassName; // 0x0(0x4)
		bool bEnableDeltaCompression; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct IrisCore.ObjectReplicatedBridgeCriticalClassConfig
	// Size: 0x8 (0x8 - 0x0)
	struct FObjectReplicatedBridgeCriticalClassConfig	
	{
	public:
		FName ClassName; // 0x0(0x4)
		bool bDisconnectOnProtocolMismatch; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct IrisCore.ObjectReplicationBridgeTypeStatsConfig
	// Size: 0xC (0xC - 0x0)
	struct FObjectReplicationBridgeTypeStatsConfig	
	{
	public:
		FName ClassName; // 0x0(0x4)
		FName TypeStatsName; // 0x4(0x4)
		bool bIncludeInMinimalCSVStats; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct IrisCore.PackedInt64NetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FPackedInt64NetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.PackedUint64NetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FPackedUint64NetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.PackedInt32NetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FPackedInt32NetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.PackedUint32NetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FPackedUint32NetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.VectorNetQuantizeNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FVectorNetQuantizeNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.VectorNetQuantize10NetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FVectorNetQuantize10NetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.VectorNetQuantize100NetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FVectorNetQuantize100NetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.VectorNetQuantizeNormalNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FVectorNetQuantizeNormalNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.PolymorphicStructNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x18 (0x28 - 0x10)
	struct FPolymorphicStructNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x10(0x18) UNKNOWN PROPERTY
	};


	// Struct IrisCore.PolymorphicArrayStructNetSerializerConfig
	// Inherited from FPolymorphicStructNetSerializerConfig -> FNetSerializerConfig
	// Size: 0x0 (0x28 - 0x28)
	struct FPolymorphicArrayStructNetSerializerConfig : public FPolymorphicStructNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.UnitQuatNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FUnitQuatNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.UnitQuat4fNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FUnitQuat4fNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.UnitQuat4dNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FUnitQuat4dNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.ObjectScopeHysteresisProfile
	// Size: 0x8 (0x8 - 0x0)
	struct FObjectScopeHysteresisProfile	
	{
	public:
		FName FilterProfileName; // 0x0(0x4)
		char HysteresisFrameCount; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct IrisCore.RotatorNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FRotatorNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.RotatorAsByteNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FRotatorAsByteNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.RotatorAsShortNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FRotatorAsShortNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.Rotator3fNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FRotator3fNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.Rotator3dNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FRotator3dNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.SoftObjectNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FSoftObjectNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.SoftObjectPathNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FSoftObjectPathNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.SoftClassPathNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FSoftClassPathNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.NameNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FNameNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.StringNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FStringNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.UintNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x8 (0x18 - 0x10)
	struct FUintNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		char BitCount; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct IrisCore.Uint8RangeNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x8 (0x18 - 0x10)
	struct FUint8RangeNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		char LowerBound; // 0x10(0x1)
		char UpperBound; // 0x11(0x1)
		char BitCount; // 0x12(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x13(0x5) UNKNOWN PROPERTY
	};


	// Struct IrisCore.Uint16RangeNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x8 (0x18 - 0x10)
	struct FUint16RangeNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		uint16_t LowerBound; // 0x10(0x2)
		uint16_t UpperBound; // 0x12(0x2)
		char BitCount; // 0x14(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct IrisCore.Uint32RangeNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x10 (0x20 - 0x10)
	struct FUint32RangeNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		uint32_t LowerBound; // 0x10(0x4)
		uint32_t UpperBound; // 0x14(0x4)
		char BitCount; // 0x18(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct IrisCore.Uint64RangeNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x18 (0x28 - 0x10)
	struct FUint64RangeNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		uint64_t LowerBound; // 0x10(0x8)
		uint64_t UpperBound; // 0x18(0x8)
		char BitCount; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct IrisCore.VectorNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FVectorNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.Vector3fNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FVector3fNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.Vector3dNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FVector3dNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct IrisCore.SupportsStructNetSerializerConfig
	// Size: 0x8 (0x8 - 0x0)
	struct FSupportsStructNetSerializerConfig	
	{
	public:
		FName StructName; // 0x0(0x4)
		bool bCanUseStructNetSerializer; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct IrisCore.InstancedStructNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x158 (0x168 - 0x10)
	struct FInstancedStructNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
		TArray<TWeakObjectPtr> SupportedTypes; // 0x10(0x10)
		unsigned char UnknownData00_7[0x148]; // 0x20(0x148) UNKNOWN PROPERTY
	};

}
