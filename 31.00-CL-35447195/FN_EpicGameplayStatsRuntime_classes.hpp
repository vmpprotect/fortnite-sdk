#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicGameplayStatsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		bool NotEqual_GameplayStatTagGameplayStatTag(FGameplayStatTag A, FGameplayStatTag B); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF41466FB58
		bool EqualEqual_GameplayStatTagGameplayStatTag(FGameplayStatTag A, FGameplayStatTag B); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF41466FA78
	};


	// Class EpicGameplayStatsRuntime.GameplayTagTableManager
	// Inherited from UDataAsset -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UGameplayTagTableManager : public UDataAsset	
	{
	public:
		TArray Tables; // 0x30(0x10)
		unsigned char UnknownData01_7[0x58]; // 0x40(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicGameplayStatsRuntime.GameplayTagTableManager");
			return ret;
		}
	};

}
