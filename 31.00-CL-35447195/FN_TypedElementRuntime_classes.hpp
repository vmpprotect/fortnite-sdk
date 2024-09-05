#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TypedElementRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class TypedElementRuntime.TypedElementSelectionSetLibrary
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTypedElementSelectionSetLibrary : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementRuntime.TypedElementSelectionSetLibrary");
			return ret;
		}

		bool SetSelectionFromList(UTypedElementSelectionSet SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionOptions SelectionOptions); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414495738
		bool SelectElementsFromList(UTypedElementSelectionSet SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionOptions SelectionOptions); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414495658
		FScriptTypedElementListProxy GetNormalizedSelection(UTypedElementSelectionSet SelectionSet, FTypedElementSelectionNormalizationOptions NormalizationOptions); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414495578
		FScriptTypedElementListProxy GetNormalizedElementList(UTypedElementSelectionSet SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionNormalizationOptions NormalizationOptions); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414495498
		bool DeselectElementsFromList(UTypedElementSelectionSet SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionOptions SelectionOptions); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4144953B8
	};


	// Class TypedElementRuntime.TypedElementSelectionSet
	// Inherited from UObject
	// Size: 0x878 (0x8A0 - 0x28)
	class UTypedElementSelectionSet : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x800]; // 0x28(0x800) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPreSelectionChange; // 0x828(0x10)
		FMulticastInlineDelegate OnSelectionChange; // 0x838(0x10)
		unsigned char UnknownData03_7[0x58]; // 0x848(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementRuntime.TypedElementSelectionSet");
			return ret;
		}

		bool SetSelection(TArray& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41101F3B0
		bool SelectElements(TArray& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41101F2D0
		bool SelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41101F1F0
		void RestoreSelectionState(FTypedElementSelectionSetState& InSelectionState); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41101F110
		void OnPreChangeDynamic__DelegateSignature(UTypedElementSelectionSet SelectionSet); // Flags: MulticastDelegate|Public|Delegate 0x7FF41101F030
		void OnChangeDynamic__DelegateSignature(UTypedElementSelectionSet SelectionSet); // Flags: MulticastDelegate|Public|Delegate 0x7FF41101EF50
		TArray K2_GetSelectedElementHandles(UClass InBaseInterfaceType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF41101EE70
		bool IsElementSelected(FScriptTypedElementHandle& InElementHandle, FTypedElementIsSelectedOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41101ECD0
		bool HasSelectedObjects(UClass InRequiredClass); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF41101EBF0
		bool HasSelectedElements(UClass InBaseInterfaceType); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF41101EB10
		UObject GetTopSelectedObject(UClass InRequiredClass); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41101EA30
		FScriptTypedElementHandle GetSelectionElement(FScriptTypedElementHandle& InElementHandle, ETypedElementSelectionMethod InSelectionMethod); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41101E8E8
		TArray GetSelectedObjects(UClass InRequiredClass); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF41101E808
		int32_t GetNumSelectedElements(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41101E728
		FTypedElementSelectionSetState GetCurrentSelectionState(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41101E588
		UObject GetBottomSelectedObject(UClass InRequiredClass); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41101E4A8
		bool DeselectElements(TArray& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41101E3C8
		bool DeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41101E2E8
		int32_t CountSelectedObjects(UClass InRequiredClass); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF41101E208
		int32_t CountSelectedElements(UClass InBaseInterfaceType); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF41101E128
		bool ClearSelection(FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41101E048
		bool CanSelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41101DF68
		bool CanDeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41101DD60
		bool AllowSelectionModifiers(FScriptTypedElementHandle& InElementHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41101DBC0
	};


	// Class TypedElementRuntime.TypedElementAssetDataInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTypedElementAssetDataInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementRuntime.TypedElementAssetDataInterface");
			return ret;
		}

		FAssetData GetAssetData(FScriptTypedElementHandle& InElementHandle); // Flags: RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4144958F8
		TArray GetAllReferencedAssetDatas(FScriptTypedElementHandle& InElementHandle); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414495818
	};


	// Class TypedElementRuntime.TypedElementHierarchyInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTypedElementHierarchyInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementRuntime.TypedElementHierarchyInterface");
			return ret;
		}

		FScriptTypedElementHandle GetParentElement(FScriptTypedElementHandle& InElementHandle, bool bAllowCreate); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414495AB8
		void GetChildElements(FScriptTypedElementHandle& InElementHandle, TArray& OutElementHandles, bool bAllowCreate); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144959D8
	};


	// Class TypedElementRuntime.TypedElementObjectInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTypedElementObjectInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementRuntime.TypedElementObjectInterface");
			return ret;
		}

		UClass GetObjectClass(FScriptTypedElementHandle& InElementHandle); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414495C78
		UObject GetObject(FScriptTypedElementHandle& InElementHandle); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414495B98
	};


	// Class TypedElementRuntime.TypedElementPrimitiveCustomDataInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTypedElementPrimitiveCustomDataInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementRuntime.TypedElementPrimitiveCustomDataInterface");
			return ret;
		}

		void SetCustomDataValue(FScriptTypedElementHandle& InElementHandle, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414495E38
		void SetCustomData(FScriptTypedElementHandle& InElementHandle, TArray& CustomDataFloats, bool bMarkRenderStateDirty); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414495D58
	};


	// Class TypedElementRuntime.TypedElementSelectionInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTypedElementSelectionInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementRuntime.TypedElementSelectionInterface");
			return ret;
		}

		bool SelectElement(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, FTypedElementSelectionOptions& InSelectionOptions); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414496458
		bool IsElementSelected(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, FTypedElementIsSelectedOptions& InSelectionOptions); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414496378
		FScriptTypedElementHandle GetSelectionElement(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InCurrentSelection, ETypedElementSelectionMethod InSelectionMethod); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414496298
		bool DeselectElement(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, FTypedElementSelectionOptions& InSelectionOptions); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144961B8
		bool CanSelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions& InSelectionOptions); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144960D8
		bool CanDeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions& InSelectionOptions); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414495FF8
		bool AllowSelectionModifiers(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414495F18
	};

}
