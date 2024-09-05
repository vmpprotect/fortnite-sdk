#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioGameplayBehavior
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AudioGameplayBehavior.AudioGameplayBehavior
	// Inherited from UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UAudioGameplayBehavior : public UActorComponent	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		bool bKillOnSoundsFinished; // 0xA8(0x1)
		bool bTickWhileStopped; // 0xA9(0x1)
		unsigned char UnknownData04_6[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAllSoundsFinished; // 0xB0(0x10)
		FMulticastInlineDelegate OnSoundFinished; // 0xC0(0x10)
		TArray PlayingSounds; // 0xD0(0x10)
		UAudioComponentGroup ComponentGroupOwner; // 0xE0(0x8)
		unsigned char UnknownData05_7[0x10]; // 0xE8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioGameplayBehavior.AudioGameplayBehavior");
			return ret;
		}

		void SubscribeToStringParam(FName ParamName, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BB36B8
		void SubscribeToEvent(FName EventName, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BB35D8
		void SubscribeToBoolParam(FName ParamName, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BB34F8
		void StopSound(USoundBase Sound, float InFadeOutTime, EAudioFaderCurve InFadeCurve); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BB3418
		void StopComponent(UAudioComponent Comp, float InFadeOutTime, EAudioFaderCurve InFadeCurve); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BB3338
		void StopById(FPlayingId ID, float InFadeOutTime, EAudioFaderCurve InFadeCurve); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BB3258
		void StopAllPlayingVoices(float InFadeOutTime); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BB3178
		void Stop(); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BB3098
		void Start(); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BB2FB8
		void SetPlayState(EAudioGameplayBehaviorPlayState NewState); // Flags: Native|Public|BlueprintCallable 0x7FF414BB2ED8
		FActiveVoice PlaySound(USoundBase Sound, float InFadeInTime, float InTargetVolume, float InStartTime, bool bDisableAttenuation, EAudioFaderCurve InFadeCurve, FVector InRelativeLocation, FRotator InRelativeRotation); // Flags: Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 0x7FF414BB2DF8
		void PlayFrom(UAudioComponentGroup SoundGroup); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BB2D18
		void Kill(); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BB2C38
		bool IsVirtualized(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BB2B58
		bool IsPlayingAny(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BB2A78
		FString GetStringParamValue(FName ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BB2998
		EAudioGameplayBehaviorPlayState GetStopState(); // Flags: Native|Public|BlueprintCallable 0x7FF414BB28B8
		UAudioComponentGroup GetSoundGroup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BB27D8
		EAudioGameplayBehaviorPlayState GetPlayState(); // Flags: Native|Public|BlueprintCallable|BlueprintPure 0x7FF414BB26F8
		float GetFloatParamValue(FName ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BB2618
		bool GetBoolParamValue(FName ParamName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BB2538
		void EnableVirtualization(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BB2458
		void DisableVirtualization(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BB2378
		void BP_OnVirtualized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF414BB2298
		void BP_OnUnvirtualized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF414BB21B8
		void BP_OnStop(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF414BB20D8
		void BP_OnStart(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF414BB1FF8
		void BP_OnGroupSet(UAudioComponentGroup SoundGroup); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF414BB1F18
		void BP_OnFinished(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF414BB1E38
	};

}
