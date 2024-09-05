#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LiveLink
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
