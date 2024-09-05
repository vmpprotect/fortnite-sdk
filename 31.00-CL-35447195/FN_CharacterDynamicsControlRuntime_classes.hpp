#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CharacterDynamicsControlRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		FRigidBodyWithControlReference UpdateRigidBodyWithControlNodeParametersFromAsset(FAnimUpdateContext& UpdateContext, FRigidBodyWithControlReference& RigidBodyWithControl, UFortCharacterDynamicsParameters Parameters); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE4E98
		FRigidBodyWithControlReference UpdateRigidBodyWithControlNodeParametersForLayer(FAnimUpdateContext& UpdateContext, FRigidBodyWithControlReference& RigidBodyWithControl, FName StateLogicLayerName, UFortCharacterDynamicsParameters Parameters); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BE4DB8
		FRigidBodyWithControlReference UpdateRigidBodyWithControlNodeParameters(FAnimUpdateContext& UpdateContext, FRigidBodyWithControlReference& RigidBodyWithControl); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BE4CD8
		void SetProperty(UFortAnimInstance InAnimInstance, FName InPropertyName, bool InValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BE4BF8
		void RequestFullBodyPBALayer(UFortAnimInstance InAnimInstance, FName ReasonForRequest); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BE4B18
		void RemoveCharacterDynamicsControlLogicLayer(UFortAnimInstance InAnimInstance, FName LayerName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BE4A38
		bool HasCharacterDynamicsControlLogicLayer(UFortAnimInstance InAnimInstance, FName LayerName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414BE4958
		bool GetPropertyForLayer(UFortAnimInstance InAnimInstance, FName InStateLogicLayerName, FName InPropertyName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414BE4878
		bool GetProperty(UFortAnimInstance InAnimInstance, FName InPropertyName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414BE4798
		FName GetCharacterStateForLayer(UFortAnimInstance InAnimInstance, FName StateLogicLayerName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414BE46B8
		FName GetCharacterState(UFortAnimInstance InAnimInstance); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414BE45D8
		void AddCharacterDynamicsControlLogicLayer(UFortAnimInstance InAnimInstance, FName LayerName, UFortCharacterDynamicsStateLogic LayerStateLogic); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BE44F8
	};


	// Class CharacterDynamicsControlRuntime.CharacterDynamicsControlGameFeatureData
	// Inherited from UFortGameFeatureData -> UGameFeatureData -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x550 - 0x540)
	class UCharacterDynamicsControlGameFeatureData : public UFortGameFeatureData	
	{
	public:
		UFortCharacterDynamicsStateLogic DefaultStateLogic; // 0x540(0x8)
		UFortCharacterDynamicsParameters DefaultParameters; // 0x548(0x8)

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
		TArray StateNames; // 0x30(0x10)
		TArray ClothParameters; // 0x40(0x10)
		TArray WindGustParameters; // 0x50(0x10)
		TArray RBWCControlAndModifierParameters; // 0x60(0x10)
		TArray RBWCTransitionParameters; // 0x70(0x10)
		TArray GravityOverrideParameters; // 0x80(0x10)
		TArray RigidBodyAnimNodeParameters; // 0x90(0x10)

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
		TArray BlueprintCharacterPropertyNames; // 0x30(0x10)
		TArray ActivityStateNames; // 0x40(0x10)
		FBinaryDecisionTree ActivityStateBinaryDecisionTree; // 0x50(0x10)
		FBitArrayBinaryDecisionTree DecisionTree; // 0x60(0x10)
		TArray ProxyPropertyCollection; // 0x70(0x10)
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
		UFortCharacterDynamicsStateLogic DefaultStateLogic; // 0xA0(0x8)
		UFortCharacterDynamicsParameters DefaultParameters; // 0xA8(0x8)
		unsigned char UnknownData01_7[0xA0]; // 0xB0(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent");
			return ret;
		}

		void SetProperty(FName PropertyName, bool PropertyValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE5918
		void RemoveLayer(FName LayerName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE5838
		FName PreviousStateNameForLayer(FName LayerName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE5758
		FName PreviousStateName(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE5678
		bool HasLayer(FName LayerName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BE5598
		float GetTimeInCurrentStateSecondsForLayer(FName LayerName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BE54B8
		float GetTimeInCurrentStateSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BE53D8
		bool GetPropertyForLayer(FName LayerName, FName PropertyName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE52F8
		bool GetProperty(FName PropertyName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE5218
		FName CurrentStateNameForLayer(FName LayerName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE5138
		FName CurrentStateName(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE5058
		void AddLayer(FName LayerName, UFortCharacterDynamicsStateLogic LayerStateLogic); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE4F78
	};

}
