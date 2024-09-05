#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SideloadedAnimationRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SideloadedAnimationRuntime.AnimSequenceSideloaded
	// Inherited from UAnimSequence -> UAnimSequenceBase -> UAnimationAsset -> UObject
	// Size: 0x50 (0x240 - 0x1F0)
	class UAnimSequenceSideloaded : public UAnimSequence	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x1F0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SideloadedAnimationRuntime.AnimSequenceSideloaded");
			return ret;
		}

		bool SideloadData(TArray<char>& Memory); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75106C81C(relative to base address)
		void SetSkeleton(USkeleton* InSkeleton); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75106C79C(relative to base address)
		bool LoadDataFromFile(FString Location, TArray<char>& Memory); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF75106C664(relative to base address)
		FString GetSideloadUserDataString(FString Key); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75106C5A8(relative to base address)
		float GetSideloadUserDataFloat(FString Key); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75106C508(relative to base address)
		void ClearSideloadData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75106C4F4(relative to base address)
		void AddMetaData(UAnimMetaData* MetaDataInstance); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75106C474(relative to base address)
	};

}
