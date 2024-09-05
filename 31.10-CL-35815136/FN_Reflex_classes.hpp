#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Reflex
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		void SetReflexMode(EReflexMode Mode); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7520A5718(relative to base address)
		void SetFlashIndicatorEnabled(bool bEnabled); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7520A56A8(relative to base address)
		float GetRenderLatencyInMs(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7520A5680(relative to base address)
		EReflexMode GetReflexMode(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7520A55FC(relative to base address)
		bool GetReflexAvailable(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7520A55D8(relative to base address)
		float GetGameToRenderLatencyInMs(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7520A55B0(relative to base address)
		float GetGameLatencyInMs(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7520A5588(relative to base address)
		bool GetFlashIndicatorEnabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7520A5504(relative to base address)
	};

}
