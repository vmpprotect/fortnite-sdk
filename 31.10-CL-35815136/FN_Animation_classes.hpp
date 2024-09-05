#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Animation
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UAnimNotifyState_HolsterWeapon_C : public UAnimNotifyState	
	{
	public:
		bool PlayEquipAnim; // 0x30(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		FName AnimNotifyStateHolster; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C");
			return ret;
		}

		bool CanApplyHolster(FName& HolsterId); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
		UClass* Shake_BP; // 0x38(0x8)
		double Shake_Scale; // 0x40(0x8)
		ECameraShakePlaySpace Shake_Space; // 0x48(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C");
			return ret;
		}

		bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		bool ShouldTriggerAnimNotify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C
	// Inherited from UFortPlayerFaceSystemStateMachineAnimInstance -> UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x1720 (0x2B60 - 0x1440)
	class UGameplay_FaceSystem_StateMachine_AnimBP_C : public UFortPlayerFaceSystemStateMachineAnimInstance	
	{
	public:
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x1440(0x14)
		unsigned char UnknownData00_6[0x4]; // 0x1454(0x4) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x1458(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x1460(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x1468(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1488(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x14B0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x14D8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1500(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1528(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1550(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1578(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x15A0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x15C8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x15F0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1618(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1640(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1668(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1690(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x16B8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x16E0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1708(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1730(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1758(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x17A0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x17C0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1808(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1828(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1870(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1890(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x18D8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x18F8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1940(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1960(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x19D0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x19F0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1A38(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1A58(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1AC8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1AE8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1B30(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1B50(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1B98(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1BB8(0xC8)
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
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1E10(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1E38(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1E60(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1E88(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1EB0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1ED8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1F00(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1F28(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1F50(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1F78(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1FA0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1FC8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1FF0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2018(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2040(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2068(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2090(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x20B8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x20E0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2108(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2130(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2178(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2198(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x21E0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2200(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2248(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2268(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x22B0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x22D0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2318(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2338(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2380(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x23A0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x23E8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2408(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2450(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2470(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x24B8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x24D8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2520(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2540(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2588(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x25A8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x25F0(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2610(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2680(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x26A0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x26E8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2708(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2750(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2770(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x27B8(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x27D8(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2848(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2868(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x28B0(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x28D0(0xC8)
		FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x2998(0xC0)
		FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x2A58(0xC0)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2B18(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UAnimNotifyState_AttachAsset_C : public UAnimNotifyState	
	{
	public:
		FAssetAttachment Attachment; // 0x30(0x30)
		UAnimSequence* Animation; // 0x60(0x8)
		bool Looping; // 0x68(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		double PlayRate; // 0x70(0x8)
		FGameplayTagContainer DoNotAttachTagContainer; // 0x78(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C");
			return ret;
		}

		bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_StopMontageGroup.AnimNotifyState_StopMontageGroup_C
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UAnimNotifyState_StopMontageGroup_C : public UAnimNotifyState	
	{
	public:
		FName GroupNameToStop; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		double BlendOutTime; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_StopMontageGroup.AnimNotifyState_StopMontageGroup_C");
			return ret;
		}

		bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C
	// Inherited from UAnimNotify -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UAnimNotify_PlayForceFeedback_C : public UAnimNotify	
	{
	public:
		UForceFeedbackEffect* ForceFeedbackTemplate; // 0x38(0x8)
		UForceFeedbackEffect* ForceFeedbackFarTemplate; // 0x40(0x8)
		bool bPlayAtWorldLocation; // 0x48(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		double InnerRadius; // 0x50(0x8)
		double OuterRadius; // 0x58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C");
			return ret;
		}

		bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		void ClothAsset Controller Function(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, UChaosClothComponent* ChaosClothComponent, FString ClothingAssetName, FClothParamsStruct Cloth Paramaters, FClothCoreSettingStruct Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, FWindGustParamsStruct WindGustsParams, FWindGustLocalSettingStruct WindGustLocalSettings, UObject* __WorldContext, FString& CurrentStateOut, FClothSettingStruct& Cloth Settings Out, FClothCoreSettingStruct& Cloth Core Settings Out, FWindGustSettingStruct& WindGustSettings Out, FWindGustLocalSettingStruct& WindGustLocalSettings Out, FVector& GustStrength - WindVelocityOut, FVector& LinearVelVector-DELETE LATER); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Vehicle Dynamics Scaler Function(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, bool Debug, UObject* __WorldContext, double& InVehicleHeadScaleAlpha, double& InVehicleHeadSimAlpha, double& InVehicleSkirtScaleAlpha, double& InVehicleSkirtSimAlpha); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Cloth Controller Function Nativization Wrapper(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, FString& ClothingAssetName, FClothControllerClothParameterMap& Cloth Paramaters, FClothCoreSettings& Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_Speed_Limit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, float DeltaTime, float GameTimeInSeconds, FClothControllerWindParameterMap& WindGustsParams, FWindGustSettings& WindGustLocalSettings, UObject* __WorldContext, FName& CharacterStateOut, FClothParameters& Cloth Settings Out, FWindGustSettings& WindGustLocalSettings Out, FVector& GustStrength - WindVelocityOut, FVector& LinearVelVector-DELETE LATER); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Cloth Controller Convert To Nativized Parameters(FClothParamsStruct ClothParametersStruct, FWindGustParamsStruct WindParametersStruct, FClothCoreSettingStruct Cloth Core Settings, FWindGustLocalSettingStruct Wind Gust Settings, FName Character State Name, UObject* __WorldContext, FClothParameters& Cloth Parameters Nativized, FWindGustParameters& Wind Parameters Nativized, FClothCoreSettings& ClothCoreSettings, FWindGustSettings& Wind Settings Nativized); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConvertToNativizedWindParameters(FWindGustSettingStruct& WindGustSettingStruct, UObject* __WorldContext, FWindGustParameters& WindGustParameters); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConvertToNativizedClothParameters(FClothSettingStruct& ClothSettingStruct, UObject* __WorldContext, FClothParameters& ClothParameters); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Joint Location Relative to Bone(FName Target Joint, FName Relative Joint, FVector Offset, UMeshComponent* SkelMeshComponent, bool Debug Draw, UObject* __WorldContext, FVector& Joint Location Vector); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Cape Spine05 Pelvis Rotation Function(USkinnedMeshComponent* SkeletalMeshComponent, UObject* __WorldContext, FRotator& Rotate Z Output); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Separated Cloth Control Function(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, FString ClothingAssetName, FClothParamsStruct Cloth Paramaters, FClothCoreSettingStruct Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, FWindGustParamsStruct WindGustsParams, FWindGustLocalSettingStruct WindGustLocalSettings, UObject* __WorldContext, FString& CurrentStateOut, FClothCoreSettingStruct& Cloth Core Settings Out, FClothSettingStruct& Cloth Settings Out, FWindGustSettingStruct& WindGustSettings Out, FWindGustLocalSettingStruct& WindGustLocalSettings Out, FVector& GustStrength - WindVelocityOut, FVector& LinearVelVector-DELETE LATER); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Separated Cloth Control Write To Instance(UCustomCharacterPartAnimInstance* Character Part Anim Instance, FString Clothing Asset Name, FClothCoreSettingStruct Cloth Core Settings, FClothSettingStruct Cloth Settings, FVector Gust Strength - Wind Velocity, FName Joint Name, UObject* __WorldContext); // Flags: Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Separated Cloth Control Calculate Parameters(UCustomCharacterPartAnimInstance* InCharacterPartAnimInstance, FClothParamsStruct Cloth Paramaters, FClothCoreSettingStruct Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, FWindGustParamsStruct InWindGustParams, FWindGustLocalSettingStruct InWindGustLocalSettings, UObject* __WorldContext, FString& OutCurrentState, FClothCoreSettingStruct& OutClothCoreSettings, FClothSettingStruct& OutClothSettings, FWindGustSettingStruct& OutWindGustSettings, FWindGustLocalSettingStruct& OutWindGustLocalSettings, FVector& OutGustStrength, FVector& LinearVelVector-DELETE LATER); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Separated Cloth Control Wind Gust Function(double DeltaTime, double GameTimeInSeconds, FName JointName, FWindGustSettingStruct WindGustSettings, FWindGustLocalSettingStruct WindGustLocalSettings, UObject* __WorldContext, FVector& GustStrengthWindVelocity Out, FWindGustLocalSettingStruct& WindGustLocalSettingsOut); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set WPO Regional Function(UMaterialInstanceDynamic* Material, UMaterialInstanceDynamic* Overlay Material, USkeletalMeshComponent* Skeletal Mesh, FName Velocity Transform, double Velocity Interp Speed, FName Collision Transform, TEnumAsByte<EAxis> Collision Transform Axis, bool Invert Collision Transform Axis, double Delta Time X, FVector& Previous Velocity Transform Location, FVector& Previous Velocity Transform Velocity, int32_t Region, UObject* __WorldContext); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get WPO Regional Param Names Function(int32_t& Region, UObject* __WorldContext, FName& Velocity, FName& Bone Position, FName& Bone Vector); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set WPO Globals Function(UMaterialInstanceDynamic* Material, UMaterialInstanceDynamic* Overlay Material, USkeletalMeshComponent* Skeletal Mesh, FName Local Noise Reference Transform, double Local Noise Offset Multiplier, FVector& Local Noise Transform  Location, FVector& Local Noise Offset, FName Local Turbulence Vector Transform, TEnumAsByte<EAxis> Local Turbulence Vector Transform Axis, UObject* __WorldContext); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get  Motion Vector For Transform Function(USceneComponent* Skeletal Mesh, FName Transform Name, FVector& Previous Transform Location, UObject* __WorldContext, FVector& Transform Motion Vector, FVector& Transform Location, FTransform& Transform); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Debug Cloth Teleport Threshold Function(double MinDistance, double MinRotation, USceneComponent* SkelMeshComponent, bool PrintToScreen, FName BoneName, FVector& InVector, FRotator PawnDeltaRotation, double PrintToScreenDuration, UObject* __WorldContext, double& Distance, double& Rotation); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Cloth Controller Helper Scale For Player Movement(FVector LinearVelScale, double PlayerFwdVector, double PlayerFwdVectorJump, double ClothUpX, double ClothUpZ, UObject* __WorldContext, FVector& LinearVelVectorOut); // Flags: Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Scale Joint Rotation Function(FRotator Scale, FName TargetBone, FName ReferenceBone, USkinnedMeshComponent* SkelMeshComponent, UObject* __WorldContext, FRotator& FinalRotation, FRotator& OriginalRotation); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Adjust Emote Vehicle Wheel Rotation(AActor* Owning Actor, double CurrentWheelRotation, double DeltaTime, double CurrentActorRotation, UObject* __WorldContext, double& NewActorRotation, double& NewWheelRotation); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Gravity Override Setter Function(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, UMeshComponent* SkelMeshComponent, FGravityOverrideSettingStruct GravityOverride Settings, double GameTimeInSeconds, UObject* __WorldContext, FGravityOverrideSettingStruct& GravityOverride Settings Out, FVector& GravityOverride Out); // Flags: Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Gravity Override State Function(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double GameTimeInSeconds, FGravityOverrideParamsStruct& GravityOverrideParams, FRBANParamsStruct& RBAN Params, bool DebugDraw, FName DebugJointName, UObject* __WorldContext, FVector& GravityOverride, FString& CurrentStateOut, FGravityOverrideSettingStruct& GravityOverrideSettingsOut, FRBANSettingStruct& RBAN SettingsOut); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FN_PSDPoseReaderFNC(FString startJnt, FString endJnt, FString poseJnt, double Angle, bool Debug, USkeletalMeshComponent* SkeletalMeshComponent, UObject* __WorldContext, double& pose_output); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Wind Gust Control Function(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double DeltaTime, double GameTimeInSeconds, FName JointName, FWindGustSettingStruct WindGustSettings, FWindGustLocalSettingStruct WindGustLocalSettings, UObject* __WorldContext, FVector& GustStrengthWindVelocity Out, FWindGustLocalSettingStruct& WindGustLocalSettingsOut); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void WindGustGeneratorFunction(double DeltaTime, FWindGustSettingStruct GustSettings, FWindGustLocalSettingStruct ClothGustLocalSettings, UObject* __WorldContext, double& GustStrength - WindVelocity, FWindGustLocalSettingStruct& ClothGustLocalSettingsOut); // Flags: Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Play Transformation Montage(AFortPlayerPawn* FortPlayerPawn, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Clear Transformation Montage(AFortPlayerPawn* FortPlayerPawn, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Transformation Montage(AFortPlayerPawn* FortPlayerPawn, UAnimMontage* Montage, double StartTime, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Cloth Controller Setter Function(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, FClothSettingStruct Cloth Settings, UObject* __WorldContext, FClothSettingStruct& Cloth Settings Out); // Flags: Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Cloth Controller Function(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, FString ClothingAssetName, FClothParamsStruct Cloth Paramaters, FClothCoreSettingStruct Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, FWindGustParamsStruct WindGustsParams, FWindGustLocalSettingStruct WindGustLocalSettings, UObject* __WorldContext, FString& CurrentStateOut, FClothSettingStruct& Cloth Settings Out, FClothCoreSettingStruct& Cloth Core Settings Out, FWindGustSettingStruct& WindGustSettings Out, FWindGustLocalSettingStruct& WindGustLocalSettings Out, FVector& GustStrength - WindVelocityOut, FVector& LinearVelVector-DELETE LATER); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RandomRotatorFunction(double GameTimeInSeconds, double PerlinScale, FRotator Frequency, FRotator Amplitude, FRotator Offset, double TimeOffset, UObject* __WorldContext, FRotator& RandomRotator); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Player Movement Function(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double X Dot Product, double Y Dot Product, double Z Dot Product, bool DrawDebug, double Debug Scalar, UObject* __WorldContext, double& X Movement, double& Y Movement, double& Z Movement); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Random Vector Function(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, UMeshComponent* SkelMeshComponent, FName JointName, double GameTimeInSeconds, double TimeOffset, double PerlinScale, FVector Frequency, FVector Amplitude, FVector Offset, UObject* __WorldContext, FVector& VectorOut); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DrawVectorFromJointFunction(USceneComponent* SkelMeshComponent, FName JointName, FVector LineEnd, FVector JointOffset, FLinearColor LineColor, double Thickness, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DrawJointDebugFunction(USceneComponent* SkelMeshComponent, FVector JointOffset, TArray<FName>& JointName, double Scale, double duration, double Thickness, bool DebugDraw, UObject* __WorldContext); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ComplexSimSpaceFunction(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double InterpSpeedMax, double PawnSpeedMax, double RInterpErrorTolerance, double DeltaTime, bool DebugDraw, FRotator sim_space_rotation_in, bool inComponentSpaceIn, bool inComponentSpaceLastFrameIn, bool lockedOnSimSpaceIn, double InterpSpeedIn, UObject* __WorldContext, FRotator& sim_space_rotation, bool& inComponentSpaceOut, bool& inComponentSpaceLastFrameOut, bool& lockedOnSimSpaceOut, double& InterpSpeedOut); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Gravity Override Function(UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double GameTimeInSeconds, FVector WindFreq, FVector WindAmp, FVector WindOffset, FVector GoingUpGravityOverride, FVector ComingDownGravityOverride, FVector DivingDownGravityOverride, FVector ParachuteOpenedGravityOverride, FVector GroundWindFreq, FVector GroundWindAmp, FVector GroundWindOffset, FVector OnGroundGravityOverride, FVector SwimmingGravityOverride, FName JointName, UObject* __WorldContext, FVector& GravityOverride); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Valet/Animation/Player/ValetVehiclePassengerLayerAnimBP.ValetVehiclePassengerLayerAnimBP_C
	// Inherited from UFortValetPassengerAnimInstance -> UFortVehicleOccupantAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x3830 (0x4140 - 0x910)
	class UValetVehiclePassengerLayerAnimBP_C : public UFortValetPassengerAnimInstance	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x910(0x8)
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x918(0x54)
		unsigned char UnknownData00_6[0x4]; // 0x96C(0x4) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x970(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x978(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x980(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x9A0(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0xA50(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xA70(0xB0)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xB20(0x78)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xB98(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xBC0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xBE8(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xC10(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xC58(0x48)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0xCA0(0xB0)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xD50(0x48)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xD98(0x20)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xDB8(0x20)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xDD8(0x128)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0xF00(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xF20(0x28)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xF48(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xF68(0x20)
		FAnimNode_ResetRoot AnimGraphNode_ResetRoot; // 0xF88(0xD8)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x1060(0x118)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x1178(0x118)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1290(0x28)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x12B8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x12D8(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1320(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x13E8(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1430(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x14F8(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1540(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1588(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x15D0(0x48)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x1618(0xB0)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x16C8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1710(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1730(0xC8)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x17F8(0x20)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1818(0x20)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1838(0x128)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1960(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1980(0x28)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x19A8(0xB0)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1A58(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1A78(0xC8)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1B40(0x48)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1B88(0x28)
		FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1BB0(0xF0)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1CA0(0x48)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x1CE8(0xB0)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1D98(0x78)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1E10(0x28)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1E38(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1E80(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1EC8(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1F90(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1FD8(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x20A0(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x20E8(0x48)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x2130(0xB0)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x21E0(0x28)
		FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x2208(0xF0)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x22F8(0x28)
		FAnimNode_Root AnimGraphNode_Root; // 0x2320(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2340(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x23F0(0xB0)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x24A0(0x48)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x24E8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2510(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2538(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2560(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2588(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x25B0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x25D8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2600(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2628(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2650(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2678(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x26A0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x26C8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x26F0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2718(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2740(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2768(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2790(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x27B8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x27E0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2808(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2830(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2858(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2880(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x28A8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x28D0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x28F8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2920(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2948(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2990(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x29D8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2A20(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2A40(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2A88(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2AD0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2B18(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2B38(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2B80(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2BC8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2C10(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2C30(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2C78(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2CC0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2D08(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2D28(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2D70(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2DB8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2E00(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2E20(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2E68(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2EB0(0x48)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x2EF8(0xB0)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x2FA8(0xB0)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x3058(0x118)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3170(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3190(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x31D8(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3220(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3268(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3288(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x32D0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3318(0x48)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x3360(0xB0)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x3410(0xB0)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x34C0(0x118)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x35D8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x35F8(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3640(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3688(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x36D0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x36F0(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3738(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3780(0x48)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x37C8(0xB0)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x3878(0xB0)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x3928(0x118)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3A40(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3A60(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3AA8(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3AF0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3B38(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3B58(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3BA0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3BE8(0x48)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x3C30(0x118)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3D48(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3D68(0xC8)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x3E30(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x3EE0(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x3F00(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x3FB0(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x4060(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x4110(0x20)
		bool bIsSportsCar; // 0x4130(0x1)
		bool bIsBasicTruck; // 0x4131(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x4132(0x6) UNKNOWN PROPERTY
		AFortPlayerPawn* Fort_Player_Pawn; // 0x4138(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/Animation/Player/ValetVehiclePassengerLayerAnimBP.ValetVehiclePassengerLayerAnimBP_C");
			return ret;
		}

		void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BlueprintInitializeAnimation(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ValetVehiclePassengerLayerAnimBP(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Valet/Animation/Player/ValetVehicle_Driver_AnimBP.ValetVehicle_Driver_AnimBP_C
	// Inherited from UFortVehicleOccupantAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x2551 (0x2DD1 - 0x880)
	class UValetVehicle_Driver_AnimBP_C : public UFortVehicleOccupantAnimInstance	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x8)
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x888(0x38)
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x8C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x8C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x8D0(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x8F0(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x9A0(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x9C0(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xA70(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0xB20(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xB40(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xBF0(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xCA0(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0xD50(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xD70(0xB0)
		FAnimNode_LegIK AnimGraphNode_LegIK; // 0xE20(0x100)
		FAnimNode_LegIK AnimGraphNode_LegIK; // 0xF20(0x100)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1020(0x20)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1040(0x128)
		FAnimNode_LegIK AnimGraphNode_LegIK; // 0x1168(0x100)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1268(0x20)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1288(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x13B0(0x128)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x14D8(0x48)
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
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1750(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1778(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x17A0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x17C8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x17F0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1818(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1840(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1868(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1890(0x48)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x18D8(0x118)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x19F0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1A10(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1A58(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1A78(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1AC0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1AE0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1B28(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1B48(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1B90(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1BB0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1BF8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1C18(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1C60(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1C80(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1CC8(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1D10(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1D58(0xC8)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1E20(0x28)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1E48(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1E68(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1EB0(0xC8)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1F78(0x28)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1FA0(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1FC0(0x28)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1FE8(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2008(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x20D0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2118(0x48)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2160(0x28)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2188(0x28)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x21B0(0xC8)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2278(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x22C0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2308(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2328(0xC8)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x23F0(0x78)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2468(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x24B0(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2578(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x25C0(0xC8)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2688(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x26B0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x26D8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2700(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2728(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2770(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2790(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x27D8(0x20)
		FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x27F8(0x10)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2808(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2828(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x28F0(0xC8)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x29B8(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2A00(0x48)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x2A48(0x78)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x2AC0(0xC8)
		FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x2B88(0x40)
		FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x2BC8(0x40)
		FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x2C08(0x40)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x2C48(0x118)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2D60(0x48)
		FAnimNode_Root AnimGraphNode_Root; // 0x2DA8(0x20)
		double StartPosition; // 0x2DC8(0x8)
		bool AimOffsetEnable; // 0x2DD0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/Animation/Player/ValetVehicle_Driver_AnimBP.ValetVehicle_Driver_AnimBP_C");
			return ret;
		}

		void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimNotify_OnEnableAimOffset(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimNotify_OnDisableAimOffset(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ValetVehicle_Driver_AnimBP(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeaponIfNotConsumable.AnimNotifyState_HolsterWeaponIfNotConsumable_C
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x1 (0x31 - 0x30)
	class UAnimNotifyState_HolsterWeaponIfNotConsumable_C : public UAnimNotifyState	
	{
	public:
		bool PlayEquipAnim; // 0x30(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeaponIfNotConsumable.AnimNotifyState_HolsterWeaponIfNotConsumable_C");
			return ret;
		}

		bool CanApplyHolster(FName& HolsterId); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrindRail/Animation/AnimNotify_GrindRailLand.AnimNotify_GrindRailLand_C
	// Inherited from UAnimNotify -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UAnimNotify_GrindRailLand_C : public UAnimNotify	
	{
	public:
		UBP_FortPawnGrindingProvider_C* NewVar; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Animation/AnimNotify_GrindRailLand.AnimNotify_GrindRailLand_C");
			return ret;
		}

		bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C
	// Inherited from UFortGrindRailLayerAnimInstance -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x5858 (0x6008 - 0x7B0)
	class UGrindRail_Player_LayerAnimBP_C : public UFortGrindRailLayerAnimInstance	
	{
	public:
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x7B0(0x58)
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x808(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x810(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x818(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x838(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x8E8(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x998(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x9B8(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xA68(0xB0)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xB18(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xB40(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xB68(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xB90(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xBB8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xBE0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xC08(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xC30(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xC58(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xC80(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xCA8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xCD0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xCF8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xD20(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xD48(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xD70(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xD98(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xDC0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xDE8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xE10(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xE38(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xE60(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xE88(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xEB0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xED8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xF00(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xF28(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xF50(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xF78(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0xFC0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xFE0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1028(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1048(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1090(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x10B0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x10F8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1118(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1160(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1180(0x48)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x11C8(0xB0)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x1278(0xB0)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x1328(0x118)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1440(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1460(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x14A8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x14C8(0x48)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x1510(0xB0)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x15C0(0xB0)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x1670(0x118)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1788(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x17A8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x17F0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1810(0x48)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x1858(0xB0)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x1908(0xB0)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x19B8(0x118)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1AD0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1AF0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1B38(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1B58(0x48)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x1BA0(0x118)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1CB8(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1CD8(0xC8)
		FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x1DA0(0xB0)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1E50(0x48)
		FAnimNode_Root AnimGraphNode_Root; // 0x1E98(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x1EB8(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x1F68(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x1F88(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x2038(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2058(0xB0)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x2108(0x78)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2180(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x21A8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x21D0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x21F8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2220(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2248(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2270(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2298(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x22C0(0x28)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x22E8(0x28)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x2310(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x23D8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2420(0x20)
		FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x2440(0xD0)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2510(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2558(0x48)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x25A0(0x48)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x25E8(0x20)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x2608(0x10)
		FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x2618(0xF0)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x2708(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x27D0(0x70)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x2840(0x128)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2968(0x20)
		FAnimNode_ResetRoot AnimGraphNode_ResetRoot; // 0x2988(0xD8)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2A60(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2A88(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2AB0(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2AD8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2B20(0x20)
		FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x2B40(0x10)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2B50(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2B70(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x2C38(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2D00(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2D20(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2DE8(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2E08(0x28)
		FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve; // 0x2E30(0x120)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2F50(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2F70(0xC8)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x3038(0x78)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x30B0(0x70)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x3120(0x78)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3198(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x31C0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x31E8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3210(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3238(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3260(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3288(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x32B0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x32D8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3300(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3328(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3350(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3378(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x33A0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x33C8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x33F0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3418(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3440(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3468(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3490(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x34B8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x34E0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3508(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3530(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3558(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3580(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x35A8(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x35D0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3618(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3638(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3680(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x36A0(0x28)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x36C8(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3790(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x37B0(0x28)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x37D8(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x38A0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x38E8(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x3908(0x28)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x3930(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x39F8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3A40(0x20)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x3A60(0xC8)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x3B28(0x28)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3B50(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x3BC0(0xC8)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3C88(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3CB0(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x3CF8(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3DC0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3E08(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3E28(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3E70(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3E90(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3F58(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3F78(0x28)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x3FA0(0x28)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x3FC8(0xC8)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4090(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x40B8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x40E0(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4108(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4150(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4170(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x41B8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x41D8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4220(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4240(0x28)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4268(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4330(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4350(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4378(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x43A0(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x43C8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4410(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4430(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4478(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4498(0x28)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x44C0(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4588(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x45A8(0x28)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x45D0(0xC8)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4698(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x46C0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x46E8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4710(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4738(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4780(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x47A0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x47E8(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4808(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x48D0(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x48F0(0x28)
		FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x4918(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x49E0(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x4A00(0x28)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x4A28(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4AF0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4B38(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x4B58(0x28)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x4B80(0xC8)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4C48(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4C70(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4CB8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4CD8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4D20(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4D40(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4E08(0x20)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x4E28(0x28)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4E50(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4E70(0xC8)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x4F38(0x78)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4FB0(0x70)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x5020(0x78)
		FFortAnimNode_GrindRailSlopeWarping FortAnimGraphNode_GrindRailSlopeWarping; // 0x5098(0x348)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x53E0(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x5400(0x20)
		FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve; // 0x5420(0x120)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x5540(0x70)
		FAnimNode_Root AnimGraphNode_Root; // 0x55B0(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x55D0(0xB0)
		FAnimNode_LegIK AnimGraphNode_LegIK; // 0x5680(0x100)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x5780(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x57A0(0x20)
		FAnimNode_Root AnimGraphNode_Root; // 0x57C0(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x57E0(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x5890(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x5940(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x5960(0xB0)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x5A10(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x5AD8(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x5B48(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x5BB8(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x5C80(0xC8)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x5D48(0x118)
		FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x5E60(0x118)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x5F78(0x70)
		FAnimNode_Root AnimGraphNode_Root; // 0x5FE8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C");
			return ret;
		}

		void MovementMode_InAirOverride(FPoseLink InSource_Pose, FPoseLink InAirPose, FPoseLink& MovementMode_InAirOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MovementMode_LowerBodyOverride(FPoseLink InLowerBodyPose, FPoseLink InSourcePose, FPoseLink& MovementMode_LowerBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MovementMode_LocomotionAdditives(FPoseLink InLocomotionAdditivesPose, FPoseLink& MovementMode_LocomotionAdditives); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MovementMode_SourcePose(FPoseLink InSourcePoseBase, FPoseLink& MovementMode_SourcePose); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MovementMode_FullBodyOverride(FPoseLink InputPoseFullBody, FPoseLink& MovementMode_FullBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MovementMode_FinalPoseOverride(FPoseLink InFinalPose, FPoseLink& MovementMode_FinalPoseOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MovementMode_AimOffset(FPoseLink InAimOffsetsPose, FPoseLink InSourcePosePreAimOffsets, FPoseLink& MovementMode_AimOffset); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LocomotionAdditiveGroup(FPoseLink InPoseLocomotionAdditive, FPoseLink& LocomotionAdditiveGroup); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FMJamSystem/Animation/BP_FMJam_SparksAnimationSubsystem.BP_FMJam_SparksAnimationSubsystem_C
	// Inherited from USparksAnimationSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0xB8 - 0xB8)
	class UBP_FMJam_SparksAnimationSubsystem_C : public USparksAnimationSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FMJamSystem/Animation/BP_FMJam_SparksAnimationSubsystem.BP_FMJam_SparksAnimationSubsystem_C");
			return ret;
		}
	};


	// Class /Game/Animation/Game/MainPlayer/Gadgets/Mustache/Mustache_SkBP.Mustache_SkBP_C
	// Inherited from UFortWeaponAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x268 (0x720 - 0x4B8)
	class UMustache_SkBP_C : public UFortWeaponAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x4B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x4C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x4C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x4D0(0x20)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4F0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x518(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x540(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x588(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5A8(0x48)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x5F0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x638(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x658(0xC8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Gadgets/Mustache/Mustache_SkBP.Mustache_SkBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/Game/MainPlayer/Combat/Guns/Shotgun/ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C
	// Inherited from UFortItemLayerAnimInstance_ChargedWeapon -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0xD48 (0x1228 - 0x4E0)
	class UChargeWeaponLayerAnimBP_C : public UFortItemLayerAnimInstance_ChargedWeapon	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4E0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x4E8(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x4F0(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x4F8(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x518(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x5C8(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x5E8(0xB0)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x698(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x6E0(0xC8)
		FAnimNode_Root AnimGraphNode_Root; // 0x7A8(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x7C8(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x878(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x898(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x948(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x968(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0xA18(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xA38(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0xAE8(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xB08(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0xBB8(0x20)
		FAnimNode_Root AnimGraphNode_Root; // 0xBD8(0x20)
		FAnimNode_Root AnimGraphNode_Root; // 0xBF8(0x20)
		FAnimNode_Root AnimGraphNode_Root; // 0xC18(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xC38(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0xCE8(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xD08(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0xDB8(0x20)
		FAnimNode_Root AnimGraphNode_Root; // 0xDD8(0x20)
		FAnimNode_Root AnimGraphNode_Root; // 0xDF8(0x20)
		FAnimNode_Root AnimGraphNode_Root; // 0xE18(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xE38(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0xEE8(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xF08(0xB0)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xFB8(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x1068(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x1088(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x1138(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x1158(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x1208(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Combat/Guns/Shotgun/ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C");
			return ret;
		}

		void ItemFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& ItemFinalPoseOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemUpperBody(FPoseLink InPoseUpperBody, FFortAnimInput_AdjustedAim InputParam, FPoseLink& ItemUpperBody); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemIdleAdditive(FPoseLink InPoseIdleAdditive, FPoseLink& ItemIdleAdditive); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemJumpUpAdditive(FPoseLink InPoseItemJumpUpAdditive, FPoseLink& ItemJumpUpAdditive); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemJumpLoopAdditive(FPoseLink InPoseItemJumpLoopAdditive, FPoseLink& ItemJumpLoopAdditive); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemFallAdditive(FPoseLink InPoseItemFallAdditive, FPoseLink& ItemFallAdditive); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemFallLandAdditive(FPoseLink InPoseItemFallLandAdditive, FPoseLink& ItemFallLandAdditive); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemJetPackStartAdditive(FPoseLink& ItemJetPackStartAdditive); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemJetPackJumpAdditive(FPoseLink& ItemJetPackJumpAdditive); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemZipLineStartAdditive(FPoseLink& ItemZipLineStartAdditive); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemLowerBodyMovement(FPoseLink InPoseLowerBodyMovement, FPoseLink& ItemLowerBodyMovement); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemRelaxedEntry(FPoseLink InPoseRelaxedEntry, FPoseLink& ItemRelaxedEntry); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemSwimJumpStart(FPoseLink& ItemSwimJumpStart); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemSwimJumpStartLoop(FPoseLink& ItemSwimJumpStartLoop); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemSwimJumpFallLoop(FPoseLink& ItemSwimJumpFallLoop); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemSwimJumpSurfaceLoop(FPoseLink& ItemSwimJumpSurfaceLoop); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemSwimJumpSurfaceEnd(FPoseLink& ItemSwimJumpSurfaceEnd); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemSkeletalControl(FPoseLink InPose, FPoseLink& ItemSkeletalControl); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemAimOffset(FPoseLink InPose_AimOffset, double AimOffsetAlpha, double Yaw, double pitch, FPoseLink InPose_UpperLowerPreMeleeAO, FPoseLink& ItemAimOffset); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& ItemFullBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemPreIK(FPoseLink InPose_PreIK, FPoseLink& ItemPreIK); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BlueprintUpdateAnimation(float DeltaTimeX); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ChargeWeaponLayerAnimBP(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/Game/MainPlayer/Combat/Guns/LMG/LMG_Anim_BP.LMG_Anim_BP_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x148 (0x500 - 0x3B8)
	class ULMG_Anim_BP_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x3F0(0x48)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x438(0x10)
		FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x448(0xB8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Combat/Guns/LMG/LMG_Anim_BP.LMG_Anim_BP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/Game/MainPlayer/Reacts/Healing/MiniShield/MiniShieldPotion_Prop_AnimBP.MiniShieldPotion_Prop_AnimBP_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0xC0 (0x478 - 0x3B8)
	class UMiniShieldPotion_Prop_AnimBP_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x3F0(0x48)
		FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x438(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Reacts/Healing/MiniShield/MiniShieldPotion_Prop_AnimBP.MiniShieldPotion_Prop_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/Game/MainPlayer/Reacts/Healing/Bandages/Prop/WrapBandages_Prop_AnimBP.WrapBandages_Prop_AnimBP_C
	// Inherited from UFortItemAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x220 (0x6D0 - 0x4B0)
	class UWrapBandages_Prop_AnimBP_C : public UFortItemAnimInstance	
	{
	public:
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x4B0(0x2)
		unsigned char UnknownData00_6[0x6]; // 0x4B2(0x6) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x4B8(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x4C0(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x4C8(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4E8(0x48)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x530(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x578(0x48)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x5C0(0x78)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x638(0x28)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x660(0x28)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x688(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Reacts/Healing/Bandages/Prop/WrapBandages_Prop_AnimBP.WrapBandages_Prop_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/Game/MainPlayer/Reacts/Healing/Medkit/ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C
	// Inherited from UFortItemAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x220 (0x6D0 - 0x4B0)
	class UApplyMedkit_Athena_AnimBP_C : public UFortItemAnimInstance	
	{
	public:
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x4B0(0x2)
		unsigned char UnknownData00_6[0x6]; // 0x4B2(0x6) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x4B8(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x4C0(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x4C8(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x4E8(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x530(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x578(0x48)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x5C0(0x78)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x638(0x48)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x680(0x28)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x6A8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Reacts/Healing/Medkit/ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/Game/MainPlayer/Reacts/Healing/HalfShield/HalfShieldPotion_Prop_AnimBP.HalfShieldPotion_Prop_AnimBP_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0xC8 (0x480 - 0x3B8)
	class UHalfShieldPotion_Prop_AnimBP_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x3F0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x438(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Reacts/Healing/HalfShield/HalfShieldPotion_Prop_AnimBP.HalfShieldPotion_Prop_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/Game/MainPlayer/Combat/Guns/FuturisticRevolver/Pistol_Revolver_SideAction_AnimBP1.Pistol_Revolver_SideAction_AnimBP1_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x622 (0x9DA - 0x3B8)
	class UPistol_Revolver_SideAction_AnimBP1_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C8(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3D0(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D8(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x3F8(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x440(0xC8)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x508(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x530(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x558(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x580(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5A8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5D0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5F8(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x620(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x668(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x688(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x6D0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6F0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x738(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x758(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7A0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7C0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x808(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x828(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x870(0x20)
		FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x890(0x10)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x8A0(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x8C0(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x988(0x48)
		int32_t DrumPositionCount; // 0x9D0(0x4)
		bool ShouldRotateToPos1; // 0x9D4(0x1)
		bool ShouldRotateToPos2; // 0x9D5(0x1)
		bool ShouldRotateToPos3; // 0x9D6(0x1)
		bool ShouldRotateToPos4; // 0x9D7(0x1)
		bool ShouldRotateToPos5; // 0x9D8(0x1)
		bool ShouldRotateToPos6; // 0x9D9(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Combat/Guns/FuturisticRevolver/Pistol_Revolver_SideAction_AnimBP1.Pistol_Revolver_SideAction_AnimBP1_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimNotify_Revolver_RotChamber(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP1(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/Game/MainPlayer/Combat/Guns/Bullpup/SK_Assault_Bullpup_01_Skeleton_AnimBlueprint.SK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x90 (0x448 - 0x3B8)
	class USK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x3F0(0x10)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x400(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Combat/Guns/Bullpup/SK_Assault_Bullpup_01_Skeleton_AnimBlueprint.SK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/Game/MainPlayer/Combat/Guns/PDW/BP_PDW.BP_PDW_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x90 (0x448 - 0x3B8)
	class UBP_PDW_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x3F0(0x10)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x400(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Combat/Guns/PDW/BP_PDW.BP_PDW_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayReloadFX.AnimNotify_PlayReloadFX_C
	// Inherited from UAnimNotify -> UObject
	// Size: 0x1 (0x39 - 0x38)
	class UAnimNotify_PlayReloadFX_C : public UAnimNotify	
	{
	public:
		TEnumAsByte<EFortReloadFXState> ReloadStage; // 0x38(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayReloadFX.AnimNotify_PlayReloadFX_C");
			return ret;
		}

		bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_ShellsOnPumpFX.AnimNotify_ShellsOnPumpFX_C
	// Inherited from UAnimNotify -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UAnimNotify_ShellsOnPumpFX_C : public UAnimNotify	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_ShellsOnPumpFX.AnimNotify_ShellsOnPumpFX_C");
			return ret;
		}

		bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/Game/MainPlayer/Combat/Guns/Shotgun_LeverAction/Shotgun_leverAction_AnimBP.Shotgun_leverAction_AnimBP_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x90 (0x448 - 0x3B8)
	class UShotgun_leverAction_AnimBP_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x3F0(0x10)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x400(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Combat/Guns/Shotgun_LeverAction/Shotgun_leverAction_AnimBP.Shotgun_leverAction_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/Game/MainPlayer/Combat/Guns/BoltActionSniperRifle/BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0xC8 (0x480 - 0x3B8)
	class UBP_BoltActionSniperRifleNoScope_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x3F0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x438(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Combat/Guns/BoltActionSniperRifle/BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/Game/MainPlayer/Combat/Guns/StormTrackerSniper/BP_StormTrackerSniper.BP_StormTrackerSniper_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0xC8 (0x480 - 0x3B8)
	class UBP_StormTrackerSniper_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x3F0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x438(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Combat/Guns/StormTrackerSniper/BP_StormTrackerSniper.BP_StormTrackerSniper_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Animation/Game/MainPlayerFN/ItemChooserData/FishingRodChooserData.FishingRodChooserData_C
	// Inherited from UFortFloppingRabbitChooserData -> UFortItemChooserData -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFishingRodChooserData_C : public UFortFloppingRabbitChooserData	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayerFN/ItemChooserData/FishingRodChooserData.FishingRodChooserData_C");
			return ret;
		}

		void BlueprintUpdateChooserData(float DeltaTime); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_FishingRodChooserData(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
		unsigned char UnknownData00_6[0x8]; // 0x3258(0x8) UNKNOWN PROPERTY
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
		AFortPlayerPawn* FortPlayer; // 0x5D10(0x8)
		AFortPawn* WildlifePawn; // 0x5D18(0x8)
		bool State_Rule_Moving_Idle; // 0x5D20(0x1)
		bool Is_Jumping; // 0x5D21(0x1)
		bool Is_Falling; // 0x5D22(0x1)
		bool Is_Surface_Swimming; // 0x5D23(0x1)
		unsigned char UnknownData01_6[0x4]; // 0x5D24(0x4) UNKNOWN PROPERTY
		double BodyRoll; // 0x5D28(0x8)
		double BoarSpeed2D; // 0x5D30(0x8)
		bool Is_Moving_Backwards; // 0x5D38(0x1)
		bool Is_Boosting; // 0x5D39(0x1)
		bool Can_Transition_Fall_To_Moving; // 0x5D3A(0x1)
		bool Can_Transition_Fall_To_Idle; // 0x5D3B(0x1)
		bool Can_Transition_Idle_To_Moving; // 0x5D3C(0x1)
		bool Is_Turning_in_Place; // 0x5D3D(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x5D3E(0x2) UNKNOWN PROPERTY
		double Turn_in_Place_Angle_Delta; // 0x5D40(0x8)
		bool Should_Play_Stop_Backwards; // 0x5D48(0x1)
		bool Play_Land_Additive; // 0x5D49(0x1)
		bool Was_Turning_Right; // 0x5D4A(0x1)
		unsigned char UnknownData03_6[0x5]; // 0x5D4B(0x5) UNKNOWN PROPERTY
		double Backwards_Play_Rate; // 0x5D50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C");
			return ret;
		}

		void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetMainAnimBPData_Boar(UObject* AnimInstance); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_3AC2A6BB409F97D93A87FE8016464FEE(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BlueprintCollectRidableAnimBPData(UAnimInstance* RidableAnimInstance); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BoarRidingPlayerLayerAnimBP(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		void GetRiderPettingMontage(AActor* RiderActor, UAnimMontage* RiderPettingMontage); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C
	// Inherited from UFortValetPassengerAnimInstance -> UFortVehicleOccupantAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x18A9 (0x21B9 - 0x910)
	class URidingPlayerLayerAnimBP_C : public UFortValetPassengerAnimInstance	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x910(0x8)
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x918(0x1C)
		unsigned char UnknownData00_6[0x4]; // 0x934(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_6[0x7]; // 0x2171(0x7) UNKNOWN PROPERTY
		AFortPlayerPawn* FortPlayer; // 0x2178(0x8)
		double Timer; // 0x2180(0x8)
		bool ShouldTransitionToRiding; // 0x2188(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x2189(0x7) UNKNOWN PROPERTY
		double LowerBodyYaw; // 0x2190(0x8)
		bool IsRideMode; // 0x2198(0x1)
		bool IsSprinting; // 0x2199(0x1)
		bool IsStandingStill; // 0x219A(0x1)
		bool IsInCombat; // 0x219B(0x1)
		unsigned char UnknownData03_6[0x4]; // 0x219C(0x4) UNKNOWN PROPERTY
		AFortAIPawn* WildlifePawn; // 0x21A0(0x8)
		bool IsSmackie; // 0x21A8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x21A9(0x7) UNKNOWN PROPERTY
		double Velocity; // 0x21B0(0x8)
		bool IsNug; // 0x21B8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C");
			return ret;
		}

		void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BlueprintUpdateAnimation(float DeltaTimeX); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_RidingPlayerLayerAnimBP(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
		unsigned char UnknownData00_6[0x7]; // 0x58E9(0x7) UNKNOWN PROPERTY
		double BodyRoll; // 0x58F0(0x8)
		double WolfSpeed2D; // 0x58F8(0x8)
		bool Is_Boosting; // 0x5900(0x1)
		bool Play_Land_Additive; // 0x5901(0x1)
		bool Is_Moving_Backwards; // 0x5902(0x1)
		bool Should_Play_Stop_Backwards; // 0x5903(0x1)
		bool Is_Turning_in_Place; // 0x5904(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5905(0x3) UNKNOWN PROPERTY
		double Turn_in_Place_Angle_Delta; // 0x5908(0x8)
		bool Was_Turning_Right; // 0x5910(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x5911(0x7) UNKNOWN PROPERTY
		double Turn_in_Place_Rotation_Speed; // 0x5918(0x8)
		double Backwards_Play_Rate; // 0x5920(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C");
			return ret;
		}

		void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // Flags: HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetMainAnimBPData_Wolf(UObject* AnimInstance); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_0A1EFC344EF1A6E586A54FAEC4F5F766(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_4EDCD4F04E8D5963547EB2BE1F10FA2D(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D7C43EB141CFE2929E3D23914954FA93(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BlueprintCollectRidableAnimBPData(UAnimInstance* RidableAnimInstance); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateBoostPlayRate(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaceHandIKTargets(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WolfRidingPlayerLayerAnimBP(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
