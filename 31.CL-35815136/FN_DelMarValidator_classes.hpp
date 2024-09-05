#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarValidator
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DelMarValidator.DelMarValidator_Checkpoints
	// Inherited from UDelMarWorldValidator_Task -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UDelMarValidator_Checkpoints : public UDelMarWorldValidator_Task	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarValidator.DelMarValidator_Checkpoints");
			return ret;
		}

		ADelMarCheckpoint GetStartingLineCheckpoint(UWorld* World); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751A01C60(relative to base address)
	};


	// Class DelMarValidator.DelMarValidator_ModeManager
	// Inherited from UDelMarWorldValidator_Task -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UDelMarValidator_ModeManager : public UDelMarWorldValidator_Task	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarValidator.DelMarValidator_ModeManager");
			return ret;
		}
	};


	// Class DelMarValidator.DelMarValidator_Tracks
	// Inherited from UDelMarWorldValidator_Task -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UDelMarValidator_Tracks : public UDelMarWorldValidator_Task	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarValidator.DelMarValidator_Tracks");
			return ret;
		}
	};


	// Class DelMarValidator.GameFeatureAction_AddDelMarTask
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UGameFeatureAction_AddDelMarTask : public UGameFeatureAction	
	{
	public:
		TArray<TWeakObjectPtr> ValidatorTasks; // 0x28(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarValidator.GameFeatureAction_AddDelMarTask");
			return ret;
		}
	};

}
