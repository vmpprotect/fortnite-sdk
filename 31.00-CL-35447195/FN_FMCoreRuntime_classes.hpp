#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FMCoreRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FMCoreRuntime.FMCoreDeveloperSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFMCoreDeveloperSettings : public UDeveloperSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMCoreRuntime.FMCoreDeveloperSettings");
			return ret;
		}
	};


	// Class FMCoreRuntime.FMCoreMusicFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFMCoreMusicFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMCoreRuntime.FMCoreMusicFunctionLibrary");
			return ret;
		}

		FMidiNote SnapToScale(FMidiNote Note, EMusicKey Key, EMusicKeyMode KeyMode); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C021D8
		FMidiNote GetMidiNoteFromScale(EMusicKey Key, int32_t Octave, EMusicInterval Interval); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C020F8
		int32_t GetIntervalStepInScale(EMusicInterval Interval, EMusicKeyMode KeyMode); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C02018
		EMusicInterval GetIntervalForNote(FMidiNote Note, EMusicKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C01F38
		EMusicInterval GetIntervalAtStepInScale(int32_t ScaleStep, EMusicKeyMode KeyMode); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C01E58
		int32_t GetDegreeShiftFromProgression(EHarmonicProgression Progression); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C01D78
	};


	// Class FMCoreRuntime.FMCoreMusicManagerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x90 (0x130 - 0xA0)
	class UFMCoreMusicManagerComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnTempoChangedDelegate; // 0xA0(0x10)
		FMulticastInlineDelegate OnSpeedChangedDelegate; // 0xB0(0x10)
		FMulticastInlineDelegate OnKeyChangedDelegate; // 0xC0(0x10)
		FMulticastInlineDelegate OnModeChangedDelegate; // 0xD0(0x10)
		FMulticastInlineDelegate OnTimeSignatureChanged; // 0xE0(0x10)
		EMusicKey StartingKey; // 0xF0(0x1)
		EMusicKeyMode StartingMode; // 0xF1(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xF2(0x2) UNKNOWN PROPERTY
		int32_t StartingTempo; // 0xF4(0x4)
		float StartingSpeed; // 0xF8(0x4)
		int32_t StartingTimeSignatureNumerator; // 0xFC(0x4)
		int32_t StartingTimeSignatureDenominator; // 0x100(0x4)
		EMusicKey CurrentKey; // 0x104(0x1)
		EMusicKeyMode CurrentMode; // 0x105(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x106(0x2) UNKNOWN PROPERTY
		int32_t CurrentTempo; // 0x108(0x4)
		float CurrentSpeed; // 0x10C(0x4)
		FFMCoreTimeSignature CurrentTimeSignature; // 0x110(0x8)
		EMusicKey ServerKey; // 0x118(0x1)
		EMusicKeyMode ServerMode; // 0x119(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x11A(0x2) UNKNOWN PROPERTY
		int32_t ServerTempo; // 0x11C(0x4)
		float ServerSpeed; // 0x120(0x4)
		FFMCoreTimeSignature ServerTimeSignature; // 0x124(0x8)
		unsigned char UnknownData07_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMCoreRuntime.FMCoreMusicManagerComponent");
			return ret;
		}

		void TriggerTimeSignatureChange(int32_t Numerator, int32_t Denominator); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414033478
		void TriggerTempoChange(int32_t BPM, bool bLocalChangeOnly); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414033398
		void TriggerSpeedChange(float Speed, bool bLocalChangeOnly); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140332B8
		void TriggerModeChange(EMusicKeyMode InMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140331D8
		void TriggerKeyChange(EMusicKey InKey); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140330F8
		void OnTimeSignatureChanged__DelegateSignature(FFMCoreTimeSignature TimeSignature); // Flags: MulticastDelegate|Public|Delegate 0x7FF414033018
		void OnTempoChanged__DelegateSignature(int32_t CurrentTempo); // Flags: MulticastDelegate|Public|Delegate 0x7FF414032F38
		void OnSpeedChanged__DelegateSignature(float CurrentSpeed); // Flags: MulticastDelegate|Public|Delegate 0x7FF414032E58
		void OnRep_ServerTimeSignatureChanged(); // Flags: Final|Native|Private 0x7FF414032D78
		void OnRep_ServerTempoChanged(); // Flags: Final|Native|Private 0x7FF414032C98
		void OnRep_ServerSpeedChanged(); // Flags: Final|Native|Private 0x7FF414032BB8
		void OnRep_ServerModeChanged(); // Flags: Final|Native|Private 0x7FF414032AD8
		void OnRep_ServerKeyChanged(); // Flags: Final|Native|Private 0x7FF4140329F8
		void OnModeChanged__DelegateSignature(EMusicKeyMode CurrentMode); // Flags: MulticastDelegate|Public|Delegate 0x7FF414032918
		void OnKeyChanged__DelegateSignature(EMusicKey CurrentKey); // Flags: MulticastDelegate|Public|Delegate 0x7FF414032838
		FFMCoreTimeSignature GetCurrentTimeSignature(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414032698
		int32_t GetCurrentTempo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140325B8
		float GetCurrentSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140324D8
		EMusicKeyMode GetCurrentKeyMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140323F8
		EMusicKey GetCurrentKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414032318
		void GetCurrentAudioState(EMusicKey& OutKey, EMusicKeyMode& OutKeyMode, int32_t& OutTempo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414032168
	};


	// Class FMCoreRuntime.FMPlayspaceScopedSystemComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UFMPlayspaceScopedSystemComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnAddedToPlayspaceSystemManager; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMCoreRuntime.FMPlayspaceScopedSystemComponent");
			return ret;
		}

		bool RemoveFromPlayspaceSystemManager(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414033718
		void OnAddedToPlayspaceSystemManager__DelegateSignature(bool Success); // Flags: MulticastDelegate|Public|Delegate 0x7FF414033638
		int32_t GetRandomSeedForPlayspace(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414033558
	};


	// Class FMCoreRuntime.FMPlayspaceScopedSystemManager
	// Inherited from UActorComponent -> UObject
	// Size: 0xC0 (0x160 - 0xA0)
	class UFMPlayspaceScopedSystemManager : public UActorComponent	
	{
	public:
		TMap VKClassRedirects; // 0xA0(0x50)
		TArray VKClassDenyList; // 0xF0(0x10)
		TArray UEFNNotableActors; // 0x100(0x10)
		TMap PlayspacesSystemInfo; // 0x110(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMCoreRuntime.FMPlayspaceScopedSystemManager");
			return ret;
		}

		void MulticastNewSystemCreated(AActor PlayspaceActor, UClass SystemClass, AActor CreatedActor); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private 0x7FF414C02478
		void GetSystemForActorIfExistsBP(UClass SystemClass, AActor Requester, AActor& OutActor, ESystemGetResult& OutWasValid); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C02398
		void GetOrCreateSystemForActorBP(UClass SystemClass, AActor Requester, AActor& OutActor, ESystemGetResult& OutWasValid); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C022B8
	};

}
