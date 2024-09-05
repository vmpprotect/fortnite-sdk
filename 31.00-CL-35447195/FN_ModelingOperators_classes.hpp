#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ModelingOperators
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ModelingOperators.RecomputeUVsToolProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x38 (0xE0 - 0xA8)
	class URecomputeUVsToolProperties : public UInteractiveToolPropertySet	
	{
	public:
		bool bEnablePolygroupSupport; // 0xA8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		ERecomputeUVsPropertiesIslandMode IslandGeneration; // 0xAC(0x4)
		ERecomputeUVsPropertiesUnwrapType UnwrapType; // 0xB0(0x4)
		ERecomputeUVsToolOrientationMode AutoRotation; // 0xB4(0x4)
		bool bPreserveIrregularity; // 0xB8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		int32_t SmoothingSteps; // 0xBC(0x4)
		float SmoothingAlpha; // 0xC0(0x4)
		float MergingDistortionThreshold; // 0xC4(0x4)
		float MergingAngleThreshold; // 0xC8(0x4)
		ERecomputeUVsPropertiesLayoutType LayoutType; // 0xCC(0x4)
		int32_t TextureResolution; // 0xD0(0x4)
		float NormalizeScale; // 0xD4(0x4)
		bool bEnableUDIMLayout; // 0xD8(0x1)
		bool bUDIMCVAREnabled; // 0xD9(0x1)
		unsigned char UnknownData05_7[0x6]; // 0xDA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingOperators.RecomputeUVsToolProperties");
			return ret;
		}
	};


	// Class ModelingOperators.UVLayoutProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UUVLayoutProperties : public UInteractiveToolPropertySet	
	{
	public:
		EUVLayoutType LayoutType; // 0xA8(0x4)
		int32_t TextureResolution; // 0xAC(0x4)
		float Scale; // 0xB0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FVector2D Translation; // 0xB8(0x10)
		bool bAllowFlips; // 0xC8(0x1)
		bool bEnableUDIMLayout; // 0xC9(0x1)
		bool bUDIMCVAREnabled; // 0xCA(0x1)
		unsigned char UnknownData03_7[0x5]; // 0xCB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingOperators.UVLayoutProperties");
			return ret;
		}
	};


	// Class ModelingOperators.RecomputeUVsOpFactory
	// Inherited from UObject
	// Size: 0x118 (0x140 - 0x28)
	class URecomputeUVsOpFactory : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		URecomputeUVsToolProperties Settings; // 0x30(0x8)
		unsigned char UnknownData03_7[0x108]; // 0x38(0x108) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingOperators.RecomputeUVsOpFactory");
			return ret;
		}
	};


	// Class ModelingOperators.UVLayoutOperatorFactory
	// Inherited from UObject
	// Size: 0x178 (0x1A0 - 0x28)
	class UUVLayoutOperatorFactory : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UUVLayoutProperties Settings; // 0x30(0x8)
		unsigned char UnknownData03_7[0x168]; // 0x38(0x168) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModelingOperators.UVLayoutOperatorFactory");
			return ret;
		}
	};

}
