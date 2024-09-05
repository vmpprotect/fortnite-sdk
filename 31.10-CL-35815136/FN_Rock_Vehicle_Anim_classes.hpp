#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Rock_Vehicle_Anim
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /RockVehicle/Rock_Vehicle_Anim.Rock_Vehicle_Anim_C
	// Inherited from URockVehicleAnimInstance -> UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x2828 (0x3018 - 0x7F0)
	class URock_Vehicle_Anim_C : public URockVehicleAnimInstance	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x7F0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x7F8(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x800(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x808(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x828(0x20)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x848(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x970(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xA98(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xBC0(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xCE8(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xE10(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xF38(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1060(0x128)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1188(0x20)
		FAnimNode_RockVehicleController AnimGraphNode_RockVehilceController; // 0x11A8(0xE0)
		unsigned char UnknownData00_6[0x8]; // 0x1288(0x8) UNKNOWN PROPERTY
		FAnimNode_LookAt AnimGraphNode_LookAt; // 0x1290(0x240)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x14D0(0x10)
		FAnimNode_LookAt AnimGraphNode_LookAt; // 0x14E0(0x240)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1720(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1848(0x128)
		FAnimNode_LookAt AnimGraphNode_LookAt; // 0x1970(0x240)
		FAnimNode_LookAt AnimGraphNode_LookAt; // 0x1BB0(0x240)
		FAnimNode_LookAt AnimGraphNode_LookAt; // 0x1DF0(0x240)
		FAnimNode_LookAt AnimGraphNode_LookAt; // 0x2030(0x240)
		FAnimNode_LookAt AnimGraphNode_LookAt; // 0x2270(0x240)
		FAnimNode_LookAt AnimGraphNode_LookAt; // 0x24B0(0x240)
		FAnimNode_LookAt AnimGraphNode_LookAt; // 0x26F0(0x240)
		FAnimNode_LookAt AnimGraphNode_LookAt; // 0x2930(0x240)
		FAnimNode_LookAt AnimGraphNode_LookAt; // 0x2B70(0x240)
		FAnimNode_LookAt AnimGraphNode_LookAt; // 0x2DB0(0x240)
		double OldPitch; // 0x2FF0(0x8)
		FVector PrevLocation; // 0x2FF8(0x18)
		int64_t Frame; // 0x3010(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RockVehicle/Rock_Vehicle_Anim.Rock_Vehicle_Anim_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BlueprintUpdateAnimation(float DeltaTimeX); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Rock_Vehicle_Anim(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
