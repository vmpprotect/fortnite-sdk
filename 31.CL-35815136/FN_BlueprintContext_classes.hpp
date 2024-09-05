#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BlueprintContext
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		USubsystem GetContext(UObject* ContextObject, UClass* Class); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7489CB188(relative to base address)
	};

}
