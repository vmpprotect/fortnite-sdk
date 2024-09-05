#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayCameras
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GameplayCameras.HasCameraBuildStatus
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UHasCameraBuildStatus : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.HasCameraBuildStatus");
			return ret;
		}
	};


	// Class GameplayCameras.CameraRigProxyAsset
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UCameraRigProxyAsset : public UObject	
	{
	public:
		FGuid Guid; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.CameraRigProxyAsset");
			return ret;
		}
	};


	// Class GameplayCameras.CameraRigProxyTable
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UCameraRigProxyTable : public UObject	
	{
	public:
		TArray<FCameraRigProxyTableEntry> Entries; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.CameraRigProxyTable");
			return ret;
		}
	};


	// Class GameplayCameras.LegacyCameraShake
	// Inherited from UCameraShakeBase -> UObject
	// Size: 0x118 (0x1F0 - 0xD8)
	class ULegacyCameraShake : public UCameraShakeBase	
	{
	public:
		float OscillationDuration; // 0xD8(0x4)
		float OscillationBlendInTime; // 0xDC(0x4)
		float OscillationBlendOutTime; // 0xE0(0x4)
		FROscillator RotOscillation; // 0xE4(0x24)
		FVOscillator LocOscillation; // 0x108(0x24)
		FFOscillator FOVOscillation; // 0x12C(0xC)
		float AnimPlayRate; // 0x138(0x4)
		float AnimScale; // 0x13C(0x4)
		float AnimBlendInTime; // 0x140(0x4)
		float AnimBlendOutTime; // 0x144(0x4)
		float RandomAnimSegmentDuration; // 0x148(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		UCameraAnimationSequence* AnimSequence; // 0x150(0x8)
		bool bRandomAnimSegment : 1; // 0x158:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x159(0x3) UNKNOWN PROPERTY
		float OscillatorTimeRemaining; // 0x15C(0x4)
		unsigned char UnknownData02_6[0x78]; // 0x160(0x78) UNKNOWN PROPERTY
		USequenceCameraShakePattern* SequenceShakePattern; // 0x1D8(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x1E0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.LegacyCameraShake");
			return ret;
		}

		ULegacyCameraShake StartLegacyCameraShakeFromSource(APlayerCameraManager* PlayerCameraManager, UClass* ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace Playspace, FRotator UserPlaySpaceRot); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D3731AC(relative to base address)
		ULegacyCameraShake StartLegacyCameraShake(APlayerCameraManager* PlayerCameraManager, UClass* ShakeClass, float Scale, ECameraShakePlaySpace Playspace, FRotator UserPlaySpaceRot); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D372F2C(relative to base address)
		void ReceiveStopShake(bool bImmediately); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceivePlayShake(float Scale); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ReceiveIsFinished(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74C5A798C(relative to base address)
		void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class GameplayCameras.LegacyCameraShakePattern
	// Inherited from UCameraShakePattern -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULegacyCameraShakePattern : public UCameraShakePattern	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.LegacyCameraShakePattern");
			return ret;
		}
	};


	// Class GameplayCameras.LegacyCameraShakeFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULegacyCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.LegacyCameraShakeFunctionLibrary");
			return ret;
		}

		ULegacyCameraShake Conv_LegacyCameraShake(UCameraShakeBase* CameraShake); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D36FE78(relative to base address)
	};


	// Class GameplayCameras.ObjectTreeGraphObject
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UObjectTreeGraphObject : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.ObjectTreeGraphObject");
			return ret;
		}
	};


	// Class GameplayCameras.ObjectTreeGraphRootObject
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UObjectTreeGraphRootObject : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.ObjectTreeGraphRootObject");
			return ret;
		}
	};


	// Class GameplayCameras.CameraAnimationCameraModifier
	// Inherited from UCameraModifier -> UObject
	// Size: 0x18 (0x60 - 0x48)
	class UCameraAnimationCameraModifier : public UCameraModifier	
	{
	public:
		TArray<FActiveCameraAnimationInfo> ActiveAnimations; // 0x48(0x10)
		uint16_t NextInstanceSerialNumber; // 0x58(0x2)
		unsigned char UnknownData00_7[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.CameraAnimationCameraModifier");
			return ret;
		}

		void StopCameraAnimation(FCameraAnimationHandle& Handle, bool bImmediate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D3737C0(relative to base address)
		void StopAllCameraAnimationsOf(UCameraAnimationSequence* Sequence, bool bImmediate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D3735D4(relative to base address)
		void StopAllCameraAnimations(bool bImmediate); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D373470(relative to base address)
		FCameraAnimationHandle PlayCameraAnimation(UCameraAnimationSequence* Sequence, FCameraAnimationParams Params); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D370BF0(relative to base address)
		bool IsCameraAnimationActive(FCameraAnimationHandle& Handle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D370A70(relative to base address)
		UCameraAnimationCameraModifier GetCameraAnimationCameraModifierFromPlayerController(APlayerController* PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D3701FC(relative to base address)
		UCameraAnimationCameraModifier GetCameraAnimationCameraModifierFromID(UObject* WorldContextObject, int32_t ControllerId); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D370130(relative to base address)
		UCameraAnimationCameraModifier GetCameraAnimationCameraModifier(UObject* WorldContextObject, int32_t PlayerIndex); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D370064(relative to base address)
	};


	// Class GameplayCameras.GameplayCamerasFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameplayCamerasFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.GameplayCamerasFunctionLibrary");
			return ret;
		}

		ECameraShakePlaySpace Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D36FDEC(relative to base address)
		ECameraAnimationPlaySpace Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D36FDEC(relative to base address)
		UCameraAnimationCameraModifier Conv_CameraAnimationCameraModifier(APlayerCameraManager* PlayerCameraManager); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D36FD18(relative to base address)
	};


	// Class GameplayCameras.CameraNode
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UCameraNode : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		bool bIsEnabled; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.CameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.BlendCameraNode
	// Inherited from UCameraNode -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UBlendCameraNode : public UCameraNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.BlendCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.BlendStackCameraNode
	// Inherited from UCameraNode -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UBlendStackCameraNode : public UCameraNode	
	{
	public:
		bool bAutoPop; // 0x38(0x1)
		bool bBlendFirstCameraRig; // 0x39(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.BlendStackCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.BlendStackRootCameraNode
	// Inherited from UCameraNode -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UBlendStackRootCameraNode : public UCameraNode	
	{
	public:
		UBlendCameraNode* Blend; // 0x38(0x8)
		UCameraNode* RootNode; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.BlendStackRootCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.CameraAsset
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UCameraAsset : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		UCameraDirector* CameraDirector; // 0x48(0x8)
		TArray<UCameraRigAsset*> CameraRigs; // 0x50(0x10)
		TArray<UCameraRigTransition*> EnterTransitions; // 0x60(0x10)
		TArray<UCameraRigTransition*> ExitTransitions; // 0x70(0x10)
		ECameraBuildStatus BuildStatus; // 0x80(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.CameraAsset");
			return ret;
		}
	};


	// Class GameplayCameras.CameraDirector
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCameraDirector : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.CameraDirector");
			return ret;
		}
	};


	// Class GameplayCameras.CameraRigInterfaceParameter
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UCameraRigInterfaceParameter : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UCameraNode* Target; // 0x30(0x8)
		FName TargetPropertyName; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FString InterfaceParameterName; // 0x40(0x10)
		UCameraVariableAsset* PrivateVariable; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.CameraRigInterfaceParameter");
			return ret;
		}
	};


	// Class GameplayCameras.CameraRigAsset
	// Inherited from UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UCameraRigAsset : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		UCameraNode* RootNode; // 0x48(0x8)
		FGameplayTagContainer GameplayTags; // 0x50(0x20)
		FCameraRigInterface Interface; // 0x70(0x20)
		TArray<UCameraRigTransition*> EnterTransitions; // 0x90(0x10)
		TArray<UCameraRigTransition*> ExitTransitions; // 0xA0(0x10)
		FCameraRigAllocationInfo AllocationInfo; // 0xB0(0x18)
		ECameraBuildStatus BuildStatus; // 0xC8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.CameraRigAsset");
			return ret;
		}
	};


	// Class GameplayCameras.CameraRigTransitionCondition
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCameraRigTransitionCondition : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.CameraRigTransitionCondition");
			return ret;
		}
	};


	// Class GameplayCameras.CameraRigTransition
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UCameraRigTransition : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray<UCameraRigTransitionCondition*> Conditions; // 0x30(0x10)
		UBlendCameraNode* Blend; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.CameraRigTransition");
			return ret;
		}
	};


	// Class GameplayCameras.CameraVariableAsset
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCameraVariableAsset : public UObject	
	{
	public:
		bool bAutoReset; // 0x28(0x1)
		bool bIsPrivate; // 0x29(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		FCameraVariableID VariableID; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.CameraVariableAsset");
			return ret;
		}
	};


	// Class GameplayCameras.BooleanCameraVariable
	// Inherited from UCameraVariableAsset -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UBooleanCameraVariable : public UCameraVariableAsset	
	{
	public:
		bool bDefaultValue; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.BooleanCameraVariable");
			return ret;
		}
	};


	// Class GameplayCameras.Integer32CameraVariable
	// Inherited from UCameraVariableAsset -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UInteger32CameraVariable : public UCameraVariableAsset	
	{
	public:
		int32_t DefaultValue; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.Integer32CameraVariable");
			return ret;
		}
	};


	// Class GameplayCameras.FloatCameraVariable
	// Inherited from UCameraVariableAsset -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFloatCameraVariable : public UCameraVariableAsset	
	{
	public:
		float DefaultValue; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.FloatCameraVariable");
			return ret;
		}
	};


	// Class GameplayCameras.DoubleCameraVariable
	// Inherited from UCameraVariableAsset -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UDoubleCameraVariable : public UCameraVariableAsset	
	{
	public:
		double DefaultValue; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.DoubleCameraVariable");
			return ret;
		}
	};


	// Class GameplayCameras.Vector2fCameraVariable
	// Inherited from UCameraVariableAsset -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UVector2fCameraVariable : public UCameraVariableAsset	
	{
	public:
		FVector2f DefaultValue; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.Vector2fCameraVariable");
			return ret;
		}
	};


	// Class GameplayCameras.Vector2dCameraVariable
	// Inherited from UCameraVariableAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UVector2dCameraVariable : public UCameraVariableAsset	
	{
	public:
		FVector2D DefaultValue; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.Vector2dCameraVariable");
			return ret;
		}
	};


	// Class GameplayCameras.Vector3fCameraVariable
	// Inherited from UCameraVariableAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UVector3fCameraVariable : public UCameraVariableAsset	
	{
	public:
		FVector3f DefaultValue; // 0x30(0xC)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.Vector3fCameraVariable");
			return ret;
		}
	};


	// Class GameplayCameras.Vector3dCameraVariable
	// Inherited from UCameraVariableAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UVector3dCameraVariable : public UCameraVariableAsset	
	{
	public:
		FVector3d DefaultValue; // 0x30(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.Vector3dCameraVariable");
			return ret;
		}
	};


	// Class GameplayCameras.Vector4fCameraVariable
	// Inherited from UCameraVariableAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UVector4fCameraVariable : public UCameraVariableAsset	
	{
	public:
		FVector4f DefaultValue; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.Vector4fCameraVariable");
			return ret;
		}
	};


	// Class GameplayCameras.Vector4dCameraVariable
	// Inherited from UCameraVariableAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UVector4dCameraVariable : public UCameraVariableAsset	
	{
	public:
		FVector4d DefaultValue; // 0x30(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.Vector4dCameraVariable");
			return ret;
		}
	};


	// Class GameplayCameras.Rotator3fCameraVariable
	// Inherited from UCameraVariableAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class URotator3fCameraVariable : public UCameraVariableAsset	
	{
	public:
		FRotator3f DefaultValue; // 0x30(0xC)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.Rotator3fCameraVariable");
			return ret;
		}
	};


	// Class GameplayCameras.Rotator3dCameraVariable
	// Inherited from UCameraVariableAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class URotator3dCameraVariable : public UCameraVariableAsset	
	{
	public:
		FRotator3d DefaultValue; // 0x30(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.Rotator3dCameraVariable");
			return ret;
		}
	};


	// Class GameplayCameras.Transform3fCameraVariable
	// Inherited from UCameraVariableAsset -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UTransform3fCameraVariable : public UCameraVariableAsset	
	{
	public:
		FTransform3f DefaultValue; // 0x30(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.Transform3fCameraVariable");
			return ret;
		}
	};


	// Class GameplayCameras.Transform3dCameraVariable
	// Inherited from UCameraVariableAsset -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UTransform3dCameraVariable : public UCameraVariableAsset	
	{
	public:
		FTransform3d DefaultValue; // 0x30(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.Transform3dCameraVariable");
			return ret;
		}
	};


	// Class GameplayCameras.CameraVariableCollection
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UCameraVariableCollection : public UObject	
	{
	public:
		TArray<UCameraVariableAsset*> Variables; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.CameraVariableCollection");
			return ret;
		}
	};


	// Class GameplayCameras.RootCameraNode
	// Inherited from UCameraNode -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class URootCameraNode : public UCameraNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.RootCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.DefaultRootCameraNode
	// Inherited from URootCameraNode -> UCameraNode -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UDefaultRootCameraNode : public URootCameraNode	
	{
	public:
		UBlendStackCameraNode* BaseLayer; // 0x38(0x8)
		UBlendStackCameraNode* MainLayer; // 0x40(0x8)
		UBlendStackCameraNode* GlobalLayer; // 0x48(0x8)
		UBlendStackCameraNode* VisualLayer; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.DefaultRootCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.BlueprintCameraDirectorEvaluator
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UBlueprintCameraDirectorEvaluator : public UObject	
	{
	public:
		FBlueprintCameraDirectorEvaluationResult CurrentResult; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.BlueprintCameraDirectorEvaluator");
			return ret;
		}

		void RunCameraDirector(FBlueprintCameraDirectorEvaluationParams& Params); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActivateCameraRig(UCameraRigProxyAsset* CameraRigProxy); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D36F9EC(relative to base address)
	};


	// Class GameplayCameras.BlueprintCameraDirector
	// Inherited from UCameraDirector -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UBlueprintCameraDirector : public UCameraDirector	
	{
	public:
		UClass* CameraDirectorEvaluatorClass; // 0x28(0x8)
		UCameraRigProxyTable* CameraRigProxyTable; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.BlueprintCameraDirector");
			return ret;
		}
	};


	// Class GameplayCameras.PriorityQueueCameraDirector
	// Inherited from UCameraDirector -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPriorityQueueCameraDirector : public UCameraDirector	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.PriorityQueueCameraDirector");
			return ret;
		}
	};


	// Class GameplayCameras.SingleCameraDirector
	// Inherited from UCameraDirector -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class USingleCameraDirector : public UCameraDirector	
	{
	public:
		UCameraRigAsset* CameraRig; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.SingleCameraDirector");
			return ret;
		}
	};


	// Class GameplayCameras.ActivateCameraRigFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UActivateCameraRigFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.ActivateCameraRigFunctions");
			return ret;
		}

		void ActivateVisualCameraRig(UObject* WorldContextObject, APlayerController* PlayerController, UCameraRigAsset* CameraRig); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D36FC1C(relative to base address)
		void ActivateGlobalCameraRig(UObject* WorldContextObject, APlayerController* PlayerController, UCameraRigAsset* CameraRig); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D36FB20(relative to base address)
		void ActivateCameraRig(UObject* WorldContextObject, APlayerController* PlayerController, UCameraRigAsset* CameraRig, ECameraRigLayer EvaluationLayer); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D36F8B4(relative to base address)
		void ActivateBaseCameraRig(UObject* WorldContextObject, APlayerController* PlayerController, UCameraRigAsset* CameraRig); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D36F738(relative to base address)
	};


	// Class GameplayCameras.CameraEvaluationResultInterop
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCameraEvaluationResultInterop : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.CameraEvaluationResultInterop");
			return ret;
		}

		void SetVector4CameraVariable(UVector4dCameraVariable* InVariableAsset, FVector4& InValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D372B98(relative to base address)
		void SetVector3CameraVariable(UVector3dCameraVariable* InVariableAsset, FVector& InValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D3727E8(relative to base address)
		void SetVector2CameraVariable(UVector2dCameraVariable* InVariableAsset, FVector2D& InValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D372494(relative to base address)
		void SetTransformCameraVariable(UTransform3dCameraVariable* InVariableAsset, FTransform& InValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D372030(relative to base address)
		void SetRotatorCameraVariable(URotator3dCameraVariable* InVariableAsset, FRotator& InValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D371CBC(relative to base address)
		void SetInteger32CameraVariable(UInteger32CameraVariable* InVariableAsset, int32_t InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D3719AC(relative to base address)
		void SetFloatCameraVariable(UFloatCameraVariable* InVariableAsset, float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D371738(relative to base address)
		void SetDoubleCameraVariable(UDoubleCameraVariable* InVariableAsset, double InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D3714C0(relative to base address)
		void SetCameraPose(FCameraPose& InCameraPose); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D3713E4(relative to base address)
		void SetBooleanCameraVariable(UBooleanCameraVariable* InVariableAsset, bool InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D3710C4(relative to base address)
		FVector4 GetVector4CameraVariable(UVector4dCameraVariable* InVariableAsset); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D370984(relative to base address)
		FVector GetVector3CameraVariable(UVector3dCameraVariable* InVariableAsset); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D370898(relative to base address)
		FVector2D GetVector2CameraVariable(UVector2dCameraVariable* InVariableAsset); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D3707BC(relative to base address)
		FTransform GetTransformCameraVariable(UTransform3dCameraVariable* InVariableAsset); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D3706EC(relative to base address)
		FRotator GetRotatorCameraVariable(URotator3dCameraVariable* InVariableAsset); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D370600(relative to base address)
		int32_t GetInteger32CameraVariable(UInteger32CameraVariable* InVariableAsset); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D370524(relative to base address)
		float GetFloatCameraVariable(UFloatCameraVariable* InVariableAsset); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D37042C(relative to base address)
		double GetDoubleCameraVariable(UDoubleCameraVariable* InVariableAsset); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D37034C(relative to base address)
		FCameraPose GetCameraPose(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D37027C(relative to base address)
		bool GetBooleanCameraVariable(UBooleanCameraVariable* InVariableAsset); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D36FF88(relative to base address)
	};


	// Class GameplayCameras.CameraRigParameterInterop
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCameraRigParameterInterop : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.CameraRigParameterInterop");
			return ret;
		}

		void SetVector4Parameter(UCameraEvaluationResultInterop* ResultInterop, UCameraRigAsset* CameraRig, FString ParameterName, FVector4 ParameterValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D372D48(relative to base address)
		void SetVector3Parameter(UCameraEvaluationResultInterop* ResultInterop, UCameraRigAsset* CameraRig, FString ParameterName, FVector ParameterValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D3729C4(relative to base address)
		void SetVector2Parameter(UCameraEvaluationResultInterop* ResultInterop, UCameraRigAsset* CameraRig, FString ParameterName, FVector2D ParameterValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D372620(relative to base address)
		void SetTransformParameter(UCameraEvaluationResultInterop* ResultInterop, UCameraRigAsset* CameraRig, FString ParameterName, FTransform ParameterValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D372218(relative to base address)
		void SetRotatorParameter(UCameraEvaluationResultInterop* ResultInterop, UCameraRigAsset* CameraRig, FString ParameterName, FRotator ParameterValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D371E5C(relative to base address)
		void SetIntegerParameter(UCameraEvaluationResultInterop* ResultInterop, UCameraRigAsset* CameraRig, FString ParameterName, int32_t ParameterValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D371B14(relative to base address)
		void SetFloatParameter(UCameraEvaluationResultInterop* ResultInterop, UCameraRigAsset* CameraRig, FString ParameterName, double ParameterValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D37185C(relative to base address)
		void SetDoubleParameter(UCameraEvaluationResultInterop* ResultInterop, UCameraRigAsset* CameraRig, FString ParameterName, double ParameterValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D3715E8(relative to base address)
		void SetBooleanParameter(UCameraEvaluationResultInterop* ResultInterop, UCameraRigAsset* CameraRig, FString ParameterName, bool bParameterValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D371230(relative to base address)
	};


	// Class GameplayCameras.GameplayCameraActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AGameplayCameraActor : public AActor	
	{
	public:
		UGameplayCameraComponent* CameraComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.GameplayCameraActor");
			return ret;
		}

		UGameplayCameraComponent GetCameraComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFEA8(relative to base address)
	};


	// Class GameplayCameras.GameplayCameraComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x250 - 0x220)
	class UGameplayCameraComponent : public USceneComponent	
	{
	public:
		UCameraAsset* Camera; // 0x220(0x8)
		TEnumAsByte<EAutoReceiveInput> AutoActivateForPlayer; // 0x228(0x1)
		unsigned char UnknownData00_6[0x17]; // 0x229(0x17) UNKNOWN PROPERTY
		UCameraEvaluationResultInterop* InitialResultInterop; // 0x240(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x248(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.GameplayCameraComponent");
			return ret;
		}

		UCameraEvaluationResultInterop GetInitialResult(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D37050C(relative to base address)
		void DeactivateCamera(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D36FEF4(relative to base address)
		void ActivateCamera(int32_t PlayerIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D36F834(relative to base address)
	};


	// Class GameplayCameras.GameplayCameraSystemActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AGameplayCameraSystemActor : public AActor	
	{
	public:
		UGameplayCameraSystemComponent* CameraSystemComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.GameplayCameraSystemActor");
			return ret;
		}

		UGameplayCameraSystemComponent GetCameraSystemComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFEA8(relative to base address)
	};


	// Class GameplayCameras.GameplayCameraSystemComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x20 (0x240 - 0x220)
	class UGameplayCameraSystemComponent : public USceneComponent	
	{
	public:
		TEnumAsByte<EAutoReceiveInput> AutoActivateForPlayer; // 0x220(0x1)
		unsigned char UnknownData00_7[0x1F]; // 0x221(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.GameplayCameraSystemComponent");
			return ret;
		}

		void DeactivateCameraSystem(AActor* NextViewTarget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D36FF08(relative to base address)
		void ActivateCameraSystem(int32_t PlayerIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D36FAA0(relative to base address)
	};


	// Class GameplayCameras.GameplayCamerasSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UGameplayCamerasSubsystem : public UWorldSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.GameplayCamerasSubsystem");
			return ret;
		}

		void StopCameraAnimation(APlayerController* PlayerController, FCameraAnimationHandle& Handle, bool bImmediate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D373920(relative to base address)
		void StopAllCameraAnimationsOf(APlayerController* PlayerController, UCameraAnimationSequence* Sequence, bool bImmediate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D37369C(relative to base address)
		void StopAllCameraAnimations(APlayerController* PlayerController, bool bImmediate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D3734F4(relative to base address)
		FCameraAnimationHandle PlayCameraAnimation(APlayerController* PlayerController, UCameraAnimationSequence* Sequence, FCameraAnimationParams Params); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D370F00(relative to base address)
		bool IsCameraAnimationActive(APlayerController* PlayerController, FCameraAnimationHandle& Handle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D370B0C(relative to base address)
	};


	// Class GameplayCameras.AttachToPlayerPawnCameraNode
	// Inherited from UCameraNode -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UAttachToPlayerPawnCameraNode : public UCameraNode	
	{
	public:
		FBooleanCameraParameter AttachToLocation; // 0x38(0x10)
		FBooleanCameraParameter AttachToRotation; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.AttachToPlayerPawnCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.SimpleBlendCameraNode
	// Inherited from UBlendCameraNode -> UCameraNode -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class USimpleBlendCameraNode : public UBlendCameraNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.SimpleBlendCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.SimpleFixedTimeBlendCameraNode
	// Inherited from USimpleBlendCameraNode -> UBlendCameraNode -> UCameraNode -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class USimpleFixedTimeBlendCameraNode : public USimpleBlendCameraNode	
	{
	public:
		float BlendTime; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.SimpleFixedTimeBlendCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.LinearBlendCameraNode
	// Inherited from USimpleFixedTimeBlendCameraNode -> USimpleBlendCameraNode -> UBlendCameraNode -> UCameraNode -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class ULinearBlendCameraNode : public USimpleFixedTimeBlendCameraNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.LinearBlendCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.PopBlendCameraNode
	// Inherited from UBlendCameraNode -> UCameraNode -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UPopBlendCameraNode : public UBlendCameraNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.PopBlendCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.SmoothBlendCameraNode
	// Inherited from USimpleFixedTimeBlendCameraNode -> USimpleBlendCameraNode -> UBlendCameraNode -> UCameraNode -> UObject
	// Size: 0x8 (0x48 - 0x40)
	class USmoothBlendCameraNode : public USimpleFixedTimeBlendCameraNode	
	{
	public:
		ESmoothCameraBlendType BlendType; // 0x40(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.SmoothBlendCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.OcclusionMaterialCameraNode
	// Inherited from UCameraNode -> UObject
	// Size: 0x40 (0x78 - 0x38)
	class UOcclusionMaterialCameraNode : public UCameraNode	
	{
	public:
		UMaterialInterface* OcclusionTransparencyMaterial; // 0x38(0x8)
		FFloatCameraParameter OcclusionSphereRadius; // 0x40(0x10)
		TEnumAsByte<ECollisionChannel> OcclusionChannel; // 0x50(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		FVector3dCameraParameter OcclusionTargetOffset; // 0x58(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.OcclusionMaterialCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.ArrayCameraNode
	// Inherited from UCameraNode -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UArrayCameraNode : public UCameraNode	
	{
	public:
		TArray<UCameraNode*> Children; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.ArrayCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.BoomArmCameraNode
	// Inherited from UCameraNode -> UObject
	// Size: 0x18 (0x50 - 0x38)
	class UBoomArmCameraNode : public UCameraNode	
	{
	public:
		FVector3d BoomOffset; // 0x38(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.BoomArmCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.DampenPositionCameraNode
	// Inherited from UCameraNode -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UDampenPositionCameraNode : public UCameraNode	
	{
	public:
		float ForwardDampingFactor; // 0x38(0x4)
		float LateralDampingFactor; // 0x3C(0x4)
		float VerticalDampingFactor; // 0x40(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.DampenPositionCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.FieldOfViewCameraNode
	// Inherited from UCameraNode -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UFieldOfViewCameraNode : public UCameraNode	
	{
	public:
		FFloatCameraParameter FieldOfView; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.FieldOfViewCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.LensParametersCameraNode
	// Inherited from UCameraNode -> UObject
	// Size: 0x50 (0x88 - 0x38)
	class ULensParametersCameraNode : public UCameraNode	
	{
	public:
		FFloatCameraParameter SensorWidth; // 0x38(0x10)
		FFloatCameraParameter SensorHeight; // 0x48(0x10)
		FFloatCameraParameter FocusDistance; // 0x58(0x10)
		FFloatCameraParameter FocalLength; // 0x68(0x10)
		FFloatCameraParameter Aperture; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.LensParametersCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.OffsetCameraNode
	// Inherited from UCameraNode -> UObject
	// Size: 0x48 (0x80 - 0x38)
	class UOffsetCameraNode : public UCameraNode	
	{
	public:
		FVector3dCameraParameter TranslationOffset; // 0x38(0x20)
		FRotator3dCameraParameter RotationOffset; // 0x58(0x20)
		ECameraNodeSpace OffsetSpace; // 0x78(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.OffsetCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.BaseFramingCameraNode
	// Inherited from UCameraNode -> UObject
	// Size: 0xD0 (0x108 - 0x38)
	class UBaseFramingCameraNode : public UCameraNode	
	{
	public:
		FDoubleCameraParameter HorizontalFraming; // 0x38(0x10)
		FDoubleCameraParameter VerticalFraming; // 0x48(0x10)
		FFloatCameraParameter ReframeDampingFactor; // 0x58(0x10)
		FFloatCameraParameter LowReframeDampingFactor; // 0x68(0x10)
		FFloatCameraParameter ReframeUnlockRadius; // 0x78(0x10)
		FCameraFramingZone DeadZone; // 0x88(0x40)
		FCameraFramingZone SoftZone; // 0xC8(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.BaseFramingCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.DollyFramingCameraNode
	// Inherited from UBaseFramingCameraNode -> UCameraNode -> UObject
	// Size: 0x20 (0x128 - 0x108)
	class UDollyFramingCameraNode : public UBaseFramingCameraNode	
	{
	public:
		FBooleanCameraParameter CanMoveLaterally; // 0x108(0x10)
		FBooleanCameraParameter CanMoveVertically; // 0x118(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.DollyFramingCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.PanningFramingCameraNode
	// Inherited from UBaseFramingCameraNode -> UCameraNode -> UObject
	// Size: 0x20 (0x128 - 0x108)
	class UPanningFramingCameraNode : public UBaseFramingCameraNode	
	{
	public:
		FBooleanCameraParameter CanPanLaterally; // 0x108(0x10)
		FBooleanCameraParameter CanPanVertically; // 0x118(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.PanningFramingCameraNode");
			return ret;
		}
	};


	// Class GameplayCameras.CompositeCameraShakePattern
	// Inherited from UCameraShakePattern -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UCompositeCameraShakePattern : public UCameraShakePattern	
	{
	public:
		TArray<UCameraShakePattern*> ChildPatterns; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.CompositeCameraShakePattern");
			return ret;
		}
	};


	// Class GameplayCameras.DefaultCameraShakeBase
	// Inherited from UCameraShakeBase -> UObject
	// Size: 0x8 (0xE0 - 0xD8)
	class UDefaultCameraShakeBase : public UCameraShakeBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.DefaultCameraShakeBase");
			return ret;
		}
	};


	// Class GameplayCameras.SimpleCameraShakePattern
	// Inherited from UCameraShakePattern -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class USimpleCameraShakePattern : public UCameraShakePattern	
	{
	public:
		float duration; // 0x28(0x4)
		float BlendInTime; // 0x2C(0x4)
		float BlendOutTime; // 0x30(0x4)
		unsigned char UnknownData00_7[0x24]; // 0x34(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.SimpleCameraShakePattern");
			return ret;
		}
	};


	// Class GameplayCameras.PerlinNoiseCameraShakePattern
	// Inherited from USimpleCameraShakePattern -> UCameraShakePattern -> UObject
	// Size: 0x80 (0xD8 - 0x58)
	class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern	
	{
	public:
		float LocationAmplitudeMultiplier; // 0x58(0x4)
		float LocationFrequencyMultiplier; // 0x5C(0x4)
		FPerlinNoiseShaker X; // 0x60(0x8)
		FPerlinNoiseShaker Y; // 0x68(0x8)
		FPerlinNoiseShaker Z; // 0x70(0x8)
		float RotationAmplitudeMultiplier; // 0x78(0x4)
		float RotationFrequencyMultiplier; // 0x7C(0x4)
		FPerlinNoiseShaker pitch; // 0x80(0x8)
		FPerlinNoiseShaker Yaw; // 0x88(0x8)
		FPerlinNoiseShaker Roll; // 0x90(0x8)
		FPerlinNoiseShaker FOV; // 0x98(0x8)
		unsigned char UnknownData00_7[0x38]; // 0xA0(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.PerlinNoiseCameraShakePattern");
			return ret;
		}
	};


	// Class GameplayCameras.WaveOscillatorCameraShakePattern
	// Inherited from USimpleCameraShakePattern -> UCameraShakePattern -> UObject
	// Size: 0xA0 (0xF8 - 0x58)
	class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern	
	{
	public:
		float LocationAmplitudeMultiplier; // 0x58(0x4)
		float LocationFrequencyMultiplier; // 0x5C(0x4)
		FWaveOscillator X; // 0x60(0xC)
		FWaveOscillator Y; // 0x6C(0xC)
		FWaveOscillator Z; // 0x78(0xC)
		float RotationAmplitudeMultiplier; // 0x84(0x4)
		float RotationFrequencyMultiplier; // 0x88(0x4)
		FWaveOscillator pitch; // 0x8C(0xC)
		FWaveOscillator Yaw; // 0x98(0xC)
		FWaveOscillator Roll; // 0xA4(0xC)
		FWaveOscillator FOV; // 0xB0(0xC)
		unsigned char UnknownData00_7[0x3C]; // 0xBC(0x3C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.WaveOscillatorCameraShakePattern");
			return ret;
		}
	};


	// Class GameplayCameras.TestCameraShake
	// Inherited from UCameraShakeBase -> UObject
	// Size: 0x8 (0xE0 - 0xD8)
	class UTestCameraShake : public UCameraShakeBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.TestCameraShake");
			return ret;
		}
	};


	// Class GameplayCameras.ConstantCameraShakePattern
	// Inherited from USimpleCameraShakePattern -> UCameraShakePattern -> UObject
	// Size: 0x30 (0x88 - 0x58)
	class UConstantCameraShakePattern : public USimpleCameraShakePattern	
	{
	public:
		FVector LocationOffset; // 0x58(0x18)
		FRotator RotationOffset; // 0x70(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.ConstantCameraShakePattern");
			return ret;
		}
	};


	// Class GameplayCameras.PreviousGameplayTagTransitionCondition
	// Inherited from UCameraRigTransitionCondition -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UPreviousGameplayTagTransitionCondition : public UCameraRigTransitionCondition	
	{
	public:
		FGameplayTagQuery GameplayTagQuery; // 0x30(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.PreviousGameplayTagTransitionCondition");
			return ret;
		}
	};


	// Class GameplayCameras.NextGameplayTagTransitionCondition
	// Inherited from UCameraRigTransitionCondition -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UNextGameplayTagTransitionCondition : public UCameraRigTransitionCondition	
	{
	public:
		FGameplayTagQuery GameplayTagQuery; // 0x30(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayCameras.NextGameplayTagTransitionCondition");
			return ret;
		}
	};

}
