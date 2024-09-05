#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Weapons
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.AnimBlueprintGeneratedConstantData
	// Inherited from FAnimBlueprintConstantData
	// Size: 0x20F (0x210 - 0x1)
	struct FAnimBlueprintGeneratedConstantDatadup_273 : public FAnimBlueprintConstantData	
	{
	public:
		unsigned char UnknownData00_3[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName __NameProperty; // 0x4(0x4)
		FName __NameProperty; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FAnimNodeFunctionRef __StructProperty; // 0x10(0x18)
		FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess; // 0x28(0x80)
		FAnimSubsystem_Base AnimBlueprintExtension_Base; // 0xA8(0x18)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root; // 0xC0(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_MeshRefPose; // 0xF0(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace; // 0x120(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_AnimDynamics; // 0x150(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_AnimDynamics; // 0x180(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_AnimDynamics; // 0x1B0(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_AnimDynamics; // 0x1E0(0x30)
	};


	// Struct /Game/Weapons/Prototype/ObjectMover/Blueprints/B_CreativeMoveTool_Cosmetics.B_CreativeMoveTool_Cosmetics
	// Size: 0x3C (0x3C - 0x0)
	struct FB_CreativeMoveTool_Cosmetics	
	{
	public:
		TArray<UMeshComponent*> MeshComponents_16_2F81DBEE4A54236C4AA0F8AD425D5CEA; // 0x0(0x10)
		bool isBuildingPiece_22_8BCDA4054BDBA332062B16B8329FF0F2; // 0x10(0x1)
		TEnumAsByte<B_CreativeMoveTool_VisualState> VisualState_28_48A9044E44537CF8206398B13C015650; // 0x11(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x12(0x2) UNKNOWN PROPERTY
		int32_t NumberOfActivePreviews_32_37ECF52740C81898B5CB2799AFC301FC; // 0x14(0x4)
		TArray<AActor*> PosessedActorsForPlacement_44_E1A93E5340A288C2640FD4A6DE37A55C; // 0x18(0x10)
		TArray<bool> IsPossessedActorPlacementValid_43_29D43C724527CF80EBE0E596D5816E1A; // 0x28(0x10)
		float DelayBeforeRevertingScreenState_47_FACC12B74B493B18408E5AB734143C4E; // 0x38(0x4)
	};


	// Struct /Game/Weapons/FORT_RocketLaunchers/Mesh/RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C.AnimBlueprintGeneratedConstantData
	// Inherited from FAnimBlueprintConstantData
	// Size: 0x157 (0x158 - 0x1)
	struct FAnimBlueprintGeneratedConstantDatadup_274 : public FAnimBlueprintConstantData	
	{
	public:
		unsigned char UnknownData00_3[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName __NameProperty; // 0x4(0x4)
		FName __NameProperty; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FAnimNodeFunctionRef __StructProperty; // 0x10(0x18)
		TEnumAsByte<ERefPoseType> __ByteProperty; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess; // 0x30(0x80)
		FAnimSubsystem_Base AnimBlueprintExtension_Base; // 0xB0(0x18)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root; // 0xC8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot; // 0xF8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalRefPose; // 0x128(0x30)
	};


	// Struct /Game/Weapons/FORT_Rifles/Mesh/SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C.AnimBlueprintGeneratedConstantData
	// Inherited from FAnimBlueprintConstantData
	// Size: 0x157 (0x158 - 0x1)
	struct FAnimBlueprintGeneratedConstantDatadup_275 : public FAnimBlueprintConstantData	
	{
	public:
		unsigned char UnknownData00_3[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName __NameProperty; // 0x4(0x4)
		FName __NameProperty; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FAnimNodeFunctionRef __StructProperty; // 0x10(0x18)
		TEnumAsByte<ERefPoseType> __ByteProperty; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess; // 0x30(0x80)
		FAnimSubsystem_Base AnimBlueprintExtension_Base; // 0xB0(0x18)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root; // 0xC8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot; // 0xF8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalRefPose; // 0x128(0x30)
	};


	// Struct /Game/Weapons/Skeleton_Templates/BP_GrenadeLauncher.BP_GrenadeLauncher_C.AnimBlueprintGeneratedConstantData
	// Inherited from FAnimBlueprintConstantData
	// Size: 0x6A7 (0x6A8 - 0x1)
	struct FAnimBlueprintGeneratedConstantDatadup_276 : public FAnimBlueprintConstantData	
	{
	public:
		bool __BoolProperty; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		FName __NameProperty; // 0x4(0x4)
		int32_t __IntProperty; // 0x8(0x4)
		FName __NameProperty; // 0xC(0x4)
		int32_t __IntProperty; // 0x10(0x4)
		FName __NameProperty; // 0x14(0x4)
		int32_t __IntProperty; // 0x18(0x4)
		FName __NameProperty; // 0x1C(0x4)
		int32_t __IntProperty; // 0x20(0x4)
		FName __NameProperty; // 0x24(0x4)
		int32_t __IntProperty; // 0x28(0x4)
		float __FloatProperty; // 0x2C(0x4)
		FInputScaleBiasClampConstants __StructProperty; // 0x30(0x2C)
		float __FloatProperty; // 0x5C(0x4)
		bool __BoolProperty; // 0x60(0x1)
		EAnimSyncMethod __EnumProperty; // 0x61(0x1)
		TEnumAsByte<EAnimGroupRole> __ByteProperty; // 0x62(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x63(0x1) UNKNOWN PROPERTY
		FName __NameProperty; // 0x64(0x4)
		int32_t __IntProperty; // 0x68(0x4)
		TEnumAsByte<ERefPoseType> __ByteProperty; // 0x6C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		FName __NameProperty; // 0x70(0x4)
		FName __NameProperty; // 0x74(0x4)
		int32_t __IntProperty; // 0x78(0x4)
		FName __NameProperty; // 0x7C(0x4)
		FName __NameProperty; // 0x80(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		FAnimNodeFunctionRef __StructProperty; // 0x88(0x18)
		FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess; // 0xA0(0x80)
		FAnimSubsystem_Base AnimBlueprintExtension_Base; // 0x120(0x18)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer; // 0x138(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace; // 0x168(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone; // 0x198(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace; // 0x1C8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot; // 0x1F8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult; // 0x228(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult; // 0x258(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult; // 0x288(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult; // 0x2B8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult; // 0x2E8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult; // 0x318(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult; // 0x348(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer; // 0x378(0x30)
		unsigned char UnknownData04_7[0x300]; // 0x3A8(0x300) UNKNOWN PROPERTY
	};


	// Struct /Game/Weapons/Skeleton_Templates/BP_Pistol_FC_SA.BP_Pistol_FC_SA_C.AnimBlueprintGeneratedConstantData
	// Inherited from FAnimBlueprintConstantData
	// Size: 0x157 (0x158 - 0x1)
	struct FAnimBlueprintGeneratedConstantDatadup_277 : public FAnimBlueprintConstantData	
	{
	public:
		unsigned char UnknownData00_3[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName __NameProperty; // 0x4(0x4)
		FName __NameProperty; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FAnimNodeFunctionRef __StructProperty; // 0x10(0x18)
		TEnumAsByte<ERefPoseType> __ByteProperty; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess; // 0x30(0x80)
		FAnimSubsystem_Base AnimBlueprintExtension_Base; // 0xB0(0x18)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root; // 0xC8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot; // 0xF8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalRefPose; // 0x128(0x30)
	};


	// Struct /Game/Weapons/Skeleton_Templates/BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C.AnimBlueprintGeneratedConstantData
	// Inherited from FAnimBlueprintConstantData
	// Size: 0x157 (0x158 - 0x1)
	struct FAnimBlueprintGeneratedConstantDatadup_278 : public FAnimBlueprintConstantData	
	{
	public:
		unsigned char UnknownData00_3[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName __NameProperty; // 0x4(0x4)
		FName __NameProperty; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FAnimNodeFunctionRef __StructProperty; // 0x10(0x18)
		TEnumAsByte<ERefPoseType> __ByteProperty; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess; // 0x30(0x80)
		FAnimSubsystem_Base AnimBlueprintExtension_Base; // 0xB0(0x18)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root; // 0xC8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot; // 0xF8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalRefPose; // 0x128(0x30)
	};


	// Struct /Game/Weapons/FORT_Rifles/Mesh/SK_M249_Skeleton_Dynamic_AnimBP.SK_M249_Skeleton_Dynamic_AnimBP_C.AnimBlueprintGeneratedConstantData
	// Inherited from FAnimBlueprintConstantData
	// Size: 0x1AF (0x1B0 - 0x1)
	struct FAnimBlueprintGeneratedConstantDatadup_279 : public FAnimBlueprintConstantData	
	{
	public:
		unsigned char UnknownData00_3[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName __NameProperty; // 0x4(0x4)
		FName __NameProperty; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FAnimNodeFunctionRef __StructProperty; // 0x10(0x18)
		FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess; // 0x28(0x80)
		FAnimSubsystem_Base AnimBlueprintExtension_Base; // 0xA8(0x18)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace; // 0xC0(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace; // 0xF0(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SubInput; // 0x120(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root; // 0x150(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_RigidBody; // 0x180(0x30)
	};


	// Struct /Game/Weapons/Skeleton_Templates/BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C.AnimBlueprintGeneratedConstantData
	// Inherited from FAnimBlueprintConstantData
	// Size: 0x14F (0x150 - 0x1)
	struct FAnimBlueprintGeneratedConstantDatadup_280 : public FAnimBlueprintConstantData	
	{
	public:
		unsigned char UnknownData00_3[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName __NameProperty; // 0x4(0x4)
		FName __NameProperty; // 0x8(0x4)
		TEnumAsByte<ERefPoseType> __ByteProperty; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FAnimNodeFunctionRef __StructProperty; // 0x10(0x18)
		FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess; // 0x28(0x80)
		FAnimSubsystem_Base AnimBlueprintExtension_Base; // 0xA8(0x18)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root; // 0xC0(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalRefPose; // 0xF0(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot; // 0x120(0x30)
	};


	// Struct /Game/Weapons/Skeleton_Templates/BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C.AnimBlueprintGeneratedConstantData
	// Inherited from FAnimBlueprintConstantData
	// Size: 0x157 (0x158 - 0x1)
	struct FAnimBlueprintGeneratedConstantDatadup_281 : public FAnimBlueprintConstantData	
	{
	public:
		unsigned char UnknownData00_3[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName __NameProperty; // 0x4(0x4)
		FName __NameProperty; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FAnimNodeFunctionRef __StructProperty; // 0x10(0x18)
		TEnumAsByte<ERefPoseType> __ByteProperty; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess; // 0x30(0x80)
		FAnimSubsystem_Base AnimBlueprintExtension_Base; // 0xB0(0x18)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root; // 0xC8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot; // 0xF8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalRefPose; // 0x128(0x30)
	};


	// Struct /Game/Weapons/Skeleton_Templates/BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C.AnimBlueprintGeneratedConstantData
	// Inherited from FAnimBlueprintConstantData
	// Size: 0x157 (0x158 - 0x1)
	struct FAnimBlueprintGeneratedConstantDatadup_282 : public FAnimBlueprintConstantData	
	{
	public:
		unsigned char UnknownData00_3[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName __NameProperty; // 0x4(0x4)
		FName __NameProperty; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FAnimNodeFunctionRef __StructProperty; // 0x10(0x18)
		TEnumAsByte<ERefPoseType> __ByteProperty; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess; // 0x30(0x80)
		FAnimSubsystem_Base AnimBlueprintExtension_Base; // 0xB0(0x18)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root; // 0xC8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot; // 0xF8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalRefPose; // 0x128(0x30)
	};


	// Struct /Game/Weapons/Skeleton_Templates/BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C.AnimBlueprintGeneratedConstantData
	// Inherited from FAnimBlueprintConstantData
	// Size: 0x157 (0x158 - 0x1)
	struct FAnimBlueprintGeneratedConstantDatadup_283 : public FAnimBlueprintConstantData	
	{
	public:
		unsigned char UnknownData00_3[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName __NameProperty; // 0x4(0x4)
		FName __NameProperty; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FAnimNodeFunctionRef __StructProperty; // 0x10(0x18)
		TEnumAsByte<ERefPoseType> __ByteProperty; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess; // 0x30(0x80)
		FAnimSubsystem_Base AnimBlueprintExtension_Base; // 0xB0(0x18)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root; // 0xC8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot; // 0xF8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalRefPose; // 0x128(0x30)
	};


	// Struct /Game/Weapons/Skeleton_Templates/BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C.AnimBlueprintGeneratedConstantData
	// Inherited from FAnimBlueprintConstantData
	// Size: 0x157 (0x158 - 0x1)
	struct FAnimBlueprintGeneratedConstantDatadup_284 : public FAnimBlueprintConstantData	
	{
	public:
		unsigned char UnknownData00_3[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName __NameProperty; // 0x4(0x4)
		FName __NameProperty; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FAnimNodeFunctionRef __StructProperty; // 0x10(0x18)
		TEnumAsByte<ERefPoseType> __ByteProperty; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess; // 0x30(0x80)
		FAnimSubsystem_Base AnimBlueprintExtension_Base; // 0xB0(0x18)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root; // 0xC8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot; // 0xF8(0x30)
		FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalRefPose; // 0x128(0x30)
	};

}
