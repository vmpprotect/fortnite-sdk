#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BP_ProjectileTrajectory
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C
	// Inherited from AFortProjectileTrajectory -> AActor -> UObject
	// Size: 0x52 (0x30A - 0x2B8)
	class ABP_ProjectileTrajectory_C : public AFortProjectileTrajectory	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UStaticMeshComponent InvalidTarget; // 0x2C0(0x8)
		UStaticMeshComponent Target; // 0x2C8(0x8)
		int32_t MaxMeshCount; // 0x2D0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2D4(0x4) UNKNOWN PROPERTY
		UMaterialInstanceDynamic SplineMID; // 0x2D8(0x8)
		double SplineFadeDistance; // 0x2E0(0x8)
		double SplineFadeStartDistance; // 0x2E8(0x8)
		UObject TrajectoryOwner; // 0x2F0(0x8)
		bool ShouldUpdate; // 0x2F8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x2F9(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic InvalidSplineMID; // 0x300(0x8)
		bool bIsTrajectoryValid; // 0x308(0x1)
		bool bWaitFirstTrajectoryValid; // 0x309(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C");
			return ret;
		}

		void SetProjectileBudgetMesh(USkeletalMeshComponentBudgeted ProjectileBudgetMesh); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F951500
		void SetShouldUpdateFromOwner(bool ShouldUpdate, UObject Owner); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F951400
		void UpdateFromTrajectoryOwner(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F951100
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D5F950F00
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D5F951800
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent 0x15D5F951600
		void SetTrajectorySpline(TArray& SplinePoints, TArray& SplineTangents); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5F951300
		void SetTrajectoryValid(bool bIsTrajectoryValid); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F951200
		void UpdateTargetMeshVisibility(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F951000
		void ReceiveEndPlay(TEnumAsByte EndPlayReason); // Flags: Event|Protected|BlueprintEvent 0x15D5F951700
		void ExecuteUbergraph_BP_ProjectileTrajectory(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D5F951900
	};

}
