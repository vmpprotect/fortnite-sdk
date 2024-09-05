#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CableComponent
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CableComponent.CableActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class ACableActor : public AActor	
	{
	public:
		UCableComponent* CableComponent; // 0x290(0x8)

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
		unsigned char UnknownData00_6[0x6]; // 0x4FA(0x6) UNKNOWN PROPERTY
		FComponentReference AttachEndTo; // 0x500(0x28)
		FName AttachEndToSocketName; // 0x528(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x52C(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData02_6[0x3]; // 0x55D(0x3) UNKNOWN PROPERTY
		float CollisionFriction; // 0x560(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x564(0x4) UNKNOWN PROPERTY
		FVector CableForce; // 0x568(0x18)
		float CableGravityScale; // 0x580(0x4)
		float CableWidth; // 0x584(0x4)
		int32_t NumSides; // 0x588(0x4)
		float TileMaterial; // 0x58C(0x4)
		unsigned char UnknownData04_7[0x20]; // 0x590(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CableComponent.CableComponent");
			return ret;
		}

		void SetAttachEndToComponent(USceneComponent* Component, FName SocketName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF6A7E8(relative to base address)
		void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF6A654(relative to base address)
		void GetCableParticleLocations(TArray<FVector>& Locations); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF6A5B8(relative to base address)
		USceneComponent GetAttachedComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF6A564(relative to base address)
		AActor GetAttachedActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF6A53C(relative to base address)
	};

}
