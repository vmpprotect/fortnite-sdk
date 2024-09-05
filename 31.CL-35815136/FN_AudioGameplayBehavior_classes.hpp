#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioGameplayBehavior
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AudioGameplayBehavior.AudioGameplayBehavior
	// Inherited from UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UAudioGameplayBehavior : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		bool bKillOnSoundsFinished; // 0xA8(0x1)
		bool bTickWhileStopped; // 0xA9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAllSoundsFinished; // 0xB0(0x10)
		FMulticastInlineDelegate OnSoundFinished; // 0xC0(0x10)
		TArray<FActiveVoice> PlayingSounds; // 0xD0(0x10)
		UAudioComponentGroup* ComponentGroupOwner; // 0xE0(0x8)
		unsigned char UnknownData02_7[0x10]; // 0xE8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplayBehavior.AudioGameplayBehavior");
			return ret;
		}

		void SubscribeToStringParam(FName ParamName, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505AE3E4(relative to base address)
		void SubscribeToEvent(FName EventName, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505AE30C(relative to base address)
		void SubscribeToBoolParam(FName ParamName, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505AE234(relative to base address)
		void StopSound(USoundBase* Sound, float InFadeOutTime, EAudioFaderCurve InFadeCurve); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505AE13C(relative to base address)
		void StopComponent(UAudioComponent* Comp, float InFadeOutTime, EAudioFaderCurve InFadeCurve); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7490F2B34(relative to base address)
		void StopById(FPlayingId ID, float InFadeOutTime, EAudioFaderCurve InFadeCurve); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505ADE88(relative to base address)
		void StopAllPlayingVoices(float InFadeOutTime); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505ADE08(relative to base address)
		void Stop(); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7470D9EB4(relative to base address)
		void Start(); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7474A9F44(relative to base address)
		void SetPlayState(EAudioGameplayBehaviorPlayState NewState); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505ADD84(relative to base address)
		FActiveVoice PlaySound(USoundBase* Sound, float InFadeInTime, float InTargetVolume, float InStartTime, bool bDisableAttenuation, EAudioFaderCurve InFadeCurve, FVector InRelativeLocation, FRotator InRelativeRotation); // Flags: Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7474AA590(relative to base address)
		void PlayFrom(UAudioComponentGroup* SoundGroup); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E94BB5C(relative to base address)
		void Kill(); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F0F9DB4(relative to base address)
		bool IsVirtualized(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C397A08(relative to base address)
		bool IsPlayingAny(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E25C030(relative to base address)
		FString GetStringParamValue(FName ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505ADCC8(relative to base address)
		EAudioGameplayBehaviorPlayState GetStopState(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CDBD9C8(relative to base address)
		UAudioComponentGroup GetSoundGroup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DE155EC(relative to base address)
		EAudioGameplayBehaviorPlayState GetPlayState(); // Flags: Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74E0AB93C(relative to base address)
		float GetFloatParamValue(FName ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505ADC34(relative to base address)
		bool GetBoolParamValue(FName ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF747CE1D80(relative to base address)
		void EnableVirtualization(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505ADC20(relative to base address)
		void DisableVirtualization(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505ADC0C(relative to base address)
		void BP_OnVirtualized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnvirtualized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnStop(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnStart(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnGroupSet(UAudioComponentGroup* SoundGroup); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFinished(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
