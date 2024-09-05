#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SkeletalMerging
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		USkeleton MergeSkeletons(FSkeletonMergeParams& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145A6C78
		USkeletalMesh MergeMeshes(FSkeletalMeshMergeParams& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145A6B98
	};

}
