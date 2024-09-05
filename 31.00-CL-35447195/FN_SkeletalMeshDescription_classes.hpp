#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SkeletalMeshDescription
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
