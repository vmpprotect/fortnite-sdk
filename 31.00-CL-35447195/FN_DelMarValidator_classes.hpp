#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarValidator
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		ADelMarCheckpoint GetStartingLineCheckpoint(UWorld World); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DE8940
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
		TArray ValidatorTasks; // 0x28(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarValidator.GameFeatureAction_AddDelMarTask");
			return ret;
		}
	};

}
