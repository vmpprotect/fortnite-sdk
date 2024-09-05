#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TypedElementRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		bool SetSelectionFromList(UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionOptions SelectionOptions); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BC28648(relative to base address)
		bool SelectElementsFromList(UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionOptions SelectionOptions); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BC27CD0(relative to base address)
		FScriptTypedElementListProxy GetNormalizedSelection(UTypedElementSelectionSet* SelectionSet, FTypedElementSelectionNormalizationOptions NormalizationOptions); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC265C4(relative to base address)
		FScriptTypedElementListProxy GetNormalizedElementList(UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionNormalizationOptions NormalizationOptions); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC2630C(relative to base address)
		bool DeselectElementsFromList(UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionOptions SelectionOptions); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BC25BD0(relative to base address)
	};


	// Class TypedElementRuntime.TypedElementSelectionSet
	// Inherited from UObject
	// Size: 0x878 (0x8A0 - 0x28)
	class UTypedElementSelectionSet : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x800]; // 0x28(0x800) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPreSelectionChange; // 0x828(0x10)
		FMulticastInlineDelegate OnSelectionChange; // 0x838(0x10)
		unsigned char UnknownData01_7[0x58]; // 0x848(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementRuntime.TypedElementSelectionSet");
			return ret;
		}

		bool SetSelection(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC284AC(relative to base address)
		bool SelectElements(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC27B34(relative to base address)
		bool SelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC27984(relative to base address)
		void RestoreSelectionState(FTypedElementSelectionSetState& InSelectionState); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC27688(relative to base address)
		void OnPreChangeDynamic__DelegateSignature(UTypedElementSelectionSet* SelectionSet); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnChangeDynamic__DelegateSignature(UTypedElementSelectionSet* SelectionSet); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TArray K2_GetSelectedElementHandles(UClass* InBaseInterfaceType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74BC275CC(relative to base address)
		bool IsElementSelected(FScriptTypedElementHandle& InElementHandle, FTypedElementIsSelectedOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BC27440(relative to base address)
		bool HasSelectedObjects(UClass* InRequiredClass); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74BC27168(relative to base address)
		bool HasSelectedElements(UClass* InBaseInterfaceType); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74BC2706C(relative to base address)
		UObject GetTopSelectedObject(UClass* InRequiredClass); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BC26FA0(relative to base address)
		FScriptTypedElementHandle GetSelectionElement(FScriptTypedElementHandle& InElementHandle, ETypedElementSelectionMethod InSelectionMethod); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BC26E14(relative to base address)
		TArray GetSelectedObjects(UClass* InRequiredClass); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74BC26A3C(relative to base address)
		int32_t GetNumSelectedElements(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BC26724(relative to base address)
		FTypedElementSelectionSetState GetCurrentSelectionState(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BC262D0(relative to base address)
		UObject GetBottomSelectedObject(UClass* InRequiredClass); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BC2602C(relative to base address)
		bool DeselectElements(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC25A34(relative to base address)
		bool DeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC25884(relative to base address)
		int32_t CountSelectedObjects(UClass* InRequiredClass); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74BC25594(relative to base address)
		int32_t CountSelectedElements(UClass* InBaseInterfaceType); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74BC254EC(relative to base address)
		bool ClearSelection(FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BC253AC(relative to base address)
		bool CanSelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BC251FC(relative to base address)
		bool CanDeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BC24F30(relative to base address)
		bool AllowSelectionModifiers(FScriptTypedElementHandle& InElementHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BC24D24(relative to base address)
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

		FAssetData GetAssetData(FScriptTypedElementHandle& InElementHandle); // Flags: RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74BC25F60(relative to base address)
		TArray GetAllReferencedAssetDatas(FScriptTypedElementHandle& InElementHandle); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC25E94(relative to base address)
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

		FScriptTypedElementHandle GetParentElement(FScriptTypedElementHandle& InElementHandle, bool bAllowCreate); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC268A8(relative to base address)
		void GetChildElements(FScriptTypedElementHandle& InElementHandle, TArray<FScriptTypedElementHandle>& OutElementHandles, bool bAllowCreate); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC260F8(relative to base address)
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

		UClass GetObjectClass(FScriptTypedElementHandle& InElementHandle); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC267F4(relative to base address)
		UObject GetObject(FScriptTypedElementHandle& InElementHandle); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC26740(relative to base address)
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

		void SetCustomDataValue(FScriptTypedElementHandle& InElementHandle, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC281AC(relative to base address)
		void SetCustomData(FScriptTypedElementHandle& InElementHandle, TArray<float>& CustomDataFloats, bool bMarkRenderStateDirty); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC27F94(relative to base address)
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

		bool SelectElement(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, FTypedElementSelectionOptions& InSelectionOptions); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC27724(relative to base address)
		bool IsElementSelected(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, FTypedElementIsSelectedOptions& InSelectionOptions); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC271F8(relative to base address)
		FScriptTypedElementHandle GetSelectionElement(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InCurrentSelection, ETypedElementSelectionMethod InSelectionMethod); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC26B24(relative to base address)
		bool DeselectElement(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, FTypedElementSelectionOptions& InSelectionOptions); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC25624(relative to base address)
		bool CanSelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions& InSelectionOptions); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC250E0(relative to base address)
		bool CanDeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions& InSelectionOptions); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC24E14(relative to base address)
		bool AllowSelectionModifiers(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC24AFC(relative to base address)
	};

}
