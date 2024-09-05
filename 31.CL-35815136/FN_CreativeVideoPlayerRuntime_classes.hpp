#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CreativeVideoPlayerRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x80 (0xBC0 - 0xB40)
	class UCreativeVideoPlayerFullscreenGameplayAbility : public UFortGameplayAbility	
	{
	public:
		UClass* NoCollisionGameplayEffectClass; // 0xB40(0x8)
		UClass* NoDamageGameplayEffectClass; // 0xB48(0x8)
		TArray<UClass*> AnimationStateGameplayEffectClasses; // 0xB50(0x10)
		UClass* FullscreenWidgetClass; // 0xB60(0x8)
		ECreativeVideoPlayerFullscreenEffects FullscreenEffects; // 0xB68(0x1)
		bool bPromptToConfirmFullscreen; // 0xB69(0x1)
		bool bIsDismissable; // 0xB6A(0x1)
		unsigned char UnknownData00_6[0x5]; // 0xB6B(0x5) UNKNOWN PROPERTY
		UFortInputComponent* OverrideMovementInputComponent; // 0xB70(0x8)
		UFortInputComponent* SelectFullscreenModeInputComponent; // 0xB78(0x8)
		TArray<FActiveGameplayEffectHandle> ActiveGameplayEffects; // 0xB80(0x10)
		ECreativeVideoPlayerFullscreenEffects RequestedFullscreenEffects; // 0xB90(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xB91(0x7) UNKNOWN PROPERTY
		UUserWidget* VideoPlayerWidget; // 0xB98(0x8)
		UMediaTexture* ExtMediaTextureCached; // 0xBA0(0x8)
		USoundSourceBus* ExtSourceBusCached; // 0xBA8(0x8)
		UMediaSoundComponent* ExtMediaSoundComponentCached; // 0xBB0(0x8)
		bool bExtComponentsSet; // 0xBB8(0x1)
		bool bActivatedFullscreen; // 0xBB9(0x1)
		unsigned char UnknownData02_7[0x6]; // 0xBBA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility");
			return ret;
		}

		void SetExternalComponents(UMediaTexture* ExtMediaTexture, USoundSourceBus* ExtSourceBus, UMediaSoundComponent* ExtMediaSoundComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515F9BD0(relative to base address)
		void ServerLeaveFullscreenMode(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74E3138A4(relative to base address)
		void ServerEnterFullscreenMode(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74E313DBC(relative to base address)
		void OnFullscreenUIEnds(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515F9BBC(relative to base address)
		void HandleEnterFullscreenActionReleased(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515F9BA8(relative to base address)
		void HandleEnterFullscreenActionPressed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ExitFullscreenState(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515F9B7C(relative to base address)
		void EnterFullscreenStateWithOptions(FCreativeVideoPlayerFullscreenOptions Options); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515F9A68(relative to base address)
		void EnterFullscreenState(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515F9A3C(relative to base address)
		void ClientTransitionToFullscreenVideo(); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF74E313DD4(relative to base address)
		void ClientLeaveFullscreenVideo(); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF74E3138BC(relative to base address)
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

		void ShutdownFullscreenVideoMode(AController* Controller); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7515F9CC8(relative to base address)
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
