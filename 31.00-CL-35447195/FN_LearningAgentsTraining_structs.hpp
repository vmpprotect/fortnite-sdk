#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LearningAgentsTraining
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct LearningAgentsTraining.LearningAgentsSharedMemoryCommunicatorSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FLearningAgentsSharedMemoryCommunicatorSettings	
	{
	public:
		FString TaskName; // 0x0(0x10)
		int32_t ProcessNum; // 0x10(0x4)
		float Timeout; // 0x14(0x4)
	};


	// Struct LearningAgentsTraining.LearningAgentsSocketCommunicatorSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FLearningAgentsSocketCommunicatorSettings	
	{
	public:
		FString IpAddress; // 0x0(0x10)
		uint32_t Port; // 0x10(0x4)
		float Timeout; // 0x14(0x4)
	};


	// Struct LearningAgentsTraining.LearningAgentsTrainerProcess
	// Size: 0x10 (0x10 - 0x0)
	struct FLearningAgentsTrainerProcess	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct LearningAgentsTraining.LearningAgentsCommunicator
	// Size: 0x10 (0x10 - 0x0)
	struct FLearningAgentsCommunicator	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct LearningAgentsTraining.LearningAgentsImitationTrainerSettings
	// Size: 0x4 (0x4 - 0x0)
	struct FLearningAgentsImitationTrainerSettings	
	{
	public:
		float TrainerCommunicationTimeout; // 0x0(0x4)
	};


	// Struct LearningAgentsTraining.LearningAgentsImitationTrainerTrainingSettings
	// Size: 0x28 (0x28 - 0x0)
	struct FLearningAgentsImitationTrainerTrainingSettings	
	{
	public:
		int32_t NumberOfIterations; // 0x0(0x4)
		float LearningRate; // 0x4(0x4)
		float LearningRateDecay; // 0x8(0x4)
		float WeightDecay; // 0xC(0x4)
		uint32_t BatchSize; // 0x10(0x4)
		uint32_t Window; // 0x14(0x4)
		float ActionRegularizationWeight; // 0x18(0x4)
		float ActionEntropyWeight; // 0x1C(0x4)
		int32_t RandomSeed; // 0x20(0x4)
		ELearningAgentsTrainingDevice Device; // 0x24(0x1)
		bool bUseTensorboard; // 0x25(0x1)
		bool bSaveSnapshots; // 0x26(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x27(0x1) UNKNOWN PROPERTY
	};


	// Struct LearningAgentsTraining.LearningAgentsPPOTrainerSettings
	// Size: 0xC (0xC - 0x0)
	struct FLearningAgentsPPOTrainerSettings	
	{
	public:
		int32_t MaxEpisodeStepNum; // 0x0(0x4)
		int32_t MaximumRecordedEpisodesPerIteration; // 0x4(0x4)
		int32_t MaximumRecordedStepsPerIteration; // 0x8(0x4)
	};


	// Struct LearningAgentsTraining.LearningAgentsPPOTrainingSettings
	// Size: 0x68 (0x68 - 0x0)
	struct FLearningAgentsPPOTrainingSettings	
	{
	public:
		int32_t NumberOfIterations; // 0x0(0x4)
		float LearningRatePolicy; // 0x4(0x4)
		float LearningRateCritic; // 0x8(0x4)
		float LearningRateDecay; // 0xC(0x4)
		float WeightDecay; // 0x10(0x4)
		int32_t PolicyBatchSize; // 0x14(0x4)
		int32_t CriticBatchSize; // 0x18(0x4)
		int32_t PolicyWindowSize; // 0x1C(0x4)
		int32_t IterationsPerGather; // 0x20(0x4)
		int32_t CriticWarmupIterations; // 0x24(0x4)
		float EpsilonClip; // 0x28(0x4)
		float ReturnRegularizationWeight; // 0x2C(0x4)
		float ActionSurrogateWeight; // 0x30(0x4)
		float ActionRegularizationWeight; // 0x34(0x4)
		float ActionEntropyWeight; // 0x38(0x4)
		float GaeLambda; // 0x3C(0x4)
		bool bAdvantageNormalization; // 0x40(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		float MinimumAdvantage; // 0x44(0x4)
		float MaximumAdvantage; // 0x48(0x4)
		bool bUseGradNormMaxClipping; // 0x4C(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		float GradNormMax; // 0x50(0x4)
		int32_t NumberOfStepsToTrimAtStartOfEpisode; // 0x54(0x4)
		int32_t NumberOfStepsToTrimAtEndOfEpisode; // 0x58(0x4)
		int32_t RandomSeed; // 0x5C(0x4)
		float DiscountFactor; // 0x60(0x4)
		ELearningAgentsTrainingDevice Device; // 0x64(0x1)
		bool bUseTensorboard; // 0x65(0x1)
		bool bSaveSnapshots; // 0x66(0x1)
		unsigned char UnknownData05_7[0x1]; // 0x67(0x1) UNKNOWN PROPERTY
	};


	// Struct LearningAgentsTraining.LearningAgentsTrainingGameSettings
	// Size: 0xC (0xC - 0x0)
	struct FLearningAgentsTrainingGameSettings	
	{
	public:
		bool bUseFixedTimeStep; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float FixedTimeStepFrequency; // 0x4(0x4)
		bool bSetMaxPhysicsStepToFixedTimeStep; // 0x8(0x1)
		bool bDisableMaxFPS; // 0x9(0x1)
		bool bDisableVSync; // 0xA(0x1)
		bool bUseUnlitViewportRendering; // 0xB(0x1)
	};


	// Struct LearningAgentsTraining.LearningAgentsRecorderPathSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FLearningAgentsRecorderPathSettings	
	{
	public:
		FDirectoryPath IntermediateRelativePath; // 0x0(0x10)
		FString RecordingsSubdirectory; // 0x10(0x10)
	};


	// Struct LearningAgentsTraining.LearningAgentsRecord
	// Size: 0x38 (0x38 - 0x0)
	struct FLearningAgentsRecord	
	{
	public:
		int32_t StepNum; // 0x0(0x4)
		int32_t ObservationDimNum; // 0x4(0x4)
		int32_t ActionDimNum; // 0x8(0x4)
		int32_t ObservationCompatibilityHash; // 0xC(0x4)
		int32_t ActionCompatibilityHash; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray ObservationData; // 0x18(0x10)
		TArray ActionData; // 0x28(0x10)
	};


	// Struct LearningAgentsTraining.LearningAgentsTrainerProcessSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FLearningAgentsTrainerProcessSettings	
	{
	public:
		FDirectoryPath EditorEngineRelativePath; // 0x0(0x10)
		FString NonEditorEngineRelativePath; // 0x10(0x10)
		FDirectoryPath EditorIntermediateRelativePath; // 0x20(0x10)
		FString NonEditorIntermediateRelativePath; // 0x30(0x10)
	};

}
