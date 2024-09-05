#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SideloadedAnimationRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SideloadedAnimationRuntime.AnimSequenceSideloaded
	// Inherited from UAnimSequence -> UAnimSequenceBase -> UAnimationAsset -> UObject
	// Size: 0x50 (0x240 - 0x1F0)
	class UAnimSequenceSideloaded : public UAnimSequence	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x1F0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SideloadedAnimationRuntime.AnimSequenceSideloaded");
			return ret;
		}

		bool SideloadData(TArray& Memory); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C13738
		void SetSkeleton(USkeleton InSkeleton); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C13658
		bool LoadDataFromFile(FString Location, TArray& Memory); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414C13578
		FString GetSideloadUserDataString(FString Key); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C13498
		float GetSideloadUserDataFloat(FString Key); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C133B8
		void ClearSideloadData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C132D8
		void AddMetaData(UAnimMetaData MetaDataInstance); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C131F8
	};

}
