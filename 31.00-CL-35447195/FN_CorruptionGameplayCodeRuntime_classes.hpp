#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CorruptionGameplayCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CorruptionGameplayCodeRuntime.WarEffortFundingLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWarEffortFundingLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary");
			return ret;
		}

		FString WriteTextToBuffer(FText& Text); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414CCBDD8
		bool IsOption2ChoiceWinner(FWarEffortFundingMetadata& MetaData, int32_t ChoiceIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414CCBCF8
		bool IsOption1ChoiceWinner(FWarEffortFundingMetadata& MetaData, int32_t ChoiceIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414CCBC18
		bool IsIndexFunded(FWarEffortFundingMetadata& MetaData, int32_t Index, TEnumAsByte StationType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414CCBB38
		float GetIndexFundedPercent(FWarEffortFundingMetadata& MetaData, int32_t Index, TEnumAsByte StationType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414CCBA58
		bool DoesChoiceHaveWinner(FWarEffortFundingMetadata& MetaData, int32_t ChoiceIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414CCB978
		int32_t AdjustDonation(int32_t DonationAmount, TEnumAsByte StationType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414CCB898
	};


	// Class CorruptionGameplayCodeRuntime.CorruptionCoverageMap
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UCorruptionCoverageMap : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x68]; // 0x28(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CorruptionGameplayCodeRuntime.CorruptionCoverageMap");
			return ret;
		}

		bool UpdateCorruptionCoverageMap(UObject WorldContextObject, UTextureRenderTarget2D CorruptionRenderTarget, FVector& InTopLeftWorldCoordinate, FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration); // Flags: Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414CCBF98
		bool IsLocationCorrupted(FVector& Location, float Padding); // Flags: Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CCBEB8
	};


	// Class CorruptionGameplayCodeRuntime.FortCorruptionSequenceData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UFortCorruptionSequenceData : public UPrimaryDataAsset	
	{
	public:
		TArray CorruptionStartEvents; // 0x30(0x10)
		TArray CorruptionPauseEvents; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CorruptionGameplayCodeRuntime.FortCorruptionSequenceData");
			return ret;
		}
	};


	// Class CorruptionGameplayCodeRuntime.CubeMovementStaticPath
	// Inherited from AScriptedObjectMovement_StaticPath -> AActor -> UObject
	// Size: 0x38 (0x510 - 0x4D8)
	class ACubeMovementStaticPath : public AScriptedObjectMovement_StaticPath	
	{
	public:
		float GenerationZTraceHeight; // 0x4D8(0x4)
		float CubeSpacingFactor; // 0x4DC(0x4)
		float CubeAngleLimitDegrees; // 0x4E0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4E4(0x4) UNKNOWN PROPERTY
		UFortCorruptionSequenceData CorruptionSequence; // 0x4E8(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x4F0(0x8) UNKNOWN PROPERTY
		TArray TravelerCorruptionStepPercentOverrides; // 0x4F8(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x508(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CorruptionGameplayCodeRuntime.CubeMovementStaticPath");
			return ret;
		}

		void EditorGetCorruptionGenerationData(FCubeMovement_CorruptionGenerationData& OutData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CCC158
		void ClearAllGeneratedSplinesAndLockedData(); // Flags: Final|Native|Protected 0x7FF414CCC078
	};


	// Class CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort
	// Inherited from AFortAthenaMutator_GameModeBase -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x68 (0x4F0 - 0x488)
	class AFortAthenaMutator_WarEffort : public AFortAthenaMutator_GameModeBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x488(0x8) UNKNOWN PROPERTY
		FWarEffortMutatorMetadata MeshNetworkMetadata; // 0x490(0x20)
		TArray WeaponChoices; // 0x4B0(0x10)
		TArray PreloadedItemList; // 0x4C0(0x10)
		bool bCanPreloadItems; // 0x4D0(0x1)
		unsigned char UnknownData03_7[0x1F]; // 0x4D1(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort");
			return ret;
		}

		void SetTryBeforeYouBuyItemState(FGameplayTag ItemFundingTag, bool bIsActive); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CCC698
		void SetItemFundedState(FGameplayTag ItemFundingTag, bool bIsActive); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CCC5B8
		void SetItemFundedPercent(FGameplayTag ItemFundingTag, float FundingPercent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CCC4D8
		void SetItemFundedAmount(FGameplayTag ItemFundingTag, int64_t CurrentFundingAmount, int64_t TargetFundingAmount); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CCC3F8
		void SetFundingManagerReady(bool bIsReady); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CCC318
		void OnRep_PreloadedItemList(); // Flags: Final|Native|Protected 0x7FF414CCC238
	};


	// Class CorruptionGameplayCodeRuntime.WarEffortMeshActor
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x88 (0x318 - 0x290)
	class AWarEffortMeshActor : public AInfo	
	{
	public:
		UMeshNetworkComponent MeshNetworkComponent; // 0x290(0x8)
		TArray ActiveFundedItems; // 0x298(0x10)
		TArray ActiveTryBeforeYouBuyItems; // 0x2A8(0x10)
		TArray CurrentFundingData; // 0x2B8(0x10)
		unsigned char UnknownData01_7[0x50]; // 0x2C8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CorruptionGameplayCodeRuntime.WarEffortMeshActor");
			return ret;
		}

		void OnRep_CurrentFundingData(); // Flags: Final|Native|Protected 0x7FF414CCC938
		void OnRep_ActiveTryBeforeYouBuyItems(); // Flags: Final|Native|Protected 0x7FF414CCC858
		void OnRep_ActiveFundedItems(); // Flags: Final|Native|Protected 0x7FF414CCC778
	};

}
