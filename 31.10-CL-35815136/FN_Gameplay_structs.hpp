#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Gameplay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct /SupplyDropRadioGameplay/Gameplay/SupplyDropRadioDataStruct.SupplyDropRadioDataStruct
	// Size: 0x110 (0x110 - 0x0)
	struct FSupplyDropRadioDataStruct	
	{
	public:
		bool bEnabled_35_D6A0BF1343167278DE9FBFB3234277A9; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery PlaylistTagsQuery_39_183349BE420E6A9770D562ABF5C5D3EB; // 0x8(0x48)
		FGameplayTag GameplayTag_5_542794F64B7B42F5AFFB4F99DE156B3F; // 0x50(0x4)
		int32_t Stock_34_7D54BF96461297E10D7DA1AA8FD4C012; // 0x54(0x4)
		EFortRarity Rarity_12_9F926D724028B6C35969B292DBD09ACE; // 0x58(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
		FText Name_15_299F1575424B7AC4048B16BE4575858A; // 0x60(0x10)
		FText Description_17_79C0439D408E0560B73F5383246A78F6; // 0x70(0x10)
		UClass* SupplyDropRadioActorClass_33_71A3A84043A4401BC875CFA344AAF3DD; // 0x80(0x8)
		TWeakObjectPtr<UTexture2D*> PreviewImageSoftObj_24_11118FE2450DCE956579768EEFDA200D; // 0x88(0x20)
		TWeakObjectPtr<UTexture2D*> ChoiceImageSoftObj_29_E219BD914583592495E1F38287CB7341; // 0xA8(0x20)
		FGameplayTagContainer QuestTags_44_0A989AC04A6AFB5EFD32CCA67362B3E7; // 0xC8(0x20)
		double FallHeight_47_E26A7B624EA7475B16BAE79339FD145D; // 0xE8(0x8)
		double GravityMultiplier_PreOpen_49_9A76CDC14234D269F36B459F31CC1011; // 0xF0(0x8)
		double GravityMultiplier_PostOpen_51_BF7A9EE244D825B798B0E3B46418865C; // 0xF8(0x8)
		double BalloonOpenedFallSpeed_53_A7105A3C4E29A83513426780577EF185; // 0x100(0x8)
		double DistanceFromOriginalSpawnLocForBalloonOpen_56_B884693E44BCB97A947F1CB9ECADEBF4; // 0x108(0x8)
	};


	// Struct /SupplyDropRadioGameplay/Gameplay/SupplyDropRadioRepDataStruct.SupplyDropRadioRepDataStruct
	// Size: 0x8 (0x8 - 0x0)
	struct FSupplyDropRadioRepDataStruct	
	{
	public:
		FGameplayTag GameplayTag_5_542794F64B7B42F5AFFB4F99DE156B3F; // 0x0(0x4)
		int32_t Stock_21_7D54BF96461297E10D7DA1AA8FD4C012; // 0x4(0x4)
	};


	// Struct /SupplyDropRadioGameplay/Gameplay/SupplyDropRadioPlaylistDatatableStruct.SupplyDropRadioPlaylistDatatableStruct
	// Size: 0x50 (0x50 - 0x0)
	struct FSupplyDropRadioPlaylistDatatableStruct	
	{
	public:
		FGameplayTagQuery GameplayTagQuery_2_D6BCB2E9497B360F7516259AA81797B9; // 0x0(0x48)
		UDataTable* Datatable_5_C7E1168E435BAFB05233FDA129300904; // 0x48(0x8)
	};

}
