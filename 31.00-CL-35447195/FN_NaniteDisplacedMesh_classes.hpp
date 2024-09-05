#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NaniteDisplacedMesh
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class NaniteDisplacedMesh.NaniteDisplacedMesh
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UNaniteDisplacedMesh : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

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
		UNaniteDisplacedMesh DisplacedMesh; // 0x590(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x598(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NaniteDisplacedMesh.NaniteDisplacedMeshComponent");
			return ret;
		}
	};

}
