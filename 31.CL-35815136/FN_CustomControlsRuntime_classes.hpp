#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CustomControlsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CustomControlsRuntime.CustomControlInputBindings_Base
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UCustomControlInputBindings_Base : public UObject	
	{
	public:
		TWeakObjectPtr<UFortControllerComponent_CustomControls*> OwnerCustomControlsComponent; // 0x28(0x8)
		TWeakObjectPtr<AFortPlayerController*> OwnerController; // 0x30(0x8)
		TWeakObjectPtr<AFortPlayerPawn*> OwnerPawn; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.CustomControlInputBindings_Base");
			return ret;
		}
	};


	// Class CustomControlsRuntime.CustomControlInputBindings_EnhancedInput
	// Inherited from UCustomControlInputBindings_Base -> UObject
	// Size: 0x30 (0x70 - 0x40)
	class UCustomControlInputBindings_EnhancedInput : public UCustomControlInputBindings_Base	
	{
	public:
		TWeakObjectPtr<UFortEnhancedInputComponent*> OwnerInputComponent; // 0x40(0x8)
		float Priority; // 0x48(0x4)
		unsigned char UnknownData00_6[0x14]; // 0x4C(0x14) UNKNOWN PROPERTY
		UFortInputMappingContext* InputMapping; // 0x60(0x8)
		FModifyContextOptions Options; // 0x68(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.CustomControlInputBindings_EnhancedInput");
			return ret;
		}
	};


	// Class CustomControlsRuntime.CustomControlInputBindings_InputComponent
	// Inherited from UCustomControlInputBindings_Base -> UObject
	// Size: 0x8 (0x48 - 0x40)
	class UCustomControlInputBindings_InputComponent : public UCustomControlInputBindings_Base	
	{
	public:
		UInputComponent* InputComponent; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.CustomControlInputBindings_InputComponent");
			return ret;
		}
	};


	// Class CustomControlsRuntime.CustomControlInputBindings_SideScroller
	// Inherited from UCustomControlInputBindings_InputComponent -> UCustomControlInputBindings_Base -> UObject
	// Size: 0x48 (0x90 - 0x48)
	class UCustomControlInputBindings_SideScroller : public UCustomControlInputBindings_InputComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
		float AnalogInputDeadZone; // 0x50(0x4)
		unsigned char UnknownData01_7[0x3C]; // 0x54(0x3C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.CustomControlInputBindings_SideScroller");
			return ret;
		}
	};


	// Class CustomControlsRuntime.CustomControlInputBindings_SideScrollerManual
	// Inherited from UCustomControlInputBindings_SideScroller -> UCustomControlInputBindings_InputComponent -> UCustomControlInputBindings_Base -> UObject
	// Size: 0x50 (0xE0 - 0x90)
	class UCustomControlInputBindings_SideScrollerManual : public UCustomControlInputBindings_SideScroller	
	{
	public:
		float AimOrbitalDistance; // 0x90(0x4)
		float TouchDirectionClamping; // 0x94(0x4)
		unsigned char UnknownData00_7[0x48]; // 0x98(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.CustomControlInputBindings_SideScrollerManual");
			return ret;
		}
	};


	// Class CustomControlsRuntime.CustomControlInputBindings_SideScrollerMovement
	// Inherited from UCustomControlInputBindings_SideScroller -> UCustomControlInputBindings_InputComponent -> UCustomControlInputBindings_Base -> UObject
	// Size: 0x28 (0xB8 - 0x90)
	class UCustomControlInputBindings_SideScrollerMovement : public UCustomControlInputBindings_SideScroller	
	{
	public:
		float AimOrbitalDistance; // 0x90(0x4)
		unsigned char UnknownData00_7[0x24]; // 0x94(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.CustomControlInputBindings_SideScrollerMovement");
			return ret;
		}
	};


	// Class CustomControlsRuntime.CustomControlInputBindings_Skydiving
	// Inherited from UCustomControlInputBindings_EnhancedInput -> UCustomControlInputBindings_Base -> UObject
	// Size: 0x80 (0xF0 - 0x70)
	class UCustomControlInputBindings_Skydiving : public UCustomControlInputBindings_EnhancedInput	
	{
	public:
		UInputAction* SkydivingDownInputAction; // 0x70(0x8)
		UInputAction* SkydivingUpInputAction; // 0x78(0x8)
		FName MappingNameSkydivingDown; // 0x80(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		FText DisplayNameSkydivingDown; // 0x88(0x10)
		FName MappingNameSkydivingUp; // 0x98(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
		FText DisplayNameSkydivingUp; // 0xA0(0x10)
		float RotateStickThreshold; // 0xB0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer InSkydiveVolumeTags; // 0xB8(0x20)
		unsigned char UnknownData03_7[0x18]; // 0xD8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.CustomControlInputBindings_Skydiving");
			return ret;
		}
	};


	// Class CustomControlsRuntime.CustomControlInputBindings_TwinStick
	// Inherited from UCustomControlInputBindings_EnhancedInput -> UCustomControlInputBindings_Base -> UObject
	// Size: 0x60 (0xD0 - 0x70)
	class UCustomControlInputBindings_TwinStick : public UCustomControlInputBindings_EnhancedInput	
	{
	public:
		float InitialDialAimTargetOffsetScaleFactor; // 0x70(0x4)
		float TargetingBreakOffsetGamepad; // 0x74(0x4)
		float TargetingBreakOffsetMouse; // 0x78(0x4)
		float DefaultAutoFireCooldown; // 0x7C(0x4)
		UInputAction* GamepadLookAtInputAction; // 0x80(0x8)
		UInputAction* GamepadAimAtInputAction; // 0x88(0x8)
		UInputAction* MouseLookAtInputAction; // 0x90(0x8)
		unsigned char UnknownData00_7[0x38]; // 0x98(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.CustomControlInputBindings_TwinStick");
			return ret;
		}

		void OnWeaponUnEquippedDelegate(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7513016F0(relative to base address)
	};


	// Class CustomControlsRuntime.CustomControlInputBindings_TwinStickDial
	// Inherited from UCustomControlInputBindings_TwinStick -> UCustomControlInputBindings_EnhancedInput -> UCustomControlInputBindings_Base -> UObject
	// Size: 0x20 (0xF0 - 0xD0)
	class UCustomControlInputBindings_TwinStickDial : public UCustomControlInputBindings_TwinStick	
	{
	public:
		UInputAction* MouseAimAtInputAction; // 0xD0(0x8)
		unsigned char UnknownData00_7[0x18]; // 0xD8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.CustomControlInputBindings_TwinStickDial");
			return ret;
		}
	};


	// Class CustomControlsRuntime.CustomControlOptions_Base
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UCustomControlOptions_Base : public UObject	
	{
	public:
		UClass* MovementModeLogic; // 0x28(0x8)
		float RangedAttackStateDuration; // 0x30(0x4)
		float MeleeAttackStateDuration; // 0x34(0x4)
		TArray<UClass*> InputBindingsClasses; // 0x38(0x10)
		FFortWeaponReticleData FortWeaponReticleData; // 0x48(0x14)
		FInteractionPointOptions InteractionPointOptions; // 0x5C(0x10)
		unsigned char UnknownData00_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		FInteractSelectionData_TargetingPreset InteractionTargetingPreset; // 0x70(0x8)
		float BuildingPlacementDistanceOffset; // 0x78(0x4)
		unsigned char UnknownData01_7[0x24]; // 0x7C(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.CustomControlOptions_Base");
			return ret;
		}

		bool UsesCursor(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74C68EFBC(relative to base address)
		UFortControllerComponent_CustomControls GetOwningComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751301558(relative to base address)
		void BP_OnDeactivate(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivate(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddGameplayEffectWithMagnitude(UClass* GameplayEffectClass, FGameplayTag AttributeTag, float AttributeMagnitude); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751300E94(relative to base address)
		void AddGameplayEffect(UClass* GameplayEffectClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751300CF8(relative to base address)
	};


	// Class CustomControlsRuntime.CustomControlOptions_Targeting
	// Inherited from UCustomControlOptions_Base -> UObject
	// Size: 0x128 (0x1C8 - 0xA0)
	class UCustomControlOptions_Targeting : public UCustomControlOptions_Base	
	{
	public:
		float AngleToClampFireHorizontal; // 0xA0(0x4)
		float AngleToClampFireVertical; // 0xA4(0x4)
		UTargetingPreset* RangedTargetingPresetTemplate; // 0xA8(0x8)
		UTargetingPreset* RetentionTargetingPresetTemplate; // 0xB0(0x8)
		UTargetingPreset* RangedAimingTargetingPresetTemplate; // 0xB8(0x8)
		UTargetingPreset* MeleeTargetingPresetTemplate; // 0xC0(0x8)
		UTargetingPreset* RangedTargetingPreset; // 0xC8(0x8)
		UTargetingPreset* RetentionTargetingPreset; // 0xD0(0x8)
		UTargetingPreset* RangedAimTargetingPreset; // 0xD8(0x8)
		UTargetingPreset* MeleeTargetingPreset; // 0xE0(0x8)
		bool bTargetingEnabled; // 0xE8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY
		FCustomControlTargetingData RangedTargetingData; // 0xF0(0x48)
		FCustomControlTargetingData MeleeTargetingData; // 0x138(0x48)
		FCustomControlTargetingData AimingTargetingData; // 0x180(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.CustomControlOptions_Targeting");
			return ret;
		}

		void SetTargetingData(bool InTargetingEnabled, FCustomControlTargetingData InRangedTargetingData, FCustomControlTargetingData InMeleeTargetingData, FCustomControlTargetingData InAimingTargetingData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751301B84(relative to base address)
		void BP_InitSortingTask(UTargetingSort_CC_Base* SortingTask, ETargetingPresetType PresetType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_InitSelectionTask(UTargetingSelection_CC_Base* SelectionTask, ETargetingPresetType PresetType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_InitFilteringTask(UTargetingFilter_CC_Base* FilteringTask, ETargetingPresetType PresetType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CustomControlsRuntime.CustomControlOptions_SideScroller
	// Inherited from UCustomControlOptions_Targeting -> UCustomControlOptions_Base -> UObject
	// Size: 0x50 (0x218 - 0x1C8)
	class UCustomControlOptions_SideScroller : public UCustomControlOptions_Targeting	
	{
	public:
		FFortMovementMode_CCSideScrollerCreationData MovementModeCreationData; // 0x1C8(0x48)
		FInputOptions_SideScroller InputOptions; // 0x210(0x6)
		unsigned char UnknownData00_7[0x2]; // 0x216(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.CustomControlOptions_SideScroller");
			return ret;
		}
	};


	// Class CustomControlsRuntime.CustomControlOptions_ThirdPerson
	// Inherited from UCustomControlOptions_Targeting -> UCustomControlOptions_Base -> UObject
	// Size: 0x2A8 (0x470 - 0x1C8)
	class UCustomControlOptions_ThirdPerson : public UCustomControlOptions_Targeting	
	{
	public:
		FFortMovementMode_CCThirdPersonCreationData MovementModeCreationData; // 0x1C8(0x38)
		FInputOptions_ThirdPerson InputOptions; // 0x200(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x201(0x3) UNKNOWN PROPERTY
		FFortAnimInput_AdjustedAim AdjustedAim; // 0x204(0x268)
		unsigned char UnknownData01_7[0x4]; // 0x46C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson");
			return ret;
		}
	};


	// Class CustomControlsRuntime.TargetingDataHelperLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTargetingDataHelperLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.TargetingDataHelperLibrary");
			return ret;
		}

		TArray GetTargetableObjectTypes(FCustomControlTargetingData TargetingData); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75130157C(relative to base address)
	};


	// Class CustomControlsRuntime.FortAIControllerComponent_CustomControls
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UFortAIControllerComponent_CustomControls : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0xA8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.FortAIControllerComponent_CustomControls");
			return ret;
		}
	};


	// Class CustomControlsRuntime.FortControllerComponent_CustomControls
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x190 (0x238 - 0xA8)
	class UFortControllerComponent_CustomControls : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0xA8(0x30) UNKNOWN PROPERTY
		FCustomControlsState CurrentState; // 0xD8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		UCustomControlOptions_Base* ActiveOptions; // 0xE0(0x8)
		UCustomControlOptions_Base* HighestPriorityOptions; // 0xE8(0x8)
		TArray<UCustomControlOptions_Base*> OwnedOptions; // 0xF0(0x10)
		unsigned char UnknownData02_6[0x58]; // 0x100(0x58) UNKNOWN PROPERTY
		FGameplayTagQuery BlockTagsQuery; // 0x158(0x48)
		unsigned char UnknownData03_6[0x8]; // 0x1A0(0x8) UNKNOWN PROPERTY
		TArray<UCustomControlInputBindings_Base*> ActiveInputBindings; // 0x1A8(0x10)
		unsigned char UnknownData04_6[0x78]; // 0x1B8(0x78) UNKNOWN PROPERTY
		TWeakObjectPtr<UInteractSelection_Base*> InteractSelectionPtr; // 0x230(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.FortControllerComponent_CustomControls");
			return ret;
		}

		void WeaponGetAimRotOverride(AFortWeapon* Weapon, EFortAbilityTargetingSource TargetingSource, FRotator& OutOverrideAimRot, bool& bOutExecutionResult); // Flags: Final|Native|Private|HasOutParms|HasDefaults, Memory Exec: 0x7FF751301F30(relative to base address)
		bool SetOptionsPriority(UObject* ContextObject, float Priority, bool bRefreshRelativePriority); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751301A70(relative to base address)
		bool SetOptionsEnabled(UObject* ContextObject, bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7513019AC(relative to base address)
		void ServerSetUseDesiredRotationOverride(bool bNewUseDesiredRotationOverride); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74E8019A4(relative to base address)
		void ServerSetFocusTarget(AActor* NewFocusTarget); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74E313DEC(relative to base address)
		void ServerSetDesiredAimTargetOffset(float NewDesiredAimTargetOffset); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF7513018A8(relative to base address)
		void ServerSetAimLocation(FVector AimLocation); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults, Memory Exec: 0x7FF751301798(relative to base address)
		void ServerResetAimTargetOffset(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74E4851A4(relative to base address)
		void ServerResetAimLocation(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74D8BB404(relative to base address)
		void RemoveOptions(UObject* ContextObject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751301718(relative to base address)
		void OnRep_HighestPriorityOptions(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7513016DC(relative to base address)
		UCustomControlOptions_Base GetOptions(UObject* ContextObject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7513014BC(relative to base address)
		UFortMovementMode_BaseExtRuntimeData GetMovementModeRuntimeData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3C1438(relative to base address)
		UCustomControlOptions_Base GetActiveOptions(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DE155EC(relative to base address)
		UCustomControlOptions_Base CreateOptions(UClass* OptionsClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7513013C4(relative to base address)
		void ClientSetOptionsQueueBlocked(bool bIsBlocked); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF74E486DE4(relative to base address)
		void ClientRegisterTagsQueries(); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF74E3138A4(relative to base address)
		bool AddOptions(UObject* ContextObject, UCustomControlOptions_Base* Options, float Priority, bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7513011AC(relative to base address)
	};


	// Class CustomControlsRuntime.FortMovementMode_BaseCCRuntimeData
	// Inherited from UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UFortMovementMode_BaseCCRuntimeData : public UFortMovementMode_BaseExtRuntimeData	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.FortMovementMode_BaseCCRuntimeData");
			return ret;
		}
	};


	// Class CustomControlsRuntime.FortMovementMode_BaseCCLogic
	// Inherited from UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x18 (0x138 - 0x120)
	class UFortMovementMode_BaseCCLogic : public UFortMovementMode_BaseExtLogic	
	{
	public:
		TWeakObjectPtr<AController*> OwnerController; // 0x120(0x8)
		TWeakObjectPtr<AFortPlayerController*> FortPlayerController; // 0x128(0x8)
		TWeakObjectPtr<AFortAIController*> FortAIController; // 0x130(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.FortMovementMode_BaseCCLogic");
			return ret;
		}
	};


	// Class CustomControlsRuntime.FortMovementMode_CCLockOnRuntimeData
	// Inherited from UFortMovementMode_BaseCCRuntimeData -> UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x8 (0x60 - 0x58)
	class UFortMovementMode_CCLockOnRuntimeData : public UFortMovementMode_BaseCCRuntimeData	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x58(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.FortMovementMode_CCLockOnRuntimeData");
			return ret;
		}
	};


	// Class CustomControlsRuntime.FortMovementMode_CCLockOnLogic
	// Inherited from UFortMovementMode_BaseCCLogic -> UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UFortMovementMode_CCLockOnLogic : public UFortMovementMode_BaseCCLogic	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.FortMovementMode_CCLockOnLogic");
			return ret;
		}
	};


	// Class CustomControlsRuntime.FortMovementMode_CCSideScrollerRuntimeData
	// Inherited from UFortMovementMode_CCLockOnRuntimeData -> UFortMovementMode_BaseCCRuntimeData -> UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x30 (0x90 - 0x60)
	class UFortMovementMode_CCSideScrollerRuntimeData : public UFortMovementMode_CCLockOnRuntimeData	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x60(0x8) UNKNOWN PROPERTY
		float DesiredRotationYaw; // 0x68(0x4)
		unsigned char UnknownData01_7[0x24]; // 0x6C(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.FortMovementMode_CCSideScrollerRuntimeData");
			return ret;
		}
	};


	// Class CustomControlsRuntime.FortMovementMode_CCSideScrollerLogic
	// Inherited from UFortMovementMode_CCLockOnLogic -> UFortMovementMode_BaseCCLogic -> UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0xD0 (0x208 - 0x138)
	class UFortMovementMode_CCSideScrollerLogic : public UFortMovementMode_CCLockOnLogic	
	{
	public:
		unsigned char UnknownData00_1[0xD0]; // 0x138(0xD0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.FortMovementMode_CCSideScrollerLogic");
			return ret;
		}

		void SetDesiredRotationYaw(float NewDesiredRotationYaw); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75130192C(relative to base address)
	};


	// Class CustomControlsRuntime.FortMovementMode_CCThirdPersonRuntimeData
	// Inherited from UFortMovementMode_CCLockOnRuntimeData -> UFortMovementMode_BaseCCRuntimeData -> UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x18 (0x78 - 0x60)
	class UFortMovementMode_CCThirdPersonRuntimeData : public UFortMovementMode_CCLockOnRuntimeData	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x60(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonRuntimeData");
			return ret;
		}
	};


	// Class CustomControlsRuntime.FortMovementMode_CCThirdPersonLogic
	// Inherited from UFortMovementMode_CCLockOnLogic -> UFortMovementMode_BaseCCLogic -> UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UFortMovementMode_CCThirdPersonLogic : public UFortMovementMode_CCLockOnLogic	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonLogic");
			return ret;
		}
	};


	// Class CustomControlsRuntime.FortMovementMode_CCThirdPersonFixedRuntimeData
	// Inherited from UFortMovementMode_CCThirdPersonRuntimeData -> UFortMovementMode_CCLockOnRuntimeData -> UFortMovementMode_BaseCCRuntimeData -> UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x18 (0x90 - 0x78)
	class UFortMovementMode_CCThirdPersonFixedRuntimeData : public UFortMovementMode_CCThirdPersonRuntimeData	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x78(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonFixedRuntimeData");
			return ret;
		}
	};


	// Class CustomControlsRuntime.FortMovementMode_CCThirdPersonFixedLogic
	// Inherited from UFortMovementMode_CCThirdPersonLogic -> UFortMovementMode_CCLockOnLogic -> UFortMovementMode_BaseCCLogic -> UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UFortMovementMode_CCThirdPersonFixedLogic : public UFortMovementMode_CCThirdPersonLogic	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonFixedLogic");
			return ret;
		}
	};


	// Class CustomControlsRuntime.FortMovementMode_CCThirdPersonTwinStickRuntimeData
	// Inherited from UFortMovementMode_CCThirdPersonRuntimeData -> UFortMovementMode_CCLockOnRuntimeData -> UFortMovementMode_BaseCCRuntimeData -> UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x20 (0x98 - 0x78)
	class UFortMovementMode_CCThirdPersonTwinStickRuntimeData : public UFortMovementMode_CCThirdPersonRuntimeData	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x78(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonTwinStickRuntimeData");
			return ret;
		}
	};


	// Class CustomControlsRuntime.FortMovementMode_CCThirdPersonTwinStickLogic
	// Inherited from UFortMovementMode_CCThirdPersonLogic -> UFortMovementMode_CCLockOnLogic -> UFortMovementMode_BaseCCLogic -> UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UFortMovementMode_CCThirdPersonTwinStickLogic : public UFortMovementMode_CCThirdPersonLogic	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonTwinStickLogic");
			return ret;
		}
	};


	// Class CustomControlsRuntime.TargetingFilterCCFOV
	// Inherited from USimpleTargetingFilterTask -> UTargetingFilterTask_BasicFilterTemplate -> UTargetingTask -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UTargetingFilterCCFOV : public USimpleTargetingFilterTask	
	{
	public:
		float FliedOfView; // 0x28(0x4)
		bool bRequireLineOfSight; // 0x2C(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.TargetingFilterCCFOV");
			return ret;
		}
	};


	// Class CustomControlsRuntime.TargetingFilter_CC_Base
	// Inherited from USimpleTargetingFilterTask -> UTargetingFilterTask_BasicFilterTemplate -> UTargetingTask -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UTargetingFilter_CC_Base : public USimpleTargetingFilterTask	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FCustomControlTargetingData TargetingData; // 0x30(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.TargetingFilter_CC_Base");
			return ret;
		}
	};


	// Class CustomControlsRuntime.TargetingSelectionCCRange
	// Inherited from USimpleTargetingSelectionTask -> UTargetingTask -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UTargetingSelectionCCRange : public USimpleTargetingSelectionTask	
	{
	public:
		float Radius; // 0x28(0x4)
		float Height; // 0x2C(0x4)
		float ForwardOffset; // 0x30(0x4)
		float VerticalOffset; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.TargetingSelectionCCRange");
			return ret;
		}
	};


	// Class CustomControlsRuntime.TargetingSelectionCCIdleInteract
	// Inherited from UTargetingSelectionCCRange -> USimpleTargetingSelectionTask -> UTargetingTask -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UTargetingSelectionCCIdleInteract : public UTargetingSelectionCCRange	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.TargetingSelectionCCIdleInteract");
			return ret;
		}
	};


	// Class CustomControlsRuntime.TargetingSelection_CC_Base
	// Inherited from USimpleTargetingSelectionTask -> UTargetingTask -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UTargetingSelection_CC_Base : public USimpleTargetingSelectionTask	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FCustomControlTargetingData TargetingData; // 0x30(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.TargetingSelection_CC_Base");
			return ret;
		}
	};


	// Class CustomControlsRuntime.TargetingSort_CC_Base
	// Inherited from USimpleTargetingSortTask -> UTargetingSortTask_Base -> UTargetingTask -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UTargetingSort_CC_Base : public USimpleTargetingSortTask	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FCustomControlTargetingData TargetingData; // 0x38(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.TargetingSort_CC_Base");
			return ret;
		}
	};


	// Class CustomControlsRuntime.TargetingTask_CC_DataHolder
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTargetingTask_CC_DataHolder : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.TargetingTask_CC_DataHolder");
			return ret;
		}
	};


	// Class CustomControlsRuntime.CustomControlInputBindings_ThirdPersonSprint
	// Inherited from UCustomControlInputBindings_InputComponent -> UCustomControlInputBindings_Base -> UObject
	// Size: 0x38 (0x80 - 0x48)
	class UCustomControlInputBindings_ThirdPersonSprint : public UCustomControlInputBindings_InputComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
		float AnalogInputDeadZone; // 0x50(0x4)
		float RotateStickThreshold; // 0x54(0x4)
		float CameraRotationThreshold; // 0x58(0x4)
		float InputRateIfCameraRotationThreshold; // 0x5C(0x4)
		unsigned char UnknownData01_7[0x20]; // 0x60(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsRuntime.CustomControlInputBindings_ThirdPersonSprint");
			return ret;
		}
	};

}
