#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayInteractionsModule
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GameplayInteractionsModule.GameplayInteractionSmartObjectBehaviorDefinition
	// Inherited from USmartObjectBehaviorDefinition -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UGameplayInteractionSmartObjectBehaviorDefinition : public USmartObjectBehaviorDefinition	
	{
	public:
		FStateTreeReference StateTreeReference; // 0x28(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayInteractionsModule.GameplayInteractionSmartObjectBehaviorDefinition");
			return ret;
		}
	};


	// Class GameplayInteractionsModule.AITask_UseGameplayInteraction
	// Inherited from UAITask -> UGameplayTask -> UObject
	// Size: 0xD8 (0x140 - 0x68)
	class UAITask_UseGameplayInteraction : public UAITask	
	{
	public:
		FMulticastInlineDelegate OnFinished; // 0x68(0x10)
		FMulticastInlineDelegate OnSucceeded; // 0x78(0x10)
		FMulticastInlineDelegate OnFailed; // 0x88(0x10)
		FMulticastInlineDelegate OnMoveToFailed; // 0x98(0x10)
		FGameplayInteractionContext GameplayInteractionContext; // 0xA8(0x68)
		UAITask_MoveTo MoveToTask; // 0x110(0x8)
		FSmartObjectClaimHandle ClaimedHandle; // 0x118(0x20)
		FGameplayInteractionAbortContext AbortContext; // 0x138(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x139(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayInteractionsModule.AITask_UseGameplayInteraction");
			return ret;
		}

		UAITask_UseGameplayInteraction UseSmartObjectWithGameplayInteraction(AAIController Controller, FSmartObjectClaimHandle ClaimHandle, bool bLockAILogic); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41465BDB8
		void RequestAbort(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41465BCD8
		UAITask_UseGameplayInteraction MoveToAndUseSmartObjectWithGameplayInteraction(AAIController Controller, FSmartObjectClaimHandle ClaimHandle, bool bLockAILogic); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41465BBF8
	};


	// Class GameplayInteractionsModule.GameplayInteractionStateTreeSchema
	// Inherited from UStateTreeSchema -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGameplayInteractionStateTreeSchema : public UStateTreeSchema	
	{
	public:
		UClass ContextActorClass; // 0x28(0x8)
		UClass SmartObjectActorClass; // 0x30(0x8)
		TArray ContextDataDescs; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayInteractionsModule.GameplayInteractionStateTreeSchema");
			return ret;
		}
	};


	// Class GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UStateTreeTask_PlayContextualAnim_InstanceData : public UObject	
	{
	public:
		AActor PrimaryActor; // 0x28(0x8)
		AActor SecondaryActor; // 0x30(0x8)
		FName SecondaryRole; // 0x38(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		AActor TertiaryActor; // 0x40(0x8)
		FName TertiaryRole; // 0x48(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		UContextualAnimSceneAsset SceneAsset; // 0x50(0x8)
		FName SectionName; // 0x58(0x4)
		EPlayContextualAnimExecutionMethod ExecutionMethod; // 0x5C(0x1)
		bool bWaitForNotifyEventToEnd; // 0x5D(0x1)
		unsigned char UnknownData08_6[0x2]; // 0x5E(0x2) UNKNOWN PROPERTY
		FName NotifyEventNameToEnd; // 0x60(0x4)
		int32_t LoopsToRun; // 0x64(0x4)
		bool bLoopForever; // 0x68(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		float DelayBetweenLoops; // 0x6C(0x4)
		float RandomDeviationBetweenLoops; // 0x70(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		TArray WarpTargets; // 0x78(0x10)
		unsigned char UnknownData11_7[0x18]; // 0x88(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData");
			return ret;
		}

		void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Flags: Final|Native|Public|HasOutParms 0x7FF41465BF78
		void OnMontageEnded(UAnimMontage EndedMontage, bool bInterrupted); // Flags: Final|Native|Public 0x7FF41465BE98
	};

}
