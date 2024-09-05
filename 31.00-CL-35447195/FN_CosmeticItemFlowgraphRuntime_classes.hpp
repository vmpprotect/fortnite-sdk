#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CosmeticItemFlowgraphRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CosmeticItemFlowgraphRuntime.CosmeticItemStep_GliderLoadAssets
	// Inherited from UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UCosmeticItemStep_GliderLoadAssets : public UFortCosmeticStep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticItemFlowgraphRuntime.CosmeticItemStep_GliderLoadAssets");
			return ret;
		}
	};


	// Class CosmeticItemFlowgraphRuntime.CosmeticItemStep_GliderPostLoad
	// Inherited from UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UCosmeticItemStep_GliderPostLoad : public UFortCosmeticStep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticItemFlowgraphRuntime.CosmeticItemStep_GliderPostLoad");
			return ret;
		}
	};

}
