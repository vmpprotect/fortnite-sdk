#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioModulation
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		FColor GetPatchColor(); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414656398
		FColor GetParameterColor(); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4146562B8
		FColor GetModulationGeneratorColor(); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4146561D8
		FColor GetControlBusMixColor(); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4146560F8
		FColor GetControlBusColor(); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414656018
	};


	// Class AudioModulation.AudioModulationDestination
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UAudioModulationDestination : public UObject	
	{
	public:
		USoundModulatorBase Modulator; // 0x28(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.AudioModulationDestination");
			return ret;
		}

		bool SetModulator(USoundModulatorBase InModulator); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414656718
		float GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414656638
		USoundModulatorBase GetModulator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414656558
		bool ClearModulator(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414656478
	};


	// Class AudioModulation.AudioModulationSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UAudioModulationSettings : public UDeveloperSettings	
	{
	public:
		TArray Parameters; // 0x30(0x10)

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

		void UpdateModulator(UObject WorldContextObject, USoundModulatorBase Modulator); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414657F98
		void UpdateMixFromObject(UObject WorldContextObject, USoundControlBusMix Mix, float FadeTime); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414657EB8
		void UpdateMixByFilter(UObject WorldContextObject, USoundControlBusMix Mix, FString AddressFilter, UClass ParamClassFilter, USoundModulationParameter ParamFilter, float Value, float FadeTime); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414657DD8
		void UpdateMix(UObject WorldContextObject, USoundControlBusMix Mix, TArray Stages, float FadeTime); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414657CF8
		void SetGlobalBusMixValue(UObject WorldContextObject, USoundControlBus Bus, float Value, float FadeTime); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414657C18
		void SaveMixToProfile(UObject WorldContextObject, USoundControlBusMix Mix, int32_t ProfileIndex); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414657B38
		TArray LoadMixFromProfile(UObject WorldContextObject, USoundControlBusMix Mix, bool bActivate, int32_t ProfileIndex); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414657A58
		bool IsControlBusMixActive(UObject WorldContextObject, USoundControlBusMix Mix); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414657978
		float GetModulatorValue(UObject WorldContextObject, USoundModulatorBase Modulator); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414657898
		TSet GetModulatorsFromDestination(FSoundModulationDestinationSettings& Destination); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4146577B8
		void DeactivateGenerator(UObject WorldContextObject, USoundModulationGenerator Generator); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4146576D8
		void DeactivateBusMix(UObject WorldContextObject, USoundControlBusMix Mix); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4146575F8
		void DeactivateBus(UObject WorldContextObject, USoundControlBus Bus); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414657518
		void DeactivateAllBusMixes(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414657438
		USoundModulationParameter CreateModulationParameter(UObject WorldContextObject, FName Name, UClass ParamClass, float DefaultValue); // Flags: Final|Native|Static|Public 0x7FF414657358
		UAudioModulationDestination CreateModulationDestination(UObject WorldContextObject, FName Name, USoundModulatorBase Modulator); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414657278
		USoundModulationGeneratorLFO CreateLFOGenerator(UObject WorldContextObject, FName Name, FSoundModulationLFOParams Params); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414657198
		USoundModulationGeneratorEnvelopeFollower CreateEnvelopeFollowerGenerator(UObject WorldContextObject, FName Name, FEnvelopeFollowerGeneratorParams Params); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4146570B8
		FSoundControlBusMixStage CreateBusMixStage(UObject WorldContextObject, USoundControlBus Bus, float Value, float AttackTime, float ReleaseTime); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414656FD8
		USoundControlBusMix CreateBusMixFromValue(UObject WorldContextObject, FName Name, TArray& Buses, float Value, float AttackTime, float ReleaseTime, bool bActivate); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414656EF8
		USoundControlBusMix CreateBusMix(UObject WorldContextObject, FName Name, TArray Stages, bool Activate); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414656E18
		USoundControlBus CreateBus(UObject WorldContextObject, FName Name, USoundModulationParameter Parameter, bool Activate); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414656D38
		USoundModulationGeneratorADEnvelope CreateADEnvelopeGenerator(UObject WorldContextObject, FName Name, FSoundModulationADEnvelopeParams& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414656C58
		void ClearGlobalBusMixValue(UObject WorldContextObject, USoundControlBus Bus, float FadeTime); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414656B78
		void ClearAllGlobalBusMixValues(UObject WorldContextObject, float FadeTime); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414656A98
		void ActivateGenerator(UObject WorldContextObject, USoundModulationGenerator Generator); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4146569B8
		void ActivateBusMix(UObject WorldContextObject, USoundControlBusMix Mix); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4146568D8
		void ActivateBus(UObject WorldContextObject, USoundControlBus Bus); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4146567F8
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
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FString address; // 0x38(0x10)
		TArray Generators; // 0x48(0x10)
		USoundModulationParameter Parameter; // 0x58(0x8)

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
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray MixStages; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioModulation.SoundControlBusMix");
			return ret;
		}

		void SoloMix(); // Flags: Final|Native|Protected 0x7FF4146584D8
		void SaveMixToProfile(); // Flags: Final|Native|Protected 0x7FF4146583F8
		void LoadMixFromProfile(); // Flags: Final|Native|Protected 0x7FF414658318
		void DeactivateMix(); // Flags: Final|Native|Protected 0x7FF414658238
		void DeactivateAllMixes(); // Flags: Final|Native|Protected 0x7FF414658158
		void ActivateMix(); // Flags: Final|Native|Protected 0x7FF414658078
	};


	// Class AudioModulation.SoundModulationParameter
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class USoundModulationParameter : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FSoundModulationParameterSettings Settings; // 0x30(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

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
