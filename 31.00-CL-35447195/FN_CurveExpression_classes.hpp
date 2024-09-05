#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CurveExpression
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CurveExpression.CurveExpressionsDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UCurveExpressionsDataAsset : public UDataAsset	
	{
	public:
		TArray NamedConstants; // 0x30(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CurveExpression.CurveExpressionsDataAsset");
			return ret;
		}
	};

}
