#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TypedElementFramework
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void Release(FScriptTypedElementHandle& ElementHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414493C18
		bool NotEqual(FScriptTypedElementHandle& LHS, FScriptTypedElementHandle& RHS); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414493B38
		bool IsSet(FScriptTypedElementHandle& ElementHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414493A58
		bool Equal(FScriptTypedElementHandle& LHS, FScriptTypedElementHandle& RHS); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414493978
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

		void Shrink(FScriptTypedElementListProxy ElementList); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414494D98
		void Reset(FScriptTypedElementListProxy ElementList); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414494CB8
		void Reserve(FScriptTypedElementListProxy ElementList, int32_t Size); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414494BD8
		bool Remove(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414494AF8
		int32_t Num(FScriptTypedElementListProxy ElementList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414494A18
		bool IsValidIndex(FScriptTypedElementListProxy ElementList, int32_t Index); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414494938
		bool HasElementsOfType(FScriptTypedElementListProxy ElementList, FName ElementTypeName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414494858
		bool HasElements(FScriptTypedElementListProxy ElementList, UClass BaseInterfaceType); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414494778
		UObject GetElementInterface(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle, UClass BaseInterfaceType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414494698
		TArray GetElementHandles(FScriptTypedElementListProxy ElementList, UClass BaseInterfaceType); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4144945B8
		FScriptTypedElementHandle GetElementHandleAt(FScriptTypedElementListProxy ElementList, int32_t Index); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144944D8
		void Empty(FScriptTypedElementListProxy ElementList, int32_t Slack); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4144943F8
		FScriptTypedElementListProxy CreateScriptElementList(UTypedElementRegistry Registry); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414494318
		int32_t CountElementsOfType(FScriptTypedElementListProxy ElementList, FName ElementTypeName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414494238
		int32_t CountElements(FScriptTypedElementListProxy ElementList, UClass BaseInterfaceType); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414494158
		bool Contains(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414494078
		FScriptTypedElementListProxy Clone(FScriptTypedElementListProxy ElementList); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414493F98
		void AppendList(FScriptTypedElementListProxy ElementList, FScriptTypedElementListProxy OtherElementList); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414493EB8
		void Append(FScriptTypedElementListProxy ElementList, TArray& ElementHandles); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414493DD8
		bool Add(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414493CF8
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
		unsigned char UnknownData01_1[0x950]; // 0x28(0x950) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TypedElementRegistry");
			return ret;
		}

		UTypedElementRegistry GetInstance(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414494F58
		UObject GetElementInterface(FScriptTypedElementHandle& InElementHandle, UClass InBaseInterfaceType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414494E78
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

		bool SetDisplayName(FScriptTypedElementHandle& InElementHandle, FText InNewName, bool bNotify); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414495118
		FText GetDisplayName(FScriptTypedElementHandle& InElementHandle); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414495038
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

		bool MarkAsTested(FScriptTypedElementHandle& InElementHandle); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4144951F8
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

		bool GetIsTested(FScriptTypedElementHandle& InElementHandle); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4144952D8
	};


	// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UTestTypedElementInterfaceA_ImplTyped : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TypedElementFramework.TestTypedElementInterfaceBAndC_Typed");
			return ret;
		}
	};

}
