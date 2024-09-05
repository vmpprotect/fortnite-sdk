#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ProxyTable
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ProxyTable.ChooserParameterProxyTable
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UChooserParameterProxyTable : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ProxyTable.ChooserParameterProxyTable");
			return ret;
		}
	};


	// Class ProxyTable.ProxyAsset
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UProxyAsset : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		UClass* Type; // 0x48(0x8)
		EObjectChooserResultType ResultType; // 0x50(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		TArray<FInstancedStruct> ContextData; // 0x58(0x10)
		FInstancedStruct ProxyTable; // 0x68(0x10)
		FGuid Guid; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ProxyTable.ProxyAsset");
			return ret;
		}
	};


	// Class ProxyTable.ProxyTable
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UProxyTable : public UObject	
	{
	public:
		TArray<FGuid> Keys; // 0x28(0x10)
		TArray<FRuntimeProxyValue> RuntimeValues; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ProxyTable.ProxyTable");
			return ret;
		}
	};


	// Class ProxyTable.ProxyTableFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UProxyTableFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ProxyTable.ProxyTableFunctionLibrary");
			return ret;
		}

		FInstancedStruct MakeLookupProxyWithOverrideTable(UProxyAsset* Proxy, UProxyTable* ProxyTable); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DC29F34(relative to base address)
		FInstancedStruct MakeLookupProxy(UProxyAsset* Proxy); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DC29E68(relative to base address)
		UObject EvaluateProxyTable(UObject* ContextObject, UProxyTable* ProxyTable, FName Key); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DC29C8C(relative to base address)
		UObject EvaluateProxyAsset(UObject* ContextObject, UProxyAsset* Proxy, UClass* ObjectClass); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DC29AB4(relative to base address)
	};

}
