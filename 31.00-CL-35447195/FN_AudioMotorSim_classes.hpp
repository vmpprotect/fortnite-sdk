#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioMotorSim
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AudioMotorSim.AudioMotorModelComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UAudioMotorModelComponent : public UActorComponent	
	{
	public:
		TArray SimComponents; // 0xA0(0x10)
		TArray AudioComponents; // 0xB0(0x10)
		unsigned char UnknownData01_7[0x40]; // 0xC0(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMotorSim.AudioMotorModelComponent");
			return ret;
		}

		void Update(FAudioMotorSimInputContext& Input); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414BBC558
		void StopOutput(); // Flags: Native|Public|BlueprintCallable 0x7FF414BBC478
		void StartOutput(); // Flags: Native|Public|BlueprintCallable 0x7FF414BBC398
		void Reset(); // Flags: Native|Public|BlueprintCallable 0x7FF414BBC2B8
		void RemoveMotorSimComponent(TScriptInterface InComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BBC1D8
		void RemoveMotorAudioComponent(TScriptInterface InComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BBC0F8
		FAudioMotorSimRuntimeContext GetRuntimeInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBC018
		float GetRpm(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBBF38
		int32_t GetGear(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBBE58
		FAudioMotorSimInputContext GetCachedInputData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBBD78
		void AddMotorSimComponent(TScriptInterface InComponent, int32_t SortOrder); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BBBC98
		void AddMotorAudioComponent(TScriptInterface InComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BBBBB8
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

		void Reset(); // Flags: Native|Public|BlueprintCallable 0x7FF414BBC718
		bool GetEnabled(); // Flags: Native|Public|BlueprintCallable 0x7FF414BBC638
	};


	// Class AudioMotorSim.AudioMotorSimComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UAudioMotorSimComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		bool bEnabled; // 0xA8(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMotorSim.AudioMotorSimComponent");
			return ret;
		}

		void SetEnabled(bool bNewEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BBC9B8
		bool BP_Update(FAudioMotorSimInputContext& Input, FAudioMotorSimRuntimeContext& RuntimeInfo); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414BBC8D8
		void BP_Reset(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414BBC7F8
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
