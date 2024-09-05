#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LearningAgents
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class LearningAgents.LearningAgentsActionSchema
	// Inherited from UObject
	// Size: 0x118 (0x140 - 0x28)
	class ULearningAgentsActionSchema : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x118]; // 0x28(0x118) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0xC8]; // 0x28(0xC8) UNKNOWN PROPERTY

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

		bool ValidateActionObjectMatchesSchema(ULearningAgentsActionSchema Schema, FLearningAgentsActionSchemaElement SchemaElement, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement ObjectElement); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EA16E0
		FLearningAgentsActionSchemaElement SpecifyVelocityAction(ULearningAgentsActionSchema Schema, float VelocityScale, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA1600
		FLearningAgentsActionSchemaElement SpecifyTransformAction(ULearningAgentsActionSchema Schema, float LocationScale, float RotationScale, float ScaleScale, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA1520
		FLearningAgentsActionSchemaElement SpecifyStructActionFromArrays(ULearningAgentsActionSchema Schema, TArray& ElementNames, TArray& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA1440
		FLearningAgentsActionSchemaElement SpecifyStructAction(ULearningAgentsActionSchema Schema, TMap& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA1360
		FLearningAgentsActionSchemaElement SpecifyStaticArrayAction(ULearningAgentsActionSchema Schema, FLearningAgentsActionSchemaElement Element, int32_t Num, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA1280
		FLearningAgentsActionSchemaElement SpecifyScaleAction(ULearningAgentsActionSchema Schema, float ScaleScale, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA11A0
		FLearningAgentsActionSchemaElement SpecifyRotationAction(ULearningAgentsActionSchema Schema, float RotationScale, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA10C0
		FLearningAgentsActionSchemaElement SpecifyPairAction(ULearningAgentsActionSchema Schema, FLearningAgentsActionSchemaElement Key, FLearningAgentsActionSchemaElement Value, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA0FE0
		FLearningAgentsActionSchemaElement SpecifyOptionalAction(ULearningAgentsActionSchema Schema, FLearningAgentsActionSchemaElement Element, float PriorProbability, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA0F00
		FLearningAgentsActionSchemaElement SpecifyNullAction(ULearningAgentsActionSchema Schema, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA0E20
		FLearningAgentsActionSchemaElement SpecifyLocationAction(ULearningAgentsActionSchema Schema, float LocationScale, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA0D40
		FLearningAgentsActionSchemaElement SpecifyInclusiveUnionActionFromArrays(ULearningAgentsActionSchema Schema, TArray ElementNames, TArray& Elements, TArray& PriorProbabilities, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA0C60
		FLearningAgentsActionSchemaElement SpecifyInclusiveUnionAction(ULearningAgentsActionSchema Schema, TMap& Elements, TMap& PriorProbabilities, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA0B80
		FLearningAgentsActionSchemaElement SpecifyInclusiveDiscreteAction(ULearningAgentsActionSchema Schema, int32_t Size, TArray& PriorProbabilities, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA0AA0
		FLearningAgentsActionSchemaElement SpecifyFloatAction(ULearningAgentsActionSchema Schema, float FloatScale, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA09C0
		FLearningAgentsActionSchemaElement SpecifyExclusiveUnionActionFromArrays(ULearningAgentsActionSchema Schema, TArray& ElementNames, TArray& Elements, TArray& PriorProbabilities, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA08E0
		FLearningAgentsActionSchemaElement SpecifyExclusiveUnionAction(ULearningAgentsActionSchema Schema, TMap& Elements, TMap& PriorProbabilities, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA0800
		FLearningAgentsActionSchemaElement SpecifyExclusiveDiscreteAction(ULearningAgentsActionSchema Schema, int32_t Size, TArray& PriorProbabilities, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA0720
		FLearningAgentsActionSchemaElement SpecifyEnumActionFromArray(ULearningAgentsActionSchema Schema, UEnum Enum, TArray& PriorProbabilities, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA0640
		FLearningAgentsActionSchemaElement SpecifyEnumAction(ULearningAgentsActionSchema Schema, UEnum Enum, TMap& PriorProbabilities, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA0560
		FLearningAgentsActionSchemaElement SpecifyEncodingAction(ULearningAgentsActionSchema Schema, FLearningAgentsActionSchemaElement Element, int32_t EncodingSize, int32_t HiddenLayerNum, ELearningAgentsActivationFunction ActivationFunction, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA0480
		FLearningAgentsActionSchemaElement SpecifyEitherAction(ULearningAgentsActionSchema Schema, FLearningAgentsActionSchemaElement A, FLearningAgentsActionSchemaElement B, float PriorProbabilityOfA, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA03A0
		FLearningAgentsActionSchemaElement SpecifyDirectionAction(ULearningAgentsActionSchema Schema, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA02C0
		FLearningAgentsActionSchemaElement SpecifyContinuousAction(ULearningAgentsActionSchema Schema, int32_t Size, float Scale, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA01E0
		FLearningAgentsActionSchemaElement SpecifyBoolAction(ULearningAgentsActionSchema Schema, float PriorProbability, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA0100
		FLearningAgentsActionSchemaElement SpecifyBitmaskActionFromArray(ULearningAgentsActionSchema Schema, UEnum Enum, TArray& PriorProbabilities, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA0020
		FLearningAgentsActionSchemaElement SpecifyBitmaskAction(ULearningAgentsActionSchema Schema, UEnum Enum, TMap& PriorProbabilities, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E9FF40
		FLearningAgentsActionSchemaElement SpecifyAngleAction(ULearningAgentsActionSchema Schema, float AngleScale, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9FE60
		FLearningAgentsActionObjectElement MakeVelocityAction(ULearningAgentsActionObject Object, FVector Velocity, FTransform RelativeTransform, FName tag); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414E9FD80
		FLearningAgentsActionObjectElement MakeTransformAction(ULearningAgentsActionObject Object, FTransform Transform, FTransform RelativeTransform, FName tag); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414E9FCA0
		FLearningAgentsActionObjectElement MakeStructActionFromArrays(ULearningAgentsActionObject Object, TArray& ElementNames, TArray& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E9FBC0
		FLearningAgentsActionObjectElement MakeStructAction(ULearningAgentsActionObject Object, TMap& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E9FAE0
		FLearningAgentsActionObjectElement MakeStaticArrayAction(ULearningAgentsActionObject Object, TArray& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E9FA00
		FLearningAgentsActionObjectElement MakeScaleAction(ULearningAgentsActionObject Object, FVector Scale, FVector RelativeScale, FName tag); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414E9F920
		FLearningAgentsActionObjectElement MakeRotationActionFromQuat(ULearningAgentsActionObject Object, FQuat Rotation, FQuat RelativeRotation, FName tag); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414E9F840
		FLearningAgentsActionObjectElement MakeRotationAction(ULearningAgentsActionObject Object, FRotator Rotation, FRotator RelativeRotation, FName tag); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414E9F760
		FLearningAgentsActionObjectElement MakePairAction(ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Key, FLearningAgentsActionObjectElement Value, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9F680
		FLearningAgentsActionObjectElement MakeOptionalValidAction(ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9F5A0
		FLearningAgentsActionObjectElement MakeOptionalNullAction(ULearningAgentsActionObject Object, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9F4C0
		FLearningAgentsActionObjectElement MakeOptionalAction(ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, ELearningAgentsOptionalAction Option, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9F3E0
		FLearningAgentsActionObjectElement MakeNullAction(ULearningAgentsActionObject Object, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9F300
		FLearningAgentsActionObjectElement MakeLocationAction(ULearningAgentsActionObject Object, FVector Location, FTransform RelativeTransform, FName tag); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414E9F220
		FLearningAgentsActionObjectElement MakeInclusiveUnionActionFromArrays(ULearningAgentsActionObject Object, TArray& ElementNames, TArray& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E9F140
		FLearningAgentsActionObjectElement MakeInclusiveUnionAction(ULearningAgentsActionObject Object, TMap& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E9F060
		FLearningAgentsActionObjectElement MakeInclusiveDiscreteAction(ULearningAgentsActionObject Object, TArray& Indices, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E9EF80
		FLearningAgentsActionObjectElement MakeFloatAction(ULearningAgentsActionObject Object, float Value, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9EEA0
		FLearningAgentsActionObjectElement MakeExclusiveUnionAction(ULearningAgentsActionObject Object, FName ElementName, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9EDC0
		FLearningAgentsActionObjectElement MakeExclusiveDiscreteAction(ULearningAgentsActionObject Object, int32_t Index, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9ECE0
		FLearningAgentsActionObjectElement MakeEnumAction(ULearningAgentsActionObject Object, UEnum Enum, char EnumValue, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9EC00
		FLearningAgentsActionObjectElement MakeEncodingAction(ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9EB20
		FLearningAgentsActionObjectElement MakeEitherBAction(ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement B, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9EA40
		FLearningAgentsActionObjectElement MakeEitherAction(ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, ELearningAgentsEitherAction Either, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9E960
		FLearningAgentsActionObjectElement MakeEitherAAction(ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement A, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9E880
		FLearningAgentsActionObjectElement MakeDirectionAction(ULearningAgentsActionObject Object, FVector Direction, FTransform RelativeTransform, FName tag); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414E9E7A0
		FLearningAgentsActionObjectElement MakeContinuousAction(ULearningAgentsActionObject Object, TArray& Values, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E9E6C0
		FLearningAgentsActionObjectElement MakeBoolAction(ULearningAgentsActionObject Object, bool bValue, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9E5E0
		FLearningAgentsActionObjectElement MakeBitmaskAction(ULearningAgentsActionObject Object, UEnum Enum, int32_t BitmaskValue, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9E500
		FLearningAgentsActionObjectElement MakeAngleActionRadians(ULearningAgentsActionObject Object, float Angle, float RelativeAngle, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9E420
		FLearningAgentsActionObjectElement MakeAngleAction(ULearningAgentsActionObject Object, float Angle, float RelativeAngle, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E9E340
		void LogAction(ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414E9E260
		bool GetVelocityAction(FVector& OutVelocity, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerVelocityLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9E180
		bool GetTransformAction(FTransform& OutTransform, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9E0A0
		bool GetStructActionToArrays(TArray& OutElementNames, TArray& OutElements, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9DFC0
		bool GetStructActionNum(int32_t& OutNum, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9DEE0
		bool GetStructActionElement(FLearningAgentsActionObjectElement& OutElement, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName ElementName, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9DE00
		bool GetStructAction(TMap& OutElements, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9DD20
		bool GetStaticArrayActionNum(int32_t& OutNum, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9DC40
		bool GetStaticArrayAction(TArray& OutElements, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9DB60
		bool GetScaleAction(FVector& OutScale, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FVector RelativeScale, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9DA80
		bool GetRotationActionAsQuat(FQuat& OutRotation, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FQuat RelativeRotation, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9D9A0
		bool GetRotationAction(FRotator& OutRotation, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FRotator RelativeRotation, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9D8C0
		bool GetPairAction(FLearningAgentsActionObjectElement& OutKey, FLearningAgentsActionObjectElement& OutValue, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9D7E0
		bool GetOptionalAction(ELearningAgentsOptionalAction& OutOption, FLearningAgentsActionObjectElement& OutElement, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9D700
		bool GetNullAction(ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414E9D620
		bool GetLocationAction(FVector& OutLocation, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9D540
		bool GetInclusiveUnionActionToArrays(TArray& OutElementNames, TArray& OutElements, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9D460
		bool GetInclusiveUnionActionNum(int32_t& OutNum, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9D380
		bool GetInclusiveUnionAction(TMap& OutElements, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9D2A0
		bool GetInclusiveDiscreteActionNum(int32_t& OutNum, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9D1C0
		bool GetInclusiveDiscreteAction(TArray& OutIndices, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9D0E0
		bool GetFloatAction(float& OutValue, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9D000
		bool GetExclusiveUnionAction(FName& OutElementName, FLearningAgentsActionObjectElement& OutElement, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9CF20
		bool GetExclusiveDiscreteAction(int32_t& OutIndex, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9CE40
		bool GetEnumAction(char& OutEnumValue, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, UEnum Enum, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9CD60
		bool GetEncodingAction(FLearningAgentsActionObjectElement& OutElement, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9CC80
		bool GetEitherAction(ELearningAgentsEitherAction& OutEither, FLearningAgentsActionObjectElement& OutElement, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9CBA0
		bool GetDirectionAction(FVector& OutDirection, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerDirectionLocation, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9CAC0
		bool GetContinuousActionNum(int32_t& OutNum, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9C9E0
		bool GetContinuousAction(TArray& OutValues, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9C900
		bool GetBoolAction(bool& bOutValue, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9C820
		bool GetBitmaskAction(int32_t& OutBitmaskValue, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, UEnum Enum, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9C740
		bool GetAngleActionRadians(float& OutAngle, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, float RelativeAngle, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerAngleLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9C660
		bool GetAngleAction(float& OutAngle, ULearningAgentsActionObject Object, FLearningAgentsActionObjectElement Element, float RelativeAngle, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerAngleLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414E9C580
	};


	// Class LearningAgents.LearningAgentsManagerListener
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class ULearningAgentsManagerListener : public UObject	
	{
	public:
		bool bIsSetup; // 0x28(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		ULearningAgentsManager Manager; // 0x30(0x8)
		TMap VisualLoggerObjects; // 0x38(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsManagerListener");
			return ret;
		}

		void OnAgentsReset(TArray& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EA1EC0
		void OnAgentsRemoved(TArray& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EA1DE0
		void OnAgentsManagerTick(TArray& AgentIds, float DeltaTime); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EA1D00
		void OnAgentsAdded(TArray& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EA1C20
		bool IsSetup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EA1B40
		void GetAllAgents(TArray& OutAgents, TArray& OutAgentIds, UClass AgentClass); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const 0x7FF414EA1A60
		void GetAgents(TArray& AgentIds, UClass AgentClass, TArray& OutAgents); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const 0x7FF414EA1980
		ULearningAgentsManager GetAgentManager(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414EA18A0
		UObject GetAgent(int32_t AgentId, UClass AgentClass); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414EA17C0
	};


	// Class LearningAgents.LearningAgentsController
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x8 (0x90 - 0x88)
	class ULearningAgentsController : public ULearningAgentsManagerListener	
	{
	public:
		ULearningAgentsInteractor Interactor; // 0x88(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsController");
			return ret;
		}

		void SetupController(ULearningAgentsManager InManager, ULearningAgentsInteractor InInteractor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA24E0
		void RunController(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA2400
		ULearningAgentsController MakeController(ULearningAgentsManager InManager, ULearningAgentsInteractor InInteractor, UClass Class, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EA2320
		ULearningAgentsInteractor GetInteractor(UClass InteractorClass); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414EA2240
		void EvaluateController(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA2160
		void EvaluateAgentControllers(TArray& OutActionObjectElements, ULearningAgentsActionObject InActionObject, ULearningAgentsObservationObject InObservationObject, TArray& InObservationObjectElements, TArray& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EA2080
		void EvaluateAgentController(FLearningAgentsActionObjectElement& OutActionObjectElement, ULearningAgentsActionObject InActionObject, ULearningAgentsObservationObject InObservationObject, FLearningAgentsObservationObjectElement& InObservationObjectElement, int32_t AgentId); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EA1FA0
	};


	// Class LearningAgents.LearningAgentsCritic
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x1F0 (0x278 - 0x88)
	class ULearningAgentsCritic : public ULearningAgentsManagerListener	
	{
	public:
		ULearningAgentsInteractor Interactor; // 0x88(0x8)
		ULearningAgentsPolicy Policy; // 0x90(0x8)
		ULearningAgentsNeuralNetwork CriticNetwork; // 0x98(0x8)
		unsigned char UnknownData01_7[0x1D8]; // 0xA0(0x1D8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsCritic");
			return ret;
		}

		void SetupCritic(ULearningAgentsManager InManager, ULearningAgentsInteractor InInteractor, ULearningAgentsPolicy InPolicy, ULearningAgentsNeuralNetwork CriticNeuralNetworkAsset, bool bReinitializeCriticNetwork, FLearningAgentsCriticSettings& CriticSettings, int32_t Seed); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EA2940
		ULearningAgentsCritic MakeCritic(ULearningAgentsManager InManager, ULearningAgentsInteractor InInteractor, ULearningAgentsPolicy InPolicy, UClass Class, FName Name, ULearningAgentsNeuralNetwork CriticNeuralNetworkAsset, bool bReinitializeCriticNetwork, FLearningAgentsCriticSettings& CriticSettings, int32_t Seed); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA2860
		float GetEstimatedDiscountedReturn(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EA2780
		ULearningAgentsNeuralNetwork GetCriticNetworkAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EA26A0
		void EvaluateCritic(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA25C0
	};


	// Class LearningAgents.LearningAgentsInteractor
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x2C0 (0x348 - 0x88)
	class ULearningAgentsInteractor : public ULearningAgentsManagerListener	
	{
	public:
		ULearningAgentsObservationSchema ObservationSchema; // 0x88(0x8)
		FLearningAgentsObservationSchemaElement ObservationSchemaElement; // 0x90(0x8)
		ULearningAgentsActionSchema ActionSchema; // 0x98(0x8)
		FLearningAgentsActionSchemaElement ActionSchemaElement; // 0xA0(0x8)
		ULearningAgentsObservationObject ObservationObject; // 0xA8(0x8)
		TArray ObservationObjectElements; // 0xB0(0x10)
		ULearningAgentsActionObject ActionObject; // 0xC0(0x8)
		TArray ActionObjectElements; // 0xC8(0x10)
		unsigned char UnknownData01_7[0x270]; // 0xD8(0x270) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsInteractor");
			return ret;
		}

		void SpecifyAgentObservation(FLearningAgentsObservationSchemaElement& OutObservationSchemaElement, ULearningAgentsObservationSchema InObservationSchema); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EA3BA0
		void SpecifyAgentAction(FLearningAgentsActionSchemaElement& OutActionSchemaElement, ULearningAgentsActionSchema InActionSchema); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EA3AC0
		void SetupInteractor(ULearningAgentsManager InManager); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA39E0
		void SetObservationVector(TArray& ObservationVector, int32_t InObservationCompatibilityHash, int32_t AgentId, bool bIncrementIteration); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EA3900
		void SetActionVector(TArray& ActionVector, int32_t InActionCompatibilityHash, int32_t AgentId, bool bIncrementIteration); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EA3820
		void PerformAgentActions(ULearningAgentsActionObject InActionObject, TArray& InActionObjectElements, TArray& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EA3740
		void PerformAgentAction(ULearningAgentsActionObject InActionObject, FLearningAgentsActionObjectElement& InActionObjectElement, int32_t AgentId); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EA3660
		void PerformActions(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA3580
		ULearningAgentsInteractor MakeInteractor(ULearningAgentsManager InManager, UClass Class, FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EA34A0
		bool HasObservationVector(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EA33C0
		bool HasActionVector(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EA32E0
		int32_t GetObservationVectorSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EA3200
		void GetObservationVector(TArray& OutObservationVector, int32_t& OutObservationCompatibilityHash, int32_t AgentId); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EA3120
		int32_t GetObservationEncodedVectorSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EA3040
		int32_t GetActionVectorSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EA2F60
		void GetActionVector(TArray& OutActionVector, int32_t& OutActionCompatibilityHash, int32_t AgentId); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EA2E80
		int32_t GetActionEncodedVectorSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EA2DA0
		int32_t GetActionDistributionVectorSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EA2CC0
		void GatherObservations(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA2BE0
		void GatherAgentObservations(TArray& OutObservationObjectElements, ULearningAgentsObservationObject InObservationObject, TArray& AgentIds); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EA2B00
		void GatherAgentObservation(FLearningAgentsObservationObjectElement& OutObservationObjectElement, ULearningAgentsObservationObject InObservationObject, int32_t AgentId); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414EA2A20
	};


	// Class LearningAgents.LearningAgentsManager
	// Inherited from UActorComponent -> UObject
	// Size: 0x88 (0x128 - 0xA0)
	class ULearningAgentsManager : public UActorComponent	
	{
	public:
		int32_t MaxAgentNum; // 0xA0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		TArray Agents; // 0xA8(0x10)
		TArray Listeners; // 0xB8(0x10)
		unsigned char UnknownData03_7[0x60]; // 0xC8(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsManager");
			return ret;
		}

		void ResetAllAgents(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA4C40
		void ResetAgents(TArray& AgentIds); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EA4B60
		void ResetAgent(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA4A80
		void RemoveListener(ULearningAgentsManagerListener Listener); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA49A0
		void RemoveAllAgents(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA48C0
		void RemoveAgents(TArray& AgentIds); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EA47E0
		void RemoveAgent(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA4700
		bool HasAgentObject(UObject Agent); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EA4620
		bool HasAgent(int32_t AgentId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EA4540
		int32_t GetMaxAgentNum(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EA4460
		void GetAllAgents(TArray& OutAgents, TArray& OutAgentIds, UClass AgentClass); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414EA4380
		void GetAgents(TArray& OutAgents, TArray& AgentIds, UClass AgentClass); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414EA42A0
		int32_t GetAgentNum(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EA41C0
		void GetAgentIds(TArray& OutAgentIds, TArray& InAgents); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414EA40E0
		int32_t GetAgentId(UObject Agent); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EA4000
		UObject GetAgent(int32_t AgentId, UClass AgentClass); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EA3F20
		void AddListener(ULearningAgentsManagerListener Listener); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA3E40
		void AddAgents(TArray& OutAgentIds, TArray& InAgents); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EA3D60
		int32_t AddAgent(UObject Agent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA3C80
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
		ULearningNeuralNetworkData NeuralNetworkData; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsNeuralNetwork");
			return ret;
		}

		void SaveNetworkToSnapshot(FFilePath& File); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EA50A0
		void SaveNetworkToAsset(ULearningAgentsNeuralNetwork NeuralNetworkAsset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA4FC0
		void ResetNetwork(); // Flags: Final|Native|Public 0x7FF414EA4EE0
		void LoadNetworkFromSnapshot(FFilePath& File); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EA4E00
		void LoadNetworkFromAsset(ULearningAgentsNeuralNetwork NeuralNetworkAsset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EA4D20
	};


	// Class LearningAgents.LearningAgentsObservationSchema
	// Inherited from UObject
	// Size: 0xE8 (0x110 - 0x28)
	class ULearningAgentsObservationSchema : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0xE8]; // 0x28(0xE8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x98]; // 0x28(0x98) UNKNOWN PROPERTY

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

		bool ValidateObservationObjectMatchesSchema(ULearningAgentsObservationSchema Schema, FLearningAgentsObservationSchemaElement SchemaElement, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement ObjectElement); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EABE00
		FLearningAgentsObservationSchemaElement SpecifyVelocityObservation(ULearningAgentsObservationSchema Schema, float VelocityScale, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EABD20
		FLearningAgentsObservationSchemaElement SpecifyTransformObservation(ULearningAgentsObservationSchema Schema, float LocationScale, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EABC40
		FLearningAgentsObservationSchemaElement SpecifyStructObservationFromArrays(ULearningAgentsObservationSchema Schema, TArray& ElementNames, TArray& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EABB60
		FLearningAgentsObservationSchemaElement SpecifyStructObservation(ULearningAgentsObservationSchema Schema, TMap& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EABA80
		FLearningAgentsObservationSchemaElement SpecifyStaticArrayObservation(ULearningAgentsObservationSchema Schema, FLearningAgentsObservationSchemaElement Element, int32_t Num, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAB9A0
		FLearningAgentsObservationSchemaElement SpecifySetObservation(ULearningAgentsObservationSchema Schema, FLearningAgentsObservationSchemaElement Element, int32_t MaxNum, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAB8C0
		FLearningAgentsObservationSchemaElement SpecifyScaleObservation(ULearningAgentsObservationSchema Schema, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAB7E0
		FLearningAgentsObservationSchemaElement SpecifyRotationObservation(ULearningAgentsObservationSchema Schema, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAB700
		FLearningAgentsObservationSchemaElement SpecifyProportionAlongSplineObservation(ULearningAgentsObservationSchema Schema, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAB620
		FLearningAgentsObservationSchemaElement SpecifyProportionAlongRayObservation(ULearningAgentsObservationSchema Schema, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAB540
		FLearningAgentsObservationSchemaElement SpecifyPairObservation(ULearningAgentsObservationSchema Schema, FLearningAgentsObservationSchemaElement Key, FLearningAgentsObservationSchemaElement Value, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAB460
		FLearningAgentsObservationSchemaElement SpecifyOptionalObservation(ULearningAgentsObservationSchema Schema, FLearningAgentsObservationSchemaElement Element, int32_t EncodingSize, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAB380
		FLearningAgentsObservationSchemaElement SpecifyNullObservation(ULearningAgentsObservationSchema Schema, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAB2A0
		FLearningAgentsObservationSchemaElement SpecifyMapObservation(ULearningAgentsObservationSchema Schema, FLearningAgentsObservationSchemaElement KeyElement, FLearningAgentsObservationSchemaElement ValueElement, int32_t MaxNum, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAB1C0
		FLearningAgentsObservationSchemaElement SpecifyLocationObservation(ULearningAgentsObservationSchema Schema, float LocationScale, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAB0E0
		FLearningAgentsObservationSchemaElement SpecifyLocationAlongSplineObservation(ULearningAgentsObservationSchema Schema, float LocationScale, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAB000
		FLearningAgentsObservationSchemaElement SpecifyInclusiveUnionObservationFromArrays(ULearningAgentsObservationSchema Schema, TArray& ElementNames, TArray& Elements, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EAAF20
		FLearningAgentsObservationSchemaElement SpecifyInclusiveUnionObservation(ULearningAgentsObservationSchema Schema, TMap& Elements, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EAAE40
		FLearningAgentsObservationSchemaElement SpecifyInclusiveDiscreteObservation(ULearningAgentsObservationSchema Schema, int32_t Size, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAAD60
		FLearningAgentsObservationSchemaElement SpecifyFloatObservation(ULearningAgentsObservationSchema Schema, float FloatScale, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAAC80
		FLearningAgentsObservationSchemaElement SpecifyExclusiveUnionObservationFromArrays(ULearningAgentsObservationSchema Schema, TArray& ElementNames, TArray& Elements, int32_t EncodingSize, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EAABA0
		FLearningAgentsObservationSchemaElement SpecifyExclusiveUnionObservation(ULearningAgentsObservationSchema Schema, TMap& Elements, int32_t EncodingSize, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EAAAC0
		FLearningAgentsObservationSchemaElement SpecifyExclusiveDiscreteObservation(ULearningAgentsObservationSchema Schema, int32_t Size, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAA9E0
		FLearningAgentsObservationSchemaElement SpecifyEnumObservation(ULearningAgentsObservationSchema Schema, UEnum Enum, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAA900
		FLearningAgentsObservationSchemaElement SpecifyEncodingObservation(ULearningAgentsObservationSchema Schema, FLearningAgentsObservationSchemaElement Element, int32_t EncodingSize, int32_t HiddenLayerNum, ELearningAgentsActivationFunction ActivationFunction, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAA820
		FLearningAgentsObservationSchemaElement SpecifyEitherObservation(ULearningAgentsObservationSchema Schema, FLearningAgentsObservationSchemaElement A, FLearningAgentsObservationSchemaElement B, int32_t EncodingSize, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAA740
		FLearningAgentsObservationSchemaElement SpecifyDirectionObservation(ULearningAgentsObservationSchema Schema, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAA660
		FLearningAgentsObservationSchemaElement SpecifyDirectionAlongSplineObservation(ULearningAgentsObservationSchema Schema, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAA580
		FLearningAgentsObservationSchemaElement SpecifyCountObservation(ULearningAgentsObservationSchema Schema, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAA4A0
		FLearningAgentsObservationSchemaElement SpecifyContinuousObservation(ULearningAgentsObservationSchema Schema, int32_t Size, float Scale, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAA3C0
		FLearningAgentsObservationSchemaElement SpecifyBoolObservation(ULearningAgentsObservationSchema Schema, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAA2E0
		FLearningAgentsObservationSchemaElement SpecifyBitmaskObservation(ULearningAgentsObservationSchema Schema, UEnum Enum, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAA200
		FLearningAgentsObservationSchemaElement SpecifyArrayObservation(ULearningAgentsObservationSchema Schema, FLearningAgentsObservationSchemaElement Element, int32_t MaxNum, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAA120
		FLearningAgentsObservationSchemaElement SpecifyAngleObservation(ULearningAgentsObservationSchema Schema, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EAA040
		FTransform ProjectTransformOntoGroundPlane(FTransform Transform, FVector LocalForwardVector, float GroundPlaneHeight); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA9F60
		FLearningAgentsObservationObjectElement MakeVelocityObservation(ULearningAgentsObservationObject Object, FVector Velocity, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerVelocityLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA9E80
		FLearningAgentsObservationObjectElement MakeTransformObservation(ULearningAgentsObservationObject Object, FTransform Transform, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA9DA0
		FLearningAgentsObservationObjectElement MakeStructObservationFromArrays(ULearningAgentsObservationObject Object, TArray& ElementNames, TArray& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA9CC0
		FLearningAgentsObservationObjectElement MakeStructObservation(ULearningAgentsObservationObject Object, TMap& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA9BE0
		FLearningAgentsObservationObjectElement MakeStaticArrayObservation(ULearningAgentsObservationObject Object, TArray& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA9B00
		FLearningAgentsObservationObjectElement MakeSetObservationFromArray(ULearningAgentsObservationObject Object, TArray& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA9A20
		FLearningAgentsObservationObjectElement MakeSetObservation(ULearningAgentsObservationObject Object, TSet& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA9940
		FLearningAgentsObservationObjectElement MakeScaleObservation(ULearningAgentsObservationObject Object, FVector Scale, FVector RelativeScale, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerScaleLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA9860
		FLearningAgentsObservationObjectElement MakeRotationObservationFromQuat(ULearningAgentsObservationObject Object, FQuat Rotation, FQuat RelativeRotation, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA9780
		FLearningAgentsObservationObjectElement MakeRotationObservation(ULearningAgentsObservationObject Object, FRotator Rotation, FRotator RelativeRotation, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA96A0
		FLearningAgentsObservationObjectElement MakeProportionAlongSplineObservation(ULearningAgentsObservationObject Object, USplineComponent SplineComponent, float DistanceAlongSpline, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA95C0
		FLearningAgentsObservationObjectElement MakeProportionAlongRayObservation(ULearningAgentsObservationObject Object, FVector RayStart, FVector RayEnd, FTransform RayTransform, TEnumAsByte CollisionChannel, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA94E0
		FLearningAgentsObservationObjectElement MakePairObservation(ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Key, FLearningAgentsObservationObjectElement Value, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA9400
		FLearningAgentsObservationObjectElement MakeOptionalValidObservation(ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA9320
		FLearningAgentsObservationObjectElement MakeOptionalObservation(ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, ELearningAgentsOptionalObservation Option, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA9240
		FLearningAgentsObservationObjectElement MakeOptionalNullObservation(ULearningAgentsObservationObject Object, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA9160
		FLearningAgentsObservationObjectElement MakeNullObservation(ULearningAgentsObservationObject Object, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA9080
		FLearningAgentsObservationObjectElement MakeMapObservationFromArrays(ULearningAgentsObservationObject Object, TArray& Keys, TArray& Values, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA8FA0
		FLearningAgentsObservationObjectElement MakeMapObservation(ULearningAgentsObservationObject Object, TMap& Map, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA8EC0
		FLearningAgentsObservationObjectElement MakeLocationObservation(ULearningAgentsObservationObject Object, FVector Location, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA8DE0
		FLearningAgentsObservationObjectElement MakeLocationAlongSplineObservation(ULearningAgentsObservationObject Object, USplineComponent SplineComponent, float DistanceAlongSpline, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA8D00
		FLearningAgentsObservationObjectElement MakeInclusiveUnionObservationFromArrays(ULearningAgentsObservationObject Object, TArray& ElementNames, TArray& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA8C20
		FLearningAgentsObservationObjectElement MakeInclusiveUnionObservation(ULearningAgentsObservationObject Object, TMap& Elements, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA8B40
		FLearningAgentsObservationObjectElement MakeInclusiveDiscreteObservation(ULearningAgentsObservationObject Object, TArray& DiscreteIndices, int32_t Size, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA8A60
		FLearningAgentsObservationObjectElement MakeFloatObservation(ULearningAgentsObservationObject Object, float Value, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA8980
		FLearningAgentsObservationObjectElement MakeExclusiveUnionObservation(ULearningAgentsObservationObject Object, FName ElementName, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA88A0
		FLearningAgentsObservationObjectElement MakeExclusiveDiscreteObservation(ULearningAgentsObservationObject Object, int32_t DiscreteIndex, int32_t Size, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA87C0
		FLearningAgentsObservationObjectElement MakeEnumObservation(ULearningAgentsObservationObject Object, UEnum Enum, char EnumValue, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA86E0
		FLearningAgentsObservationObjectElement MakeEncodingObservation(ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA8600
		FLearningAgentsObservationObjectElement MakeEitherObservation(ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, ELearningAgentsEitherObservation Either, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA8520
		FLearningAgentsObservationObjectElement MakeEitherBObservation(ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement B, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA8440
		FLearningAgentsObservationObjectElement MakeEitherAObservation(ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement A, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EA8360
		FLearningAgentsObservationObjectElement MakeDirectionObservation(ULearningAgentsObservationObject Object, FVector Direction, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerDirectionLocation, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA8280
		FLearningAgentsObservationObjectElement MakeDirectionAlongSplineObservation(ULearningAgentsObservationObject Object, USplineComponent SplineComponent, float DistanceAlongSpline, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA81A0
		FLearningAgentsObservationObjectElement MakeCountObservation(ULearningAgentsObservationObject Object, int32_t Num, int32_t MaxNum, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA80C0
		FLearningAgentsObservationObjectElement MakeContinuousObservation(ULearningAgentsObservationObject Object, TArray& Values, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA7FE0
		FLearningAgentsObservationObjectElement MakeBoolObservation(ULearningAgentsObservationObject Object, bool bValue, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA7F00
		FLearningAgentsObservationObjectElement MakeBitmaskObservation(ULearningAgentsObservationObject Object, UEnum Enum, int32_t BitmaskValue, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA7E20
		FLearningAgentsObservationObjectElement MakeArrayObservation(ULearningAgentsObservationObject Object, TArray& Elements, int32_t MaxNum, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA7D40
		FLearningAgentsObservationObjectElement MakeAngleObservationRadians(ULearningAgentsObservationObject Object, float Angle, float RelativeAngle, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA7C60
		FLearningAgentsObservationObjectElement MakeAngleObservation(ULearningAgentsObservationObject Object, float Angle, float RelativeAngle, FName tag, bool bVisualLoggerEnabled, ULearningAgentsManagerListener VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EA7B80
		void LogObservation(ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EA7AA0
		bool GetVelocityObservation(FVector& OutVelocity, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EA79C0
		bool GetTransformObservation(FTransform& OutTransform, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EA78E0
		bool GetStructObservationToArrays(TArray& OutElementNames, TArray& OutElements, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA7800
		bool GetStructObservationNum(int32_t& OutNum, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA7720
		bool GetStructObservationElement(FLearningAgentsObservationObjectElement& OutElement, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName ElementName, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA7640
		bool GetStructObservation(TMap& OutElements, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA7560
		bool GetStaticArrayObservationNum(int32_t& OutNum, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA7480
		bool GetStaticArrayObservation(TArray& OutElements, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA73A0
		bool GetSetObservationToArray(TArray& OutElements, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA72C0
		bool GetSetObservationNum(int32_t& OutNum, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA71E0
		bool GetSetObservation(TSet& OutElements, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA7100
		bool GetScaleObservation(FVector& OutScale, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FVector RelativeScale, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EA7020
		bool GetRotationObservationAsQuat(FQuat& OutRotation, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FQuat RelativeRotation, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EA6F40
		bool GetRotationObservation(FRotator& OutRotation, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FRotator RelativeRotation, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EA6E60
		bool GetProportionAlongSplineObservation(bool& bOutIsClosedLoop, float& OutAngle, float& OutPropotion, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA6D80
		bool GetProportionAlongRayObservation(float& OutProportion, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EA6CA0
		bool GetPairObservation(FLearningAgentsObservationObjectElement& OutKey, FLearningAgentsObservationObjectElement& OutValue, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA6BC0
		bool GetOptionalObservation(ELearningAgentsOptionalObservation& OutOption, FLearningAgentsObservationObjectElement& OutElement, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA6AE0
		bool GetNullObservation(ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EA6A00
		bool GetMapObservationToArrays(TArray& OutKeys, TArray& OutValues, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA6920
		bool GetMapObservationNum(int32_t& OutNum, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA6840
		bool GetMapObservation(TMap& OutElements, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA6760
		bool GetLocationObservation(FVector& OutLocation, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EA6680
		bool GetLocationAlongSplineObservation(FVector& OutLocation, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EA65A0
		bool GetInclusiveUnionObservationToArrays(TArray& OutElementNames, TArray& OutElements, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA64C0
		bool GetInclusiveUnionObservationNum(int32_t& OutNum, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA63E0
		bool GetInclusiveUnionObservation(TMap& OutElements, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA6300
		bool GetInclusiveDiscreteObservationNum(int32_t& OutNum, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA6220
		bool GetInclusiveDiscreteObservation(TArray& OutIndices, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA6140
		bool GetFloatObservation(float& OutValue, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA6060
		bool GetExclusiveUnionObservation(FName& OutElementName, FLearningAgentsObservationObjectElement& OutElement, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA5F80
		bool GetExclusiveDiscreteObservation(int32_t& OutIndex, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA5EA0
		bool GetEnumObservation(char& OutEnumValue, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, UEnum Enum, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA5DC0
		bool GetEncodingObservation(FLearningAgentsObservationObjectElement& OutElement, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA5CE0
		bool GetEitherObservation(ELearningAgentsEitherObservation& OutEither, FLearningAgentsObservationObjectElement& OutElement, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA5C00
		bool GetDirectionObservation(FVector& OutDirection, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EA5B20
		bool GetDirectionAlongSplineObservation(FVector& OutDirection, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EA5A40
		bool GetCountObservation(int32_t& OutNum, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, int32_t MaxNum, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA5960
		bool GetContinuousObservationNum(int32_t& OutNum, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA5880
		bool GetContinuousObservation(TArray& OutValues, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA57A0
		bool GetBoolObservation(bool& bOutValue, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA56C0
		bool GetBitmaskObservation(int32_t& OutBitmaskValue, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, UEnum Enum, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA55E0
		bool GetArrayObservationNum(int32_t& OutNum, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA5500
		bool GetArrayObservation(TArray& OutElements, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, int32_t MaxNum, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA5420
		bool GetAngleObservationRadians(float& OutAngle, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, float RelativeAngle, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA5340
		bool GetAngleObservation(float& OutAngle, ULearningAgentsObservationObject Object, FLearningAgentsObservationObjectElement Element, float RelativeAngle, FName tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EA5260
		UEnum FindEnumByName(FString Name); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EA5180
	};


	// Class LearningAgents.LearningAgentsPolicy
	// Inherited from ULearningAgentsManagerListener -> UObject
	// Size: 0x410 (0x498 - 0x88)
	class ULearningAgentsPolicy : public ULearningAgentsManagerListener	
	{
	public:
		ULearningAgentsInteractor Interactor; // 0x88(0x8)
		ULearningAgentsNeuralNetwork EncoderNetwork; // 0x90(0x8)
		ULearningAgentsNeuralNetwork PolicyNetwork; // 0x98(0x8)
		ULearningAgentsNeuralNetwork DecoderNetwork; // 0xA0(0x8)
		unsigned char UnknownData01_7[0x3F0]; // 0xA8(0x3F0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningAgents.LearningAgentsPolicy");
			return ret;
		}

		void SetupPolicy(ULearningAgentsManager InManager, ULearningAgentsInteractor InInteractor, ULearningAgentsNeuralNetwork EncoderNeuralNetworkAsset, ULearningAgentsNeuralNetwork PolicyNeuralNetworkAsset, ULearningAgentsNeuralNetwork DecoderNeuralNetworkAsset, bool bReinitializeEncoderNetwork, bool bReinitializePolicyNetwork, bool bReinitializeDecoderNetwork, FLearningAgentsPolicySettings& PolicySettings, int32_t Seed); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EAC880
		void SetMemoryState(int32_t AgentId, TArray& InMemoryState); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EAC7A0
		void RunInference(float ActionNoiseScale); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EAC6C0
		ULearningAgentsPolicy MakePolicy(ULearningAgentsManager InManager, ULearningAgentsInteractor InInteractor, UClass Class, FName Name, ULearningAgentsNeuralNetwork EncoderNeuralNetworkAsset, ULearningAgentsNeuralNetwork PolicyNeuralNetworkAsset, ULearningAgentsNeuralNetwork DecoderNeuralNetworkAsset, bool bReinitializeEncoderNetwork, bool bReinitializePolicyNetwork, bool bReinitializeDecoderNetwork, FLearningAgentsPolicySettings& PolicySettings, int32_t Seed); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EAC5E0
		ULearningAgentsNeuralNetwork GetPolicyNetworkAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EAC500
		int32_t GetMemoryStateSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EAC420
		void GetMemoryState(TArray& OutMemoryState, int32_t AgentId); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EAC340
		ULearningAgentsNeuralNetwork GetEncoderNetworkAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EAC260
		ULearningAgentsNeuralNetwork GetDecoderNetworkAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EAC180
		void EvaluatePolicy(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EAC0A0
		void EncodeObservations(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EABFC0
		void DecodeAndSampleActions(float ActionNoiseScale); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EABEE0
	};

}
