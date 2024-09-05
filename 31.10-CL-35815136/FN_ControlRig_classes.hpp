#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ControlRig
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ControlRig.ControlRigShapeLibraryLink
	// Inherited from UNameSpacedUserData -> UAssetUserData -> UObject
	// Size: 0x38 (0x138 - 0x100)
	class UControlRigShapeLibraryLink : public UNameSpacedUserData	
	{
	public:
		TWeakObjectPtr<UControlRigShapeLibrary*> ShapeLibrary; // 0x100(0x20)
		TArray<FName> ShapeNames; // 0x120(0x10)
		UControlRigShapeLibrary* ShapeLibraryCached; // 0x130(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigShapeLibraryLink");
			return ret;
		}

		void SetShapeLibrary(TWeakObjectPtr<UControlRigShapeLibrary*> InShapeLibrary); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74C41C(relative to base address)
		TWeakObjectPtr GetShapeLibrary(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE37F9C(relative to base address)
	};


	// Class ControlRig.ControlRig
	// Inherited from URigVMHost -> UObject
	// Size: 0x828 (0xAA0 - 0x278)
	class UControlRig : public URigVMHost	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x278(0x10) UNKNOWN PROPERTY
		ERigExecutionType ExecutionType; // 0x288(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x289(0x3) UNKNOWN PROPERTY
		FRigHierarchySettings HierarchySettings; // 0x28C(0x4)
		TMap<FRigElementKey, FRigControlElementCustomization> ControlCustomizations; // 0x290(0x50)
		URigHierarchy* DynamicHierarchy; // 0x2E0(0x8)
		TArray<TWeakObjectPtr> ShapeLibraries; // 0x2E8(0x10)
		TMap<FString, FString> ShapeLibraryNameMap; // 0x2F8(0x50)
		unsigned char UnknownData02_6[0x10]; // 0x348(0x10) UNKNOWN PROPERTY
		FRigVMExtendedExecuteContext RigVMExtendedExecuteContext; // 0x358(0x228)
		unsigned char UnknownData03_6[0x8]; // 0x580(0x8) UNKNOWN PROPERTY
		UAnimationDataSourceRegistry* DataSourceRegistry; // 0x588(0x8)
		unsigned char UnknownData04_6[0xA8]; // 0x590(0xA8) UNKNOWN PROPERTY
		FRigInfluenceMapPerEvent Influences; // 0x638(0x60)
		unsigned char UnknownData05_6[0xB8]; // 0x698(0xB8) UNKNOWN PROPERTY
		TMap<FName, UDataAssetLink*> ExternalVariableDataAssetLinks; // 0x750(0x50)
		unsigned char UnknownData06_6[0xD0]; // 0x7A0(0xD0) UNKNOWN PROPERTY
		FMulticastSparseDelegate OnControlSelected_BP; // 0x870(0x1)
		unsigned char UnknownData07_6[0x17]; // 0x871(0x17) UNKNOWN PROPERTY
		bool bIsAdditive; // 0x888(0x1)
		unsigned char UnknownData08_6[0x18F]; // 0x889(0x18F) UNKNOWN PROPERTY
		FRigModuleSettings RigModuleSettings; // 0xA18(0x78)
		FString RigModuleNameSpace; // 0xA90(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRig");
			return ret;
		}

		bool SupportsBackwardsSolve(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D78CAB4(relative to base address)
		void SetInteractionRigClass(UClass* InInteractionRigClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3425C4(relative to base address)
		void SetInteractionRig(UControlRig* InInteractionRig); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void SelectControl(FName& InControlName, bool bSelect); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D78A330(relative to base address)
		void RequestConstruction(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78A308(relative to base address)
		void OnControlSelectedBP__DelegateSignature(UControlRig* Rig, FRigControlElement& Control, bool bSelected); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsControlSelected(FName& InControlName); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D78981C(relative to base address)
		UClass GetInteractionRigClass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7895EC(relative to base address)
		UControlRig GetInteractionRig(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C6345FC(relative to base address)
		AActor GetHostingActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D78938C(relative to base address)
		URigHierarchy GetHierarchy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D789374(relative to base address)
		TArray FindControlRigs(UObject* Outer, UClass* OptionalClass); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D7886A4(relative to base address)
		TArray CurrentControlSelection(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7881D8(relative to base address)
		UTransformableControlHandle CreateTransformableControlHandle(FName& ControlName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D788140(relative to base address)
		bool ClearControlSelection(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7879D4(relative to base address)
	};


	// Class ControlRig.ModularRig
	// Inherited from UControlRig -> URigVMHost -> UObject
	// Size: 0x190 (0xC30 - 0xAA0)
	class UModularRig : public UControlRig	
	{
	public:
		TArray<FRigModuleInstance> Modules; // 0xAA0(0x10)
		unsigned char UnknownData00_6[0x20]; // 0xAB0(0x20) UNKNOWN PROPERTY
		FModularRigSettings ModularRigSettings; // 0xAD0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xAD1(0x7) UNKNOWN PROPERTY
		FModularRigModel ModularRigModel; // 0xAD8(0xA0)
		TArray<FRigModuleExecutionElement> ExecutionQueue; // 0xB78(0x10)
		unsigned char UnknownData02_7[0xA8]; // 0xB88(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ModularRig");
			return ret;
		}
	};


	// Class ControlRig.RigHierarchy
	// Inherited from UObject
	// Size: 0x498 (0x4C0 - 0x28)
	class URigHierarchy : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate ModifiedEventDynamic; // 0x40(0x10)
		unsigned char UnknownData01_6[0x48]; // 0x50(0x48) UNKNOWN PROPERTY
		uint32_t TopologyVersion; // 0x98(0x4)
		uint32_t MetadataVersion; // 0x9C(0x4)
		uint16_t MetadataTagVersion; // 0xA0(0x2)
		bool bEnableDirtyPropagation; // 0xA2(0x1)
		unsigned char UnknownData02_6[0x131]; // 0xA3(0x131) UNKNOWN PROPERTY
		int32_t TransformStackIndex; // 0x1D4(0x4)
		unsigned char UnknownData03_6[0x70]; // 0x1D8(0x70) UNKNOWN PROPERTY
		URigHierarchyController* HierarchyController; // 0x248(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x250(0x8) UNKNOWN PROPERTY
		UModularRigRuleManager* RuleManager; // 0x258(0x8)
		unsigned char UnknownData05_6[0x50]; // 0x260(0x50) UNKNOWN PROPERTY
		TMap<FRigElementKey, FRigElementKey> PreviousNameMap; // 0x2B0(0x50)
		unsigned char UnknownData06_6[0xF8]; // 0x300(0xF8) UNKNOWN PROPERTY
		URigHierarchy* HierarchyForCacheValidation; // 0x3F8(0x8)
		unsigned char UnknownData07_7[0xC0]; // 0x400(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.RigHierarchy");
			return ret;
		}

		void UnsetCurveValueByIndex(int32_t InElementIndex, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74DE34(relative to base address)
		void UnsetCurveValue(FRigElementKey InKey, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74DC4C(relative to base address)
		bool SwitchToWorldSpace(FRigElementKey InChild, bool bInitial, bool bAffectChildren); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74D9A8(relative to base address)
		bool SwitchToParent(FRigElementKey InChild, FRigElementKey InParent, bool bInitial, bool bAffectChildren); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74D63C(relative to base address)
		bool SwitchToDefaultParent(FRigElementKey InChild, bool bInitial, bool bAffectChildren); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74D398(relative to base address)
		TArray SortKeys(TArray<FRigElementKey>& InKeys); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D74D2D0(relative to base address)
		bool SetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D74D020(relative to base address)
		bool SetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FVector> InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74CD30(relative to base address)
		bool SetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D74C9EC(relative to base address)
		bool SetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FTransform> InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74C6FC(relative to base address)
		bool SetTag(FRigElementKey InItem, FName InTag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74C518(relative to base address)
		bool SetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D74C16C(relative to base address)
		bool SetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRotator> InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74BE94(relative to base address)
		bool SetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74BBF4(relative to base address)
		bool SetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRigElementKey> InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74B91C(relative to base address)
		bool SetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D74B670(relative to base address)
		bool SetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FQuat> InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74B398(relative to base address)
		void SetPose_ForBlueprint(FRigPose InPose); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74B210(relative to base address)
		bool SetParentWeightArray(FRigElementKey InChild, TArray<FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74AE74(relative to base address)
		bool SetParentWeight(FRigElementKey InChild, FRigElementKey InParent, FRigElementWeight InWeight, bool bInitial, bool bAffectChildren); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74AA28(relative to base address)
		bool SetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74A78C(relative to base address)
		bool SetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FName> InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74A49C(relative to base address)
		void SetLocalTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D749F94(relative to base address)
		void SetLocalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D749A14(relative to base address)
		bool SetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D749770(relative to base address)
		bool SetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FLinearColor> InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D749498(relative to base address)
		bool SetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32_t InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7491FC(relative to base address)
		bool SetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<int32_t> InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D748F0C(relative to base address)
		void SetGlobalTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D748A04(relative to base address)
		void SetGlobalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D748484(relative to base address)
		bool SetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7481E8(relative to base address)
		bool SetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<float> InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D747EF8(relative to base address)
		void SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D747DF8(relative to base address)
		void SetCurveValue(FRigElementKey InKey, float InValue, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D747B70(relative to base address)
		void SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D747AAC(relative to base address)
		void SetControlVisibility(FRigElementKey InKey, bool bVisibility); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7478BC(relative to base address)
		void SetControlValueByIndex(int32_t InElementIndex, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7474A4(relative to base address)
		void SetControlValue(FRigElementKey InKey, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74700C(relative to base address)
		void SetControlShapeTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bSetupUndo); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D746C9C(relative to base address)
		void SetControlShapeTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bSetupUndo); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D7468A8(relative to base address)
		void SetControlSettingsByIndex(int32_t InElementIndex, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7464C4(relative to base address)
		void SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D74605C(relative to base address)
		void SetControlPreferredRotatorByIndex(int32_t InElementIndex, FRotator& InRotator, bool bInitial, bool bFixEulerFlips); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D745E84(relative to base address)
		void SetControlPreferredRotator(FRigElementKey InKey, FRotator& InRotator, bool bInitial, bool bFixEulerFlips); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D745B48(relative to base address)
		void SetControlPreferredRotationOrderByIndex(int32_t InElementIndex, EEulerRotationOrder InRotationOrder); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D745A84(relative to base address)
		void SetControlPreferredRotationOrder(FRigElementKey InKey, EEulerRotationOrder InRotationOrder); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D745894(relative to base address)
		void SetControlPreferredEulerAnglesByIndex(int32_t InElementIndex, FVector& InEulerAngles, EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D7455F0(relative to base address)
		void SetControlPreferredEulerAngles(FRigElementKey InKey, FVector& InEulerAngles, EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D7451B8(relative to base address)
		void SetControlOffsetTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D744CB0(relative to base address)
		void SetControlOffsetTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D744730(relative to base address)
		void SetConnectorSettingsByIndex(int32_t InElementIndex, FRigConnectorSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D744358(relative to base address)
		void SetConnectorSettings(FRigElementKey InKey, FRigConnectorSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D743F04(relative to base address)
		bool SetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D743C64(relative to base address)
		bool SetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<bool> InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D743978(relative to base address)
		void SendAutoKeyEvent(FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7436E8(relative to base address)
		TArray RestoreSocketsFromStates(TArray<FRigSocketState> InStates, bool bSetupUndoRedo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7435D8(relative to base address)
		TArray RestoreConnectorsFromStates(TArray<FRigConnectorState> InStates, bool bSetupUndoRedo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D743484(relative to base address)
		void ResetToDefault(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D743470(relative to base address)
		void ResetPoseToInitial(ERigElementType InTypeFilter); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7433F0(relative to base address)
		void ResetCurveValues(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D743398(relative to base address)
		void Reset(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D743384(relative to base address)
		bool RemoveMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7431A0(relative to base address)
		bool RemoveAllMetadata(FRigElementKey InItem); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D743074(relative to base address)
		int32_t Num(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFE90(relative to base address)
		FRigControlValue MakeControlValueFromVector2D(FVector2D InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D742D44(relative to base address)
		FRigControlValue MakeControlValueFromVector(FVector InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D742ED8(relative to base address)
		FRigControlValue MakeControlValueFromTransformNoScale(FTransformNoScale InValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D742B98(relative to base address)
		FRigControlValue MakeControlValueFromTransform(FTransform InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D7429A4(relative to base address)
		FRigControlValue MakeControlValueFromRotator(FRotator InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D742830(relative to base address)
		FRigControlValue MakeControlValueFromInt(int32_t InValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D74273C(relative to base address)
		void MakeControlValueFromFloat(float InValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D742644(relative to base address)
		void MakeControlValueFromEulerTransform(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D742478(relative to base address)
		FRigControlValue MakeControlValueFromBool(bool InValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D74236C(relative to base address)
		bool IsValidIndex(int32_t InElementIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7422D8(relative to base address)
		bool IsSelectedByIndex(int32_t InIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D742228(relative to base address)
		bool IsSelected(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D742108(relative to base address)
		bool IsProcedural(FRigElementKey& InKey); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D742060(relative to base address)
		bool IsParentedTo(FRigElementKey InChild, FRigElementKey InParent); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D741E78(relative to base address)
		bool IsCurveValueSetByIndex(int32_t InElementIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D741DEC(relative to base address)
		bool IsCurveValueSet(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D741CC0(relative to base address)
		bool IsControllerAvailable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D741CA8(relative to base address)
		bool HasTag(FRigElementKey InItem, FName InTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D741AC4(relative to base address)
		FVector GetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector DefaultValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7417F4(relative to base address)
		FVector GetVectorFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D7416B4(relative to base address)
		TArray GetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7414C0(relative to base address)
		FVector2D GetVector2DFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D74138C(relative to base address)
		FTransformNoScale GetTransformNoScaleFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D7411E8(relative to base address)
		FTransform GetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform DefaultValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D740E68(relative to base address)
		FTransform GetTransformFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D740C94(relative to base address)
		TArray GetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D740AA0(relative to base address)
		TArray GetTags(FRigElementKey InItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D740968(relative to base address)
		TArray GetSocketStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7408C8(relative to base address)
		TArray GetSocketKeys(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D740820(relative to base address)
		TArray GetSelectedKeys(ERigElementType InTypeFilter); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D74077C(relative to base address)
		UModularRigRuleManager GetRuleManager(bool bCreateIfNeeded); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7406EC(relative to base address)
		FRotator GetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator DefaultValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D74041C(relative to base address)
		FRotator GetRotatorFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D7402D0(relative to base address)
		TArray GetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7400D8(relative to base address)
		TArray GetRootElementKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D740074(relative to base address)
		TArray GetRigidBodyKeys(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73FFCC(relative to base address)
		FRigElementKey GetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73FD1C(relative to base address)
		TArray GetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73FB28(relative to base address)
		TArray GetReferenceKeys(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73FA80(relative to base address)
		FQuat GetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat DefaultValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73F7B4(relative to base address)
		TArray GetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73F5C0(relative to base address)
		FRigElementKey GetPreviousParent(FRigElementKey& InKey); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73F528(relative to base address)
		FName GetPreviousName(FRigElementKey& InKey); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73F494(relative to base address)
		FRigPose GetPose(bool bInitial, bool bIncludeTransientControls); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73F38C(relative to base address)
		TArray GetParentWeightArray(FRigElementKey InChild, bool bInitial); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73EF88(relative to base address)
		FRigElementWeight GetParentWeight(FRigElementKey InChild, FRigElementKey InParent, bool bInitial); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73ECCC(relative to base address)
		FTransform GetParentTransformByIndex(int32_t InElementIndex, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73EBAC(relative to base address)
		FTransform GetParentTransform(FRigElementKey InKey, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73E97C(relative to base address)
		TArray GetParents(FRigElementKey InKey, bool bRecursive); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73F194(relative to base address)
		int32_t GetNumberOfParents(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73E858(relative to base address)
		TArray GetNullKeys(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73E7B0(relative to base address)
		FName GetNameSpaceFName(FRigElementKey InItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73E694(relative to base address)
		FString GetNameSpace(FRigElementKey InItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73E55C(relative to base address)
		FName GetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73E2B4(relative to base address)
		TArray GetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73E0C0(relative to base address)
		FName GetModulePathFName(FRigElementKey InItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73DFA4(relative to base address)
		FString GetModulePath(FRigElementKey InItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73DE6C(relative to base address)
		ERigMetadataType GetMetadataType(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73DC88(relative to base address)
		TArray GetMetadataNames(FRigElementKey InItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73DB50(relative to base address)
		FTransform GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73DA3C(relative to base address)
		FTransform GetLocalTransform(FRigElementKey InKey, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73D818(relative to base address)
		int32_t GetLocalIndex_ForBlueprint(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73D6EC(relative to base address)
		FTransform GetLocalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73D5D8(relative to base address)
		FTransform GetLocalControlShapeTransform(FRigElementKey InKey, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73D3B0(relative to base address)
		FLinearColor GetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor DefaultValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73D0FC(relative to base address)
		TArray GetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73CF08(relative to base address)
		TArray GetKeys(TArray<int32_t> InElementIndices); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73CDA4(relative to base address)
		FRigElementKey GetKey(int32_t InElementIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73CD1C(relative to base address)
		int32_t GetIntFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D73CBFC(relative to base address)
		int32_t GetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32_t DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73C960(relative to base address)
		TArray GetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73C76C(relative to base address)
		int32_t GetIndex_ForBlueprint(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73C650(relative to base address)
		FTransform GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73C53C(relative to base address)
		FTransform GetGlobalTransform(FRigElementKey InKey, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73C318(relative to base address)
		FTransform GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73C204(relative to base address)
		FTransform GetGlobalControlShapeTransform(FRigElementKey InKey, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73BFDC(relative to base address)
		FTransform GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73BEC8(relative to base address)
		FTransform GetGlobalControlOffsetTransform(FRigElementKey InKey, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73BCA4(relative to base address)
		float GetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73BA04(relative to base address)
		float GetFloatFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D73B8E0(relative to base address)
		TArray GetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73B6EC(relative to base address)
		FRigElementKey GetFirstParent(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73B5D0(relative to base address)
		FEulerTransform GetEulerTransformFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D73B424(relative to base address)
		FRigElementKey GetDefaultParent(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73B308(relative to base address)
		float GetCurveValueByIndex(int32_t InElementIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73B278(relative to base address)
		float GetCurveValue(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73B14C(relative to base address)
		TArray GetCurveKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73B108(relative to base address)
		FRigControlValue GetControlValueByIndex(int32_t InElementIndex, ERigControlValueType InValueType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73AF48(relative to base address)
		FRigControlValue GetControlValue(FRigElementKey InKey, ERigControlValueType InValueType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73AD04(relative to base address)
		FRotator GetControlPreferredRotatorByIndex(int32_t InElementIndex, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73AC2C(relative to base address)
		FRotator GetControlPreferredRotator(FRigElementKey InKey, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73AA2C(relative to base address)
		EEulerRotationOrder GetControlPreferredEulerRotationOrderByIndex(int32_t InElementIndex, bool bFromSettings); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73A968(relative to base address)
		EEulerRotationOrder GetControlPreferredEulerRotationOrder(FRigElementKey InKey, bool bFromSettings); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73A77C(relative to base address)
		FVector GetControlPreferredEulerAnglesByIndex(int32_t InElementIndex, EEulerRotationOrder InRotationOrder, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73A66C(relative to base address)
		FVector GetControlPreferredEulerAngles(FRigElementKey InKey, EEulerRotationOrder InRotationOrder, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73A3B4(relative to base address)
		URigHierarchyController GetController(bool bCreateIfNeeded); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D73B078(relative to base address)
		TArray GetControlKeys(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73A30C(relative to base address)
		TArray GetConnectorStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73A26C(relative to base address)
		TArray GetConnectorKeys(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73A1C4(relative to base address)
		TArray GetChildren(FRigElementKey InKey, bool bRecursive); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D739FCC(relative to base address)
		bool GetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D739D2C(relative to base address)
		TArray GetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D739B38(relative to base address)
		TArray GetBoneKeys(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D739A90(relative to base address)
		TArray GetAllKeys_ForBlueprint(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7399E8(relative to base address)
		FRigNullElement FindNull_ForBlueprintOnly(FRigElementKey& InKey); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D739890(relative to base address)
		FRigControlElement FindControl_ForBlueprintOnly(FRigElementKey& InKey); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7397B0(relative to base address)
		FRigBoneElement FindBone_ForBlueprintOnly(FRigElementKey& InKey); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D73966C(relative to base address)
		void CopyPose(URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7394C8(relative to base address)
		void CopyHierarchy(URigHierarchy* InHierarchy); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D739448(relative to base address)
		bool Contains_ForBlueprint(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D739324(relative to base address)
	};


	// Class ControlRig.RigHierarchyProvider
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class URigHierarchyProvider : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.RigHierarchyProvider");
			return ret;
		}
	};


	// Class ControlRig.AnimNodeControlRigLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAnimNodeControlRigLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.AnimNodeControlRigLibrary");
			return ret;
		}

		FControlRigReference SetControlRigClass(FControlRigReference& Node, UClass* ControlRigClass); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D78B2A4(relative to base address)
		void ConvertToControlRigPure(FAnimNodeReference& Node, FControlRigReference& ControlRig, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D787E68(relative to base address)
		FControlRigReference ConvertToControlRig(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D787D3C(relative to base address)
	};


	// Class ControlRig.TransformableControlHandle
	// Inherited from UTransformableHandle -> UObject
	// Size: 0x28 (0x88 - 0x60)
	class UTransformableControlHandle : public UTransformableHandle	
	{
	public:
		TWeakObjectPtr<UControlRig*> ControlRig; // 0x60(0x20)
		FName ControlName; // 0x80(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x84(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.TransformableControlHandle");
			return ret;
		}
	};


	// Class ControlRig.ControlRigAnimInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x8 (0x3C0 - 0x3B8)
	class UControlRigAnimInstance : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigAnimInstance");
			return ret;
		}
	};


	// Class ControlRig.ControlRigBlueprintGeneratedClass
	// Inherited from URigVMBlueprintGeneratedClass -> UBlueprintGeneratedClass -> UClass -> UStruct -> UField -> UObject
	// Size: 0x0 (0x388 - 0x388)
	class UControlRigBlueprintGeneratedClass : public URigVMBlueprintGeneratedClass	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigBlueprintGeneratedClass");
			return ret;
		}
	};


	// Class ControlRig.ControlRigComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x168 (0x630 - 0x4C8)
	class UControlRigComponent : public UPrimitiveComponent	
	{
	public:
		UClass* ControlRigClass; // 0x4C8(0x8)
		FMulticastInlineDelegate OnPreInitializeDelegate; // 0x4D0(0x10)
		FMulticastInlineDelegate OnPostInitializeDelegate; // 0x4E0(0x10)
		FMulticastInlineDelegate OnPreConstructionDelegate; // 0x4F0(0x10)
		FMulticastInlineDelegate OnPostConstructionDelegate; // 0x500(0x10)
		FMulticastInlineDelegate OnPreForwardsSolveDelegate; // 0x510(0x10)
		FMulticastInlineDelegate OnPostForwardsSolveDelegate; // 0x520(0x10)
		TArray<FControlRigComponentMappedElement> UserDefinedElements; // 0x530(0x10)
		TArray<FControlRigComponentMappedElement> MappedElements; // 0x540(0x10)
		bool bEnableLazyEvaluation; // 0x550(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x551(0x3) UNKNOWN PROPERTY
		float LazyEvaluationPositionThreshold; // 0x554(0x4)
		float LazyEvaluationRotationThreshold; // 0x558(0x4)
		float LazyEvaluationScaleThreshold; // 0x55C(0x4)
		bool bResetTransformBeforeTick; // 0x560(0x1)
		bool bResetInitialsBeforeConstruction; // 0x561(0x1)
		bool bUpdateRigOnTick; // 0x562(0x1)
		bool bUpdateInEditor; // 0x563(0x1)
		bool bDrawBones; // 0x564(0x1)
		bool bShowDebugDrawing; // 0x565(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x566(0x2) UNKNOWN PROPERTY
		UControlRig* ControlRig; // 0x568(0x8)
		unsigned char UnknownData02_7[0xC0]; // 0x570(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigComponent");
			return ret;
		}

		void Update(float DeltaTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78CEE8(relative to base address)
		void SetObjectBinding(UObject* InObjectToBind); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78C74C(relative to base address)
		void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78C534(relative to base address)
		void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D78C284(relative to base address)
		void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D78BF10(relative to base address)
		void SetControlVector2D(FName ControlName, FVector2D Value); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D78BC28(relative to base address)
		void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D78B978(relative to base address)
		void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D78B75C(relative to base address)
		void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D78B540(relative to base address)
		void SetControlRigClass(UClass* InControlRigClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78B428(relative to base address)
		void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D78B088(relative to base address)
		void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D78ADD8(relative to base address)
		void SetControlInt(FName ControlName, int32_t Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78ACD8(relative to base address)
		void SetControlFloat(FName ControlName, float Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78AC14(relative to base address)
		void SetControlBool(FName ControlName, bool Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78AB14(relative to base address)
		void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D78A4DC(relative to base address)
		void SetBoneInitialTransformsFromSkeletalMesh(USkeletalMesh* InSkeletalMesh); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78A444(relative to base address)
		void OnPreInitialize(UControlRigComponent* Component); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74D789D70(relative to base address)
		void OnPreForwardsSolve(UControlRigComponent* Component); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74D789CEC(relative to base address)
		void OnPreConstruction(UControlRigComponent* Component); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74D789C68(relative to base address)
		void OnPostInitialize(UControlRigComponent* Component); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74D789BE4(relative to base address)
		void OnPostForwardsSolve(UControlRigComponent* Component); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74C3495DC(relative to base address)
		void OnPostConstruction(UControlRigComponent* Component); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74D789B60(relative to base address)
		void Initialize(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D789808(relative to base address)
		FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D789658(relative to base address)
		FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D7894D8(relative to base address)
		FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D7893C4(relative to base address)
		TArray GetElementNames(ERigElementType ElementType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D789148(relative to base address)
		FVector2D GetControlVector2D(FName ControlName); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D7890B0(relative to base address)
		FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D788F9C(relative to base address)
		FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D788E9C(relative to base address)
		FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D788D90(relative to base address)
		UControlRig GetControlRig(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D788D6C(relative to base address)
		FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D788C6C(relative to base address)
		FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D788B58(relative to base address)
		int32_t GetControlInt(FName ControlName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D788A6C(relative to base address)
		float GetControlFloat(FName ControlName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D7889DC(relative to base address)
		bool GetControlBool(FName ControlName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D7888F0(relative to base address)
		FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D7887DC(relative to base address)
		float GetAbsoluteTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7887B0(relative to base address)
		bool DoesElementExist(FName Name, ERigElementType ElementType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D7885BC(relative to base address)
		void ClearMappedElements(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7879FC(relative to base address)
		bool CanExecute(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D78799C(relative to base address)
		void AddMappedSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves, EControlRigComponentMapDirection InDirection); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D786E10(relative to base address)
		void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D786D68(relative to base address)
		void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D786C64(relative to base address)
		void AddMappedCompleteSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, EControlRigComponentMapDirection InDirection); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D786B7C(relative to base address)
	};


	// Class ControlRig.ControlRigControlActor
	// Inherited from AActor -> UObject
	// Size: 0xA8 (0x338 - 0x290)
	class AControlRigControlActor : public AActor	
	{
	public:
		AActor* ActorToTrack; // 0x290(0x8)
		UClass* ControlRigClass; // 0x298(0x8)
		bool bRefreshOnTick; // 0x2A0(0x1)
		bool bIsSelectable; // 0x2A1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2A2(0x6) UNKNOWN PROPERTY
		UMaterialInterface* MaterialOverride; // 0x2A8(0x8)
		FString ColorParameter; // 0x2B0(0x10)
		bool bCastShadows; // 0x2C0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2C1(0x7) UNKNOWN PROPERTY
		USceneComponent* ActorRootComponent; // 0x2C8(0x8)
		TWeakObjectPtr<UControlRig*> ControlRig; // 0x2D0(0x20)
		TArray<FName> ControlNames; // 0x2F0(0x10)
		TArray<FTransform> ShapeTransforms; // 0x300(0x10)
		TArray<UStaticMeshComponent*> Components; // 0x310(0x10)
		TArray<UMaterialInstanceDynamic*> Materials; // 0x320(0x10)
		FName ColorParameterName; // 0x330(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x334(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigControlActor");
			return ret;
		}

		void ResetControlActor(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78A31C(relative to base address)
		void Refresh(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78A004(relative to base address)
		void Clear(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7879C0(relative to base address)
	};


	// Class ControlRig.ControlRigShapeActor
	// Inherited from AActor -> UObject
	// Size: 0xB0 (0x340 - 0x290)
	class AControlRigShapeActor : public AActor	
	{
	public:
		USceneComponent* ActorRootComponent; // 0x290(0x8)
		UStaticMeshComponent* StaticMeshComponent; // 0x298(0x8)
		uint32_t ControlRigIndex; // 0x2A0(0x4)
		TWeakObjectPtr<UControlRig*> ControlRig; // 0x2A4(0x8)
		FName ControlName; // 0x2AC(0x4)
		FName ShapeName; // 0x2B0(0x4)
		FName ColorParameterName; // 0x2B4(0x4)
		unsigned char UnknownData00_6[0x78]; // 0x2B8(0x78) UNKNOWN PROPERTY
		bool bSelected : 1; // 0x330:0(0x1)
		bool bHovered : 1; // 0x330:1(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x331(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigShapeActor");
			return ret;
		}

		void SetSelected(bool bInSelected); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C393318(relative to base address)
		void SetSelectable(bool bInSelectable); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78C7CC(relative to base address)
		void SetHovered(bool bInHovered); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78BE8C(relative to base address)
		void SetGlobalTransform(FTransform& InTransform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D78BD7C(relative to base address)
		void SetEnabled(bool bInEnabled); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0EBF40(relative to base address)
		void OnTransformChanged(FTransform& NewTransform); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSelectionChanged(bool bIsSelected); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnManipulatingChanged(bool bIsManipulating); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHoveredChanged(bool bIsSelected); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnabledChanged(bool bIsEnabled); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsSelectedInEditor(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1D78(relative to base address)
		bool IsHovered(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7898E4(relative to base address)
		bool IsEnabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7898BC(relative to base address)
		FTransform GetGlobalTransform(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7892B8(relative to base address)
	};


	// Class ControlRig.ControlRigShapeLibrary
	// Inherited from UObject
	// Size: 0x118 (0x140 - 0x28)
	class UControlRigShapeLibrary : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FControlRigShapeDefinition DefaultShape; // 0x30(0xA0)
		TWeakObjectPtr<UMaterial*> DefaultMaterial; // 0xD0(0x20)
		TWeakObjectPtr<UMaterial*> XRayMaterial; // 0xF0(0x20)
		FName MaterialColorParameter; // 0x110(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x114(0x4) UNKNOWN PROPERTY
		TArray<FControlRigShapeDefinition> Shapes; // 0x118(0x10)
		unsigned char UnknownData02_7[0x18]; // 0x128(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigShapeLibrary");
			return ret;
		}
	};


	// Class ControlRig.ControlRigTestData
	// Inherited from UObject
	// Size: 0x120 (0x148 - 0x28)
	class UControlRigTestData : public UObject	
	{
	public:
		FSoftObjectPath ControlRigObjectPath; // 0x28(0x18)
		FControlRigTestDataFrame Initial; // 0x40(0x90)
		TArray<FControlRigTestDataFrame> InputFrames; // 0xD0(0x10)
		TArray<FControlRigTestDataFrame> OutputFrames; // 0xE0(0x10)
		TArray<int32_t> FramesToSkip; // 0xF0(0x10)
		double Tolerance; // 0x100(0x8)
		unsigned char UnknownData00_7[0x40]; // 0x108(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigTestData");
			return ret;
		}

		bool SetupReplay(UControlRig* InControlRig, bool bGroundTruth); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78C850(relative to base address)
		void ReleaseReplay(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78A018(relative to base address)
		bool Record(UControlRig* InControlRig, double InRecordingDuration); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D789DF4(relative to base address)
		bool IsReplaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D789930(relative to base address)
		bool IsRecording(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D78990C(relative to base address)
		FVector2D GetTimeRange(bool bInput); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D78976C(relative to base address)
		EControlRigTestDataPlaybackMode GetPlaybackMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D789618(relative to base address)
		int32_t GetFrameIndexForTime(double InSeconds, bool bInput); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7891EC(relative to base address)
		UControlRigTestData CreateNewAsset(FString InDesiredPackagePath, FString InBlueprintPathName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D788028(relative to base address)
	};


	// Class ControlRig.ControlRigValidator
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UControlRigValidator : public UObject	
	{
	public:
		TArray<UControlRigValidationPass*> Passes; // 0x28(0x10)
		unsigned char UnknownData00_7[0x30]; // 0x38(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigValidator");
			return ret;
		}
	};


	// Class ControlRig.ControlRigValidationPass
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UControlRigValidationPass : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigValidationPass");
			return ret;
		}
	};


	// Class ControlRig.ModularRigController
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UModularRigController : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x28(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ModularRigController");
			return ret;
		}

		bool UnBindModuleVariable(FString InModulePath, FName& InVariableName, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D78CD80(relative to base address)
		bool SwapModulesOfClass(UClass* InOldClass, UClass* InNewClass, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78CC40(relative to base address)
		bool SwapModuleClass(FString InModulePath, UClass* InNewClass, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78CB10(relative to base address)
		bool SetModuleShortName(FString InModulePath, FString InNewShortName, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78C610(relative to base address)
		bool SetConfigValueInModule(FString InModulePath, FName& InVariableName, FString InValue, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D78A918(relative to base address)
		FString ReparentModule(FString InModulePath, FString InNewParentModulePath, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78A1B0(relative to base address)
		FString RenameModule(FString InModulePath, FName& InNewName, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D78A02C(relative to base address)
		FString MirrorModule(FString InModulePath, FRigVMMirrorSettings& InSettings, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D789954(relative to base address)
		TArray DisconnectCyclicConnectors(bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D788528(relative to base address)
		bool DisconnectConnector(FRigElementKey& InConnectorKey, bool bDisconnectSubModules, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D788304(relative to base address)
		bool DeleteModule(FString InModulePath, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D78821C(relative to base address)
		bool ConnectConnectorToElement(FRigElementKey& InConnectorKey, FRigElementKey& InTargetKey, bool bSetupUndo, bool bAutoResolveOtherConnectors, bool bCheckValidConnection); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D787A10(relative to base address)
		bool CanConnectConnectorToElement(FRigElementKey& InConnectorKey, FRigElementKey& InTargetKey, FText& OutErrorMessage); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D78784C(relative to base address)
		bool BindModuleVariable(FString InModulePath, FName& InVariableName, FString InSourcePath, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D787650(relative to base address)
		bool AutoConnectSecondaryConnectors(TArray<FRigElementKey>& InConnectorKeys, bool bReplaceExistingConnections, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D78743C(relative to base address)
		bool AutoConnectModules(TArray<FString>& InModulePaths, bool bReplaceExistingConnections, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D787204(relative to base address)
		FString AddModule(FName& InModuleName, UClass* InClass, FString InParentModulePath, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D786FA4(relative to base address)
	};


	// Class ControlRig.ModularRigRuleManager
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UModularRigRuleManager : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ModularRigRuleManager");
			return ret;
		}
	};


	// Class ControlRig.AdditiveControlRig
	// Inherited from UControlRig -> URigVMHost -> UObject
	// Size: 0x10 (0xAB0 - 0xAA0)
	class UAdditiveControlRig : public UControlRig	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0xAA0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.AdditiveControlRig");
			return ret;
		}
	};


	// Class ControlRig.FKControlRig
	// Inherited from UControlRig -> URigVMHost -> UObject
	// Size: 0x40 (0xAE0 - 0xAA0)
	class UFKControlRig : public UControlRig	
	{
	public:
		TArray<bool> IsControlActive; // 0xAA0(0x10)
		EControlRigFKRigExecuteMode ApplyMode; // 0xAB0(0x1)
		unsigned char UnknownData00_7[0x2F]; // 0xAB1(0x2F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.FKControlRig");
			return ret;
		}
	};


	// Class ControlRig.RigHierarchyController
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class URigHierarchyController : public UObject	
	{
	public:
		bool bReportWarningsAndErrors; // 0x28(0x1)
		unsigned char UnknownData00_7[0x67]; // 0x29(0x67) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.RigHierarchyController");
			return ret;
		}

		bool SetSelection(TArray<FRigElementKey>& InKeys, bool bPrintPythonCommand); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D7C3D58(relative to base address)
		bool SetParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C3940(relative to base address)
		void SetHierarchy(URigHierarchy* InHierarchy); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C38C0(relative to base address)
		FName SetDisplayName(FRigElementKey InControl, FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C34A4(relative to base address)
		bool SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7C31BC(relative to base address)
		bool SelectElement(FRigElementKey InKey, bool bSelect, bool bClearSelection); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C2F18(relative to base address)
		bool ReorderElement(FRigElementKey InElement, int32_t InIndex, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C2BC4(relative to base address)
		FRigElementKey RenameElement(FRigElementKey InElement, FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C27A8(relative to base address)
		bool RemoveParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C2390(relative to base address)
		bool RemoveElement(FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C20FC(relative to base address)
		bool RemoveAllParents(FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C1DA4(relative to base address)
		TArray MirrorElements(TArray<FRigElementKey> InKeys, FRigVMMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C1958(relative to base address)
		TArray ImportFromText(FString InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C1770(relative to base address)
		TArray ImportCurves(USkeleton* InSkeleton, FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C151C(relative to base address)
		TArray ImportBones(USkeleton* InSkeleton, FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C125C(relative to base address)
		URigHierarchy GetHierarchy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7C1238(relative to base address)
		FRigControlSettings GetControlSettings(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7C10EC(relative to base address)
		FString ExportToText(TArray<FRigElementKey> InKeys); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7C1014(relative to base address)
		FString ExportSelectionToText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7C0F8C(relative to base address)
		TArray DuplicateElements(TArray<FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C0DE4(relative to base address)
		bool DeselectElement(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C0CBC(relative to base address)
		bool ClearSelection(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7C0C98(relative to base address)
		FRigElementKey AddSocket(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, FLinearColor& InColor, FString InDescription, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D7C060C(relative to base address)
		FRigElementKey AddRigidBody(FName InName, FRigElementKey InParent, FRigRigidBodySettings InSettings, FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D7C0104(relative to base address)
		bool AddParent(FRigElementKey InChild, FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7BFCE4(relative to base address)
		FRigElementKey AddNull(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D7BF7D4(relative to base address)
		FRigElementKey AddCurve(FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7BF69C(relative to base address)
		FRigElementKey AddControl_ForBlueprint(FName InName, FRigElementKey InParent, FRigControlSettings InSettings, FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7BF138(relative to base address)
		FRigElementKey AddConnector(FName InName, FRigConnectorSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7BEE2C(relative to base address)
		FRigElementKey AddBone(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D7BE850(relative to base address)
		FRigElementKey AddAnimationChannel_ForBlueprint(FName InName, FRigElementKey InParentControl, FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D7BE468(relative to base address)
	};


	// Class ControlRig.ControlRigLayerInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x8 (0x3C0 - 0x3B8)
	class UControlRigLayerInstance : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigLayerInstance");
			return ret;
		}
	};


	// Class ControlRig.MovieSceneControlRigParameterSection
	// Inherited from UMovieSceneParameterSection -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x278 (0x3D0 - 0x158)
	class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x158(0x48) UNKNOWN PROPERTY
		UControlRig* ControlRig; // 0x1A0(0x8)
		UClass* ControlRigClass; // 0x1A8(0x8)
		TArray<bool> ControlsMask; // 0x1B0(0x10)
		FMovieSceneTransformMask TransformMask; // 0x1C0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		FMovieSceneFloatChannel Weight; // 0x1C8(0x110)
		TMap<FName, FChannelMapInfo> ControlChannelMap; // 0x2D8(0x50)
		TArray<FEnumParameterNameAndCurve> EnumParameterNamesAndCurves; // 0x328(0x10)
		TArray<FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves; // 0x338(0x10)
		TArray<FSpaceControlNameAndChannel> SpaceChannels; // 0x348(0x10)
		TArray<FConstraintAndActiveChannel> ConstraintsChannels; // 0x358(0x10)
		unsigned char UnknownData02_7[0x68]; // 0x368(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.MovieSceneControlRigParameterSection");
			return ret;
		}
	};


	// Class ControlRig.MovieSceneControlRigParameterTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x110 (0x1A8 - 0x98)
	class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack	
	{
	public:
		unsigned char UnknownData00_3[0x40]; // 0x98(0x40) UNKNOWN PROPERTY
		UControlRig* ControlRig; // 0xD8(0x8)
		UMovieSceneSection* SectionToKey; // 0xE0(0x8)
		TArray<UMovieSceneSection*> Sections; // 0xE8(0x10)
		FName TrackName; // 0xF8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		TMap<FName, FControlRotationOrder> ControlsRotationOrder; // 0x100(0x50)
		int32_t PriorityOrder; // 0x150(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x154(0x4) UNKNOWN PROPERTY
		TMap<TWeakObjectPtr, UControlRig*> GameWorldControlRigs; // 0x158(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.MovieSceneControlRigParameterTrack");
			return ret;
		}
	};


	// Class ControlRig.ControlRigSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UControlRigSettings : public UDeveloperSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigSettings");
			return ret;
		}
	};


	// Class ControlRig.ControlRigEditorSettings
	// Inherited from URigVMEditorSettings -> UDeveloperSettings -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UControlRigEditorSettings : public URigVMEditorSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigEditorSettings");
			return ret;
		}
	};


	// Class ControlRig.ControlRigPoseAsset
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UControlRigPoseAsset : public UObject	
	{
	public:
		FControlRigControlPose Pose; // 0x28(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigPoseAsset");
			return ret;
		}

		void SelectControls(UControlRig* InControlRig, bool bDoMirror); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D844794(relative to base address)
		void SavePose(UControlRig* InControlRig, bool bUseAll); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8446CC(relative to base address)
		void ReplaceControlName(FName& CurrentName, FName& NewName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D8445F4(relative to base address)
		void PastePose(UControlRig* InControlRig, bool bDoKey, bool bDoMirror); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8443FC(relative to base address)
		void GetCurrentPose(UControlRig* InControlRig, FControlRigControlPose& OutPose); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D8442E0(relative to base address)
		TArray GetControlNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D844298(relative to base address)
		bool DoesMirrorMatch(UControlRig* ControlRig, FName& ControlName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D844154(relative to base address)
	};


	// Class ControlRig.ControlRigPoseMirrorSettings
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UControlRigPoseMirrorSettings : public UObject	
	{
	public:
		FString RightSide; // 0x28(0x10)
		FString LeftSide; // 0x38(0x10)
		TEnumAsByte<EAxis> MirrorAxis; // 0x48(0x1)
		TEnumAsByte<EAxis> AxisToFlip; // 0x49(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigPoseMirrorSettings");
			return ret;
		}
	};


	// Class ControlRig.ControlRigPoseProjectSettings
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UControlRigPoseProjectSettings : public UObject	
	{
	public:
		TArray<FDirectoryPath> RootSaveDirs; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigPoseProjectSettings");
			return ret;
		}
	};


	// Class ControlRig.ControlRigWorkflowOptions
	// Inherited from URigVMUserWorkflowOptions -> UObject
	// Size: 0x18 (0xB0 - 0x98)
	class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions	
	{
	public:
		URigHierarchy* Hierarchy; // 0x98(0x8)
		TArray<FRigElementKey> Selection; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigWorkflowOptions");
			return ret;
		}

		bool EnsureAtLeastOneRigElementSelected(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D844224(relative to base address)
	};


	// Class ControlRig.ControlRigTransformWorkflowOptions
	// Inherited from UControlRigWorkflowOptions -> URigVMUserWorkflowOptions -> UObject
	// Size: 0x8 (0xB8 - 0xB0)
	class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions	
	{
	public:
		TEnumAsByte<ERigTransformType> TransformType; // 0xB0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigTransformWorkflowOptions");
			return ret;
		}

		TArray ProvideWorkflows(UObject* InSubject); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D844528(relative to base address)
	};


	// Class ControlRig.ControlRigNumericalValidationPass
	// Inherited from UControlRigValidationPass -> UObject
	// Size: 0x90 (0xB8 - 0x28)
	class UControlRigNumericalValidationPass : public UControlRigValidationPass	
	{
	public:
		bool bCheckControls; // 0x28(0x1)
		bool bCheckBones; // 0x29(0x1)
		bool bCheckCurves; // 0x2A(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x2B(0x1) UNKNOWN PROPERTY
		float TranslationPrecision; // 0x2C(0x4)
		float RotationPrecision; // 0x30(0x4)
		float ScalePrecision; // 0x34(0x4)
		float CurvePrecision; // 0x38(0x4)
		FName EventNameA; // 0x3C(0x4)
		FName EventNameB; // 0x40(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FRigPose Pose; // 0x48(0x70)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigNumericalValidationPass");
			return ret;
		}
	};

}
