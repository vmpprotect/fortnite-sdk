#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SoundLibrary
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SoundLibrary.SoundLibraryContext
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class USoundLibraryContext : public UObject	
	{
	public:
		TWeakObjectPtr<AActor*> Actor; // 0x28(0x8)
		FGameplayTag BaseEventName; // 0x30(0x4)
		bool bForwardToActorOwner; // 0x34(0x1)
		bool bForwardToAttachedActors; // 0x35(0x1)
		bool bAutoResetContext; // 0x36(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x37(0x1) UNKNOWN PROPERTY
		FGameplayTagContainer PlaybackTags; // 0x38(0x20)
		unsigned char UnknownData01_7[0x8]; // 0x58(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibraryContext");
			return ret;
		}

		bool Play(FSoundLibraryContextEventInput& InEventData, TArray<UAudioComponent*>& OutComponents); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF748A2BCAC(relative to base address)
		void OnRemovedFromActor(AActor* InActor); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74D04D108(relative to base address)
		void OnAddedToActor(AActor* InActor); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74D04D084(relative to base address)
		bool GatherActorTargets(TArray<AActor*>& OutActors); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74D04CD20(relative to base address)
		bool CreateEventName(FGameplayTag& OutEventName); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74D04CAE0(relative to base address)
	};


	// Class SoundLibrary.SoundLibraryAnimContext
	// Inherited from USoundLibraryContext -> UObject
	// Size: 0x40 (0xA0 - 0x60)
	class USoundLibraryAnimContext : public USoundLibraryContext	
	{
	public:
		FSoundLibraryAnimContextSettings AnimSettings; // 0x60(0x24)
		TWeakObjectPtr<UAnimSequenceBase*> Animation; // 0x84(0x8)
		TWeakObjectPtr<USkeletalMeshComponent*> MeshComponent; // 0x8C(0x8)
		bool bSupportsNotifyEnd; // 0x94(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
		float AnimRate; // 0x98(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibraryAnimContext");
			return ret;
		}

		void ConfigureContext(AActor* OwningActor, UAnimSequenceBase* InAnimation, FSoundLibraryAnimContextSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D04C7C8(relative to base address)
	};


	// Class SoundLibrary.SoundLibraryAnimNotifyHelper
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class USoundLibraryAnimNotifyHelper : public UObject	
	{
	public:
		TArray<TWeakObjectPtr> PlayingComps; // 0x28(0x10)

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
		USoundLibraryContext* SoundContext; // 0x38(0x8)
		USoundLibraryAnimNotifyHelper* NotifyHelper; // 0x40(0x8)

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
		USoundLibraryContext* SoundContext; // 0x30(0x8)
		USoundLibraryAnimNotifyHelper* NotifyHelper; // 0x38(0x8)

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
		TArray<TWeakObjectPtr> CollectionList; // 0x28(0x10)
		TArray<TWeakObjectPtr> TrackedSubsystems; // 0x38(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

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
		TMap<FGameplayTag, TWeakObjectPtr> Sounds; // 0x28(0x50)
		FAudioGameplayRequirements LibraryRequirements; // 0x78(0x50)
		FGameplayTag Channel; // 0xC8(0x4)
		int32_t Priority; // 0xCC(0x4)
		FGameplayTagContainer MetaData; // 0xD0(0x20)
		TMap<FGameplayTag, TWeakObjectPtr> FullLibrary; // 0xF0(0x50)
		TMap<FGameplayTag, USoundBase*> RuntimeSounds; // 0x140(0x50)
		TArray<USoundBase*> LoadedSoundObjects; // 0x190(0x10)
		TArray<TWeakObjectPtr> Assets; // 0x1A0(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x1B0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibrary");
			return ret;
		}

		void SetPriority(int32_t InPriority); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D04DA48(relative to base address)
		void SetChannel(FGameplayTag InTag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D04D93C(relative to base address)
		USoundBase FindSound(FGameplayTag InTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D04CC04(relative to base address)
		void AddSound(FGameplayTag InTag, USoundBase* InSound); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D04C5F4(relative to base address)
	};


	// Class SoundLibrary.SoundLibraryComponent
	// Inherited from UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x158 - 0xA8)
	class USoundLibraryComponent : public UAudioGameplayComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FGameplayTag ComponentTag; // 0xB0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		UClass* ContextClass; // 0xB8(0x8)
		TArray<USoundLibrary*> Libraries; // 0xC0(0x10)
		FMulticastInlineDelegate OnSoundLibraryPlayEvent; // 0xD0(0x10)
		FMulticastInlineDelegate OnEventPlayedDelegate; // 0xE0(0x10)
		FMulticastInlineDelegate OnEventStoppedDelegate; // 0xF0(0x10)
		unsigned char UnknownData02_6[0x50]; // 0x100(0x50) UNKNOWN PROPERTY
		USoundLibraryContext* Context; // 0x150(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibraryComponent");
			return ret;
		}

		bool StopEvent(FGameplayTag InEventName); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF747D1BD04(relative to base address)
		void RemoveLibrary(USoundLibrary* InLibrary); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748EC6D0C(relative to base address)
		void RemoveLibraries(TArray<USoundLibrary*>& InLibraries); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D04D660(relative to base address)
		FSoundLibraryPlayResult PlayEvent(FGameplayTag InEventName); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF749046904(relative to base address)
		void OnSoundStopped(FGameplayTag InEventName, UAudioComponent* InComponent, bool& bStopped); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF74D04D18C(relative to base address)
		void OnSoundPlayed(FGameplayTag InEventName, UAudioComponent* InComponent); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7478E6EE8(relative to base address)
		void OnEventStopped(FGameplayTag InEventName); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventPlayed(FGameplayTag InEventName); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsEventActive(FGameplayTag InEventName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D04CF68(relative to base address)
		USoundLibraryContext GetContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D04CDD0(relative to base address)
		void AddLibrary(USoundLibrary* InLibrary); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D04C53C(relative to base address)
		void AddLibraries(TArray<USoundLibrary*>& InLibraries); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D04C260(relative to base address)
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
		TMap<FGameplayTag, FSoundLibrarySet> Libraries; // 0x30(0x50)

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
		TWeakObjectPtr<USoundLibraryCollection*> CommonLibraries; // 0x30(0x20)

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

		void ConfigureContext(AActor* OwningActor, FSoundLibrarySimpleContextSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D04C9F8(relative to base address)
	};


	// Class SoundLibrary.SoundLibrarySubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class USoundLibrarySubsystem : public UWorldSubsystem	
	{
	public:
		TArray<USoundLibraryCollection*> LibraryCollections; // 0x30(0x10)
		USoundLibrarySimpleContext* SimpleContext; // 0x40(0x8)
		TMap<uint32_t, FSoundLibraryActorData> ActorDataMap; // 0x48(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundLibrary.SoundLibrarySubsystem");
			return ret;
		}

		void RemoveLibrary(AActor* Actor, USoundLibrary* Library); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749254034(relative to base address)
		void RemoveLibrariesFromCollections(AActor* Actor, FGameplayTagContainer& CollectionTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D04D7F0(relative to base address)
		void RemoveLibraries(AActor* Actor, TArray<USoundLibrary*> Libraries); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D04D700(relative to base address)
		bool RemoveContext(AActor* Actor, UClass* ContextClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D04D4D8(relative to base address)
		FSoundLibraryPlayResult PlaySoundSimple(AActor* OwningActor, FSoundLibrarySimpleContextSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF748C1B824(relative to base address)
		void PlaySound(USoundLibraryContext* Context, FSoundLibraryPlayResult& OutResults); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D04D3E8(relative to base address)
		USoundLibraryContext GetContext(AActor* Actor, UClass* ContextClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D04CDE8(relative to base address)
		void EnableEventsForActor(AActor* Actor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D04CB80(relative to base address)
		void DisableEventsForActor(AActor* Actor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748BE339C(relative to base address)
		void AddLibrary(AActor* Actor, USoundLibrary* Library); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749203A88(relative to base address)
		void AddLibrariesFromCollections(AActor* Actor, FGameplayTagContainer& CollectionTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D04C3F0(relative to base address)
		void AddLibraries(AActor* Actor, TArray<USoundLibrary*> Libraries); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D04C300(relative to base address)
		USoundLibraryContext AddContext(AActor* Actor, UClass* ContextClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D04C06C(relative to base address)
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

		FSoundLibraryTag MakeSoundLibraryTag(FGameplayTag& Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C099704(relative to base address)
	};

}
