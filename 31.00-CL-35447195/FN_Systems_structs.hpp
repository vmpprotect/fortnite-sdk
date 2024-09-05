#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Systems
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct /FortUILibrary/Systems/Backplate/Data/S_UI_BackplateCornerRadiusValues.S_UI_BackplateCornerRadiusValues
	// Size: 0x28 (0x28 - 0x0)
	struct FS_UI_BackplateCornerRadiusValues	
	{
	public:
		double Backplate_11_59F4828B4FD545ABA7B908A1A06D7957; // 0x0(0x8)
		double InteractiveComponent_12_1C7DCA1549AE8671672545812E553635; // 0x8(0x8)
		double Button_13_BECEA0EC44B2EF8D13CE9CACC3CFD9B2; // 0x10(0x8)
		double Tab_14_A3745E15415A461E014A12B5497D59B7; // 0x18(0x8)
		double Circle_15_42E740D144A64A7835129BB7EE579D5E; // 0x20(0x8)
	};


	// Struct /FortUILibrary/Systems/Data/Structs/S_UI_BoolFloat.S_UI_BoolFloat
	// Size: 0x10 (0x10 - 0x0)
	struct FS_UI_BoolFloat	
	{
	public:
		bool Enable_3_B063D53B491DF2572FE403B2A6860845; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		double Value_4_020FC33445ADC28A639893BBEE6C8D72; // 0x8(0x8)
	};


	// Struct /FortUILibrary/Systems/Data/Structs/S_UI_GridCell.S_UI_GridCell
	// Size: 0x28 (0x28 - 0x0)
	struct FS_UI_GridCell	
	{
	public:
		int32_t Row_15_A94CBD4C4E96C298CF51F6B49895AE3D; // 0x0(0x4)
		int32_t RowSpan_17_A0786E70484526B60C8B42A95AD3AB35; // 0x4(0x4)
		int32_t Column_19_EE61B90B4EE25EADECB506AEC3137A46; // 0x8(0x4)
		int32_t ColumnSpan_21_37271BC54501DA614C3829B82CDFEA3E; // 0xC(0x4)
		int32_t Layer_23_5EB8311C4EBCD402805DEE9E676A7772; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FVector2D Nudge_26_A5E5651A47EF74CCA30424AB0F22341D; // 0x18(0x10)
	};


	// Struct /FortUILibrary/Systems/Data/Structs/S_UI_Placement.S_UI_Placement
	// Size: 0x40 (0x40 - 0x0)
	struct FS_UI_Placement	
	{
	public:
		TEnumAsByte HorizontalAlignment_4_A94CBD4C4E96C298CF51F6B49895AE3D; // 0x0(0x1)
		TEnumAsByte VerticalAlignment_5_BC3E4CD143DBC026850F4BAE098F6937; // 0x1(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		FMargin Padding_8_030D86C14EBE7996733C89A951279A61; // 0x4(0x10)
		unsigned char UnknownData03_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FS_UI_GridCell Grid_20_3148B55D43C5889FC5D1FF82667A7D01; // 0x18(0x28)
	};


	// Struct /FortUILibrary/Systems/Data/Structs/S_UI_Image.S_UI_Image
	// Size: 0x58 (0x58 - 0x0)
	struct FS_UI_Image	
	{
	public:
		FS_UI_Placement Placement_67_A94CBD4C4E96C298CF51F6B49895AE3D; // 0x0(0x40)
		FVector2D ImageSize_72_3E7C183E49CE6543B65BBEB8E5C3DEF9; // 0x40(0x10)
		UMaterialInstance Material_75_7A7C63B046ADDD7A04B8F3AB7F3C30C4; // 0x50(0x8)
	};


	// Struct /FortUILibrary/Systems/Data/Structs/S_UI_SizeBox.S_UI_SizeBox
	// Size: 0x80 (0x80 - 0x0)
	struct FS_UI_SizeBox	
	{
	public:
		FS_UI_BoolFloat WidthOverride_107_37121FBF4933532CED9F6C80636E0756; // 0x0(0x10)
		FS_UI_BoolFloat HeightOverride_108_73ED716E45F2027D3E2CB5ABBCD3D249; // 0x10(0x10)
		FS_UI_BoolFloat MinDesiredWidth_109_7BCFCAAC4DE9BA1CBEB0C085AE54DB76; // 0x20(0x10)
		FS_UI_BoolFloat MinDesiredHeight_110_C7F977F64FD9F7B719787CBC2B116808; // 0x30(0x10)
		FS_UI_BoolFloat MaxDesiredWidth_111_693561ED4DB2A6CDE54F51BA1B0F341D; // 0x40(0x10)
		FS_UI_BoolFloat MaxDesiredHeight_112_6F2C797849AEA86E6E9C848808E4376E; // 0x50(0x10)
		FS_UI_BoolFloat MinAspectRatio_113_6BFE81D541008532B3EB5B9C50732063; // 0x60(0x10)
		FS_UI_BoolFloat MaxAspectRatio_114_1E8A3C744D97847FEF43F19D9F0EAC69; // 0x70(0x10)
	};


	// Struct /FortUILibrary/Systems/Data/Structs/S_UI_Backplate.S_UI_Backplate
	// Size: 0x50 (0x50 - 0x0)
	struct FS_UI_Backplate	
	{
	public:
		FS_UI_Placement Placement_84_BB10D20A41D92A25F6912CB8B8544AD0; // 0x0(0x40)
		TEnumAsByte Brightness_85_A94CBD4C4E96C298CF51F6B49895AE3D; // 0x40(0x1)
		TEnumAsByte CornerRadius_86_3E7C183E49CE6543B65BBEB8E5C3DEF9; // 0x41(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x42(0x6) UNKNOWN PROPERTY
		double Blur_81_7A7C63B046ADDD7A04B8F3AB7F3C30C4; // 0x48(0x8)
	};


	// Struct /FortUILibrary/Systems/Data/Structs/S_UI_Text.S_UI_Text
	// Size: 0xC0 (0xC0 - 0x0)
	struct FS_UI_Text	
	{
	public:
		FS_UI_Placement Placement_67_A94CBD4C4E96C298CF51F6B49895AE3D; // 0x0(0x40)
		FSlateFontInfo Font_45_B587C32B43943172D2272F8558ACC8B2; // 0x40(0x58)
		FSlateColor Color_65_9CB9A5174FD065187E30878106948A3B; // 0x98(0x14)
		ETextTransformPolicy TransformPolicy_49_52395AC7440E291527A8768E37D08B2A; // 0xAC(0x1)
		TEnumAsByte Justification_52_5897D4F946C704E9C5D67E9DD207EF16; // 0xAD(0x1)
		unsigned char UnknownData02_6[0x2]; // 0xAE(0x2) UNKNOWN PROPERTY
		double LineHeightPercentage_55_2509C2B04F6144283C7BADBF36AAA8F6; // 0xB0(0x8)
		bool AutoWrapText_58_064D5C3A4DD3D362216942A761DDC8D0; // 0xB8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		int32_t WrapTextAt_68_39091237442DEAE1CAFAE3AB75A757F1; // 0xBC(0x4)
	};


	// Struct /FortUILibrary/Systems/Dialog/Data/Structs/S_UI_DialogButtons.S_UI_DialogButtons
	// Size: 0x6C (0x6C - 0x0)
	struct FS_UI_DialogButtons	
	{
	public:
		FS_UI_Placement GroupPlacement_71_A94CBD4C4E96C298CF51F6B49895AE3D; // 0x0(0x40)
		double SpaceBetweenButtons_62_39091237442DEAE1CAFAE3AB75A757F1; // 0x40(0x8)
		TEnumAsByte EachButtonSize_90_7A1E34E243F1F10533E9EA910463B328; // 0x48(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		int32_t EachButtonMinWidth_77_CA4A0FEF4CF6FF0700E0DB8F95AC917B; // 0x4C(0x4)
		bool EachButtonHorizontalFill_87_3A1B89E0481CE49778D5E39C0BD7E90C; // 0x50(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		TArray CTAButtonsTypes_89_963DA1ED40E4193862297D976DA12A11; // 0x58(0x10)
		int32_t FocuseButton_85_CC6A212C4012DDFDC810689A87324E54; // 0x68(0x4)
	};


	// Struct /FortUILibrary/Systems/ItemShopTile/Rulesets/S_ItemShop_ImageRulesetValues.S_ItemShop_ImageRulesetValues
	// Size: 0x1A (0x1A - 0x0)
	struct FS_ItemShop_ImageRulesetValues	
	{
	public:
		FVector2D Position_6_9541C225437C24C70793C3A8ABA63871; // 0x0(0x10)
		double Zoom_9_069D95924224229FB9C753BC24AD5D11; // 0x10(0x8)
		bool HasRoundedCorners_14_BCF7C6A2470E032CA0030AACC213545A; // 0x18(0x1)
		bool ScaleToFitX_17_A36518654EFEBA498B19B59BC8BFF9FB; // 0x19(0x1)
	};


	// Struct /FortUILibrary/Systems/Highlight/Data/S_UI_HighlightColors.S_UI_HighlightColors
	// Size: 0x50 (0x50 - 0x0)
	struct FS_UI_HighlightColors	
	{
	public:
		FLinearColor AttentionTextColor_11_102071AF4E7A0065E1FA6698F3B29407; // 0x0(0x10)
		FLinearColor SocialTextColor_16_3125B0A54287EC2088D7CB8970BB6659; // 0x10(0x10)
		FLinearColor UtilityTextColor_22_15D8BD754FF80FBCD6B2469B4E2631A5; // 0x20(0x10)
		FLinearColor DealsTextColor_24_E50C7EC1462AA9FB3936CD90813B1F88; // 0x30(0x10)
		FLinearColor QuietTextColor_31_0E1303A64FB20E65563F2CB387EBC4C1; // 0x40(0x10)
	};


	// Struct /FortUILibrary/Systems/Items/Data/S_UIKit_StatusIndicatorSpawnParams.S_UIKit_StatusIndicatorSpawnParams
	// Size: 0x30 (0x30 - 0x0)
	struct FS_UIKit_StatusIndicatorSpawnParams	
	{
	public:
		TEnumAsByte Configuration_2_4F95EDE441841EAA721CCEBD1EB55CB0; // 0x0(0x1)
		TEnumAsByte Size_9_6A845B25414BCD4AD542299A80B2861A; // 0x1(0x1)
		TEnumAsByte Type_11_9B3629794F4B75331E8B2187EF326C83; // 0x2(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x3(0x5) UNKNOWN PROPERTY
		TWeakObjectPtr Icon_28_BD4DFFFF4E313FBF9321FB8F8B6F065E; // 0x8(0x20)
		TEnumAsByte Placement_36_7BAF349C4AD25576F7599B9659D4F8B5; // 0x28(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		int32_t OverrideColumn_39_EAD86496410AF0E2BB2857A2F55FCB72; // 0x2C(0x4)
	};


	// Struct /FortUILibrary/Systems/Tabs/Data/S_UI_DividerPosition.S_UI_DividerPosition
	// Size: 0x9 (0x9 - 0x0)
	struct FS_UI_DividerPosition	
	{
	public:
		FName TabID_8_3076CF064F5FBEE381E6B99716F67AE8; // 0x0(0x4)
		int32_t TabIndex_12_8AF5AE8C44A202CB60DA3399C915FE75; // 0x4(0x4)
		bool AddAfterTab_9_B9F2D11A4B4B44A869A74DA887728844; // 0x8(0x1)
	};


	// Struct /FortUILibrary/Systems/Tabs/Data/S_UI_DividerData.S_UI_DividerData
	// Size: 0x9 (0x9 - 0x0)
	struct FS_UI_DividerData	
	{
	public:
		UWBP_UIKit_Divider_Base_C Widget_6_3076CF064F5FBEE381E6B99716F67AE8; // 0x0(0x8)
		bool IsAddedAfter_3_B9F2D11A4B4B44A869A74DA887728844; // 0x8(0x1)
	};


	// Struct /FortUILibrary/Systems/Tabs/Data/S_UI_TabContainerData.S_UI_TabContainerData
	// Size: 0x20 (0x20 - 0x0)
	struct FS_UI_TabContainerData	
	{
	public:
		FUIKitTabData Tab_6_1C1E32754E235AD5DDC5EBB6C1CCB9CC; // 0x0(0x10)
		TArray InnerTabs_7_80595BFD459B00A700F6ACAB5B15D171; // 0x10(0x10)
	};

}
