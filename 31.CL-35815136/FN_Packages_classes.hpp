#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Packages
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C
	// Inherited from AActor -> UObject
	// Size: 0x6B (0x2FB - 0x290)
	class A_WaterMeshBlueprintMaster_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		UStaticMeshComponent* CollisionMesh1; // 0x298(0x8)
		UStaticMeshComponent* CollisionMesh2; // 0x2A0(0x8)
		UStaticMeshComponent* CollisionMesh4; // 0x2A8(0x8)
		UStaticMeshComponent* CollisionMesh3; // 0x2B0(0x8)
		UStaticMeshComponent* StaticMesh1; // 0x2B8(0x8)
		int32_t Number_of_Collision_Meshes; // 0x2C0(0x4)
		bool FlipFlow; // 0x2C4(0x1)
		bool NoFlow; // 0x2C5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2C6(0x2) UNKNOWN PROPERTY
		UMaterialInterface* FlippedMaterial; // 0x2C8(0x8)
		int32_t Current_Characters_Personal_Water_Counter; // 0x2D0(0x4)
		bool Enable_Player_Water_Interactions; // 0x2D4(0x1)
		bool Entering_True_Exiting_False; // 0x2D5(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2D6(0x2) UNKNOWN PROPERTY
		APlayerPawn_Generic_Parent_C* ExternalActor; // 0x2D8(0x8)
		UStaticMeshComponent* Internal_Mesh; // 0x2E0(0x8)
		bool Continue; // 0x2E8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x2E9(0x7) UNKNOWN PROPERTY
		double Minimum_time_between_splashes; // 0x2F0(0x8)
		bool ShowTestMesh; // 0x2F8(0x1)
		bool HasExecutedConstuctionScript; // 0x2F9(0x1)
		bool Is_Deep_Water_Asset_; // 0x2FA(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C");
			return ret;
		}

		void Construction(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Handle Water Penetration Components And Arrays(bool In T Out F, AActor* Touching Actor, UStaticMeshComponent* Touching Volume); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Find Placement on water mesh surfaces(FTransform& Traced Transform, FVector& VelocityVector, bool& Trace Hit); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupMeshCollisionVolumes(UStaticMeshComponent* StaticMeshComponent, int32_t Target Int); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph__WaterMeshBlueprintMaster(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
