#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FieldSystemEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FieldSystemEngine.FieldSystemActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AFieldSystemActor : public AActor	
	{
	public:
		UFieldSystemComponent FieldSystemComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.FieldSystemActor");
			return ret;
		}
	};


	// Class FieldSystemEngine.FieldSystem
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFieldSystem : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.FieldSystem");
			return ret;
		}
	};


	// Class FieldSystemEngine.FieldSystemComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xD8 (0x5A0 - 0x4C8)
	class UFieldSystemComponent : public UPrimitiveComponent	
	{
	public:
		UFieldSystem FieldSystem; // 0x4C8(0x8)
		bool bIsWorldField; // 0x4D0(0x1)
		bool bIsChaosField; // 0x4D1(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x4D2(0x6) UNKNOWN PROPERTY
		TArray SupportedSolvers; // 0x4D8(0x10)
		FFieldObjectCommands ConstructionCommands; // 0x4E8(0x30)
		FFieldObjectCommands BufferCommands; // 0x518(0x30)
		unsigned char UnknownData03_7[0x58]; // 0x548(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.FieldSystemComponent");
			return ret;
		}

		void ResetFieldSystem(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A48B8
		void RemovePersistentFields(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A47D8
		void ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144A46F8
		void ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32_t Iterations); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144A4618
		void ApplyStayDynamicField(bool Enabled, FVector Position, float Radius); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144A4538
		void ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144A4458
		void ApplyRadialForce(bool Enabled, FVector Position, float Magnitude); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144A4378
		void ApplyPhysicsField(bool Enabled, TEnumAsByte Target, UFieldSystemMetaData MetaData, UFieldNodeBase Field); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A4298
		void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144A41B8
		void AddPersistentField(bool Enabled, TEnumAsByte Target, UFieldSystemMetaData MetaData, UFieldNodeBase Field); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A40D8
		void AddFieldCommand(bool Enabled, TEnumAsByte Target, UFieldSystemMetaData MetaData, UFieldNodeBase Field); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A3FF8
	};


	// Class FieldSystemEngine.FieldSystemMetaData
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UFieldSystemMetaData : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.FieldSystemMetaData");
			return ret;
		}
	};


	// Class FieldSystemEngine.FieldSystemMetaDataIteration
	// Inherited from UFieldSystemMetaData -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFieldSystemMetaDataIteration : public UFieldSystemMetaData	
	{
	public:
		int32_t Iterations; // 0xA0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.FieldSystemMetaDataIteration");
			return ret;
		}

		UFieldSystemMetaDataIteration SetMetaDataIteration(int32_t Iterations); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4144A4998
	};


	// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
	// Inherited from UFieldSystemMetaData -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData	
	{
	public:
		TEnumAsByte ResolutionType; // 0xA0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution");
			return ret;
		}

		UFieldSystemMetaDataProcessingResolution SetMetaDataaProcessingResolutionType(TEnumAsByte ResolutionType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4144A4A78
	};


	// Class FieldSystemEngine.FieldSystemMetaDataFilter
	// Inherited from UFieldSystemMetaData -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFieldSystemMetaDataFilter : public UFieldSystemMetaData	
	{
	public:
		TEnumAsByte FilterType; // 0xA0(0x1)
		TEnumAsByte ObjectType; // 0xA1(0x1)
		TEnumAsByte PositionType; // 0xA2(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xA3(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.FieldSystemMetaDataFilter");
			return ret;
		}

		UFieldSystemMetaDataFilter SetMetaDataFilterType(TEnumAsByte FilterType, TEnumAsByte ObjectType, TEnumAsByte PositionType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4144A4B58
	};


	// Class FieldSystemEngine.FieldNodeBase
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UFieldNodeBase : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.FieldNodeBase");
			return ret;
		}
	};


	// Class FieldSystemEngine.FieldNodeInt
	// Inherited from UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UFieldNodeInt : public UFieldNodeBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.FieldNodeInt");
			return ret;
		}
	};


	// Class FieldSystemEngine.FieldNodeFloat
	// Inherited from UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UFieldNodeFloat : public UFieldNodeBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.FieldNodeFloat");
			return ret;
		}
	};


	// Class FieldSystemEngine.FieldNodeVector
	// Inherited from UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UFieldNodeVector : public UFieldNodeBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.FieldNodeVector");
			return ret;
		}
	};


	// Class FieldSystemEngine.UniformInteger
	// Inherited from UFieldNodeInt -> UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UUniformInteger : public UFieldNodeInt	
	{
	public:
		int32_t Magnitude; // 0xA0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.UniformInteger");
			return ret;
		}

		UUniformInteger SetUniformInteger(int32_t Magnitude); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4144A4C38
	};


	// Class FieldSystemEngine.RadialIntMask
	// Inherited from UFieldNodeInt -> UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class URadialIntMask : public UFieldNodeInt	
	{
	public:
		float Radius; // 0xA0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		FVector Position; // 0xA8(0x18)
		int32_t InteriorValue; // 0xC0(0x4)
		int32_t ExteriorValue; // 0xC4(0x4)
		TEnumAsByte SetMaskCondition; // 0xC8(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.RadialIntMask");
			return ret;
		}

		URadialIntMask SetRadialIntMask(float Radius, FVector Position, int32_t InteriorValue, int32_t ExteriorValue, TEnumAsByte SetMaskConditionIn); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144A4D18
	};


	// Class FieldSystemEngine.UniformScalar
	// Inherited from UFieldNodeFloat -> UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UUniformScalar : public UFieldNodeFloat	
	{
	public:
		float Magnitude; // 0xA0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.UniformScalar");
			return ret;
		}

		UUniformScalar SetUniformScalar(float Magnitude); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4144A4DF8
	};


	// Class FieldSystemEngine.WaveScalar
	// Inherited from UFieldNodeFloat -> UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UWaveScalar : public UFieldNodeFloat	
	{
	public:
		float Magnitude; // 0xA0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		FVector Position; // 0xA8(0x18)
		float WaveLength; // 0xC0(0x4)
		float Period; // 0xC4(0x4)
		TEnumAsByte Function; // 0xC8(0x1)
		TEnumAsByte Falloff; // 0xC9(0x1)
		unsigned char UnknownData03_7[0x6]; // 0xCA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.WaveScalar");
			return ret;
		}

		UWaveScalar SetWaveScalar(float Magnitude, FVector Position, float WaveLength, float Period, float Time, TEnumAsByte Function, TEnumAsByte Falloff); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144A4ED8
	};


	// Class FieldSystemEngine.RadialFalloff
	// Inherited from UFieldNodeFloat -> UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class URadialFalloff : public UFieldNodeFloat	
	{
	public:
		float Magnitude; // 0xA0(0x4)
		float MinRange; // 0xA4(0x4)
		float MaxRange; // 0xA8(0x4)
		float Default; // 0xAC(0x4)
		float Radius; // 0xB0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FVector Position; // 0xB8(0x18)
		TEnumAsByte Falloff; // 0xD0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.RadialFalloff");
			return ret;
		}

		URadialFalloff SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector Position, TEnumAsByte Falloff); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144A4FB8
	};


	// Class FieldSystemEngine.PlaneFalloff
	// Inherited from UFieldNodeFloat -> UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UPlaneFalloff : public UFieldNodeFloat	
	{
	public:
		float Magnitude; // 0xA0(0x4)
		float MinRange; // 0xA4(0x4)
		float MaxRange; // 0xA8(0x4)
		float Default; // 0xAC(0x4)
		float Distance; // 0xB0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FVector Position; // 0xB8(0x18)
		FVector Normal; // 0xD0(0x18)
		TEnumAsByte Falloff; // 0xE8(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.PlaneFalloff");
			return ret;
		}

		UPlaneFalloff SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector Position, FVector Normal, TEnumAsByte Falloff); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144A5098
	};


	// Class FieldSystemEngine.BoxFalloff
	// Inherited from UFieldNodeFloat -> UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class UBoxFalloff : public UFieldNodeFloat	
	{
	public:
		float Magnitude; // 0xA0(0x4)
		float MinRange; // 0xA4(0x4)
		float MaxRange; // 0xA8(0x4)
		float Default; // 0xAC(0x4)
		FTransform Transform; // 0xB0(0x60)
		TEnumAsByte Falloff; // 0x110(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x111(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.BoxFalloff");
			return ret;
		}

		UBoxFalloff SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, TEnumAsByte Falloff); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144A5178
	};


	// Class FieldSystemEngine.NoiseField
	// Inherited from UFieldNodeFloat -> UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x70 (0x110 - 0xA0)
	class UNoiseField : public UFieldNodeFloat	
	{
	public:
		float MinRange; // 0xA0(0x4)
		float MaxRange; // 0xA4(0x4)
		unsigned char UnknownData01_6[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0xB0(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.NoiseField");
			return ret;
		}

		UNoiseField SetNoiseField(float MinRange, float MaxRange, FTransform Transform); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144A5258
	};


	// Class FieldSystemEngine.UniformVector
	// Inherited from UFieldNodeVector -> UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UUniformVector : public UFieldNodeVector	
	{
	public:
		float Magnitude; // 0xA0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		FVector Direction; // 0xA8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.UniformVector");
			return ret;
		}

		UUniformVector SetUniformVector(float Magnitude, FVector Direction); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144A5338
	};


	// Class FieldSystemEngine.RadialVector
	// Inherited from UFieldNodeVector -> UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class URadialVector : public UFieldNodeVector	
	{
	public:
		float Magnitude; // 0xA0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		FVector Position; // 0xA8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.RadialVector");
			return ret;
		}

		URadialVector SetRadialVector(float Magnitude, FVector Position); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144A5418
	};


	// Class FieldSystemEngine.RandomVector
	// Inherited from UFieldNodeVector -> UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class URandomVector : public UFieldNodeVector	
	{
	public:
		float Magnitude; // 0xA0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.RandomVector");
			return ret;
		}

		URandomVector SetRandomVector(float Magnitude); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4144A54F8
	};


	// Class FieldSystemEngine.OperatorField
	// Inherited from UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UOperatorField : public UFieldNodeBase	
	{
	public:
		float Magnitude; // 0xA0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		UFieldNodeBase RightField; // 0xA8(0x8)
		UFieldNodeBase LeftField; // 0xB0(0x8)
		TEnumAsByte Operation; // 0xB8(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.OperatorField");
			return ret;
		}

		UOperatorField SetOperatorField(float Magnitude, UFieldNodeBase LeftField, UFieldNodeBase RightField, TEnumAsByte Operation); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4144A55D8
	};


	// Class FieldSystemEngine.ToIntegerField
	// Inherited from UFieldNodeInt -> UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UToIntegerField : public UFieldNodeInt	
	{
	public:
		UFieldNodeFloat FloatField; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.ToIntegerField");
			return ret;
		}

		UToIntegerField SetToIntegerField(UFieldNodeFloat FloatField); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4144A56B8
	};


	// Class FieldSystemEngine.ToFloatField
	// Inherited from UFieldNodeFloat -> UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UToFloatField : public UFieldNodeFloat	
	{
	public:
		UFieldNodeInt IntField; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.ToFloatField");
			return ret;
		}

		UToFloatField SetToFloatField(UFieldNodeInt IntegerField); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4144A5798
	};


	// Class FieldSystemEngine.CullingField
	// Inherited from UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UCullingField : public UFieldNodeBase	
	{
	public:
		UFieldNodeBase Culling; // 0xA0(0x8)
		UFieldNodeBase Field; // 0xA8(0x8)
		TEnumAsByte Operation; // 0xB0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.CullingField");
			return ret;
		}

		UCullingField SetCullingField(UFieldNodeBase Culling, UFieldNodeBase Field, TEnumAsByte Operation); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4144A5878
	};


	// Class FieldSystemEngine.ReturnResultsTerminal
	// Inherited from UFieldNodeBase -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UReturnResultsTerminal : public UFieldNodeBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldSystemEngine.ReturnResultsTerminal");
			return ret;
		}

		UReturnResultsTerminal SetReturnResultsTerminal(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4144A5958
	};

}
