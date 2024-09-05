#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NaniteDisplacedMesh
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class NaniteDisplacedMesh.NaniteDisplacedMesh
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UNaniteDisplacedMesh : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NaniteDisplacedMesh.NaniteDisplacedMesh");
			return ret;
		}
	};


	// Class NaniteDisplacedMesh.NaniteDisplacedMeshComponent
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x5A0 - 0x590)
	class UNaniteDisplacedMeshComponent : public UStaticMeshComponent	
	{
	public:
		UNaniteDisplacedMesh* DisplacedMesh; // 0x590(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x598(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NaniteDisplacedMesh.NaniteDisplacedMeshComponent");
			return ret;
		}
	};

}
