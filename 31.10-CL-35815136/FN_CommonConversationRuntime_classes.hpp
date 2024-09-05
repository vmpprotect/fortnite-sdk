#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CommonConversationRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CommonConversationRuntime.ConversationNode
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UConversationNode : public UObject	
	{
	public:
		UObject* EvalWorldContextObj; // 0x28(0x8)
		FString NodeName; // 0x30(0x10)
		FGuid Compiled_NodeGUID; // 0x40(0x10)
		UConversationNode* ParentNode; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationNode");
			return ret;
		}

		FLinearColor GetDebugParticipantColor(FGameplayTag ParticipantID); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC67B00(relative to base address)
	};


	// Class CommonConversationRuntime.ConversationSubNode
	// Inherited from UConversationNode -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UConversationSubNode : public UConversationNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationSubNode");
			return ret;
		}
	};


	// Class CommonConversationRuntime.ConversationChoiceNode
	// Inherited from UConversationSubNode -> UConversationNode -> UObject
	// Size: 0x38 (0x90 - 0x58)
	class UConversationChoiceNode : public UConversationSubNode	
	{
	public:
		FText DefaultChoiceDisplayText; // 0x58(0x10)
		FGameplayTagContainer ChoiceTags; // 0x68(0x20)
		unsigned char UnknownData00_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationChoiceNode");
			return ret;
		}

		void FillChoice(FConversationContext& Context, FClientConversationOptionEntry& ChoiceEntry); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74DC67358(relative to base address)
	};


	// Class CommonConversationRuntime.ConversationContextHelpers
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UConversationContextHelpers : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationContextHelpers");
			return ret;
		}

		FConversationTaskResult ReturnToLastClientChoice(FConversationContext& Context); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC66548(relative to base address)
		FConversationTaskResult ReturnToCurrentClientChoice(FConversationContext& Context); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC66548(relative to base address)
		FConversationTaskResult ReturnToConversationStart(FConversationContext& Context); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC66548(relative to base address)
		FConversationTaskResult PauseConversationAndSendClientChoices(FConversationContext& Context, FClientConversationMessage& Message); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC68220(relative to base address)
		void MakeConversationParticipant(FConversationContext& Context, AActor* ParticipantActor, FGameplayTag ParticipantTag); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC67F80(relative to base address)
		FConversationNodeHandle GetCurrentConversationNodeHandle(FConversationContext& Context); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DC67A28(relative to base address)
		AActor GetConversationParticipantActor(FConversationContext& Context, FGameplayTag ParticipantTag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC6789C(relative to base address)
		UConversationParticipantComponent GetConversationParticipant(FConversationContext& Context, FGameplayTag ParticipantTag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC67710(relative to base address)
		UConversationInstance GetConversationInstance(FConversationContext& Context); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DC67660(relative to base address)
		UConversationParticipantComponent FindConversationComponent(AActor* Actor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DC67488(relative to base address)
		bool CanConversationContinue(FConversationTaskResult& ConversationTasResult); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC66744(relative to base address)
		FConversationTaskResult AdvanceConversationWithChoice(FConversationContext& Context, FAdvanceConversationRequest& Choice); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC66614(relative to base address)
		FConversationTaskResult AdvanceConversation(FConversationContext& Context); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC66548(relative to base address)
		FConversationTaskResult AbortConversation(FConversationContext& Context); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC66548(relative to base address)
	};


	// Class CommonConversationRuntime.ConversationDatabase
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0xB8 (0xE8 - 0x30)
	class UConversationDatabase : public UPrimaryDataAsset	
	{
	public:
		int32_t CompilerVersion; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TMap<FGuid, UConversationNode*> ReachableNodeMap; // 0x38(0x50)
		TArray<FConversationEntryList> EntryTags; // 0x88(0x10)
		FGameplayTagContainer ExitTags; // 0x98(0x20)
		TArray<FGuid> InternalNodeIds; // 0xB8(0x10)
		TArray<FGuid> LinkedToNodeIds; // 0xC8(0x10)
		TArray<FCommonDialogueBankParticipant> Speakers; // 0xD8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationDatabase");
			return ret;
		}
	};


	// Class CommonConversationRuntime.ConversationNodeWithLinks
	// Inherited from UConversationNode -> UObject
	// Size: 0x10 (0x68 - 0x58)
	class UConversationNodeWithLinks : public UConversationNode	
	{
	public:
		TArray<FGuid> OutputConnections; // 0x58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationNodeWithLinks");
			return ret;
		}
	};


	// Class CommonConversationRuntime.ConversationEntryPointNode
	// Inherited from UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x8 (0x70 - 0x68)
	class UConversationEntryPointNode : public UConversationNodeWithLinks	
	{
	public:
		FGameplayTag EntryTag; // 0x68(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationEntryPointNode");
			return ret;
		}
	};


	// Class CommonConversationRuntime.ConversationInstance
	// Inherited from UObject
	// Size: 0x178 (0x1A0 - 0x28)
	class UConversationInstance : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x28(0x28) UNKNOWN PROPERTY
		FConversationParticipants Participants; // 0x50(0x10)
		UConversationDatabase* ActiveConversationGraph; // 0x60(0x8)
		unsigned char UnknownData01_7[0x138]; // 0x68(0x138) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationInstance");
			return ret;
		}
	};


	// Class CommonConversationRuntime.ConversationLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UConversationLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationLibrary");
			return ret;
		}

		UConversationInstance StartConversationFromGraph(FGameplayTag& ConversationEntryTag, AActor* Instigator, FGameplayTag& InstigatorTag, AActor* Target, FGameplayTag& TargetTag, UConversationDatabase* Graph); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC68810(relative to base address)
		UConversationInstance StartConversation(FGameplayTag& ConversationEntryTag, AActor* Instigator, FGameplayTag& InstigatorTag, AActor* Target, FGameplayTag& TargetTag, UClass* ConversationInstanceClass); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC685E0(relative to base address)
	};


	// Class CommonConversationRuntime.ConversationTaskNode
	// Inherited from UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x18 (0x80 - 0x68)
	class UConversationTaskNode : public UConversationNodeWithLinks	
	{
	public:
		TArray<UConversationSubNode*> SubNodes; // 0x68(0x10)
		bool bIgnoreRequirementsWhileAdvancingConversations; // 0x78(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationTaskNode");
			return ret;
		}

		EConversationRequirementResult IsRequirementSatisfied(FConversationContext& Context); // Flags: BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74DC67EBC(relative to base address)
		bool GetNodeBodyColor(FLinearColor& BodyColor); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const, Memory Exec: 0x7FF74DC67C28(relative to base address)
		void GatherStaticExtraData(FConversationContext& Context, TArray<FConversationNodeParameterPair>& InOutExtraData); // Flags: BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74DC67514(relative to base address)
		FConversationTaskResult ExecuteTaskNode(FConversationContext& Context); // Flags: BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74DC6726C(relative to base address)
		void ExecuteClientEffects(FConversationContext& Context); // Flags: BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74DC671B4(relative to base address)
	};


	// Class CommonConversationRuntime.ConversationLinkNode
	// Inherited from UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x8 (0x88 - 0x80)
	class UConversationLinkNode : public UConversationTaskNode	
	{
	public:
		FGameplayTag RemoteEntryTag; // 0x80(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x84(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationLinkNode");
			return ret;
		}
	};


	// Class CommonConversationRuntime.ConversationParticipantComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xF0 (0x190 - 0xA0)
	class UConversationParticipantComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x60]; // 0xA0(0x60) UNKNOWN PROPERTY
		int32_t ConversationsActive; // 0x100(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		UConversationInstance* Auth_CurrentConversation; // 0x108(0x8)
		TArray<UConversationInstance*> Auth_Conversations; // 0x110(0x10)
		FClientConversationMessagePayload LastMessage; // 0x120(0x68)
		unsigned char UnknownData02_7[0x8]; // 0x188(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationParticipantComponent");
			return ret;
		}

		void ServerAdvanceConversation(FAdvanceConversationRequest InChoicePicked); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF74DC683F0(relative to base address)
		void RequestServerAdvanceConversation(FAdvanceConversationRequest& InChoicePicked); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC68340(relative to base address)
		void OnRep_ConversationsActive(int32_t OldConversationsActive); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DC681A0(relative to base address)
		bool IsInActiveConversation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC67DD8(relative to base address)
		FText GetParticipantDisplayName(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC67D98(relative to base address)
		AActor GetParticipantActor(FGameplayTag& ParticipantTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC67D00(relative to base address)
		void ClientUpdateParticipants(FConversationParticipants InParticipants); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74DC67090(relative to base address)
		void ClientUpdateConversationTaskChoiceData(FConversationNodeHandle Handle, FClientConversationOptionEntry OptionEntry); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74DC66E00(relative to base address)
		void ClientUpdateConversations(int32_t InConversationsActive); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74DC6700C(relative to base address)
		void ClientUpdateConversation(FClientConversationMessagePayload Message); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74DC66CD4(relative to base address)
		void ClientStartConversation(FConversationParticipants InParticipants); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74DC66BB0(relative to base address)
		void ClientExitConversation(FConversationParticipants InParticipants); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74DC66A8C(relative to base address)
		void ClientExecuteTaskAndSideEffects(FConversationNodeHandle Handle, UConversationDatabase* Graph); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74DC668A0(relative to base address)
	};


	// Class CommonConversationRuntime.ConversationRegistry
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x1C8 (0x1F8 - 0x30)
	class UConversationRegistry : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FNetSerializeScriptStructCache_ConvVersion ConversationChoiceDataStructCache; // 0x38(0x60)
		unsigned char UnknownData01_7[0x160]; // 0x98(0x160) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationRegistry");
			return ret;
		}
	};


	// Class CommonConversationRuntime.ConversationRequirementNode
	// Inherited from UConversationSubNode -> UConversationNode -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UConversationRequirementNode : public UConversationSubNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationRequirementNode");
			return ret;
		}

		EConversationRequirementResult IsRequirementSatisfied(FConversationContext& Context); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74DC67DF8(relative to base address)
	};


	// Class CommonConversationRuntime.ConversationSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UConversationSettings : public UDeveloperSettings	
	{
	public:
		TWeakObjectPtr<UClass*> ConversationInstanceClass; // 0x30(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationSettings");
			return ret;
		}
	};


	// Class CommonConversationRuntime.ConversationSideEffectNode
	// Inherited from UConversationSubNode -> UConversationNode -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UConversationSideEffectNode : public UConversationSubNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonConversationRuntime.ConversationSideEffectNode");
			return ret;
		}

		void ServerCauseSideEffect(FConversationContext& Context); // Flags: BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74DC68528(relative to base address)
		void ClientCauseSideEffect(FConversationContext& Context); // Flags: BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74DC667E8(relative to base address)
	};

}
