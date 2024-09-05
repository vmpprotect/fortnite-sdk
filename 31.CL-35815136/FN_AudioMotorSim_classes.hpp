#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioMotorSim
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AudioMotorSim.AudioMotorModelComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UAudioMotorModelComponent : public UActorComponent	
	{
	public:
		TArray<FMotorSimEntry> SimComponents; // 0xA0(0x10)
		TArray<TScriptInterface> AudioComponents; // 0xB0(0x10)
		unsigned char UnknownData00_7[0x40]; // 0xC0(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMotorSim.AudioMotorModelComponent");
			return ret;
		}

		void Update(FAudioMotorSimInputContext& Input); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7505D9AF8(relative to base address)
		void StopOutput(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7470D9EB4(relative to base address)
		void StartOutput(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7474A9F44(relative to base address)
		void Reset(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74847EE18(relative to base address)
		void RemoveMotorSimComponent(TScriptInterface<Class> InComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505D9954(relative to base address)
		void RemoveMotorAudioComponent(TScriptInterface<Class> InComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505D981C(relative to base address)
		FAudioMotorSimRuntimeContext GetRuntimeInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505D97F8(relative to base address)
		float GetRpm(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749336438(relative to base address)
		int32_t GetGear(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505D97E0(relative to base address)
		FAudioMotorSimInputContext GetCachedInputData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505D97A0(relative to base address)
		void AddMotorSimComponent(TScriptInterface<Class> InComponent, int32_t SortOrder); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748220AE8(relative to base address)
		void AddMotorAudioComponent(TScriptInterface<Class> InComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505D967C(relative to base address)
	};


	// Class AudioMotorSim.AudioMotorSim
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioMotorSim : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMotorSim.AudioMotorSim");
			return ret;
		}

		void Reset(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF749263428(relative to base address)
		bool GetEnabled(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7484CB9B0(relative to base address)
	};


	// Class AudioMotorSim.AudioMotorSimComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UAudioMotorSimComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		bool bEnabled; // 0xA8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMotorSim.AudioMotorSimComponent");
			return ret;
		}

		void SetEnabled(bool bNewEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505D9A78(relative to base address)
		bool BP_Update(FAudioMotorSimInputContext& Input, FAudioMotorSimRuntimeContext& RuntimeInfo); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_Reset(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class AudioMotorSim.AudioMotorSimOutput
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioMotorSimOutput : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMotorSim.AudioMotorSimOutput");
			return ret;
		}
	};

}
