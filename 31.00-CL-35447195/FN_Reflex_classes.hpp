#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Reflex
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Reflex.ReflexBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UReflexBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Reflex.ReflexBlueprintLibrary");
			return ret;
		}

		void SetReflexMode(EReflexMode Mode); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB8D60
		void SetFlashIndicatorEnabled(bool bEnabled); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB8C80
		float GetRenderLatencyInMs(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EB8BA0
		EReflexMode GetReflexMode(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EB8AC0
		bool GetReflexAvailable(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EB89E0
		float GetGameToRenderLatencyInMs(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EB8900
		float GetGameLatencyInMs(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EB8820
		bool GetFlashIndicatorEnabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EB8740
	};

}
