#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LiveLink
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/LiveLink.EBoneTransformResolution
	enum EBoneTransformResolution
	{
		EBoneTransformResolution__KeepParent = 0,
		EBoneTransformResolution__KeepChild = 1,
		EBoneTransformResolution__Combine = 2,
	};


	// Enum /Script/LiveLink.ELiveLinkTimecodeProviderEvaluationType
	enum ELiveLinkTimecodeProviderEvaluationType
	{
		ELiveLinkTimecodeProviderEvaluationType__Lerp = 0,
		ELiveLinkTimecodeProviderEvaluationType__Nearest = 1,
		ELiveLinkTimecodeProviderEvaluationType__Latest = 2,
	};


	// Enum /Script/LiveLink.ELiveLinkAxis
	enum ELiveLinkAxis
	{
		ELiveLinkAxis__X = 0,
		ELiveLinkAxis__Y = 1,
		ELiveLinkAxis__Z = 2,
		ELiveLinkAxis__XNeg = 3,
		ELiveLinkAxis__YNeg = 4,
		ELiveLinkAxis__ZNeg = 5,
	};

}
