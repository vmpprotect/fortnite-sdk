#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMJamCoreRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FMJamCoreRuntime.JamControllerComponent_QuestPersistence
	// Inherited from UFortControllerComponent_QuestPersistence -> UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UJamControllerComponent_QuestPersistence : public UFortControllerComponent_QuestPersistence	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

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

		bool ShouldRunServerCode(AActor* Context); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F46C74(relative to base address)
		bool ShouldRunClientCode(AActor* Context); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F46A98(relative to base address)
	};

}
