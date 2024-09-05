#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Cosmetics
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct /BeanstalkCosmetics/Cosmetics/Datatables/BeanstalkCosmetics_PatternAtlasTextureSlotsInfo.BeanstalkCosmetics_PatternAtlasTextureSlotsInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FBeanstalkCosmetics_PatternAtlasTextureSlotsInfo	
	{
	public:
		FString Name_15_2545F8D141FCEFF4E1C26E95718DB478; // 0x0(0x10)
		FVector UV_Values_20_EF64094F4DFFACDF1F733FA3C3858409; // 0x10(0x18)
	};


	// Struct /BeanstalkCosmetics/Cosmetics/Datatables/BeanstalkCosmetics_RoughnessValuesInfo.BeanstalkCosmetics_RoughnessValuesInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FBeanstalkCosmetics_RoughnessValuesInfo	
	{
	public:
		FName Name_5_2545F8D141FCEFF4E1C26E95718DB478; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		double Roughness_10_EF64094F4DFFACDF1F733FA3C3858409; // 0x8(0x8)
	};


	// Struct /BeanstalkCosmetics/Cosmetics/Datatables/BeanstalkCosmetics_MaterialTypeInfo.BeanstalkCosmetics_MaterialTypeInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FBeanstalkCosmetics_MaterialTypeInfo	
	{
	public:
		FName Name_5_2545F8D141FCEFF4E1C26E95718DB478; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		double Metallic_17_26B17D57490B8DE99FD6AD85D810F3EB; // 0x8(0x8)
		double Roughness_10_EF64094F4DFFACDF1F733FA3C3858409; // 0x10(0x8)
		double Emissive_19_4467043B429E4D5BECF743BAE9E8BF3B; // 0x18(0x8)
	};

}
