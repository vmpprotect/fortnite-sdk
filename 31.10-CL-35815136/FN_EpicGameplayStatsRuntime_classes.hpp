#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicGameplayStatsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBlueprintGameplayStatsLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary");
			return ret;
		}

		bool NotEqual_GameplayStatTagGameplayStatTag(FGameplayStatTag A, FGameplayStatTag B); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74E12C6C4(relative to base address)
		bool EqualEqual_GameplayStatTagGameplayStatTag(FGameplayStatTag A, FGameplayStatTag B); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74E12C4F0(relative to base address)
	};


	// Class EpicGameplayStatsRuntime.GameplayTagTableManager
	// Inherited from UDataAsset -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UGameplayTagTableManager : public UDataAsset	
	{
	public:
		TArray<FManagedGameplayTagDataTableItem> Tables; // 0x30(0x10)
		unsigned char UnknownData00_7[0x58]; // 0x40(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicGameplayStatsRuntime.GameplayTagTableManager");
			return ret;
		}
	};

}
