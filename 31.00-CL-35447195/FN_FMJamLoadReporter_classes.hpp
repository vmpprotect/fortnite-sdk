#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FMJamLoadReporter
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FMJamLoadReporter.JamLoadReporter
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x150 - 0xA0)
	class UJamLoadReporter : public UGameStateComponent	
	{
	public:
		unsigned char UnknownData01_1[0xB0]; // 0xA0(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamLoadReporter.JamLoadReporter");
			return ret;
		}

		UJamLoadReporter TryGet(UObject WorldContext); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C1D918
		void OnResolveComplete(UJamContentResolver Sender, FString LinkCode, bool bSuccess); // Flags: Final|Native|Private 0x7FF414C1D838
		void OnResolveAndLoadComplete(UJamContentResolver Sender, FString LinkCode, bool bSuccess, bool bWasAlreadyLoaded); // Flags: Final|Native|Private 0x7FF414C1D758
		UJamLoadReporter Get(UObject WorldContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C1D678
		TArray GenerateFullReport(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1D598
	};

}
