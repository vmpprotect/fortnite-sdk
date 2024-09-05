#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioGameplayVolume
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AudioGameplayVolume.AudioGameplayVolumeMutator
	// Inherited from UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UAudioGameplayVolumeMutator : public UAudioGameplayComponent	
	{
	public:
		int32_t Priority; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplayVolume.AudioGameplayVolumeMutator");
			return ret;
		}

		void SetPriority(int32_t InPriority); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DFB04D4(relative to base address)
	};


	// Class AudioGameplayVolume.AttenuationVolumeComponent
	// Inherited from UAudioGameplayVolumeMutator -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xC0 - 0xB0)
	class UAttenuationVolumeComponent : public UAudioGameplayVolumeMutator	
	{
	public:
		float ExteriorVolume; // 0xB0(0x4)
		float ExteriorTime; // 0xB4(0x4)
		float InteriorVolume; // 0xB8(0x4)
		float InteriorTime; // 0xBC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplayVolume.AttenuationVolumeComponent");
			return ret;
		}

		void SetInteriorVolume(float Volume, float InterpolateTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DFB0400(relative to base address)
		void SetExteriorVolume(float Volume, float InterpolateTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DFB032C(relative to base address)
	};


	// Class AudioGameplayVolume.AudioGameplayVolume
	// Inherited from AVolume -> ABrush -> AActor -> UObject
	// Size: 0x30 (0x2F8 - 0x2C8)
	class AAudioGameplayVolume : public AVolume	
	{
	public:
		UAudioGameplayVolumeComponent* AGVComponent; // 0x2C8(0x8)
		bool bEnabled; // 0x2D0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2D1(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnListenerEnterEvent; // 0x2D8(0x10)
		FMulticastInlineDelegate OnListenerExitEvent; // 0x2E8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplayVolume.AudioGameplayVolume");
			return ret;
		}

		void SetEnabled(bool bEnable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DFB0294(relative to base address)
		void OnRep_bEnabled(); // Flags: Native|Protected, Memory Exec: 0x7FF74D8E21E8(relative to base address)
		void OnListenerExit(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74917265C(relative to base address)
		void OnListenerEnter(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF749172684(relative to base address)
	};


	// Class AudioGameplayVolume.AudioGameplayVolumeComponent
	// Inherited from UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UAudioGameplayVolumeComponent : public UAudioGameplayComponent	
	{
	public:
		FMulticastInlineDelegate OnProxyEnter; // 0xA8(0x10)
		FMulticastInlineDelegate OnProxyExit; // 0xB8(0x10)
		UAudioGameplayVolumeProxy* Proxy; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplayVolume.AudioGameplayVolumeComponent");
			return ret;
		}
	};


	// Class AudioGameplayVolume.AudioGameplayVolumeComponentBase
	// Inherited from UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UAudioGameplayVolumeComponentBase : public UAudioGameplayComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplayVolume.AudioGameplayVolumeComponentBase");
			return ret;
		}
	};


	// Class AudioGameplayVolume.AudioGameplayVolumeProxy
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UAudioGameplayVolumeProxy : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplayVolume.AudioGameplayVolumeProxy");
			return ret;
		}
	};


	// Class AudioGameplayVolume.AGVPrimitiveComponentProxy
	// Inherited from UAudioGameplayVolumeProxy -> UObject
	// Size: 0x10 (0x58 - 0x48)
	class UAGVPrimitiveComponentProxy : public UAudioGameplayVolumeProxy	
	{
	public:
		UPrimitiveComponent* PrimitiveComp; // 0x48(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplayVolume.AGVPrimitiveComponentProxy");
			return ret;
		}
	};


	// Class AudioGameplayVolume.AGVConditionProxy
	// Inherited from UAudioGameplayVolumeProxy -> UObject
	// Size: 0x10 (0x58 - 0x48)
	class UAGVConditionProxy : public UAudioGameplayVolumeProxy	
	{
	public:
		UObject* ObjectPtr; // 0x48(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplayVolume.AGVConditionProxy");
			return ret;
		}
	};


	// Class AudioGameplayVolume.AudioGameplayVolumeSubsystem
	// Inherited from UAudioEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x138 (0x168 - 0x30)
	class UAudioGameplayVolumeSubsystem : public UAudioEngineSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		TArray<UAudioGameplayVolumeProxy*> TransientProxyList; // 0x38(0x10)
		TMap<uint32_t, UAudioGameplayVolumeComponent*> AGVComponents; // 0x48(0x50)
		unsigned char UnknownData01_7[0xD0]; // 0x98(0xD0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplayVolume.AudioGameplayVolumeSubsystem");
			return ret;
		}
	};


	// Class AudioGameplayVolume.FilterVolumeComponent
	// Inherited from UAudioGameplayVolumeMutator -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xC0 - 0xB0)
	class UFilterVolumeComponent : public UAudioGameplayVolumeMutator	
	{
	public:
		float ExteriorLPF; // 0xB0(0x4)
		float ExteriorLPFTime; // 0xB4(0x4)
		float InteriorLPF; // 0xB8(0x4)
		float InteriorLPFTime; // 0xBC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplayVolume.FilterVolumeComponent");
			return ret;
		}

		void SetInteriorLPF(float Volume, float InterpolateTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DFB0400(relative to base address)
		void SetExteriorLPF(float Volume, float InterpolateTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DFB032C(relative to base address)
	};


	// Class AudioGameplayVolume.ReverbVolumeComponent
	// Inherited from UAudioGameplayVolumeMutator -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xD0 - 0xB0)
	class UReverbVolumeComponent : public UAudioGameplayVolumeMutator	
	{
	public:
		FReverbSettings ReverbSettings; // 0xB0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplayVolume.ReverbVolumeComponent");
			return ret;
		}

		void SetReverbSettings(FReverbSettings& NewReverbSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DFB0560(relative to base address)
	};


	// Class AudioGameplayVolume.SubmixOverrideVolumeComponent
	// Inherited from UAudioGameplayVolumeMutator -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xC0 - 0xB0)
	class USubmixOverrideVolumeComponent : public UAudioGameplayVolumeMutator	
	{
	public:
		TArray<FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplayVolume.SubmixOverrideVolumeComponent");
			return ret;
		}

		void SetSubmixOverrideSettings(TArray<FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DFB060C(relative to base address)
	};


	// Class AudioGameplayVolume.SubmixSendVolumeComponent
	// Inherited from UAudioGameplayVolumeMutator -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xC0 - 0xB0)
	class USubmixSendVolumeComponent : public UAudioGameplayVolumeMutator	
	{
	public:
		TArray<FAudioVolumeSubmixSendSettings> SubmixSendSettings; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplayVolume.SubmixSendVolumeComponent");
			return ret;
		}

		void SetSubmixSendSettings(TArray<FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DFB06D0(relative to base address)
	};

}
