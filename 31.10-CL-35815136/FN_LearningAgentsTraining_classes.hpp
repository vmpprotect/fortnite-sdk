#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LearningAgentsTraining
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class LearningAgentsTraining.LearningAgentsCommunicatorLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULearningAgentsCommunicatorLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgentsTraining.LearningAgentsCommunicatorLibrary");
			return ret;
		}

		FLearningAgentsTrainerProcess SpawnSocketTrainingProcess(FLearningAgentsTrainerProcessSettings& TrainerProcessSettings, FLearningAgentsSocketCommunicatorSettings& SocketSettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F78DDC(relative to base address)
		FLearningAgentsTrainerProcess SpawnSharedMemoryTrainingProcess(FLearningAgentsTrainerProcessSettings& TrainerProcessSettings, FLearningAgentsSharedMemoryCommunicatorSettings& SharedMemorySettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F78CB8(relative to base address)
		FLearningAgentsCommunicator MakeSocketCommunicator(FLearningAgentsTrainerProcess TrainerProcess, FLearningAgentsSocketCommunicatorSettings& SocketSettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F78338(relative to base address)
		FLearningAgentsCommunicator MakeSharedMemoryCommunicator(FLearningAgentsTrainerProcess& TrainerProcess, FLearningAgentsTrainerProcessSettings& TrainerProcessSettings, FLearningAgentsSharedMemoryCommunicatorSettings& SharedMemorySettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F7815C(relative to base address)
	};


	// Class LearningAgentsTraining.LearningAgentsCompletions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULearningAgentsCompletions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgentsTraining.LearningAgentsCompletions");
			return ret;
		}

		ELearningAgentsCompletion MakeCompletionOnTimeElapsed(float Time, float TimeThreshold, ELearningAgentsCompletion CompletionType, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F77700(relative to base address)
		ELearningAgentsCompletion MakeCompletionOnLocationOutsideBounds(FVector Location, FTransform BoundsTransform, FVector BoundsMins, FVector BoundsMaxs, ELearningAgentsCompletion CompletionType, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F76DC8(relative to base address)
		ELearningAgentsCompletion MakeCompletionOnLocationDifferenceBelowThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, ELearningAgentsCompletion CompletionType, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F76630(relative to base address)
		ELearningAgentsCompletion MakeCompletionOnLocationDifferenceAboveThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, ELearningAgentsCompletion CompletionType, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F75E98(relative to base address)
		ELearningAgentsCompletion MakeCompletionOnEpisodeStepsRecorded(int32_t EpisodeSteps, int32_t MaxEpisodeSteps, ELearningAgentsCompletion CompletionType, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F75B5C(relative to base address)
		ELearningAgentsCompletion MakeCompletionOnCondition(bool bCondition, ELearningAgentsCompletion CompletionType, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F75864(relative to base address)
		ELearningAgentsCompletion MakeCompletion(ELearningAgentsCompletion CompletionType, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F755BC(relative to base address)
		bool IsCompletionTruncation(ELearningAgentsCompletion Completion); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F7552C(relative to base address)
		bool IsCompletionTermination(ELearningAgentsCompletion Completion); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F754B0(relative to base address)
		bool IsCompletionRunning(ELearningAgentsCompletion Completion); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F7543C(relative to base address)
		bool IsCompletionCompleted(ELearningAgentsCompletion Completion); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F753BC(relative to base address)
		ELearningAgentsCompletion CompletionOr(ELearningAgentsCompletion A, ELearningAgentsCompletion B); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F75228(relative to base address)
		ELearningAgentsCompletion CompletionNot(ELearningAgentsCompletion A, ELearningAgentsCompletion NotRunningType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F75164(relative to base address)
		ELearningAgentsCompletion CompletionAnd(ELearningAgentsCompletion A, ELearningAgentsCompletion B); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F750A0(relative to base address)
	};


	// Class LearningAgentsTraining.LearningAgentsImitationTrainer
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x20 (0xA8 - 0x88)
	class ULearningAgentsImitationTrainer : public ULearningAgentsManagerListener	
	{
	public:
		ULearningAgentsInteractor* Interactor; // 0x88(0x8)
		ULearningAgentsPolicy* Policy; // 0x90(0x8)
		bool bIsTraining; // 0x98(0x1)
		bool bHasTrainingFailed; // 0x99(0x1)
		unsigned char UnknownData00_7[0xE]; // 0x9A(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgentsTraining.LearningAgentsImitationTrainer");
			return ret;
		}

		void RunTraining(ULearningAgentsRecording* Recording, FLearningAgentsImitationTrainerSettings& ImitationTrainerSettings, FLearningAgentsImitationTrainerTrainingSettings& ImitationTrainerTrainingSettings, FLearningAgentsTrainerProcessSettings& ImitationTrainerPathSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F785D4(relative to base address)
		ULearningAgentsImitationTrainer MakeImitationTrainer(ULearningAgentsManager* InManager, ULearningAgentsInteractor* InInteractor, ULearningAgentsPolicy* InPolicy, UClass* Class); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751F77A40(relative to base address)
		void IterateTraining(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F755A8(relative to base address)
		bool IsTraining(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C93DBC(relative to base address)
		bool HasTrainingFailed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F753A4(relative to base address)
		void EndTraining(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F752F0(relative to base address)
		void BeginTraining(ULearningAgentsRecording* Recording, FLearningAgentsImitationTrainerSettings& ImitationTrainerSettings, FLearningAgentsImitationTrainerTrainingSettings& ImitationTrainerTrainingSettings, FLearningAgentsTrainerProcessSettings& ImitationTrainerPathSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F74D40(relative to base address)
	};


	// Class LearningAgentsTraining.LearningAgentsPPOTrainer
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x68 (0xF0 - 0x88)
	class ULearningAgentsPPOTrainer : public ULearningAgentsManagerListener	
	{
	public:
		ULearningAgentsInteractor* Interactor; // 0x88(0x8)
		ULearningAgentsTrainingEnvironment* TrainingEnvironment; // 0x90(0x8)
		ULearningAgentsPolicy* Policy; // 0x98(0x8)
		ULearningAgentsCritic* Critic; // 0xA0(0x8)
		bool bIsTraining; // 0xA8(0x1)
		bool bHasTrainingFailed; // 0xA9(0x1)
		unsigned char UnknownData00_7[0x46]; // 0xAA(0x46) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgentsTraining.LearningAgentsPPOTrainer");
			return ret;
		}

		void SetupPPOTrainer(ULearningAgentsManager* InManager, ULearningAgentsInteractor* InInteractor, ULearningAgentsTrainingEnvironment* InTrainingEnvironment, ULearningAgentsPolicy* InPolicy, ULearningAgentsCritic* InCritic, FLearningAgentsCommunicator& Communicator, FLearningAgentsPPOTrainerSettings& TrainerSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F789F4(relative to base address)
		void RunTraining(FLearningAgentsPPOTrainingSettings& TrainerTrainingSettings, FLearningAgentsTrainingGameSettings& TrainingGameSettings, bool bResetAgentsOnBegin, bool bResetAgentsOnUpdate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F78764(relative to base address)
		void ProcessExperience(bool bResetAgentsOnUpdate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F78554(relative to base address)
		ULearningAgentsPPOTrainer MakePPOTrainer(ULearningAgentsManager* InManager, ULearningAgentsInteractor* InInteractor, ULearningAgentsTrainingEnvironment* InTrainingEnvironment, ULearningAgentsPolicy* InPolicy, ULearningAgentsCritic* InCritic, FLearningAgentsCommunicator& Communicator, UClass* Class, FName Name, FLearningAgentsPPOTrainerSettings& TrainerSettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F77C74(relative to base address)
		bool IsTraining(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFB9D68(relative to base address)
		bool HasTrainingFailed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFB9D50(relative to base address)
		int32_t GetEpisodeStepNum(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F75318(relative to base address)
		void EndTraining(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F75304(relative to base address)
		void BeginTraining(FLearningAgentsPPOTrainingSettings& TrainerTrainingSettings, FLearningAgentsTrainingGameSettings& TrainingGameSettings, bool bResetAgentsOnBegin); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F74ED0(relative to base address)
	};


	// Class LearningAgentsTraining.LearningAgentsRecorder
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x4638 (0x46C0 - 0x88)
	class ULearningAgentsRecorder : public ULearningAgentsManagerListener	
	{
	public:
		ULearningAgentsInteractor* Interactor; // 0x88(0x8)
		ULearningAgentsRecording* Recording; // 0x90(0x8)
		bool bIsRecording; // 0x98(0x1)
		unsigned char UnknownData00_7[0x4627]; // 0x99(0x4627) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgentsTraining.LearningAgentsRecorder");
			return ret;
		}

		void SetupRecorder(ULearningAgentsManager* InManager, ULearningAgentsInteractor* InInteractor, FLearningAgentsRecorderPathSettings& RecorderPathSettings, ULearningAgentsRecording* RecordingAsset, bool bReinitializeRecording); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F7F9DC(relative to base address)
		ULearningAgentsRecorder MakeRecorder(ULearningAgentsManager* InManager, ULearningAgentsInteractor* InInteractor, UClass* Class, FName Name, FLearningAgentsRecorderPathSettings& RecorderPathSettings, ULearningAgentsRecording* RecordingAsset, bool bReinitializeRecording); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F7A430(relative to base address)
		bool IsRecording(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C93DBC(relative to base address)
		ULearningAgentsRecording GetRecordingAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F7A148(relative to base address)
		void EndRecordingAndDiscard(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F7948C(relative to base address)
		void EndRecording(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F79478(relative to base address)
		void BeginRecording(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F79464(relative to base address)
		void AddExperience(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F79308(relative to base address)
	};


	// Class LearningAgentsTraining.LearningAgentsRecording
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class ULearningAgentsRecording : public UDataAsset	
	{
	public:
		TArray<FLearningAgentsRecord> Records; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgentsTraining.LearningAgentsRecording");
			return ret;
		}

		void SaveRecordingToFile(FFilePath& File); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF751F7F940(relative to base address)
		void SaveRecordingToAsset(ULearningAgentsRecording* RecordingAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F7F8C0(relative to base address)
		void ResetRecording(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751F7F894(relative to base address)
		void LoadRecordingFromFile(FFilePath& File); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F7A394(relative to base address)
		void LoadRecordingFromAsset(ULearningAgentsRecording* RecordingAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F7A314(relative to base address)
		int32_t GetRecordStepNum(int32_t Record); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F7A0BC(relative to base address)
		int32_t GetRecordNum(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1804(relative to base address)
		void GetObservationVector(TArray<float>& OutObservationVector, int32_t& OutObservationCompatibilityHash, int32_t Record, int32_t Step); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F79DC0(relative to base address)
		void GetActionVector(TArray<float>& OutActionVector, int32_t& OutActionCompatibilityHash, int32_t Record, int32_t Step); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F799A8(relative to base address)
		void AppendRecordingToAsset(ULearningAgentsRecording* RecordingAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F793E4(relative to base address)
		void AppendRecordingFromFile(FFilePath& File); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F7931C(relative to base address)
	};


	// Class LearningAgentsTraining.LearningAgentsRewards
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULearningAgentsRewards : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgentsTraining.LearningAgentsRewards");
			return ret;
		}

		float MakeRewardOnLocationDifferenceBelowThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, float RewardScale, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F7EF2C(relative to base address)
		float MakeRewardOnLocationDifferenceAboveThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, float RewardScale, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F7E794(relative to base address)
		float MakeRewardOnCondition(bool bCondition, float RewardScale, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F7E484(relative to base address)
		float MakeRewardFromVelocityAlongSpline(USplineComponent* SplineComponent, FVector Location, FVector Velocity, float VelocityScale, float RewardScale, float FiniteDifferenceDelta, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F7D938(relative to base address)
		float MakeRewardFromRotationSimilarityAsQuats(FQuat RotationA, FQuat RotationB, float RewardScale, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocationA, FVector VisualLoggerRotationLocationB, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F7D0D0(relative to base address)
		float MakeRewardFromRotationSimilarity(FRotator RotationA, FRotator RotationB, float RewardScale, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocationA, FVector VisualLoggerRotationLocationB, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F7C860(relative to base address)
		float MakeRewardFromLocationSimilarity(FVector LocationA, FVector LocationB, float LocationScale, float RewardScale, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F7C090(relative to base address)
		float MakeRewardFromLocationDifference(FVector LocationA, FVector LocationB, float LocationScale, float RewardScale, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F7B8F0(relative to base address)
		float MakeRewardFromDirectionSimilarity(FVector DirectionA, FVector DirectionB, float RewardScale, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerDirectionLocationA, FVector VisualLoggerDirectionLocationB, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F7AFD0(relative to base address)
		float MakeRewardFromAngleSimilarity(float AngleA, float AngleB, float RewardScale, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerAngleLocationA, FVector VisualLoggerAngleLocationB, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F7AB18(relative to base address)
		float MakeReward(float RewardValue, float RewardScale, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F7A834(relative to base address)
	};


	// Class LearningAgentsTraining.LearningAgentsTrainingEnvironment
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x298 (0x320 - 0x88)
	class ULearningAgentsTrainingEnvironment : public ULearningAgentsManagerListener	
	{
	public:
		unsigned char UnknownData00_1[0x298]; // 0x88(0x298) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgentsTraining.LearningAgentsTrainingEnvironment");
			return ret;
		}

		void SetupTrainingEnvironment(ULearningAgentsManager* InManager); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F7FC80(relative to base address)
		void ResetAgentEpisodes(TArray<int32_t>& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF74FACD40C(relative to base address)
		void ResetAgentEpisode(int32_t AgentId); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF751384084(relative to base address)
		ULearningAgentsTrainingEnvironment MakeTrainingEnvironment(ULearningAgentsManager* InManager, UClass* Class, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751F7F6C4(relative to base address)
		bool HasReward(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F7A288(relative to base address)
		bool HasCompletion(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F7A1FC(relative to base address)
		float GetReward(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F7A16C(relative to base address)
		float GetEpisodeTime(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F79D30(relative to base address)
		ELearningAgentsCompletion GetCompletion(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F79CA4(relative to base address)
		void GatherRewards(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F79994(relative to base address)
		void GatherCompletions(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F79980(relative to base address)
		void GatherAgentRewards(TArray<float>& OutRewards, TArray<int32_t>& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F7982C(relative to base address)
		void GatherAgentReward(float& OutReward, int32_t AgentId); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F79718(relative to base address)
		void GatherAgentCompletions(TArray<ELearningAgentsCompletion>& OutCompletions, TArray<int32_t>& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F79600(relative to base address)
		void GatherAgentCompletion(ELearningAgentsCompletion& OutCompletion, int32_t AgentId); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F794A0(relative to base address)
	};

}
