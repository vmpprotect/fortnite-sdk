#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ACLPlugin
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ACLPlugin.AnimationCompressionLibraryDatabase
	// Inherited from UObject
	// Size: 0x100 (0x128 - 0x28)
	class UAnimationCompressionLibraryDatabase : public UObject	
	{
	public:
		TArray CookedCompressedBytes; // 0x28(0x10)
		TArray CookedAnimSequenceMappings; // 0x38(0x10)
		unsigned char UnknownData02_6[0xD8]; // 0x48(0xD8) UNKNOWN PROPERTY
		uint32_t MaxStreamRequestSizeKB; // 0x120(0x4)
		ACLVisualFidelity DefaultVisualFidelity; // 0x124(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x125(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ACLPlugin.AnimationCompressionLibraryDatabase");
			return ret;
		}

		void SetVisualFidelity(UObject WorldContextObject, FLatentActionInfo LatentInfo, UAnimationCompressionLibraryDatabase DatabaseAsset, ACLVisualFidelityChangeResult& Result, ACLVisualFidelity VisualFidelity); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C15258
		ACLVisualFidelity GetVisualFidelity(UAnimationCompressionLibraryDatabase DatabaseAsset); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C15178
	};


	// Class ACLPlugin.AnimBoneCompressionCodec_ACLBase
	// Inherited from UAnimBoneCompressionCodec -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ACLPlugin.AnimBoneCompressionCodec_ACLBase");
			return ret;
		}
	};


	// Class ACLPlugin.AnimBoneCompressionCodec_ACL
	// Inherited from UAnimBoneCompressionCodec_ACLBase -> UAnimBoneCompressionCodec -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ACLPlugin.AnimBoneCompressionCodec_ACL");
			return ret;
		}
	};


	// Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom
	// Inherited from UAnimBoneCompressionCodec_ACLBase -> UAnimBoneCompressionCodec -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ACLPlugin.AnimBoneCompressionCodec_ACLCustom");
			return ret;
		}
	};


	// Class ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
	// Inherited from UAnimBoneCompressionCodec_ACLBase -> UAnimBoneCompressionCodec -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UAnimBoneCompressionCodec_ACLDatabase : public UAnimBoneCompressionCodec_ACLBase	
	{
	public:
		UAnimationCompressionLibraryDatabase DatabaseAsset; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ACLPlugin.AnimBoneCompressionCodec_ACLDatabase");
			return ret;
		}
	};


	// Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe
	// Inherited from UAnimBoneCompressionCodec_ACLBase -> UAnimBoneCompressionCodec -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ACLPlugin.AnimBoneCompressionCodec_ACLSafe");
			return ret;
		}
	};


	// Class ACLPlugin.AnimCurveCompressionCodec_ACL
	// Inherited from UAnimCurveCompressionCodec -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ACLPlugin.AnimCurveCompressionCodec_ACL");
			return ret;
		}
	};

}
