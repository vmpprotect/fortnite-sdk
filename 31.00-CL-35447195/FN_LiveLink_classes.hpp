#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LiveLink
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData03_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		uint32_t FrameRateDivider; // 0x50(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		double TimeoutInSeconds; // 0x58(0x8)
		unsigned char UnknownData05_7[0x60]; // 0x60(0x60) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x17]; // 0x29(0x17) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		TArray Attachments; // 0x160(0x10)
		EBoneTransformResolution LocationBehavior; // 0x170(0x4)
		EBoneTransformResolution RotationBehavior; // 0x174(0x4)
		bool bAppendSubjectNameToBones; // 0x178(0x1)
		unsigned char UnknownData03_7[0xAF]; // 0x179(0xAF) UNKNOWN PROPERTY

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

		void TransformNames(FSubjectFrameHandle& SubjectFrameHandle, TArray& TransformNames); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB2D20
		void TransformName(FLiveLinkTransform& LiveLinkTransform, FName& Name); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB2C40
		void SetLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bEnabled); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB2B60
		bool RemoveSource(FLiveLinkSourceHandle& SourceHandle); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414EB2A80
		void ParentBoneSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EB29A0
		int32_t NumberOfTransforms(FSubjectFrameHandle& SubjectFrameHandle); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB28C0
		bool IsSpecificLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bForThisFrame); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB27E0
		bool IsSourceStillValid(FLiveLinkSourceHandle& SourceHandle); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414EB2700
		bool IsLiveLinkSubjectEnabled(FLiveLinkSubjectName SubjectName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB2620
		bool HasParent(FLiveLinkTransform& LiveLinkTransform); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB2540
		void GetTransformByName(FSubjectFrameHandle& SubjectFrameHandle, FName TransformName, FLiveLinkTransform& LiveLinkTransform); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB2460
		void GetTransformByIndex(FSubjectFrameHandle& SubjectFrameHandle, int32_t TransformIndex, FLiveLinkTransform& LiveLinkTransform); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB2380
		UClass GetSpecificLiveLinkSubjectRole(FLiveLinkSubjectKey SubjectKey); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB22A0
		FText GetSourceTypeFromGuid(FGuid SourceGuid); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414EB21C0
		FText GetSourceType(FLiveLinkSourceHandle& SourceHandle); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414EB20E0
		FText GetSourceStatus(FLiveLinkSourceHandle& SourceHandle); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414EB2000
		FText GetSourceMachineName(FLiveLinkSourceHandle& SourceHandle); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414EB1F20
		void GetRootTransform(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkTransform& LiveLinkTransform); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB1E40
		bool GetPropertyValue(FLiveLinkBasicBlueprintData& BasicData, FName PropertyName, float& Value); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB1D60
		void GetParent(FLiveLinkTransform& LiveLinkTransform, FLiveLinkTransform& Parent); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB1C80
		void GetMetadata(FSubjectFrameHandle& SubjectFrameHandle, FSubjectMetadata& MetaData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB1BA0
		ELiveLinkSubjectState GetLiveLinkSubjectState(FLiveLinkSubjectName SubjectName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB1AC0
		TArray GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB19E0
		UClass GetLiveLinkSubjectRole(FLiveLinkSubjectName SubjectName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB1900
		TArray GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB1820
		void GetCurves(FSubjectFrameHandle& SubjectFrameHandle, TMap& Curves); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB1740
		void GetChildren(FLiveLinkTransform& LiveLinkTransform, TArray& Children); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB1660
		void GetBasicData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkBasicBlueprintData& BasicBlueprintData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB1580
		bool GetAnimationStaticData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkSkeletonStaticData& AnimationStaticData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB14A0
		bool GetAnimationFrameData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkAnimationFrameData& AnimationFrameData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB13C0
		bool EvaluateLiveLinkFrameWithSpecificRole(FLiveLinkSubjectName SubjectName, UClass Role, FLiveLinkBaseBlueprintData& OutBlueprintData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB12E0
		bool EvaluateLiveLinkFrameAtWorldTimeOffset(FLiveLinkSubjectName SubjectName, UClass Role, float WorldTimeOffset, FLiveLinkBaseBlueprintData& OutBlueprintData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB1200
		bool EvaluateLiveLinkFrameAtSceneTime(FLiveLinkSubjectName SubjectName, UClass Role, Ftimecode SceneTime, FLiveLinkBaseBlueprintData& OutBlueprintData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB1120
		bool EvaluateLiveLinkFrame(FLiveLinkSubjectRepresentation SubjectRepresentation, FLiveLinkBaseBlueprintData& OutBlueprintData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB1040
		void ComponentSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EB0F60
		int32_t ChildCount(FLiveLinkTransform& LiveLinkTransform); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EB0E80
	};


	// Class LiveLink.LiveLinkComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class ULiveLinkComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnLiveLinkUpdated; // 0xA0(0x10)
		unsigned char UnknownData01_7[0x10]; // 0xB0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkComponent");
			return ret;
		}

		void GetSubjectDataAtWorldTime(FName SubjectName, float WorldTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EB30A0
		void GetSubjectDataAtSceneTime(FName SubjectName, Ftimecode& SceneTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EB2FC0
		void GetSubjectData(FName SubjectName, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EB2EE0
		void GetAvailableSubjectNames(TArray& SubjectNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EB2E00
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
		unsigned char UnknownData01_7[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x58]; // 0x28(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkMessageBusFinder");
			return ret;
		}

		void GetAvailableProviders(UObject WorldContextObject, FLatentActionInfo LatentInfo, float duration, TArray& AvailableProviders); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EB3340
		ULiveLinkMessageBusFinder ConstructMessageBusFinder(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB3260
		void ConnectToProvider(FProviderPollResult& Provider, FLiveLinkSourceHandle& SourceHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB3180
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
		TArray Sources; // 0x28(0x10)
		TArray Subjects; // 0x38(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkPreset");
			return ret;
		}

		void BuildFromClient(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB36C0
		void ApplyToClientLatent(UObject WorldContextObject, FLatentActionInfo LatentInfo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB35E0
		bool ApplyToClient(); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF414EB3500
		bool AddToClient(bool bRecreatePresets); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF414EB3420
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
		TArray DefaultRoleSettings; // 0x28(0x10)
		FSoftClassPath DefaultSettingsClass; // 0x38(0x18)
		UClass FrameInterpolationProcessor; // 0x50(0x8)
		TWeakObjectPtr DefaultLiveLinkPreset; // 0x58(0x20)
		float ClockOffsetCorrectionStep; // 0x78(0x4)
		ELiveLinkSourceMode DefaultMessageBusSourceMode; // 0x7C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY
		double MessageBusPingRequestFrequency; // 0x80(0x8)
		double MessageBusHeartbeatFrequency; // 0x88(0x8)
		double MessageBusHeartbeatTimeout; // 0x90(0x8)
		double MessageBusTimeBeforeRemovingInactiveSource; // 0x98(0x8)
		bool bPreProcessRebroadcastedFrames; // 0xA0(0x1)
		bool bTranslateRebroadcastedFrames; // 0xA1(0x1)
		unsigned char UnknownData04_6[0x6]; // 0xA2(0x6) UNKNOWN PROPERTY
		double TimeWithoutFrameToBeConsiderAsInvalid; // 0xA8(0x8)
		FLinearColor ValidColor; // 0xB0(0x10)
		FLinearColor InvalidColor; // 0xC0(0x10)
		char TextSizeSource; // 0xD0(0x1)
		char TextSizeSubject; // 0xD1(0x1)
		unsigned char UnknownData05_7[0x6]; // 0xD2(0x6) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_6[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		FFrameRate OverrideFrameRate; // 0x4C(0x8)
		int32_t BufferSize; // 0x54(0x4)
		unsigned char UnknownData03_7[0x68]; // 0x58(0x68) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x4C]; // 0x34(0x4C) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		FVector OffsetPosition; // 0x30(0x18)
		FRotator OffsetOrientation; // 0x48(0x18)
		unsigned char UnknownData03_7[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x14]; // 0x2C(0x14) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x14]; // 0x2C(0x14) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x28]; // 0x158(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLink.LiveLinkBlueprintVirtualSubject");
			return ret;
		}

		bool UpdateVirtualSubjectStaticData_Internal(FLiveLinkBaseStaticData& InStruct); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EB3A40
		bool UpdateVirtualSubjectFrameData_Internal(FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EB3960
		void OnUpdate(); // Flags: Event|Public|BlueprintEvent 0x7FF414EB3880
		void OnInitialize(); // Flags: Event|Public|BlueprintEvent 0x7FF414EB37A0
	};

}
