#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TypedElementFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class TypedElementFramework.TypedElementDataStorageCompatibilityInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTypedElementDataStorageCompatibilityInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TypedElementDataStorageCompatibilityInterface");
			return ret;
		}
	};


	// Class TypedElementFramework.TypedElementDataStorageFactory
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTypedElementDataStorageFactory : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TypedElementDataStorageFactory");
			return ret;
		}
	};


	// Class TypedElementFramework.TypedElementDataStorageInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTypedElementDataStorageInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TypedElementDataStorageInterface");
			return ret;
		}
	};


	// Class TypedElementFramework.TypedElementDataStorageUiInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTypedElementDataStorageUiInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TypedElementDataStorageUiInterface");
			return ret;
		}
	};


	// Class TypedElementFramework.TypedElementHandleLibrary
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTypedElementHandleLibrary : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TypedElementHandleLibrary");
			return ret;
		}

		void Release(FScriptTypedElementHandle& ElementHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC1E8B4(relative to base address)
		bool NotEqual(FScriptTypedElementHandle& LHS, FScriptTypedElementHandle& RHS); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC1E5EC(relative to base address)
		bool IsSet(FScriptTypedElementHandle& ElementHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC1E1D8(relative to base address)
		bool Equal(FScriptTypedElementHandle& LHS, FScriptTypedElementHandle& RHS); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC1D058(relative to base address)
	};


	// Class TypedElementFramework.TypedElementListLibrary
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTypedElementListLibrary : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TypedElementListLibrary");
			return ret;
		}

		void Shrink(FScriptTypedElementListProxy ElementList); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BC1F1E4(relative to base address)
		void Reset(FScriptTypedElementListProxy ElementList); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BC1EDD8(relative to base address)
		void Reserve(FScriptTypedElementListProxy ElementList, int32_t Size); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BC1EB70(relative to base address)
		bool Remove(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC1E958(relative to base address)
		int32_t Num(FScriptTypedElementListProxy ElementList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC1E718(relative to base address)
		bool IsValidIndex(FScriptTypedElementListProxy ElementList, int32_t Index); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC1E288(relative to base address)
		bool HasElementsOfType(FScriptTypedElementListProxy ElementList, FName ElementTypeName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BC1DF64(relative to base address)
		bool HasElements(FScriptTypedElementListProxy ElementList, UClass* BaseInterfaceType); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BC1DCE0(relative to base address)
		UObject GetElementInterface(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle, UClass* BaseInterfaceType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC1D768(relative to base address)
		TArray GetElementHandles(FScriptTypedElementListProxy ElementList, UClass* BaseInterfaceType); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BC1D4CC(relative to base address)
		FScriptTypedElementHandle GetElementHandleAt(FScriptTypedElementListProxy ElementList, int32_t Index); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC1D250(relative to base address)
		void Empty(FScriptTypedElementListProxy ElementList, int32_t Slack); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BC1CDF0(relative to base address)
		FScriptTypedElementListProxy CreateScriptElementList(UTypedElementRegistry* Registry); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BC1CD48(relative to base address)
		int32_t CountElementsOfType(FScriptTypedElementListProxy ElementList, FName ElementTypeName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BC1CAD4(relative to base address)
		int32_t CountElements(FScriptTypedElementListProxy ElementList, UClass* BaseInterfaceType); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BC1C850(relative to base address)
		bool Contains(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC1C638(relative to base address)
		FScriptTypedElementListProxy Clone(FScriptTypedElementListProxy ElementList); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BC1C484(relative to base address)
		void AppendList(FScriptTypedElementListProxy ElementList, FScriptTypedElementListProxy OtherElementList); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BC1C19C(relative to base address)
		void Append(FScriptTypedElementListProxy ElementList, TArray<FScriptTypedElementHandle>& ElementHandles); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC1BFA4(relative to base address)
		bool Add(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC1BD8C(relative to base address)
	};


	// Class TypedElementFramework.TypedElementCounterInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTypedElementCounterInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TypedElementCounterInterface");
			return ret;
		}
	};


	// Class TypedElementFramework.TypedElementRegistry
	// Inherited from UObject
	// Size: 0x950 (0x978 - 0x28)
	class UTypedElementRegistry : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x950]; // 0x28(0x950) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TypedElementRegistry");
			return ret;
		}

		UTypedElementRegistry GetInstance(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC1DC04(relative to base address)
		UObject GetElementInterface(FScriptTypedElementHandle& InElementHandle, UClass* InBaseInterfaceType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BC1DA54(relative to base address)
	};


	// Class TypedElementFramework.TestTypedElementInterfaceA
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTestTypedElementInterfaceA : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TestTypedElementInterfaceA");
			return ret;
		}

		bool SetDisplayName(FScriptTypedElementHandle& InElementHandle, FText InNewName, bool bNotify); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC1EF70(relative to base address)
		FText GetDisplayName(FScriptTypedElementHandle& InElementHandle); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC1D184(relative to base address)
	};


	// Class TypedElementFramework.TestTypedElementInterfaceB
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTestTypedElementInterfaceB : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TestTypedElementInterfaceB");
			return ret;
		}

		bool MarkAsTested(FScriptTypedElementHandle& InElementHandle); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC1DC2C(relative to base address)
	};


	// Class TypedElementFramework.TestTypedElementInterfaceC
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTestTypedElementInterfaceC : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TestTypedElementInterfaceC");
			return ret;
		}

		bool GetIsTested(FScriptTypedElementHandle& InElementHandle); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BC1DC2C(relative to base address)
	};


	// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UTestTypedElementInterfaceA_ImplTyped : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TestTypedElementInterfaceA_ImplTyped");
			return ret;
		}
	};


	// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UTestTypedElementInterfaceA_ImplUntyped : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped");
			return ret;
		}
	};


	// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UTestTypedElementInterfaceBAndC_Typed : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TestTypedElementInterfaceBAndC_Typed");
			return ret;
		}
	};

}
