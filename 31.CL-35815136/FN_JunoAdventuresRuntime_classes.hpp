#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoAdventuresRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoAdventuresRuntime.JunoAdventuresAnalytics
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoAdventuresAnalytics : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoAdventuresAnalytics");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoContextualMessageConfigCollection
	// Inherited from UDataAsset -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UJunoContextualMessageConfigCollection : public UDataAsset	
	{
	public:
		TArray<FJunoSpecializedContextualMessageConfig> SpecializedConfigs; // 0x30(0x10)
		FJunoContextualMessageConfig GeneralConfig; // 0x40(0x10)
		FDataTableRowHandle GeneralConfigTableRow; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoContextualMessageConfigCollection");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoControllerComponent_ConversationHistory
	// Inherited from UFortControllerComponent_ConversationHistory -> UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x298 - 0x1F8)
	class UJunoControllerComponent_ConversationHistory : public UFortControllerComponent_ConversationHistory	
	{
	public:
		unsigned char UnknownData00_1[0xA0]; // 0x1F8(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoControllerComponent_ConversationHistory");
			return ret;
		}

		void Client_SetCachedContextualMessageResult(FJunoContextualMessageQueryResult Result); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF751C82F8C(relative to base address)
	};


	// Class JunoAdventuresRuntime.JunoControllerComponent_SocialSimAI
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UJunoControllerComponent_SocialSimAI : public UFortControllerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoControllerComponent_SocialSimAI");
			return ret;
		}

		void Server_RequestNPCHardRemoval(FGameplayTag UniqueAIIdentifier); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF751C83D08(relative to base address)
		void Server_RequestCreatureHardRemoval(FGameplayTag UniqueAIIdentifier); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF751C83BF4(relative to base address)
	};


	// Class JunoAdventuresRuntime.JunoControllerRequirement
	// Inherited from UFortControllerRequirement -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UJunoControllerRequirement : public UFortControllerRequirement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoControllerRequirement");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoControllerRequirement_CampResidentsHaveTag
	// Inherited from UJunoControllerRequirement -> UFortControllerRequirement -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UJunoControllerRequirement_CampResidentsHaveTag : public UJunoControllerRequirement	
	{
	public:
		FGameplayTag RoleTagToValidate; // 0x30(0x4)
		FGameplayTag UniqueIdentifierTagToValidate; // 0x34(0x4)
		bool bIncludeSpeakingNpcInQueries; // 0x38(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoControllerRequirement_CampResidentsHaveTag");
			return ret;
		}

		bool ValidateUniqueResidentTag(FGameplayTag& OtherResidentIdentifier); // Flags: Final|Native|Private|HasOutParms|Const, Memory Exec: 0x7FF751C83F54(relative to base address)
		bool ValidateRoleTag(FGameplayTag& OtherResidentIdentifier, UPlayspaceComponent_JunoAIPersistence* RootAIPersistenceComp); // Flags: Final|Native|Private|HasOutParms|Const, Memory Exec: 0x7FF751C83E1C(relative to base address)
	};


	// Class JunoAdventuresRuntime.JunoControllerRequirement_HasCompletedQuestObjective
	// Inherited from UFortControllerRequirement -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UJunoControllerRequirement_HasCompletedQuestObjective : public UFortControllerRequirement	
	{
	public:
		FSoftObjectPath QuestDefinition; // 0x30(0x18)
		FName ObjectiveBackendName; // 0x48(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoControllerRequirement_HasCompletedQuestObjective");
			return ret;
		}

		TArray Editor_GetValidObjectives(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF74C642A74(relative to base address)
	};


	// Class JunoAdventuresRuntime.JunoControllerRequirement_HasEntryTag
	// Inherited from UFortControllerRequirement -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UJunoControllerRequirement_HasEntryTag : public UFortControllerRequirement	
	{
	public:
		FGameplayTag QueryTag; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoControllerRequirement_HasEntryTag");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoControllerRequirement_IsFirstConversationWithNPC
	// Inherited from UJunoControllerRequirement -> UFortControllerRequirement -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UJunoControllerRequirement_IsFirstConversationWithNPC : public UJunoControllerRequirement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoControllerRequirement_IsFirstConversationWithNPC");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoControllerRequirement_IsFollowingAnotherPlayer
	// Inherited from UJunoControllerRequirement -> UFortControllerRequirement -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UJunoControllerRequirement_IsFollowingAnotherPlayer : public UJunoControllerRequirement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoControllerRequirement_IsFollowingAnotherPlayer");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoControllerRequirement_IsGeneratingResourcesAndEmpty
	// Inherited from UJunoControllerRequirement -> UFortControllerRequirement -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UJunoControllerRequirement_IsGeneratingResourcesAndEmpty : public UJunoControllerRequirement	
	{
	public:
		bool bRequiresGeneratedPercentageWhenNoLootGenerated; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoControllerRequirement_IsGeneratingResourcesAndEmpty");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoControllerRequirement_MerchantHasStock
	// Inherited from UJunoControllerRequirement -> UFortControllerRequirement -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UJunoControllerRequirement_MerchantHasStock : public UJunoControllerRequirement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoControllerRequirement_MerchantHasStock");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationRequirementDatabase
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x100 - 0xF8)
	class UJunoConversationRequirementDatabase : public UFortPlayspaceComponent	
	{
	public:
		UJunoConversationRequirementMappings* ConversationRequirementMappingData; // 0xF8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationRequirementDatabase");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationRequirementMappings
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UJunoConversationRequirementMappings : public UDataAsset	
	{
	public:
		TMap<FGameplayTag, UFortControllerRequirement*> ConversationRequirementMappings; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationRequirementMappings");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationRequirement_NearestCampWorldConditionSchema
	// Inherited from UWorldConditionSchema -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UJunoConversationRequirement_NearestCampWorldConditionSchema : public UWorldConditionSchema	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationRequirement_NearestCampWorldConditionSchema");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationRequirement_NearestCampWorldCondition
	// Inherited from UConversationRequirementNode -> UConversationSubNode -> UConversationNode -> UObject
	// Size: 0x48 (0xA0 - 0x58)
	class UJunoConversationRequirement_NearestCampWorldCondition : public UConversationRequirementNode	
	{
	public:
		int32_t CampSlot; // 0x58(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FScalableFloat MaxDistanceFromCamp; // 0x60(0x28)
		FWorldConditionQueryDefinition Conditions; // 0x88(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationRequirement_NearestCampWorldCondition");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_CampFollowerAssignment
	// Inherited from UFortConversationTaskNode_Service -> UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x8 (0x198 - 0x190)
	class UJunoConversationTaskNode_CampFollowerAssignment : public UFortConversationTaskNode_Service	
	{
	public:
		bool bEnableFollower; // 0x190(0x1)
		bool bCampRecruitment; // 0x191(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x192(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_CampFollowerAssignment");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_CampJobAssignment
	// Inherited from UFortConversationTaskNode_Service -> UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x8 (0x198 - 0x190)
	class UJunoConversationTaskNode_CampJobAssignment : public UFortConversationTaskNode_Service	
	{
	public:
		FGameplayTag JobTag; // 0x190(0x4)
		bool bRemoveJob; // 0x194(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x195(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_CampJobAssignment");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_CampRecruitment
	// Inherited from UFortConversationTaskNode_Service -> UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x0 (0x190 - 0x190)
	class UJunoConversationTaskNode_CampRecruitment : public UFortConversationTaskNode_Service	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_CampRecruitment");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_GetResource
	// Inherited from UFortConversationTaskNode_Service -> UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x28 (0x1B8 - 0x190)
	class UJunoConversationTaskNode_GetResource : public UFortConversationTaskNode_Service	
	{
	public:
		int32_t ResourceSlot; // 0x190(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x194(0x4) UNKNOWN PROPERTY
		FText GetTextFormat; // 0x198(0x10)
		FText FinishedTextFormat; // 0x1A8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_GetResource");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_GiftNPC
	// Inherited from UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x28 (0x198 - 0x170)
	class UJunoConversationTaskNode_GiftNPC : public UFortConversationTaskNode	
	{
	public:
		FText GiftTextFormat; // 0x170(0x10)
		int32_t MaxChoiceNodesToGenerate; // 0x180(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x184(0x4) UNKNOWN PROPERTY
		TArray<FGameplayTag> InventoryGroupTypesToPickItemsFrom; // 0x188(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_GiftNPC");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_GrantAwesomePoints
	// Inherited from UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x8 (0x178 - 0x170)
	class UJunoConversationTaskNode_GrantAwesomePoints : public UFortConversationTaskNode	
	{
	public:
		FGameplayTag AwesomeInteractionTag; // 0x170(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x174(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_GrantAwesomePoints");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_GrantDirectReward
	// Inherited from UFortConversationTaskNode_Service -> UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x10 (0x1A0 - 0x190)
	class UJunoConversationTaskNode_GrantDirectReward : public UFortConversationTaskNode_Service	
	{
	public:
		TArray<FDataTableRowHandle> RewardsToGive; // 0x190(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_GrantDirectReward");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_GrantNPCCampReward
	// Inherited from UFortConversationTaskNode_Service -> UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x0 (0x190 - 0x190)
	class UJunoConversationTaskNode_GrantNPCCampReward : public UFortConversationTaskNode_Service	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_GrantNPCCampReward");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_MarkFirstConversationComplete
	// Inherited from UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x0 (0x170 - 0x170)
	class UJunoConversationTaskNode_MarkFirstConversationComplete : public UFortConversationTaskNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_MarkFirstConversationComplete");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_NukeVillager
	// Inherited from UFortConversationTaskNode_Service -> UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x0 (0x190 - 0x190)
	class UJunoConversationTaskNode_NukeVillager : public UFortConversationTaskNode_Service	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_NukeVillager");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_RemoteCampRecruitment
	// Inherited from UFortConversationTaskNode_Service -> UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x40 (0x1D0 - 0x190)
	class UJunoConversationTaskNode_RemoteCampRecruitment : public UFortConversationTaskNode_Service	
	{
	public:
		int32_t CampSlot; // 0x190(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x194(0x4) UNKNOWN PROPERTY
		FText JoinCampTextFormat; // 0x198(0x10)
		FScalableFloat MaxDistanceFromCamp; // 0x1A8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_RemoteCampRecruitment");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_Speech
	// Inherited from UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x88 (0x1F8 - 0x170)
	class UJunoConversationTaskNode_Speech : public UFortConversationTaskNode	
	{
	public:
		FString MetaIdentifier_Animations; // 0x170(0x10)
		FGameplayTag SpeakerTag; // 0x180(0x4)
		FGameplayTag ListenerTag; // 0x184(0x4)
		FGameplayTag DefaultMoodReactionTag; // 0x188(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x18C(0x4) UNKNOWN PROPERTY
		FText StyledParticipantNameFormat; // 0x190(0x10)
		bool bUseInlineConfig; // 0x1A0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1A1(0x7) UNKNOWN PROPERTY
		UJunoContextualMessageConfigCollection* ExternalContextualMessageCollection; // 0x1A8(0x8)
		TArray<FJunoSpecializedContextualMessageConfig> SpecializedConfigs; // 0x1B0(0x10)
		FJunoContextualMessageConfig GeneralConfig; // 0x1C0(0x10)
		FDataTableRowHandle GeneralConfigTableRow; // 0x1D0(0x10)
		unsigned char UnknownData02_7[0x18]; // 0x1E0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_Speech");
			return ret;
		}

		void PlayClientVoiceLine(FConversationContext& Context, FJunoContextualMessageQueryResult& MessageParams); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF751C836E0(relative to base address)
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_TagCurrentConversation
	// Inherited from UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x20 (0x190 - 0x170)
	class UJunoConversationTaskNode_TagCurrentConversation : public UFortConversationTaskNode	
	{
	public:
		FGameplayTagContainer TagsToApply; // 0x170(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_TagCurrentConversation");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_TradeWithMerchant
	// Inherited from UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x48 (0x1B8 - 0x170)
	class UJunoConversationTaskNode_TradeWithMerchant : public UFortConversationTaskNode	
	{
	public:
		FText TradeTextFormat_Single; // 0x170(0x10)
		FText TradeTextFormat_Plural; // 0x180(0x10)
		FText NotEnoughForTradeTextFormat_Single; // 0x190(0x10)
		FText NotEnoughForTradeTextFormat_Plural; // 0x1A0(0x10)
		int32_t MaxChoiceNodesToGenerate; // 0x1B0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1B4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_TradeWithMerchant");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoNPCConversationParticipantComponent
	// Inherited from UFortNPCConversationParticipantComponent -> UFortNonPlayerConversationParticipantComponent -> UConversationParticipantComponent -> UActorComponent -> UObject
	// Size: 0x90 (0x708 - 0x678)
	class UJunoNPCConversationParticipantComponent : public UFortNPCConversationParticipantComponent	
	{
	public:
		FMulticastInlineDelegate OnJunoConversationParticipantIconChangedDelegate; // 0x678(0x10)
		TWeakObjectPtr<UTexture2D*> ParticipantIconSmall; // 0x688(0x20)
		unsigned char UnknownData00_7[0x60]; // 0x6A8(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoNPCConversationParticipantComponent");
			return ret;
		}

		void OnRep_ParticipantIconSmall(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751C8366C(relative to base address)
	};


	// Class JunoAdventuresRuntime.JunoChangeInventoryHelper
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UJunoChangeInventoryHelper : public UObject	
	{
	public:
		TWeakObjectPtr<UJunoInventoryComponent*> InventoryComponent; // 0x28(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoChangeInventoryHelper");
			return ret;
		}

		void HandleInventoryChangedEvent(FJunoItemSlot& ItemSlot, EJunoItemChangeType ChangeType); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF751C83324(relative to base address)
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_CompleteQuestObjective
	// Inherited from UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x28 (0x198 - 0x170)
	class UJunoConversationTaskNode_CompleteQuestObjective : public UFortConversationTaskNode	
	{
	public:
		TWeakObjectPtr<UFortQuestItemDefinition_Athena*> QuestToProgress; // 0x170(0x20)
		FName ObjectiveBackendName; // 0x190(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x194(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_CompleteQuestObjective");
			return ret;
		}

		TArray Editor_GetValidObjectives(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF74C642A74(relative to base address)
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_GrantQuest
	// Inherited from UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x20 (0x190 - 0x170)
	class UJunoConversationTaskNode_GrantQuest : public UFortConversationTaskNode	
	{
	public:
		TWeakObjectPtr<UFortQuestItemDefinition_Athena*> QuestToGrant; // 0x170(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_GrantQuest");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoConversationTaskNode_TurnInQuest
	// Inherited from UFortConversationTaskNode -> UConversationTaskNode -> UConversationNodeWithLinks -> UConversationNode -> UObject
	// Size: 0x20 (0x190 - 0x170)
	class UJunoConversationTaskNode_TurnInQuest : public UFortConversationTaskNode	
	{
	public:
		TWeakObjectPtr<UFortQuestItemDefinition_Athena*> QuestToTurnIn; // 0x170(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoConversationTaskNode_TurnInQuest");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoControllerRequirement_HasCompletedNumQuestObjectives
	// Inherited from UFortControllerRequirement -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UJunoControllerRequirement_HasCompletedNumQuestObjectives : public UFortControllerRequirement	
	{
	public:
		FSoftObjectPath QuestDefinition; // 0x30(0x18)
		FThresholdTestConfig RequiredCount; // 0x48(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoControllerRequirement_HasCompletedNumQuestObjectives");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoControllerRequirement_IsQuestActive
	// Inherited from UFortControllerRequirement -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UJunoControllerRequirement_IsQuestActive : public UFortControllerRequirement	
	{
	public:
		FSoftObjectPath QuestDefinition; // 0x30(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoControllerRequirement_IsQuestActive");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoTokenReceiver
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoTokenReceiver : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoTokenReceiver");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoQuestGiverComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UJunoQuestGiverComponent : public UGameFrameworkComponent	
	{
	public:
		FString GrantableQuestID; // 0xA0(0x10)
		FGameplayTagContainer GrantableQuestTags; // 0xB0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoQuestGiverComponent");
			return ret;
		}

		void RollGrantableQuestID(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C838A0(relative to base address)
		void HandleOnJunoQuestComplete(TScriptInterface<Class>& QuestInstance); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751C834D4(relative to base address)
		FString GetGrantableQuestID(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AC0FCC(relative to base address)
		void BindToQuestManagerDelegates(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C82F78(relative to base address)
	};


	// Class JunoAdventuresRuntime.JunoQuestSpawnPointComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoQuestSpawnPointComponent : public UGameFrameworkComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoQuestSpawnPointComponent");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoTokenHandlerAIComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UJunoTokenHandlerAIComponent : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoTokenHandlerAIComponent");
			return ret;
		}

		void ReceiveToken(FGameplayTag& JunoToken); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C83810(relative to base address)
		FGameplayTagContainer GetSavedTokens(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C832F4(relative to base address)
	};


	// Class JunoAdventuresRuntime.JunoQuestPoolDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UJunoQuestPoolDataAsset : public UDataAsset	
	{
	public:
		TArray<FJunoQuestPoolDataAssetEntry> QuestEntries; // 0x30(0x10)
		FGameplayTag QuestPoolTag; // 0x40(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoQuestPoolDataAsset");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoQuestDatabaseComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x1A8 - 0xF8)
	class UJunoQuestDatabaseComponent : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_3[0xA0]; // 0xF8(0xA0) UNKNOWN PROPERTY
		TArray<UJunoQuestPoolDataAsset*> QuestPoolAssets; // 0x198(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoQuestDatabaseComponent");
			return ret;
		}

		EJunoQuestState GetJunoQuestState(FString QuestID); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C831B0(relative to base address)
	};


	// Class JunoAdventuresRuntime.JunoQuestManagerComponent
	// Inherited from UFortPlayspaceComponent_Quests -> UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x60 (0x4B0 - 0x450)
	class UJunoQuestManagerComponent : public UFortPlayspaceComponent_Quests	
	{
	public:
		unsigned char UnknownData00_1[0x60]; // 0x450(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoQuestManagerComponent");
			return ret;
		}

		void SendQuestStatEvent(EFortQuestObjectiveStatEvent Type, FGameplayTagContainer SourceTags, FGameplayTagContainer TargetTags, int32_t Count); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C838B4(relative to base address)
		AActor GetQuestGiverForQuestID(FString QuestID); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C8324C(relative to base address)
		void ActivateQuest(UFortQuestItemDefinition_Athena* QuestDefinition, AActor* QuestGiver); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C82EB4(relative to base address)
	};


	// Class JunoAdventuresRuntime.JunoEncounterManagerComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xF8 - 0xF8)
	class UJunoEncounterManagerComponent : public UFortPlayspaceComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoEncounterManagerComponent");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoPOIQuestComponent
	// Inherited from UFortPlayspaceComponent_Quests -> UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x450 - 0x450)
	class UJunoPOIQuestComponent : public UFortPlayspaceComponent_Quests	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoPOIQuestComponent");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoActionsDB
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UJunoActionsDB : public UObject	
	{
	public:
		TMap<FGameplayTag, FMappedJunoActions> JunoTokenToJunoActions; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoActionsDB");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.PlayspaceComponent_JunoActionsDB
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x108 - 0xF8)
	class UPlayspaceComponent_JunoActionsDB : public UFortPlayspaceComponent	
	{
	public:
		TArray<UClass*> JunoActionsDBs; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.PlayspaceComponent_JunoActionsDB");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.FortQuestDefinitionComponent_Juno
	// Inherited from UFortQuestDefinitionComponent -> UObject
	// Size: 0xA8 (0x120 - 0x78)
	class UFortQuestDefinitionComponent_Juno : public UFortQuestDefinitionComponent	
	{
	public:
		FJunoQuestData JunoQuestData; // 0x78(0xA8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.FortQuestDefinitionComponent_Juno");
			return ret;
		}

		TArray Editor_GetValidObjectiveNames(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF74C642A74(relative to base address)
	};


	// Class JunoAdventuresRuntime.FortQuestDefinitionComponent_JunoEncounter
	// Inherited from UFortQuestDefinitionComponent_Juno -> UFortQuestDefinitionComponent -> UObject
	// Size: 0x0 (0x120 - 0x120)
	class UFortQuestDefinitionComponent_JunoEncounter : public UFortQuestDefinitionComponent_Juno	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.FortQuestDefinitionComponent_JunoEncounter");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.FortQuestItemComponent_Juno
	// Inherited from UFortQuestItemComponent -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortQuestItemComponent_Juno : public UFortQuestItemComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.FortQuestItemComponent_Juno");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.FortQuestItemComponent_JunoEncounter
	// Inherited from UFortQuestItemComponent_Juno -> UFortQuestItemComponent -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortQuestItemComponent_JunoEncounter : public UFortQuestItemComponent_Juno	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.FortQuestItemComponent_JunoEncounter");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.FortAthenaAISpawnerDataComponent_JunoConversation
	// Inherited from UFortAthenaAISpawnerDataComponent_AIBotConversation -> UFortAthenaAISpawnerDataComponent_ConversationBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x30 (0x298 - 0x268)
	class UFortAthenaAISpawnerDataComponent_JunoConversation : public UFortAthenaAISpawnerDataComponent_AIBotConversation	
	{
	public:
		UProxyTable* NPCMoodReactionAnimTable; // 0x268(0x8)
		FGameplayTagContainer GrantableQuestTags; // 0x270(0x20)
		bool bShouldCreateMerchantComponent; // 0x290(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x291(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.FortAthenaAISpawnerDataComponent_JunoConversation");
			return ret;
		}
	};


	// Class JunoAdventuresRuntime.JunoAdventuresBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoAdventuresBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoAdventuresBlueprintLibrary");
			return ret;
		}

		UJunoQuestManagerComponent GetJunoQuestManager(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751C83130(relative to base address)
		UJunoQuestDatabaseComponent GetJunoQuestDatabase(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751C830B0(relative to base address)
	};


	// Class JunoAdventuresRuntime.JunoCheatManager_Adventures
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoCheatManager_Adventures : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoAdventuresRuntime.JunoCheatManager_Adventures");
			return ret;
		}

		void JunoSpawnVisitorInClosestCamp(FString PartialUniqueAIIdentifier, int32_t Count); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private|Const, Memory Exec: 0x7FF74F0F62F8(relative to base address)
		void JunoRepopulateAvailableQuestsWithTags(FString QuestPoolTags); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF751C835DC(relative to base address)
		void JunoRepopulateAvailableQuests(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF751C83564(relative to base address)
		void JunoQueueScriptRowMessagesForNpcConversation(FString ScriptName, FString RowName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74F499060(relative to base address)
		void JunoPrintNPCsInfo(bool bIgnoreAIsWithNoAssignment); // Flags: Final|Exec|Native|Private|Const, Memory Exec: 0x7FF74C079284(relative to base address)
		void JunoPrintCurrentConversationInfo(); // Flags: Final|Exec|Native|Private|Const, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoInjectDisplayTextForNpcConversation(FString TestString); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private|Const, Memory Exec: 0x7FF74C7B3138(relative to base address)
	};

}
