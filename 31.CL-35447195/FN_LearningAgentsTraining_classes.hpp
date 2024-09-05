#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LearningAgentsTraining
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		FLearningAgentsTrainerProcess SpawnSocketTrainingProcess(FLearningAgentsTrainerProcessSettings& TrainerProcessSettings, FLearningAgentsSocketCommunicatorSettings& SocketSettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EACC00
		FLearningAgentsTrainerProcess SpawnSharedMemoryTrainingProcess(FLearningAgentsTrainerProcessSettings& TrainerProcessSettings, FLearningAgentsSharedMemoryCommunicatorSettings& SharedMemorySettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EACB20
		FLearningAgentsCommunicator MakeSocketCommunicator(FLearningAgentsTrainerProcess TrainerProcess, FLearningAgentsSocketCommunicatorSettings& SocketSettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EACA40
		FLearningAgentsCommunicator MakeSharedMemoryCommunicator(FLearningAgentsTrainerProcess& TrainerProcess, FLearningAgentsTrainerProcessSettings& TrainerProcessSettings, FLearningAgentsSharedMemoryCommunicatorSettings& SharedMemorySettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EAC960
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

		ELearningAgentsCompletion MakeCompletionOnTimeElapsed(float Time, float TimeThreshold, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAD840
		ELearningAgentsCompletion MakeCompletionOnLocationOutsideBounds(FVector Location, FTransform BoundsTransform, FVector BoundsMins, FVector BoundsMaxs, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAD760
		ELearningAgentsCompletion MakeCompletionOnLocationDifferenceBelowThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAD680
		ELearningAgentsCompletion MakeCompletionOnLocationDifferenceAboveThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAD5A0
		ELearningAgentsCompletion MakeCompletionOnEpisodeStepsRecorded(int32_t EpisodeSteps, int32_t MaxEpisodeSteps, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAD4C0
		ELearningAgentsCompletion MakeCompletionOnCondition(bool bCondition, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAD3E0
		ELearningAgentsCompletion MakeCompletion(ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAD300
		bool IsCompletionTruncation(ELearningAgentsCompletion Completion); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAD220
		bool IsCompletionTermination(ELearningAgentsCompletion Completion); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAD140
		bool IsCompletionRunning(ELearningAgentsCompletion Completion); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAD060
		bool IsCompletionCompleted(ELearningAgentsCompletion Completion); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EACF80
		ELearningAgentsCompletion CompletionOr(ELearningAgentsCompletion A, ELearningAgentsCompletion B); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EACEA0
		ELearningAgentsCompletion CompletionNot(ELearningAgentsCompletion A, ELearningAgentsCompletion NotRunningType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EACDC0
		ELearningAgentsCompletion CompletionAnd(ELearningAgentsCompletion A, ELearningAgentsCompletion B); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EACCE0
	};


	// Class LearningAgentsTraining.LearningAgentsImitationTrainer
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x20 (0xA8 - 0x88)
	class ULearningAgentsImitationTrainer : public ULearningAgentsManagerListener	
	{
	public:
		ULearningAgentsInteractor Interactor; // 0x88(0x8)
		ULearningAgentsPolicy Policy; // 0x90(0x8)
		bool bIsTraining; // 0x98(0x1)
		bool bHasTrainingFailed; // 0x99(0x1)
		unsigned char UnknownData01_7[0xE]; // 0x9A(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgentsTraining.LearningAgentsImitationTrainer");
			return ret;
		}

		void RunTraining(ULearningAgentsRecording Recording, FLearningAgentsImitationTrainerSettings& ImitationTrainerSettings, FLearningAgentsImitationTrainerTrainingSettings& ImitationTrainerTrainingSettings, FLearningAgentsTrainerProcessSettings& ImitationTrainerPathSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EADE60
		ULearningAgentsImitationTrainer MakeImitationTrainer(ULearningAgentsManager InManager, ULearningAgentsInteractor InInteractor, ULearningAgentsPolicy InPolicy, UClass Class); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EADD80
		void IterateTraining(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EADCA0
		bool IsTraining(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EADBC0
		bool HasTrainingFailed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EADAE0
		void EndTraining(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EADA00
		void BeginTraining(ULearningAgentsRecording Recording, FLearningAgentsImitationTrainerSettings& ImitationTrainerSettings, FLearningAgentsImitationTrainerTrainingSettings& ImitationTrainerTrainingSettings, FLearningAgentsTrainerProcessSettings& ImitationTrainerPathSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EAD920
	};


	// Class LearningAgentsTraining.LearningAgentsPPOTrainer
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x68 (0xF0 - 0x88)
	class ULearningAgentsPPOTrainer : public ULearningAgentsManagerListener	
	{
	public:
		ULearningAgentsInteractor Interactor; // 0x88(0x8)
		ULearningAgentsTrainingEnvironment TrainingEnvironment; // 0x90(0x8)
		ULearningAgentsPolicy Policy; // 0x98(0x8)
		ULearningAgentsCritic Critic; // 0xA0(0x8)
		bool bIsTraining; // 0xA8(0x1)
		bool bHasTrainingFailed; // 0xA9(0x1)
		unsigned char UnknownData01_7[0x46]; // 0xAA(0x46) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgentsTraining.LearningAgentsPPOTrainer");
			return ret;
		}

		void SetupPPOTrainer(ULearningAgentsManager InManager, ULearningAgentsInteractor InInteractor, ULearningAgentsTrainingEnvironment InTrainingEnvironment, ULearningAgentsPolicy InPolicy, ULearningAgentsCritic InCritic, FLearningAgentsCommunicator& Communicator, FLearningAgentsPPOTrainerSettings& TrainerSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EAE640
		void RunTraining(FLearningAgentsPPOTrainingSettings& TrainerTrainingSettings, FLearningAgentsTrainingGameSettings& TrainingGameSettings, bool bResetAgentsOnBegin, bool bResetAgentsOnUpdate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EAE560
		void ProcessExperience(bool bResetAgentsOnUpdate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EAE480
		ULearningAgentsPPOTrainer MakePPOTrainer(ULearningAgentsManager InManager, ULearningAgentsInteractor InInteractor, ULearningAgentsTrainingEnvironment InTrainingEnvironment, ULearningAgentsPolicy InPolicy, ULearningAgentsCritic InCritic, FLearningAgentsCommunicator& Communicator, UClass Class, FName Name, FLearningAgentsPPOTrainerSettings& TrainerSettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EAE3A0
		bool IsTraining(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EAE2C0
		bool HasTrainingFailed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EAE1E0
		int32_t GetEpisodeStepNum(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EAE100
		void EndTraining(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EAE020
		void BeginTraining(FLearningAgentsPPOTrainingSettings& TrainerTrainingSettings, FLearningAgentsTrainingGameSettings& TrainingGameSettings, bool bResetAgentsOnBegin); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EADF40
	};


	// Class LearningAgentsTraining.LearningAgentsRecorder
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x4638 (0x46C0 - 0x88)
	class ULearningAgentsRecorder : public ULearningAgentsManagerListener	
	{
	public:
		ULearningAgentsInteractor Interactor; // 0x88(0x8)
		ULearningAgentsRecording Recording; // 0x90(0x8)
		bool bIsRecording; // 0x98(0x1)
		unsigned char UnknownData01_7[0x4627]; // 0x99(0x4627) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgentsTraining.LearningAgentsRecorder");
			return ret;
		}

		void SetupRecorder(ULearningAgentsManager InManager, ULearningAgentsInteractor InInteractor, FLearningAgentsRecorderPathSettings& RecorderPathSettings, ULearningAgentsRecording RecordingAsset, bool bReinitializeRecording); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EAED40
		ULearningAgentsRecorder MakeRecorder(ULearningAgentsManager InManager, ULearningAgentsInteractor InInteractor, UClass Class, FName Name, FLearningAgentsRecorderPathSettings& RecorderPathSettings, ULearningAgentsRecording RecordingAsset, bool bReinitializeRecording); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EAEC60
		bool IsRecording(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EAEB80
		ULearningAgentsRecording GetRecordingAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EAEAA0
		void EndRecordingAndDiscard(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EAE9C0
		void EndRecording(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EAE8E0
		void BeginRecording(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EAE800
		void AddExperience(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EAE720
	};


	// Class LearningAgentsTraining.LearningAgentsRecording
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class ULearningAgentsRecording : public UDataAsset	
	{
	public:
		TArray Records; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgentsTraining.LearningAgentsRecording");
			return ret;
		}

		void SaveRecordingToFile(); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414EAF6E0
		void SaveRecordingToAsset(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EAF600
		void ResetRecording(); // Flags: Final|Native|Public 0x7FF414EAF520
		void LoadRecordingFromFile(FFilePath& File); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EAF440
		void LoadRecordingFromAsset(ULearningAgentsRecording RecordingAsset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EAF360
		int32_t GetRecordStepNum(int32_t Record); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EAF280
		int32_t GetRecordNum(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EAF1A0
		void GetObservationVector(TArray& OutObservationVector, int32_t& OutObservationCompatibilityHash, int32_t Record, int32_t Step); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EAF0C0
		void GetActionVector(TArray& OutActionVector, int32_t& OutActionCompatibilityHash, int32_t Record, int32_t Step); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EAEFE0
		void AppendRecordingToAsset(ULearningAgentsRecording RecordingAsset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EAEF00
		void AppendRecordingFromFile(FFilePath& File); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EAEE20
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

		float MakeRewardOnLocationDifferenceBelowThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, float RewardScale, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EB0080
		float MakeRewardOnLocationDifferenceAboveThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, float RewardScale, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAFFA0
		float MakeRewardOnCondition(bool bCondition, float RewardScale, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAFEC0
		float MakeRewardFromVelocityAlongSpline(USplineComponent SplineComponent, FVector Location, FVector Velocity, float VelocityScale, float RewardScale, float FiniteDifferenceDelta, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAFDE0
		float MakeRewardFromRotationSimilarityAsQuats(FQuat RotationA, FQuat RotationB, float RewardScale, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocationA, FVector VisualLoggerRotationLocationB, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAFD00
		float MakeRewardFromRotationSimilarity(FRotator RotationA, FRotator RotationB, float RewardScale, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocationA, FVector VisualLoggerRotationLocationB, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAFC20
		float MakeRewardFromLocationSimilarity(FVector LocationA, FVector LocationB, float LocationScale, float RewardScale, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAFB40
		float MakeRewardFromLocationDifference(FVector LocationA, FVector LocationB, float LocationScale, float RewardScale, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAFA60
		float MakeRewardFromDirectionSimilarity(FVector DirectionA, FVector DirectionB, float RewardScale, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerDirectionLocationA, FVector VisualLoggerDirectionLocationB, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAF980
		float MakeRewardFromAngleSimilarity(float AngleA, float AngleB, float RewardScale, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerAngleLocationA, FVector VisualLoggerAngleLocationB, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAF8A0
		float MakeReward(float RewardValue, float RewardScale, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EAF7C0
	};


	// Class LearningAgentsTraining.LearningAgentsTrainingEnvironment
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x298 (0x320 - 0x88)
	class ULearningAgentsTrainingEnvironment : public ULearningAgentsManagerListener	
	{
	public:
		unsigned char UnknownData01_1[0x298]; // 0x88(0x298) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgentsTraining.LearningAgentsTrainingEnvironment");
			return ret;
		}

		void SetupTrainingEnvironment(ULearningAgentsManager InManager); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB0DA0
		void ResetAgentEpisodes(TArray& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EB0CC0
		void ResetAgentEpisode(int32_t AgentId); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414EB0BE0
		ULearningAgentsTrainingEnvironment MakeTrainingEnvironment(ULearningAgentsManager InManager, UClass Class, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB0B00
		bool HasReward(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EB0A20
		bool HasCompletion(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EB0940
		float GetReward(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EB0860
		float GetEpisodeTime(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EB0780
		ELearningAgentsCompletion GetCompletion(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EB06A0
		void GatherRewards(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB05C0
		void GatherCompletions(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB04E0
		void GatherAgentRewards(TArray& OutRewards, TArray& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EB0400
		void GatherAgentReward(float& OutReward, int32_t AgentId); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EB0320
		void GatherAgentCompletions(TArray& OutCompletions, TArray& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EB0240
		void GatherAgentCompletion(ELearningAgentsCompletion& OutCompletion, int32_t AgentId); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EB0160
	};

}
