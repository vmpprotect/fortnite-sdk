#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CorruptionGameplayCodeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		FString WriteTextToBuffer(FText& Text); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751241390(relative to base address)
		bool IsOption2ChoiceWinner(FWarEffortFundingMetadata& MetaData, int32_t ChoiceIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751240620(relative to base address)
		bool IsOption1ChoiceWinner(FWarEffortFundingMetadata& MetaData, int32_t ChoiceIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751240478(relative to base address)
		bool IsIndexFunded(FWarEffortFundingMetadata& MetaData, int32_t Index, TEnumAsByte<EWarEffortFundingStationType> StationType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751240088(relative to base address)
		float GetIndexFundedPercent(FWarEffortFundingMetadata& MetaData, int32_t Index, TEnumAsByte<EWarEffortFundingStationType> StationType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75123FE48(relative to base address)
		bool DoesChoiceHaveWinner(FWarEffortFundingMetadata& MetaData, int32_t ChoiceIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75123FBD4(relative to base address)
		int32_t AdjustDonation(int32_t DonationAmount, TEnumAsByte<EWarEffortFundingStationType> StationType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75123FAB4(relative to base address)
	};


	// Class CorruptionGameplayCodeRuntime.CorruptionCoverageMap
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UCorruptionCoverageMap : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x68]; // 0x28(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CorruptionGameplayCodeRuntime.CorruptionCoverageMap");
			return ret;
		}

		bool UpdateCorruptionCoverageMap(UObject* WorldContextObject, UTextureRenderTarget2D* CorruptionRenderTarget, FVector& InTopLeftWorldCoordinate, FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration); // Flags: Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7512410A4(relative to base address)
		bool IsLocationCorrupted(FVector& Location, float Padding); // Flags: Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512402EC(relative to base address)
	};


	// Class CorruptionGameplayCodeRuntime.FortCorruptionSequenceData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UFortCorruptionSequenceData : public UPrimaryDataAsset	
	{
	public:
		TArray<FCorruptionCalendarEventData> CorruptionStartEvents; // 0x30(0x10)
		TArray<FCorruptionPauseEvent> CorruptionPauseEvents; // 0x40(0x10)

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
		unsigned char UnknownData00_6[0x4]; // 0x4E4(0x4) UNKNOWN PROPERTY
		UFortCorruptionSequenceData* CorruptionSequence; // 0x4E8(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x4F0(0x8) UNKNOWN PROPERTY
		TArray<FTravelerStepCorruptionOverrideData> TravelerCorruptionStepPercentOverrides; // 0x4F8(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x508(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CorruptionGameplayCodeRuntime.CubeMovementStaticPath");
			return ret;
		}

		void EditorGetCorruptionGenerationData(FCubeMovement_CorruptionGenerationData& OutData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75123FD58(relative to base address)
		void ClearAllGeneratedSplinesAndLockedData(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75123FBC0(relative to base address)
	};


	// Class CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort
	// Inherited from AFortAthenaMutator_GameModeBase -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x68 (0x4F0 - 0x488)
	class AFortAthenaMutator_WarEffort : public AFortAthenaMutator_GameModeBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x488(0x8) UNKNOWN PROPERTY
		FWarEffortMutatorMetadata MeshNetworkMetadata; // 0x490(0x20)
		TArray<FWarEffortMutatorChoiceData> WeaponChoices; // 0x4B0(0x10)
		TArray<FPrimaryAssetId> PreloadedItemList; // 0x4C0(0x10)
		bool bCanPreloadItems; // 0x4D0(0x1)
		unsigned char UnknownData01_7[0x1F]; // 0x4D1(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort");
			return ret;
		}

		void SetTryBeforeYouBuyItemState(FGameplayTag ItemFundingTag, bool bIsActive); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751240ECC(relative to base address)
		void SetItemFundedState(FGameplayTag ItemFundingTag, bool bIsActive); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751240CF4(relative to base address)
		void SetItemFundedPercent(FGameplayTag ItemFundingTag, float FundingPercent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751240B20(relative to base address)
		void SetItemFundedAmount(FGameplayTag ItemFundingTag, int64_t CurrentFundingAmount, int64_t TargetFundingAmount); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751240898(relative to base address)
		void SetFundingManagerReady(bool bIsReady); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751240818(relative to base address)
		void OnRep_PreloadedItemList(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751240804(relative to base address)
	};


	// Class CorruptionGameplayCodeRuntime.WarEffortMeshActor
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x88 (0x318 - 0x290)
	class AWarEffortMeshActor : public AInfo	
	{
	public:
		UMeshNetworkComponent* MeshNetworkComponent; // 0x290(0x8)
		TArray<FGameplayTag> ActiveFundedItems; // 0x298(0x10)
		TArray<FGameplayTag> ActiveTryBeforeYouBuyItems; // 0x2A8(0x10)
		TArray<FWarEffortFundingData> CurrentFundingData; // 0x2B8(0x10)
		unsigned char UnknownData00_7[0x50]; // 0x2C8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CorruptionGameplayCodeRuntime.WarEffortMeshActor");
			return ret;
		}

		void OnRep_CurrentFundingData(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7512407F0(relative to base address)
		void OnRep_ActiveTryBeforeYouBuyItems(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7512407DC(relative to base address)
		void OnRep_ActiveFundedItems(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7512407C8(relative to base address)
	};

}
