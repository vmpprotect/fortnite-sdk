#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LiveLinkAnimationCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class LiveLinkAnimationCore.LiveLinkInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x8 (0x3C0 - 0x3B8)
	class ULiveLinkInstance : public UAnimInstance	
	{
	public:
		ULiveLinkRetargetAsset CurrentRetargetAsset; // 0x3B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkAnimationCore.LiveLinkInstance");
			return ret;
		}

		void SetSubject(FLiveLinkSubjectName SubjectName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E9C200
		void SetRetargetAsset(UClass RetargetAsset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E9C120
		void EnableLiveLinkEvaluation(bool bDoEnable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E9C040
	};


	// Class LiveLinkAnimationCore.LiveLinkRetargetAsset
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULiveLinkRetargetAsset : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkAnimationCore.LiveLinkRetargetAsset");
			return ret;
		}
	};


	// Class LiveLinkAnimationCore.LiveLinkRemapAsset
	// Inherited from ULiveLinkRetargetAsset -> UObject
	// Size: 0xA0 (0xC8 - 0x28)
	class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset	
	{
	public:
		unsigned char UnknownData01_1[0xA0]; // 0x28(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkAnimationCore.LiveLinkRemapAsset");
			return ret;
		}

		void RemapCurveElements(TMap& CurveItems); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF414E9C4A0
		FName GetRemappedCurveName(FName CurveName); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent|Const 0x7FF414E9C3C0
		FName GetRemappedBoneName(FName BoneName); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent|Const 0x7FF414E9C2E0
	};

}
