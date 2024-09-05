#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SkeletalMerging
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SkeletalMerging.SkeletalMergingLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USkeletalMergingLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SkeletalMerging.SkeletalMergingLibrary");
			return ret;
		}

		USkeleton MergeSkeletons(FSkeletonMergeParams& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D0200B8(relative to base address)
		USkeletalMesh MergeMeshes(FSkeletalMeshMergeParams& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D02001C(relative to base address)
	};

}
