#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/AI/AIBlueprintInterface/BPI_HuskDance.BPI_HuskDance_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBPI_HuskDance_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/AI/AIBlueprintInterface/BPI_HuskDance.BPI_HuskDance_C");
			return ret;
		}

		void OnEndDance(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBeginDance(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/AI/NavAreas/FortNavArea_JumpDownSmashable3.FortNavArea_JumpDownSmashable3_C
	// Inherited from UFortNavArea_SmashableJump -> UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UFortNavArea_JumpDownSmashable3_C : public UFortNavArea_SmashableJump	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/AI/NavAreas/FortNavArea_JumpDownSmashable3.FortNavArea_JumpDownSmashable3_C");
			return ret;
		}
	};


	// Class /Game/AI/NavAreas/FortNavArea_JumpDownSmashable.FortNavArea_JumpDownSmashable_C
	// Inherited from UFortNavArea_SmashableJump -> UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UFortNavArea_JumpDownSmashable_C : public UFortNavArea_SmashableJump	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/AI/NavAreas/FortNavArea_JumpDownSmashable.FortNavArea_JumpDownSmashable_C");
			return ret;
		}
	};


	// Class /Game/AI/NavAreas/FortNavArea_JumpDownSmashable2.FortNavArea_JumpDownSmashable2_C
	// Inherited from UFortNavArea_SmashableJump -> UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UFortNavArea_JumpDownSmashable2_C : public UFortNavArea_SmashableJump	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/AI/NavAreas/FortNavArea_JumpDownSmashable2.FortNavArea_JumpDownSmashable2_C");
			return ret;
		}
	};


	// Class /Game/AI/NavAreas/FortNavArea_JumpDown.FortNavArea_JumpDown_C
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_JumpDown_C : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/AI/NavAreas/FortNavArea_JumpDown.FortNavArea_JumpDown_C");
			return ret;
		}
	};


	// Class /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C
	// Inherited from UFortAIFaunaAnimInstance_Burt -> UFortAIFaunaAnimInstance -> UFortAIAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x4340 (0x4B50 - 0x810)
	class UBurt_AnimBP_C : public UFortAIFaunaAnimInstance_Burt	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x810(0x8)
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x818(0x68)
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x880(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x888(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x890(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x8B0(0xB0)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x960(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9A8(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9F0(0x48)
		FAnimNode_Root AnimGraphNode_Root; // 0xA38(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xA58(0xB0)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xB08(0x48)
		FAnimNode_Root AnimGraphNode_Root; // 0xB50(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xB70(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xB98(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xBC0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xBE8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xC10(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xC38(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xC60(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xC88(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xCB0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xCD8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xD00(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xD28(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xD50(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xD78(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xDA0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xDC8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xDF0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xE18(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xE40(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xE68(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xE90(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xEB8(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xEE0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0xF28(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xF48(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0xF90(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xFB0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0xFF8(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1018(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1088(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1150(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1198(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x11E0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1228(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1248(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1290(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x12B0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x12F8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1318(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1360(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1380(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x13A8(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x13D0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1418(0x20)
		FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x1438(0x10)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1448(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1468(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1530(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x15F8(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x16C0(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1730(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x17A0(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x17C0(0x28)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x17E8(0x48)
		FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1830(0xF0)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1920(0x48)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1968(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1990(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x19D8(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1A20(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1AE8(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1B58(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1B78(0xC8)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x1C40(0x48)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1C88(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1CA8(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x1CC8(0x48)
		FAnimNode_LegIK AnimGraphNode_LegIK; // 0x1D10(0x100)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1E10(0xC8)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1ED8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1F00(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1F28(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1F70(0x20)
		FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x1F90(0x10)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1FA0(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1FC0(0xC8)
		FFortAnimNode_QuadrupedSlopeWarping FortAnimGraphNode_QuadrupedSlopeWarping; // 0x2088(0x5C8)
		FFortAnimNode_WeightedLookAt FortAnimGraphNode_WeightedLookAt; // 0x2650(0x250)
		FAnimNode_Inertialization AnimGraphNode_Inertialization; // 0x28A0(0x420)
		FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x2CC0(0xC8)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x2D88(0x78)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2E00(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2E48(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2E90(0x48)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2ED8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2F00(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2F28(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2F50(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2F78(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2FA0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2FC8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2FF0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3018(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3040(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3068(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3090(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x30B8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x30E0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3108(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3130(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3158(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3180(0x28)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x31A8(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x31F0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3238(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3280(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x32A0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x32C8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x32F0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3318(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3340(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3368(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3390(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x33B8(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x33E0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3428(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3448(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3490(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x34B0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x34F8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3518(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3560(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3580(0x28)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x35A8(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3670(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3690(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x36D8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x36F8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3740(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3760(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x37A8(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x37C8(0x28)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x37F0(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x38B8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x38D8(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3920(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3968(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x39B0(0x20)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x39D0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3A18(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3A60(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x3AD0(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3B98(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3BE0(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3C28(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3C70(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3C90(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3CD8(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x3D48(0xC8)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3E10(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3E58(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3EA0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3EC0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3F08(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3F28(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3F70(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3F90(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x4000(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x40C8(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4110(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4158(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x41C8(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4290(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x42D8(0x48)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4320(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4348(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4370(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x43B8(0x20)
		FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x43D8(0x10)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x43E8(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4408(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x44D0(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x4598(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4660(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x46D0(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4740(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4760(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x47A8(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x47C8(0xC8)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x4890(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x48D8(0xC8)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x49A0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x49C8(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x49F0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4A38(0x20)
		FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x4A58(0x10)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4A68(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4A88(0xC8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C");
			return ret;
		}

		void Fauna IdleTurn(FPoseLink InPose IdleTurn, FPoseLink& Fauna IdleTurn); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Fauna Idle(FPoseLink InPose Idle, FPoseLink& Fauna Idle); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimNotify_FallExit(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimNotify_LandAddExit(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimNotify_LandEnter(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Burt_AnimBP(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C
	// Inherited from UFortAIFaunaAnimInstance_Grandma -> UFortAIFaunaAnimInstance -> UFortAIAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x4B98 (0x53C0 - 0x828)
	class UGrandma_AnimBP_C : public UFortAIFaunaAnimInstance_Grandma	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x828(0x8) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x830(0x8)
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x838(0x74)
		unsigned char UnknownData01_6[0x4]; // 0x8AC(0x4) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x8B0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x8B8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x8C0(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x8E0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x908(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x930(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x958(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x980(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x9A8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x9D0(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9F8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0xA40(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xA60(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0xAA8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xAC8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0xB10(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xB30(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0xB78(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xB98(0xC8)
		FAnimNode_Root AnimGraphNode_Root; // 0xC60(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xC80(0xB0)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xD30(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xD78(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xDC0(0x48)
		FAnimNode_Root AnimGraphNode_Root; // 0xE08(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xE28(0xB0)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xED8(0x48)
		FAnimNode_Root AnimGraphNode_Root; // 0xF20(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xF40(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xF68(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xF90(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xFB8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xFE0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1008(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1030(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1058(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1080(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x10A8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x10D0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x10F8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1120(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1148(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1170(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1198(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x11C0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x11E8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1210(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1238(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1260(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x12A8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x12C8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1310(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1330(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1378(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1398(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x13E0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1400(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1448(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1468(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x14B0(0x20)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x14D0(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1598(0x70)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1608(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1650(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1698(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x16E0(0x20)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1700(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x17C8(0x70)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1838(0x28)
		unsigned char UnknownData02_7[0x3B60]; // 0x1860(0x3B60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C");
			return ret;
		}

		void Fauna Jump(FPoseLink& Fauna Jump); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Fauna IdleTurn(FPoseLink InPose IdleTurn, FPoseLink& Fauna IdleTurn); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Fauna Idle(FPoseLink InPose Idle, FPoseLink& Fauna Idle); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimNotify_FallExit(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimNotify_LandAddExit(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimNotify_LandEnter(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Grandma_AnimBP(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Irwin/AI/Interfaces/Fauna_Idle_AnimInterface.Fauna_Idle_AnimInterface_C
	// Inherited from UAnimLayerInterface -> UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFauna_Idle_AnimInterface_C : public UAnimLayerInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Irwin/AI/Interfaces/Fauna_Idle_AnimInterface.Fauna_Idle_AnimInterface_C");
			return ret;
		}

		void Fauna IdleTurn(FPoseLink InPose IdleTurn, FPoseLink& Fauna IdleTurn); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Fauna Idle(FPoseLink InPose Idle, FPoseLink& Fauna Idle); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Irwin/AI/Prey/Burt/Abilities/GE_RidingSprint_VehicleDmg.GE_RidingSprint_VehicleDmg_C
	// Inherited from UGET_DirectPhysicalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_RidingSprint_VehicleDmg_C : public UGET_DirectPhysicalDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Irwin/AI/Prey/Burt/Abilities/GE_RidingSprint_VehicleDmg.GE_RidingSprint_VehicleDmg_C");
			return ret;
		}
	};


	// Class /Irwin/AI/Prey/Burt/Abilities/GE_RidingSprint_PawnDmg.GE_RidingSprint_PawnDmg_C
	// Inherited from UGET_DirectPhysicalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_RidingSprint_PawnDmg_C : public UGET_DirectPhysicalDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Irwin/AI/Prey/Burt/Abilities/GE_RidingSprint_PawnDmg.GE_RidingSprint_PawnDmg_C");
			return ret;
		}
	};


	// Class /Irwin/AI/Interfaces/Fauna_Jump_AnimInterface.Fauna_Jump_AnimInterface_C
	// Inherited from UAnimLayerInterface -> UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFauna_Jump_AnimInterface_C : public UAnimLayerInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Irwin/AI/Interfaces/Fauna_Jump_AnimInterface.Fauna_Jump_AnimInterface_C");
			return ret;
		}

		void Fauna Jump(FPoseLink& Fauna Jump); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
