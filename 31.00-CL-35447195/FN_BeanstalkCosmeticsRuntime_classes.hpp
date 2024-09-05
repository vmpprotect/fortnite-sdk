#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BeanstalkCosmeticsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class BeanstalkCosmeticsRuntime.BeanCosmeticItemDefinitionBase
	// Inherited from UFortCosmeticItemAdditionalData -> UObject
	// Size: 0xB8 (0xE0 - 0x28)
	class UBeanCosmeticItemDefinitionBase : public UFortCosmeticItemAdditionalData	
	{
	public:
		TWeakObjectPtr Body_Pattern; // 0x28(0x20)
		int32_t BodyFaceplateColorIndex; // 0x48(0x4)
		int32_t BodyFaceplateMaterialTypeIndex; // 0x4C(0x4)
		int32_t BodyEyesColorIndex; // 0x50(0x4)
		int32_t BodyEyesMaterialTypeIndex; // 0x54(0x4)
		bool bEyelashes; // 0x58(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x59(0x3) UNKNOWN PROPERTY
		int32_t EyelashesColorIndex; // 0x5C(0x4)
		int32_t EyelashesMaterialTypeIndex; // 0x60(0x4)
		bool bGlasses; // 0x64(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x65(0x3) UNKNOWN PROPERTY
		int32_t GlassesFrameColorIndex; // 0x68(0x4)
		int32_t GlassesFrameMaterialTypeIndex; // 0x6C(0x4)
		bool bGlassesLenses; // 0x70(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		int32_t GlassesLensesColorIndex; // 0x74(0x4)
		int32_t GlassesLensesMaterialTypeIndex; // 0x78(0x4)
		int32_t HeadCostumeMainColorIndex; // 0x7C(0x4)
		int32_t HeadCostumeMainMaterialTypeIndex; // 0x80(0x4)
		bool bHeadCostumeMainClothingPattern; // 0x84(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x85(0x3) UNKNOWN PROPERTY
		int32_t HeadCostumeSecondaryColorIndex; // 0x88(0x4)
		int32_t HeadCostumeSecondaryMaterialTypeIndex; // 0x8C(0x4)
		bool bHeadCostumeSecondaryClothingPattern; // 0x90(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x91(0x3) UNKNOWN PROPERTY
		int32_t HeadCostumeAccentColorIndex; // 0x94(0x4)
		int32_t HeadCostumeAccentMaterialTypeIndex; // 0x98(0x4)
		bool bHeadCostumeAccentClothingPattern; // 0x9C(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x9D(0x3) UNKNOWN PROPERTY
		int32_t BodyMainColorIndex; // 0xA0(0x4)
		int32_t BodyMainMaterialTypeIndex; // 0xA4(0x4)
		int32_t BodySecondaryColorIndex; // 0xA8(0x4)
		int32_t BodySecondaryMaterialTypeIndex; // 0xAC(0x4)
		int32_t CostumePatternAtlasTextureSlot; // 0xB0(0x4)
		int32_t HeadCostumePatternAtlasTextureSlot; // 0xB4(0x4)
		int32_t CostumeMainColorIndex; // 0xB8(0x4)
		int32_t CostumeMainMaterialTypeIndex; // 0xBC(0x4)
		bool bCostumeMainClothingPattern; // 0xC0(0x1)
		unsigned char UnknownData15_6[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		int32_t CostumeSecondaryColorIndex; // 0xC4(0x4)
		int32_t CostumeSecondaryMaterialTypeIndex; // 0xC8(0x4)
		bool bCostumeSecondaryClothingPattern; // 0xCC(0x1)
		unsigned char UnknownData16_6[0x3]; // 0xCD(0x3) UNKNOWN PROPERTY
		int32_t CostumeAccentColorIndex; // 0xD0(0x4)
		int32_t CostumeAccentMaterialTypeIndex; // 0xD4(0x4)
		bool bCostumeAccentClothingPattern; // 0xD8(0x1)
		unsigned char UnknownData17_7[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkCosmeticsRuntime.BeanCosmeticItemDefinitionBase");
			return ret;
		}
	};


	// Class BeanstalkCosmeticsRuntime.BeanCosmeticsData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UBeanCosmeticsData : public UPrimaryDataAsset	
	{
	public:
		UFortHeroType HeroType; // 0x30(0x8)
		UDataTable CharacterCosmeticsMap; // 0x38(0x8)
		UDataTable EmoteLookupMap; // 0x40(0x8)
		TArray DefaultCharacterCosmetics; // 0x48(0x10)
		UFortItemDefinition EmptyHandsPickaxeDef; // 0x58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkCosmeticsRuntime.BeanCosmeticsData");
			return ret;
		}
	};


	// Class BeanstalkCosmeticsRuntime.BeanFortPlayerMannequin
	// Inherited from AFortPlayerMannequin -> ASkeletalMeshActor -> AActor -> UObject
	// Size: 0x0 (0x608 - 0x608)
	class ABeanFortPlayerMannequin : public AFortPlayerMannequin	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkCosmeticsRuntime.BeanFortPlayerMannequin");
			return ret;
		}

		void BP_UpdateCosmeticMaterials(UBeanCosmeticItemDefinitionBase BeanCD, UMaterialInstanceDynamic MaterialBody, UMaterialInstanceDynamic MaterialCostume, UMaterialInstanceDynamic MaterialHead); // Flags: Event|Protected|BlueprintEvent 0x7FF414DFF8C0
	};


	// Class BeanstalkCosmeticsRuntime.FortAthenaMutator_BeanBRCosmeticsOverride
	// Inherited from AFortAthenaMutator_CosmeticLoadoutOverride -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x28 (0x370 - 0x348)
	class AFortAthenaMutator_BeanBRCosmeticsOverride : public AFortAthenaMutator_CosmeticLoadoutOverride	
	{
	public:
		TWeakObjectPtr CosmeticsData; // 0x348(0x20)
		UBeanCosmeticsData CosmeticsDataCache; // 0x368(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkCosmeticsRuntime.FortAthenaMutator_BeanBRCosmeticsOverride");
			return ret;
		}
	};


	// Class BeanstalkCosmeticsRuntime.FortCosmeticStep_ApplyBeanCD
	// Inherited from UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x48 (0xC8 - 0x80)
	class UFortCosmeticStep_ApplyBeanCD : public UFortCosmeticStep	
	{
	public:
		FGameplayTagQuery BeanPartQuery; // 0x80(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkCosmeticsRuntime.FortCosmeticStep_ApplyBeanCD");
			return ret;
		}

		void BP_UpdateCosmeticMaterials(UBeanCosmeticItemDefinitionBase BeanCD, UMaterialInstanceDynamic MaterialBody, UMaterialInstanceDynamic MaterialCostume, UMaterialInstanceDynamic MaterialHead); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414DFF9A0
	};


	// Class BeanstalkCosmeticsRuntime.FortCosmeticStep_BeanRemoveBackpack
	// Inherited from UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UFortCosmeticStep_BeanRemoveBackpack : public UFortCosmeticStep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkCosmeticsRuntime.FortCosmeticStep_BeanRemoveBackpack");
			return ret;
		}
	};

}
