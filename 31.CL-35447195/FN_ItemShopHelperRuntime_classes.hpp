#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ItemShopHelperRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ItemShopHelperRuntime.ProvideDataForItemShopExporter
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UProvideDataForItemShopExporter : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemShopHelperRuntime.ProvideDataForItemShopExporter");
			return ret;
		}
	};


	// Class ItemShopHelperRuntime.ItemShopJsonCustomTemplateInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UItemShopJsonCustomTemplateInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemShopHelperRuntime.ItemShopJsonCustomTemplateInterface");
			return ret;
		}
	};


	// Class ItemShopHelperRuntime.ItemShopJsonMcpItemTemplateInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UItemShopJsonMcpItemTemplateInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemShopHelperRuntime.ItemShopJsonMcpItemTemplateInterface");
			return ret;
		}
	};

}
