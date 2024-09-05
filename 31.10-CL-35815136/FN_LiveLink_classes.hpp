#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LiveLink
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class LiveLink.LiveLinkCustomTimeStep
	// Inherited from UGenlockedCustomTimeStep -> UFixedFrameRateCustomTimeStep -> UEngineCustomTimeStep -> UObject
	// Size: 0x90 (0xC0 - 0x30)
	class ULiveLinkCustomTimeStep : public UGenlockedCustomTimeStep	
	{
	public:
		FFrameRate LiveLinkDataRate; // 0x30(0x8)
		FLiveLinkSubjectKey SubjectKey; // 0x38(0x14)
		bool bLockStepMode; // 0x4C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		uint32_t FrameRateDivider; // 0x50(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		double TimeoutInSeconds; // 0x58(0x8)
		unsigned char UnknownData02_7[0x60]; // 0x60(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkCustomTimeStep");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
	// Inherited from ULiveLinkFrameInterpolationProcessor -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor	
	{
	public:
		bool bInterpolatePropertyValues; // 0x28(0x1)
		unsigned char UnknownData00_7[0x17]; // 0x29(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkBasicFrameInterpolationProcessor");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
	// Inherited from ULiveLinkBasicFrameInterpolationProcessor -> ULiveLinkFrameInterpolationProcessor -> UObject
	// Size: 0x10 (0x50 - 0x40)
	class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkAnimationFrameInterpolationProcessor");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkAnimationVirtualSubject
	// Inherited from ULiveLinkVirtualSubject -> UObject
	// Size: 0xD0 (0x228 - 0x158)
	class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		TArray<FLiveLinkVirtualSubjectBoneAttachment> Attachments; // 0x160(0x10)
		EBoneTransformResolution LocationBehavior; // 0x170(0x4)
		EBoneTransformResolution RotationBehavior; // 0x174(0x4)
		bool bAppendSubjectNameToBones; // 0x178(0x1)
		unsigned char UnknownData01_7[0xAF]; // 0x179(0xAF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkAnimationVirtualSubject");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkBlueprintLibrary");
			return ret;
		}

		void TransformNames(FSubjectFrameHandle& SubjectFrameHandle, TArray<FName>& TransformNames); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FCA0C4(relative to base address)
		void TransformName(FLiveLinkTransform& LiveLinkTransform, FName& Name); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC9F30(relative to base address)
		void SetLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bEnabled); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751FC9D50(relative to base address)
		bool RemoveSource(FLiveLinkSourceHandle& SourceHandle); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FC9C44(relative to base address)
		void ParentBoneSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC9A28(relative to base address)
		int32_t NumberOfTransforms(FSubjectFrameHandle& SubjectFrameHandle); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC9918(relative to base address)
		bool IsSpecificLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bForThisFrame); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751FC9728(relative to base address)
		bool IsSourceStillValid(FLiveLinkSourceHandle& SourceHandle); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FC9608(relative to base address)
		bool IsLiveLinkSubjectEnabled(FLiveLinkSubjectName SubjectName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751FC94FC(relative to base address)
		bool HasParent(FLiveLinkTransform& LiveLinkTransform); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC93D4(relative to base address)
		void GetTransformByName(FSubjectFrameHandle& SubjectFrameHandle, FName TransformName, FLiveLinkTransform& LiveLinkTransform); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC915C(relative to base address)
		void GetTransformByIndex(FSubjectFrameHandle& SubjectFrameHandle, int32_t TransformIndex, FLiveLinkTransform& LiveLinkTransform); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC8EE4(relative to base address)
		UClass GetSpecificLiveLinkSubjectRole(FLiveLinkSubjectKey SubjectKey); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751FC87D4(relative to base address)
		FText GetSourceTypeFromGuid(FGuid SourceGuid); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751FC8698(relative to base address)
		FText GetSourceType(FLiveLinkSourceHandle& SourceHandle); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FC8554(relative to base address)
		FText GetSourceStatus(FLiveLinkSourceHandle& SourceHandle); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FC8410(relative to base address)
		FText GetSourceMachineName(FLiveLinkSourceHandle& SourceHandle); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FC82CC(relative to base address)
		void GetRootTransform(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkTransform& LiveLinkTransform); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC808C(relative to base address)
		bool GetPropertyValue(FLiveLinkBasicBlueprintData& BasicData, FName PropertyName, float& Value); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC7E80(relative to base address)
		void GetParent(FLiveLinkTransform& LiveLinkTransform, FLiveLinkTransform& Parent); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC7C70(relative to base address)
		void GetMetadata(FSubjectFrameHandle& SubjectFrameHandle, FSubjectMetadata& MetaData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC7AA4(relative to base address)
		ELiveLinkSubjectState GetLiveLinkSubjectState(FLiveLinkSubjectName SubjectName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751FC7844(relative to base address)
		TArray GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751FC7950(relative to base address)
		UClass GetLiveLinkSubjectRole(FLiveLinkSubjectName SubjectName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751FC7728(relative to base address)
		TArray GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751FC7670(relative to base address)
		void GetCurves(FSubjectFrameHandle& SubjectFrameHandle, TMap<FName, float>& Curves); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC7490(relative to base address)
		void GetChildren(FLiveLinkTransform& LiveLinkTransform, TArray<FLiveLinkTransform>& Children); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC7314(relative to base address)
		void GetBasicData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkBasicBlueprintData& BasicBlueprintData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC714C(relative to base address)
		bool GetAnimationStaticData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkSkeletonStaticData& AnimationStaticData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC6C1C(relative to base address)
		bool GetAnimationFrameData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkAnimationFrameData& AnimationFrameData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC6A68(relative to base address)
		bool EvaluateLiveLinkFrameWithSpecificRole(FLiveLinkSubjectName SubjectName, UClass* Role, FLiveLinkBaseBlueprintData& OutBlueprintData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FC675C(relative to base address)
		bool EvaluateLiveLinkFrameAtWorldTimeOffset(FLiveLinkSubjectName SubjectName, UClass* Role, float WorldTimeOffset, FLiveLinkBaseBlueprintData& OutBlueprintData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FC6374(relative to base address)
		bool EvaluateLiveLinkFrameAtSceneTime(FLiveLinkSubjectName SubjectName, UClass* Role, Ftimecode SceneTime, FLiveLinkBaseBlueprintData& OutBlueprintData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FC5F98(relative to base address)
		bool EvaluateLiveLinkFrame(FLiveLinkSubjectRepresentation SubjectRepresentation, FLiveLinkBaseBlueprintData& OutBlueprintData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FC5D48(relative to base address)
		void ComponentSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC5928(relative to base address)
		int32_t ChildCount(FLiveLinkTransform& LiveLinkTransform); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751FC57DC(relative to base address)
	};


	// Class LiveLink.LiveLinkComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class ULiveLinkComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnLiveLinkUpdated; // 0xA0(0x10)
		unsigned char UnknownData00_7[0x10]; // 0xB0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkComponent");
			return ret;
		}

		void GetSubjectDataAtWorldTime(FName SubjectName, float WorldTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FC8CF4(relative to base address)
		void GetSubjectDataAtSceneTime(FName SubjectName, Ftimecode& SceneTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FC8AB4(relative to base address)
		void GetSubjectData(FName SubjectName, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FC8910(relative to base address)
		void GetAvailableSubjectNames(TArray<FName>& SubjectNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FC7070(relative to base address)
	};


	// Class LiveLink.LiveLinkDrivenComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class ULiveLinkDrivenComponent : public UActorComponent	
	{
	public:
		FLiveLinkSubjectName SubjectName; // 0xA0(0x4)
		FName ActorTransformBone; // 0xA4(0x4)
		bool bModifyActorTransform; // 0xA8(0x1)
		bool bSetRelativeLocation; // 0xA9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkDrivenComponent");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkMessageBusFinder
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class ULiveLinkMessageBusFinder : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0x28(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkMessageBusFinder");
			return ret;
		}

		void GetAvailableProviders(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float duration, TArray<FProviderPollResult>& AvailableProviders); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FC6DE0(relative to base address)
		ULiveLinkMessageBusFinder ConstructMessageBusFinder(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751FC5D1C(relative to base address)
		void ConnectToProvider(FProviderPollResult& Provider, FLiveLinkSourceHandle& SourceHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FC5B44(relative to base address)
	};


	// Class LiveLink.LiveLinkMessageBusSourceFactory
	// Inherited from ULiveLinkSourceFactory -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkMessageBusSourceFactory");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkMessageBusSourceSettings
	// Inherited from ULiveLinkSourceSettings -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkMessageBusSourceSettings");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkPreset
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class ULiveLinkPreset : public UObject	
	{
	public:
		TArray<FLiveLinkSourcePreset> Sources; // 0x28(0x10)
		TArray<FLiveLinkSubjectPreset> Subjects; // 0x38(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkPreset");
			return ret;
		}

		void BuildFromClient(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751FC57C8(relative to base address)
		void ApplyToClientLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751FC5658(relative to base address)
		bool ApplyToClient(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751FC5634(relative to base address)
		bool AddToClient(bool bRecreatePresets); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751FC55A4(relative to base address)
	};


	// Class LiveLink.LiveLinkUserSettings
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class ULiveLinkUserSettings : public UObject	
	{
	public:
		FDirectoryPath PresetSaveDir; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkUserSettings");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkSettings
	// Inherited from UObject
	// Size: 0xB0 (0xD8 - 0x28)
	class ULiveLinkSettings : public UObject	
	{
	public:
		TArray<FLiveLinkRoleProjectSetting> DefaultRoleSettings; // 0x28(0x10)
		FSoftClassPath DefaultSettingsClass; // 0x38(0x18)
		UClass* FrameInterpolationProcessor; // 0x50(0x8)
		TWeakObjectPtr<ULiveLinkPreset*> DefaultLiveLinkPreset; // 0x58(0x20)
		float ClockOffsetCorrectionStep; // 0x78(0x4)
		ELiveLinkSourceMode DefaultMessageBusSourceMode; // 0x7C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY
		double MessageBusPingRequestFrequency; // 0x80(0x8)
		double MessageBusHeartbeatFrequency; // 0x88(0x8)
		double MessageBusHeartbeatTimeout; // 0x90(0x8)
		double MessageBusTimeBeforeRemovingInactiveSource; // 0x98(0x8)
		bool bPreProcessRebroadcastedFrames; // 0xA0(0x1)
		bool bTranslateRebroadcastedFrames; // 0xA1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xA2(0x6) UNKNOWN PROPERTY
		double TimeWithoutFrameToBeConsiderAsInvalid; // 0xA8(0x8)
		FLinearColor ValidColor; // 0xB0(0x10)
		FLinearColor InvalidColor; // 0xC0(0x10)
		char TextSizeSource; // 0xD0(0x1)
		char TextSizeSubject; // 0xD1(0x1)
		unsigned char UnknownData02_7[0x6]; // 0xD2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkSettings");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkTimecodeProvider
	// Inherited from UTimecodeProvider -> UObject
	// Size: 0x90 (0xC0 - 0x30)
	class ULiveLinkTimecodeProvider : public UTimecodeProvider	
	{
	public:
		FLiveLinkSubjectKey SubjectKey; // 0x30(0x14)
		ELiveLinkTimecodeProviderEvaluationType Evaluation; // 0x44(0x4)
		bool bOverrideFrameRate; // 0x48(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		FFrameRate OverrideFrameRate; // 0x4C(0x8)
		int32_t BufferSize; // 0x54(0x4)
		unsigned char UnknownData01_7[0x68]; // 0x58(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkTimecodeProvider");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkTimeSynchronizationSource
	// Inherited from UTimeSynchronizationSource -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource	
	{
	public:
		FLiveLinkSubjectName SubjectName; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4C]; // 0x34(0x4C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkTimeSynchronizationSource");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
	// Inherited from ULiveLinkSourceSettings -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings	
	{
	public:
		FName SourceName; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkVirtualSubjectSourceSettings");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
	// Inherited from ULiveLinkFramePreProcessor -> UObject
	// Size: 0x48 (0x70 - 0x28)
	class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor	
	{
	public:
		ELiveLinkAxis FrontAxis; // 0x28(0x1)
		ELiveLinkAxis RightAxis; // 0x29(0x1)
		ELiveLinkAxis UpAxis; // 0x2A(0x1)
		bool bUseOffsetPosition; // 0x2B(0x1)
		bool bUseOffsetOrientation; // 0x2C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		FVector OffsetPosition; // 0x30(0x18)
		FRotator OffsetOrientation; // 0x48(0x18)
		unsigned char UnknownData01_7[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
	// Inherited from ULiveLinkTransformAxisSwitchPreProcessor -> ULiveLinkFramePreProcessor -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkAnimationAxisSwitchPreProcessor");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkAnimationRoleToTransform
	// Inherited from ULiveLinkFrameTranslator -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator	
	{
	public:
		FName BoneName; // 0x28(0x4)
		unsigned char UnknownData00_7[0x14]; // 0x2C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkAnimationRoleToTransform");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkTransformRoleToAnimation
	// Inherited from ULiveLinkFrameTranslator -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class ULiveLinkTransformRoleToAnimation : public ULiveLinkFrameTranslator	
	{
	public:
		FName OutputBoneName; // 0x28(0x4)
		unsigned char UnknownData00_7[0x14]; // 0x2C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkTransformRoleToAnimation");
			return ret;
		}
	};


	// Class LiveLink.LiveLinkBlueprintVirtualSubject
	// Inherited from ULiveLinkVirtualSubject -> UObject
	// Size: 0x28 (0x180 - 0x158)
	class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x158(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkBlueprintVirtualSubject");
			return ret;
		}

		bool UpdateVirtualSubjectStaticData_Internal(FLiveLinkBaseStaticData& InStruct); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FCA4A0(relative to base address)
		bool UpdateVirtualSubjectFrameData_Internal(FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751FCA280(relative to base address)
		void OnUpdate(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialize(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
