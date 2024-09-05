#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayBehaviorSmartObjectsModule
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectBehaviorDefinition
	// Inherited from USmartObjectBehaviorDefinition -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UGameplayBehaviorSmartObjectBehaviorDefinition : public USmartObjectBehaviorDefinition	
	{
	public:
		UGameplayBehaviorConfig GameplayBehaviorConfig; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectBehaviorDefinition");
			return ret;
		}
	};


	// Class GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject
	// Inherited from UAITask -> UGameplayTask -> UObject
	// Size: 0x70 (0xD8 - 0x68)
	class UAITask_UseGameplayBehaviorSmartObject : public UAITask	
	{
	public:
		FMulticastInlineDelegate OnSucceeded; // 0x68(0x10)
		FMulticastInlineDelegate OnFailed; // 0x78(0x10)
		FMulticastInlineDelegate OnMoveToFailed; // 0x88(0x10)
		UAITask_MoveTo MoveToTask; // 0x98(0x8)
		UGameplayBehavior GameplayBehavior; // 0xA0(0x8)
		unsigned char UnknownData01_7[0x30]; // 0xA8(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject");
			return ret;
		}

		UAITask_UseGameplayBehaviorSmartObject UseSmartObjectWithGameplayBehavior(AAIController Controller, FSmartObjectClaimHandle ClaimHandle, bool bLockAILogic, ESmartObjectClaimPriority ClaimPriority); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414664FD8
		UAITask_UseGameplayBehaviorSmartObject UseGameplayBehaviorSmartObject(AAIController Controller, AActor SmartObjectActor, USmartObjectComponent SmartObjectComponent, bool bLockAILogic); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414664EF8
		UAITask_UseGameplayBehaviorSmartObject MoveToAndUseSmartObjectWithGameplayBehavior(AAIController Controller, FSmartObjectClaimHandle ClaimHandle, bool bLockAILogic, ESmartObjectClaimPriority ClaimPriority); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414664E18
	};


	// Class GameplayBehaviorSmartObjectsModule.BTTask_FindAndUseGameplayBehaviorSmartObject
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0xB0 (0x120 - 0x70)
	class UBTTask_FindAndUseGameplayBehaviorSmartObject : public UBTTaskNode	
	{
	public:
		FGameplayTagQuery ActivityRequirements; // 0x70(0x48)
		ESmartObjectClaimPriority ClaimPriority; // 0xB8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xC0(0x48)
		float Radius; // 0x108(0x4)
		unsigned char UnknownData03_7[0x14]; // 0x10C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorSmartObjectsModule.BTTask_FindAndUseGameplayBehaviorSmartObject");
			return ret;
		}
	};


	// Class GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary");
			return ret;
		}

		bool UseGameplayBehaviorSmartObject(AActor Avatar, AActor SmartObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4146650B8
	};

}
