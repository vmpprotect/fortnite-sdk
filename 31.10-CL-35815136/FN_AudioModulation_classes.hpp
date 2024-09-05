#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioModulation
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AudioModulation.AudioModulationStyle
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioModulationStyle : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.AudioModulationStyle");
			return ret;
		}

		FColor GetPatchColor(); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DE735E0(relative to base address)
		FColor GetParameterColor(); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DE735C0(relative to base address)
		FColor GetModulationGeneratorColor(); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DE73488(relative to base address)
		FColor GetControlBusMixColor(); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DE73468(relative to base address)
		FColor GetControlBusColor(); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DE73448(relative to base address)
	};


	// Class AudioModulation.AudioModulationDestination
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UAudioModulationDestination : public UObject	
	{
	public:
		USoundModulatorBase* Modulator; // 0x28(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.AudioModulationDestination");
			return ret;
		}

		bool SetModulator(USoundModulatorBase* InModulator); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE73A90(relative to base address)
		float GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DE73600(relative to base address)
		USoundModulatorBase GetModulator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DE734A8(relative to base address)
		bool ClearModulator(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE72250(relative to base address)
	};


	// Class AudioModulation.AudioModulationSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UAudioModulationSettings : public UDeveloperSettings	
	{
	public:
		TArray<FSoftObjectPath> Parameters; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.AudioModulationSettings");
			return ret;
		}
	};


	// Class AudioModulation.AudioModulationStatics
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioModulationStatics : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.AudioModulationStatics");
			return ret;
		}

		void UpdateModulator(UObject* WorldContextObject, USoundModulatorBase* Modulator); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE740D0(relative to base address)
		void UpdateMixFromObject(UObject* WorldContextObject, USoundControlBusMix* Mix, float FadeTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE73FB0(relative to base address)
		void UpdateMixByFilter(UObject* WorldContextObject, USoundControlBusMix* Mix, FString AddressFilter, UClass* ParamClassFilter, USoundModulationParameter* ParamFilter, float Value, float FadeTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE73D14(relative to base address)
		void UpdateMix(UObject* WorldContextObject, USoundControlBusMix* Mix, TArray<FSoundControlBusMixStage> Stages, float FadeTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE73B5C(relative to base address)
		void SetGlobalBusMixValue(UObject* WorldContextObject, USoundControlBus* Bus, float Value, float FadeTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF748479DE8(relative to base address)
		void SaveMixToProfile(UObject* WorldContextObject, USoundControlBusMix* Mix, int32_t ProfileIndex); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE73980(relative to base address)
		TArray LoadMixFromProfile(UObject* WorldContextObject, USoundControlBusMix* Mix, bool bActivate, int32_t ProfileIndex); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE7375C(relative to base address)
		bool IsControlBusMixActive(UObject* WorldContextObject, USoundControlBusMix* Mix); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DE73628(relative to base address)
		float GetModulatorValue(UObject* WorldContextObject, USoundModulatorBase* Modulator); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7474F0C0C(relative to base address)
		TSet GetModulatorsFromDestination(FSoundModulationDestinationSettings& Destination); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DE734C0(relative to base address)
		void DeactivateGenerator(UObject* WorldContextObject, USoundModulationGenerator* Generator); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE73340(relative to base address)
		void DeactivateBusMix(UObject* WorldContextObject, USoundControlBusMix* Mix); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF747981380(relative to base address)
		void DeactivateBus(UObject* WorldContextObject, USoundControlBus* Bus); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE73274(relative to base address)
		void DeactivateAllBusMixes(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE731C8(relative to base address)
		USoundModulationParameter CreateModulationParameter(UObject* WorldContextObject, FName Name, UClass* ParamClass, float DefaultValue); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74DE7306C(relative to base address)
		UAudioModulationDestination CreateModulationDestination(UObject* WorldContextObject, FName Name, USoundModulatorBase* Modulator); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE72F44(relative to base address)
		USoundModulationGeneratorLFO CreateLFOGenerator(UObject* WorldContextObject, FName Name, FSoundModulationLFOParams Params); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE72DB0(relative to base address)
		USoundModulationGeneratorEnvelopeFollower CreateEnvelopeFollowerGenerator(UObject* WorldContextObject, FName Name, FEnvelopeFollowerGeneratorParams Params); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE72C0C(relative to base address)
		FSoundControlBusMixStage CreateBusMixStage(UObject* WorldContextObject, USoundControlBus* Bus, float Value, float AttackTime, float ReleaseTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE72A68(relative to base address)
		USoundControlBusMix CreateBusMixFromValue(UObject* WorldContextObject, FName Name, TArray<USoundControlBus*>& Buses, float Value, float AttackTime, float ReleaseTime, bool bActivate); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DE7263C(relative to base address)
		USoundControlBusMix CreateBusMix(UObject* WorldContextObject, FName Name, TArray<FSoundControlBusMixStage> Stages, bool Activate); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE724BC(relative to base address)
		USoundControlBus CreateBus(UObject* WorldContextObject, FName Name, USoundModulationParameter* Parameter, bool Activate); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE72384(relative to base address)
		USoundModulationGeneratorADEnvelope CreateADEnvelopeGenerator(UObject* WorldContextObject, FName Name, FSoundModulationADEnvelopeParams& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DE72274(relative to base address)
		void ClearGlobalBusMixValue(UObject* WorldContextObject, USoundControlBus* Bus, float FadeTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE72130(relative to base address)
		void ClearAllGlobalBusMixValues(UObject* WorldContextObject, float FadeTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE7207C(relative to base address)
		void ActivateGenerator(UObject* WorldContextObject, USoundModulationGenerator* Generator); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE71F74(relative to base address)
		void ActivateBusMix(UObject* WorldContextObject, USoundControlBusMix* Mix); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF747981198(relative to base address)
		void ActivateBus(UObject* WorldContextObject, USoundControlBus* Bus); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DE71EA8(relative to base address)
	};


	// Class AudioModulation.SoundModulationGenerator
	// Inherited from USoundModulatorBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class USoundModulationGenerator : public USoundModulatorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundModulationGenerator");
			return ret;
		}
	};


	// Class AudioModulation.SoundModulationGeneratorADEnvelope
	// Inherited from USoundModulationGenerator -> USoundModulatorBase -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class USoundModulationGeneratorADEnvelope : public USoundModulationGenerator	
	{
	public:
		FSoundModulationADEnvelopeParams Params; // 0x30(0x14)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundModulationGeneratorADEnvelope");
			return ret;
		}
	};


	// Class AudioModulation.SoundModulationGeneratorEnvelopeFollower
	// Inherited from USoundModulationGenerator -> USoundModulatorBase -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class USoundModulationGeneratorEnvelopeFollower : public USoundModulationGenerator	
	{
	public:
		FEnvelopeFollowerGeneratorParams Params; // 0x30(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundModulationGeneratorEnvelopeFollower");
			return ret;
		}
	};


	// Class AudioModulation.SoundModulationGeneratorLFO
	// Inherited from USoundModulationGenerator -> USoundModulatorBase -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class USoundModulationGeneratorLFO : public USoundModulationGenerator	
	{
	public:
		FSoundModulationLFOParams Params; // 0x30(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundModulationGeneratorLFO");
			return ret;
		}
	};


	// Class AudioModulation.SoundControlBus
	// Inherited from USoundModulatorBase -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class USoundControlBus : public USoundModulatorBase	
	{
	public:
		bool bBypass; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FString address; // 0x38(0x10)
		TArray<USoundModulationGenerator*> Generators; // 0x48(0x10)
		USoundModulationParameter* Parameter; // 0x58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundControlBus");
			return ret;
		}
	};


	// Class AudioModulation.SoundControlBusMix
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class USoundControlBusMix : public UObject	
	{
	public:
		uint32_t ProfileIndex; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray<FSoundControlBusMixStage> MixStages; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundControlBusMix");
			return ret;
		}

		void SoloMix(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DE73B20(relative to base address)
		void SaveMixToProfile(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DE73A78(relative to base address)
		void LoadMixFromProfile(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DE7394C(relative to base address)
		void DeactivateMix(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DE7340C(relative to base address)
		void DeactivateAllMixes(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DE73238(relative to base address)
		void ActivateMix(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DE72068(relative to base address)
	};


	// Class AudioModulation.SoundModulationParameter
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class USoundModulationParameter : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FSoundModulationParameterSettings Settings; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundModulationParameter");
			return ret;
		}
	};


	// Class AudioModulation.SoundModulationParameterScaled
	// Inherited from USoundModulationParameter -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class USoundModulationParameterScaled : public USoundModulationParameter	
	{
	public:
		float UnitMin; // 0x38(0x4)
		float UnitMax; // 0x3C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundModulationParameterScaled");
			return ret;
		}
	};


	// Class AudioModulation.SoundModulationParameterFrequencyBase
	// Inherited from USoundModulationParameter -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class USoundModulationParameterFrequencyBase : public USoundModulationParameter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundModulationParameterFrequencyBase");
			return ret;
		}
	};


	// Class AudioModulation.SoundModulationParameterFrequency
	// Inherited from USoundModulationParameterFrequencyBase -> USoundModulationParameter -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class USoundModulationParameterFrequency : public USoundModulationParameterFrequencyBase	
	{
	public:
		float UnitMin; // 0x38(0x4)
		float UnitMax; // 0x3C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundModulationParameterFrequency");
			return ret;
		}
	};


	// Class AudioModulation.SoundModulationParameterFilterFrequency
	// Inherited from USoundModulationParameterFrequencyBase -> USoundModulationParameter -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class USoundModulationParameterFilterFrequency : public USoundModulationParameterFrequencyBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundModulationParameterFilterFrequency");
			return ret;
		}
	};


	// Class AudioModulation.SoundModulationParameterLPFFrequency
	// Inherited from USoundModulationParameterFilterFrequency -> USoundModulationParameterFrequencyBase -> USoundModulationParameter -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class USoundModulationParameterLPFFrequency : public USoundModulationParameterFilterFrequency	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundModulationParameterLPFFrequency");
			return ret;
		}
	};


	// Class AudioModulation.SoundModulationParameterHPFFrequency
	// Inherited from USoundModulationParameterFilterFrequency -> USoundModulationParameterFrequencyBase -> USoundModulationParameter -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class USoundModulationParameterHPFFrequency : public USoundModulationParameterFilterFrequency	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundModulationParameterHPFFrequency");
			return ret;
		}
	};


	// Class AudioModulation.SoundModulationParameterBipolar
	// Inherited from USoundModulationParameter -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class USoundModulationParameterBipolar : public USoundModulationParameter	
	{
	public:
		float UnitRange; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundModulationParameterBipolar");
			return ret;
		}
	};


	// Class AudioModulation.SoundModulationParameterVolume
	// Inherited from USoundModulationParameter -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class USoundModulationParameterVolume : public USoundModulationParameter	
	{
	public:
		float MinVolume; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundModulationParameterVolume");
			return ret;
		}
	};


	// Class AudioModulation.SoundModulationParameterAdditive
	// Inherited from USoundModulationParameter -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class USoundModulationParameterAdditive : public USoundModulationParameter	
	{
	public:
		float UnitMin; // 0x38(0x4)
		float UnitMax; // 0x3C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundModulationParameterAdditive");
			return ret;
		}
	};


	// Class AudioModulation.SoundModulationPatch
	// Inherited from USoundModulatorBase -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class USoundModulationPatch : public USoundModulatorBase	
	{
	public:
		FSoundControlModulationPatch PatchSettings; // 0x30(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundModulationPatch");
			return ret;
		}
	};

}
