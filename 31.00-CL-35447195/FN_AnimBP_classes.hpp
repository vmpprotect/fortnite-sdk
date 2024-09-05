#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AnimBP
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /FigureCharacter/AnimBP/ABP_Figure_Mutable.ABP_Figure_Mutable_C
	// Inherited from UJunoPlayerAnimInstance -> UJunoPawnAnimInstance -> UJunoAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x18A4 (0x2234 - 0x990)
	class UABP_Figure_Mutable_C : public UJunoPlayerAnimInstance	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x990(0x8)
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x998(0x2)
		unsigned char UnknownData08_6[0x6]; // 0x99A(0x6) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x9A0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x9A8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x9B0(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x9D0(0xB0)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xA80(0x20)
		FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0xAA0(0x4D0)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xF70(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1098(0x128)
		FAnimNode_Constraint AnimGraphNode_Constraint; // 0x11C0(0x108)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x12C8(0x20)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x12E8(0x128)
		FAnimNode_Constraint AnimGraphNode_Constraint; // 0x1410(0x108)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1518(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1640(0x128)
		FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve; // 0x1768(0x120)
		FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1888(0xE8)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1970(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1A98(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1BC0(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1CE8(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1E10(0x128)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1F38(0x48)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1F80(0x78)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1FF8(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2018(0x28)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2040(0x20)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2060(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2080(0x28)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x20A8(0x78)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2120(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2140(0x28)
		bool __CustomProperty_Disable_Head_Constraints_AF9A928442F678834A0D86BA48128CE8; // 0x2168(0x1)
		bool __CustomProperty_Player_Face_is_Visible_AF9A928442F678834A0D86BA48128CE8; // 0x2169(0x1)
		unsigned char UnknownData09_6[0x2]; // 0x216A(0x2) UNKNOWN PROPERTY
		int32_t __CustomProperty_Constrain_NeckAcc_AF9A928442F678834A0D86BA48128CE8; // 0x216C(0x4)
		int32_t __CustomProperty_Constrain_Head_AF9A928442F678834A0D86BA48128CE8; // 0x2170(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x2174(0x4) UNKNOWN PROPERTY
		UBP_FigureBeardRegistration_C __CustomProperty_BeardRegistration_AF9A928442F678834A0D86BA48128CE8; // 0x2178(0x8)
		UBP_FigureMouthRegistration_C __CustomProperty_MouthRegistration_AF9A928442F678834A0D86BA48128CE8; // 0x2180(0x8)
		UBP_Figure_CharacterAccUserData_C __CustomProperty_CharacterAcc_AF9A928442F678834A0D86BA48128CE8; // 0x2188(0x8)
		USkeletalMeshComponent Skeletal_Mesh_Component; // 0x2190(0x8)
		bool Is_Dying; // 0x2198(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x2199(0x7) UNKNOWN PROPERTY
		double Head_R_Alpha; // 0x21A0(0x8)
		bool Enable_NoT; // 0x21A8(0x1)
		bool Enable_NoR; // 0x21A9(0x1)
		bool Enable_NeckAcc_Offset; // 0x21AA(0x1)
		unsigned char UnknownData12_6[0x5]; // 0x21AB(0x5) UNKNOWN PROPERTY
		FVector HipAcc_Offset; // 0x21B0(0x18)
		FVector NeckAcc_Offset; // 0x21C8(0x18)
		UBP_Figure_CharacterAccUserData_C Character_Acc; // 0x21E0(0x8)
		UBP_FigureMouthRegistration_C Mouth_Registration; // 0x21E8(0x8)
		UBP_FigureBeardRegistration_C Beard_Registration; // 0x21F0(0x8)
		bool Enable_Control_Rig; // 0x21F8(0x1)
		bool Force_Enable_ControlRig; // 0x21F9(0x1)
		unsigned char UnknownData13_6[0x6]; // 0x21FA(0x6) UNKNOWN PROPERTY
		double Disable_Eye_Movement; // 0x2200(0x8)
		bool NeckAcc_Rotate_With_Head; // 0x2208(0x1)
		unsigned char UnknownData14_6[0x7]; // 0x2209(0x7) UNKNOWN PROPERTY
		FVector HippAcc_Global_Offset; // 0x2210(0x18)
		bool Enable_ControlRig_if_face_is_visible; // 0x2228(0x1)
		unsigned char UnknownData15_6[0x3]; // 0x2229(0x3) UNKNOWN PROPERTY
		int32_t Constrain_Head; // 0x222C(0x4)
		int32_t Constrain_NeckAcc; // 0x2230(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FigureCharacter/AnimBP/ABP_Figure_Mutable.ABP_Figure_Mutable_C");
			return ret;
		}

		void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5DC77600
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Figure_Mutable_AnimGraphNode_BlendListByBool_41C7AD08404513BD521C7CA52FFEC2FC(); // Flags: BlueprintEvent 0x15D43D3E000
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Figure_Mutable_AnimGraphNode_ModifyBone_1520D3A942E436B4BFA579AECE5D1A23(); // Flags: BlueprintEvent 0x15D5DC78E00
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Figure_Mutable_AnimGraphNode_ModifyBone_F31C08124DBD757C0DE2E6B4EFCD3D51(); // Flags: BlueprintEvent 0x15D8C027D00
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Figure_Mutable_AnimGraphNode_ModifyBone_DCDF001449336A2F29646DB7C00D2AF5(); // Flags: BlueprintEvent 0x15DB650B200
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Figure_Mutable_AnimGraphNode_ModifyBone_F1941F5C4C8A799923FF89AB571D8009(); // Flags: BlueprintEvent 0x15D8C020F00
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Figure_Mutable_AnimGraphNode_Constraint_26EE915843A007ADC8D7A18C7DB3B15E(); // Flags: BlueprintEvent 0x15D41152300
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Figure_Mutable_AnimGraphNode_ControlRig_AF9A928442F678834A0D86BA48128CE8(); // Flags: BlueprintEvent 0x15D5DC78500
		void BlueprintInitializeAnimation(); // Flags: Event|Public|BlueprintEvent 0x15D8CA4D700
		void BlueprintUpdateAnimation(float DeltaTimeX); // Flags: Event|Public|BlueprintEvent 0x15D55808100
		void ExecuteUbergraph_ABP_Figure_Mutable(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D8C021200
	};

}
