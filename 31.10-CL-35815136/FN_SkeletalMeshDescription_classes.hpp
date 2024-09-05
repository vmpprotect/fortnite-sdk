#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SkeletalMeshDescription
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SkeletalMeshDescription.SkeletalMeshDescription
	// Inherited from UMeshDescriptionBase -> UObject
	// Size: 0x0 (0x2F0 - 0x2F0)
	class USkeletalMeshDescription : public UMeshDescriptionBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SkeletalMeshDescription.SkeletalMeshDescription");
			return ret;
		}
	};

}
