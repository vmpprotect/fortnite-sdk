#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ProxyTable
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData02_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		UClass Type; // 0x48(0x8)
		EObjectChooserResultType ResultType; // 0x50(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		TArray ContextData; // 0x58(0x10)
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
		TArray Keys; // 0x28(0x10)
		TArray RuntimeValues; // 0x38(0x10)

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

		FInstancedStruct MakeLookupProxyWithOverrideTable(UProxyAsset Proxy, UProxyTable ProxyTable); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414649358
		FInstancedStruct MakeLookupProxy(UProxyAsset Proxy); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414649278
		UObject EvaluateProxyTable(UObject ContextObject, UProxyTable ProxyTable, FName Key); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414649198
		UObject EvaluateProxyAsset(UObject ContextObject, UProxyAsset Proxy, UClass ObjectClass); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4146490B8
	};

}
