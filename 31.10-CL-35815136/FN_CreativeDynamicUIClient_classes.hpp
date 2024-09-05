#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CreativeDynamicUIClient
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		TEnumAsByte GetVerticalAlignment(ECreativeDynamicUIAlignment Alignment); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516EE23C(relative to base address)
		TEnumAsByte GetHorizontalAlignment(ECreativeDynamicUIAlignment Alignment); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516EE168(relative to base address)
	};

}
