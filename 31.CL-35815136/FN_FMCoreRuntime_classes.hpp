#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMCoreRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		FMidiNote SnapToScale(FMidiNote Note, EMusicKey Key, EMusicKeyMode KeyMode); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F46450(relative to base address)
		FMidiNote GetMidiNoteFromScale(EMusicKey Key, int32_t Octave, EMusicInterval Interval); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F45898(relative to base address)
		int32_t GetIntervalStepInScale(EMusicInterval Interval, EMusicKeyMode KeyMode); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F457D8(relative to base address)
		EMusicInterval GetIntervalForNote(FMidiNote Note, EMusicKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F455EC(relative to base address)
		EMusicInterval GetIntervalAtStepInScale(int32_t ScaleStep, EMusicKeyMode KeyMode); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4552C(relative to base address)
		int32_t GetDegreeShiftFromProgression(EHarmonicProgression Progression); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F454AC(relative to base address)
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
		unsigned char UnknownData00_6[0x2]; // 0xF2(0x2) UNKNOWN PROPERTY
		int32_t StartingTempo; // 0xF4(0x4)
		float StartingSpeed; // 0xF8(0x4)
		int32_t StartingTimeSignatureNumerator; // 0xFC(0x4)
		int32_t StartingTimeSignatureDenominator; // 0x100(0x4)
		EMusicKey CurrentKey; // 0x104(0x1)
		EMusicKeyMode CurrentMode; // 0x105(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x106(0x2) UNKNOWN PROPERTY
		int32_t CurrentTempo; // 0x108(0x4)
		float CurrentSpeed; // 0x10C(0x4)
		FFMCoreTimeSignature CurrentTimeSignature; // 0x110(0x8)
		EMusicKey ServerKey; // 0x118(0x1)
		EMusicKeyMode ServerMode; // 0x119(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x11A(0x2) UNKNOWN PROPERTY
		int32_t ServerTempo; // 0x11C(0x4)
		float ServerSpeed; // 0x120(0x4)
		FFMCoreTimeSignature ServerTimeSignature; // 0x124(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMCoreRuntime.FMCoreMusicManagerComponent");
			return ret;
		}

		void TriggerTimeSignatureChange(int32_t Numerator, int32_t Denominator); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F4696C(relative to base address)
		void TriggerTempoChange(int32_t BPM, bool bLocalChangeOnly); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F468A8(relative to base address)
		void TriggerSpeedChange(float Speed, bool bLocalChangeOnly); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F467E0(relative to base address)
		void TriggerModeChange(EMusicKeyMode InMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F46760(relative to base address)
		void TriggerKeyChange(EMusicKey InKey); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F466E0(relative to base address)
		void OnTimeSignatureChanged__DelegateSignature(FFMCoreTimeSignature TimeSignature); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTempoChanged__DelegateSignature(int32_t CurrentTempo); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSpeedChanged__DelegateSignature(float CurrentSpeed); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_ServerTimeSignatureChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F463B4(relative to base address)
		void OnRep_ServerTempoChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F46380(relative to base address)
		void OnRep_ServerSpeedChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F46348(relative to base address)
		void OnRep_ServerModeChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F46314(relative to base address)
		void OnRep_ServerKeyChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F462E0(relative to base address)
		void OnModeChanged__DelegateSignature(EMusicKeyMode CurrentMode); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnKeyChanged__DelegateSignature(EMusicKey CurrentKey); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FFMCoreTimeSignature GetCurrentTimeSignature(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F45494(relative to base address)
		int32_t GetCurrentTempo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A1CC4(relative to base address)
		float GetCurrentSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F4547C(relative to base address)
		EMusicKeyMode GetCurrentKeyMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F45464(relative to base address)
		EMusicKey GetCurrentKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F4544C(relative to base address)
		void GetCurrentAudioState(EMusicKey& OutKey, EMusicKeyMode& OutKeyMode, int32_t& OutTempo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F452D8(relative to base address)
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

		bool RemoveFromPlayspaceSystemManager(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750F463EC(relative to base address)
		void OnAddedToPlayspaceSystemManager__DelegateSignature(bool Success); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetRandomSeedForPlayspace(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F45B60(relative to base address)
	};


	// Class FMCoreRuntime.FMPlayspaceScopedSystemManager
	// Inherited from UActorComponent -> UObject
	// Size: 0xC0 (0x160 - 0xA0)
	class UFMPlayspaceScopedSystemManager : public UActorComponent	
	{
	public:
		TMap<UClass*, UClass*> VKClassRedirects; // 0xA0(0x50)
		TArray<TWeakObjectPtr> VKClassDenyList; // 0xF0(0x10)
		TArray<TWeakObjectPtr> UEFNNotableActors; // 0x100(0x10)
		TMap<AActor*, FFMPlayspaceSystemInfo> PlayspacesSystemInfo; // 0x110(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMCoreRuntime.FMPlayspaceScopedSystemManager");
			return ret;
		}

		void MulticastNewSystemCreated(AActor* PlayspaceActor, UClass* SystemClass, AActor* CreatedActor); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF750F461BC(relative to base address)
		void GetSystemForActorIfExistsBP(UClass* SystemClass, AActor* Requester, AActor* OutActor, ESystemGetResult& OutWasValid); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F45B84(relative to base address)
		void GetOrCreateSystemForActorBP(UClass* SystemClass, AActor* Requester, AActor* OutActor, ESystemGetResult& OutWasValid); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F4599C(relative to base address)
	};

}
