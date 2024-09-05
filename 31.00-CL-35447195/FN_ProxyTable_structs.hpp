#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ProxyTable
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ProxyTable.ChooserParameterProxyTableBase
	// Inherited from FChooserParameterBase
	// Size: 0x0 (0x8 - 0x8)
	struct FChooserParameterProxyTableBase : public FChooserParameterBase	
	{
	public:
	};


	// Struct ProxyTable.ProxyTableContextProperty
	// Inherited from FChooserParameterProxyTableBase -> FChooserParameterBase
	// Size: 0x28 (0x30 - 0x8)
	struct FProxyTableContextProperty : public FChooserParameterProxyTableBase	
	{
	public:
		FChooserPropertyBinding Binding; // 0x8(0x28)
	};


	// Struct ProxyTable.LookupProxy
	// Inherited from FObjectChooserBase
	// Size: 0x18 (0x20 - 0x8)
	struct FLookupProxy : public FObjectChooserBase	
	{
	public:
		UProxyAsset Proxy; // 0x8(0x8)
		FInstancedStruct ProxyTable; // 0x10(0x10)
	};


	// Struct ProxyTable.LookupProxyWithOverrideTable
	// Inherited from FObjectChooserBase
	// Size: 0x10 (0x18 - 0x8)
	struct FLookupProxyWithOverrideTable : public FObjectChooserBase	
	{
	public:
		UProxyAsset Proxy; // 0x8(0x8)
		UProxyTable OverrideProxyTable; // 0x10(0x8)
	};


	// Struct ProxyTable.ProxyStructOutput
	// Size: 0x38 (0x38 - 0x0)
	struct FProxyStructOutput	
	{
	public:
		FChooserStructPropertyBinding Binding; // 0x0(0x28)
		FInstancedStruct Value; // 0x28(0x10)
	};


	// Struct ProxyTable.ProxyEntry
	// Size: 0x30 (0x30 - 0x0)
	struct FProxyEntry	
	{
	public:
		UProxyAsset Proxy; // 0x0(0x8)
		FName Key; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FInstancedStruct ValueStruct; // 0x10(0x10)
		TArray OutputStructData; // 0x20(0x10)
	};


	// Struct ProxyTable.RuntimeProxyValue
	// Size: 0x28 (0x28 - 0x0)
	struct FRuntimeProxyValue	
	{
	public:
		UProxyAsset ProxyAsset; // 0x0(0x8)
		FInstancedStruct Value; // 0x8(0x10)
		TArray OutputStructData; // 0x18(0x10)
	};

}
