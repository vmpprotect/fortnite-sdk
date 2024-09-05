#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseAssets
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VerseAssets.VerseMaterialInstanceDynamic
	// Inherited from UMaterialInstanceDynamic -> UMaterialInstance -> UMaterialInterface -> UObject
	// Size: 0x38 (0x330 - 0x2F8)
	class UVerseMaterialInstanceDynamic : public UMaterialInstanceDynamic	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0x2F8(0x38) UNKNOWN PROPERTY

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
		TWeakObjectPtr<UObject*> AssetForEditor; // 0x30(0x20)
		FName AssetPathName; // 0x50(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		UObject* Object; // 0x58(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x60(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseAssets.VerseAssetPtr");
			return ret;
		}

		void OnRep_AssetPathName(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D378F7C(relative to base address)
	};


	// Class VerseAssets.ParameterCollection
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UParameterCollection : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

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
