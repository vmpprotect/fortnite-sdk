#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioGameplay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		bool ConditionMet_Position(FVector& Position); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4145A53F8
		bool ConditionMet(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4145A5318
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

		void OnListenerExit(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF4145A55B8
		void OnListenerEnter(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF4145A54D8
	};


	// Class AudioGameplay.SoundHandleSubsystem
	// Inherited from UAudioEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0xB0 (0xE0 - 0x30)
	class USoundHandleSubsystem : public UAudioEngineSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0xB0]; // 0x30(0xB0) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x8]; // 0x220(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnStopped; // 0x228(0x10)
		FMulticastInlineDelegate OnKilled; // 0x238(0x10)
		FMulticastInlineDelegate OnVirtualized; // 0x248(0x10)
		FMulticastInlineDelegate OnUnvirtualized; // 0x258(0x10)
		TArray Components; // 0x268(0x10)
		TArray ParamsToSet; // 0x278(0x10)
		TArray PersistentParams; // 0x288(0x10)
		TArray Extensions; // 0x298(0x10)
		unsigned char UnknownData03_7[0x120]; // 0x2A8(0x120) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplay.AudioComponentGroup");
			return ret;
		}

		void UnsubscribeObject(UObject Object); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A69D8
		void SubscribeToStringParam(FName ParamName, FDelegateProperty Delegate); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A68F8
		void SubscribeToEvent(FName EventName, FDelegateProperty Delegate); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A6818
		void SubscribeToBool(FName ParamName, FDelegateProperty Delegate); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A6738
		void StopSound(USoundBase Sound, float FadeTime); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A6658
		UAudioComponentGroup StaticGetOrCreateComponentGroup(AActor Actor); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF4145A6578
		void SetVolumeMultiplier(float InVolume); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A6498
		void SetPitchMultiplier(float InPitch); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A63B8
		void SetLowPassFilter(float InFrequency); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A62D8
		void RemoveExternalComponent(UAudioComponent ComponentToRemove); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A61F8
		void RemoveExtension(TScriptInterface NewExtension); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A6118
		bool IsVirtualized(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A6038
		bool IsPlayingAny(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A5F58
		FString GetStringParamValue(FName ParamName); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A5E78
		float GetFloatParamValue(FName ParamName); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A5D98
		bool GetBoolParamValue(FName ParamName); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A5CB8
		void EnableVirtualization(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A5BD8
		void DisableVirtualization(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A5AF8
		void BroadcastStopAll(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A5A18
		void BroadcastKill(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A5938
		void BroadcastEvent(FName EventName); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A5858
		void AddExternalComponent(UAudioComponent ComponentToAdd); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A5778
		void AddExtension(TScriptInterface NewExtension); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145A5698
	};


	// Class AudioGameplay.AudioGameplayComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UAudioGameplayComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_3[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY
		TArray ActiveComponents; // 0xB8(0x10)
		TArray Parameters; // 0xC8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplay.AudioParameterComponent");
			return ret;
		}

		TArray GetParameters(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A6AB8
	};

}
