#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CreativeDynamicUIClient
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CreativeDynamicUIClient.CreativeDynamicUILibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCreativeDynamicUILibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeDynamicUIClient.CreativeDynamicUILibrary");
			return ret;
		}

		TEnumAsByte GetVerticalAlignment(ECreativeDynamicUIAlignment Alignment); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D8E120
		TEnumAsByte GetHorizontalAlignment(ECreativeDynamicUIAlignment Alignment); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D8E040
	};

}
