#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AmbientAudio
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AmbientAudio.AmbientAudioComponent
	// Inherited from UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UAmbientAudioComponent : public UAudioGameplayComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		UAmbientAudioDataAsset* AmbientAsset; // 0xB0(0x8)
		int32_t Priority; // 0xB8(0x4)
		float CrossfadeTime; // 0xBC(0x4)
		FGuid AmbientGuid; // 0xC0(0x10)
		FName DisplayName; // 0xD0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AmbientAudio.AmbientAudioComponent");
			return ret;
		}

		void SetPriority(int32_t InPriority); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF78C94(relative to base address)
		void SetCrossfadeTime(float InCrossfadeTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF78C00(relative to base address)
		void SetAmbientAsset(UAmbientAudioDataAsset* InAmbientAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF78B80(relative to base address)
	};


	// Class AmbientAudio.AmbientAudioDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UAmbientAudioDataAsset : public UDataAsset	
	{
	public:
		TArray<FAmbientAudioLoop> LoopingSounds; // 0x30(0x10)
		TArray<FAmbientAudioOneShot> OneShotSounds; // 0x40(0x10)
		float TagCrossfadeTime; // 0x50(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AmbientAudio.AmbientAudioDataAsset");
			return ret;
		}
	};


	// Class AmbientAudio.AmbientAudioSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x228 (0x258 - 0x30)
	class UAmbientAudioSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTagChanged; // 0x38(0x10)
		FMulticastInlineDelegate OnEntryChanged; // 0x48(0x10)
		TArray<UAmbientAudioComponent*> AmbientComponents; // 0x58(0x10)
		AAmbientAudioParameterActor* ParameterActor; // 0x68(0x8)
		unsigned char UnknownData01_7[0x1E8]; // 0x70(0x1E8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AmbientAudio.AmbientAudioSubsystem");
			return ret;
		}

		void RemoveGameplayTag(FGameplayTag GameplayTag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747BAD5D4(relative to base address)
		void RemoveAmbientEntry(FName AmbientName, float CrossfadeOverride); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7491F0168(relative to base address)
		UAudioParameterComponent GetAudioParameterComponent(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF78B3C(relative to base address)
		void AddGameplayTag(FGameplayTag GameplayTag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747BAD6E4(relative to base address)
		void AddAmbientEntry(FName AmbientName, UAmbientAudioDataAsset* Asset, int32_t Priority, float CrossfadeTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747BACFF0(relative to base address)
	};


	// Class AmbientAudio.AmbientAudioParameterActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AAmbientAudioParameterActor : public AActor	
	{
	public:
		UAudioParameterComponent* Parameters; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AmbientAudio.AmbientAudioParameterActor");
			return ret;
		}
	};

}
