#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioGameplay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AudioGameplay.AudioAssetUserData
	// Inherited from UAssetUserData -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UAudioAssetUserData : public UAssetUserData	
	{
	public:
		FGameplayTagContainer MetadataTags; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplay.AudioAssetUserData");
			return ret;
		}
	};


	// Class AudioGameplay.AudioComponentGroupExtension
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioComponentGroupExtension : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplay.AudioComponentGroupExtension");
			return ret;
		}
	};


	// Class AudioGameplay.AudioGameplayCondition
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioGameplayCondition : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplay.AudioGameplayCondition");
			return ret;
		}

		bool ConditionMet_Position(FVector& Position); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF747006FF0(relative to base address)
		bool ConditionMet(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF747A09D0C(relative to base address)
	};


	// Class AudioGameplay.AudioGameplayVolumeInteraction
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioGameplayVolumeInteraction : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplay.AudioGameplayVolumeInteraction");
			return ret;
		}

		void OnListenerExit(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF749263428(relative to base address)
		void OnListenerEnter(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF748D7CC28(relative to base address)
	};


	// Class AudioGameplay.SoundHandleSubsystem
	// Inherited from UAudioEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0xB0 (0xE0 - 0x30)
	class USoundHandleSubsystem : public UAudioEngineSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0xB0]; // 0x30(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplay.SoundHandleSubsystem");
			return ret;
		}
	};


	// Class AudioGameplay.AudioComponentGroup
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x1B0 (0x3D0 - 0x220)
	class UAudioComponentGroup : public USceneComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x220(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnStopped; // 0x228(0x10)
		FMulticastInlineDelegate OnKilled; // 0x238(0x10)
		FMulticastInlineDelegate OnVirtualized; // 0x248(0x10)
		FMulticastInlineDelegate OnUnvirtualized; // 0x258(0x10)
		TArray<UAudioComponent*> Components; // 0x268(0x10)
		TArray<FAudioParameter> ParamsToSet; // 0x278(0x10)
		TArray<FAudioParameter> PersistentParams; // 0x288(0x10)
		TArray<TScriptInterface> Extensions; // 0x298(0x10)
		unsigned char UnknownData01_7[0x120]; // 0x2A8(0x120) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplay.AudioComponentGroup");
			return ret;
		}

		void UnsubscribeObject(UObject* Object); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE99634(relative to base address)
		void SubscribeToStringParam(FName ParamName, FDelegateProperty Delegate); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE9955C(relative to base address)
		void SubscribeToEvent(FName EventName, FDelegateProperty Delegate); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE99484(relative to base address)
		void SubscribeToBool(FName ParamName, FDelegateProperty Delegate); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE993AC(relative to base address)
		void StopSound(USoundBase* Sound, float FadeTime); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE992E8(relative to base address)
		UAudioComponentGroup StaticGetOrCreateComponentGroup(AActor* Actor); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CE99268(relative to base address)
		void SetVolumeMultiplier(float InVolume); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE991E8(relative to base address)
		void SetPitchMultiplier(float InPitch); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE99168(relative to base address)
		void SetLowPassFilter(float InFrequency); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C461384(relative to base address)
		void RemoveExternalComponent(UAudioComponent* ComponentToRemove); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE99058(relative to base address)
		void RemoveExtension(TScriptInterface<Class> NewExtension); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE98F28(relative to base address)
		bool IsVirtualized(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE98F10(relative to base address)
		bool IsPlayingAny(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE98EF4(relative to base address)
		FString GetStringParamValue(FName ParamName); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE98E50(relative to base address)
		float GetFloatParamValue(FName ParamName); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE98DC0(relative to base address)
		bool GetBoolParamValue(FName ParamName); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE98D34(relative to base address)
		void EnableVirtualization(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE98D20(relative to base address)
		void DisableVirtualization(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE98D0C(relative to base address)
		void BroadcastStopAll(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE98CF0(relative to base address)
		void BroadcastKill(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE98CD4(relative to base address)
		void BroadcastEvent(FName EventName); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE98C54(relative to base address)
		void AddExternalComponent(UAudioComponent* ComponentToAdd); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE98A8C(relative to base address)
		void AddExtension(TScriptInterface<Class> NewExtension); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE98968(relative to base address)
	};


	// Class AudioGameplay.AudioGameplayComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UAudioGameplayComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplay.AudioGameplayComponent");
			return ret;
		}
	};


	// Class AudioGameplay.AudioRequirementPreset
	// Inherited from UDataAsset -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UAudioRequirementPreset : public UDataAsset	
	{
	public:
		FGameplayTagQuery Query; // 0x30(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplay.AudioRequirementPreset");
			return ret;
		}
	};


	// Class AudioGameplay.AudioGameplayTagCacheSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UAudioGameplayTagCacheSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplay.AudioGameplayTagCacheSubsystem");
			return ret;
		}
	};


	// Class AudioGameplay.AudioParameterComponent
	// Inherited from UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UAudioParameterComponent : public UAudioGameplayComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> ActiveComponents; // 0xB8(0x10)
		TArray<FAudioParameter> Parameters; // 0xC8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplay.AudioParameterComponent");
			return ret;
		}

		TArray GetParameters(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74956ECA8(relative to base address)
	};

}
