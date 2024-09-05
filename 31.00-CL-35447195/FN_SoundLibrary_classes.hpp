#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SoundLibrary
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SoundLibrary.SoundLibraryContext
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class USoundLibraryContext : public UObject	
	{
	public:
		TWeakObjectPtr Actor; // 0x28(0x8)
		FGameplayTag BaseEventName; // 0x30(0x4)
		bool bForwardToActorOwner; // 0x34(0x1)
		bool bForwardToAttachedActors; // 0x35(0x1)
		bool bAutoResetContext; // 0x36(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x37(0x1) UNKNOWN PROPERTY
		FGameplayTagContainer PlaybackTags; // 0x38(0x20)
		unsigned char UnknownData03_7[0x8]; // 0x58(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibraryContext");
			return ret;
		}

		bool Play(FSoundLibraryContextEventInput& InEventData, TArray& OutComponents); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF4145ADAB8
		void OnRemovedFromActor(AActor InActor); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4145AD9D8
		void OnAddedToActor(AActor InActor); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4145AD8F8
		bool GatherActorTargets(TArray& OutActors); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF4145AD818
		bool CreateEventName(FGameplayTag& OutEventName); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF4145AD738
	};


	// Class SoundLibrary.SoundLibraryAnimContext
	// Inherited from USoundLibraryContext -> UObject
	// Size: 0x40 (0xA0 - 0x60)
	class USoundLibraryAnimContext : public USoundLibraryContext	
	{
	public:
		FSoundLibraryAnimContextSettings AnimSettings; // 0x60(0x24)
		TWeakObjectPtr Animation; // 0x84(0x8)
		TWeakObjectPtr MeshComponent; // 0x8C(0x8)
		bool bSupportsNotifyEnd; // 0x94(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
		float AnimRate; // 0x98(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibraryAnimContext");
			return ret;
		}

		void ConfigureContext(AActor OwningActor, UAnimSequenceBase InAnimation, FSoundLibraryAnimContextSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145ADB98
	};


	// Class SoundLibrary.SoundLibraryAnimNotifyHelper
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class USoundLibraryAnimNotifyHelper : public UObject	
	{
	public:
		TArray PlayingComps; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibraryAnimNotifyHelper");
			return ret;
		}
	};


	// Class SoundLibrary.AnimNotify_SoundLibrary
	// Inherited from UAnimNotify -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UAnimNotify_SoundLibrary : public UAnimNotify	
	{
	public:
		USoundLibraryContext SoundContext; // 0x38(0x8)
		USoundLibraryAnimNotifyHelper NotifyHelper; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.AnimNotify_SoundLibrary");
			return ret;
		}
	};


	// Class SoundLibrary.AnimNotifyState_SoundLibrary
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UAnimNotifyState_SoundLibrary : public UAnimNotifyState	
	{
	public:
		USoundLibraryContext SoundContext; // 0x30(0x8)
		USoundLibraryAnimNotifyHelper NotifyHelper; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.AnimNotifyState_SoundLibrary");
			return ret;
		}
	};


	// Class SoundLibrary.GameFeatureAction_AddSoundLibraryCollection
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UGameFeatureAction_AddSoundLibraryCollection : public UGameFeatureAction	
	{
	public:
		TArray CollectionList; // 0x28(0x10)
		TArray TrackedSubsystems; // 0x38(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.GameFeatureAction_AddSoundLibraryCollection");
			return ret;
		}
	};


	// Class SoundLibrary.SoundLibrary
	// Inherited from UObject
	// Size: 0x198 (0x1C0 - 0x28)
	class USoundLibrary : public UObject	
	{
	public:
		TMap Sounds; // 0x28(0x50)
		FAudioGameplayRequirements LibraryRequirements; // 0x78(0x50)
		FGameplayTag Channel; // 0xC8(0x4)
		int32_t Priority; // 0xCC(0x4)
		FGameplayTagContainer MetaData; // 0xD0(0x20)
		TMap FullLibrary; // 0xF0(0x50)
		TMap RuntimeSounds; // 0x140(0x50)
		TArray LoadedSoundObjects; // 0x190(0x10)
		TArray Assets; // 0x1A0(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x1B0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibrary");
			return ret;
		}

		void SetPriority(int32_t InPriority); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145ADF18
		void SetChannel(FGameplayTag InTag); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145ADE38
		USoundBase FindSound(FGameplayTag InTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145ADD58
		void AddSound(FGameplayTag InTag, USoundBase InSound); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145ADC78
	};


	// Class SoundLibrary.SoundLibraryComponent
	// Inherited from UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x158 - 0xA8)
	class USoundLibraryComponent : public UAudioGameplayComponent	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FGameplayTag ComponentTag; // 0xB0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		UClass ContextClass; // 0xB8(0x8)
		TArray Libraries; // 0xC0(0x10)
		FMulticastInlineDelegate OnSoundLibraryPlayEvent; // 0xD0(0x10)
		FMulticastInlineDelegate OnEventPlayedDelegate; // 0xE0(0x10)
		FMulticastInlineDelegate OnEventStoppedDelegate; // 0xF0(0x10)
		unsigned char UnknownData05_6[0x50]; // 0x100(0x50) UNKNOWN PROPERTY
		USoundLibraryContext Context; // 0x150(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibraryComponent");
			return ret;
		}

		bool StopEvent(FGameplayTag InEventName); // Flags: Native|Public|BlueprintCallable 0x7FF4145AE998
		void RemoveLibrary(USoundLibrary InLibrary); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AE8B8
		void RemoveLibraries(TArray& InLibraries); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AE7D8
		FSoundLibraryPlayResult PlayEvent(FGameplayTag InEventName); // Flags: Native|Public|BlueprintCallable 0x7FF4145AE6F8
		void OnSoundStopped(FGameplayTag InEventName, UAudioComponent InComponent, bool& bStopped); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF4145AE618
		void OnSoundPlayed(FGameplayTag InEventName, UAudioComponent InComponent); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4145AE538
		void OnEventStopped(FGameplayTag InEventName); // Flags: Event|Public|BlueprintEvent 0x7FF4145AE458
		void OnEventPlayed(FGameplayTag InEventName); // Flags: Event|Public|BlueprintEvent 0x7FF4145AE378
		bool IsEventActive(FGameplayTag InEventName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4145AE298
		USoundLibraryContext GetContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AE1B8
		void AddLibrary(USoundLibrary InLibrary); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AE0D8
		void AddLibraries(TArray& InLibraries); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145ADFF8
	};


	// Class SoundLibrary.SoundLibraryProviderInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USoundLibraryProviderInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibraryProviderInterface");
			return ret;
		}
	};


	// Class SoundLibrary.SoundLibraryCollection
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class USoundLibraryCollection : public UDataAsset	
	{
	public:
		TMap Libraries; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibraryCollection");
			return ret;
		}
	};


	// Class SoundLibrary.SoundLibrarySettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class USoundLibrarySettings : public UDeveloperSettings	
	{
	public:
		TWeakObjectPtr CommonLibraries; // 0x30(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibrarySettings");
			return ret;
		}
	};


	// Class SoundLibrary.SoundLibrarySimpleContext
	// Inherited from USoundLibraryContext -> UObject
	// Size: 0x58 (0xB8 - 0x60)
	class USoundLibrarySimpleContext : public USoundLibraryContext	
	{
	public:
		FSoundLibrarySimpleContextSettings Settings; // 0x60(0x58)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibrarySimpleContext");
			return ret;
		}

		void ConfigureContext(AActor OwningActor, FSoundLibrarySimpleContextSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AEA78
	};


	// Class SoundLibrary.SoundLibrarySubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class USoundLibrarySubsystem : public UWorldSubsystem	
	{
	public:
		TArray LibraryCollections; // 0x30(0x10)
		USoundLibrarySimpleContext SimpleContext; // 0x40(0x8)
		TMap ActorDataMap; // 0x48(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibrarySubsystem");
			return ret;
		}

		void RemoveLibrary(AActor Actor, USoundLibrary Library); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AF5D8
		void RemoveLibrariesFromCollections(AActor Actor, FGameplayTagContainer& CollectionTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AF4F8
		void RemoveLibraries(AActor Actor, TArray Libraries); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AF418
		bool RemoveContext(AActor Actor, UClass ContextClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AF338
		FSoundLibraryPlayResult PlaySoundSimple(AActor OwningActor, FSoundLibrarySimpleContextSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AF258
		void PlaySound(USoundLibraryContext Context, FSoundLibraryPlayResult& OutResults); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AF178
		USoundLibraryContext GetContext(AActor Actor, UClass ContextClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AF098
		void EnableEventsForActor(AActor Actor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AEFB8
		void DisableEventsForActor(AActor Actor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AEED8
		void AddLibrary(AActor Actor, USoundLibrary Library); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AEDF8
		void AddLibrariesFromCollections(AActor Actor, FGameplayTagContainer& CollectionTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AED18
		void AddLibraries(AActor Actor, TArray Libraries); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AEC38
		USoundLibraryContext AddContext(AActor Actor, UClass ContextClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145AEB58
	};


	// Class SoundLibrary.SoundLibraryTagHelperFunctions
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USoundLibraryTagHelperFunctions : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibraryTagHelperFunctions");
			return ret;
		}

		FSoundLibraryTag MakeSoundLibraryTag(FGameplayTag& tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145AF6B8
	};

}
