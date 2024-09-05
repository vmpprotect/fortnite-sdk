#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Constraints
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Constraints.ConstraintSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UConstraintSubsystem : public UEngineSubsystem	
	{
	public:
		FMulticastSparseDelegate OnConstraintAddedToSystem_BP; // 0x30(0x1)
		FMulticastSparseDelegate OnConstraintRemovedFromSystem_BP; // 0x31(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
		TArray ConstraintsInWorld; // 0x38(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Constraints.ConstraintSubsystem");
			return ret;
		}

		void OnConstraintRemovedFromSystem__DelegateSignature(UConstraintSubsystem Mananger, UTickableConstraint Constraint, bool bDoNotCompensate); // Flags: MulticastDelegate|Public|Delegate 0x7FF411033CB0
		void OnConstraintAddedToSystem__DelegateSignature(UConstraintSubsystem Mananger, UTickableConstraint Constraint); // Flags: MulticastDelegate|Public|Delegate 0x7FF411033BC8
	};


	// Class Constraints.ConstraintsActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AConstraintsActor : public AActor	
	{
	public:
		UConstraintsManager ConstraintsManager; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Constraints.ConstraintsActor");
			return ret;
		}
	};


	// Class Constraints.TickableConstraint
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UTickableConstraint : public UObject	
	{
	public:
		bool Active; // 0x28(0x1)
		bool bValid; // 0x29(0x1)
		unsigned char UnknownData01_7[0x66]; // 0x2A(0x66) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Constraints.TickableConstraint");
			return ret;
		}
	};


	// Class Constraints.ConstraintsManager
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UConstraintsManager : public UObject	
	{
	public:
		FMulticastSparseDelegate OnConstraintAdded_BP; // 0x28(0x1)
		FMulticastSparseDelegate OnConstraintRemoved_BP; // 0x29(0x1)
		unsigned char UnknownData01_6[0xE]; // 0x2A(0xE) UNKNOWN PROPERTY
		TArray Constraints; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Constraints.ConstraintsManager");
			return ret;
		}

		void OnConstraintRemoved__DelegateSignature(UConstraintsManager Mananger, UTickableConstraint Constraint, bool bDoNotCompensate); // Flags: MulticastDelegate|Public|Delegate 0x7FF411033AE0
		void OnConstraintAdded__DelegateSignature(UConstraintsManager Mananger, UTickableConstraint Constraint); // Flags: MulticastDelegate|Public|Delegate 0x7FF4110339F8
	};


	// Class Constraints.ConstraintsScriptingLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Constraints.ConstraintsScriptingLibrary");
			return ret;
		}

		bool RemoveThisConstraint(UWorld InWorld, UTickableConstraint InTickableConstraint); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144B3CD8
		bool RemoveConstraint(UWorld InWorld, int32_t InIndex); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144B3BF8
		TArray GetConstraintsArray(UWorld InWorld); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144B3B18
		UTransformableHandle CreateTransformableHandle(UWorld InWorld, UObject InObject, FName& InAttachmentName); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B3A38
		UTransformableComponentHandle CreateTransformableComponentHandle(UWorld InWorld, USceneComponent InSceneComponent, FName& InSocketName); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B3958
		UTickableTransformConstraint CreateFromType(UWorld InWorld, ETransformConstraintType InType); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144B3878
		bool AddConstraint(UWorld InWorld, UTransformableHandle InParentHandle, UTransformableHandle InChildHandle, UTickableTransformConstraint InConstraint, bool bMaintainOffset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144B3798
	};


	// Class Constraints.TransformableHandle
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UTransformableHandle : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x4]; // 0x28(0x4) UNKNOWN PROPERTY
		FMovieSceneObjectBindingID ConstraintBindingID; // 0x2C(0x18)
		unsigned char UnknownData03_7[0x1C]; // 0x44(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Constraints.TransformableHandle");
			return ret;
		}
	};


	// Class Constraints.TransformableComponentHandle
	// Inherited from UTransformableHandle -> UObject
	// Size: 0x10 (0x70 - 0x60)
	class UTransformableComponentHandle : public UTransformableHandle	
	{
	public:
		TWeakObjectPtr Component; // 0x60(0x8)
		FName SocketName; // 0x68(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Constraints.TransformableComponentHandle");
			return ret;
		}
	};


	// Class Constraints.TickableTransformConstraint
	// Inherited from UTickableConstraint -> UObject
	// Size: 0x20 (0xB0 - 0x90)
	class UTickableTransformConstraint : public UTickableConstraint	
	{
	public:
		UTransformableHandle ParentTRSHandle; // 0x90(0x8)
		UTransformableHandle ChildTRSHandle; // 0x98(0x8)
		bool bMaintainOffset; // 0xA0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		float Weight; // 0xA4(0x4)
		bool bDynamicOffset; // 0xA8(0x1)
		ETransformConstraintType Type; // 0xA9(0x1)
		unsigned char UnknownData03_7[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Constraints.TickableTransformConstraint");
			return ret;
		}
	};


	// Class Constraints.TickableTranslationConstraint
	// Inherited from UTickableTransformConstraint -> UTickableConstraint -> UObject
	// Size: 0x28 (0xD8 - 0xB0)
	class UTickableTranslationConstraint : public UTickableTransformConstraint	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY
		FVector OffsetTranslation; // 0xB8(0x18)
		FFilterOptionPerAxis AxisFilter; // 0xD0(0x3)
		unsigned char UnknownData03_7[0x5]; // 0xD3(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Constraints.TickableTranslationConstraint");
			return ret;
		}
	};


	// Class Constraints.TickableRotationConstraint
	// Inherited from UTickableTransformConstraint -> UTickableConstraint -> UObject
	// Size: 0x40 (0xF0 - 0xB0)
	class UTickableRotationConstraint : public UTickableTransformConstraint	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0xB0(0x10) UNKNOWN PROPERTY
		FQuat OffsetRotation; // 0xC0(0x20)
		FFilterOptionPerAxis AxisFilter; // 0xE0(0x3)
		unsigned char UnknownData03_7[0xD]; // 0xE3(0xD) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Constraints.TickableRotationConstraint");
			return ret;
		}
	};


	// Class Constraints.TickableScaleConstraint
	// Inherited from UTickableTransformConstraint -> UTickableConstraint -> UObject
	// Size: 0x28 (0xD8 - 0xB0)
	class UTickableScaleConstraint : public UTickableTransformConstraint	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY
		FVector OffsetScale; // 0xB8(0x18)
		FFilterOptionPerAxis AxisFilter; // 0xD0(0x3)
		unsigned char UnknownData03_7[0x5]; // 0xD3(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Constraints.TickableScaleConstraint");
			return ret;
		}
	};


	// Class Constraints.TickableParentConstraint
	// Inherited from UTickableTransformConstraint -> UTickableConstraint -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UTickableParentConstraint : public UTickableTransformConstraint	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0xB0(0x10) UNKNOWN PROPERTY
		FTransform OffsetTransform; // 0xC0(0x60)
		bool bScaling; // 0x120(0x1)
		FTransformFilter TransformFilter; // 0x121(0x9)
		unsigned char UnknownData03_7[0x6]; // 0x12A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Constraints.TickableParentConstraint");
			return ret;
		}
	};


	// Class Constraints.TickableLookAtConstraint
	// Inherited from UTickableTransformConstraint -> UTickableConstraint -> UObject
	// Size: 0x18 (0xC8 - 0xB0)
	class UTickableLookAtConstraint : public UTickableTransformConstraint	
	{
	public:
		FVector Axis; // 0xB0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Constraints.TickableLookAtConstraint");
			return ret;
		}
	};

}
