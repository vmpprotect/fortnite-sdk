#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMJamLoadReporter
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FMJamLoadReporter.JamLoadReporter
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x150 - 0xA0)
	class UJamLoadReporter : public UGameStateComponent	
	{
	public:
		unsigned char UnknownData00_1[0xB0]; // 0xA0(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamLoadReporter.JamLoadReporter");
			return ret;
		}

		UJamLoadReporter TryGet(UObject* WorldContext); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7510C6724(relative to base address)
		void OnResolveComplete(UJamContentResolver* Sender, FString LinkCode, bool bSuccess); // Flags: Final|Native|Private, Memory Exec: 0x7FF7510C6910(relative to base address)
		void OnResolveAndLoadComplete(UJamContentResolver* Sender, FString LinkCode, bool bSuccess, bool bWasAlreadyLoaded); // Flags: Final|Native|Private, Memory Exec: 0x7FF7510C67A4(relative to base address)
		UJamLoadReporter Get(UObject* WorldContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510C6724(relative to base address)
		TArray GenerateFullReport(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C66E8(relative to base address)
	};

}
