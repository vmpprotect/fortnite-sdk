#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseAssets
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VerseAssets.VerseMaterialInstanceDynamic
	// Inherited from UMaterialInstanceDynamic -> UMaterialInstance -> UMaterialInterface -> UObject
	// Size: 0x38 (0x330 - 0x2F8)
	class UVerseMaterialInstanceDynamic : public UMaterialInstanceDynamic	
	{
	public:
		unsigned char UnknownData01_1[0x38]; // 0x2F8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseAssets.VerseMaterialInstanceDynamic");
			return ret;
		}
	};


	// Class VerseAssets.VerseAssetPtr
	// Inherited from UVerseAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UVerseAssetPtr : public UVerseAsset	
	{
	public:
		TWeakObjectPtr AssetForEditor; // 0x30(0x20)
		FName AssetPathName; // 0x50(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		UObject Object; // 0x58(0x8)
		unsigned char UnknownData03_7[0x20]; // 0x60(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseAssets.VerseAssetPtr");
			return ret;
		}

		void OnRep_AssetPathName(); // Flags: Final|Native|Protected 0x7FF414606ED8
	};


	// Class VerseAssets.ParameterCollection
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UParameterCollection : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseAssets.ParameterCollection");
			return ret;
		}
	};


	// Class VerseAssets.ParameterCollectionGeneratedClass
	// Inherited from UBlueprintGeneratedClass -> UClass -> UStruct -> UField -> UObject
	// Size: 0x0 (0x360 - 0x360)
	class UParameterCollectionGeneratedClass : public UBlueprintGeneratedClass	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseAssets.ParameterCollectionGeneratedClass");
			return ret;
		}
	};

}
