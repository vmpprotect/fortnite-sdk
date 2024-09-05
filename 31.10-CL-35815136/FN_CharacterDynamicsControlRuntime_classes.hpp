#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CharacterDynamicsControlRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCharacterDynamicsControlBPLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary");
			return ret;
		}

		FRigidBodyWithControlReference UpdateRigidBodyWithControlNodeParametersFromAsset(FAnimUpdateContext& UpdateContext, FRigidBodyWithControlReference& RigidBodyWithControl, UFortCharacterDynamicsParameters* Parameters); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750743440(relative to base address)
		FRigidBodyWithControlReference UpdateRigidBodyWithControlNodeParametersForLayer(FAnimUpdateContext& UpdateContext, FRigidBodyWithControlReference& RigidBodyWithControl, FName StateLogicLayerName, UFortCharacterDynamicsParameters* Parameters); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750743164(relative to base address)
		FRigidBodyWithControlReference UpdateRigidBodyWithControlNodeParameters(FAnimUpdateContext& UpdateContext, FRigidBodyWithControlReference& RigidBodyWithControl); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750742FEC(relative to base address)
		void SetProperty(UFortAnimInstance* InAnimInstance, FName InPropertyName, bool InValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750742E30(relative to base address)
		void RequestFullBodyPBALayer(UFortAnimInstance* InAnimInstance, FName ReasonForRequest); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750742D80(relative to base address)
		void RemoveCharacterDynamicsControlLogicLayer(UFortAnimInstance* InAnimInstance, FName LayerName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750742C3C(relative to base address)
		bool HasCharacterDynamicsControlLogicLayer(UFortAnimInstance* InAnimInstance, FName LayerName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750742A24(relative to base address)
		void GravityOverrideStateParameterAssetFunction(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, float GameTimeInSeconds, bool DebugDraw, FName DebugJointName, FName StateLogicLayerName, UFortCharacterDynamicsParameters* Parameters, FVector& OutGravityOverride, FName& OutCurrentState, FFortGravityOverrideParameters& OutGravityOverrideParameters, FFortRigidBodyAnimNodeParameters& OutRigidBodyAnimNodeParameters); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750742560(relative to base address)
		void GravityOverrideStateFunction(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, float GameTimeInSeconds, FFortGravityOverrideParameterSet GravityOverrideParameters, FFortRigidBodyAnimNodeParameterSet RigidBodyAnimNodeParameters, bool DebugDraw, FName DebugJointName, FName StateLogicLayerName, FVector& OutGravityOverride, FName& OutCurrentState, FFortGravityOverrideParameters& OutGravityOverrideParameters, FFortRigidBodyAnimNodeParameters& OutRigidBodyAnimNodeParameters); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750741E5C(relative to base address)
		bool GetPropertyForLayer(UFortAnimInstance* InAnimInstance, FName InStateLogicLayerName, FName InPropertyName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750741BDC(relative to base address)
		bool GetProperty(UFortAnimInstance* InAnimInstance, FName InPropertyName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750741A78(relative to base address)
		FName GetCharacterStateForLayer(UFortAnimInstance* InAnimInstance, FName StateLogicLayerName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7507419AC(relative to base address)
		FName GetCharacterState(UFortAnimInstance* InAnimInstance); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750741924(relative to base address)
		void ClothControllerParameterAssetFunction(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, FName ClothingAssetName, FClothCoreSettings& ClothCoreSettings, FVector& ClothUpAxis, float OnGroundMovingSpeedLimit, float OnGroundMovingAngularVelMax, float OnGroundMovingFictitiousVelMax, float LinVelScaleFwdBwdClamp, float LinVelScaleUpDwnClamp, float DeltaTime, float GameTimeInSeconds, FWindGustSettings& WindGustLocalSettings, FName StateLogicLayerName, UFortCharacterDynamicsParameters* Parameters, FName& OutCurrentState, FClothParameters& OutClothParameters, FClothCoreSettings& OutClothCoreSettings, FWindGustParameters& OutWindGustSettings, FWindGustSettings& OutWindGustLocalSettings, FVector& OutWindVelocity, FVector& OutLinearVelVector); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750740B38(relative to base address)
		void ClothControllerFunction(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, FName ClothingAssetName, FFortClothParameterSet& ClothParameterSet, FClothCoreSettings& ClothCoreSettings, FVector& ClothUpAxis, float OnGroundMovingSpeedLimit, float OnGroundMovingAngularVelMax, float OnGroundMovingFictitiousVelMax, float LinVelScaleFwdBwdClamp, float LinVelScaleUpDwnClamp, float DeltaTime, float GameTimeInSeconds, FFortWindGustParameterSet& WindGustParams, FWindGustSettings& WindGustLocalSettings, FName StateLogicLayerName, FName& OutCurrentState, FClothParameters& OutClothParameters, FClothCoreSettings& OutClothCoreSettings, FWindGustParameters& OutWindGustSettings, FWindGustSettings& OutWindGustLocalSettings, FVector& OutWindVelocity, FVector& OutLinearVelVector); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75073FEC8(relative to base address)
		void AddCharacterDynamicsControlLogicLayer(UFortAnimInstance* InAnimInstance, FName LayerName, UFortCharacterDynamicsStateLogic* LayerStateLogic); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75073FCF4(relative to base address)
	};


	// Class CharacterDynamicsControlRuntime.CharacterDynamicsControlGameFeatureData
	// Inherited from UFortGameFeatureData -> UGameFeatureData -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x550 - 0x540)
	class UCharacterDynamicsControlGameFeatureData : public UFortGameFeatureData	
	{
	public:
		UFortCharacterDynamicsStateLogic* DefaultStateLogic; // 0x540(0x8)
		UFortCharacterDynamicsParameters* DefaultParameters; // 0x548(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlGameFeatureData");
			return ret;
		}
	};


	// Class CharacterDynamicsControlRuntime.FortCharacterDynamicsParameters
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x70 (0xA0 - 0x30)
	class UFortCharacterDynamicsParameters : public UPrimaryDataAsset	
	{
	public:
		TArray<FName> StateNames; // 0x30(0x10)
		TArray<FClothParameters> ClothParameters; // 0x40(0x10)
		TArray<FWindGustParameters> WindGustParameters; // 0x50(0x10)
		TArray<FPhysicsControlControlAndModifierParameters> RBWCControlAndModifierParameters; // 0x60(0x10)
		TArray<FFortRigidBodyWithControlStateTransitionParameters> RBWCTransitionParameters; // 0x70(0x10)
		TArray<FFortGravityOverrideParameters> GravityOverrideParameters; // 0x80(0x10)
		TArray<FFortRigidBodyAnimNodeParameters> RigidBodyAnimNodeParameters; // 0x90(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsParameters");
			return ret;
		}
	};


	// Class CharacterDynamicsControlRuntime.FortCharacterDynamicsStateLogic
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UFortCharacterDynamicsStateLogic : public UPrimaryDataAsset	
	{
	public:
		TArray<FName> BlueprintCharacterPropertyNames; // 0x30(0x10)
		TArray<FName> ActivityStateNames; // 0x40(0x10)
		FBinaryDecisionTree ActivityStateBinaryDecisionTree; // 0x50(0x10)
		FBitArrayBinaryDecisionTree DecisionTree; // 0x60(0x10)
		TArray<FProxyProperty> ProxyPropertyCollection; // 0x70(0x10)
		int32_t NativePropertyCount; // 0x80(0x4)
		float MinMovementSpeed; // 0x84(0x4)
		float MinRidingMovementSpeed; // 0x88(0x4)
		float MinUpwardVelocityThreshold; // 0x8C(0x4)
		float MaxFallingThreshold; // 0x90(0x4)
		float HighRevolutionsPerSecondThreshold; // 0x94(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsStateLogic");
			return ret;
		}
	};


	// Class CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xB0 (0x150 - 0xA0)
	class UFortCharacterDynamicsComponent : public UActorComponent	
	{
	public:
		UFortCharacterDynamicsStateLogic* DefaultStateLogic; // 0xA0(0x8)
		UFortCharacterDynamicsParameters* DefaultParameters; // 0xA8(0x8)
		unsigned char UnknownData00_7[0xA0]; // 0xB0(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent");
			return ret;
		}

		void SetProperty(FName PropertyName, bool PropertyValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750742F28(relative to base address)
		void RemoveLayer(FName LayerName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750742CFC(relative to base address)
		FName PreviousStateNameForLayer(FName LayerName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750742BB8(relative to base address)
		FName PreviousStateName(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750742B88(relative to base address)
		bool HasLayer(FName LayerName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750742AFC(relative to base address)
		float GetTimeInCurrentStateSecondsForLayer(FName LayerName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750741DCC(relative to base address)
		float GetTimeInCurrentStateSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750741DA4(relative to base address)
		bool GetPropertyForLayer(FName LayerName, FName PropertyName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750741CE4(relative to base address)
		bool GetProperty(FName PropertyName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750741B50(relative to base address)
		FName CurrentStateNameForLayer(FName LayerName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507418A0(relative to base address)
		FName CurrentStateName(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750741874(relative to base address)
		void AddLayer(FName LayerName, UFortCharacterDynamicsStateLogic* LayerStateLogic); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75073FE04(relative to base address)
	};

}
