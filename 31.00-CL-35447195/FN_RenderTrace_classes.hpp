#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: RenderTrace
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class RenderTrace.MaterialExpressionPhysicalMaterialOutput
	// Inherited from UMaterialExpressionCustomOutput -> UMaterialExpression -> UObject
	// Size: 0x10 (0xC0 - 0xB0)
	class UMaterialExpressionPhysicalMaterialOutput : public UMaterialExpressionCustomOutput	
	{
	public:
		TArray Inputs; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RenderTrace.MaterialExpressionPhysicalMaterialOutput");
			return ret;
		}
	};

}
