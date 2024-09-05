#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseNative
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void EndProfileBlock(FSolarisProfilingData Data, int64_t UserTag); // Flags: Final|Native|Static|Public 0x7FF4145BA3F8
		FSolarisProfilingData BeginProfileBlock(); // Flags: Final|Native|Static|Public 0x7FF4145BA318
	};


	// Class VerseNative.VerseAsset
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UVerseAsset : public UObject	
	{
	public:
		UClass AssetClass; // 0x28(0x8)

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

		void StmSave(FakeType& Property); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145BAA18
		void StmRollback(); // Flags: Final|Native|Static|Public 0x7FF4145BA938
		void StmLeaveFrame(); // Flags: Final|Native|Static|Public 0x7FF4145BA858
		void StmEnterFrame(); // Flags: Final|Native|Static|Public 0x7FF4145BA778
		void StmEnabled(); // Flags: Final|Native|Static|Public 0x7FF4145BA698
		void StmCommit(); // Flags: Final|Native|Static|Public 0x7FF4145BA5B8
		void StmBegin(); // Flags: Final|Native|Static|Public 0x7FF4145BA4D8
	};

}
