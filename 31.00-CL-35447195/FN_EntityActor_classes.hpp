#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EntityActor
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EntityActor.EntityAbilityInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEntityAbilityInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.EntityAbilityInterface");
			return ret;
		}
	};


	// Class EntityActor.EntityActorCustomReplicationComponent
	// Inherited from UEntityComponent -> UObject
	// Size: 0x8 (0x60 - 0x58)
	class UEntityActorCustomReplicationComponent : public UEntityComponent	
	{
	public:
		TEnumAsByte ReplicationOverride; // 0x58(0x1)
		TEnumAsByte ReplicationRelevancyBucketType; // 0x59(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x5A(0x2) UNKNOWN PROPERTY
		float CustomReplicationRelevancyRange; // 0x5C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.EntityActorCustomReplicationComponent");
			return ret;
		}
	};


	// Class EntityActor.SimObject
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class ASimObject : public AActor	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x290(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.SimObject");
			return ret;
		}
	};


	// Class EntityActor.ActorToEntityAdapterComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UActorToEntityAdapterComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TArray SerializedComponents; // 0xA8(0x10)
		bool bForceOwnerReplication : 1; // 0xB8:0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.ActorToEntityAdapterComponent");
			return ret;
		}
	};


	// Class EntityActor.EntityActorComponent
	// Inherited from UEntityComponent -> UObject
	// Size: 0x30 (0x88 - 0x58)
	class UEntityActorComponent : public UEntityComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		UActorComponent ActorComponent; // 0x60(0x8)
		bool bCreatedActorComponent; // 0x68(0x1)
		unsigned char UnknownData03_7[0x1F]; // 0x69(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.EntityActorComponent");
			return ret;
		}

		void OnRep_ActorComponent(); // Flags: Final|Native|Private 0x7FF4145FD3F8
	};


	// Class EntityActor.EntityActorSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UEntityActorSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x38]; // 0x30(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.EntityActorSubsystem");
			return ret;
		}
	};


	// Class EntityActor.EntityDynamicActivationComponent
	// Inherited from UEntityEnableableComponent -> UEntityComponent -> UObject
	// Size: 0x38 (0xB0 - 0x78)
	class UEntityDynamicActivationComponent : public UEntityEnableableComponent	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x78(0x8) UNKNOWN PROPERTY
		float TransitionTargetTime; // 0x80(0x4)
		bool bTargetState; // 0x84(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x85(0x3) UNKNOWN PROPERTY
		TArray LinkedComponents; // 0x88(0x10)
		unsigned char UnknownData05_7[0x18]; // 0x98(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.EntityDynamicActivationComponent");
			return ret;
		}

		void OnRep_TransitionTarget(); // Flags: Final|Native|Private 0x7FF4145FD5B8
		void OnEnabledChanged(bool bIsEnabled); // Flags: Final|Native|Public 0x7FF4145FD4D8
	};


	// Class EntityActor.EntityToActorAdapterComponent
	// Inherited from UEntityComponent -> UObject
	// Size: 0x8 (0x60 - 0x58)
	class UEntityToActorAdapterComponent : public UEntityComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x58(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.EntityToActorAdapterComponent");
			return ret;
		}
	};


	// Class EntityActor.EntityActorLocalInputComponent
	// Inherited from UEntityComponent -> UObject
	// Size: 0x8 (0x60 - 0x58)
	class UEntityActorLocalInputComponent : public UEntityComponent	
	{
	public:
		TEnumAsByte AutoReceiveControllerInput; // 0x58(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.EntityActorLocalInputComponent");
			return ret;
		}
	};


	// Class EntityActor.EntityActorCollisionComponent
	// Inherited from UEntityEnableableComponent -> UEntityComponent -> UObject
	// Size: 0x78 (0xF0 - 0x78)
	class UEntityActorCollisionComponent : public UEntityEnableableComponent	
	{
	public:
		unsigned char UnknownData04_3[0x48]; // 0x78(0x48) UNKNOWN PROPERTY
		FName ShadowVar_CollisionProfileName; // 0xC0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr PrimitiveComponentCache; // 0xC8(0x20)
		unsigned char UnknownData06_6[0x2]; // 0xE8(0x2) UNKNOWN PROPERTY
		TEnumAsByte CollisionShapeMode; // 0xEA(0x1)
		unsigned char UnknownData07_7[0x5]; // 0xEB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.EntityActorCollisionComponent");
			return ret;
		}

		void OnRep_PrimitiveComponent(); // Flags: Final|Native|Private 0x7FF4145FDAF8
		void OnRep_CollisionProfileName(); // Flags: Final|Native|Private 0x7FF4145FDA18
		void OnNativeComponentHit(UPrimitiveComponent HitComponent, AActor OtherActor, UPrimitiveComponent OtherComp, FVector NormalImpulse, FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms|HasDefaults 0x7FF4145FD938
		void OnNativeComponentEndOverlap(UPrimitiveComponent OverlappedComponent, AActor OtherActor, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Flags: Final|Native|Private 0x7FF4145FD858
		void OnNativeComponentBeginOverlap(UPrimitiveComponent OverlappedComponent, AActor OtherActor, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Private|HasOutParms 0x7FF4145FD778
		void OnEnabledChanged(bool bIsEnabled); // Flags: Final|Native|Private 0x7FF4145FD698
	};


	// Class EntityActor.EntityActorPlayerComponent
	// Inherited from UEntityDataBackedComponent -> UEntityComponent -> UObject
	// Size: 0x70 (0xD0 - 0x60)
	class UEntityActorPlayerComponent : public UEntityDataBackedComponent	
	{
	public:
		FUniqueNetIdRepl PlayerId; // 0x60(0x30)
		TWeakObjectPtr PlayerControllerCache; // 0x90(0x20)
		TWeakObjectPtr PlayerStateCache; // 0xB0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.EntityActorPlayerComponent");
			return ret;
		}

		void OnRep_PlayerId(); // Flags: Native|Protected 0x7FF4145FDBD8
	};


	// Class EntityActor.EntityActorSkeletalMeshRenderComponent
	// Inherited from UEntityComponent -> UObject
	// Size: 0x20 (0x78 - 0x58)
	class UEntityActorSkeletalMeshRenderComponent : public UEntityComponent	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		bool bAddedMeshRenderComponent; // 0x60(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
		USkeletalMesh ShadowVar_SkeletalMesh; // 0x68(0x8)
		TEnumAsByte ShadowVar_EnableCollision; // 0x70(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.EntityActorSkeletalMeshRenderComponent");
			return ret;
		}
	};


	// Class EntityActor.EntityActorStaticMeshRenderComponent
	// Inherited from UEntityActorComponent -> UEntityComponent -> UObject
	// Size: 0x18 (0xA0 - 0x88)
	class UEntityActorStaticMeshRenderComponent : public UEntityActorComponent	
	{
	public:
		TArray ShadowVar_MeshMaterials; // 0x88(0x10)
		TEnumAsByte ShadowVar_EnableCollision; // 0x98(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x99(0x3) UNKNOWN PROPERTY
		float ShadowVar_MaxDrawDistance; // 0x9C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.EntityActorStaticMeshRenderComponent");
			return ret;
		}

		void OnRep_MeshMaterials(); // Flags: Final|Native|Private 0x7FF4145FDE78
		void OnRep_MaxDrawDistance(); // Flags: Final|Native|Private 0x7FF4145FDD98
		void OnRep_EnableCollision(); // Flags: Final|Native|Private 0x7FF4145FDCB8
	};


	// Class EntityActor.EntityActorTextDisplayComponent
	// Inherited from UEntityActorComponent -> UEntityComponent -> UObject
	// Size: 0x20 (0xA8 - 0x88)
	class UEntityActorTextDisplayComponent : public UEntityActorComponent	
	{
	public:
		FText DisplayText; // 0x88(0x10)
		float ShadowVar_WorldSize; // 0x98(0x4)
		FColor ShadowVar_TextRenderColor; // 0x9C(0x4)
		bool bAddedTextRenderComponent; // 0xA0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.EntityActorTextDisplayComponent");
			return ret;
		}

		void SetWorldSize(float Value); // Flags: Final|Native|Public 0x7FF4145FED58
		void SetVerticalAlignment(TEnumAsByte Value); // Flags: Final|Native|Public 0x7FF4145FEC78
		void SetTextRenderColor(FColor Value); // Flags: Final|Native|Public|HasDefaults 0x7FF4145FEB98
		void SetText(FText Text); // Flags: Final|Native|Public 0x7FF4145FEAB8
		void SetRelativeScale(FVector RelativeScale); // Flags: Final|Native|Public|HasDefaults 0x7FF4145FE9D8
		void SetRelativeRotation(FRotator RelativeRotation); // Flags: Final|Native|Public|HasDefaults 0x7FF4145FE8F8
		void SetRelativeLocation(FVector RelativeLocation); // Flags: Final|Native|Public|HasDefaults 0x7FF4145FE818
		void SetHorizontalAlignment(TEnumAsByte Value); // Flags: Final|Native|Public 0x7FF4145FE738
		void OnRep_WorldSize(); // Flags: Final|Native|Private 0x7FF4145FE658
		void OnRep_TextRenderColor(); // Flags: Final|Native|Private 0x7FF4145FE578
		void OnRep_DisplayText(); // Flags: Final|Native|Private 0x7FF4145FE498
		float GetWorldSize(); // Flags: Final|Native|Public|Const 0x7FF4145FE3B8
		TEnumAsByte GetVerticalAlignment(); // Flags: Final|Native|Public 0x7FF4145FE2D8
		FColor GetTextRenderColor(); // Flags: Final|Native|Public|HasDefaults|Const 0x7FF4145FE1F8
		FText GetText(); // Flags: Final|Native|Public|Const 0x7FF4145FE118
		FVector GetRelativeLocation(); // Flags: Final|Native|Public|HasDefaults 0x7FF4145FE038
		TEnumAsByte GetHorizontalAlignment(); // Flags: Final|Native|Public 0x7FF4145FDF58
	};


	// Class EntityActor.EntityActorPositionComponent
	// Inherited from UEntityPositionComponent -> UEntityDataBackedComponent -> UEntityComponent -> UObject
	// Size: 0x20 (0x80 - 0x60)
	class UEntityActorPositionComponent : public UEntityPositionComponent	
	{
	public:
		FVector ShadowVar_Location; // 0x60(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.EntityActorPositionComponent");
			return ret;
		}

		void OnRootComponentChanged(USceneComponent InRootComponent, bool bIsRootComponent); // Flags: Final|Native|Private 0x7FF4145FEE38
	};


	// Class EntityActor.EntityActorRotationComponent
	// Inherited from UEntityRotationComponent -> UEntityDataBackedComponent -> UEntityComponent -> UObject
	// Size: 0x28 (0x88 - 0x60)
	class UEntityActorRotationComponent : public UEntityRotationComponent	
	{
	public:
		FRotator ShadowVar_Rotation; // 0x60(0x18)
		unsigned char UnknownData01_7[0x10]; // 0x78(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.EntityActorRotationComponent");
			return ret;
		}

		void OnRootComponentChanged(USceneComponent InRootComponent, bool bIsRootComponent); // Flags: Final|Native|Private 0x7FF4145FEF18
	};


	// Class EntityActor.EntityActorScaleComponent
	// Inherited from UEntityScaleComponent -> UEntityDataBackedComponent -> UEntityComponent -> UObject
	// Size: 0x20 (0x80 - 0x60)
	class UEntityActorScaleComponent : public UEntityScaleComponent	
	{
	public:
		FVector ShadowVar_Scale; // 0x60(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityActor.EntityActorScaleComponent");
			return ret;
		}

		void OnRootComponentChanged(USceneComponent InRootComponent, bool bIsRootComponent); // Flags: Final|Native|Private 0x7FF4145FEFF8
	};

}
