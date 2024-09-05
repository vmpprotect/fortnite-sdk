#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CreativeVideoPlayerRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x80 (0xBC0 - 0xB40)
	class UCreativeVideoPlayerFullscreenGameplayAbility : public UFortGameplayAbility	
	{
	public:
		UClass NoCollisionGameplayEffectClass; // 0xB40(0x8)
		UClass NoDamageGameplayEffectClass; // 0xB48(0x8)
		TArray AnimationStateGameplayEffectClasses; // 0xB50(0x10)
		UClass FullscreenWidgetClass; // 0xB60(0x8)
		ECreativeVideoPlayerFullscreenEffects FullscreenEffects; // 0xB68(0x1)
		bool bPromptToConfirmFullscreen; // 0xB69(0x1)
		bool bIsDismissable; // 0xB6A(0x1)
		unsigned char UnknownData03_6[0x5]; // 0xB6B(0x5) UNKNOWN PROPERTY
		UFortInputComponent OverrideMovementInputComponent; // 0xB70(0x8)
		UFortInputComponent SelectFullscreenModeInputComponent; // 0xB78(0x8)
		TArray ActiveGameplayEffects; // 0xB80(0x10)
		ECreativeVideoPlayerFullscreenEffects RequestedFullscreenEffects; // 0xB90(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xB91(0x7) UNKNOWN PROPERTY
		UUserWidget VideoPlayerWidget; // 0xB98(0x8)
		UMediaTexture ExtMediaTextureCached; // 0xBA0(0x8)
		USoundSourceBus ExtSourceBusCached; // 0xBA8(0x8)
		UMediaSoundComponent ExtMediaSoundComponentCached; // 0xBB0(0x8)
		bool bExtComponentsSet; // 0xBB8(0x1)
		bool bActivatedFullscreen; // 0xBB9(0x1)
		unsigned char UnknownData05_7[0x6]; // 0xBBA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility");
			return ret;
		}

		void SetExternalComponents(UMediaTexture ExtMediaTexture, USoundSourceBus ExtSourceBus, UMediaSoundComponent ExtMediaSoundComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D65D18
		void ServerLeaveFullscreenMode(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414D65C38
		void ServerEnterFullscreenMode(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414D65B58
		void OnFullscreenUIEnds(); // Flags: Final|Native|Private 0x7FF414D65A78
		void HandleEnterFullscreenActionReleased(); // Flags: Final|Native|Private 0x7FF414D65998
		void HandleEnterFullscreenActionPressed(); // Flags: Final|Native|Private 0x7FF414D658B8
		void ExitFullscreenState(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D657D8
		void EnterFullscreenStateWithOptions(FCreativeVideoPlayerFullscreenOptions Options); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D656F8
		void EnterFullscreenState(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D65618
		void ClientTransitionToFullscreenVideo(); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient 0x7FF414D65538
		void ClientLeaveFullscreenVideo(); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient 0x7FF414D65458
	};


	// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCreativeVideoPlayerFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary");
			return ret;
		}

		void ShutdownFullscreenVideoMode(AController Controller); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D65DF8
	};


	// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerWorldSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UCreativeVideoPlayerWorldSubsystem : public UWorldSubsystem	
	{
	public:
		FMulticastInlineDelegate OnNotifyFullscreenChange; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerWorldSubsystem");
			return ret;
		}
	};

}
