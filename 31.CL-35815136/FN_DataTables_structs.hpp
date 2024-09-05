#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DataTables
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct /VehicleCosmetics/DataTables/Struct_VEH_Skins.Struct_VEH_Skins
	// Size: 0x24 (0x24 - 0x0)
	struct FStruct_VEH_Skins	
	{
	public:
		TWeakObjectPtr<UMaterialInstanceConstant*> SkinMIC_19_9242D84D446944DD0D7D739136E38C28; // 0x0(0x20)
		FFortReleaseVersion Version_25_3A5599D745024069BEE80A9AA697994F; // 0x20(0x4)
	};


	// Struct /VehicleCosmetics/DataTables/Struct_VEH_Windows.Struct_VEH_Windows
	// Size: 0x20 (0x20 - 0x0)
	struct FStruct_VEH_Windows	
	{
	public:
		TWeakObjectPtr<UMaterialInstanceConstant*> Window_23_9242D84D446944DD0D7D739136E38C28; // 0x0(0x20)
	};


	// Struct /VehicleCosmetics/DataTables/Struct_VehicleCosmetics_Painted.Struct_VehicleCosmetics_Painted
	// Size: 0x40 (0x40 - 0x0)
	struct FStruct_VehicleCosmetics_Painted	
	{
	public:
		FLinearColor PrimaryColor_32_9242D84D446944DD0D7D739136E38C28; // 0x0(0x10)
		FLinearColor Balanced_34_F677FC9D4B1B4146E8CC9DBCB9E0943E; // 0x10(0x10)
		FLinearColor Metallic_41_F57CE68E419E301DD160BEB5D0E32BFC; // 0x20(0x10)
		FLinearColor Emissive_44_23B897DD46FCCC1FE8A014AA4FE4104B; // 0x30(0x10)
	};

}
