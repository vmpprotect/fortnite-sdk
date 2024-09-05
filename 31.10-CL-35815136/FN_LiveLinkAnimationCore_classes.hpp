#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LiveLinkAnimationCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class LiveLinkAnimationCore.LiveLinkInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x8 (0x3C0 - 0x3B8)
	class ULiveLinkInstance : public UAnimInstance	
	{
	public:
		ULiveLinkRetargetAsset* CurrentRetargetAsset; // 0x3B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkAnimationCore.LiveLinkInstance");
			return ret;
		}

		void SetSubject(FLiveLinkSubjectName SubjectName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751EF14C0(relative to base address)
		void SetRetargetAsset(UClass* RetargetAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751EF13E8(relative to base address)
		void EnableLiveLinkEvaluation(bool bDoEnable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751EF1168(relative to base address)
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
		unsigned char UnknownData00_1[0xA0]; // 0x28(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkAnimationCore.LiveLinkRemapAsset");
			return ret;
		}

		void RemapCurveElements(TMap<FName, float>& CurveItems); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF751EF1300(relative to base address)
		FName GetRemappedCurveName(FName CurveName); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF751EF1274(relative to base address)
		FName GetRemappedBoneName(FName BoneName); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF751EF11E8(relative to base address)
	};

}
