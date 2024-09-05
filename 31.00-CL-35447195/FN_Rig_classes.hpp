#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Rig
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /FigureCharacter/Rig/Data/MouthRegistration/BP_FigureMouthRegistration.BP_FigureMouthRegistration_C
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UBP_FigureMouthRegistration_C : public UPrimaryDataAsset	
	{
	public:
		TArray MouthRegistration01; // 0x30(0x10)
		TArray MouthRegistration02; // 0x40(0x10)
		TArray MouthRegistration03; // 0x50(0x10)
		TArray MouthRegistration04; // 0x60(0x10)
		TArray MouthRegistration05; // 0x70(0x10)

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
		TArray BeardPoses; // 0x30(0x10)
		TArray BeardBeanPoses; // 0x40(0x10)
		TArray BeardBean; // 0x50(0x10)
		TArray Beard; // 0x60(0x10)
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
		TArray Character_Accent_Registration; // 0x30(0x10)
		TArray Character_Accent_Initial; // 0x40(0x10)
		TArray Spawn_Push_Away_Control; // 0x50(0x10)
		TArray CharacterAccent_Anim_Override; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FigureCharacter/Rig/Data/CharacterAcc/BP_Figure_CharacterAccUserData.BP_Figure_CharacterAccUserData_C");
			return ret;
		}
	};


	// Class /FigureCharacter/Rig/Data/FigureInitialTransforms/BP_FigureInitialTransforms.BP_FigureInitialTransforms_C
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UBP_FigureInitialTransforms_C : public UPrimaryDataAsset	
	{
	public:
		TArray ControlInitialGlobalName; // 0x30(0x10)
		TArray ControlInitialGlobalTransform; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FigureCharacter/Rig/Data/FigureInitialTransforms/BP_FigureInitialTransforms.BP_FigureInitialTransforms_C");
			return ret;
		}
	};


	// Class /FigureCharacter/Rig/Data/HeadAcc/BP_Figure_HeadAccUserData.BP_Figure_HeadAccUserData_C
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x69 (0x99 - 0x30)
	class UBP_Figure_HeadAccUserData_C : public UPrimaryDataAsset	
	{
	public:
		bool Enable_Head_Rotation; // 0x30(0x1)
		bool Enable_Head_Blend_Rotation; // 0x31(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
		double Sphere_Pushout_Radius; // 0x38(0x8)
		FVector Sphere_Pushout_Location; // 0x40(0x18)
		double Cylinder_Pushout_Radius; // 0x58(0x8)
		FVector Cylinder_Pushout_Location; // 0x60(0x18)
		bool Enable_Sphere_Pushout; // 0x78(0x1)
		bool Enable_Cylinder_Pushout; // 0x79(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x7A(0x6) UNKNOWN PROPERTY
		FVector Head_Blend_Rotation; // 0x80(0x18)
		bool Enable_Head_Min_TZ; // 0x98(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FigureCharacter/Rig/Data/HeadAcc/BP_Figure_HeadAccUserData.BP_Figure_HeadAccUserData_C");
			return ret;
		}
	};


	// Class /FigureCharacter/Rig/CR_Minifig_Runtime.CR_Minifig_Runtime_C
	// Inherited from UControlRig -> URigVMHost -> UObject
	// Size: 0xE2 (0xB82 - 0xAA0)
	class UCR_Minifig_Runtime_C : public UControlRig	
	{
	public:
		bool Enable_Head_Rotation; // 0xAA0(0x1)
		bool Enable_Head_Blend_Rotation; // 0xAA1(0x1)
		bool Enable_Sphere_Pushout; // 0xAA2(0x1)
		bool Enable_Cylinder_Pushout; // 0xAA3(0x1)
		unsigned char UnknownData03_6[0x4]; // 0xAA4(0x4) UNKNOWN PROPERTY
		double Sphere_Pushout_Radius; // 0xAA8(0x8)
		double Cylinder_Pushout_Radius; // 0xAB0(0x8)
		FVector Sphere_Pushout_Offset; // 0xAB8(0x18)
		FVector Cylinder_Pushout_Location; // 0xAD0(0x18)
		FVector Head_Blend_Rotation; // 0xAE8(0x18)
		TArray Character_Accent_Registration; // 0xB00(0x10)
		TArray Character_Accent_Initial; // 0xB10(0x10)
		bool Enable_Character_Accents; // 0xB20(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xB21(0x7) UNKNOWN PROPERTY
		double U_Multiplier; // 0xB28(0x8)
		double V_Multiplier; // 0xB30(0x8)
		UBP_Figure_CharacterAccUserData_C CharacterAcc; // 0xB38(0x8)
		TArray PushAway_Controls; // 0xB40(0x10)
		bool Enable_Head_Min_TZ; // 0xB50(0x1)
		unsigned char UnknownData05_6[0x7]; // 0xB51(0x7) UNKNOWN PROPERTY
		UBP_FigureMouthRegistration_C MouthRegistration; // 0xB58(0x8)
		UBP_FigureBeardRegistration_C BeardRegistration; // 0xB60(0x8)
		TArray Character_Accent_Anim_Override; // 0xB68(0x10)
		int32_t Constrain_Head; // 0xB78(0x4)
		int32_t Constrain_NeckAcc; // 0xB7C(0x4)
		bool Player_Face_is_Visible; // 0xB80(0x1)
		bool Disable_Head_Constraints; // 0xB81(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FigureCharacter/Rig/CR_Minifig_Runtime.CR_Minifig_Runtime_C");
			return ret;
		}
	};

}
