#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FMJamCoreRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FMJamCoreRuntime.JamControllerComponent_QuestPersistence
	// Inherited from UFortControllerComponent_QuestPersistence -> UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UJamControllerComponent_QuestPersistence : public UFortControllerComponent_QuestPersistence	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamCoreRuntime.JamControllerComponent_QuestPersistence");
			return ret;
		}
	};


	// Class FMJamCoreRuntime.JamCoreBPFL
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJamCoreBPFL : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamCoreRuntime.JamCoreBPFL");
			return ret;
		}

		bool ShouldRunServerCode(AActor Context); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C02638
		bool ShouldRunClientCode(AActor Context); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C02558
	};

}
