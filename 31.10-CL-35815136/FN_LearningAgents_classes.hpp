#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LearningAgents
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class LearningAgents.LearningAgentsActionSchema
	// Inherited from UObject
	// Size: 0x118 (0x140 - 0x28)
	class ULearningAgentsActionSchema : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x118]; // 0x28(0x118) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsActionSchema");
			return ret;
		}
	};


	// Class LearningAgents.LearningAgentsActionObject
	// Inherited from UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class ULearningAgentsActionObject : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0xC8]; // 0x28(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsActionObject");
			return ret;
		}
	};


	// Class LearningAgents.LearningAgentsActions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULearningAgentsActions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsActions");
			return ret;
		}

		bool ValidateActionObjectMatchesSchema(ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement SchemaElement, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement ObjectElement); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751F2131C(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyVelocityAction(ULearningAgentsActionSchema* Schema, float VelocityScale, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F21220(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyTransformAction(ULearningAgentsActionSchema* Schema, float LocationScale, float RotationScale, float ScaleScale, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F210A4(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyStructActionFromArrays(ULearningAgentsActionSchema* Schema, TArray<FName>& ElementNames, TArray<FLearningAgentsActionSchemaElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F20E60(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyStructAction(ULearningAgentsActionSchema* Schema, TMap<FName, FLearningAgentsActionSchemaElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F20C7C(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyStaticArrayAction(ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement Element, int32_t Num, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F20908(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyScaleAction(ULearningAgentsActionSchema* Schema, float ScaleScale, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F201B0(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyRotationAction(ULearningAgentsActionSchema* Schema, float RotationScale, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F201B0(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyPairAction(ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement Key, FLearningAgentsActionSchemaElement Value, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F20634(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyOptionalAction(ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement Element, float PriorProbability, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F2036C(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyNullAction(ULearningAgentsActionSchema* Schema, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F202A8(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyLocationAction(ULearningAgentsActionSchema* Schema, float LocationScale, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F201B0(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyInclusiveUnionActionFromArrays(ULearningAgentsActionSchema* Schema, TArray<FName> ElementNames, TArray<FLearningAgentsActionSchemaElement>& Elements, TArray<float>& PriorProbabilities, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1FEE8(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyInclusiveUnionAction(ULearningAgentsActionSchema* Schema, TMap<FName, FLearningAgentsActionSchemaElement>& Elements, TMap<FName, float>& PriorProbabilities, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1FC6C(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyInclusiveDiscreteAction(ULearningAgentsActionSchema* Schema, int32_t Size, TArray<float>& PriorProbabilities, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1FA44(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyFloatAction(ULearningAgentsActionSchema* Schema, float FloatScale, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1DB70(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyExclusiveUnionActionFromArrays(ULearningAgentsActionSchema* Schema, TArray<FName>& ElementNames, TArray<FLearningAgentsActionSchemaElement>& Elements, TArray<float>& PriorProbabilities, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1F768(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyExclusiveUnionAction(ULearningAgentsActionSchema* Schema, TMap<FName, FLearningAgentsActionSchemaElement>& Elements, TMap<FName, float>& PriorProbabilities, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1F4EC(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyExclusiveDiscreteAction(ULearningAgentsActionSchema* Schema, int32_t Size, TArray<float>& PriorProbabilities, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1F2C4(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyEnumActionFromArray(ULearningAgentsActionSchema* Schema, UEnum* Enum, TArray<float>& PriorProbabilities, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1F098(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyEnumAction(ULearningAgentsActionSchema* Schema, UEnum* Enum, TMap<char, float>& PriorProbabilities, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1EE7C(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyEncodingAction(ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement Element, int32_t EncodingSize, int32_t HiddenLayerNum, ELearningAgentsActivationFunction ActivationFunction, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1E92C(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyEitherAction(ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement A, FLearningAgentsActionSchemaElement B, float PriorProbabilityOfA, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1E588(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyDirectionAction(ULearningAgentsActionSchema* Schema, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1E4B8(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyContinuousAction(ULearningAgentsActionSchema* Schema, int32_t Size, float Scale, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1E380(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyBoolAction(ULearningAgentsActionSchema* Schema, float PriorProbability, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1E288(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyBitmaskActionFromArray(ULearningAgentsActionSchema* Schema, UEnum* Enum, TArray<float>& PriorProbabilities, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1E05C(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyBitmaskAction(ULearningAgentsActionSchema* Schema, UEnum* Enum, TMap<char, float>& PriorProbabilities, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1DC6C(relative to base address)
		FLearningAgentsActionSchemaElement SpecifyAngleAction(ULearningAgentsActionSchema* Schema, float AngleScale, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1DB70(relative to base address)
		FLearningAgentsActionObjectElement MakeVelocityAction(ULearningAgentsActionObject* Object, FVector Velocity, FTransform RelativeTransform, FName Tag); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1D7F0(relative to base address)
		FLearningAgentsActionObjectElement MakeTransformAction(ULearningAgentsActionObject* Object, FTransform Transform, FTransform RelativeTransform, FName Tag); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1D3F4(relative to base address)
		FLearningAgentsActionObjectElement MakeStructActionFromArrays(ULearningAgentsActionObject* Object, TArray<FName>& ElementNames, TArray<FLearningAgentsActionObjectElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1D1B0(relative to base address)
		FLearningAgentsActionObjectElement MakeStructAction(ULearningAgentsActionObject* Object, TMap<FName, FLearningAgentsActionObjectElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1CFCC(relative to base address)
		FLearningAgentsActionObjectElement MakeStaticArrayAction(ULearningAgentsActionObject* Object, TArray<FLearningAgentsActionObjectElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1CE04(relative to base address)
		FLearningAgentsActionObjectElement MakeScaleAction(ULearningAgentsActionObject* Object, FVector Scale, FVector RelativeScale, FName Tag); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1CB18(relative to base address)
		FLearningAgentsActionObjectElement MakeRotationActionFromQuat(ULearningAgentsActionObject* Object, FQuat Rotation, FQuat RelativeRotation, FName Tag); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1C830(relative to base address)
		FLearningAgentsActionObjectElement MakeRotationAction(ULearningAgentsActionObject* Object, FRotator Rotation, FRotator RelativeRotation, FName Tag); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1C544(relative to base address)
		FLearningAgentsActionObjectElement MakePairAction(ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Key, FLearningAgentsActionObjectElement Value, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1C270(relative to base address)
		FLearningAgentsActionObjectElement MakeOptionalValidAction(ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1C06C(relative to base address)
		FLearningAgentsActionObjectElement MakeOptionalNullAction(ULearningAgentsActionObject* Object, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1BF68(relative to base address)
		FLearningAgentsActionObjectElement MakeOptionalAction(ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, ELearningAgentsOptionalAction Option, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1BCA0(relative to base address)
		FLearningAgentsActionObjectElement MakeNullAction(ULearningAgentsActionObject* Object, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1BBDC(relative to base address)
		FLearningAgentsActionObjectElement MakeLocationAction(ULearningAgentsActionObject* Object, FVector Location, FTransform RelativeTransform, FName Tag); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1B85C(relative to base address)
		FLearningAgentsActionObjectElement MakeInclusiveUnionActionFromArrays(ULearningAgentsActionObject* Object, TArray<FName>& ElementNames, TArray<FLearningAgentsActionObjectElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1B618(relative to base address)
		FLearningAgentsActionObjectElement MakeInclusiveUnionAction(ULearningAgentsActionObject* Object, TMap<FName, FLearningAgentsActionObjectElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1B434(relative to base address)
		FLearningAgentsActionObjectElement MakeInclusiveDiscreteAction(ULearningAgentsActionObject* Object, TArray<int32_t>& Indices, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1B26C(relative to base address)
		FLearningAgentsActionObjectElement MakeFloatAction(ULearningAgentsActionObject* Object, float Value, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1B174(relative to base address)
		FLearningAgentsActionObjectElement MakeExclusiveUnionAction(ULearningAgentsActionObject* Object, FName ElementName, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1AF3C(relative to base address)
		FLearningAgentsActionObjectElement MakeExclusiveDiscreteAction(ULearningAgentsActionObject* Object, int32_t Index, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1AE44(relative to base address)
		FLearningAgentsActionObjectElement MakeEnumAction(ULearningAgentsActionObject* Object, UEnum* Enum, char EnumValue, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1AA20(relative to base address)
		FLearningAgentsActionObjectElement MakeEncodingAction(ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1A7C0(relative to base address)
		FLearningAgentsActionObjectElement MakeEitherBAction(ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement B, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1A5BC(relative to base address)
		FLearningAgentsActionObjectElement MakeEitherAction(ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, ELearningAgentsEitherAction Either, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1A2F4(relative to base address)
		FLearningAgentsActionObjectElement MakeEitherAAction(ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement A, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F1A0F0(relative to base address)
		FLearningAgentsActionObjectElement MakeDirectionAction(ULearningAgentsActionObject* Object, FVector Direction, FTransform RelativeTransform, FName Tag); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F19D70(relative to base address)
		FLearningAgentsActionObjectElement MakeContinuousAction(ULearningAgentsActionObject* Object, TArray<float>& Values, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F19B6C(relative to base address)
		FLearningAgentsActionObjectElement MakeBoolAction(ULearningAgentsActionObject* Object, bool bValue, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F19A70(relative to base address)
		FLearningAgentsActionObjectElement MakeBitmaskAction(ULearningAgentsActionObject* Object, UEnum* Enum, int32_t BitmaskValue, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F19800(relative to base address)
		FLearningAgentsActionObjectElement MakeAngleActionRadians(ULearningAgentsActionObject* Object, float Angle, float RelativeAngle, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F196B8(relative to base address)
		FLearningAgentsActionObjectElement MakeAngleAction(ULearningAgentsActionObject* Object, float Angle, float RelativeAngle, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F19580(relative to base address)
		void LogAction(ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751F193D4(relative to base address)
		bool GetVelocityAction(FVector& OutVelocity, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerVelocityLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F18B38(relative to base address)
		bool GetTransformAction(FTransform& OutTransform, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F18344(relative to base address)
		bool GetStructActionToArrays(TArray<FName>& OutElementNames, TArray<FLearningAgentsActionObjectElement>& OutElements, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F17FB8(relative to base address)
		bool GetStructActionNum(int32_t& OutNum, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F17CE8(relative to base address)
		bool GetStructActionElement(FLearningAgentsActionObjectElement& OutElement, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName ElementName, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F17938(relative to base address)
		bool GetStructAction(TMap<FName, FLearningAgentsActionObjectElement>& OutElements, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F17600(relative to base address)
		bool GetStaticArrayActionNum(int32_t& OutNum, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F17330(relative to base address)
		bool GetStaticArrayAction(TArray<FLearningAgentsActionObjectElement>& OutElements, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F17040(relative to base address)
		bool GetScaleAction(FVector& OutScale, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FVector RelativeScale, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F16908(relative to base address)
		bool GetRotationActionAsQuat(FQuat& OutRotation, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FQuat RelativeRotation, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F1610C(relative to base address)
		bool GetRotationAction(FRotator& OutRotation, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FRotator RelativeRotation, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F15950(relative to base address)
		bool GetPairAction(FLearningAgentsActionObjectElement& OutKey, FLearningAgentsActionObjectElement& OutValue, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F15610(relative to base address)
		bool GetOptionalAction(ELearningAgentsOptionalAction& OutOption, FLearningAgentsActionObjectElement& OutElement, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F152D8(relative to base address)
		bool GetNullAction(ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751F150D4(relative to base address)
		bool GetLocationAction(FVector& OutLocation, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F148F8(relative to base address)
		bool GetInclusiveUnionActionToArrays(TArray<FName>& OutElementNames, TArray<FLearningAgentsActionObjectElement>& OutElements, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F1456C(relative to base address)
		bool GetInclusiveUnionActionNum(int32_t& OutNum, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F1429C(relative to base address)
		bool GetInclusiveUnionAction(TMap<FName, FLearningAgentsActionObjectElement>& OutElements, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F13F64(relative to base address)
		bool GetInclusiveDiscreteActionNum(int32_t& OutNum, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F13C94(relative to base address)
		bool GetInclusiveDiscreteAction(TArray<int32_t>& OutIndices, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F1360C(relative to base address)
		bool GetFloatAction(float& OutValue, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F12FBC(relative to base address)
		bool GetExclusiveUnionAction(FName& OutElementName, FLearningAgentsActionObjectElement& OutElement, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F12C84(relative to base address)
		bool GetExclusiveDiscreteAction(int32_t& OutIndex, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F12614(relative to base address)
		bool GetEnumAction(char& OutEnumValue, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, UEnum* Enum, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F11BF4(relative to base address)
		bool GetEncodingAction(FLearningAgentsActionObjectElement& OutElement, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F11904(relative to base address)
		bool GetEitherAction(ELearningAgentsEitherAction& OutEither, FLearningAgentsActionObjectElement& OutElement, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F115CC(relative to base address)
		bool GetDirectionAction(FVector& OutDirection, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerDirectionLocation, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F10C78(relative to base address)
		bool GetContinuousActionNum(int32_t& OutNum, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F109A8(relative to base address)
		bool GetContinuousAction(TArray<float>& OutValues, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F102DC(relative to base address)
		bool GetBoolAction(bool& bOutValue, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F0FC90(relative to base address)
		bool GetBitmaskAction(int32_t& OutBitmaskValue, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, UEnum* Enum, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F0F1B4(relative to base address)
		bool GetAngleActionRadians(float& OutAngle, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, float RelativeAngle, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerAngleLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F0E9EC(relative to base address)
		bool GetAngleAction(float& OutAngle, ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, float RelativeAngle, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerAngleLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F0E24C(relative to base address)
	};


	// Class LearningAgents.LearningAgentsManagerListener
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class ULearningAgentsManagerListener : public UObject	
	{
	public:
		bool bIsSetup; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		ULearningAgentsManager* Manager; // 0x30(0x8)
		TMap<FName, ULearningAgentsVisualLoggerObject*> VisualLoggerObjects; // 0x38(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsManagerListener");
			return ret;
		}

		void OnAgentsReset(TArray<int32_t>& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F248B4(relative to base address)
		void OnAgentsRemoved(TArray<int32_t>& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F24814(relative to base address)
		void OnAgentsManagerTick(TArray<int32_t>& AgentIds, float DeltaTime); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F24690(relative to base address)
		void OnAgentsAdded(TArray<int32_t>& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F245F0(relative to base address)
		bool IsSetup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1E6C(relative to base address)
		void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, UClass* AgentClass); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF751F23638(relative to base address)
		void GetAgents(TArray<int32_t>& AgentIds, UClass* AgentClass, TArray<UObject*>& OutAgents); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF751F23284(relative to base address)
		ULearningAgentsManager GetAgentManager(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749B40500(relative to base address)
		UObject GetAgent(int32_t AgentId, UClass* AgentClass); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F22E20(relative to base address)
	};


	// Class LearningAgents.LearningAgentsController
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x8 (0x90 - 0x88)
	class ULearningAgentsController : public ULearningAgentsManagerListener	
	{
	public:
		ULearningAgentsInteractor* Interactor; // 0x88(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsController");
			return ret;
		}

		void SetupController(ULearningAgentsManager* InManager, ULearningAgentsInteractor* InInteractor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F255D8(relative to base address)
		void RunController(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F24F64(relative to base address)
		ULearningAgentsController MakeController(ULearningAgentsManager* InManager, ULearningAgentsInteractor* InInteractor, UClass* Class, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751F23E18(relative to base address)
		ULearningAgentsInteractor GetInteractor(UClass* InteractorClass); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F238D4(relative to base address)
		void EvaluateController(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F226A0(relative to base address)
		void EvaluateAgentControllers(TArray<FLearningAgentsActionObjectElement>& OutActionObjectElements, ULearningAgentsActionObject* InActionObject, ULearningAgentsObservationObject* InObservationObject, TArray<FLearningAgentsObservationObjectElement>& InObservationObjectElements, TArray<int32_t>& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F223D0(relative to base address)
		void EvaluateAgentController(FLearningAgentsActionObjectElement& OutActionObjectElement, ULearningAgentsActionObject* InActionObject, ULearningAgentsObservationObject* InObservationObject, FLearningAgentsObservationObjectElement& InObservationObjectElement, int32_t AgentId); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F220B8(relative to base address)
	};


	// Class LearningAgents.LearningAgentsCritic
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x1F0 (0x278 - 0x88)
	class ULearningAgentsCritic : public ULearningAgentsManagerListener	
	{
	public:
		ULearningAgentsInteractor* Interactor; // 0x88(0x8)
		ULearningAgentsPolicy* Policy; // 0x90(0x8)
		ULearningAgentsNeuralNetwork* CriticNetwork; // 0x98(0x8)
		unsigned char UnknownData00_7[0x1D8]; // 0xA0(0x1D8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsCritic");
			return ret;
		}

		void SetupCritic(ULearningAgentsManager* InManager, ULearningAgentsInteractor* InInteractor, ULearningAgentsPolicy* InPolicy, ULearningAgentsNeuralNetwork* CriticNeuralNetworkAsset, bool bReinitializeCriticNetwork, FLearningAgentsCriticSettings& CriticSettings, int32_t Seed); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2569C(relative to base address)
		ULearningAgentsCritic MakeCritic(ULearningAgentsManager* InManager, ULearningAgentsInteractor* InInteractor, ULearningAgentsPolicy* InPolicy, UClass* Class, FName Name, ULearningAgentsNeuralNetwork* CriticNeuralNetworkAsset, bool bReinitializeCriticNetwork, FLearningAgentsCriticSettings& CriticSettings, int32_t Seed); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2401C(relative to base address)
		float GetEstimatedDiscountedReturn(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F23844(relative to base address)
		ULearningAgentsNeuralNetwork GetCriticNetworkAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F23820(relative to base address)
		void EvaluateCritic(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F226B4(relative to base address)
	};


	// Class LearningAgents.LearningAgentsInteractor
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x2C0 (0x348 - 0x88)
	class ULearningAgentsInteractor : public ULearningAgentsManagerListener	
	{
	public:
		ULearningAgentsObservationSchema* ObservationSchema; // 0x88(0x8)
		FLearningAgentsObservationSchemaElement ObservationSchemaElement; // 0x90(0x8)
		ULearningAgentsActionSchema* ActionSchema; // 0x98(0x8)
		FLearningAgentsActionSchemaElement ActionSchemaElement; // 0xA0(0x8)
		ULearningAgentsObservationObject* ObservationObject; // 0xA8(0x8)
		TArray<FLearningAgentsObservationObjectElement> ObservationObjectElements; // 0xB0(0x10)
		ULearningAgentsActionObject* ActionObject; // 0xC0(0x8)
		TArray<FLearningAgentsActionObjectElement> ActionObjectElements; // 0xC8(0x10)
		unsigned char UnknownData00_7[0x270]; // 0xD8(0x270) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsInteractor");
			return ret;
		}

		void SpecifyAgentObservation(FLearningAgentsObservationSchemaElement& OutObservationSchemaElement, ULearningAgentsObservationSchema* InObservationSchema); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F25B10(relative to base address)
		void SpecifyAgentAction(FLearningAgentsActionSchemaElement& OutActionSchemaElement, ULearningAgentsActionSchema* InActionSchema); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F259AC(relative to base address)
		void SetupInteractor(ULearningAgentsManager* InManager); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F2592C(relative to base address)
		void SetObservationVector(TArray<float>& ObservationVector, int32_t InObservationCompatibilityHash, int32_t AgentId, bool bIncrementIteration); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F252A8(relative to base address)
		void SetActionVector(TArray<float>& ActionVector, int32_t InActionCompatibilityHash, int32_t AgentId, bool bIncrementIteration); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F24F78(relative to base address)
		void PerformAgentActions(ULearningAgentsActionObject* InActionObject, TArray<FLearningAgentsActionObjectElement>& InActionObjectElements, TArray<int32_t>& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F24AF8(relative to base address)
		void PerformAgentAction(ULearningAgentsActionObject* InActionObject, FLearningAgentsActionObjectElement& InActionObjectElement, int32_t AgentId); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F24968(relative to base address)
		void PerformActions(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F24954(relative to base address)
		ULearningAgentsInteractor MakeInteractor(ULearningAgentsManager* InManager, UClass* Class, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751F24420(relative to base address)
		bool HasObservationVector(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F23D8C(relative to base address)
		bool HasActionVector(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F23BE8(relative to base address)
		int32_t GetObservationVectorSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F23BC4(relative to base address)
		void GetObservationVector(TArray<float>& OutObservationVector, int32_t& OutObservationCompatibilityHash, int32_t AgentId); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F23994(relative to base address)
		int32_t GetObservationEncodedVectorSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F23970(relative to base address)
		int32_t GetActionVectorSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F22D24(relative to base address)
		void GetActionVector(TArray<float>& OutActionVector, int32_t& OutActionCompatibilityHash, int32_t AgentId); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F22AF4(relative to base address)
		int32_t GetActionEncodedVectorSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F22AD0(relative to base address)
		int32_t GetActionDistributionVectorSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F22AAC(relative to base address)
		void GatherObservations(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F22A98(relative to base address)
		void GatherAgentObservations(TArray<FLearningAgentsObservationObjectElement>& OutObservationObjectElements, ULearningAgentsObservationObject* InObservationObject, TArray<int32_t>& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F228E8(relative to base address)
		void GatherAgentObservation(FLearningAgentsObservationObjectElement& OutObservationObjectElement, ULearningAgentsObservationObject* InObservationObject, int32_t AgentId); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751F226C8(relative to base address)
	};


	// Class LearningAgents.LearningAgentsManager
	// Inherited from UActorComponent -> UObject
	// Size: 0x88 (0x128 - 0xA0)
	class ULearningAgentsManager : public UActorComponent	
	{
	public:
		int32_t MaxAgentNum; // 0xA0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		TArray<UObject*> Agents; // 0xA8(0x10)
		TArray<ULearningAgentsManagerListener*> Listeners; // 0xB8(0x10)
		unsigned char UnknownData01_7[0x60]; // 0xC8(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsManager");
			return ret;
		}

		void ResetAllAgents(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F24F50(relative to base address)
		void ResetAgents(TArray<int32_t>& AgentIds); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F24EB4(relative to base address)
		void ResetAgent(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F24E34(relative to base address)
		void RemoveListener(ULearningAgentsManagerListener* Listener); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F24D74(relative to base address)
		void RemoveAllAgents(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F24D60(relative to base address)
		void RemoveAgents(TArray<int32_t>& AgentIds); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F24CC4(relative to base address)
		void RemoveAgent(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F24C44(relative to base address)
		bool HasAgentObject(UObject* Agent); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F23D00(relative to base address)
		bool HasAgent(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F23C74(relative to base address)
		int32_t GetMaxAgentNum(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFEA96C(relative to base address)
		void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, UClass* AgentClass); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF751F23450(relative to base address)
		void GetAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& AgentIds, UClass* AgentClass); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF751F2309C(relative to base address)
		int32_t GetAgentNum(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFEEC0(relative to base address)
		void GetAgentIds(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF751F22F88(relative to base address)
		int32_t GetAgentId(UObject* Agent); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F22EF8(relative to base address)
		UObject GetAgent(int32_t AgentId, UClass* AgentClass); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F22D48(relative to base address)
		void AddListener(ULearningAgentsManagerListener* Listener); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F22038(relative to base address)
		void AddAgents(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F21F24(relative to base address)
		int32_t AddAgent(UObject* Agent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F21E94(relative to base address)
	};


	// Class LearningAgents.LearningAgentsVisualLoggerObject
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULearningAgentsVisualLoggerObject : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsVisualLoggerObject");
			return ret;
		}
	};


	// Class LearningAgents.LearningAgentsNeuralNetwork
	// Inherited from UDataAsset -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class ULearningAgentsNeuralNetwork : public UDataAsset	
	{
	public:
		ULearningNeuralNetworkData* NeuralNetworkData; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsNeuralNetwork");
			return ret;
		}

		void SaveNetworkToSnapshot(FFilePath& File); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F3A258(relative to base address)
		void SaveNetworkToAsset(ULearningAgentsNeuralNetwork* NeuralNetworkAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F3A1D8(relative to base address)
		void ResetNetwork(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751F3A1A0(relative to base address)
		void LoadNetworkFromSnapshot(FFilePath& File); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2F464(relative to base address)
		void LoadNetworkFromAsset(ULearningAgentsNeuralNetwork* NeuralNetworkAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F2F3E4(relative to base address)
	};


	// Class LearningAgents.LearningAgentsObservationSchema
	// Inherited from UObject
	// Size: 0xE8 (0x110 - 0x28)
	class ULearningAgentsObservationSchema : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0xE8]; // 0x28(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsObservationSchema");
			return ret;
		}
	};


	// Class LearningAgents.LearningAgentsObservationObject
	// Inherited from UObject
	// Size: 0x98 (0xC0 - 0x28)
	class ULearningAgentsObservationObject : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x98]; // 0x28(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsObservationObject");
			return ret;
		}
	};


	// Class LearningAgents.LearningAgentsObservations
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULearningAgentsObservations : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsObservations");
			return ret;
		}

		bool ValidateObservationObjectMatchesSchema(ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement SchemaElement, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement ObjectElement); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751F3E61C(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyVelocityObservation(ULearningAgentsObservationSchema* Schema, float VelocityScale, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3E520(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyTransformObservation(ULearningAgentsObservationSchema* Schema, float LocationScale, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3E428(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyStructObservationFromArrays(ULearningAgentsObservationSchema* Schema, TArray<FName>& ElementNames, TArray<FLearningAgentsObservationSchemaElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3E1E4(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyStructObservation(ULearningAgentsObservationSchema* Schema, TMap<FName, FLearningAgentsObservationSchemaElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3E000(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyStaticArrayObservation(ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Element, int32_t Num, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3DC8C(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifySetObservation(ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Element, int32_t MaxNum, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3D788(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyScaleObservation(ULearningAgentsObservationSchema* Schema, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3ACD4(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyRotationObservation(ULearningAgentsObservationSchema* Schema, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3D6C4(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyProportionAlongSplineObservation(ULearningAgentsObservationSchema* Schema, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3D600(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyProportionAlongRayObservation(ULearningAgentsObservationSchema* Schema, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3D534(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyPairObservation(ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Key, FLearningAgentsObservationSchemaElement Value, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3D260(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyOptionalObservation(ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Element, int32_t EncodingSize, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3CF98(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyNullObservation(ULearningAgentsObservationSchema* Schema, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3CED4(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyMapObservation(ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement KeyElement, FLearningAgentsObservationSchemaElement ValueElement, int32_t MaxNum, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3C8F4(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyLocationObservation(ULearningAgentsObservationSchema* Schema, float LocationScale, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3C7FC(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyLocationAlongSplineObservation(ULearningAgentsObservationSchema* Schema, float LocationScale, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3C7FC(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyInclusiveUnionObservationFromArrays(ULearningAgentsObservationSchema* Schema, TArray<FName>& ElementNames, TArray<FLearningAgentsObservationSchemaElement>& Elements, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3C368(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyInclusiveUnionObservation(ULearningAgentsObservationSchema* Schema, TMap<FName, FLearningAgentsObservationSchemaElement>& Elements, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3BF50(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyInclusiveDiscreteObservation(ULearningAgentsObservationSchema* Schema, int32_t Size, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3B7B4(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyFloatObservation(ULearningAgentsObservationSchema* Schema, float FloatScale, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3BE58(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyExclusiveUnionObservationFromArrays(ULearningAgentsObservationSchema* Schema, TArray<FName>& ElementNames, TArray<FLearningAgentsObservationSchemaElement>& Elements, int32_t EncodingSize, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3BB50(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyExclusiveUnionObservation(ULearningAgentsObservationSchema* Schema, TMap<FName, FLearningAgentsObservationSchemaElement>& Elements, int32_t EncodingSize, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3B8B4(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyExclusiveDiscreteObservation(ULearningAgentsObservationSchema* Schema, int32_t Size, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3B7B4(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyEnumObservation(ULearningAgentsObservationSchema* Schema, UEnum* Enum, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3B68C(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyEncodingObservation(ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Element, int32_t EncodingSize, int32_t HiddenLayerNum, ELearningAgentsActivationFunction ActivationFunction, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3B13C(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyEitherObservation(ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement A, FLearningAgentsObservationSchemaElement B, int32_t EncodingSize, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3AD98(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyDirectionObservation(ULearningAgentsObservationSchema* Schema, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3ACD4(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyDirectionAlongSplineObservation(ULearningAgentsObservationSchema* Schema, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3ACD4(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyCountObservation(ULearningAgentsObservationSchema* Schema, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3AC10(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyContinuousObservation(ULearningAgentsObservationSchema* Schema, int32_t Size, float Scale, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3AAD8(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyBoolObservation(ULearningAgentsObservationSchema* Schema, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3AA08(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyBitmaskObservation(ULearningAgentsObservationSchema* Schema, UEnum* Enum, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3A8BC(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyArrayObservation(ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Element, int32_t MaxNum, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3A3B8(relative to base address)
		FLearningAgentsObservationSchemaElement SpecifyAngleObservation(ULearningAgentsObservationSchema* Schema, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3A2F4(relative to base address)
		FTransform ProjectTransformOntoGroundPlane(FTransform Transform, FVector LocalForwardVector, float GroundPlaneHeight); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F39E20(relative to base address)
		FLearningAgentsObservationObjectElement MakeVelocityObservation(ULearningAgentsObservationObject* Object, FVector Velocity, FTransform RelativeTransform, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerVelocityLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F39640(relative to base address)
		FLearningAgentsObservationObjectElement MakeTransformObservation(ULearningAgentsObservationObject* Object, FTransform Transform, FTransform RelativeTransform, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F38E78(relative to base address)
		FLearningAgentsObservationObjectElement MakeStructObservationFromArrays(ULearningAgentsObservationObject* Object, TArray<FName>& ElementNames, TArray<FLearningAgentsObservationObjectElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F38C34(relative to base address)
		FLearningAgentsObservationObjectElement MakeStructObservation(ULearningAgentsObservationObject* Object, TMap<FName, FLearningAgentsObservationObjectElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F38A50(relative to base address)
		FLearningAgentsObservationObjectElement MakeStaticArrayObservation(ULearningAgentsObservationObject* Object, TArray<FLearningAgentsObservationObjectElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F38888(relative to base address)
		FLearningAgentsObservationObjectElement MakeSetObservationFromArray(ULearningAgentsObservationObject* Object, TArray<FLearningAgentsObservationObjectElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F386C0(relative to base address)
		FLearningAgentsObservationObjectElement MakeSetObservation(ULearningAgentsObservationObject* Object, TSet<FLearningAgentsObservationObjectElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F384A4(relative to base address)
		FLearningAgentsObservationObjectElement MakeScaleObservation(ULearningAgentsObservationObject* Object, FVector Scale, FVector RelativeScale, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerScaleLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F37D68(relative to base address)
		FLearningAgentsObservationObjectElement MakeRotationObservationFromQuat(ULearningAgentsObservationObject* Object, FQuat Rotation, FQuat RelativeRotation, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F37630(relative to base address)
		FLearningAgentsObservationObjectElement MakeRotationObservation(ULearningAgentsObservationObject* Object, FRotator Rotation, FRotator RelativeRotation, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F36EF4(relative to base address)
		FLearningAgentsObservationObjectElement MakeProportionAlongSplineObservation(ULearningAgentsObservationObject* Object, USplineComponent* SplineComponent, float DistanceAlongSpline, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F369E0(relative to base address)
		FLearningAgentsObservationObjectElement MakeProportionAlongRayObservation(ULearningAgentsObservationObject* Object, FVector RayStart, FVector RayEnd, FTransform RayTransform, TEnumAsByte<ECollisionChannel> CollisionChannel, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3610C(relative to base address)
		FLearningAgentsObservationObjectElement MakePairObservation(ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Key, FLearningAgentsObservationObjectElement Value, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F35E38(relative to base address)
		FLearningAgentsObservationObjectElement MakeOptionalValidObservation(ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F35C34(relative to base address)
		FLearningAgentsObservationObjectElement MakeOptionalObservation(ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, ELearningAgentsOptionalObservation Option, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3596C(relative to base address)
		FLearningAgentsObservationObjectElement MakeOptionalNullObservation(ULearningAgentsObservationObject* Object, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F35868(relative to base address)
		FLearningAgentsObservationObjectElement MakeNullObservation(ULearningAgentsObservationObject* Object, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F357A4(relative to base address)
		FLearningAgentsObservationObjectElement MakeMapObservationFromArrays(ULearningAgentsObservationObject* Object, TArray<FLearningAgentsObservationObjectElement>& Keys, TArray<FLearningAgentsObservationObjectElement>& Values, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F355A0(relative to base address)
		FLearningAgentsObservationObjectElement MakeMapObservation(ULearningAgentsObservationObject* Object, TMap<FLearningAgentsObservationObjectElement, FLearningAgentsObservationObjectElement>& Map, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F353BC(relative to base address)
		FLearningAgentsObservationObjectElement MakeLocationObservation(ULearningAgentsObservationObject* Object, FVector Location, FTransform RelativeTransform, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F34C94(relative to base address)
		FLearningAgentsObservationObjectElement MakeLocationAlongSplineObservation(ULearningAgentsObservationObject* Object, USplineComponent* SplineComponent, float DistanceAlongSpline, FTransform RelativeTransform, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F34484(relative to base address)
		FLearningAgentsObservationObjectElement MakeInclusiveUnionObservationFromArrays(ULearningAgentsObservationObject* Object, TArray<FName>& ElementNames, TArray<FLearningAgentsObservationObjectElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F34240(relative to base address)
		FLearningAgentsObservationObjectElement MakeInclusiveUnionObservation(ULearningAgentsObservationObject* Object, TMap<FName, FLearningAgentsObservationObjectElement>& Elements, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3405C(relative to base address)
		FLearningAgentsObservationObjectElement MakeInclusiveDiscreteObservation(ULearningAgentsObservationObject* Object, TArray<int32_t>& DiscreteIndices, int32_t Size, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F33A44(relative to base address)
		FLearningAgentsObservationObjectElement MakeFloatObservation(ULearningAgentsObservationObject* Object, float Value, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3374C(relative to base address)
		FLearningAgentsObservationObjectElement MakeExclusiveUnionObservation(ULearningAgentsObservationObject* Object, FName ElementName, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F33514(relative to base address)
		FLearningAgentsObservationObjectElement MakeExclusiveDiscreteObservation(ULearningAgentsObservationObject* Object, int32_t DiscreteIndex, int32_t Size, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F331E4(relative to base address)
		FLearningAgentsObservationObjectElement MakeEnumObservation(ULearningAgentsObservationObject* Object, UEnum* Enum, char EnumValue, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F32B14(relative to base address)
		FLearningAgentsObservationObjectElement MakeEncodingObservation(ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F328B4(relative to base address)
		FLearningAgentsObservationObjectElement MakeEitherObservation(ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, ELearningAgentsEitherObservation Either, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F325EC(relative to base address)
		FLearningAgentsObservationObjectElement MakeEitherBObservation(ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement B, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F323E8(relative to base address)
		FLearningAgentsObservationObjectElement MakeEitherAObservation(ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement A, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F321E4(relative to base address)
		FLearningAgentsObservationObjectElement MakeDirectionObservation(ULearningAgentsObservationObject* Object, FVector Direction, FTransform RelativeTransform, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerDirectionLocation, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F31948(relative to base address)
		FLearningAgentsObservationObjectElement MakeDirectionAlongSplineObservation(ULearningAgentsObservationObject* Object, USplineComponent* SplineComponent, float DistanceAlongSpline, FTransform RelativeTransform, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F3107C(relative to base address)
		FLearningAgentsObservationObjectElement MakeCountObservation(ULearningAgentsObservationObject* Object, int32_t Num, int32_t MaxNum, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F30CE8(relative to base address)
		FLearningAgentsObservationObjectElement MakeContinuousObservation(ULearningAgentsObservationObject* Object, TArray<float>& Values, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F30750(relative to base address)
		FLearningAgentsObservationObjectElement MakeBoolObservation(ULearningAgentsObservationObject* Object, bool bValue, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F30404(relative to base address)
		FLearningAgentsObservationObjectElement MakeBitmaskObservation(ULearningAgentsObservationObject* Object, UEnum* Enum, int32_t BitmaskValue, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F2FF8C(relative to base address)
		FLearningAgentsObservationObjectElement MakeArrayObservation(ULearningAgentsObservationObject* Object, TArray<FLearningAgentsObservationObjectElement>& Elements, int32_t MaxNum, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F2FD0C(relative to base address)
		FLearningAgentsObservationObjectElement MakeAngleObservationRadians(ULearningAgentsObservationObject* Object, float Angle, float RelativeAngle, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F2F9D8(relative to base address)
		FLearningAgentsObservationObjectElement MakeAngleObservation(ULearningAgentsObservationObject* Object, float Angle, float RelativeAngle, FName Tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F2F6AC(relative to base address)
		void LogObservation(ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751F2F500(relative to base address)
		bool GetVelocityObservation(FVector& OutVelocity, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F2EFA8(relative to base address)
		bool GetTransformObservation(FTransform& OutTransform, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F2EB64(relative to base address)
		bool GetStructObservationToArrays(TArray<FName>& OutElementNames, TArray<FLearningAgentsObservationObjectElement>& OutElements, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2E7D8(relative to base address)
		bool GetStructObservationNum(int32_t& OutNum, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2E508(relative to base address)
		bool GetStructObservationElement(FLearningAgentsObservationObjectElement& OutElement, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName ElementName, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2E158(relative to base address)
		bool GetStructObservation(TMap<FName, FLearningAgentsObservationObjectElement>& OutElements, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2DE20(relative to base address)
		bool GetStaticArrayObservationNum(int32_t& OutNum, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2DB50(relative to base address)
		bool GetStaticArrayObservation(TArray<FLearningAgentsObservationObjectElement>& OutElements, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2D860(relative to base address)
		bool GetSetObservationToArray(TArray<FLearningAgentsObservationObjectElement>& OutElements, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2D570(relative to base address)
		bool GetSetObservationNum(int32_t& OutNum, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F26994(relative to base address)
		bool GetSetObservation(TSet<FLearningAgentsObservationObjectElement>& OutElements, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2D200(relative to base address)
		bool GetScaleObservation(FVector& OutScale, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FVector RelativeScale, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F2CE5C(relative to base address)
		bool GetRotationObservationAsQuat(FQuat& OutRotation, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FQuat RelativeRotation, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F2CAB0(relative to base address)
		bool GetRotationObservation(FRotator& OutRotation, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FRotator RelativeRotation, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F2C748(relative to base address)
		bool GetProportionAlongSplineObservation(bool& bOutIsClosedLoop, float& OutAngle, float& OutPropotion, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2C414(relative to base address)
		bool GetProportionAlongRayObservation(float& OutProportion, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F2C160(relative to base address)
		bool GetPairObservation(FLearningAgentsObservationObjectElement& OutKey, FLearningAgentsObservationObjectElement& OutValue, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2BE20(relative to base address)
		bool GetOptionalObservation(ELearningAgentsOptionalObservation& OutOption, FLearningAgentsObservationObjectElement& OutElement, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2BAE8(relative to base address)
		bool GetNullObservation(ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751F2B8E4(relative to base address)
		bool GetMapObservationToArrays(TArray<FLearningAgentsObservationObjectElement>& OutKeys, TArray<FLearningAgentsObservationObjectElement>& OutValues, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2B588(relative to base address)
		bool GetMapObservationNum(int32_t& OutNum, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F26994(relative to base address)
		bool GetMapObservation(TMap<FLearningAgentsObservationObjectElement, FLearningAgentsObservationObjectElement>& OutElements, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2B250(relative to base address)
		bool GetLocationObservation(FVector& OutLocation, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F2AE14(relative to base address)
		bool GetLocationAlongSplineObservation(FVector& OutLocation, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F2A9D8(relative to base address)
		bool GetInclusiveUnionObservationToArrays(TArray<FName>& OutElementNames, TArray<FLearningAgentsObservationObjectElement>& OutElements, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2A64C(relative to base address)
		bool GetInclusiveUnionObservationNum(int32_t& OutNum, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2A37C(relative to base address)
		bool GetInclusiveUnionObservation(TMap<FName, FLearningAgentsObservationObjectElement>& OutElements, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2A044(relative to base address)
		bool GetInclusiveDiscreteObservationNum(int32_t& OutNum, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F29D74(relative to base address)
		bool GetInclusiveDiscreteObservation(TArray<int32_t>& OutIndices, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F29A84(relative to base address)
		bool GetFloatObservation(float& OutValue, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F297F0(relative to base address)
		bool GetExclusiveUnionObservation(FName& OutElementName, FLearningAgentsObservationObjectElement& OutElement, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F294B8(relative to base address)
		bool GetExclusiveDiscreteObservation(int32_t& OutIndex, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F291E8(relative to base address)
		bool GetEnumObservation(char& OutEnumValue, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, UEnum* Enum, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F28E90(relative to base address)
		bool GetEncodingObservation(FLearningAgentsObservationObjectElement& OutElement, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F28BA0(relative to base address)
		bool GetEitherObservation(ELearningAgentsEitherObservation& OutEither, FLearningAgentsObservationObjectElement& OutElement, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F28868(relative to base address)
		bool GetDirectionObservation(FVector& OutDirection, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F2842C(relative to base address)
		bool GetDirectionAlongSplineObservation(FVector& OutDirection, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751F27FF0(relative to base address)
		bool GetCountObservation(int32_t& OutNum, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, int32_t MaxNum, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F27C5C(relative to base address)
		bool GetContinuousObservationNum(int32_t& OutNum, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2798C(relative to base address)
		bool GetContinuousObservation(TArray<float>& OutValues, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F27660(relative to base address)
		bool GetBoolObservation(bool& bOutValue, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F273A8(relative to base address)
		bool GetBitmaskObservation(int32_t& OutBitmaskValue, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, UEnum* Enum, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F26C64(relative to base address)
		bool GetArrayObservationNum(int32_t& OutNum, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F26994(relative to base address)
		bool GetArrayObservation(TArray<FLearningAgentsObservationObjectElement>& OutElements, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, int32_t MaxNum, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F265E4(relative to base address)
		bool GetAngleObservationRadians(float& OutAngle, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, float RelativeAngle, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F2628C(relative to base address)
		bool GetAngleObservation(float& OutAngle, ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, float RelativeAngle, FName Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F25F34(relative to base address)
		UEnum FindEnumByName(FString Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751F25E94(relative to base address)
	};


	// Class LearningAgents.LearningAgentsPolicy
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x410 (0x498 - 0x88)
	class ULearningAgentsPolicy : public ULearningAgentsManagerListener	
	{
	public:
		ULearningAgentsInteractor* Interactor; // 0x88(0x8)
		ULearningAgentsNeuralNetwork* EncoderNetwork; // 0x90(0x8)
		ULearningAgentsNeuralNetwork* PolicyNetwork; // 0x98(0x8)
		ULearningAgentsNeuralNetwork* DecoderNetwork; // 0xA0(0x8)
		unsigned char UnknownData00_7[0x3F0]; // 0xA8(0x3F0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsPolicy");
			return ret;
		}

		void SetupPolicy(ULearningAgentsManager* InManager, ULearningAgentsInteractor* InInteractor, ULearningAgentsNeuralNetwork* EncoderNeuralNetworkAsset, ULearningAgentsNeuralNetwork* PolicyNeuralNetworkAsset, ULearningAgentsNeuralNetwork* DecoderNeuralNetworkAsset, bool bReinitializeEncoderNetwork, bool bReinitializePolicyNetwork, bool bReinitializeDecoderNetwork, FLearningAgentsPolicySettings& PolicySettings, int32_t Seed); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F6B514(relative to base address)
		void SetMemoryState(int32_t AgentId, TArray<float>& InMemoryState); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F6B3F4(relative to base address)
		void RunInference(float ActionNoiseScale); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F6B374(relative to base address)
		ULearningAgentsPolicy MakePolicy(ULearningAgentsManager* InManager, ULearningAgentsInteractor* InInteractor, UClass* Class, FName Name, ULearningAgentsNeuralNetwork* EncoderNeuralNetworkAsset, ULearningAgentsNeuralNetwork* PolicyNeuralNetworkAsset, ULearningAgentsNeuralNetwork* DecoderNeuralNetworkAsset, bool bReinitializeEncoderNetwork, bool bReinitializePolicyNetwork, bool bReinitializeDecoderNetwork, FLearningAgentsPolicySettings& PolicySettings, int32_t Seed); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751F6AE9C(relative to base address)
		ULearningAgentsNeuralNetwork GetPolicyNetworkAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F6AE78(relative to base address)
		int32_t GetMemoryStateSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F6AE54(relative to base address)
		void GetMemoryState(TArray<float>& OutMemoryState, int32_t AgentId); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751F6ACA4(relative to base address)
		ULearningAgentsNeuralNetwork GetEncoderNetworkAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F6AC80(relative to base address)
		ULearningAgentsNeuralNetwork GetDecoderNetworkAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751F6AC5C(relative to base address)
		void EvaluatePolicy(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F6AC48(relative to base address)
		void EncodeObservations(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F6AC34(relative to base address)
		void DecodeAndSampleActions(float ActionNoiseScale); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751F6ABB4(relative to base address)
	};

}
