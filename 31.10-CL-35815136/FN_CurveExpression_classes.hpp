#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CurveExpression
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CurveExpression.CurveExpressionsDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UCurveExpressionsDataAsset : public UDataAsset	
	{
	public:
		TArray<FName> NamedConstants; // 0x30(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CurveExpression.CurveExpressionsDataAsset");
			return ret;
		}
	};

}
