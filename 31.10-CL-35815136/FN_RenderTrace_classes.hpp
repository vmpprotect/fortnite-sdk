#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: RenderTrace
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class RenderTrace.MaterialExpressionPhysicalMaterialOutput
	// Inherited from UMaterialExpressionCustomOutput -> UMaterialExpression -> UObject
	// Size: 0x10 (0xC0 - 0xB0)
	class UMaterialExpressionPhysicalMaterialOutput : public UMaterialExpressionCustomOutput	
	{
	public:
		TArray<FPhysicalMaterialTraceInput> Inputs; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RenderTrace.MaterialExpressionPhysicalMaterialOutput");
			return ret;
		}
	};

}
