#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Sedan
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Valet/Sedan/Meshes/Sedan_Veh_Skeleton_AnimBP_Base.Sedan_Veh_Skeleton_AnimBP_Base_C
	// Inherited from UFortValetSedanAnimInstance -> UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x32E0 (0x3960 - 0x680)
	class USedan_Veh_Skeleton_AnimBP_Base_C : public UFortValetSedanAnimInstance	
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
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1268(0x20)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x1288(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x1298(0x8) UNKNOWN PROPERTY
		FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x12A0(0x970)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1C10(0x128)
		unsigned char UnknownData01_6[0x8]; // 0x1D38(0x8) UNKNOWN PROPERTY
		FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x1D40(0x970)
		FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x26B0(0x970)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3020(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3148(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3270(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3398(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x34C0(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x35E8(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3710(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3838(0x128)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/Sedan/Meshes/Sedan_Veh_Skeleton_AnimBP_Base.Sedan_Veh_Skeleton_AnimBP_Base_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BlueprintUpdateAnimation(float DeltaTimeX); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Sedan_Veh_Skeleton_AnimBP_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
