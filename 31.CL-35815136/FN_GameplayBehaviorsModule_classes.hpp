#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayBehaviorsModule
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GameplayBehaviorsModule.ValueOrBBKey_GameplayTagBlueprintUtility
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UValueOrBBKey_GameplayTagBlueprintUtility : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorsModule.ValueOrBBKey_GameplayTagBlueprintUtility");
			return ret;
		}

		FGameplayTagContainer GetTagContainer(FValueOrBBKey_GameplayTagContainer& Value, UBehaviorTreeComponent* BehaviorTreeComp); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF65F34(relative to base address)
	};


	// Class GameplayBehaviorsModule.BTDecorator_GameplayTagQuery
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x80 (0xE8 - 0x68)
	class UBTDecorator_GameplayTagQuery : public UBTDecorator	
	{
	public:
		FBlackboardKeySelector ActorForGameplayTagQuery; // 0x68(0x28)
		FGameplayTagQuery GameplayTagQuery; // 0x90(0x48)
		TArray<FGameplayTag> QueryTags; // 0xD8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorsModule.BTDecorator_GameplayTagQuery");
			return ret;
		}
	};


	// Class GameplayBehaviorsModule.BTTask_StopGameplayBehavior
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UBTTask_StopGameplayBehavior : public UBTTaskNode	
	{
	public:
		UClass* BehaviorToStop; // 0x70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorsModule.BTTask_StopGameplayBehavior");
			return ret;
		}
	};


	// Class GameplayBehaviorsModule.GameplayBehaviorConfig
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UGameplayBehaviorConfig : public UObject	
	{
	public:
		UClass* BehaviorClass; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorsModule.GameplayBehaviorConfig");
			return ret;
		}
	};


	// Class GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree
	// Inherited from UGameplayBehaviorConfig -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UGameplayBehaviorConfig_BehaviorTree : public UGameplayBehaviorConfig	
	{
	public:
		TWeakObjectPtr<UBehaviorTree*> BehaviorTree; // 0x30(0x20)
		bool bRevertToPreviousBTOnFinish : 1; // 0x50:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree");
			return ret;
		}
	};


	// Class GameplayBehaviorsModule.GameplayBehavior
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UGameplayBehavior : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x14]; // 0x28(0x14) UNKNOWN PROPERTY
		FGameplayTag ActionTag; // 0x3C(0x4)
		unsigned char UnknownData01_6[0x18]; // 0x40(0x18) UNKNOWN PROPERTY
		TArray<AActor*> RelevantActors; // 0x58(0x10)
		AActor* TransientSmartObjectOwner; // 0x68(0x8)
		AActor* TransientAvatar; // 0x70(0x8)
		TArray<UGameplayTask*> ActiveTasks; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorsModule.GameplayBehavior");
			return ret;
		}

		void K2_TriggerBehavior(AActor* Avatar, UGameplayBehaviorConfig* Config, AActor* SmartObjectOwner); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF66288(relative to base address)
		void K2_OnTriggeredPawn(APawn* Avatar, UGameplayBehaviorConfig* Config, AActor* SmartObjectOwner); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnTriggeredCharacter(ACharacter* Avatar, UGameplayBehaviorConfig* Config, AActor* SmartObjectOwner); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnTriggered(AActor* Avatar, UGameplayBehaviorConfig* Config, AActor* SmartObjectOwner); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnFinishedPawn(APawn* Avatar, bool bWasInterrupted); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnFinishedCharacter(ACharacter* Avatar, bool bWasInterrupted); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnFinished(AActor* Avatar, bool bWasInterrupted); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t K2_GetNextActorIndexInSequence(int32_t CurrentIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF661D8(relative to base address)
		void K2_EndBehavior(AActor* Avatar); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF66154(relative to base address)
		void K2_AbortBehavior(AActor* Avatar); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF660D0(relative to base address)
	};


	// Class GameplayBehaviorsModule.GameplayBehavior_BehaviorTree
	// Inherited from UGameplayBehavior -> UObject
	// Size: 0x20 (0xA8 - 0x88)
	class UGameplayBehavior_BehaviorTree : public UGameplayBehavior	
	{
	public:
		UBehaviorTree* PreviousBT; // 0x88(0x8)
		AAIController* AIController; // 0x90(0x8)
		bool bSingleRun; // 0x98(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x99(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorsModule.GameplayBehavior_BehaviorTree");
			return ret;
		}

		void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DF664A0(relative to base address)
	};


	// Class GameplayBehaviorsModule.BlackboardKeyType_GameplayTag
	// Inherited from UBlackboardKeyType -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UBlackboardKeyType_GameplayTag : public UBlackboardKeyType	
	{
	public:
		FGameplayTagContainer DefaultValue; // 0x30(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorsModule.BlackboardKeyType_GameplayTag");
			return ret;
		}
	};


	// Class GameplayBehaviorsModule.GameplayBehaviorConfig_Animation
	// Inherited from UGameplayBehaviorConfig -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UGameplayBehaviorConfig_Animation : public UGameplayBehaviorConfig	
	{
	public:
		TWeakObjectPtr<UAnimMontage*> AnimMontage; // 0x30(0x20)
		float PlayRate; // 0x50(0x4)
		FName StartSectionName; // 0x54(0x4)
		bool bLoop : 1; // 0x58:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorsModule.GameplayBehaviorConfig_Animation");
			return ret;
		}
	};


	// Class GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameplayBehaviorsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary");
			return ret;
		}

		void SetValueAsGameplayTagForBlackboardComp(UBlackboardComponent* BlackboardComp, FName& KeyName, FGameplayTagContainer GameplayTagValue); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF66760(relative to base address)
		void SetBlackboardValueAsGameplayTag(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FGameplayTagContainer Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF66564(relative to base address)
		FGameplayTagContainer GetBlackboardValueAsGameplayTagFromBlackboardComp(UBlackboardComponent* BlackboardComp, FName& KeyName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF65E4C(relative to base address)
		FGameplayTagContainer GetBlackboardValueAsGameplayTag(UBTNode* NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF65D30(relative to base address)
		void AddGameplayTagFilterToBlackboardKeySelector(FBlackboardKeySelector& InSelector, UObject* Owner, FName PropertyName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF65AF0(relative to base address)
	};


	// Class GameplayBehaviorsModule.GameplayBehaviorSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UGameplayBehaviorSubsystem : public UWorldSubsystem	
	{
	public:
		TMap<AActor*, FAgentGameplayBehaviors> AgentGameplayBehaviors; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorsModule.GameplayBehaviorSubsystem");
			return ret;
		}
	};


	// Class GameplayBehaviorsModule.GameplayBehavior_AnimationBased
	// Inherited from UGameplayBehavior -> UObject
	// Size: 0x10 (0x98 - 0x88)
	class UGameplayBehavior_AnimationBased : public UGameplayBehavior	
	{
	public:
		TArray<FMontagePlaybackData> ActivePlayback; // 0x88(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorsModule.GameplayBehavior_AnimationBased");
			return ret;
		}

		void OnMontageFinished(UAnimMontage* Montage, bool bInterrupted, AActor* InAvatar); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DF66394(relative to base address)
	};

}
