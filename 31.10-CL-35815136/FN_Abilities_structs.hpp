#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Abilities
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct /Game/Abilities/Player/Pawns/CharacterPartMidArrayStruct.CharacterPartMidArrayStruct
	// Size: 0x18 (0x18 - 0x0)
	struct FCharacterPartMidArrayStruct	
	{
	public:
		TEnumAsByte<EFortCustomPartType> PartType_5_EBDFFF5740627902CC51DD966B8EE419; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<UMaterialInstanceDynamic*> MID_7_A0D19AC74319389A5DF2019166F976F0; // 0x8(0x10)
	};


	// Struct /Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C.AnimBlueprintGeneratedMutableData
	// Inherited from FAnimBlueprintMutableData
	// Size: 0x1B8 (0x1B9 - 0x1)
	struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData	
	{
	public:
		bool __BoolProperty; // 0x1(0x1)
		bool __BoolProperty; // 0x2(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		float __FloatProperty; // 0x4(0x4)
		float __FloatProperty; // 0x8(0x4)
		float __FloatProperty; // 0xC(0x4)
		float __FloatProperty; // 0x10(0x4)
		float __FloatProperty; // 0x14(0x4)
		char __ByteProperty; // 0x18(0x1)
		char __ByteProperty; // 0x19(0x1)
		char __ByteProperty; // 0x1A(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x1B(0x1) UNKNOWN PROPERTY
		float __FloatProperty; // 0x1C(0x4)
		float __FloatProperty; // 0x20(0x4)
		float __FloatProperty; // 0x24(0x4)
		float __FloatProperty; // 0x28(0x4)
		float __FloatProperty; // 0x2C(0x4)
		float __FloatProperty; // 0x30(0x4)
		float __FloatProperty; // 0x34(0x4)
		float __FloatProperty; // 0x38(0x4)
		float __FloatProperty; // 0x3C(0x4)
		float __FloatProperty; // 0x40(0x4)
		char __ByteProperty; // 0x44(0x1)
		char __ByteProperty; // 0x45(0x1)
		char __ByteProperty; // 0x46(0x1)
		char __ByteProperty; // 0x47(0x1)
		char __ByteProperty; // 0x48(0x1)
		char __ByteProperty; // 0x49(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x4A(0x2) UNKNOWN PROPERTY
		float __FloatProperty; // 0x4C(0x4)
		float __FloatProperty; // 0x50(0x4)
		float __FloatProperty; // 0x54(0x4)
		float __FloatProperty; // 0x58(0x4)
		unsigned char UnknownData03_7[0x15D]; // 0x5C(0x15D) UNKNOWN PROPERTY
	};


	// Struct /Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C.AnimBlueprintGeneratedConstantData
	// Inherited from FAnimBlueprintConstantData
	// Size: 0x2847 (0x2848 - 0x1)
	struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData	
	{
	public:
		unsigned char UnknownData00_3[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName __NameProperty; // 0x4(0x4)
		FName __NameProperty; // 0x8(0x4)
		FName __NameProperty; // 0xC(0x4)
		TEnumAsByte<EAnimGroupRole> __ByteProperty; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FName __NameProperty; // 0x14(0x4)
		EAnimSyncMethod __EnumProperty; // 0x18(0x1)
		TEnumAsByte<EAnimGroupRole> __ByteProperty; // 0x19(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
		FName __NameProperty; // 0x1C(0x4)
		FName __NameProperty; // 0x20(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TArray<float> __ArrayProperty; // 0x28(0x10)
		TArray<int32_t> __ArrayProperty; // 0x38(0x10)
		FName __NameProperty; // 0x48(0x4)
		FName __NameProperty; // 0x4C(0x4)
		FName __NameProperty; // 0x50(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		TArray<float> __ArrayProperty; // 0x58(0x10)
		TArray<int32_t> __ArrayProperty; // 0x68(0x10)
		FName __NameProperty; // 0x78(0x4)
		FName __NameProperty; // 0x7C(0x4)
		int32_t __IntProperty; // 0x80(0x4)
		EBlendListTransitionType __EnumProperty; // 0x84(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x85(0x3) UNKNOWN PROPERTY
		float __FloatProperty; // 0x88(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		TArray<float> __ArrayProperty; // 0x90(0x10)
		bool __BoolProperty; // 0xA0(0x1)
		unsigned char UnknownData07_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		FInputScaleBiasClampConstants __StructProperty; // 0xA4(0x2C)
		float __FloatProperty; // 0xD0(0x4)
		EAnimSyncMethod __EnumProperty; // 0xD4(0x1)
		TEnumAsByte<EAnimGroupRole> __ByteProperty; // 0xD5(0x1)
		unsigned char UnknownData08_6[0x2]; // 0xD6(0x2) UNKNOWN PROPERTY
		UBlendProfile* __BlendProfile; // 0xD8(0x8)
		UCurveFloat* __CurveFloat; // 0xE0(0x8)
		bool __BoolProperty; // 0xE8(0x1)
		EAlphaBlendOption __EnumProperty; // 0xE9(0x1)
		EBlendListTransitionType __EnumProperty; // 0xEA(0x1)
		unsigned char UnknownData09_6[0x5]; // 0xEB(0x5) UNKNOWN PROPERTY
		TArray<float> __ArrayProperty; // 0xF0(0x10)
		TArray<int32_t> __ArrayProperty; // 0x100(0x10)
		FName __NameProperty; // 0x110(0x4)
		FName __NameProperty; // 0x114(0x4)
		int32_t __IntProperty; // 0x118(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x11C(0x4) UNKNOWN PROPERTY
		FAnimNodeFunctionRef __StructProperty; // 0x120(0x18)
		FName __NameProperty; // 0x138(0x4)
		FName __NameProperty; // 0x13C(0x4)
		FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess; // 0x140(0x80)
		FAnimSubsystem_Base AnimBlueprintExtension_Base; // 0x1C0(0x18)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyBone; // 0x1D8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot; // 0x208(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyBone; // 0x238(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyBone; // 0x268(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LegIK; // 0x298(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyBone; // 0x2C8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyBone; // 0x2F8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyBone; // 0x328(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone; // 0x358(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyBone; // 0x388(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyCurve; // 0x3B8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyBone; // 0x3E8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone; // 0x418(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone; // 0x448(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyBone; // 0x478(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool; // 0x4A8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer; // 0x4D8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer; // 0x508(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyAdditive; // 0x538(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool; // 0x568(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose; // 0x598(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyBone; // 0x5C8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult; // 0x5F8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x628(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x658(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x688(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x6B8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x6E8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum; // 0x718(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum; // 0x748(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum; // 0x778(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult; // 0x7A8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine; // 0x7D8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x808(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x838(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x868(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x898(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x8C8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x8F8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x928(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x958(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x988(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x9B8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TwoWayBlend; // 0x9E8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum; // 0xA18(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum; // 0xA48(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum; // 0xA78(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum; // 0xAA8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum; // 0xAD8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum; // 0xB08(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult; // 0xB38(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine; // 0xB68(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyAdditive; // 0xB98(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyAdditive; // 0xBC8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0xBF8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult; // 0xC28(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0xC58(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0xC88(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0xCB8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0xCE8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum; // 0xD18(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum; // 0xD48(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum; // 0xD78(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0xDA8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult; // 0xDD8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine; // 0xE08(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0xE38(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0xE68(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0xE98(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0xEC8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum; // 0xEF8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum; // 0xF28(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0xF58(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum; // 0xF88(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult; // 0xFB8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine; // 0xFE8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyAdditive; // 0x1018(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x1048(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyAdditive; // 0x1078(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult; // 0x10A8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine; // 0x10D8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyAdditive; // 0x1108(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult; // 0x1138(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x1168(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult; // 0x1198(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine; // 0x11C8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyAdditive; // 0x11F8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyAdditive; // 0x1228(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer; // 0x1258(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyAdditive; // 0x1288(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x12B8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyAdditive; // 0x12E8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x1318(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x1348(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult; // 0x1378(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyAdditive; // 0x13A8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x13D8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer; // 0x1408(0x30)
		unsigned char UnknownData11_7[0x1410]; // 0x1438(0x1410) UNKNOWN PROPERTY
	};

}
