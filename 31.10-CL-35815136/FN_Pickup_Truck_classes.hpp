#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Pickup_Truck
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Valet/Pickup_Truck/Meshes/Pickup_Truck_Veh_AnimBP.Pickup_Truck_Veh_AnimBP_C
	// Inherited from UFortGoatVehicleAnimInstance -> UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x2D21 (0x33A1 - 0x680)
	class UPickup_Truck_Veh_AnimBP_C : public UFortGoatVehicleAnimInstance	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x688(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x690(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x698(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x6B8(0x20)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x6D8(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x800(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x928(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xA50(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xB78(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xCA0(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xDC8(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xEF0(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1018(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1140(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1268(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1390(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x14B8(0x128)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x15E0(0x20)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x1600(0x10)
		FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x1610(0x970)
		FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x1F80(0x970)
		FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x28F0(0x970)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3260(0x128)
		double triggerTailgate; // 0x3388(0x8)
		double TriggerMirrorL; // 0x3390(0x8)
		double TriggerMirrorR; // 0x3398(0x8)
		bool HasTireMod; // 0x33A0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/Pickup_Truck/Meshes/Pickup_Truck_Veh_AnimBP.Pickup_Truck_Veh_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BlueprintUpdateAnimation(float DeltaTimeX); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Pickup_Truck_Veh_AnimBP(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
