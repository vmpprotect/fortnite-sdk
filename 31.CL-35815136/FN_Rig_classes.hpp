#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Rig
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /FigureCharacter/Rig/Data/MouthRegistration/BP_FigureMouthRegistration.BP_FigureMouthRegistration_C
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UBP_FigureMouthRegistration_C : public UPrimaryDataAsset	
	{
	public:
		TArray<FTransform> MouthRegistration01; // 0x30(0x10)
		TArray<FTransform> MouthRegistration02; // 0x40(0x10)
		TArray<FTransform> MouthRegistration03; // 0x50(0x10)
		TArray<FTransform> MouthRegistration04; // 0x60(0x10)
		TArray<FTransform> MouthRegistration05; // 0x70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FigureCharacter/Rig/Data/MouthRegistration/BP_FigureMouthRegistration.BP_FigureMouthRegistration_C");
			return ret;
		}
	};


	// Class /FigureCharacter/Rig/Data/BeardRegistration/BP_FigureBeardRegistration.BP_FigureBeardRegistration_C
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x43 (0x73 - 0x30)
	class UBP_FigureBeardRegistration_C : public UPrimaryDataAsset	
	{
	public:
		TArray<int32_t> BeardPoses; // 0x30(0x10)
		TArray<int32_t> BeardBeanPoses; // 0x40(0x10)
		TArray<FTransform> BeardBean; // 0x50(0x10)
		TArray<FTransform> Beard; // 0x60(0x10)
		bool Transform_Beard; // 0x70(0x1)
		bool Scale_Bean; // 0x71(0x1)
		bool Transform_Bean; // 0x72(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FigureCharacter/Rig/Data/BeardRegistration/BP_FigureBeardRegistration.BP_FigureBeardRegistration_C");
			return ret;
		}
	};


	// Class /FigureCharacter/Rig/Data/CharacterAcc/BP_Figure_CharacterAccUserData.BP_Figure_CharacterAccUserData_C
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x40 (0x70 - 0x30)
	class UBP_Figure_CharacterAccUserData_C : public UPrimaryDataAsset	
	{
	public:
		TArray<FName> Character_Accent_Registration; // 0x30(0x10)
		TArray<FVector> Character_Accent_Initial; // 0x40(0x10)
		TArray<FFigure_PushAwayControl_Struct> Spawn_Push_Away_Control; // 0x50(0x10)
		TArray<bool> CharacterAccent_Anim_Override; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FigureCharacter/Rig/Data/CharacterAcc/BP_Figure_CharacterAccUserData.BP_Figure_CharacterAccUserData_C");
			return ret;
		}
	};

}
