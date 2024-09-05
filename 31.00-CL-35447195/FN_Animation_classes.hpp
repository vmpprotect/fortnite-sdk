#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Animation
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HideWeapon.AnimNotifyState_HideWeapon_C
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UAnimNotifyState_HideWeapon_C : public UAnimNotifyState	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HideWeapon.AnimNotifyState_HideWeapon_C");
			return ret;
		}

		bool Received_NotifyEnd(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6B593200
		bool Received_NotifyBegin(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6B593300
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UAnimNotifyState_HolsterWeapon_C : public UAnimNotifyState	
	{
	public:
		bool PlayEquipAnim; // 0x30(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		FName AnimNotifyStateHolster; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C");
			return ret;
		}

		bool CanApplyHolster(FName& HolsterId); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6B594A00
		bool Received_NotifyEnd(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6B594800
		bool Received_NotifyBegin(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6B594900
	};


	// Class /Game/Animation/Game/MainPlayer/Locomotion/Medium/Male/Jog/HeavyWeapon/BP_GCSteps.BP_GCSteps_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UBP_GCSteps_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Locomotion/Medium/Male/Jog/HeavyWeapon/BP_GCSteps.BP_GCSteps_C");
			return ret;
		}
	};


	// Class /Game/Animation/Game/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C
	// Inherited from UAnimNotify -> UObject
	// Size: 0x11 (0x49 - 0x38)
	class UBP_AnimNotify_CameraShake_C : public UAnimNotify	
	{
	public:
		UClass Shake_BP; // 0x38(0x8)
		double Shake_Scale; // 0x40(0x8)
		ECameraShakePlaySpace Shake_Space; // 0x48(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C");
			return ret;
		}

		bool Received_Notify(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6B594700
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep.AnimNotify_FootStep_C
	// Inherited from UFortAnimNotify_Footstep -> UAnimNotify -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UAnimNotify_FootStep_C : public UFortAnimNotify_Footstep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep.AnimNotify_FootStep_C");
			return ret;
		}

		bool Received_Notify(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D75E44200
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Right.AnimNotify_FootStep_Right_C
	// Inherited from UAnimNotify_FootStep_C -> UFortAnimNotify_Footstep -> UAnimNotify -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UAnimNotify_FootStep_Right_C : public UAnimNotify_FootStep_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Right.AnimNotify_FootStep_Right_C");
			return ret;
		}
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Left.AnimNotify_FootStep_Left_C
	// Inherited from UAnimNotify_FootStep_C -> UFortAnimNotify_Footstep -> UAnimNotify -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UAnimNotify_FootStep_Left_C : public UAnimNotify_FootStep_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Left.AnimNotify_FootStep_Left_C");
			return ret;
		}
	};


	// Class /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C
	// Inherited from UFortPlayerFaceSystemStateMachineAnimInstance -> UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x1728 (0x2B58 - 0x1430)
	class UGameplay_FaceSystem_StateMachine_AnimBP_C : public UFortPlayerFaceSystemStateMachineAnimInstance	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x8)
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x1438(0x14)
		unsigned char UnknownData01_6[0x4]; // 0x144C(0x4) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x1450(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x1458(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x1460(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1480(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x14A8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x14D0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x14F8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1520(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1548(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1570(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1598(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x15C0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x15E8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1610(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1638(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1660(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1688(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x16B0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x16D8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1700(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1728(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1750(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1798(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x17B8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1800(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1820(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1868(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1888(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x18D0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x18F0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1938(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1958(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x19C8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x19E8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1A30(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1A50(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1AC0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1AE0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1B28(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1B48(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1B90(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1BB0(0xC8)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1C78(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1CA0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1CC8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1CF0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1D18(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1D40(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1D68(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1D90(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1DB8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1DE0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1E08(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1E30(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1E58(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1E80(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1EA8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1ED0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1EF8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1F20(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1F48(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1F70(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1F98(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1FC0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1FE8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2010(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2038(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2060(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2088(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x20B0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x20D8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2100(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2128(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2170(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2190(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x21D8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x21F8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2240(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2260(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x22A8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x22C8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2310(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2330(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2378(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2398(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x23E0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2400(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2448(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2468(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x24B0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x24D0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2518(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2538(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2580(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x25A0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x25E8(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2608(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2678(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2698(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x26E0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2700(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2748(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2768(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x27B0(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x27D0(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2840(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2860(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x28A8(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x28C8(0xC8)
		FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x2990(0xC0)
		FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x2A50(0xC0)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2B10(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D75E4EC00
		void ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP(int32_t EntryPoint); // Flags: Final 0x15D75E4EB00
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Player_HandSplash_R.AnimNotify_Player_HandSplash_R_C
	// Inherited from UAnimNotify -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UAnimNotify_Player_HandSplash_R_C : public UAnimNotify	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Player_HandSplash_R.AnimNotify_Player_HandSplash_R_C");
			return ret;
		}

		bool Received_Notify(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D766D5300
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Player_HandSplash_L.AnimNotify_Player_HandSplash_L_C
	// Inherited from UAnimNotify -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UAnimNotify_Player_HandSplash_L_C : public UAnimNotify	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Player_HandSplash_L.AnimNotify_Player_HandSplash_L_C");
			return ret;
		}

		bool Received_Notify(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D7ADE8500
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlaySoundWithCondition.AnimNotify_PlaySoundWithCondition_C
	// Inherited from UFortAnimNotify_PlaySoundConditional -> UAnimNotify_PlaySound -> UAnimNotify -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UAnimNotify_PlaySoundWithCondition_C : public UFortAnimNotify_PlaySoundConditional	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlaySoundWithCondition.AnimNotify_PlaySoundWithCondition_C");
			return ret;
		}

		bool ShouldTriggerAnimNotify(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D7ADEC800
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UAnimNotifyState_AttachAsset_C : public UAnimNotifyState	
	{
	public:
		FAssetAttachment Attachment; // 0x30(0x30)
		UAnimSequence Animation; // 0x60(0x8)
		bool Looping; // 0x68(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		double PlayRate; // 0x70(0x8)
		FGameplayTagContainer DoNotAttachTagContainer; // 0x78(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C");
			return ret;
		}

		bool Received_NotifyEnd(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D67092D00
		bool Received_NotifyBegin(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D67092E00
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_StopMontageGroup.AnimNotifyState_StopMontageGroup_C
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UAnimNotifyState_StopMontageGroup_C : public UAnimNotifyState	
	{
	public:
		FName GroupNameToStop; // 0x30(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		double BlendOutTime; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_StopMontageGroup.AnimNotifyState_StopMontageGroup_C");
			return ret;
		}

		bool Received_NotifyBegin(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D67097200
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C
	// Inherited from UAnimNotify -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UAnimNotify_PlayForceFeedback_C : public UAnimNotify	
	{
	public:
		UForceFeedbackEffect ForceFeedbackTemplate; // 0x38(0x8)
		UForceFeedbackEffect ForceFeedbackFarTemplate; // 0x40(0x8)
		bool bPlayAtWorldLocation; // 0x48(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		double InnerRadius; // 0x50(0x8)
		double OuterRadius; // 0x58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C");
			return ret;
		}

		bool Received_Notify(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D67099200
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UAnimNotifyState_DisablePawnRotation_C : public UAnimNotifyState	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C");
			return ret;
		}

		bool Received_NotifyEnd(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6B2E8D00
		bool Received_NotifyBegin(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6B2E8E00
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_EliminationBotM2.AnimNotify_EliminationBotM2_C
	// Inherited from UAnimNotify -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UAnimNotify_EliminationBotM2_C : public UAnimNotify	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_EliminationBotM2.AnimNotify_EliminationBotM2_C");
			return ret;
		}

		bool Received_Notify(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6B2EF200
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UAnimNotifyState_TeleportFinished_C : public UAnimNotifyState	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C");
			return ret;
		}

		bool Received_NotifyEnd(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6B2EF100
		bool Received_NotifyBegin(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6B2EF000
	};


	// Class /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C
	// Inherited from UFortVehicleLayerAnimInstance_Riding -> UFortVehicleOccupantAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x4DE8 (0x5928 - 0xB40)
	class UWolfRidingPlayerLayerAnimBP_C : public UFortVehicleLayerAnimInstance_Riding	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0xB48(0xA8)
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0xBF0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0xBF8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0xC00(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xC20(0xB0)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xCD0(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xDF8(0x128)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xF20(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xF40(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0xF60(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xFD0(0xC8)
		FAnimNode_Root AnimGraphNode_Root; // 0x1098(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x10B8(0xB0)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1168(0x78)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x11E0(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1200(0x20)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1220(0x48)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1268(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1390(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x14B8(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x15E0(0x128)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1708(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1730(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1758(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1780(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x17A8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x17D0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x17F8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1820(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1848(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1870(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1898(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x18C0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x18E8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1910(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1938(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1960(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1988(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x19B0(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x19D8(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1A20(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1A68(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1AB0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1AD0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1B18(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1B60(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1BA8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1BC8(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1C10(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1C58(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1CA0(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1CE8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1D30(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1D50(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1D98(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1DB8(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1E00(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1E70(0xC8)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1F38(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1F80(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1FC8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1FE8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2030(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2050(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2078(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x20A0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x20C8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x20F0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2118(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2140(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2168(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2190(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x21D8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x21F8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2240(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2260(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x22A8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x22C8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2310(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2330(0x28)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2358(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2420(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2440(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2488(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x24A8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x24F0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2510(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2558(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2578(0x28)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x25A0(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2668(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2688(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x26D0(0x48)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2718(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2740(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2768(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x27B0(0x20)
		FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x27D0(0x10)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x27E0(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2800(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x28C8(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2990(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x29D8(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2A20(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x2A90(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2B58(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2BC8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2BE8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2C30(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2C50(0xC8)
		FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x2D18(0xF0)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2E08(0x28)
		FAnimNode_Inertialization AnimGraphNode_Inertialization; // 0x2E30(0x420)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x3250(0x118)
		FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x3368(0xF0)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3458(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3480(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x34A8(0x28)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x34D0(0x28)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x34F8(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3518(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3588(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x35A8(0x28)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x35D0(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x35F0(0xC8)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x36B8(0x78)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x3730(0x28)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x3758(0x78)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x37D0(0x28)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x37F8(0x28)
		FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x3820(0xD0)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x38F0(0x118)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3A08(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3A30(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3A58(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3A80(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3AA8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3AD0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3AF8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3B20(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3B48(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3B70(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3B98(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3BC0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3BE8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3C10(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3C38(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3C60(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3C88(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3CB0(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3CD8(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3D20(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3D68(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3DB0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3DD0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3E18(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3E60(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3EA8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3EC8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3F10(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3F30(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3F78(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3FC0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4008(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4028(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4050(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4078(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x40A0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x40C8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x40F0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4118(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4140(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4168(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x41B0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x41D0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4218(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4238(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4280(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x42A0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x42E8(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4308(0x28)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4330(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x43F8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4418(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4460(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4480(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x44C8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x44E8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4530(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4550(0x28)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4578(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4640(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4660(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x46A8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x46C8(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4710(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4758(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x47A0(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x47E8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4830(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4850(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4898(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x48B8(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4900(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4948(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4990(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x49D8(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4A48(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4A68(0xC8)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x4B30(0x128)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x4C58(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4D20(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x4D90(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4E58(0x70)
		FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x4EC8(0x10)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4ED8(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4F20(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4F68(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4FD8(0x70)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x5048(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5090(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x50B0(0xC8)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5178(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x51A0(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x51C8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5210(0x20)
		FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x5230(0x10)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5240(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5260(0xC8)
		FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x5328(0xD0)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x53F8(0x118)
		FAnimNode_Root AnimGraphNode_Root; // 0x5510(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x5530(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x55E0(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x5690(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x56B0(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x5760(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x5810(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x58C0(0x20)
		bool State_Rule_Moving_Idle; // 0x58E0(0x1)
		bool State_Rule_Idle_Moving; // 0x58E1(0x1)
		bool Is_Jumping; // 0x58E2(0x1)
		bool State_Rule_Fall_Idle; // 0x58E3(0x1)
		bool Is_Falling; // 0x58E4(0x1)
		bool State_Rule_Fall_Moving; // 0x58E5(0x1)
		bool State_Rule_Jump_Land_Moving; // 0x58E6(0x1)
		bool Is_Surface_Swimming; // 0x58E7(0x1)
		bool State_Rule_Swim_Idle_Swim_Loco; // 0x58E8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x58E9(0x7) UNKNOWN PROPERTY
		double BodyRoll; // 0x58F0(0x8)
		double WolfSpeed2D; // 0x58F8(0x8)
		bool Is_Boosting; // 0x5900(0x1)
		bool Play_Land_Additive; // 0x5901(0x1)
		bool Is_Moving_Backwards; // 0x5902(0x1)
		bool Should_Play_Stop_Backwards; // 0x5903(0x1)
		bool Is_Turning_in_Place; // 0x5904(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x5905(0x3) UNKNOWN PROPERTY
		double Turn_in_Place_Angle_Delta; // 0x5908(0x8)
		bool Was_Turning_Right; // 0x5910(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x5911(0x7) UNKNOWN PROPERTY
		double Turn_in_Place_Rotation_Speed; // 0x5918(0x8)
		double Backwards_Play_Rate; // 0x5920(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C");
			return ret;
		}

		void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride); // Flags: HasOutParms|BlueprintCallable 0x15D41FA8B00
		void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride); // Flags: HasOutParms|BlueprintCallable 0x15D41FA8A00
		void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // Flags: HasOutParms|BlueprintCallable 0x15D41FA8900
		void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // Flags: HasOutParms|BlueprintCallable 0x15D41FA8800
		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D41FA9400
		void GetMainAnimBPData_Wolf(UObject AnimInstance); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D41FA8E00
		void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_0A1EFC344EF1A6E586A54FAEC4F5F766(); // Flags: BlueprintEvent 0x15D41FA9100
		void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_4EDCD4F04E8D5963547EB2BE1F10FA2D(); // Flags: BlueprintEvent 0x15D41FA9000
		void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D7C43EB141CFE2929E3D23914954FA93(); // Flags: BlueprintEvent 0x15D41FA9200
		void BlueprintCollectRidableAnimBPData(UAnimInstance RidableAnimInstance); // Flags: Event|Protected|BlueprintEvent 0x15D41FA9300
		void UpdateBoostPlayRate(); // Flags: Event|Protected|BlueprintEvent 0x15D41FA8C00
		void PlaceHandIKTargets(); // Flags: Event|Protected|BlueprintEvent 0x15D41FA8D00
		void ExecuteUbergraph_WolfRidingPlayerLayerAnimBP(int32_t EntryPoint); // Flags: Final 0x15D41FA8F00
	};


	// Class /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C
	// Inherited from UFortValetPassengerAnimInstance -> UFortVehicleOccupantAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x18A9 (0x21B9 - 0x910)
	class URidingPlayerLayerAnimBP_C : public UFortValetPassengerAnimInstance	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x910(0x8)
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x918(0x1C)
		unsigned char UnknownData05_6[0x4]; // 0x934(0x4) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x938(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x940(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x948(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x968(0xB0)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xA18(0x78)
		FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xA90(0xF0)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xB80(0x28)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xBA8(0x128)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xCD0(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xCF0(0x20)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xD10(0x78)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xD88(0x28)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xDB0(0x48)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xDF8(0x28)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0xE20(0xB0)
		FAnimNode_Slot AnimGraphNode_Slot; // 0xED0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xF18(0x48)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0xF60(0x118)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1078(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x10E8(0xC8)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x11B0(0x128)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x12D8(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x1388(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x13A8(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x13F0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1438(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1480(0x48)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x14C8(0x78)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1540(0x28)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1568(0x28)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1590(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x15D8(0x70)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1648(0x48)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x1690(0xB0)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1740(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1788(0x48)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x17D0(0x28)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x17F8(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1840(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1888(0x48)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x18D0(0x118)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x19E8(0x28)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1A10(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1B38(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1C60(0x128)
		FAnimNode_Root AnimGraphNode_Root; // 0x1D88(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x1DA8(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x1E58(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x1F08(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x1F28(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x1FD8(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2088(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x2138(0x20)
		FRotator MatchRootYaw; // 0x2158(0x18)
		bool Is_Targeting; // 0x2170(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x2171(0x7) UNKNOWN PROPERTY
		AFortPlayerPawn FortPlayer; // 0x2178(0x8)
		double Timer; // 0x2180(0x8)
		bool ShouldTransitionToRiding; // 0x2188(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x2189(0x7) UNKNOWN PROPERTY
		double LowerBodyYaw; // 0x2190(0x8)
		bool IsRideMode; // 0x2198(0x1)
		bool IsSprinting; // 0x2199(0x1)
		bool IsStandingStill; // 0x219A(0x1)
		bool IsInCombat; // 0x219B(0x1)
		unsigned char UnknownData08_6[0x4]; // 0x219C(0x4) UNKNOWN PROPERTY
		AFortAIPawn WildlifePawn; // 0x21A0(0x8)
		bool IsSmackie; // 0x21A8(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x21A9(0x7) UNKNOWN PROPERTY
		double Velocity; // 0x21B0(0x8)
		bool IsNug; // 0x21B8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C");
			return ret;
		}

		void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride); // Flags: HasOutParms|BlueprintCallable 0x15D42B02A00
		void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride); // Flags: HasOutParms|BlueprintCallable 0x15D42B02900
		void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // Flags: HasOutParms|BlueprintCallable 0x15D42B02800
		void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // Flags: HasOutParms|BlueprintCallable 0x15D42B02700
		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6672FA00
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976(); // Flags: BlueprintEvent 0x15D42B02D00
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA(); // Flags: BlueprintEvent 0x15D42B02C00
		void BlueprintUpdateAnimation(float DeltaTimeX); // Flags: Event|Public|BlueprintEvent 0x15D42B02E00
		void ExecuteUbergraph_RidingPlayerLayerAnimBP(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D42B02B00
	};


	// Class /RidingContent/Animation/Notifies/AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UAnimNotifyState_SyncPettingCreature_C : public UAnimNotifyState	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Animation/Notifies/AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C");
			return ret;
		}

		void GetRiderPettingMontage(AActor RiderActor, UAnimMontage& RiderPettingMontage); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D42F25500
		bool Received_NotifyEnd(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 0x15D42F25300
		bool Received_NotifyBegin(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 0x15D42F25400
	};


	// Class /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C
	// Inherited from UFortVehicleLayerAnimInstance_Riding -> UFortVehicleOccupantAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x5218 (0x5D58 - 0xB40)
	class UBoarRidingPlayerLayerAnimBP_C : public UFortVehicleLayerAnimInstance_Riding	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0xB48(0x90)
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0xBD8(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0xBE0(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0xBE8(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xC08(0xB0)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xCB8(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xDE0(0x128)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xF08(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xF28(0x20)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xF48(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1070(0x128)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1198(0xC8)
		FAnimNode_LegIK AnimGraphNode_LegIK; // 0x1260(0x100)
		FAnimNode_LegIK AnimGraphNode_LegIK; // 0x1360(0x100)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1460(0x70)
		FAnimNode_Root AnimGraphNode_Root; // 0x14D0(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x14F0(0xB0)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x15A0(0x78)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1618(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1638(0x20)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1658(0x48)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x16A0(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x17C8(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x18F0(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1A18(0x128)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1B40(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1B68(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1B90(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1BB8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1BE0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1C08(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1C30(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1C58(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1C80(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1CA8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1CD0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1CF8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1D20(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1D48(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1D70(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1D98(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1DC0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1DE8(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1E10(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1E58(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1EA0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1EE8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1F08(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1F50(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1F98(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1FE0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2000(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2048(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2090(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x20D8(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2120(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2168(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2188(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x21D0(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x21F0(0x70)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2260(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x22A8(0xC8)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2370(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x23B8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2400(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2420(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2468(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2488(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x24B0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x24D8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2500(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2528(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2550(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2578(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x25A0(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x25C8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2610(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2630(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2678(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2698(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x26E0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2700(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2748(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2768(0x28)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2790(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2858(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2878(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x28C0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x28E0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2928(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2948(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2990(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x29B0(0x28)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x29D8(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2AA0(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2AC0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2AE8(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2B10(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2B58(0x20)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2B78(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2B98(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x2C60(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2D28(0x70)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2D98(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2DE0(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2E28(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2E70(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2EB8(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x2F28(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2FF0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3010(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3058(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3078(0xC8)
		FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x3140(0xF0)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x3230(0x28)
		unsigned char UnknownData04_6[0x8]; // 0x3258(0x8) UNKNOWN PROPERTY
		FAnimNode_Inertialization AnimGraphNode_Inertialization; // 0x3260(0x420)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x3680(0x118)
		FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x3798(0xF0)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3888(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x38B0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x38D8(0x28)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x3900(0x28)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3928(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3948(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x39B8(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x39D8(0x28)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3A00(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3A20(0xC8)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x3AE8(0x78)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x3B60(0x28)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x3B88(0x78)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x3C00(0x28)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x3C28(0x28)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x3C50(0x118)
		FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x3D68(0xD0)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x3E38(0x118)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3F50(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3F78(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3FA0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3FC8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3FF0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4018(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4040(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4068(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4090(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x40B8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x40E0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4108(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4130(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4158(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4180(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x41A8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x41D0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x41F8(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4220(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4268(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x42B0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x42F8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4318(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4360(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x43A8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x43F0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4410(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4458(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4478(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x44C0(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4508(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4550(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4570(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4598(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x45C0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x45E8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4610(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4638(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4660(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4688(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x46B0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x46F8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4718(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4760(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4780(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x47C8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x47E8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4830(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4850(0x28)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4878(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4940(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4960(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x49A8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x49C8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4A10(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4A30(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4A78(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4A98(0x28)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4AC0(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4B88(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4BA8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4BF0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4C10(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4C58(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4CA0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4CE8(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4D30(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4D78(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4D98(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4DE0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4E00(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4E48(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4E90(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4ED8(0x70)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4F48(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4F90(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4FB0(0xC8)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x5078(0x128)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x51A0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x51C8(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x51F0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5238(0x20)
		FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x5258(0x10)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5268(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5288(0xC8)
		FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x5350(0xD0)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x5420(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x54E8(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x5558(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x5620(0x70)
		FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x5690(0x10)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x56A0(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x56E8(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x5730(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x57A0(0x70)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x5810(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5858(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5878(0xC8)
		FAnimNode_Root AnimGraphNode_Root; // 0x5940(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x5960(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x5A10(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x5AC0(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x5AE0(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x5B90(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x5C40(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x5CF0(0x20)
		AFortPlayerPawn FortPlayer; // 0x5D10(0x8)
		AFortPawn WildlifePawn; // 0x5D18(0x8)
		bool State_Rule_Moving_Idle; // 0x5D20(0x1)
		bool Is_Jumping; // 0x5D21(0x1)
		bool Is_Falling; // 0x5D22(0x1)
		bool Is_Surface_Swimming; // 0x5D23(0x1)
		unsigned char UnknownData05_6[0x4]; // 0x5D24(0x4) UNKNOWN PROPERTY
		double BodyRoll; // 0x5D28(0x8)
		double BoarSpeed2D; // 0x5D30(0x8)
		bool Is_Moving_Backwards; // 0x5D38(0x1)
		bool Is_Boosting; // 0x5D39(0x1)
		bool Can_Transition_Fall_To_Moving; // 0x5D3A(0x1)
		bool Can_Transition_Fall_To_Idle; // 0x5D3B(0x1)
		bool Can_Transition_Idle_To_Moving; // 0x5D3C(0x1)
		bool Is_Turning_in_Place; // 0x5D3D(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x5D3E(0x2) UNKNOWN PROPERTY
		double Turn_in_Place_Angle_Delta; // 0x5D40(0x8)
		bool Should_Play_Stop_Backwards; // 0x5D48(0x1)
		bool Play_Land_Additive; // 0x5D49(0x1)
		bool Was_Turning_Right; // 0x5D4A(0x1)
		unsigned char UnknownData07_6[0x5]; // 0x5D4B(0x5) UNKNOWN PROPERTY
		double Backwards_Play_Rate; // 0x5D50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C");
			return ret;
		}

		void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride); // Flags: HasOutParms|BlueprintCallable 0x15D42F27B00
		void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride); // Flags: HasOutParms|BlueprintCallable 0x15D42F27A00
		void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // Flags: HasOutParms|BlueprintCallable 0x15D42F27900
		void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // Flags: HasOutParms|BlueprintCallable 0x15D42F27800
		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42F28000
		void GetMainAnimBPData_Boar(UObject AnimInstance); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D42F27C00
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_3AC2A6BB409F97D93A87FE8016464FEE(); // Flags: BlueprintEvent 0x15D42F27E00
		void BlueprintCollectRidableAnimBPData(UAnimInstance RidableAnimInstance); // Flags: Event|Protected|BlueprintEvent 0x15D42F27F00
		void ExecuteUbergraph_BoarRidingPlayerLayerAnimBP(int32_t EntryPoint); // Flags: Final 0x15D42F27D00
	};


	// Class /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAnimationBPFunctionLibrary_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C");
			return ret;
		}

		void ClothAsset Controller Function(UCustomCharacterPartAnimInstance CharacterPartAnimInstance, UChaosClothComponent ChaosClothComponent, FString ClothingAssetName, FClothParamsStruct Cloth Paramaters, FClothCoreSettingStruct Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, FWindGustParamsStruct WindGustsParams, FWindGustLocalSettingStruct WindGustLocalSettings, UObject __WorldContext, FString& CurrentStateOut, FClothSettingStruct& Cloth Settings Out, FClothCoreSettingStruct& Cloth Core Settings Out, FWindGustSettingStruct& WindGustSettings Out, FWindGustLocalSettingStruct& WindGustLocalSettings Out, FVector& GustStrength - WindVelocityOut, FVector& LinearVelVector-DELETE LATER); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2F0600
		void Vehicle Dynamics Scaler Function(UCustomCharacterPartAnimInstance CharacterPartAnimInstance, bool Debug, UObject __WorldContext, double& InVehicleHeadScaleAlpha, double& InVehicleHeadSimAlpha, double& InVehicleSkirtScaleAlpha, double& InVehicleSkirtSimAlpha); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D0C2FA100
		void Cloth Controller Function Nativization Wrapper(UCustomCharacterPartAnimInstance CharacterPartAnimInstance, FString& ClothingAssetName, FClothControllerClothParameterMap& Cloth Paramaters, FClothCoreSettings& Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_Speed_Limit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, float DeltaTime, float GameTimeInSeconds, FClothControllerWindParameterMap& WindGustsParams, FWindGustSettings& WindGustLocalSettings, UObject __WorldContext, FName& CharacterStateOut, FClothParameters& Cloth Settings Out, FWindGustSettings& WindGustLocalSettings Out, FVector& GustStrength - WindVelocityOut, FVector& LinearVelVector-DELETE LATER); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2F8900
		void Cloth Controller Convert To Nativized Parameters(FClothParamsStruct ClothParametersStruct, FWindGustParamsStruct WindParametersStruct, FClothCoreSettingStruct Cloth Core Settings, FWindGustLocalSettingStruct Wind Gust Settings, FName Character State Name, UObject __WorldContext, FClothParameters& Cloth Parameters Nativized, FWindGustParameters& Wind Parameters Nativized, FClothCoreSettings& ClothCoreSettings, FWindGustSettings& Wind Settings Nativized); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2F8700
		void ConvertToNativizedWindParameters(FWindGustSettingStruct& WindGustSettingStruct, UObject __WorldContext, FWindGustParameters& WindGustParameters); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2F9C00
		void ConvertToNativizedClothParameters(FClothSettingStruct& ClothSettingStruct, UObject __WorldContext, FClothParameters& ClothParameters); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2F9B00
		void Get Joint Location Relative to Bone(FName Target Joint, FName Relative Joint, FVector Offset, UMeshComponent SkelMeshComponent, bool Debug Draw, UObject __WorldContext, FVector& Joint Location Vector); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2F6900
		void Cape Spine05 Pelvis Rotation Function(USkinnedMeshComponent SkeletalMeshComponent, UObject __WorldContext, FRotator& Rotate Z Output); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2F8300
		void Separated Cloth Control Function(UCustomCharacterPartAnimInstance CharacterPartAnimInstance, FString ClothingAssetName, FClothParamsStruct Cloth Paramaters, FClothCoreSettingStruct Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, FWindGustParamsStruct WindGustsParams, FWindGustLocalSettingStruct WindGustLocalSettings, UObject __WorldContext, FString& CurrentStateOut, FClothCoreSettingStruct& Cloth Core Settings Out, FClothSettingStruct& Cloth Settings Out, FWindGustSettingStruct& WindGustSettings Out, FWindGustLocalSettingStruct& WindGustLocalSettings Out, FVector& GustStrength - WindVelocityOut, FVector& LinearVelVector-DELETE LATER); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2FEB00
		void Separated Cloth Control Write To Instance(UCustomCharacterPartAnimInstance Character Part Anim Instance, FString Clothing Asset Name, FClothCoreSettingStruct Cloth Core Settings, FClothSettingStruct Cloth Settings, FVector Gust Strength - Wind Velocity, FName Joint Name, UObject __WorldContext); // Flags: Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2FED00
		void Separated Cloth Control Calculate Parameters(UCustomCharacterPartAnimInstance InCharacterPartAnimInstance, FClothParamsStruct Cloth Paramaters, FClothCoreSettingStruct Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, FWindGustParamsStruct InWindGustParams, FWindGustLocalSettingStruct InWindGustLocalSettings, UObject __WorldContext, FString& OutCurrentState, FClothCoreSettingStruct& OutClothCoreSettings, FClothSettingStruct& OutClothSettings, FWindGustSettingStruct& OutWindGustSettings, FWindGustLocalSettingStruct& OutWindGustLocalSettings, FVector& OutGustStrength, FVector& LinearVelVector-DELETE LATER); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2FEA00
		void Separated Cloth Control Wind Gust Function(double DeltaTime, double GameTimeInSeconds, FName JointName, FWindGustSettingStruct WindGustSettings, FWindGustLocalSettingStruct WindGustLocalSettings, UObject __WorldContext, FVector& GustStrengthWindVelocity Out, FWindGustLocalSettingStruct& WindGustLocalSettingsOut); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2FEC00
		void Set WPO Regional Function(UMaterialInstanceDynamic Material, UMaterialInstanceDynamic Overlay Material, USkeletalMeshComponent Skeletal Mesh, FName Velocity Transform, double Velocity Interp Speed, FName Collision Transform, TEnumAsByte Collision Transform Axis, bool Invert Collision Transform Axis, double Delta Time X, FVector& Previous Velocity Transform Location, FVector& Previous Velocity Transform Velocity, int32_t Region, UObject __WorldContext); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2FF000
		void Get WPO Regional Param Names Function(int32_t& Region, UObject __WorldContext, FName& Velocity, FName& Bone Position, FName& Bone Vector); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D0C2F5100
		void Set WPO Globals Function(UMaterialInstanceDynamic Material, UMaterialInstanceDynamic Overlay Material, USkeletalMeshComponent Skeletal Mesh, FName Local Noise Reference Transform, double Local Noise Offset Multiplier, FVector& Local Noise Transform  Location, FVector& Local Noise Offset, FName Local Turbulence Vector Transform, TEnumAsByte Local Turbulence Vector Transform Axis, UObject __WorldContext); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2FEF00
		void Get  Motion Vector For Transform Function(USceneComponent Skeletal Mesh, FName Transform Name, FVector& Previous Transform Location, UObject __WorldContext, FVector& Transform Motion Vector, FVector& Transform Location, FTransform& Transform); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2F6C00
		void Debug Cloth Teleport Threshold Function(double MinDistance, double MinRotation, USceneComponent SkelMeshComponent, bool PrintToScreen, FName BoneName, FVector& InVector, FRotator PawnDeltaRotation, double PrintToScreenDuration, UObject __WorldContext, double& Distance, double& Rotation); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D0C2F9700
		void Cloth Controller Helper Scale For Player Movement(FVector LinearVelScale, double PlayerFwdVector, double PlayerFwdVectorJump, double ClothUpX, double ClothUpZ, UObject __WorldContext, FVector& LinearVelVectorOut); // Flags: Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D0C2F8A00
		void Scale Joint Rotation Function(FRotator Scale, FName TargetBone, FName ReferenceBone, USkinnedMeshComponent SkelMeshComponent, UObject __WorldContext, FRotator& FinalRotation, FRotator& OriginalRotation); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2FE900
		void Adjust Emote Vehicle Wheel Rotation(AActor Owning Actor, double CurrentWheelRotation, double DeltaTime, double CurrentActorRotation, UObject __WorldContext, double& NewActorRotation, double& NewWheelRotation); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D0C2F8200
		void Gravity Override Setter Function(UCustomCharacterPartAnimInstance CharacterPartAnimInstance, UMeshComponent SkelMeshComponent, FGravityOverrideSettingStruct GravityOverride Settings, double GameTimeInSeconds, UObject __WorldContext, FGravityOverrideSettingStruct& GravityOverride Settings Out, FVector& GravityOverride Out); // Flags: Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2F9800
		void Gravity Override State Function(UCustomCharacterPartAnimInstance CharacterPartAnimInstance, double GameTimeInSeconds, FGravityOverrideParamsStruct& GravityOverrideParams, FRBANParamsStruct& RBAN Params, bool DebugDraw, FName DebugJointName, UObject __WorldContext, FVector& GravityOverride, FString& CurrentStateOut, FGravityOverrideSettingStruct& GravityOverrideSettingsOut, FRBANSettingStruct& RBAN SettingsOut); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2FE400
		void FN_PSDPoseReaderFNC(FString startJnt, FString endJnt, FString poseJnt, double Angle, bool Debug, USkeletalMeshComponent SkeletalMeshComponent, UObject __WorldContext, double& pose_output); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D0C2F6000
		void Wind Gust Control Function(UCustomCharacterPartAnimInstance CharacterPartAnimInstance, double DeltaTime, double GameTimeInSeconds, FName JointName, FWindGustSettingStruct WindGustSettings, FWindGustLocalSettingStruct WindGustLocalSettings, UObject __WorldContext, FVector& GustStrengthWindVelocity Out, FWindGustLocalSettingStruct& WindGustLocalSettingsOut); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2FA200
		void WindGustGeneratorFunction(double DeltaTime, FWindGustSettingStruct GustSettings, FWindGustLocalSettingStruct ClothGustLocalSettings, UObject __WorldContext, double& GustStrength - WindVelocity, FWindGustLocalSettingStruct& ClothGustLocalSettingsOut); // Flags: Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D58421100
		void Play Transformation Montage(AFortPlayerPawn FortPlayerPawn, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D0C2FE500
		void Clear Transformation Montage(AFortPlayerPawn FortPlayerPawn, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D0C2F8400
		void Set Transformation Montage(AFortPlayerPawn FortPlayerPawn, UAnimMontage Montage, double StartTime, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D0C2FEE00
		void Cloth Controller Setter Function(UCustomCharacterPartAnimInstance CharacterPartAnimInstance, FClothSettingStruct Cloth Settings, UObject __WorldContext, FClothSettingStruct& Cloth Settings Out); // Flags: Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2F9600
		void Cloth Controller Function(UCustomCharacterPartAnimInstance CharacterPartAnimInstance, FString ClothingAssetName, FClothParamsStruct Cloth Paramaters, FClothCoreSettingStruct Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, FWindGustParamsStruct WindGustsParams, FWindGustLocalSettingStruct WindGustLocalSettings, UObject __WorldContext, FString& CurrentStateOut, FClothSettingStruct& Cloth Settings Out, FClothCoreSettingStruct& Cloth Core Settings Out, FWindGustSettingStruct& WindGustSettings Out, FWindGustLocalSettingStruct& WindGustLocalSettings Out, FVector& GustStrength - WindVelocityOut, FVector& LinearVelVector-DELETE LATER); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D0C2F8800
		void RandomRotatorFunction(double GameTimeInSeconds, double PerlinScale, FRotator Frequency, FRotator Amplitude, FRotator Offset, double TimeOffset, UObject __WorldContext, FRotator& RandomRotator); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D0C2FE800
		void Player Movement Function(UCustomCharacterPartAnimInstance CharacterPartAnimInstance, double X Dot Product, double Y Dot Product, double Z Dot Product, bool DrawDebug, double Debug Scalar, UObject __WorldContext, double& X Movement, double& Y Movement, double& Z Movement); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D0C2FE600
		void Random Vector Function(UCustomCharacterPartAnimInstance CharacterPartAnimInstance, UMeshComponent SkelMeshComponent, FName JointName, double GameTimeInSeconds, double TimeOffset, double PerlinScale, FVector Frequency, FVector Amplitude, FVector Offset, UObject __WorldContext, FVector& VectorOut); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D0C2FE700
		void DrawVectorFromJointFunction(USceneComponent SkelMeshComponent, FName JointName, FVector LineEnd, FVector JointOffset, FLinearColor LineColor, double Thickness, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D0C2F6600
		void DrawJointDebugFunction(USceneComponent SkelMeshComponent, FVector JointOffset, TArray& JointName, double Scale, double duration, double Thickness, bool DebugDraw, UObject __WorldContext); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D0C2F6700
		void ComplexSimSpaceFunction(UCustomCharacterPartAnimInstance CharacterPartAnimInstance, double InterpSpeedMax, double PawnSpeedMax, double RInterpErrorTolerance, double DeltaTime, bool DebugDraw, FRotator sim_space_rotation_in, bool inComponentSpaceIn, bool inComponentSpaceLastFrameIn, bool lockedOnSimSpaceIn, double InterpSpeedIn, UObject __WorldContext, FRotator& sim_space_rotation, bool& inComponentSpaceOut, bool& inComponentSpaceLastFrameOut, bool& lockedOnSimSpaceOut, double& InterpSpeedOut); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D0C2F9D00
		void Gravity Override Function(UCustomCharacterPartAnimInstance CharacterPartAnimInstance, double GameTimeInSeconds, FVector WindFreq, FVector WindAmp, FVector WindOffset, FVector GoingUpGravityOverride, FVector ComingDownGravityOverride, FVector DivingDownGravityOverride, FVector ParachuteOpenedGravityOverride, FVector GroundWindFreq, FVector GroundWindAmp, FVector GroundWindOffset, FVector OnGroundGravityOverride, FVector SwimmingGravityOverride, FName JointName, UObject __WorldContext, FVector& GravityOverride); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D0C2F6E00
	};


	// Class /FigureCosmetics/Animation/ABP_FigureCosmetics_Player_Frontend.ABP_FigureCosmetics_Player_Frontend_C
	// Inherited from UFrontendAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x22A8 (0x2C58 - 0x9B0)
	class UABP_FigureCosmetics_Player_Frontend_C : public UFrontendAnimInstance	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x9B8(0x20)
		FAnimSubsystemInstance AnimBlueprintExtension_Tag; // 0x9D8(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x9E0(0x8)
		FAnimSubsystemInstance_NodeRelevancy AnimBlueprintExtension_NodeRelevancy; // 0x9E8(0xA8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0xA90(0x8)
		FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0xA98(0xB8)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xB50(0x28)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xB78(0x28)
		FFortAnimNode_NoBlendCurveSlot FortAnimGraphNode_NoBlendCurveSlot; // 0xBA0(0x78)
		FFortAnimNode_NoBlendCurveSlot FortAnimGraphNode_NoBlendCurveSlot; // 0xC18(0x78)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xC90(0x78)
		FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0xD08(0xC8)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xDD0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xE18(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xE60(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xEA8(0xC8)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xF70(0x48)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xFB8(0x78)
		FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x1030(0xC8)
		FFortAnimNode_NoBlendCurveSlot FortAnimGraphNode_NoBlendCurveSlot; // 0x10F8(0x78)
		FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0x1170(0xB8)
		FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0x1228(0xB8)
		FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0x12E0(0xB8)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x1398(0x48)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x13E0(0x128)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1508(0x20)
		FAnimNode_Root AnimGraphNode_Root; // 0x1528(0x20)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1548(0xC8)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1610(0x78)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1688(0x28)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x16B0(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x16D8(0x48)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1720(0x20)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1740(0x48)
		FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x1788(0x40)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x17C8(0x78)
		FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1840(0xF0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x1930(0xB0)
		FAnimNode_Inertialization AnimGraphNode_Inertialization; // 0x19E0(0x420)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1E00(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1E28(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1E50(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1E78(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1EA0(0x48)
		FAnimNode_Mirror AnimGraphNode_Mirror; // 0x1EE8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1F30(0x20)
		FAnimNode_Mirror AnimGraphNode_Mirror; // 0x1F50(0x48)
		FAnimNode_ChooserPlayer AnimGraphNode_ChooserPlayer; // 0x1F98(0x248)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x21E0(0x20)
		FAnimNode_Mirror AnimGraphNode_Mirror; // 0x2200(0x48)
		FAnimNode_ChooserPlayer AnimGraphNode_ChooserPlayer; // 0x2248(0x248)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2490(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x24B0(0xC8)
		FAnimNode_Root AnimGraphNode_Root; // 0x2578(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2598(0xB0)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2648(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2670(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2698(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x26E0(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x2750(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2818(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2838(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2880(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x28A0(0xC8)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2968(0xB0)
		FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x2A18(0xF0)
		FAnimNode_Root AnimGraphNode_Root; // 0x2B08(0x20)
		bool __CustomProperty_Force_Enable_ControlRig_92D7F8134E14E04E329C75A15FD44E7F; // 0x2B28(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x2B29(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate MenuScreenDispatcher; // 0x2B30(0x10)
		bool IsSkydiveDiving_Potato; // 0x2B40(0x1)
		bool HasBeenSelected; // 0x2B41(0x1)
		unsigned char UnknownData10_6[0x2]; // 0x2B42(0x2) UNKNOWN PROPERTY
		int32_t PoseInt; // 0x2B44(0x4)
		FVector OffsetTranslate; // 0x2B48(0x18)
		FRotator OffsetRotate; // 0x2B60(0x18)
		APlayerPawn_Athena_C PawnOwner; // 0x2B78(0x8)
		double StartTime; // 0x2B80(0x8)
		double PlayRate; // 0x2B88(0x8)
		double HidePropTimeRemaining; // 0x2B90(0x8)
		bool HidePropBones; // 0x2B98(0x1)
		bool HasWeaponEquipped; // 0x2B99(0x1)
		unsigned char UnknownData11_6[0x6]; // 0x2B9A(0x6) UNKNOWN PROPERTY
		AFortWeapon Equipped_Weapon; // 0x2BA0(0x8)
		UAnimMontage Current_Idle_Montage; // 0x2BA8(0x8)
		double Skydive_Aim_Yaw; // 0x2BB0(0x8)
		double Skydive_Aim_Pitch; // 0x2BB8(0x8)
		int32_t WeaponHandPose; // 0x2BC0(0x4)
		bool OneHandedWeapon; // 0x2BC4(0x1)
		bool Dual; // 0x2BC5(0x1)
		unsigned char UnknownData12_6[0x2]; // 0x2BC6(0x2) UNKNOWN PROPERTY
		double Lean_Roll; // 0x2BC8(0x8)
		double Lean_Pitch; // 0x2BD0(0x8)
		AFortPlayerPawn Owner_Fort_Pawn; // 0x2BD8(0x8)
		USkeletalMeshComponent Minifig_Mesh_Component; // 0x2BE0(0x8)
		bool Apply_Idle_Break; // 0x2BE8(0x1)
		bool Apply_Idle_Break_Preview; // 0x2BE9(0x1)
		unsigned char UnknownData13_6[0x6]; // 0x2BEA(0x6) UNKNOWN PROPERTY
		double RandomTimeLeft; // 0x2BF0(0x8)
		double RandomStartTime; // 0x2BF8(0x8)
		bool Reset_Idle_Break_Timer; // 0x2C00(0x1)
		unsigned char UnknownData14_6[0x7]; // 0x2C01(0x7) UNKNOWN PROPERTY
		double IdleBreakTimer_MinTime; // 0x2C08(0x8)
		double Current_Idle; // 0x2C10(0x8)
		double IdleBreakTimer_MaxTime; // 0x2C18(0x8)
		bool Is_Idle_Mirrored; // 0x2C20(0x1)
		unsigned char UnknownData15_6[0x3]; // 0x2C21(0x3) UNKNOWN PROPERTY
		FRandomStream Random_Stream; // 0x2C24(0x8)
		unsigned char UnknownData16_6[0x4]; // 0x2C2C(0x4) UNKNOWN PROPERTY
		UAnimSequence CurrentMinifigFaceAnim; // 0x2C30(0x8)
		double Use_Procedural_Face_Anim; // 0x2C38(0x8)
		UAnimMontage Preview_Montage; // 0x2C40(0x8)
		bool Play_Preview_Montage; // 0x2C48(0x1)
		unsigned char UnknownData17_6[0x7]; // 0x2C49(0x7) UNKNOWN PROPERTY
		double RandomPlayRate; // 0x2C50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FigureCosmetics/Animation/ABP_FigureCosmetics_Player_Frontend.ABP_FigureCosmetics_Player_Frontend_C");
			return ret;
		}

		void Montage Face Override(FPoseLink Input Pose Base, FPoseLink Input Pose Post Montage Face, FPoseLink& Montage Face Override); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D8BF62600
		void Procedural Face Override(FPoseLink Input Pose, FPoseLink& Procedural Face Override); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D8BF67100
		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D8C020800
		void On Become Relevant(FAnimUpdateContext& Context, FAnimNodeReference& Node); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D8BF6A400
		void Reset IdleBreakTimer(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8BF67600
		void Reset IdleBreak(FAnimUpdateContext& Context, FAnimNodeReference& Node); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D8BF67200
		void IdleBreakTimer(FAnimUpdateContext& Context, FAnimNodeReference& Node); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D8BF66900
		bool Apply Idle Break Previewable(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D8BF66400
		void Setup Gliding(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8BF67B00
		void CalculateMontagePlayTiming(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8BF64C00
		void HidePropsForBlend(UAnimMontage NewMontage); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8BF62200
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FigureCosmetics_Player_Frontend_AnimGraphNode_BlendListByBool_6DB852D9456B4D008FE197A3CFD3EE24(); // Flags: BlueprintEvent 0x15D8BF66300
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FigureCosmetics_Player_Frontend_AnimGraphNode_LayeredBoneBlend_7D7FB1EC4E6C80E7E4B467A5929A7693(); // Flags: BlueprintEvent 0x15D8BF66800
		void AnimNotify_playFacialAnim(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8BF66700
		void UserFocus(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8BF67A00
		void AnimNotify_LeftB(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8BF68800
		void BlueprintUpdateAnimation(float DeltaTimeX); // Flags: Event|Public|BlueprintEvent 0x15D8BF68B00
		void BlueprintInitializeAnimation(); // Flags: Event|Public|BlueprintEvent 0x15D8BF6A500
		void AnimNotify_LobbySkydive_Diving(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8BF68D00
		void AnimNotify_LobbySkydive_Gliding(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8BF68C00
		void OnMontageStarted_Event_HideProps(UAnimMontage Montage); // Flags: BlueprintCallable|BlueprintEvent 0x15D8BF64500
		void OnMontageBlendingOut_Event_HideProps(UAnimMontage Montage, bool bInterrupted); // Flags: BlueprintCallable|BlueprintEvent 0x15D8BF67C00
		void OnFocusedItemChanged(UFortItemDefinition FocusedItem, AFortWeapon EquippedWeapon, AFortPlayerParachute CurrentParachute); // Flags: Event|Protected|BlueprintEvent 0x15D8BF67900
		void OnBodyPart(AFortPlayerPawn Pawn, UCustomCharacterPart Part, USkeletalMeshComponent MeshPart, TEnumAsByte PartType); // Flags: BlueprintCallable|BlueprintEvent 0x15D8BF67500
		void WhenBackpackPart(AFortPlayerPawn Pawn, UCustomCharacterPart Part, USkeletalMeshComponent MeshPart, TEnumAsByte PartType); // Flags: BlueprintCallable|BlueprintEvent 0x15D8BF64400
		void AnimNotify_Melee_Swing_L(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8BF69400
		void AnimNotify_Melee_Swing_R(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8BF69600
		void AnimNotify_Melee_Swing_L_End(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8BF69E00
		void AnimNotify_Melee_Swing_R_End(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8BF64A00
		void AnimNotify_Melee_Swing_L(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8BF69500
		void AnimNotify_Melee_Swing_R(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8BF64B00
		void ExecuteUbergraph_ABP_FigureCosmetics_Player_Frontend(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D8BF67800
		void MenuScreenDispatcher__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D8BF65B00
	};

}
