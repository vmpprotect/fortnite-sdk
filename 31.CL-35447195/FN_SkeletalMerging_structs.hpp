#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SkeletalMerging
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct SkeletalMerging.SkeletalMeshMergeParams
	// Size: 0x40 (0x40 - 0x0)
	struct FSkeletalMeshMergeParams	
	{
	public:
		TArray MeshSectionMappings; // 0x0(0x10)
		TArray UVTransformsPerMesh; // 0x10(0x10)
		TArray MeshesToMerge; // 0x20(0x10)
		int32_t StripTopLODS; // 0x30(0x4)
		bool bNeedsCpuAccess : 1; // 0x34:0(0x1)
		bool bSkeletonBefore : 1; // 0x34:1(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		USkeleton Skeleton; // 0x38(0x8)
	};


	// Struct SkeletalMerging.SkeletonMergeParams
	// Size: 0x18 (0x18 - 0x0)
	struct FSkeletonMergeParams	
	{
	public:
		TArray SkeletonsToMerge; // 0x0(0x10)
		bool bMergeSockets; // 0x10(0x1)
		bool bMergeVirtualBones; // 0x11(0x1)
		bool bMergeCurveNames; // 0x12(0x1)
		bool bMergeBlendProfiles; // 0x13(0x1)
		bool bMergeAnimSlotGroups; // 0x14(0x1)
		bool bCheckSkeletonsCompatibility; // 0x15(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
	};

}
