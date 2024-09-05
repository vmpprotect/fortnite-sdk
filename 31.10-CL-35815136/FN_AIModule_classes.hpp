#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AIModule
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AIModule.AIAsyncTaskBlueprintProxy
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UAIAsyncTaskBlueprintProxy : public UObject	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
		FMulticastInlineDelegate OnFail; // 0x38(0x10)
		unsigned char UnknownData00_7[0x20]; // 0x48(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AIAsyncTaskBlueprintProxy");
			return ret;
		}

		void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> MovementResult); // Flags: Final|RequiredAPI|Native|Public, Memory Exec: 0x7FF74CD7D61C(relative to base address)
	};


	// Class AIModule.AIResourceInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAIResourceInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AIResourceInterface");
			return ret;
		}
	};


	// Class AIModule.AISenseBlueprintListener
	// Inherited from UUserDefinedStruct -> UScriptStruct -> UStruct -> UField -> UObject
	// Size: 0x0 (0x108 - 0x108)
	class UAISenseBlueprintListener : public UUserDefinedStruct	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISenseBlueprintListener");
			return ret;
		}
	};


	// Class AIModule.AISenseConfig
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UAISenseConfig : public UObject	
	{
	public:
		FColor DebugColor; // 0x28(0x4)
		float MaxAge; // 0x2C(0x4)
		bool bStartsEnabled : 1; // 0x30:0(0x1)
		unsigned char UnknownData00_7[0x17]; // 0x31(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig");
			return ret;
		}
	};


	// Class AIModule.AISenseConfig_Blueprint
	// Inherited from UAISenseConfig -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UAISenseConfig_Blueprint : public UAISenseConfig	
	{
	public:
		UClass* Implementation; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig_Blueprint");
			return ret;
		}
	};


	// Class AIModule.AISenseConfig_Hearing
	// Inherited from UAISenseConfig -> UObject
	// Size: 0x18 (0x60 - 0x48)
	class UAISenseConfig_Hearing : public UAISenseConfig	
	{
	public:
		UClass* Implementation; // 0x48(0x8)
		float HearingRange; // 0x50(0x4)
		float LoSHearingRange; // 0x54(0x4)
		bool bUseLoSHearing : 1; // 0x58:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x59(0x3) UNKNOWN PROPERTY
		FAISenseAffiliationFilter DetectionByAffiliation; // 0x5C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig_Hearing");
			return ret;
		}
	};


	// Class AIModule.AISenseConfig_Prediction
	// Inherited from UAISenseConfig -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UAISenseConfig_Prediction : public UAISenseConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig_Prediction");
			return ret;
		}
	};


	// Class AIModule.AISenseConfig_Sight
	// Inherited from UAISenseConfig -> UObject
	// Size: 0x28 (0x70 - 0x48)
	class UAISenseConfig_Sight : public UAISenseConfig	
	{
	public:
		UClass* Implementation; // 0x48(0x8)
		float SightRadius; // 0x50(0x4)
		float LoseSightRadius; // 0x54(0x4)
		float PeripheralVisionAngleDegrees; // 0x58(0x4)
		FAISenseAffiliationFilter DetectionByAffiliation; // 0x5C(0x4)
		float AutoSuccessRangeFromLastSeenLocation; // 0x60(0x4)
		float PointOfViewBackwardOffset; // 0x64(0x4)
		float NearClippingRadius; // 0x68(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig_Sight");
			return ret;
		}
	};


	// Class AIModule.AISenseConfig_Team
	// Inherited from UAISenseConfig -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UAISenseConfig_Team : public UAISenseConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig_Team");
			return ret;
		}
	};


	// Class AIModule.AISenseConfig_Touch
	// Inherited from UAISenseConfig -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UAISenseConfig_Touch : public UAISenseConfig	
	{
	public:
		FAISenseAffiliationFilter DetectionByAffiliation; // 0x48(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig_Touch");
			return ret;
		}
	};


	// Class AIModule.AISenseEvent
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAISenseEvent : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISenseEvent");
			return ret;
		}
	};


	// Class AIModule.AISenseEvent_Damage
	// Inherited from UAISenseEvent -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UAISenseEvent_Damage : public UAISenseEvent	
	{
	public:
		FAIDamageEvent Event; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISenseEvent_Damage");
			return ret;
		}
	};


	// Class AIModule.AISenseEvent_Hearing
	// Inherited from UAISenseEvent -> UObject
	// Size: 0x38 (0x60 - 0x28)
	class UAISenseEvent_Hearing : public UAISenseEvent	
	{
	public:
		FAINoiseEvent Event; // 0x28(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISenseEvent_Hearing");
			return ret;
		}
	};


	// Class AIModule.BlackboardKeyType
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UBlackboardKeyType : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType");
			return ret;
		}
	};


	// Class AIModule.BlackboardKeyType_Struct
	// Inherited from UBlackboardKeyType -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UBlackboardKeyType_Struct : public UBlackboardKeyType	
	{
	public:
		FInstancedStruct DefaultValue; // 0x30(0x10)
		FInstancedStruct Value; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Struct");
			return ret;
		}
	};


	// Class AIModule.CrowdAgentInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCrowdAgentInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.CrowdAgentInterface");
			return ret;
		}
	};


	// Class AIModule.EnvQueryTypes
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEnvQueryTypes : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTypes");
			return ret;
		}
	};


	// Class AIModule.EQSQueryResultSourceInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEQSQueryResultSourceInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EQSQueryResultSourceInterface");
			return ret;
		}
	};


	// Class AIModule.GeneratedNavLinksProxy
	// Inherited from UBaseGeneratedNavLinksProxy -> UObject
	// Size: 0x10 (0x50 - 0x40)
	class UGeneratedNavLinksProxy : public UBaseGeneratedNavLinksProxy	
	{
	public:
		FMulticastInlineDelegate OnSmartLinkReached; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.GeneratedNavLinksProxy");
			return ret;
		}

		void ReceiveSmartLinkReached(AActor* Agent, FVector Destination); // Flags: RequiredAPI|Event|Public|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class AIModule.GenericTeamAgentInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGenericTeamAgentInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.GenericTeamAgentInterface");
			return ret;
		}
	};


	// Class AIModule.ValueOrBBKeyBlueprintUtility
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UValueOrBBKeyBlueprintUtility : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.ValueOrBBKeyBlueprintUtility");
			return ret;
		}

		FVector GetVector(FValueOrBBKey_Vector& Value, UBehaviorTreeComponent* BehaviorTreeComp); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CD7D448(relative to base address)
		FInstancedStruct GetStruct(FValueOrBBKey_Struct& Value, UBehaviorTreeComponent* BehaviorTreeComp); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CD7D2B8(relative to base address)
		FString GetString(FValueOrBBKey_String& Value, UBehaviorTreeComponent* BehaviorTreeComp); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CD7D114(relative to base address)
		FRotator GetRotator(FValueOrBBKey_Rotator& Value, UBehaviorTreeComponent* BehaviorTreeComp); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CD7CF40(relative to base address)
		UObject GetObject(FValueOrBBKey_Object& Value, UBehaviorTreeComponent* BehaviorTreeComp); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CD7CDC8(relative to base address)
		FName GetName(FValueOrBBKey_Name& Value, UBehaviorTreeComponent* BehaviorTreeComp); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CD7CC38(relative to base address)
		int32_t GetInt32(FValueOrBBKey_Int32& Value, UBehaviorTreeComponent* BehaviorTreeComp); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CD7CAB8(relative to base address)
		float GetFloat(FValueOrBBKey_Float& Value, UBehaviorTreeComponent* BehaviorTreeComp); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CD7C934(relative to base address)
		char GetEnum(FValueOrBBKey_Enum& Value, UBehaviorTreeComponent* BehaviorTreeComp); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CD7C7AC(relative to base address)
		UClass GetClass(FValueOrBBKey_Class& Value, UBehaviorTreeComponent* BehaviorTreeComp); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CD7C62C(relative to base address)
		bool GetBool(FValueOrBBKey_Bool& Value, UBehaviorTreeComponent* BehaviorTreeComp); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CD7C4AC(relative to base address)
	};


	// Class AIModule.PawnAction
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UPawnAction : public UObject	
	{
	public:
		UPawnAction* ChildAction; // 0x28(0x8)
		UPawnAction* ParentAction; // 0x30(0x8)
		UPawnActionsComponent* OwnerComponent; // 0x38(0x8)
		UObject* Instigator; // 0x40(0x8)
		UBrainComponent* BrainComp; // 0x48(0x8)
		unsigned char UnknownData00_6[0x30]; // 0x50(0x30) UNKNOWN PROPERTY
		bool bAllowNewSameClassInstance : 1; // 0x80:0(0x1)
		bool bReplaceActiveSameClassInstance : 1; // 0x80:1(0x1)
		bool bShouldPauseMovement : 1; // 0x80:2(0x1)
		bool bAlwaysNotifyOnFinished : 1; // 0x80:3(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x81(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.PawnAction");
			return ret;
		}

		TEnumAsByte GetActionPriority(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C3C1498(relative to base address)
		void Finish(TEnumAsByte<EPawnActionResult> WithResult); // Flags: RequiredAPI|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74CD9B050(relative to base address)
		UPawnAction CreateActionInstance(UObject* WorldContextObject, UClass* ActionClass); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CD9AF28(relative to base address)
	};


	// Class AIModule.PawnActionsComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UPawnActionsComponent : public UActorComponent	
	{
	public:
		APawn* ControlledPawn; // 0xA0(0x8)
		TArray<FPawnActionStack> ActionStacks; // 0xA8(0x10)
		TArray<FPawnActionEvent> ActionEvents; // 0xB8(0x10)
		UPawnAction* CurrentAction; // 0xC8(0x8)
		unsigned char UnknownData00_7[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.PawnActionsComponent");
			return ret;
		}

		bool K2_PushAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, UObject* Instigator); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CD9BF54(relative to base address)
		bool K2_PerformAction(APawn* Pawn, UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CD9BE4C(relative to base address)
		TEnumAsByte K2_ForceAbortAction(UPawnAction* ActionToAbort); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CD9BDC0(relative to base address)
		TEnumAsByte K2_AbortAction(UPawnAction* ActionToAbort); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CD9BD0C(relative to base address)
	};


	// Class AIModule.PawnAction_BlueprintBase
	// Inherited from UPawnAction -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UPawnAction_BlueprintBase : public UPawnAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.PawnAction_BlueprintBase");
			return ret;
		}

		void ActionTick(APawn* ControlledPawn, float DeltaSeconds); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActionStart(APawn* ControlledPawn); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActionResume(APawn* ControlledPawn); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActionPause(APawn* ControlledPawn); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActionFinished(APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class AIModule.PawnAction_Move
	// Inherited from UPawnAction -> UObject
	// Size: 0x60 (0xF0 - 0x90)
	class UPawnAction_Move : public UPawnAction	
	{
	public:
		AActor* GoalActor; // 0x90(0x8)
		FVector GoalLocation; // 0x98(0x18)
		float AcceptableRadius; // 0xB0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		UClass* FilterClass; // 0xB8(0x8)
		bool bAllowStrafe : 1; // 0xC0:0(0x1)
		bool bFinishOnOverlap : 1; // 0xC0:1(0x1)
		bool bUsePathfinding : 1; // 0xC0:2(0x1)
		bool bAllowPartialPath : 1; // 0xC0:3(0x1)
		bool bProjectGoalToNavigation : 1; // 0xC0:4(0x1)
		bool bUpdatePathToGoal : 1; // 0xC0:5(0x1)
		bool bAbortSubActionOnPathChange : 1; // 0xC0:6(0x1)
		unsigned char UnknownData01_7[0x2F]; // 0xC1(0x2F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.PawnAction_Move");
			return ret;
		}
	};


	// Class AIModule.PawnAction_Repeat
	// Inherited from UPawnAction -> UObject
	// Size: 0x20 (0xB0 - 0x90)
	class UPawnAction_Repeat : public UPawnAction	
	{
	public:
		UPawnAction* ActionToRepeat; // 0x90(0x8)
		UPawnAction* RecentActionCopy; // 0x98(0x8)
		TEnumAsByte<EPawnActionFailHandling> ChildFailureHandlingMode; // 0xA0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0xA1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.PawnAction_Repeat");
			return ret;
		}
	};


	// Class AIModule.PawnAction_Sequence
	// Inherited from UPawnAction -> UObject
	// Size: 0x28 (0xB8 - 0x90)
	class UPawnAction_Sequence : public UPawnAction	
	{
	public:
		TArray<UPawnAction*> ActionSequence; // 0x90(0x10)
		TEnumAsByte<EPawnActionFailHandling> ChildFailureHandlingMode; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		UPawnAction* RecentActionCopy; // 0xA8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.PawnAction_Sequence");
			return ret;
		}
	};


	// Class AIModule.PawnAction_Wait
	// Inherited from UPawnAction -> UObject
	// Size: 0x10 (0xA0 - 0x90)
	class UPawnAction_Wait : public UPawnAction	
	{
	public:
		float TimeToWait; // 0x90(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x94(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.PawnAction_Wait");
			return ret;
		}
	};


	// Class AIModule.AIController
	// Inherited from AController -> AActor -> UObject
	// Size: 0x90 (0x3B8 - 0x328)
	class AAIController : public AController	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x328(0x38) UNKNOWN PROPERTY
		bool bStartAILogicOnPossess : 1; // 0x360:0(0x1)
		bool bStopAILogicOnUnposses : 1; // 0x360:1(0x1)
		bool bLOSflag : 1; // 0x360:2(0x1)
		bool bSkipExtraLOSChecks : 1; // 0x360:3(0x1)
		bool bAllowStrafe : 1; // 0x360:4(0x1)
		bool bWantsPlayerState : 1; // 0x360:5(0x1)
		bool bSetControlRotationFromPawnOrientation : 1; // 0x360:6(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x361(0x7) UNKNOWN PROPERTY
		UPathFollowingComponent* PathFollowingComponent; // 0x368(0x8)
		UBrainComponent* BrainComponent; // 0x370(0x8)
		UAIPerceptionComponent* PerceptionComponent; // 0x378(0x8)
		UPawnActionsComponent* ActionsComp; // 0x380(0x8)
		UBlackboardComponent* Blackboard; // 0x388(0x8)
		UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x390(0x8)
		UClass* DefaultNavigationFilterClass; // 0x398(0x8)
		FMulticastInlineDelegate ReceiveMoveCompleted; // 0x3A0(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x3B0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AIController");
			return ret;
		}

		bool UseBlackboard(UBlackboardData* BlackboardAsset, UBlackboardComponent* BlackboardComponent); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CD9DAAC(relative to base address)
		void UnclaimTaskResource(UClass* ResourceClass); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CD9DA18(relative to base address)
		void SetPathFollowingComponent(UPathFollowingComponent* NewPFComponent); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CD9CDA4(relative to base address)
		void SetMoveBlockDetection(bool bEnable); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CD9CD20(relative to base address)
		bool RunBehaviorTree(UBehaviorTree* BTAsset); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CD9CAB4(relative to base address)
		void OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased); // Flags: RequiredAPI|Native|Public, Memory Exec: 0x7FF74CD9C8D8(relative to base address)
		TEnumAsByte MoveToLocation(FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CD9C45C(relative to base address)
		TEnumAsByte MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CD9C20C(relative to base address)
		void K2_SetFocus(AActor* NewFocus); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CD9C184(relative to base address)
		void K2_SetFocalPoint(FVector FP); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CD9C05C(relative to base address)
		void K2_ClearFocus(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CD9BDA4(relative to base address)
		bool HasPartialPath(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9BBF8(relative to base address)
		UPathFollowingComponent GetPathFollowingComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B398(relative to base address)
		TEnumAsByte GetMoveStatus(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B378(relative to base address)
		FVector GetImmediateMoveDestination(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B208(relative to base address)
		AActor GetFocusActor(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B1E4(relative to base address)
		FVector GetFocalPointOnActor(AActor* Actor); // Flags: RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B13C(relative to base address)
		FVector GetFocalPoint(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B104(relative to base address)
		UPawnActionsComponent GetDeprecatedActionsComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B0EC(relative to base address)
		UAIPerceptionComponent GetAIPerceptionComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CD9B0D4(relative to base address)
		void ClaimTaskResource(UClass* ResourceClass); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CD9AE08(relative to base address)
	};


	// Class AIModule.AIResource_Movement
	// Inherited from UGameplayTaskResource -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UAIResource_Movement : public UGameplayTaskResource	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AIResource_Movement");
			return ret;
		}
	};


	// Class AIModule.AIResource_Logic
	// Inherited from UGameplayTaskResource -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UAIResource_Logic : public UGameplayTaskResource	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AIResource_Logic");
			return ret;
		}
	};


	// Class AIModule.AISubsystem
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UAISubsystem : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UAISystem* AISystem; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISubsystem");
			return ret;
		}
	};


	// Class AIModule.AISystem
	// Inherited from UAISystemBase -> UObject
	// Size: 0x120 (0x178 - 0x58)
	class UAISystem : public UAISystemBase	
	{
	public:
		FSoftClassPath PerceptionSystemClassName; // 0x58(0x18)
		FSoftClassPath HotSpotManagerClassName; // 0x70(0x18)
		FSoftClassPath EnvQueryManagerClassName; // 0x88(0x18)
		float AcceptanceRadius; // 0xA0(0x4)
		float PathfollowingRegularPathPointAcceptanceRadius; // 0xA4(0x4)
		float PathfollowingNavLinkAcceptanceRadius; // 0xA8(0x4)
		bool bFinishMoveOnGoalOverlap; // 0xAC(0x1)
		bool bAcceptPartialPaths; // 0xAD(0x1)
		bool bAllowStrafing; // 0xAE(0x1)
		bool bAllowControllersAsEQSQuerier; // 0xAF(0x1)
		bool bEnableDebuggerPlugin; // 0xB0(0x1)
		bool bForgetStaleActors; // 0xB1(0x1)
		bool bAddBlackboardSelfKey; // 0xB2(0x1)
		bool bClearBBEntryOnBTEQSFail; // 0xB3(0x1)
		bool bBlackboardKeyDecoratorAllowsNoneAsValue; // 0xB4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UBlackboardData*> DefaultBlackboard; // 0xB8(0x20)
		TEnumAsByte<ECollisionChannel> DefaultSightCollisionChannel; // 0xD8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY
		UBehaviorTreeManager* BehaviorTreeManager; // 0xE0(0x8)
		UEnvQueryManager* EnvironmentQueryManager; // 0xE8(0x8)
		UAIPerceptionSystem* PerceptionSystem; // 0xF0(0x8)
		TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xF8(0x10)
		UAIHotSpotManager* HotSpotManager; // 0x108(0x8)
		UNavLocalGridManager* NavLocalGrids; // 0x110(0x8)
		unsigned char UnknownData02_7[0x60]; // 0x118(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISystem");
			return ret;
		}

		void AILoggingVerbose(); // Flags: RequiredAPI|Exec|Native|Public, Memory Exec: 0x7FF74802F76C(relative to base address)
		void AIIgnorePlayers(); // Flags: RequiredAPI|Exec|Native|Public, Memory Exec: 0x7FF747E989FC(relative to base address)
	};


	// Class AIModule.BehaviorTree
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UBehaviorTree : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UBTCompositeNode* RootNode; // 0x30(0x8)
		UBlackboardData* BlackboardAsset; // 0x38(0x8)
		TArray<UBTDecorator*> RootDecorators; // 0x40(0x10)
		TArray<FBTDecoratorLogic> RootDecoratorOps; // 0x50(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x60(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BehaviorTree");
			return ret;
		}
	};


	// Class AIModule.BrainComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UBrainComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		UBlackboardComponent* BlackboardComp; // 0xA8(0x8)
		AAIController* AIOwner; // 0xB0(0x8)
		unsigned char UnknownData01_7[0x40]; // 0xB8(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BrainComponent");
			return ret;
		}

		void StopLogic(FString Reason); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CDBFDDC(relative to base address)
		void StartLogic(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74847EE18(relative to base address)
		void RestartLogic(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7474A9F44(relative to base address)
		bool IsRunning(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDBD9F0(relative to base address)
		bool IsPaused(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDBD9C8(relative to base address)
	};


	// Class AIModule.BehaviorTreeComponent
	// Inherited from UBrainComponent -> UActorComponent -> UObject
	// Size: 0x1A0 (0x298 - 0xF8)
	class UBehaviorTreeComponent : public UBrainComponent	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0xF8(0x20) UNKNOWN PROPERTY
		TArray<UBTNode*> NodeInstances; // 0x118(0x10)
		unsigned char UnknownData01_6[0x148]; // 0x128(0x148) UNKNOWN PROPERTY
		UBehaviorTree* DefaultBehaviorTreeAsset; // 0x270(0x8)
		unsigned char UnknownData02_7[0x20]; // 0x278(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BehaviorTreeComponent");
			return ret;
		}

		void SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CD9CB48(relative to base address)
		double GetTagCooldownEndTime(FGameplayTag CooldownTag); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B4AC(relative to base address)
		void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CD9AAC0(relative to base address)
	};


	// Class AIModule.BehaviorTreeManager
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UBehaviorTreeManager : public UObject	
	{
	public:
		int32_t MaxDebuggerSteps; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray<FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30(0x10)
		TArray<UBehaviorTreeComponent*> ActiveComponents; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BehaviorTreeManager");
			return ret;
		}
	};


	// Class AIModule.BehaviorTreeTypes
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBehaviorTreeTypes : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BehaviorTreeTypes");
			return ret;
		}
	};


	// Class AIModule.BlackboardAssetProvider
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBlackboardAssetProvider : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardAssetProvider");
			return ret;
		}

		UBlackboardData GetBlackboardAsset(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748DB959C(relative to base address)
	};


	// Class AIModule.BlackboardComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x108 (0x1A8 - 0xA0)
	class UBlackboardComponent : public UActorComponent	
	{
	public:
		UBrainComponent* BrainComp; // 0xA0(0x8)
		UBlackboardData* DefaultBlackboardAsset; // 0xA8(0x8)
		UBlackboardData* BlackboardAsset; // 0xB0(0x8)
		unsigned char UnknownData00_6[0x20]; // 0xB8(0x20) UNKNOWN PROPERTY
		TArray<UBlackboardKeyType*> KeyInstances; // 0xD8(0x10)
		unsigned char UnknownData01_7[0xC0]; // 0xE8(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardComponent");
			return ret;
		}

		void SetValueAsVector(FName& KeyName, FVector VectorValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CD9D8A8(relative to base address)
		void SetValueAsString(FName& KeyName, FString StringValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CD9D74C(relative to base address)
		void SetValueAsRotator(FName& KeyName, FRotator VectorValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CD9D5DC(relative to base address)
		void SetValueAsObject(FName& KeyName, UObject* ObjectValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CD9D4D0(relative to base address)
		void SetValueAsName(FName& KeyName, FName NameValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CD9D3B0(relative to base address)
		void SetValueAsInt(FName& KeyName, int32_t IntValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CD9D290(relative to base address)
		void SetValueAsFloat(FName& KeyName, float FloatValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CD9D184(relative to base address)
		void SetValueAsEnum(FName& KeyName, char EnumValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CD9D064(relative to base address)
		void SetValueAsClass(FName& KeyName, UClass* ClassValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CD9CF40(relative to base address)
		void SetValueAsBool(FName& KeyName, bool BoolValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CD9CE30(relative to base address)
		bool IsVectorValueSet(FName& KeyName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9BC34(relative to base address)
		FVector GetValueAsVector(FName& KeyName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9BB4C(relative to base address)
		FString GetValueAsString(FName& KeyName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9BA9C(relative to base address)
		FRotator GetValueAsRotator(FName& KeyName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B9F0(relative to base address)
		UObject GetValueAsObject(FName& KeyName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B958(relative to base address)
		FName GetValueAsName(FName& KeyName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B8C8(relative to base address)
		int32_t GetValueAsInt(FName& KeyName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B830(relative to base address)
		float GetValueAsFloat(FName& KeyName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B794(relative to base address)
		char GetValueAsEnum(FName& KeyName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B6FC(relative to base address)
		UClass GetValueAsClass(FName& KeyName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B664(relative to base address)
		bool GetValueAsBool(FName& KeyName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B5CC(relative to base address)
		bool GetRotationFromEntry(FName& KeyName, FRotator& ResultRotation); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B3B0(relative to base address)
		bool GetLocationFromEntry(FName& KeyName, FVector& ResultLocation); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CD9B240(relative to base address)
		void ClearValue(FName& KeyName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CD9AE9C(relative to base address)
	};


	// Class AIModule.BlackboardData
	// Inherited from UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UBlackboardData : public UDataAsset	
	{
	public:
		UBlackboardData* Parent; // 0x30(0x8)
		TArray<FBlackboardEntry> Keys; // 0x38(0x10)
		bool bHasSynchronizedKeys : 1; // 0x48:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardData");
			return ret;
		}
	};


	// Class AIModule.BlackboardKeyType_Bool
	// Inherited from UBlackboardKeyType -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UBlackboardKeyType_Bool : public UBlackboardKeyType	
	{
	public:
		bool bDefaultValue; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Bool");
			return ret;
		}
	};


	// Class AIModule.BlackboardKeyType_Class
	// Inherited from UBlackboardKeyType -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UBlackboardKeyType_Class : public UBlackboardKeyType	
	{
	public:
		UClass* BaseClass; // 0x30(0x8)
		UClass* DefaultValue; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Class");
			return ret;
		}
	};


	// Class AIModule.BlackboardKeyType_Enum
	// Inherited from UBlackboardKeyType -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UBlackboardKeyType_Enum : public UBlackboardKeyType	
	{
	public:
		UEnum* EnumType; // 0x30(0x8)
		FString EnumName; // 0x38(0x10)
		char DefaultValue; // 0x48(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		bool bIsEnumNameValid : 1; // 0x4C:0(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Enum");
			return ret;
		}
	};


	// Class AIModule.BlackboardKeyType_Float
	// Inherited from UBlackboardKeyType -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UBlackboardKeyType_Float : public UBlackboardKeyType	
	{
	public:
		float DefaultValue; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Float");
			return ret;
		}
	};


	// Class AIModule.BlackboardKeyType_Int
	// Inherited from UBlackboardKeyType -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UBlackboardKeyType_Int : public UBlackboardKeyType	
	{
	public:
		int32_t DefaultValue; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Int");
			return ret;
		}
	};


	// Class AIModule.BlackboardKeyType_Name
	// Inherited from UBlackboardKeyType -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UBlackboardKeyType_Name : public UBlackboardKeyType	
	{
	public:
		FName DefaultValue; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Name");
			return ret;
		}
	};


	// Class AIModule.BlackboardKeyType_NativeEnum
	// Inherited from UBlackboardKeyType -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType	
	{
	public:
		FString EnumName; // 0x30(0x10)
		UEnum* EnumType; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_NativeEnum");
			return ret;
		}
	};


	// Class AIModule.BlackboardKeyType_Object
	// Inherited from UBlackboardKeyType -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UBlackboardKeyType_Object : public UBlackboardKeyType	
	{
	public:
		UClass* BaseClass; // 0x30(0x8)
		UObject* DefaultValue; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Object");
			return ret;
		}
	};


	// Class AIModule.BlackboardKeyType_Rotator
	// Inherited from UBlackboardKeyType -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UBlackboardKeyType_Rotator : public UBlackboardKeyType	
	{
	public:
		FRotator DefaultValue; // 0x30(0x18)
		bool bUseDefaultValue; // 0x48(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Rotator");
			return ret;
		}
	};


	// Class AIModule.BlackboardKeyType_String
	// Inherited from UBlackboardKeyType -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UBlackboardKeyType_String : public UBlackboardKeyType	
	{
	public:
		FString StringValue; // 0x30(0x10)
		FString DefaultValue; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_String");
			return ret;
		}
	};


	// Class AIModule.BlackboardKeyType_Vector
	// Inherited from UBlackboardKeyType -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UBlackboardKeyType_Vector : public UBlackboardKeyType	
	{
	public:
		FVector DefaultValue; // 0x30(0x18)
		bool bUseDefaultValue; // 0x48(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BlackboardKeyType_Vector");
			return ret;
		}
	};


	// Class AIModule.BTNode
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UBTNode : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FString NodeName; // 0x30(0x10)
		UBehaviorTree* TreeAsset; // 0x40(0x8)
		UBTCompositeNode* ParentNode; // 0x48(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTNode");
			return ret;
		}
	};


	// Class AIModule.BTAuxiliaryNode
	// Inherited from UBTNode -> UObject
	// Size: 0x8 (0x60 - 0x58)
	class UBTAuxiliaryNode : public UBTNode	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x58(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTAuxiliaryNode");
			return ret;
		}
	};


	// Class AIModule.BTCompositeNode
	// Inherited from UBTNode -> UObject
	// Size: 0x28 (0x80 - 0x58)
	class UBTCompositeNode : public UBTNode	
	{
	public:
		TArray<FBTCompositeChild> Children; // 0x58(0x10)
		TArray<UBTService*> Services; // 0x68(0x10)
		bool bApplyDecoratorScope : 1; // 0x78:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTCompositeNode");
			return ret;
		}
	};


	// Class AIModule.BTDecorator
	// Inherited from UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x8 (0x68 - 0x60)
	class UBTDecorator : public UBTAuxiliaryNode	
	{
	public:
		bool bInverseCondition : 1; // 0x60:7(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x61(0x3) UNKNOWN PROPERTY
		TEnumAsByte<EBTFlowAbortMode> FlowAbortMode; // 0x64(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x65(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator");
			return ret;
		}
	};


	// Class AIModule.BTFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBTFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTFunctionLibrary");
			return ret;
		}

		void StopUsingExternalEvent(UBTNode* NodeOwner); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void StartUsingExternalEvent(UBTNode* NodeOwner, AActor* OwningActor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C8E74BC(relative to base address)
		void SetBlackboardValueAsVector(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FVector Value); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CDBF398(relative to base address)
		void SetBlackboardValueAsString(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FString Value); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CDBF1BC(relative to base address)
		void SetBlackboardValueAsRotator(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FRotator Value); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CDBEFE8(relative to base address)
		void SetBlackboardValueAsObject(UBTNode* NodeOwner, FBlackboardKeySelector& Key, UObject* Value); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CDBEE38(relative to base address)
		void SetBlackboardValueAsName(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FName Value); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CDBEC88(relative to base address)
		void SetBlackboardValueAsInt(UBTNode* NodeOwner, FBlackboardKeySelector& Key, int32_t Value); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CDBEAD8(relative to base address)
		void SetBlackboardValueAsFloat(UBTNode* NodeOwner, FBlackboardKeySelector& Key, float Value); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CDBE924(relative to base address)
		void SetBlackboardValueAsEnum(UBTNode* NodeOwner, FBlackboardKeySelector& Key, char Value); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CDBE774(relative to base address)
		void SetBlackboardValueAsClass(UBTNode* NodeOwner, FBlackboardKeySelector& Key, UClass* Value); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CDBE5C4(relative to base address)
		void SetBlackboardValueAsBool(UBTNode* NodeOwner, FBlackboardKeySelector& Key, bool Value); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CDBE410(relative to base address)
		UBlackboardComponent GetOwnersBlackboard(UBTNode* NodeOwner); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBD690(relative to base address)
		UBehaviorTreeComponent GetOwnerComponent(UBTNode* NodeOwner); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBD600(relative to base address)
		FVector GetBlackboardValueAsVector(UBTNode* NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBD154(relative to base address)
		FString GetBlackboardValueAsString(UBTNode* NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBD03C(relative to base address)
		FRotator GetBlackboardValueAsRotator(UBTNode* NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBCEFC(relative to base address)
		UObject GetBlackboardValueAsObject(UBTNode* NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBCE00(relative to base address)
		FName GetBlackboardValueAsName(UBTNode* NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBCCFC(relative to base address)
		int32_t GetBlackboardValueAsInt(UBTNode* NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBCBEC(relative to base address)
		float GetBlackboardValueAsFloat(UBTNode* NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBCAD8(relative to base address)
		char GetBlackboardValueAsEnum(UBTNode* NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBC9C8(relative to base address)
		UClass GetBlackboardValueAsClass(UBTNode* NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBC8B8(relative to base address)
		bool GetBlackboardValueAsBool(UBTNode* NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBC7A8(relative to base address)
		AActor GetBlackboardValueAsActor(UBTNode* NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBC68C(relative to base address)
		void ClearBlackboardValueAsVector(UBTNode* NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CDBBFD4(relative to base address)
		void ClearBlackboardValue(UBTNode* NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CDBBFD4(relative to base address)
	};


	// Class AIModule.BTService
	// Inherited from UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x10 (0x70 - 0x60)
	class UBTService : public UBTAuxiliaryNode	
	{
	public:
		float Interval; // 0x60(0x4)
		float RandomDeviation; // 0x64(0x4)
		bool bCallTickOnSearchStart : 1; // 0x68:0(0x1)
		bool bRestartTimerOnEachActivation : 1; // 0x68:1(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTService");
			return ret;
		}
	};


	// Class AIModule.BTTaskNode
	// Inherited from UBTNode -> UObject
	// Size: 0x18 (0x70 - 0x58)
	class UBTTaskNode : public UBTNode	
	{
	public:
		TArray<UBTService*> Services; // 0x58(0x10)
		bool bIgnoreRestartSelf : 1; // 0x68:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTaskNode");
			return ret;
		}
	};


	// Class AIModule.BTComposite_Selector
	// Inherited from UBTCompositeNode -> UBTNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UBTComposite_Selector : public UBTCompositeNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTComposite_Selector");
			return ret;
		}
	};


	// Class AIModule.BTComposite_Sequence
	// Inherited from UBTCompositeNode -> UBTNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UBTComposite_Sequence : public UBTCompositeNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTComposite_Sequence");
			return ret;
		}
	};


	// Class AIModule.BTComposite_SimpleParallel
	// Inherited from UBTCompositeNode -> UBTNode -> UObject
	// Size: 0x8 (0x88 - 0x80)
	class UBTComposite_SimpleParallel : public UBTCompositeNode	
	{
	public:
		TEnumAsByte<EBTParallelMode> FinishMode; // 0x80(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTComposite_SimpleParallel");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_BlackboardBase
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x28 (0x90 - 0x68)
	class UBTDecorator_BlackboardBase : public UBTDecorator	
	{
	public:
		FBlackboardKeySelector BlackboardKey; // 0x68(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_BlackboardBase");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_Blackboard
	// Inherited from UBTDecorator_BlackboardBase -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x30 (0xC0 - 0x90)
	class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase	
	{
	public:
		int32_t IntValue; // 0x90(0x4)
		float FloatValue; // 0x94(0x4)
		FString StringValue; // 0x98(0x10)
		FString CachedDescription; // 0xA8(0x10)
		char OperationType; // 0xB8(0x1)
		TEnumAsByte<EBTBlackboardRestart> NotifyObserver; // 0xB9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xBA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_Blackboard");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_BlueprintBase
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x38 (0xA0 - 0x68)
	class UBTDecorator_BlueprintBase : public UBTDecorator	
	{
	public:
		AAIController* AIOwner; // 0x68(0x8)
		AActor* ActorOwner; // 0x70(0x8)
		TArray<FName> ObservedKeyNames; // 0x78(0x10)
		unsigned char UnknownData00_6[0x10]; // 0x88(0x10) UNKNOWN PROPERTY
		bool bShowPropertyDetails : 1; // 0x98:0(0x1)
		bool bCheckConditionOnlyBlackBoardChanges : 1; // 0x98:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_BlueprintBase");
			return ret;
		}

		void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(AActor* OwnerActor, float DeltaSeconds); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveObserverDeactivatedAI(AAIController* OwnerController, APawn* ControlledPawn); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveObserverDeactivated(AActor* OwnerActor); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveObserverActivatedAI(AAIController* OwnerController, APawn* ControlledPawn); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveObserverActivated(AActor* OwnerActor); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveExecutionStart(AActor* OwnerActor); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveExecutionFinish(AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool PerformConditionCheck(AActor* OwnerActor); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsDecoratorObserverActive(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDBD960(relative to base address)
		bool IsDecoratorExecutionActive(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDBD8E8(relative to base address)
	};


	// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x60 (0xC8 - 0x68)
	class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator	
	{
	public:
		FBlackboardKeySelector ActorToCheck; // 0x68(0x28)
		EGameplayContainerMatchType TagsToMatch; // 0x90(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayTags; // 0x98(0x20)
		FString CachedDescription; // 0xB8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_CheckGameplayTagsOnActor");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_CompareBBEntries
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x58 (0xC0 - 0x68)
	class UBTDecorator_CompareBBEntries : public UBTDecorator	
	{
	public:
		TEnumAsByte<EBlackBoardEntryComparison> Operator; // 0x68(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		FBlackboardKeySelector BlackboardKeyA; // 0x70(0x28)
		FBlackboardKeySelector BlackboardKeyB; // 0x98(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_CompareBBEntries");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_ConditionalLoop
	// Inherited from UBTDecorator_Blackboard -> UBTDecorator_BlackboardBase -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_ConditionalLoop");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_ConeCheck
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x88 (0xF0 - 0x68)
	class UBTDecorator_ConeCheck : public UBTDecorator	
	{
	public:
		FValueOrBBKey_Float ConeHalfAngle; // 0x68(0xC)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FBlackboardKeySelector ConeOrigin; // 0x78(0x28)
		FBlackboardKeySelector ConeDirection; // 0xA0(0x28)
		FBlackboardKeySelector Observed; // 0xC8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_ConeCheck");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_Cooldown
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x10 (0x78 - 0x68)
	class UBTDecorator_Cooldown : public UBTDecorator	
	{
	public:
		FValueOrBBKey_Float CooldownTime; // 0x68(0xC)
		unsigned char UnknownData00_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_Cooldown");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_DoesPathExist
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x98 (0x100 - 0x68)
	class UBTDecorator_DoesPathExist : public UBTDecorator	
	{
	public:
		FBlackboardKeySelector BlackboardKeyA; // 0x68(0x28)
		FBlackboardKeySelector BlackboardKeyB; // 0x90(0x28)
		bool bUseSelf : 1; // 0xB8:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		FValueOrBBKey_Enum PathQueryType; // 0xC0(0x28)
		FValueOrBBKey_Class FilterClass; // 0xE8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_DoesPathExist");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_ForceSuccess
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x68 - 0x68)
	class UBTDecorator_ForceSuccess : public UBTDecorator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_ForceSuccess");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_IsAtLocation
	// Inherited from UBTDecorator_BlackboardBase -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x60 (0xF0 - 0x90)
	class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase	
	{
	public:
		float AcceptableRadius; // 0x90(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
		FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98(0x38)
		FAIDistanceType GeometricDistanceType; // 0xD0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD1(0x3) UNKNOWN PROPERTY
		bool bUseParametrizedRadius : 1; // 0xD4:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0xD5(0x3) UNKNOWN PROPERTY
		FValueOrBBKey_Bool bUseNavAgentGoalLocation; // 0xD8(0xC)
		FValueOrBBKey_Bool bPathFindingBasedTest; // 0xE4(0xC)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_IsAtLocation");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_IsBBEntryOfClass
	// Inherited from UBTDecorator_BlackboardBase -> UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x18 (0xA8 - 0x90)
	class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase	
	{
	public:
		FValueOrBBKey_Class TestClass; // 0x90(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_IsBBEntryOfClass");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_KeepInCone
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x68 (0xD0 - 0x68)
	class UBTDecorator_KeepInCone : public UBTDecorator	
	{
	public:
		FValueOrBBKey_Float ConeHalfAngle; // 0x68(0xC)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FBlackboardKeySelector ConeOrigin; // 0x78(0x28)
		FBlackboardKeySelector Observed; // 0xA0(0x28)
		bool bUseSelfAsOrigin : 1; // 0xC8:0(0x1)
		bool bUseSelfAsObserved : 1; // 0xC8:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_KeepInCone");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_Loop
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x20 (0x88 - 0x68)
	class UBTDecorator_Loop : public UBTDecorator	
	{
	public:
		FValueOrBBKey_Int32 NumLoops; // 0x68(0xC)
		bool bInfiniteLoop; // 0x74(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x75(0x3) UNKNOWN PROPERTY
		FValueOrBBKey_Float InfiniteLoopTimeoutTime; // 0x78(0xC)
		unsigned char UnknownData01_7[0x4]; // 0x84(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_Loop");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_ReachedMoveGoal
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x68 - 0x68)
	class UBTDecorator_ReachedMoveGoal : public UBTDecorator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_ReachedMoveGoal");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_SetTagCooldown
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x20 (0x88 - 0x68)
	class UBTDecorator_SetTagCooldown : public UBTDecorator	
	{
	public:
		FGameplayTag CooldownTag; // 0x68(0x4)
		FValueOrBBKey_Float CooldownDuration; // 0x6C(0xC)
		FValueOrBBKey_Bool bAddToExistingDuration; // 0x78(0xC)
		unsigned char UnknownData00_7[0x4]; // 0x84(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_SetTagCooldown");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_TagCooldown
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x28 (0x90 - 0x68)
	class UBTDecorator_TagCooldown : public UBTDecorator	
	{
	public:
		FGameplayTag CooldownTag; // 0x68(0x4)
		FValueOrBBKey_Float CooldownDuration; // 0x6C(0xC)
		FValueOrBBKey_Bool bAddToExistingDuration; // 0x78(0xC)
		FValueOrBBKey_Bool bActivatesCooldown; // 0x84(0xC)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_TagCooldown");
			return ret;
		}
	};


	// Class AIModule.BTDecorator_TimeLimit
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x10 (0x78 - 0x68)
	class UBTDecorator_TimeLimit : public UBTDecorator	
	{
	public:
		FValueOrBBKey_Float TimeLimit; // 0x68(0xC)
		unsigned char UnknownData00_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTDecorator_TimeLimit");
			return ret;
		}
	};


	// Class AIModule.BTService_BlackboardBase
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x28 (0x98 - 0x70)
	class UBTService_BlackboardBase : public UBTService	
	{
	public:
		FBlackboardKeySelector BlackboardKey; // 0x70(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTService_BlackboardBase");
			return ret;
		}
	};


	// Class AIModule.BTService_BlueprintBase
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x28 (0x98 - 0x70)
	class UBTService_BlueprintBase : public UBTService	
	{
	public:
		AAIController* AIOwner; // 0x70(0x8)
		AActor* ActorOwner; // 0x78(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x80(0x10) UNKNOWN PROPERTY
		bool bShowPropertyDetails : 1; // 0x90:0(0x1)
		bool bShowEventDetails : 1; // 0x90:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x91(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTService_BlueprintBase");
			return ret;
		}

		void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(AActor* OwnerActor, float DeltaSeconds); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveSearchStart(AActor* OwnerActor); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveDeactivation(AActor* OwnerActor); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveActivation(AActor* OwnerActor); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsServiceActive(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDBDA18(relative to base address)
	};


	// Class AIModule.BTService_DefaultFocus
	// Inherited from UBTService_BlackboardBase -> UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x8 (0xA0 - 0x98)
	class UBTService_DefaultFocus : public UBTService_BlackboardBase	
	{
	public:
		char FocusPriority; // 0x98(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTService_DefaultFocus");
			return ret;
		}
	};


	// Class AIModule.BTService_RunEQS
	// Inherited from UBTService_BlackboardBase -> UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x60 (0xF8 - 0x98)
	class UBTService_RunEQS : public UBTService_BlackboardBase	
	{
	public:
		FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98(0x48)
		bool bUpdateBBOnFail; // 0xE0(0x1)
		unsigned char UnknownData00_7[0x17]; // 0xE1(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTService_RunEQS");
			return ret;
		}
	};


	// Class AIModule.BTTask_BlackboardBase
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x28 (0x98 - 0x70)
	class UBTTask_BlackboardBase : public UBTTaskNode	
	{
	public:
		FBlackboardKeySelector BlackboardKey; // 0x70(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_BlackboardBase");
			return ret;
		}
	};


	// Class AIModule.BTTask_BlueprintBase
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x38 (0xA8 - 0x70)
	class UBTTask_BlueprintBase : public UBTTaskNode	
	{
	public:
		AAIController* AIOwner; // 0x70(0x8)
		AActor* ActorOwner; // 0x78(0x8)
		FIntervalCountdown TickInterval; // 0x80(0x8)
		unsigned char UnknownData00_6[0x18]; // 0x88(0x18) UNKNOWN PROPERTY
		bool bShowPropertyDetails : 1; // 0xA0:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_BlueprintBase");
			return ret;
		}

		void SetFinishOnMessageWithId(FName MessageName, int32_t RequestID); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74CDBF608(relative to base address)
		void SetFinishOnMessage(FName MessageName); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74CDBF56C(relative to base address)
		void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(AActor* OwnerActor, float DeltaSeconds); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveExecute(AActor* OwnerActor); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveAbort(AActor* OwnerActor); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsTaskExecuting(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDBDA8C(relative to base address)
		bool IsTaskAborting(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDBDA70(relative to base address)
		void FinishExecute(bool bSuccess); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74CDBC520(relative to base address)
		void FinishAbort(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74CDBC4B8(relative to base address)
	};


	// Class AIModule.BTTask_FinishWithResult
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x28 (0x98 - 0x70)
	class UBTTask_FinishWithResult : public UBTTaskNode	
	{
	public:
		FValueOrBBKey_Enum Result; // 0x70(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_FinishWithResult");
			return ret;
		}
	};


	// Class AIModule.BTTask_GameplayTaskBase
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UBTTask_GameplayTaskBase : public UBTTaskNode	
	{
	public:
		FValueOrBBKey_Bool bWaitForGameplayTask; // 0x70(0xC)
		unsigned char UnknownData00_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_GameplayTaskBase");
			return ret;
		}
	};


	// Class AIModule.BTTask_MakeNoise
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UBTTask_MakeNoise : public UBTTaskNode	
	{
	public:
		FValueOrBBKey_Float Loudnes; // 0x70(0xC)
		unsigned char UnknownData00_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_MakeNoise");
			return ret;
		}
	};


	// Class AIModule.BTTask_MoveTo
	// Inherited from UBTTask_BlackboardBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x98 (0x130 - 0x98)
	class UBTTask_MoveTo : public UBTTask_BlackboardBase	
	{
	public:
		FValueOrBBKey_Float AcceptableRadius; // 0x98(0xC)
		unsigned char UnknownData00_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		FValueOrBBKey_Class FilterClass; // 0xA8(0x18)
		FValueOrBBKey_Float ObservedBlackboardValueTolerance; // 0xC0(0xC)
		FValueOrBBKey_Bool bAllowStrafe; // 0xCC(0xC)
		FValueOrBBKey_Bool bAllowPartialPath; // 0xD8(0xC)
		FValueOrBBKey_Bool bTrackMovingGoal; // 0xE4(0xC)
		FValueOrBBKey_Bool bRequireNavigableEndLocation; // 0xF0(0xC)
		FValueOrBBKey_Bool bProjectGoalLocation; // 0xFC(0xC)
		FValueOrBBKey_Bool bReachTestIncludesAgentRadius; // 0x108(0xC)
		FValueOrBBKey_Bool bReachTestIncludesGoalRadius; // 0x114(0xC)
		FValueOrBBKey_Bool bStartFromPreviousPath; // 0x120(0xC)
		unsigned char UnknownBit01 : 1; // 0x12C:0(0x1) UNKNOWN PROPERTY
		bool bObserveBlackboardValue : 1; // 0x12C:1(0x1)
		unsigned char UnknownData02_7[0x3]; // 0x12D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_MoveTo");
			return ret;
		}
	};


	// Class AIModule.BTTask_MoveDirectlyToward
	// Inherited from UBTTask_MoveTo -> UBTTask_BlackboardBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x0 (0x130 - 0x130)
	class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_MoveDirectlyToward");
			return ret;
		}
	};


	// Class AIModule.BTTask_PawnActionBase
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UBTTask_PawnActionBase : public UBTTaskNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_PawnActionBase");
			return ret;
		}
	};


	// Class AIModule.BTTask_PlayAnimation
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x60 (0xD0 - 0x70)
	class UBTTask_PlayAnimation : public UBTTaskNode	
	{
	public:
		FValueOrBBKey_Object AnimationToPlay; // 0x70(0x18)
		FValueOrBBKey_Bool bLooping; // 0x88(0xC)
		FValueOrBBKey_Bool bNonBlocking; // 0x94(0xC)
		UBehaviorTreeComponent* MyOwnerComp; // 0xA0(0x8)
		USkeletalMeshComponent* CachedSkelMesh; // 0xA8(0x8)
		unsigned char UnknownData00_7[0x20]; // 0xB0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_PlayAnimation");
			return ret;
		}
	};


	// Class AIModule.BTTask_PlaySound
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x18 (0x88 - 0x70)
	class UBTTask_PlaySound : public UBTTaskNode	
	{
	public:
		FValueOrBBKey_Object SoundToPlay; // 0x70(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_PlaySound");
			return ret;
		}
	};


	// Class AIModule.BTTask_PushPawnAction
	// Inherited from UBTTask_PawnActionBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UBTTask_PushPawnAction : public UBTTask_PawnActionBase	
	{
	public:
		UPawnAction* Action; // 0x70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_PushPawnAction");
			return ret;
		}
	};


	// Class AIModule.BTTask_RotateToFaceBBEntry
	// Inherited from UBTTask_BlackboardBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase	
	{
	public:
		FValueOrBBKey_Float Precision; // 0x98(0xC)
		unsigned char UnknownData00_7[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_RotateToFaceBBEntry");
			return ret;
		}
	};


	// Class AIModule.BTTask_RunBehavior
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UBTTask_RunBehavior : public UBTTaskNode	
	{
	public:
		UBehaviorTree* BehaviorAsset; // 0x70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_RunBehavior");
			return ret;
		}
	};


	// Class AIModule.BTTask_RunBehaviorDynamic
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x18 (0x88 - 0x70)
	class UBTTask_RunBehaviorDynamic : public UBTTaskNode	
	{
	public:
		FGameplayTag InjectionTag; // 0x70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		UBehaviorTree* DefaultBehaviorAsset; // 0x78(0x8)
		UBehaviorTree* BehaviorAsset; // 0x80(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_RunBehaviorDynamic");
			return ret;
		}
	};


	// Class AIModule.BTTask_RunEQSQuery
	// Inherited from UBTTask_BlackboardBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0xC0 (0x158 - 0x98)
	class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase	
	{
	public:
		UEnvQuery* QueryTemplate; // 0x98(0x8)
		TArray<FEnvNamedValue> QueryParams; // 0xA0(0x10)
		TArray<FAIDynamicParam> QueryConfig; // 0xB0(0x10)
		TEnumAsByte<EEnvQueryRunMode> RunMode; // 0xC0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY
		FBlackboardKeySelector EQSQueryBlackboardKey; // 0xC8(0x28)
		bool bUseBBKey; // 0xF0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
		FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xF8(0x48)
		bool bUpdateBBOnFail; // 0x140(0x1)
		unsigned char UnknownData02_7[0x17]; // 0x141(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_RunEQSQuery");
			return ret;
		}
	};


	// Class AIModule.BTTask_SetTagCooldown
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x20 (0x90 - 0x70)
	class UBTTask_SetTagCooldown : public UBTTaskNode	
	{
	public:
		FGameplayTag CooldownTag; // 0x70(0x4)
		FValueOrBBKey_Bool bAddToExistingDuration; // 0x74(0xC)
		FValueOrBBKey_Float CooldownDuration; // 0x80(0xC)
		unsigned char UnknownData00_7[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_SetTagCooldown");
			return ret;
		}
	};


	// Class AIModule.BTTask_Wait
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x18 (0x88 - 0x70)
	class UBTTask_Wait : public UBTTaskNode	
	{
	public:
		FValueOrBBKey_Float WaitTime; // 0x70(0xC)
		FValueOrBBKey_Float RandomDeviation; // 0x7C(0xC)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_Wait");
			return ret;
		}
	};


	// Class AIModule.BTTask_WaitBlackboardTime
	// Inherited from UBTTask_Wait -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x28 (0xB0 - 0x88)
	class UBTTask_WaitBlackboardTime : public UBTTask_Wait	
	{
	public:
		FBlackboardKeySelector BlackboardKey; // 0x88(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.BTTask_WaitBlackboardTime");
			return ret;
		}
	};


	// Class AIModule.AIBlueprintHelperLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AIBlueprintHelperLibrary");
			return ret;
		}

		void UnlockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CDBFE70(relative to base address)
		APawn SpawnAIFromClass(UObject* WorldContextObject, UClass* PawnClass, UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, AActor* Owner); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CDBF954(relative to base address)
		void SimpleMoveToLocation(AController* Controller, FVector& Goal); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CDBF85C(relative to base address)
		void SimpleMoveToActor(AController* Controller, AActor* Goal); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CDBF7A8(relative to base address)
		void SendAIMessage(APawn* Target, FName Message, UObject* MessageSource, bool bSuccess); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CDBE230(relative to base address)
		void LockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CDBDE48(relative to base address)
		bool IsValidAIRotation(FRotator Rotation); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBDD28(relative to base address)
		bool IsValidAILocation(FVector Location); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBDC08(relative to base address)
		bool IsValidAIDirection(FVector DirectionVector); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBDAE8(relative to base address)
		int32_t GetNextNavLinkIndex(AController* Controller); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBD580(relative to base address)
		TArray GetCurrentPathPoints(AController* Controller); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBD440(relative to base address)
		int32_t GetCurrentPathIndex(AController* Controller); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBD39C(relative to base address)
		UNavigationPath GetCurrentPath(AController* Controller); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBD294(relative to base address)
		UBlackboardComponent GetBlackboard(AActor* Target); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CDBC5E0(relative to base address)
		AAIController GetAIController(AActor* ControlledActor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748F335C0(relative to base address)
		UAIAsyncTaskBlueprintProxy CreateMoveToProxyObject(UObject* WorldContextObject, APawn* Pawn, FVector Destination, AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CDBC0DC(relative to base address)
	};


	// Class AIModule.AIDataProvider
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAIDataProvider : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AIDataProvider");
			return ret;
		}
	};


	// Class AIModule.AIDataProvider_QueryParams
	// Inherited from UAIDataProvider -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UAIDataProvider_QueryParams : public UAIDataProvider	
	{
	public:
		FName ParamName; // 0x28(0x4)
		float FloatValue; // 0x2C(0x4)
		int32_t IntValue; // 0x30(0x4)
		bool BoolValue; // 0x34(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x35(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AIDataProvider_QueryParams");
			return ret;
		}
	};


	// Class AIModule.AIDataProvider_Random
	// Inherited from UAIDataProvider_QueryParams -> UAIDataProvider -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UAIDataProvider_Random : public UAIDataProvider_QueryParams	
	{
	public:
		float Min; // 0x38(0x4)
		float Max; // 0x3C(0x4)
		bool bInteger : 1; // 0x40:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AIDataProvider_Random");
			return ret;
		}
	};


	// Class AIModule.DetourCrowdAIController
	// Inherited from AAIController -> AController -> AActor -> UObject
	// Size: 0x0 (0x3B8 - 0x3B8)
	class ADetourCrowdAIController : public AAIController	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.DetourCrowdAIController");
			return ret;
		}
	};


	// Class AIModule.EnvQueryContext
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEnvQueryContext : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryContext");
			return ret;
		}
	};


	// Class AIModule.EnvQueryContext_BlueprintBase
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UEnvQueryContext_BlueprintBase : public UEnvQueryContext	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryContext_BlueprintBase");
			return ret;
		}

		void ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor* ResultingActor); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector>& ResultingLocationSet); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class AIModule.EnvQueryContext_Item
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEnvQueryContext_Item : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryContext_Item");
			return ret;
		}
	};


	// Class AIModule.EnvQueryContext_Querier
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEnvQueryContext_Querier : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryContext_Querier");
			return ret;
		}
	};


	// Class AIModule.EnvQuery
	// Inherited from UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UEnvQuery : public UDataAsset	
	{
	public:
		FName QueryName; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray<UEnvQueryOption*> Options; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQuery");
			return ret;
		}
	};


	// Class AIModule.EnvQueryDebugHelpers
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEnvQueryDebugHelpers : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryDebugHelpers");
			return ret;
		}
	};


	// Class AIModule.EnvQueryNode
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UEnvQueryNode : public UObject	
	{
	public:
		int32_t VerNum; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryNode");
			return ret;
		}
	};


	// Class AIModule.EnvQueryGenerator
	// Inherited from UEnvQueryNode -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UEnvQueryGenerator : public UEnvQueryNode	
	{
	public:
		FString OptionName; // 0x30(0x10)
		UClass* ItemType; // 0x40(0x8)
		bool bAutoSortTests : 1; // 0x48:0(0x1)
		bool bCanRunAsync : 1; // 0x48:1(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator");
			return ret;
		}
	};


	// Class AIModule.EnvQueryInstanceBlueprintWrapper
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UEnvQueryInstanceBlueprintWrapper : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		int32_t QueryID; // 0x30(0x4)
		unsigned char UnknownData01_6[0x24]; // 0x34(0x24) UNKNOWN PROPERTY
		UClass* ItemType; // 0x58(0x8)
		int32_t OptionIndex; // 0x60(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryInstanceBlueprintWrapper");
			return ret;
		}

		void SetNamedParam(FName ParamName, float Value); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CDBF6DC(relative to base address)
		TArray GetResultsAsLocations(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDBD8A8(relative to base address)
		TArray GetResultsAsActors(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDBD868(relative to base address)
		bool GetQueryResultsAsLocations(TArray<FVector>& ResultLocations); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74CDBD7BC(relative to base address)
		bool GetQueryResultsAsActors(TArray<AActor*>& ResultActors); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74CDBD710(relative to base address)
		float GetItemScore(int32_t ItemIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDBD4D4(relative to base address)
		void EQSQueryDoneSignature__DelegateSignature(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class AIModule.EnvQueryManager
	// Inherited from UAISubsystem -> UObject
	// Size: 0x120 (0x158 - 0x38)
	class UEnvQueryManager : public UAISubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x70]; // 0x38(0x70) UNKNOWN PROPERTY
		TArray<FEnvQueryInstanceCache> InstanceCache; // 0xA8(0x10)
		TArray<UEnvQueryContext*> LocalContexts; // 0xB8(0x10)
		TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xC8(0x10)
		unsigned char UnknownData01_6[0x54]; // 0xD8(0x54) UNKNOWN PROPERTY
		float MaxAllowedTestingTime; // 0x12C(0x4)
		bool bTestQueriesUsingBreadth; // 0x130(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x131(0x3) UNKNOWN PROPERTY
		int32_t QueryCountWarningThreshold; // 0x134(0x4)
		double QueryCountWarningInterval; // 0x138(0x8)
		double ExecutionTimeWarningSeconds; // 0x140(0x8)
		double HandlingResultTimeWarningSeconds; // 0x148(0x8)
		double GenerationTimeWarningSeconds; // 0x150(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryManager");
			return ret;
		}

		UEnvQueryInstanceBlueprintWrapper RunEQSQuery(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, UClass* WrapperClass); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CDBDFC0(relative to base address)
	};


	// Class AIModule.EnvQueryOption
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UEnvQueryOption : public UObject	
	{
	public:
		UEnvQueryGenerator* Generator; // 0x28(0x8)
		TArray<UEnvQueryTest*> Tests; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryOption");
			return ret;
		}
	};


	// Class AIModule.EnvQueryTest
	// Inherited from UEnvQueryNode -> UObject
	// Size: 0x1C8 (0x1F8 - 0x30)
	class UEnvQueryTest : public UEnvQueryNode	
	{
	public:
		int32_t TestOrder; // 0x30(0x4)
		TEnumAsByte<EEnvTestPurpose> TestPurpose; // 0x34(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		FString TestComment; // 0x38(0x10)
		TEnumAsByte<EEnvTestFilterOperator> MultipleContextFilterOp; // 0x48(0x1)
		TEnumAsByte<EEnvTestScoreOperator> MultipleContextScoreOp; // 0x49(0x1)
		TEnumAsByte<EEnvTestFilterType> FilterType; // 0x4A(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x4B(0x5) UNKNOWN PROPERTY
		FAIDataProviderBoolValue BoolValue; // 0x50(0x38)
		FAIDataProviderFloatValue FloatValueMin; // 0x88(0x38)
		FAIDataProviderFloatValue FloatValueMax; // 0xC0(0x38)
		unsigned char UnknownData02_6[0x1]; // 0xF8(0x1) UNKNOWN PROPERTY
		TEnumAsByte<EEnvTestScoreEquation> ScoringEquation; // 0xF9(0x1)
		TEnumAsByte<EEnvQueryTestClamping> ClampMinType; // 0xFA(0x1)
		TEnumAsByte<EEnvQueryTestClamping> ClampMaxType; // 0xFB(0x1)
		EEQSNormalizationType NormalizationType; // 0xFC(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xFD(0x3) UNKNOWN PROPERTY
		FAIDataProviderFloatValue ScoreClampMin; // 0x100(0x38)
		FAIDataProviderFloatValue ScoreClampMax; // 0x138(0x38)
		FAIDataProviderFloatValue ScoringFactor; // 0x170(0x38)
		FAIDataProviderFloatValue ReferenceValue; // 0x1A8(0x38)
		bool bDefineReferenceValue; // 0x1E0(0x1)
		unsigned char UnknownData04_6[0xF]; // 0x1E1(0xF) UNKNOWN PROPERTY
		bool bWorkOnFloatValues : 1; // 0x1F0:0(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x1F1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest");
			return ret;
		}
	};


	// Class AIModule.EQSRenderingComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x550 - 0x518)
	class UEQSRenderingComponent : public UDebugDrawComponent	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0x518(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EQSRenderingComponent");
			return ret;
		}
	};


	// Class AIModule.EQSTestingPawn
	// Inherited from ACharacter -> APawn -> AActor -> UObject
	// Size: 0x98 (0x6B0 - 0x618)
	class AEQSTestingPawn : public ACharacter	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x618(0x8) UNKNOWN PROPERTY
		UEnvQuery* QueryTemplate; // 0x620(0x8)
		TArray<FEnvNamedValue> QueryParams; // 0x628(0x10)
		TArray<FAIDynamicParam> QueryConfig; // 0x638(0x10)
		float TimeLimitPerStep; // 0x648(0x4)
		int32_t StepToDebugDraw; // 0x64C(0x4)
		EEnvQueryHightlightMode HighlightMode; // 0x650(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x651(0x3) UNKNOWN PROPERTY
		bool bDrawLabels : 1; // 0x654:0(0x1)
		bool bDrawFailedItems : 1; // 0x654:1(0x1)
		bool bReRunQueryOnlyOnFinishedMove : 1; // 0x654:2(0x1)
		bool bShouldBeVisibleInGame : 1; // 0x654:3(0x1)
		bool bTickDuringGame : 1; // 0x654:4(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x655(0x3) UNKNOWN PROPERTY
		TEnumAsByte<EEnvQueryRunMode> QueryingMode; // 0x658(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x659(0x7) UNKNOWN PROPERTY
		FNavAgentProperties NavAgentProperties; // 0x660(0x30)
		unsigned char UnknownData04_7[0x20]; // 0x690(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EQSTestingPawn");
			return ret;
		}
	};


	// Class AIModule.EnvQueryGenerator_ActorsOfClass
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x80 (0xD0 - 0x50)
	class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator	
	{
	public:
		UClass* SearchedActorClass; // 0x50(0x8)
		FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58(0x38)
		FAIDataProviderFloatValue SearchRadius; // 0x90(0x38)
		UClass* SearchCenter; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_ActorsOfClass");
			return ret;
		}
	};


	// Class AIModule.EnvQueryGenerator_BlueprintBase
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x30 (0x80 - 0x50)
	class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator	
	{
	public:
		FText GeneratorsActionDescription; // 0x50(0x10)
		UClass* Context; // 0x60(0x8)
		UClass* GeneratedItemType; // 0x68(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x70(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_BlueprintBase");
			return ret;
		}

		UObject GetQuerier(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDE0C74(relative to base address)
		void DoItemGenerationFromActors(TArray<AActor*>& ContextActors); // Flags: RequiredAPI|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DoItemGeneration(TArray<FVector>& ContextLocations); // Flags: RequiredAPI|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddGeneratedVector(FVector GeneratedVector); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF74CDE0B54(relative to base address)
		void AddGeneratedActor(AActor* GeneratedActor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74CDE0AD4(relative to base address)
	};


	// Class AIModule.EnvQueryGenerator_Composite
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x20 (0x70 - 0x50)
	class UEnvQueryGenerator_Composite : public UEnvQueryGenerator	
	{
	public:
		TArray<UEnvQueryGenerator*> Generators; // 0x50(0x10)
		bool bAllowDifferentItemTypes : 1; // 0x60:0(0x1)
		bool bHasMatchingItemType : 1; // 0x60:1(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
		UClass* ForcedItemType; // 0x68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_Composite");
			return ret;
		}
	};


	// Class AIModule.EnvQueryGenerator_ProjectedPoints
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x38 (0x88 - 0x50)
	class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator	
	{
	public:
		FEnvTraceData ProjectionData; // 0x50(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_ProjectedPoints");
			return ret;
		}
	};


	// Class AIModule.EnvQueryGenerator_Cone
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0xF0 (0x178 - 0x88)
	class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		FAIDataProviderFloatValue AlignedPointsDistance; // 0x88(0x38)
		FAIDataProviderFloatValue ConeDegrees; // 0xC0(0x38)
		FAIDataProviderFloatValue AngleStep; // 0xF8(0x38)
		FAIDataProviderFloatValue Range; // 0x130(0x38)
		UClass* CenterActor; // 0x168(0x8)
		bool bIncludeContextLocation : 1; // 0x170:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x171(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_Cone");
			return ret;
		}
	};


	// Class AIModule.EnvQueryGenerator_CurrentLocation
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator	
	{
	public:
		UClass* QueryContext; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_CurrentLocation");
			return ret;
		}
	};


	// Class AIModule.EnvQueryGenerator_Donut
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x150 (0x1D8 - 0x88)
	class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		FAIDataProviderFloatValue InnerRadius; // 0x88(0x38)
		FAIDataProviderFloatValue OuterRadius; // 0xC0(0x38)
		FAIDataProviderIntValue NumberOfRings; // 0xF8(0x38)
		FAIDataProviderIntValue PointsPerRing; // 0x130(0x38)
		FEnvDirection ArcDirection; // 0x168(0x20)
		FAIDataProviderFloatValue ArcAngle; // 0x188(0x38)
		bool bUseSpiralPattern; // 0x1C0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1C1(0x7) UNKNOWN PROPERTY
		UClass* Center; // 0x1C8(0x8)
		bool bDefineArc : 1; // 0x1D0:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x1D1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_Donut");
			return ret;
		}
	};


	// Class AIModule.EnvQueryGenerator_OnCircle
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x198 (0x220 - 0x88)
	class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		FAIDataProviderFloatValue CircleRadius; // 0x88(0x38)
		EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0xC0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY
		FAIDataProviderFloatValue SpaceBetween; // 0xC8(0x38)
		FAIDataProviderIntValue NumberOfPoints; // 0x100(0x38)
		FEnvDirection ArcDirection; // 0x138(0x20)
		FAIDataProviderFloatValue ArcAngle; // 0x158(0x38)
		float AngleRadians; // 0x190(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x194(0x4) UNKNOWN PROPERTY
		UClass* CircleCenter; // 0x198(0x8)
		bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x1A0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1A1(0x7) UNKNOWN PROPERTY
		FAIDataProviderFloatValue CircleCenterZOffset; // 0x1A8(0x38)
		FEnvTraceData TraceData; // 0x1E0(0x38)
		bool bDefineArc : 1; // 0x218:0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x219(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_OnCircle");
			return ret;
		}
	};


	// Class AIModule.EnvQueryGenerator_SimpleGrid
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x78 (0x100 - 0x88)
	class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		FAIDataProviderFloatValue GridSize; // 0x88(0x38)
		FAIDataProviderFloatValue SpaceBetween; // 0xC0(0x38)
		UClass* GenerateAround; // 0xF8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_SimpleGrid");
			return ret;
		}
	};


	// Class AIModule.EnvQueryGenerator_PathingGrid
	// Inherited from UEnvQueryGenerator_SimpleGrid -> UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x78 (0x178 - 0x100)
	class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid	
	{
	public:
		FAIDataProviderBoolValue PathToItem; // 0x100(0x38)
		UClass* NavigationFilter; // 0x138(0x8)
		FAIDataProviderFloatValue ScanRangeMultiplier; // 0x140(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_PathingGrid");
			return ret;
		}
	};


	// Class AIModule.EnvQueryGenerator_PerceivedActors
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x58 (0xA8 - 0x50)
	class UEnvQueryGenerator_PerceivedActors : public UEnvQueryGenerator	
	{
	public:
		UClass* AllowedActorClass; // 0x50(0x8)
		FAIDataProviderFloatValue SearchRadius; // 0x58(0x38)
		UClass* ListenerContext; // 0x90(0x8)
		UClass* SenseToUse; // 0x98(0x8)
		bool bIncludeKnownActors; // 0xA0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryGenerator_PerceivedActors");
			return ret;
		}
	};


	// Class AIModule.EnvQueryItemType
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UEnvQueryItemType : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryItemType");
			return ret;
		}
	};


	// Class AIModule.EnvQueryItemType_VectorBase
	// Inherited from UEnvQueryItemType -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UEnvQueryItemType_VectorBase : public UEnvQueryItemType	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryItemType_VectorBase");
			return ret;
		}
	};


	// Class AIModule.EnvQueryItemType_ActorBase
	// Inherited from UEnvQueryItemType_VectorBase -> UEnvQueryItemType -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryItemType_ActorBase");
			return ret;
		}
	};


	// Class AIModule.EnvQueryItemType_Actor
	// Inherited from UEnvQueryItemType_ActorBase -> UEnvQueryItemType_VectorBase -> UEnvQueryItemType -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryItemType_Actor");
			return ret;
		}
	};


	// Class AIModule.EnvQueryItemType_Direction
	// Inherited from UEnvQueryItemType_VectorBase -> UEnvQueryItemType -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryItemType_Direction");
			return ret;
		}
	};


	// Class AIModule.EnvQueryItemType_Point
	// Inherited from UEnvQueryItemType_VectorBase -> UEnvQueryItemType -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryItemType_Point");
			return ret;
		}
	};


	// Class AIModule.EnvQueryTest_Distance
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x10 (0x208 - 0x1F8)
	class UEnvQueryTest_Distance : public UEnvQueryTest	
	{
	public:
		TEnumAsByte<EEnvTestDistance> TestMode; // 0x1F8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY
		UClass* DistanceTo; // 0x200(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_Distance");
			return ret;
		}
	};


	// Class AIModule.EnvQueryTest_Dot
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x48 (0x240 - 0x1F8)
	class UEnvQueryTest_Dot : public UEnvQueryTest	
	{
	public:
		FEnvDirection LineA; // 0x1F8(0x20)
		FEnvDirection LineB; // 0x218(0x20)
		EEnvTestDot TestMode; // 0x238(0x1)
		bool bAbsoluteValue; // 0x239(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x23A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_Dot");
			return ret;
		}
	};


	// Class AIModule.EnvQueryTest_GameplayTags
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x70 (0x268 - 0x1F8)
	class UEnvQueryTest_GameplayTags : public UEnvQueryTest	
	{
	public:
		FGameplayTagQuery TagQueryToMatch; // 0x1F8(0x48)
		bool bRejectIncompatibleItems; // 0x240(0x1)
		bool bUpdatedToUseQuery; // 0x241(0x1)
		EGameplayContainerMatchType TagsToMatch; // 0x242(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x243(0x5) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayTags; // 0x248(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_GameplayTags");
			return ret;
		}
	};


	// Class AIModule.EnvQueryTest_Overlap
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x30 (0x228 - 0x1F8)
	class UEnvQueryTest_Overlap : public UEnvQueryTest	
	{
	public:
		FEnvOverlapData OverlapData; // 0x1F8(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_Overlap");
			return ret;
		}
	};


	// Class AIModule.EnvQueryTest_Pathfinding
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x88 (0x280 - 0x1F8)
	class UEnvQueryTest_Pathfinding : public UEnvQueryTest	
	{
	public:
		TEnumAsByte<EEnvTestPathfinding> TestMode; // 0x1F8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY
		UClass* Context; // 0x200(0x8)
		FAIDataProviderBoolValue PathFromContext; // 0x208(0x38)
		FAIDataProviderBoolValue SkipUnreachable; // 0x240(0x38)
		UClass* FilterClass; // 0x278(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_Pathfinding");
			return ret;
		}
	};


	// Class AIModule.EnvQueryTest_PathfindingBatch
	// Inherited from UEnvQueryTest_Pathfinding -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x38 (0x2B8 - 0x280)
	class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding	
	{
	public:
		FAIDataProviderFloatValue ScanRangeMultiplier; // 0x280(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_PathfindingBatch");
			return ret;
		}
	};


	// Class AIModule.EnvQueryTest_Project
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x38 (0x230 - 0x1F8)
	class UEnvQueryTest_Project : public UEnvQueryTest	
	{
	public:
		FEnvTraceData ProjectionData; // 0x1F8(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_Project");
			return ret;
		}
	};


	// Class AIModule.EnvQueryTest_Random
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x1F8 - 0x1F8)
	class UEnvQueryTest_Random : public UEnvQueryTest	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_Random");
			return ret;
		}
	};


	// Class AIModule.EnvQueryTest_Trace
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0xE8 (0x2E0 - 0x1F8)
	class UEnvQueryTest_Trace : public UEnvQueryTest	
	{
	public:
		FEnvTraceData TraceData; // 0x1F8(0x38)
		FAIDataProviderBoolValue TraceFromContext; // 0x230(0x38)
		FAIDataProviderFloatValue ItemHeightOffset; // 0x268(0x38)
		FAIDataProviderFloatValue ContextHeightOffset; // 0x2A0(0x38)
		UClass* Context; // 0x2D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_Trace");
			return ret;
		}
	};


	// Class AIModule.EnvQueryTest_Volume
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x18 (0x210 - 0x1F8)
	class UEnvQueryTest_Volume : public UEnvQueryTest	
	{
	public:
		UClass* VolumeContext; // 0x1F8(0x8)
		UClass* VolumeClass; // 0x200(0x8)
		bool bDoComplexVolumeTest : 1; // 0x208:0(0x1)
		bool bSkipTestIfNoVolumes : 1; // 0x208:1(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x209(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.EnvQueryTest_Volume");
			return ret;
		}
	};


	// Class AIModule.GridPathAIController
	// Inherited from AAIController -> AController -> AActor -> UObject
	// Size: 0x0 (0x3B8 - 0x3B8)
	class AGridPathAIController : public AAIController	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.GridPathAIController");
			return ret;
		}
	};


	// Class AIModule.AIHotSpotManager
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAIHotSpotManager : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AIHotSpotManager");
			return ret;
		}
	};


	// Class AIModule.PathFollowingComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x250 (0x2F0 - 0xA0)
	class UPathFollowingComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0xA0(0x38) UNKNOWN PROPERTY
		UNavMovementComponent* MovementComp; // 0xD8(0x8)
		unsigned char UnknownData01_6[0x20]; // 0xE0(0x20) UNKNOWN PROPERTY
		ANavigationData* MyNavData; // 0x100(0x8)
		unsigned char UnknownData02_7[0x1E8]; // 0x108(0x1E8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.PathFollowingComponent");
			return ret;
		}

		void OnNavDataRegistered(ANavigationData* NavData); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF74CDFF3E8(relative to base address)
		void OnActorBump(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit); // Flags: RequiredAPI|Native|Public|HasOutParms|HasDefaults, Memory Exec: 0x7FF74CDFF150(relative to base address)
		FVector GetPathDestination(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFECDC(relative to base address)
		TEnumAsByte GetPathActionType(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFEC64(relative to base address)
	};


	// Class AIModule.CrowdFollowingComponent
	// Inherited from UPathFollowingComponent -> UActorComponent -> UObject
	// Size: 0x50 (0x340 - 0x2F0)
	class UCrowdFollowingComponent : public UPathFollowingComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x2F0(0x18) UNKNOWN PROPERTY
		FVector CrowdAgentMoveDirection; // 0x308(0x18)
		unsigned char UnknownData01_7[0x20]; // 0x320(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.CrowdFollowingComponent");
			return ret;
		}

		void SuspendCrowdSteering(bool bSuspend); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CDE0CA0(relative to base address)
	};


	// Class AIModule.CrowdManager
	// Inherited from UCrowdManagerBase -> UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class UCrowdManager : public UCrowdManagerBase	
	{
	public:
		ANavigationData* MyNavData; // 0x28(0x8)
		TArray<FCrowdAvoidanceConfig> AvoidanceConfig; // 0x30(0x10)
		TArray<FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x40(0x10)
		int32_t MaxAgents; // 0x50(0x4)
		float MaxAgentRadius; // 0x54(0x4)
		int32_t MaxAvoidedAgents; // 0x58(0x4)
		int32_t MaxAvoidedWalls; // 0x5C(0x4)
		float NavmeshCheckInterval; // 0x60(0x4)
		float PathOptimizationInterval; // 0x64(0x4)
		float SeparationDirClamp; // 0x68(0x4)
		float PathOffsetRadiusMultiplier; // 0x6C(0x4)
		unsigned char UnknownBit00 : 1; // 0x70:0(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit01 : 1; // 0x70:1(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit02 : 1; // 0x70:2(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit03 : 1; // 0x70:3(0x1) UNKNOWN PROPERTY
		bool bResolveCollisions : 1; // 0x70:4(0x1)
		unsigned char UnknownData04_7[0x7F]; // 0x71(0x7F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.CrowdManager");
			return ret;
		}
	};


	// Class AIModule.GridPathFollowingComponent
	// Inherited from UPathFollowingComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x320 - 0x2F0)
	class UGridPathFollowingComponent : public UPathFollowingComponent	
	{
	public:
		UNavLocalGridManager* GridManager; // 0x2F0(0x8)
		unsigned char UnknownData00_7[0x28]; // 0x2F8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.GridPathFollowingComponent");
			return ret;
		}
	};


	// Class AIModule.NavFilter_AIControllerDefault
	// Inherited from UNavigationQueryFilter -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UNavFilter_AIControllerDefault : public UNavigationQueryFilter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.NavFilter_AIControllerDefault");
			return ret;
		}
	};


	// Class AIModule.NavLinkProxy
	// Inherited from AActor -> UObject
	// Size: 0x50 (0x2E0 - 0x290)
	class ANavLinkProxy : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x290(0x10) UNKNOWN PROPERTY
		TArray<FNavigationLink> PointLinks; // 0x2A0(0x10)
		TArray<FNavigationSegmentLink> SegmentLinks; // 0x2B0(0x10)
		UNavLinkCustomComponent* SmartLinkComp; // 0x2C0(0x8)
		bool bSmartLinkIsRelevant; // 0x2C8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2C9(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSmartLinkReached; // 0x2D0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.NavLinkProxy");
			return ret;
		}

		void SetSmartLinkEnabled(bool bEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE00D10(relative to base address)
		void ResumePathFollowing(AActor* Agent); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE007E8(relative to base address)
		void ReceiveSmartLinkReached(AActor* Agent, FVector& Destination); // Flags: RequiredAPI|Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsSmartLinkEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFF12C(relative to base address)
		bool HasMovingAgents(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFF020(relative to base address)
	};


	// Class AIModule.NavLocalGridManager
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UNavLocalGridManager : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x28(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.NavLocalGridManager");
			return ret;
		}

		bool SetLocalNavigationGridDensity(UObject* WorldContextObject, float CellSize); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CE009D4(relative to base address)
		void RemoveLocalNavigationGrid(UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CDFF950(relative to base address)
		bool FindLocalNavigationGridPath(UObject* WorldContextObject, FVector& Start, FVector& End, TArray<FVector>& PathPoints); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CDFE44C(relative to base address)
		int32_t AddLocalNavigationGridForPoints(UObject* WorldContextObject, TArray<FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CDFE120(relative to base address)
		int32_t AddLocalNavigationGridForPoint(UObject* WorldContextObject, FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CDFDE8C(relative to base address)
		int32_t AddLocalNavigationGridForCapsule(UObject* WorldContextObject, FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CDFDAEC(relative to base address)
		int32_t AddLocalNavigationGridForBox(UObject* WorldContextObject, FVector& Location, FVector Extent, FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CDFD5F8(relative to base address)
	};


	// Class AIModule.PathFollowingManager
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPathFollowingManager : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.PathFollowingManager");
			return ret;
		}
	};


	// Class AIModule.AIPerceptionComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xE8 (0x188 - 0xA0)
	class UAIPerceptionComponent : public UActorComponent	
	{
	public:
		TArray<UAISenseConfig*> SensesConfig; // 0xA0(0x10)
		UClass* DominantSense; // 0xB0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		AAIController* AIOwner; // 0xC0(0x8)
		unsigned char UnknownData01_6[0x80]; // 0xC8(0x80) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPerceptionUpdated; // 0x148(0x10)
		FMulticastInlineDelegate OnTargetPerceptionForgotten; // 0x158(0x10)
		FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x168(0x10)
		FMulticastInlineDelegate OnTargetPerceptionInfoUpdated; // 0x178(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AIPerceptionComponent");
			return ret;
		}

		void SetSenseEnabled(UClass* SenseClass, bool bEnable); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE00B1C(relative to base address)
		void RequestStimuliListenerUpdate(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE007D4(relative to base address)
		void OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Final|RequiredAPI|Native|Public, Memory Exec: 0x7FF74CDFF4E8(relative to base address)
		bool IsSenseEnabled(UClass* SenseClass); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFF088(relative to base address)
		void GetPerceivedHostileActorsBySense(UClass* SenseToUse, TArray<AActor*>& OutActors); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFEDB4(relative to base address)
		void GetPerceivedHostileActors(TArray<AActor*>& OutActors); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFED14(relative to base address)
		void GetKnownPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFEB64(relative to base address)
		void GetCurrentlyPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFEA64(relative to base address)
		bool GetActorsPerception(AActor* Actor, FActorPerceptionBlueprintInfo& Info); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CDFE674(relative to base address)
		void ForgetAll(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CDFE660(relative to base address)
	};


	// Class AIModule.AIPerceptionListenerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAIPerceptionListenerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AIPerceptionListenerInterface");
			return ret;
		}
	};


	// Class AIModule.AIPerceptionStimuliSourceComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UAIPerceptionStimuliSourceComponent : public UActorComponent	
	{
	public:
		bool bAutoRegisterAsSource : 1; // 0xA0:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		TArray<UClass*> RegisterAsSourceForSenses; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AIPerceptionStimuliSourceComponent");
			return ret;
		}

		void UnregisterFromSense(UClass* SenseClass); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE00DA8(relative to base address)
		void UnregisterFromPerceptionSystem(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE00D94(relative to base address)
		void RegisterWithPerceptionSystem(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CDFF93C(relative to base address)
		void RegisterForSense(UClass* SenseClass); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CDFF670(relative to base address)
	};


	// Class AIModule.AIPerceptionSystem
	// Inherited from UAISubsystem -> UObject
	// Size: 0xF8 (0x130 - 0x38)
	class UAIPerceptionSystem : public UAISubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x50]; // 0x38(0x50) UNKNOWN PROPERTY
		TArray<UAISense*> Senses; // 0x88(0x10)
		float PerceptionAgingRate; // 0x98(0x4)
		unsigned char UnknownData01_7[0x94]; // 0x9C(0x94) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AIPerceptionSystem");
			return ret;
		}

		void ReportPerceptionEvent(UObject* WorldContextObject, UAISenseEvent* PerceptionEvent); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CE0030C(relative to base address)
		void ReportEvent(UAISenseEvent* PerceptionEvent); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CDFFE0C(relative to base address)
		bool RegisterPerceptionStimuliSource(UObject* WorldContextObject, UClass* Sense, AActor* Target); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CDFF7C0(relative to base address)
		void OnPerceptionStimuliSourceEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF74CDFF5AC(relative to base address)
		UClass GetSenseClassForStimulus(UObject* WorldContextObject, FAIStimulus& Stimulus); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CDFEEF0(relative to base address)
	};


	// Class AIModule.AISense
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UAISense : public UObject	
	{
	public:
		EAISenseNotifyType NotifyType; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		bool bWantsNewPawnNotification : 1; // 0x2C:0(0x1)
		bool bAutoRegisterAllPawnsAsSources : 1; // 0x2C:1(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		UAIPerceptionSystem* PerceptionSystemInstance; // 0x30(0x8)
		unsigned char UnknownData02_7[0x40]; // 0x38(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISense");
			return ret;
		}
	};


	// Class AIModule.AISenseConfig_Damage
	// Inherited from UAISenseConfig -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UAISenseConfig_Damage : public UAISenseConfig	
	{
	public:
		UClass* Implementation; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISenseConfig_Damage");
			return ret;
		}
	};


	// Class AIModule.AISense_Blueprint
	// Inherited from UAISense -> UObject
	// Size: 0x28 (0xA0 - 0x78)
	class UAISense_Blueprint : public UAISense	
	{
	public:
		UClass* ListenerDataType; // 0x78(0x8)
		TArray<UAIPerceptionComponent*> ListenerContainer; // 0x80(0x10)
		TArray<UAISenseEvent*> UnprocessedEvents; // 0x90(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISense_Blueprint");
			return ret;
		}

		float OnUpdate(TArray<UAISenseEvent*>& EventsToProcess); // Flags: RequiredAPI|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnNewPawn(APawn* NewPawn); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetAllListenerComponents(TArray<UAIPerceptionComponent*>& ListenerComponents); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFE97C(relative to base address)
		void GetAllListenerActors(TArray<AActor*>& ListenerActors); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFE8E0(relative to base address)
	};


	// Class AIModule.AISense_Damage
	// Inherited from UAISense -> UObject
	// Size: 0x10 (0x88 - 0x78)
	class UAISense_Damage : public UAISense	
	{
	public:
		TArray<FAIDamageEvent> RegisteredEvents; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISense_Damage");
			return ret;
		}

		void ReportDamageEvent(UObject* WorldContextObject, AActor* DamagedActor, AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation, FName Tag); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CDFFA80(relative to base address)
	};


	// Class AIModule.AISense_Hearing
	// Inherited from UAISense -> UObject
	// Size: 0x68 (0xE0 - 0x78)
	class UAISense_Hearing : public UAISense	
	{
	public:
		TArray<FAINoiseEvent> NoiseEvents; // 0x78(0x10)
		float SpeedOfSoundSq; // 0x88(0x4)
		unsigned char UnknownData00_7[0x54]; // 0x8C(0x54) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISense_Hearing");
			return ret;
		}

		void ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CDFFECC(relative to base address)
	};


	// Class AIModule.AISense_Prediction
	// Inherited from UAISense -> UObject
	// Size: 0x10 (0x88 - 0x78)
	class UAISense_Prediction : public UAISense	
	{
	public:
		TArray<FAIPredictionEvent> RegisteredEvents; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISense_Prediction");
			return ret;
		}

		void RequestPawnPredictionEvent(APawn* Requestor, AActor* PredictedActor, float PredictionTime); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CE006DC(relative to base address)
		void RequestControllerPredictionEvent(AAIController* Requestor, AActor* PredictedActor, float PredictionTime); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CE005E4(relative to base address)
	};


	// Class AIModule.AISense_Sight
	// Inherited from UAISense -> UObject
	// Size: 0x130 (0x1A8 - 0x78)
	class UAISense_Sight : public UAISense	
	{
	public:
		unsigned char UnknownData00_3[0xD8]; // 0x78(0xD8) UNKNOWN PROPERTY
		int32_t MaxTracesPerTick; // 0x150(0x4)
		int32_t MaxAsyncTracesPerTick; // 0x154(0x4)
		int32_t MinQueriesPerTimeSliceCheck; // 0x158(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x15C(0x4) UNKNOWN PROPERTY
		double MaxTimeSlicePerTick; // 0x160(0x8)
		float HighImportanceQueryDistanceThreshold; // 0x168(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x16C(0x4) UNKNOWN PROPERTY
		float MaxQueryImportance; // 0x170(0x4)
		float SightLimitQueryImportance; // 0x174(0x4)
		float PendingQueriesBudgetReductionRatio; // 0x178(0x4)
		bool bUseAsynchronousTraceForDefaultSightQueries; // 0x17C(0x1)
		unsigned char UnknownData03_7[0x2B]; // 0x17D(0x2B) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISense_Sight");
			return ret;
		}
	};


	// Class AIModule.AISense_Team
	// Inherited from UAISense -> UObject
	// Size: 0x10 (0x88 - 0x78)
	class UAISense_Team : public UAISense	
	{
	public:
		TArray<FAITeamStimulusEvent> RegisteredEvents; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISense_Team");
			return ret;
		}
	};


	// Class AIModule.AISense_Touch
	// Inherited from UAISense -> UObject
	// Size: 0x60 (0xD8 - 0x78)
	class UAISense_Touch : public UAISense	
	{
	public:
		TArray<FAITouchEvent> RegisteredEvents; // 0x78(0x10)
		unsigned char UnknownData00_7[0x50]; // 0x88(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISense_Touch");
			return ret;
		}

		void ReportTouchEvent(UObject* WorldContextObject, AActor* TouchReceiver, AActor* OtherActor, FVector Location); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CE00420(relative to base address)
	};


	// Class AIModule.AISightTargetInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAISightTargetInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AISightTargetInterface");
			return ret;
		}
	};


	// Class AIModule.PawnSensingComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UPawnSensingComponent : public UActorComponent	
	{
	public:
		float HearingThreshold; // 0xA0(0x4)
		float LOSHearingThreshold; // 0xA4(0x4)
		float SightRadius; // 0xA8(0x4)
		float SensingInterval; // 0xAC(0x4)
		float HearingMaxSoundAge; // 0xB0(0x4)
		bool bEnableSensingUpdates : 1; // 0xB4:0(0x1)
		bool bOnlySensePlayers : 1; // 0xB4:1(0x1)
		bool bSeePawns : 1; // 0xB4:2(0x1)
		bool bHearNoises : 1; // 0xB4:3(0x1)
		unsigned char UnknownData00_5[0xB]; // 0xB5(0xB) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSeePawn; // 0xC0(0x10)
		FMulticastInlineDelegate OnHearNoise; // 0xD0(0x10)
		float PeripheralVisionAngle; // 0xE0(0x4)
		float PeripheralVisionCosine; // 0xE4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.PawnSensingComponent");
			return ret;
		}

		void SetSensingUpdatesEnabled(bool bEnabled); // Flags: RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE00C8C(relative to base address)
		void SetSensingInterval(float NewSensingInterval); // Flags: RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE00C08(relative to base address)
		void SetPeripheralVisionAngle(float NewPeripheralVisionAngle); // Flags: RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CE00A98(relative to base address)
		void SeePawnDelegate__DelegateSignature(APawn* Pawn); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HearNoiseDelegate__DelegateSignature(APawn* Instigator, FVector& Location, float Volume); // Flags: MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetPeripheralVisionCosine(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFEED8(relative to base address)
		float GetPeripheralVisionAngle(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFEEC0(relative to base address)
	};


	// Class AIModule.AITask
	// Inherited from UGameplayTask -> UObject
	// Size: 0x8 (0x68 - 0x60)
	class UAITask : public UGameplayTask	
	{
	public:
		AAIController* OwnerController; // 0x60(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AITask");
			return ret;
		}
	};


	// Class AIModule.AITask_LockLogic
	// Inherited from UAITask -> UGameplayTask -> UObject
	// Size: 0x0 (0x68 - 0x68)
	class UAITask_LockLogic : public UAITask	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AITask_LockLogic");
			return ret;
		}
	};


	// Class AIModule.AITask_MoveTo
	// Inherited from UAITask -> UGameplayTask -> UObject
	// Size: 0xB0 (0x118 - 0x68)
	class UAITask_MoveTo : public UAITask	
	{
	public:
		FMulticastInlineDelegate OnRequestFailed; // 0x68(0x10)
		FMulticastInlineDelegate OnMoveFinished; // 0x78(0x10)
		FAIMoveRequest MoveRequest; // 0x88(0x50)
		unsigned char UnknownData00_7[0x40]; // 0xD8(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AITask_MoveTo");
			return ret;
		}

		UAITask_MoveTo AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuousGoalTracking, TEnumAsByte<EAIOptionFlag> ProjectGoalOnNavigation, TEnumAsByte<EAIOptionFlag> RequireNavigableEndLocation); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74CDFCDCC(relative to base address)
	};


	// Class AIModule.AITask_RunEQS
	// Inherited from UAITask -> UGameplayTask -> UObject
	// Size: 0x78 (0xE0 - 0x68)
	class UAITask_RunEQS : public UAITask	
	{
	public:
		unsigned char UnknownData00_1[0x78]; // 0x68(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.AITask_RunEQS");
			return ret;
		}

		UAITask_RunEQS RunEQS(AAIController* Controller, UEnvQuery* QueryTemplate); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CE008C0(relative to base address)
	};


	// Class AIModule.VisualLoggerExtension
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVisualLoggerExtension : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIModule.VisualLoggerExtension");
			return ret;
		}
	};

}
