#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ControlRig
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ControlRig.ControlRigShapeLibraryLink
	// Inherited from UNameSpacedUserData -> UAssetUserData -> UObject
	// Size: 0x38 (0x138 - 0x100)
	class UControlRigShapeLibraryLink : public UNameSpacedUserData	
	{
	public:
		TWeakObjectPtr ShapeLibrary; // 0x100(0x20)
		TArray ShapeNames; // 0x120(0x10)
		UControlRigShapeLibrary ShapeLibraryCached; // 0x130(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigShapeLibraryLink");
			return ret;
		}

		void SetShapeLibrary(TWeakObjectPtr InShapeLibrary); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414615BF8
		TWeakObjectPtr GetShapeLibrary(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414615B18
	};


	// Class ControlRig.ControlRig
	// Inherited from URigVMHost -> UObject
	// Size: 0x828 (0xAA0 - 0x278)
	class UControlRig : public URigVMHost	
	{
	public:
		unsigned char UnknownData09_3[0x10]; // 0x278(0x10) UNKNOWN PROPERTY
		ERigExecutionType ExecutionType; // 0x288(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x289(0x3) UNKNOWN PROPERTY
		FRigHierarchySettings HierarchySettings; // 0x28C(0x4)
		TMap ControlCustomizations; // 0x290(0x50)
		URigHierarchy DynamicHierarchy; // 0x2E0(0x8)
		TArray ShapeLibraries; // 0x2E8(0x10)
		TMap ShapeLibraryNameMap; // 0x2F8(0x50)
		unsigned char UnknownData11_6[0x10]; // 0x348(0x10) UNKNOWN PROPERTY
		FRigVMExtendedExecuteContext RigVMExtendedExecuteContext; // 0x358(0x228)
		unsigned char UnknownData12_6[0x8]; // 0x580(0x8) UNKNOWN PROPERTY
		UAnimationDataSourceRegistry DataSourceRegistry; // 0x588(0x8)
		unsigned char UnknownData13_6[0xA8]; // 0x590(0xA8) UNKNOWN PROPERTY
		FRigInfluenceMapPerEvent Influences; // 0x638(0x60)
		unsigned char UnknownData14_6[0xB8]; // 0x698(0xB8) UNKNOWN PROPERTY
		TMap ExternalVariableDataAssetLinks; // 0x750(0x50)
		unsigned char UnknownData15_6[0xD0]; // 0x7A0(0xD0) UNKNOWN PROPERTY
		FMulticastSparseDelegate OnControlSelected_BP; // 0x870(0x1)
		unsigned char UnknownData16_6[0x17]; // 0x871(0x17) UNKNOWN PROPERTY
		bool bIsAdditive; // 0x888(0x1)
		unsigned char UnknownData17_6[0x18F]; // 0x889(0x18F) UNKNOWN PROPERTY
		FRigModuleSettings RigModuleSettings; // 0xA18(0x78)
		FString RigModuleNameSpace; // 0xA90(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRig");
			return ret;
		}

		bool SupportsBackwardsSolve(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411C22610
		void SetInteractionRigClass(UClass InInteractionRigClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411C22530
		void SetInteractionRig(UControlRig InInteractionRig); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411C22450
		void SelectControl(FName& InControlName, bool bSelect); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF411C22370
		void RequestConstruction(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411C22290
		void OnControlSelectedBP__DelegateSignature(UControlRig Rig, FRigControlElement& Control, bool bSelected); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF411BC15E0
		bool IsControlSelected(FName& InControlName); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF411BC1500
		UClass GetInteractionRigClass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411BC1420
		UControlRig GetInteractionRig(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411BC1340
		AActor GetHostingActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411BC1260
		URigHierarchy GetHierarchy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF411BC1180
		TArray FindControlRigs(UObject Outer, UClass OptionalClass); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF411BC10A0
		TArray CurrentControlSelection(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411BC0FC0
		UTransformableControlHandle CreateTransformableControlHandle(FName& ControlName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF411BC0EE0
		bool ClearControlSelection(); // Flags: Native|Public|BlueprintCallable 0x7FF411BC0E00
	};


	// Class ControlRig.ModularRig
	// Inherited from UControlRig -> URigVMHost -> UObject
	// Size: 0x190 (0xC30 - 0xAA0)
	class UModularRig : public UControlRig	
	{
	public:
		TArray Modules; // 0xAA0(0x10)
		unsigned char UnknownData03_6[0x20]; // 0xAB0(0x20) UNKNOWN PROPERTY
		FModularRigSettings ModularRigSettings; // 0xAD0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xAD1(0x7) UNKNOWN PROPERTY
		FModularRigModel ModularRigModel; // 0xAD8(0xA0)
		TArray ExecutionQueue; // 0xB78(0x10)
		unsigned char UnknownData05_7[0xA8]; // 0xB88(0xA8) UNKNOWN PROPERTY

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
		unsigned char UnknownData08_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate ModifiedEventDynamic; // 0x40(0x10)
		unsigned char UnknownData09_6[0x48]; // 0x50(0x48) UNKNOWN PROPERTY
		uint32_t TopologyVersion; // 0x98(0x4)
		uint32_t MetadataVersion; // 0x9C(0x4)
		uint16_t MetadataTagVersion; // 0xA0(0x2)
		bool bEnableDirtyPropagation; // 0xA2(0x1)
		unsigned char UnknownData10_6[0x131]; // 0xA3(0x131) UNKNOWN PROPERTY
		int32_t TransformStackIndex; // 0x1D4(0x4)
		unsigned char UnknownData11_6[0x70]; // 0x1D8(0x70) UNKNOWN PROPERTY
		URigHierarchyController HierarchyController; // 0x248(0x8)
		unsigned char UnknownData12_6[0x8]; // 0x250(0x8) UNKNOWN PROPERTY
		UModularRigRuleManager RuleManager; // 0x258(0x8)
		unsigned char UnknownData13_6[0x50]; // 0x260(0x50) UNKNOWN PROPERTY
		TMap PreviousNameMap; // 0x2B0(0x50)
		unsigned char UnknownData14_6[0xF8]; // 0x300(0xF8) UNKNOWN PROPERTY
		URigHierarchy HierarchyForCacheValidation; // 0x3F8(0x8)
		unsigned char UnknownData15_7[0xC0]; // 0x400(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.RigHierarchy");
			return ret;
		}

		void UnsetCurveValueByIndex(int32_t InElementIndex, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461F438
		void UnsetCurveValue(FRigElementKey InKey, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461F358
		bool SwitchToWorldSpace(FRigElementKey InChild, bool bInitial, bool bAffectChildren); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461F278
		bool SwitchToParent(FRigElementKey InChild, FRigElementKey InParent, bool bInitial, bool bAffectChildren); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461F198
		bool SwitchToDefaultParent(FRigElementKey InChild, bool bInitial, bool bAffectChildren); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461F0B8
		TArray SortKeys(TArray& InKeys); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41461EFD8
		bool SetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41461EEF8
		bool SetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461EE18
		bool SetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41461ED38
		bool SetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461EC58
		bool SetTag(FRigElementKey InItem, FName InTag); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461EB78
		bool SetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41461EA98
		bool SetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461E9B8
		bool SetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461E8D8
		bool SetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461E7F8
		bool SetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41461E718
		bool SetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461E638
		void SetPose_ForBlueprint(FRigPose InPose); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461E558
		bool SetParentWeightArray(FRigElementKey InChild, TArray InWeights, bool bInitial, bool bAffectChildren); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461E478
		bool SetParentWeight(FRigElementKey InChild, FRigElementKey InParent, FRigElementWeight InWeight, bool bInitial, bool bAffectChildren); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461E398
		bool SetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461E2B8
		bool SetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461E1D8
		void SetLocalTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41461E0F8
		void SetLocalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41461E018
		bool SetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41461DF38
		bool SetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461DE58
		bool SetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32_t InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461DD78
		bool SetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461DC98
		void SetGlobalTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41461DBB8
		void SetGlobalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41461DAD8
		bool SetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461D9F8
		bool SetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461D918
		void SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461D838
		void SetCurveValue(FRigElementKey InKey, float InValue, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461D758
		void SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461D678
		void SetControlVisibility(FRigElementKey InKey, bool bVisibility); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461D598
		void SetControlValueByIndex(int32_t InElementIndex, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461D4B8
		void SetControlValue(FRigElementKey InKey, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461D3D8
		void SetControlShapeTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bSetupUndo); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41461D2F8
		void SetControlShapeTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bSetupUndo); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41461D218
		void SetControlSettingsByIndex(int32_t InElementIndex, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461D138
		void SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461D058
		void SetControlPreferredRotatorByIndex(int32_t InElementIndex, FRotator& InRotator, bool bInitial, bool bFixEulerFlips); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41461CF78
		void SetControlPreferredRotator(FRigElementKey InKey, FRotator& InRotator, bool bInitial, bool bFixEulerFlips); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41461CE98
		void SetControlPreferredRotationOrderByIndex(int32_t InElementIndex, EEulerRotationOrder InRotationOrder); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461CDB8
		void SetControlPreferredRotationOrder(FRigElementKey InKey, EEulerRotationOrder InRotationOrder); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461CCD8
		void SetControlPreferredEulerAnglesByIndex(int32_t InElementIndex, FVector& InEulerAngles, EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41461CBF8
		void SetControlPreferredEulerAngles(FRigElementKey InKey, FVector& InEulerAngles, EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41461CB18
		void SetControlOffsetTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41461CA38
		void SetControlOffsetTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41461C958
		void SetConnectorSettingsByIndex(int32_t InElementIndex, FRigConnectorSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461C878
		void SetConnectorSettings(FRigElementKey InKey, FRigConnectorSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461C798
		bool SetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461C6B8
		bool SetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461C5D8
		void SendAutoKeyEvent(FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461C4F8
		TArray RestoreSocketsFromStates(TArray InStates, bool bSetupUndoRedo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461C418
		TArray RestoreConnectorsFromStates(TArray InStates, bool bSetupUndoRedo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461C338
		void ResetToDefault(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461C258
		void ResetPoseToInitial(ERigElementType InTypeFilter); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461C178
		void ResetCurveValues(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461C098
		void Reset(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461BFB8
		bool RemoveMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461BED8
		bool RemoveAllMetadata(FRigElementKey InItem); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461BDF8
		int32_t Num(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461BD18
		FRigControlValue MakeControlValueFromVector2D(FVector2D InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF41461BC38
		FRigControlValue MakeControlValueFromVector(FVector InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF41461BB58
		FRigControlValue MakeControlValueFromTransformNoScale(FTransformNoScale InValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41461BA78
		FRigControlValue MakeControlValueFromTransform(FTransform InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF41461B998
		FRigControlValue MakeControlValueFromRotator(FRotator InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF41461B8B8
		FRigControlValue MakeControlValueFromInt(int32_t InValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41461B7D8
		FRigControlValue MakeControlValueFromFloat(float InValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41461B6F8
		FRigControlValue MakeControlValueFromEulerTransform(FEulerTransform InValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41461B618
		FRigControlValue MakeControlValueFromBool(bool InValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41461B538
		bool IsValidIndex(int32_t InElementIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461B458
		bool IsSelectedByIndex(int32_t InIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461B378
		bool IsSelected(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461B298
		bool IsProcedural(FRigElementKey& InKey); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41461B1B8
		bool IsParentedTo(FRigElementKey InChild, FRigElementKey InParent); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461B0D8
		bool IsCurveValueSetByIndex(int32_t InElementIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461AFF8
		bool IsCurveValueSet(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461AF18
		bool IsControllerAvailable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461AE38
		bool HasTag(FRigElementKey InItem, FName InTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461AD58
		FVector GetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector DefaultValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41461AC78
		FVector GetVectorFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF41461AB98
		TArray GetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461AAB8
		FVector2D GetVector2DFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF41461A9D8
		FTransformNoScale GetTransformNoScaleFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41461A8F8
		FTransform GetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform DefaultValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41461A818
		FTransform GetTransformFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF41461A738
		TArray GetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461A658
		TArray GetTags(FRigElementKey InItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461A578
		TArray GetSocketStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461A498
		TArray GetSocketKeys(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461A3B8
		TArray GetSelectedKeys(ERigElementType InTypeFilter); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461A2D8
		UModularRigRuleManager GetRuleManager(bool bCreateIfNeeded); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461A1F8
		FRotator GetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator DefaultValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41461A118
		FRotator GetRotatorFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF41461A038
		TArray GetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414619F58
		TArray GetRootElementKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414619E78
		TArray GetRigidBodyKeys(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414619D98
		FRigElementKey GetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414619CB8
		TArray GetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414619BD8
		TArray GetReferenceKeys(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414619AF8
		FQuat GetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat DefaultValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414619A18
		TArray GetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414619938
		FRigElementKey GetPreviousParent(FRigElementKey& InKey); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414619858
		FName GetPreviousName(FRigElementKey& InKey); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414619778
		FRigPose GetPose(bool bInitial, bool bIncludeTransientControls); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414619698
		TArray GetParentWeightArray(FRigElementKey InChild, bool bInitial); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146195B8
		FRigElementWeight GetParentWeight(FRigElementKey InChild, FRigElementKey InParent, bool bInitial); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146194D8
		FTransform GetParentTransformByIndex(int32_t InElementIndex, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4146193F8
		FTransform GetParentTransform(FRigElementKey InKey, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414619318
		TArray GetParents(FRigElementKey InKey, bool bRecursive); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414619238
		int32_t GetNumberOfParents(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414619158
		TArray GetNullKeys(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414619078
		FName GetNameSpaceFName(FRigElementKey InItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414618F98
		FString GetNameSpace(FRigElementKey InItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414618EB8
		FName GetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414618DD8
		TArray GetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414618CF8
		FName GetModulePathFName(FRigElementKey InItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414618C18
		FString GetModulePath(FRigElementKey InItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414618B38
		ERigMetadataType GetMetadataType(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414618A58
		TArray GetMetadataNames(FRigElementKey InItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414618978
		FTransform GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414618898
		FTransform GetLocalTransform(FRigElementKey InKey, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4146187B8
		int32_t GetLocalIndex_ForBlueprint(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146186D8
		FTransform GetLocalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4146185F8
		FTransform GetLocalControlShapeTransform(FRigElementKey InKey, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414618518
		FLinearColor GetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor DefaultValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414618438
		TArray GetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414618358
		TArray GetKeys(TArray InElementIndices); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414618278
		FRigElementKey GetKey(int32_t InElementIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414618198
		int32_t GetIntFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4146180B8
		int32_t GetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32_t DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414617FD8
		TArray GetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414617EF8
		int32_t GetIndex_ForBlueprint(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414617E18
		FTransform GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414617D38
		FTransform GetGlobalTransform(FRigElementKey InKey, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414617C58
		FTransform GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414617B78
		FTransform GetGlobalControlShapeTransform(FRigElementKey InKey, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414617A98
		FTransform GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4146179B8
		FTransform GetGlobalControlOffsetTransform(FRigElementKey InKey, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4146178D8
		float GetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146177F8
		float GetFloatFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414617718
		TArray GetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414617638
		FRigElementKey GetFirstParent(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414617558
		FEulerTransform GetEulerTransformFromControlValue(FRigControlValue InValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414617478
		FRigElementKey GetDefaultParent(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414617398
		float GetCurveValueByIndex(int32_t InElementIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146172B8
		float GetCurveValue(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146171D8
		TArray GetCurveKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146170F8
		FRigControlValue GetControlValueByIndex(int32_t InElementIndex, ERigControlValueType InValueType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414617018
		FRigControlValue GetControlValue(FRigElementKey InKey, ERigControlValueType InValueType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414616F38
		FRotator GetControlPreferredRotatorByIndex(int32_t InElementIndex, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414616E58
		FRotator GetControlPreferredRotator(FRigElementKey InKey, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414616D78
		EEulerRotationOrder GetControlPreferredEulerRotationOrderByIndex(int32_t InElementIndex, bool bFromSettings); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414616C98
		EEulerRotationOrder GetControlPreferredEulerRotationOrder(FRigElementKey InKey, bool bFromSettings); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414616BB8
		FVector GetControlPreferredEulerAnglesByIndex(int32_t InElementIndex, EEulerRotationOrder InRotationOrder, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414616AD8
		FVector GetControlPreferredEulerAngles(FRigElementKey InKey, EEulerRotationOrder InRotationOrder, bool bInitial); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4146169F8
		URigHierarchyController GetController(bool bCreateIfNeeded); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414616918
		TArray GetControlKeys(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414616838
		TArray GetConnectorStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414616758
		TArray GetConnectorKeys(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414616678
		TArray GetChildren(FRigElementKey InKey, bool bRecursive); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414616598
		bool GetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146164B8
		TArray GetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146163D8
		TArray GetBoneKeys(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146162F8
		TArray GetAllKeys_ForBlueprint(bool bTraverse); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414616218
		FRigNullElement FindNull_ForBlueprintOnly(FRigElementKey& InKey); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414616138
		FRigControlElement FindControl_ForBlueprintOnly(FRigElementKey& InKey); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414616058
		FRigBoneElement FindBone_ForBlueprintOnly(FRigElementKey& InKey); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414615F78
		void CopyPose(URigHierarchy InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414615E98
		void CopyHierarchy(URigHierarchy InHierarchy); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414615DB8
		bool Contains_ForBlueprint(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414615CD8
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

		FControlRigReference SetControlRigClass(FControlRigReference& Node, UClass ControlRigClass); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41461F6D8
		void ConvertToControlRigPure(FAnimNodeReference& Node, FControlRigReference& ControlRig, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41461F5F8
		FControlRigReference ConvertToControlRig(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41461F518
	};


	// Class ControlRig.TransformableControlHandle
	// Inherited from UTransformableHandle -> UObject
	// Size: 0x28 (0x88 - 0x60)
	class UTransformableControlHandle : public UTransformableHandle	
	{
	public:
		TWeakObjectPtr ControlRig; // 0x60(0x20)
		FName ControlName; // 0x80(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x84(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY

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
		UClass ControlRigClass; // 0x4C8(0x8)
		FMulticastInlineDelegate OnPreInitializeDelegate; // 0x4D0(0x10)
		FMulticastInlineDelegate OnPostInitializeDelegate; // 0x4E0(0x10)
		FMulticastInlineDelegate OnPreConstructionDelegate; // 0x4F0(0x10)
		FMulticastInlineDelegate OnPostConstructionDelegate; // 0x500(0x10)
		FMulticastInlineDelegate OnPreForwardsSolveDelegate; // 0x510(0x10)
		FMulticastInlineDelegate OnPostForwardsSolveDelegate; // 0x520(0x10)
		TArray UserDefinedElements; // 0x530(0x10)
		TArray MappedElements; // 0x540(0x10)
		bool bEnableLazyEvaluation; // 0x550(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x551(0x3) UNKNOWN PROPERTY
		float LazyEvaluationPositionThreshold; // 0x554(0x4)
		float LazyEvaluationRotationThreshold; // 0x558(0x4)
		float LazyEvaluationScaleThreshold; // 0x55C(0x4)
		bool bResetTransformBeforeTick; // 0x560(0x1)
		bool bResetInitialsBeforeConstruction; // 0x561(0x1)
		bool bUpdateRigOnTick; // 0x562(0x1)
		bool bUpdateInEditor; // 0x563(0x1)
		bool bDrawBones; // 0x564(0x1)
		bool bShowDebugDrawing; // 0x565(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x566(0x2) UNKNOWN PROPERTY
		UControlRig ControlRig; // 0x568(0x8)
		unsigned char UnknownData05_7[0xC0]; // 0x570(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigComponent");
			return ret;
		}

		void Update(float DeltaTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414621FF8
		void SetObjectBinding(UObject InObjectToBind); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414621F18
		void SetMappedElements(TArray NewMappedElements); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414621E38
		void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414621D58
		void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414621C78
		void SetControlVector2D(FName ControlName, FVector2D Value); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414621B98
		void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414621AB8
		void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF4146219D8
		void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF4146218F8
		void SetControlRigClass(UClass InControlRigClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414621818
		void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414621738
		void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414621658
		void SetControlInt(FName ControlName, int32_t Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414621578
		void SetControlFloat(FName ControlName, float Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414621498
		void SetControlBool(FName ControlName, bool Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146213B8
		void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF4146212D8
		void SetBoneInitialTransformsFromSkeletalMesh(USkeletalMesh InSkeletalMesh); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146211F8
		void OnPreInitialize(UControlRigComponent Component); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414621118
		void OnPreForwardsSolve(UControlRigComponent Component); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414621038
		void OnPreConstruction(UControlRigComponent Component); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414620F58
		void OnPostInitialize(UControlRigComponent Component); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414620E78
		void OnPostForwardsSolve(UControlRigComponent Component); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414620D98
		void OnPostConstruction(UControlRigComponent Component); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414620CB8
		void Initialize(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414620BD8
		FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414620AF8
		FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414620A18
		FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414620938
		TArray GetElementNames(ERigElementType ElementType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414620858
		FVector2D GetControlVector2D(FName ControlName); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414620778
		FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414620698
		FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4146205B8
		FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4146204D8
		UControlRig GetControlRig(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4146203F8
		FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414620318
		FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414620238
		int32_t GetControlInt(FName ControlName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414620158
		float GetControlFloat(FName ControlName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414620078
		bool GetControlBool(FName ControlName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF41461FF98
		FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41461FEB8
		float GetAbsoluteTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41461FDD8
		bool DoesElementExist(FName Name, ERigElementType ElementType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF41461FCF8
		void ClearMappedElements(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461FC18
		bool CanExecute(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF41461FB38
		void AddMappedSkeletalMesh(USkeletalMeshComponent SkeletalMeshComponent, TArray Bones, TArray Curves, EControlRigComponentMapDirection InDirection); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461FA58
		void AddMappedElements(TArray NewMappedElements); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461F978
		void AddMappedComponents(TArray Components); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461F898
		void AddMappedCompleteSkeletalMesh(USkeletalMeshComponent SkeletalMeshComponent, EControlRigComponentMapDirection InDirection); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41461F7B8
	};


	// Class ControlRig.ControlRigControlActor
	// Inherited from AActor -> UObject
	// Size: 0xA8 (0x338 - 0x290)
	class AControlRigControlActor : public AActor	
	{
	public:
		AActor ActorToTrack; // 0x290(0x8)
		UClass ControlRigClass; // 0x298(0x8)
		bool bRefreshOnTick; // 0x2A0(0x1)
		bool bIsSelectable; // 0x2A1(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x2A2(0x6) UNKNOWN PROPERTY
		UMaterialInterface MaterialOverride; // 0x2A8(0x8)
		FString ColorParameter; // 0x2B0(0x10)
		bool bCastShadows; // 0x2C0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x2C1(0x7) UNKNOWN PROPERTY
		USceneComponent ActorRootComponent; // 0x2C8(0x8)
		TWeakObjectPtr ControlRig; // 0x2D0(0x20)
		TArray ControlNames; // 0x2F0(0x10)
		TArray ShapeTransforms; // 0x300(0x10)
		TArray Components; // 0x310(0x10)
		TArray Materials; // 0x320(0x10)
		FName ColorParameterName; // 0x330(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x334(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigControlActor");
			return ret;
		}

		void ResetControlActor(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414622298
		void Refresh(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146221B8
		void Clear(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146220D8
	};


	// Class ControlRig.ControlRigShapeActor
	// Inherited from AActor -> UObject
	// Size: 0xB0 (0x340 - 0x290)
	class AControlRigShapeActor : public AActor	
	{
	public:
		USceneComponent ActorRootComponent; // 0x290(0x8)
		UStaticMeshComponent StaticMeshComponent; // 0x298(0x8)
		uint32_t ControlRigIndex; // 0x2A0(0x4)
		TWeakObjectPtr ControlRig; // 0x2A4(0x8)
		FName ControlName; // 0x2AC(0x4)
		FName ShapeName; // 0x2B0(0x4)
		FName ColorParameterName; // 0x2B4(0x4)
		unsigned char UnknownData02_6[0x78]; // 0x2B8(0x78) UNKNOWN PROPERTY
		bool bSelected : 1; // 0x330:0(0x1)
		bool bHovered : 1; // 0x330:1(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x331(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigShapeActor");
			return ret;
		}

		void SetSelected(bool bInSelected); // Flags: Native|Public|BlueprintCallable 0x7FF414622ED8
		void SetSelectable(bool bInSelectable); // Flags: Native|Public|BlueprintCallable 0x7FF414622DF8
		void SetHovered(bool bInHovered); // Flags: Native|Public|BlueprintCallable 0x7FF414622D18
		void SetGlobalTransform(FTransform& InTransform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414622C38
		void SetEnabled(bool bInEnabled); // Flags: Native|Public|BlueprintCallable 0x7FF414622B58
		void OnTransformChanged(FTransform& NewTransform); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414622A78
		void OnSelectionChanged(bool bIsSelected); // Flags: Event|Public|BlueprintEvent 0x7FF414622998
		void OnManipulatingChanged(bool bIsManipulating); // Flags: Event|Public|BlueprintEvent 0x7FF4146228B8
		void OnHoveredChanged(bool bIsSelected); // Flags: Event|Public|BlueprintEvent 0x7FF4146227D8
		void OnEnabledChanged(bool bIsEnabled); // Flags: Event|Public|BlueprintEvent 0x7FF4146226F8
		bool IsSelectedInEditor(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414622618
		bool IsHovered(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414622538
		bool IsEnabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414622458
		FTransform GetGlobalTransform(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414622378
	};


	// Class ControlRig.ControlRigShapeLibrary
	// Inherited from UObject
	// Size: 0x118 (0x140 - 0x28)
	class UControlRigShapeLibrary : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FControlRigShapeDefinition DefaultShape; // 0x30(0xA0)
		TWeakObjectPtr DefaultMaterial; // 0xD0(0x20)
		TWeakObjectPtr XRayMaterial; // 0xF0(0x20)
		FName MaterialColorParameter; // 0x110(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x114(0x4) UNKNOWN PROPERTY
		TArray Shapes; // 0x118(0x10)
		unsigned char UnknownData05_7[0x18]; // 0x128(0x18) UNKNOWN PROPERTY

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
		TArray InputFrames; // 0xD0(0x10)
		TArray OutputFrames; // 0xE0(0x10)
		TArray FramesToSkip; // 0xF0(0x10)
		double Tolerance; // 0x100(0x8)
		unsigned char UnknownData01_7[0x40]; // 0x108(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigTestData");
			return ret;
		}

		bool SetupReplay(UControlRig InControlRig, bool bGroundTruth); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146236B8
		void ReleaseReplay(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146235D8
		bool Record(UControlRig InControlRig, double InRecordingDuration); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146234F8
		bool IsReplaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414623418
		bool IsRecording(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414623338
		FVector2D GetTimeRange(bool bInput); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414623258
		EControlRigTestDataPlaybackMode GetPlaybackMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414623178
		int32_t GetFrameIndexForTime(double InSeconds, bool bInput); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414623098
		UControlRigTestData CreateNewAsset(FString InDesiredPackagePath, FString InBlueprintPathName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414622FB8
	};


	// Class ControlRig.ControlRigValidator
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UControlRigValidator : public UObject	
	{
	public:
		TArray Passes; // 0x28(0x10)
		unsigned char UnknownData01_7[0x30]; // 0x38(0x30) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x28]; // 0x28(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ModularRigController");
			return ret;
		}

		bool UnBindModuleVariable(FString InModulePath, FName& InVariableName, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414624598
		bool SwapModulesOfClass(UClass InOldClass, UClass InNewClass, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146244B8
		bool SwapModuleClass(FString InModulePath, UClass InNewClass, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146243D8
		bool SetModuleShortName(FString InModulePath, FString InNewShortName, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146242F8
		bool SetConfigValueInModule(FString InModulePath, FName& InVariableName, FString InValue, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414624218
		FString ReparentModule(FString InModulePath, FString InNewParentModulePath, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414624138
		FString RenameModule(FString InModulePath, FName& InNewName, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414624058
		FString MirrorModule(FString InModulePath, FRigVMMirrorSettings& InSettings, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414623F78
		TArray DisconnectCyclicConnectors(bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414623E98
		bool DisconnectConnector(FRigElementKey& InConnectorKey, bool bDisconnectSubModules, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414623DB8
		bool DeleteModule(FString InModulePath, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414623CD8
		bool ConnectConnectorToElement(FRigElementKey& InConnectorKey, FRigElementKey& InTargetKey, bool bSetupUndo, bool bAutoResolveOtherConnectors, bool bCheckValidConnection); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414623BF8
		bool CanConnectConnectorToElement(FRigElementKey& InConnectorKey, FRigElementKey& InTargetKey, FText& OutErrorMessage); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414623B18
		bool BindModuleVariable(FString InModulePath, FName& InVariableName, FString InSourcePath, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414623A38
		bool AutoConnectSecondaryConnectors(TArray& InConnectorKeys, bool bReplaceExistingConnections, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414623958
		bool AutoConnectModules(TArray& InModulePaths, bool bReplaceExistingConnections, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414623878
		FString AddModule(FName& InModuleName, UClass InClass, FString InParentModulePath, bool bSetupUndo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414623798
	};


	// Class ControlRig.ModularRigRuleManager
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UModularRigRuleManager : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x10]; // 0xAA0(0x10) UNKNOWN PROPERTY

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
		TArray IsControlActive; // 0xAA0(0x10)
		EControlRigFKRigExecuteMode ApplyMode; // 0xAB0(0x1)
		unsigned char UnknownData01_7[0x2F]; // 0xAB1(0x2F) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x67]; // 0x29(0x67) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.RigHierarchyController");
			return ret;
		}

		bool SetSelection(TArray& InKeys, bool bPrintPythonCommand); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146260B8
		bool SetParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414625FD8
		void SetHierarchy(URigHierarchy InHierarchy); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414625EF8
		FName SetDisplayName(FRigElementKey InControl, FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414625E18
		bool SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414625D38
		bool SelectElement(FRigElementKey InKey, bool bSelect, bool bClearSelection); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414625C58
		bool ReorderElement(FRigElementKey InElement, int32_t InIndex, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414625B78
		FRigElementKey RenameElement(FRigElementKey InElement, FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414625A98
		bool RemoveParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146259B8
		bool RemoveElement(FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146258D8
		bool RemoveAllParents(FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146257F8
		TArray MirrorElements(TArray InKeys, FRigVMMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414625718
		TArray ImportFromText(FString InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414625638
		TArray ImportCurves(USkeleton InSkeleton, FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414625558
		TArray ImportBones(USkeleton InSkeleton, FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414625478
		URigHierarchy GetHierarchy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414625398
		FRigControlSettings GetControlSettings(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146252B8
		FString ExportToText(TArray InKeys); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146251D8
		FString ExportSelectionToText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146250F8
		TArray DuplicateElements(TArray InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414625018
		bool DeselectElement(FRigElementKey InKey); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414624F38
		bool ClearSelection(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414624E58
		FRigElementKey AddSocket(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, FLinearColor& InColor, FString InDescription, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414624D78
		FRigElementKey AddRigidBody(FName InName, FRigElementKey InParent, FRigRigidBodySettings InSettings, FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414624C98
		bool AddParent(FRigElementKey InChild, FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414624BB8
		FRigElementKey AddNull(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414624AD8
		FRigElementKey AddCurve(FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146249F8
		FRigElementKey AddControl_ForBlueprint(FName InName, FRigElementKey InParent, FRigControlSettings InSettings, FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414624918
		FRigElementKey AddConnector(FName InName, FRigConnectorSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414624838
		FRigElementKey AddBone(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414624758
		FRigElementKey AddAnimationChannel_ForBlueprint(FName InName, FRigElementKey InParentControl, FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414624678
	};


	// Class ControlRig.ControlRigLayerInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x8 (0x3C0 - 0x3B8)
	class UControlRigLayerInstance : public UAnimInstance	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData03_3[0x48]; // 0x158(0x48) UNKNOWN PROPERTY
		UControlRig ControlRig; // 0x1A0(0x8)
		UClass ControlRigClass; // 0x1A8(0x8)
		TArray ControlsMask; // 0x1B0(0x10)
		FMovieSceneTransformMask TransformMask; // 0x1C0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		FMovieSceneFloatChannel Weight; // 0x1C8(0x110)
		TMap ControlChannelMap; // 0x2D8(0x50)
		TArray EnumParameterNamesAndCurves; // 0x328(0x10)
		TArray IntegerParameterNamesAndCurves; // 0x338(0x10)
		TArray SpaceChannels; // 0x348(0x10)
		TArray ConstraintsChannels; // 0x358(0x10)
		unsigned char UnknownData05_7[0x68]; // 0x368(0x68) UNKNOWN PROPERTY

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
		unsigned char UnknownData03_3[0x40]; // 0x98(0x40) UNKNOWN PROPERTY
		UControlRig ControlRig; // 0xD8(0x8)
		UMovieSceneSection SectionToKey; // 0xE0(0x8)
		TArray Sections; // 0xE8(0x10)
		FName TrackName; // 0xF8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		TMap ControlsRotationOrder; // 0x100(0x50)
		int32_t PriorityOrder; // 0x150(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x154(0x4) UNKNOWN PROPERTY
		TMap GameWorldControlRigs; // 0x158(0x50)

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

		void SelectControls(UControlRig InControlRig, bool bDoMirror); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146266D8
		void SavePose(UControlRig InControlRig, bool bUseAll); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146265F8
		void ReplaceControlName(FName& CurrentName, FName& NewName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414626518
		void PastePose(UControlRig InControlRig, bool bDoKey, bool bDoMirror); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414626438
		void GetCurrentPose(UControlRig InControlRig, FControlRigControlPose& OutPose); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414626358
		TArray GetControlNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414626278
		bool DoesMirrorMatch(UControlRig ControlRig, FName& ControlName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414626198
	};


	// Class ControlRig.ControlRigPoseMirrorSettings
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UControlRigPoseMirrorSettings : public UObject	
	{
	public:
		FString RightSide; // 0x28(0x10)
		FString LeftSide; // 0x38(0x10)
		TEnumAsByte MirrorAxis; // 0x48(0x1)
		TEnumAsByte AxisToFlip; // 0x49(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY

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
		TArray RootSaveDirs; // 0x28(0x10)

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
		URigHierarchy Hierarchy; // 0x98(0x8)
		TArray Selection; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigWorkflowOptions");
			return ret;
		}

		bool EnsureAtLeastOneRigElementSelected(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146267B8
	};


	// Class ControlRig.ControlRigTransformWorkflowOptions
	// Inherited from UControlRigWorkflowOptions -> URigVMUserWorkflowOptions -> UObject
	// Size: 0x8 (0xB8 - 0xB0)
	class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions	
	{
	public:
		TEnumAsByte TransformType; // 0xB0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigTransformWorkflowOptions");
			return ret;
		}

		TArray ProvideWorkflows(UObject InSubject); // Flags: Final|Native|Public 0x7FF414626898
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
		unsigned char UnknownData02_6[0x1]; // 0x2B(0x1) UNKNOWN PROPERTY
		float TranslationPrecision; // 0x2C(0x4)
		float RotationPrecision; // 0x30(0x4)
		float ScalePrecision; // 0x34(0x4)
		float CurvePrecision; // 0x38(0x4)
		FName EventNameA; // 0x3C(0x4)
		FName EventNameB; // 0x40(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FRigPose Pose; // 0x48(0x70)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ControlRig.ControlRigNumericalValidationPass");
			return ret;
		}
	};

}
