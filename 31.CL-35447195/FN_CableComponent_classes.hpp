#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CableComponent
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CableComponent.CableActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class ACableActor : public AActor	
	{
	public:
		UCableComponent CableComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CableComponent.CableActor");
			return ret;
		}
	};


	// Class CableComponent.CableComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xB8 (0x5B0 - 0x4F8)
	class UCableComponent : public UMeshComponent	
	{
	public:
		bool bAttachStart; // 0x4F8(0x1)
		bool bAttachEnd; // 0x4F9(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x4FA(0x6) UNKNOWN PROPERTY
		FComponentReference AttachEndTo; // 0x500(0x28)
		FName AttachEndToSocketName; // 0x528(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x52C(0x4) UNKNOWN PROPERTY
		FVector EndLocation; // 0x530(0x18)
		float CableLength; // 0x548(0x4)
		int32_t NumSegments; // 0x54C(0x4)
		float SubstepTime; // 0x550(0x4)
		int32_t SolverIterations; // 0x554(0x4)
		bool bEnableStiffness; // 0x558(0x1)
		bool bUseSubstepping; // 0x559(0x1)
		bool bSkipCableUpdateWhenNotVisible; // 0x55A(0x1)
		bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x55B(0x1)
		bool bEnableCollision; // 0x55C(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x55D(0x3) UNKNOWN PROPERTY
		float CollisionFriction; // 0x560(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x564(0x4) UNKNOWN PROPERTY
		FVector CableForce; // 0x568(0x18)
		float CableGravityScale; // 0x580(0x4)
		float CableWidth; // 0x584(0x4)
		int32_t NumSides; // 0x588(0x4)
		float TileMaterial; // 0x58C(0x4)
		unsigned char UnknownData09_7[0x20]; // 0x590(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CableComponent.CableComponent");
			return ret;
		}

		void SetAttachEndToComponent(USceneComponent Component, FName SocketName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414660118
		void SetAttachEndTo(AActor Actor, FName ComponentProperty, FName SocketName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414660038
		void GetCableParticleLocations(TArray& Locations); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41465FF58
		USceneComponent GetAttachedComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41465FE78
		AActor GetAttachedActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41465FD98
	};

}
