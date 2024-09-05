#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortniteConversationRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FortniteConversationRuntime.FortConversationGetGraphInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortConversationGetGraphInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationGetGraphInterface");
			return ret;
		}

		UConversationDatabase GetConversationGraph(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7488DDC68(relative to base address)
	};


	// Class FortniteConversationRuntime.FortConversationMarkerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortConversationMarkerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationMarkerInterface");
			return ret;
		}
	};


	// Class FortniteConversationRuntime.FortConversationParticipantComponent
	// Inherited from UConversationParticipantComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x190 - 0x190)
	class UFortConversationParticipantComponent : public UConversationParticipantComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationParticipantComponent");
			return ret;
		}
	};


	// Class FortniteConversationRuntime.FortConversationContextCondition
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortConversationContextCondition : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationContextCondition");
			return ret;
		}

		bool DoesContextPass(FConversationContext& Context); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750621AC0(relative to base address)
	};


	// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasCID
	// Inherited from UFortConversationContextCondition -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UFortConversationContextCondition_ParticipantHasCID : public UFortConversationContextCondition	
	{
	public:
		FGameplayTag ParticipantID; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray<FSoftObjectPath> AllowedCIDs; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasCID");
			return ret;
		}
	};


	// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasMetaTag
	// Inherited from UFortConversationContextCondition -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortConversationContextCondition_ParticipantHasMetaTag : public UFortConversationContextCondition	
	{
	public:
		FGameplayTag ParticipantID; // 0x28(0x4)
		FGameplayTag MetaTag; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasMetaTag");
			return ret;
		}
	};


	// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasOwnedTag
	// Inherited from UFortConversationContextCondition -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortConversationContextCondition_ParticipantHasOwnedTag : public UFortConversationContextCondition	
	{
	public:
		FGameplayTag ParticipantID; // 0x28(0x4)
		FGameplayTag OwnedTag; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasOwnedTag");
			return ret;
		}
	};


	// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantControllerMeetsRequirement
	// Inherited from UFortConversationContextCondition -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFortConversationContextCondition_ParticipantControllerMeetsRequirement : public UFortConversationContextCondition	
	{
	public:
		FGameplayTag ParticipantID; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UFortControllerRequirement* Requirement; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantControllerMeetsRequirement");
			return ret;
		}
	};


	// Class FortniteConversationRuntime.FortConversationContextConditionHelpers
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortConversationContextConditionHelpers : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationContextConditionHelpers");
			return ret;
		}

		bool GetMessageForContext(FFortConversationNodeConditionalMessages& Messages, FConversationContext& Context, FText& OutText); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750621D6C(relative to base address)
	};


	// Class FortniteConversationRuntime.FortConversationParamLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortConversationParamLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationParamLibrary");
			return ret;
		}

		bool ExtractConversationParameterValue(TArray<FConversationNodeParameterPair>& ConversationParameters, FString DesiredParameterName, FString& ParameterValueOut); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750621B84(relative to base address)
	};


	// Class FortniteConversationRuntime.FortniteConversationGlobals
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortniteConversationGlobals : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortniteConversationGlobals");
			return ret;
		}
	};


	// Class FortniteConversationRuntime.FortPlayerConversationComponent
	// Inherited from UFortConversationParticipantComponent -> UConversationParticipantComponent -> UActorComponent -> UObject
	// Size: 0x248 (0x3D8 - 0x190)
	class UFortPlayerConversationComponent : public UFortConversationParticipantComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x190(0x8) UNKNOWN PROPERTY
		TArray<UFortNonPlayerConversationParticipantComponent*> ConversationParticipantsInRange; // 0x198(0x10)
		float GreetSphereRadius; // 0x1A8(0x4)
		float IconVisibilityRadius; // 0x1AC(0x4)
		float AbortConversationRange; // 0x1B0(0x4)
		FGameplayTag RidingOnActorTag; // 0x1B4(0x4)
		float RidingOnActorRangeMultiplierSquared; // 0x1B8(0x4)
		unsigned char UnknownData01_6[0x3C]; // 0x1BC(0x3C) UNKNOWN PROPERTY
		TSet<UFortNonPlayerConversationParticipantComponent*> IndicatedNPCConversationComponents; // 0x1F8(0x50)
		unsigned char UnknownData02_6[0x8]; // 0x248(0x8) UNKNOWN PROPERTY
		bool bMoveShouldAbortConversation; // 0x250(0x1)
		bool bCachedDefaultMoveShouldAbortConverationValue; // 0x251(0x1)
		unsigned char UnknownData03_6[0x11E]; // 0x252(0x11E) UNKNOWN PROPERTY
		FClientConversationMessagePayload LastSanitizationMessage; // 0x370(0x68)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortPlayerConversationComponent");
			return ret;
		}

		void RequestServerAbortConversationWithParticipant(UFortNonPlayerConversationParticipantComponent* Participant); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74FCB13CC(relative to base address)
		void RequestServerAbortConversation(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74D8BB41C(relative to base address)
		void OnRootPlayspaceSet(APlayspace* RootPlayspace); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506221C8(relative to base address)
		void OnMinigameReady(AFortMinigame* InMinigame); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506220CC(relative to base address)
		void OnMinigameEnded(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C8E74BC(relative to base address)
		void HandleViewTargetChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506220B8(relative to base address)
		void HandlePossessedPawnChangedWhileRefreshTriggersBound(APawn* OldPawn, APawn* NewPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF750621FB8(relative to base address)
		void HandleFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatingPC, AFortPlayerState* FollowedPlayerState); // Flags: Final|Native|Private, Memory Exec: 0x7FF750621EF4(relative to base address)
		void HandleDBNOChanged(AFortPawn* Pawn, bool bIsDBNO); // Flags: Final|Native|Private, Memory Exec: 0x7FF74E248000(relative to base address)
		void ClientSpectatorOpenUI(); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74E2F35D0(relative to base address)
		void ClientSpectatorLeaveConversationState(); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74E217D18(relative to base address)
		void ClientSpectatorEnterConversationState(); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74E4851A4(relative to base address)
		void ClientSpectatorCloseUI(); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74F49E694(relative to base address)
		void ClientReceiveConversationGiftUINotification(FGiftUINotificationInfo ConversationGiftUINotification); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF75062199C(relative to base address)
	};

}
