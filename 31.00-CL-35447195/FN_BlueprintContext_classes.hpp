#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BlueprintContext
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class BlueprintContext.BlueprintContextBase
	// Inherited from USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UBlueprintContextBase : public USubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlueprintContext.BlueprintContextBase");
			return ret;
		}
	};


	// Class BlueprintContext.BlueprintContextLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBlueprintContextLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlueprintContext.BlueprintContextLibrary");
			return ret;
		}

		USubsystem GetContext(UObject ContextObject, UClass Class); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414650358
	};

}
