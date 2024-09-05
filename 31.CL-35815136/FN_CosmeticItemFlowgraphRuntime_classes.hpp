#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CosmeticItemFlowgraphRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
