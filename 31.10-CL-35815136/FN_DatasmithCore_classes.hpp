#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DatasmithCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DatasmithCore.DatasmithClothAssetFactory
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDatasmithClothAssetFactory : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DatasmithCore.DatasmithClothAssetFactory");
			return ret;
		}
	};


	// Class DatasmithCore.DatasmithClothComponentFactory
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDatasmithClothComponentFactory : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DatasmithCore.DatasmithClothComponentFactory");
			return ret;
		}
	};


	// Class DatasmithCore.DatasmithMesh
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UDatasmithMesh : public UObject	
	{
	public:
		FString MeshName; // 0x28(0x10)
		bool bIsCollisionMesh; // 0x38(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		TArray<FDatasmithMeshSourceModel> SourceModels; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DatasmithCore.DatasmithMesh");
			return ret;
		}
	};

}
