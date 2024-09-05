#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: UI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct /Game/UI/RadioButtonGroup/FortRadioButtonItemStruct.FortRadioButtonItemStruct
	// Size: 0x20 (0x20 - 0x0)
	struct FFortRadioButtonItemStruct	
	{
	public:
		UClass* ButtonClass_16_96A6B156493ECD26328DB3A2AD2A49F3; // 0x0(0x8)
		UClass* ButtonStyle_12_1900F8284D83F2AFA8F7549B26E57AFD; // 0x8(0x8)
		FText ButtonText_8_3ECB1D484A34D2AA393E81AEEDD4CC0E; // 0x10(0x10)
	};


	// Struct /Game/UI/Foundation/StateLayouts/CinematicLanuageToTrackStruct.CinematicLanuageToTrackStruct
	// Size: 0x4 (0x4 - 0x0)
	struct FCinematicLanuageToTrackStruct	
	{
	public:
		int32_t TrackIndex_5_3C1ECC8A4F8E44CBFA164485FFD4BB35; // 0x0(0x4)
	};


	// Struct /Game/UI/Foundation/Toasts/Data/S_UI_ToastProperty.S_UI_ToastProperty
	// Size: 0xA (0xA - 0x0)
	struct FS_UI_ToastProperty	
	{
	public:
		double DisplayTimeOverride_7_114246D24BF875A425BD61BBF1F040DA; // 0x0(0x8)
		TEnumAsByte<E_PositiveNegativeNeutral> IntroAnimationType_14_0EB7EC4A496AAD67E7A7EF94D16B21EF; // 0x8(0x1)
		bool UseComplexAnim_21_87940237415E82117FBBFC925EA3E664; // 0x9(0x1)
	};


	// Struct /Game/UI/Sidebar/Tags/SidebarSocialTagCategoryStructure.SidebarSocialTagCategoryStructure
	// Size: 0x6C (0x6C - 0x0)
	struct FSidebarSocialTagCategoryStructure	
	{
	public:
		FLinearColor TagSkewBoxInnerColor_48_C74E0AB74864DE4E29C3AEBA2ECC7DA4; // 0x0(0x10)
		FLinearColor TagSkewBoxInnerColorHovered_42_7C212CFC4A6078EEE7C986B14E3FEB49; // 0x10(0x10)
		FLinearColor TagSkewBoxInnerColorSelected_45_E34FF8A8455FE97079F6B0A6A31A05AB; // 0x20(0x10)
		FLinearColor TagSkewBoxOuterColor_41_98DDEF0940105128E6C274B11D3A3D5D; // 0x30(0x10)
		FLinearColor TagSkewBoxOuterColorSelected_47_9B952DE4402DE9AFF112F2A20DC4F48C; // 0x40(0x10)
		UMaterialInstance* TagCategoryIconMaterial_7_8991D63341121885D70AE09CB10AE389; // 0x50(0x8)
		FSlateColor TagCategoryBaseColor_19_47DC015C4160F77A7C6E66AEEA302F6A; // 0x58(0x14)
	};


	// Struct /Game/UI/Frontend/Lobby/Nameplates/NameplateContextMenuData.NameplateContextMenuData
	// Size: 0x5 (0x5 - 0x0)
	struct FNameplateContextMenuData	
	{
	public:
		bool IsPartyLeader_9_8DB4277B4DD5FFC2900E4695800960AE; // 0x0(0x1)
		bool IsLocalPlayer_3_01681ABE4704BBC78949A19AE1D134B0; // 0x1(0x1)
		bool IsMutedByLocalPlayer_5_CD0342E944F4E9EDDD9BFBA932FC4201; // 0x2(0x1)
		EPedestalNameplateAction CurrentAvailableAction_11_00612D16476A4883997F709DCD1A883F; // 0x3(0x1)
		bool IsFriend_13_E592AA764F3A6C2ADE05A2A1750B5B5D; // 0x4(0x1)
	};


	// Struct /Game/UI/Frontend/Lobby/Nameplates/Nameplate_IconAndBackgroundMaterials.Nameplate_IconAndBackgroundMaterials
	// Size: 0x10 (0x10 - 0x0)
	struct FNameplate_IconAndBackgroundMaterials	
	{
	public:
		UMaterialInstance* Icon_22_7A39E78C4F20C345CF89AE872C9A8A9C; // 0x0(0x8)
		UMaterialInstance* Background_23_8992DAB14BCD2B10971684BDE4A70D68; // 0x8(0x8)
	};

}
