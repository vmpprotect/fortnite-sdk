#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseNative
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VerseNative.VerseClassBase
	// Inherited from UVerseVMClass -> UClass -> UStruct -> UField -> UObject
	// Size: 0x0 (0x200 - 0x200)
	class UVerseClassBase : public UVerseVMClass	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseNative.VerseClassBase");
			return ret;
		}
	};


	// Class VerseNative.VersePersistentVarWeakMapKey
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVersePersistentVarWeakMapKey : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseNative.VersePersistentVarWeakMapKey");
			return ret;
		}
	};


	// Class VerseNative.SolarisProfilingLibrary
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USolarisProfilingLibrary : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseNative.SolarisProfilingLibrary");
			return ret;
		}

		void EndProfileBlock(FSolarisProfilingData Data, int64_t UserTag); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0D296C(relative to base address)
		FSolarisProfilingData BeginProfileBlock(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0D292C(relative to base address)
	};


	// Class VerseNative.VerseAsset
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UVerseAsset : public UObject	
	{
	public:
		UClass* AssetClass; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseNative.VerseAsset");
			return ret;
		}
	};


	// Class VerseNative.VerseStmLibrary
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseStmLibrary : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseNative.VerseStmLibrary");
			return ret;
		}

		void StmSave(FakeType& Property); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D0D3228(relative to base address)
		void StmRollback(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0D3028(relative to base address)
		void StmLeaveFrame(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74923019C(relative to base address)
		void StmEnterFrame(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74956E02C(relative to base address)
		void StmEnabled(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF749409270(relative to base address)
		void StmCommit(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0D2BC0(relative to base address)
		void StmBegin(); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D0D2BAC(relative to base address)
	};

}
