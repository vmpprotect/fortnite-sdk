#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CosmeticsFrameworkLoadouts
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CosmeticsFrameworkLoadouts.BasicCosmeticLoadoutContext
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UBasicCosmeticLoadoutContext : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkLoadouts.BasicCosmeticLoadoutContext");
			return ret;
		}
	};


	// Class CosmeticsFrameworkLoadouts.CosmeticCustomizableItemDefinition
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCosmeticCustomizableItemDefinition : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkLoadouts.CosmeticCustomizableItemDefinition");
			return ret;
		}
	};


	// Class CosmeticsFrameworkLoadouts.CosmeticLoadoutContext
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCosmeticLoadoutContext : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutContext");
			return ret;
		}
	};


	// Class CosmeticsFrameworkLoadouts.CosmeticLoadoutItemDefinition
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCosmeticLoadoutItemDefinition : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutItemDefinition");
			return ret;
		}
	};


	// Class CosmeticsFrameworkLoadouts.CosmeticLoadoutSchema
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UCosmeticLoadoutSchema : public UPrimaryDataAsset	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FText DisplayName; // 0x38(0x10)
		TWeakObjectPtr<UTexture2D*> Icon; // 0x48(0x20)
		FGameplayTag ArchetypeTag; // 0x68(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		TArray<UCosmeticLoadoutSlotTemplate*> Slots; // 0x70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSchema");
			return ret;
		}
	};


	// Class CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UCosmeticLoadoutSlotTemplate : public UPrimaryDataAsset	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FGameplayTag SlotTag; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer MetaTags; // 0x40(0x20)
		FCosmeticLoadoutSlotRequirements Requirements; // 0x60(0x50)
		FString ShortName; // 0xB0(0x10)
		FPrimaryAssetId DefaultCosmeticItemId; // 0xC0(0x8)
		bool bAlwaysUseDefaultCosmeticItemId; // 0xC8(0x1)
		bool bIsEquippable; // 0xC9(0x1)
		unsigned char UnknownData02_7[0x6]; // 0xCA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate");
			return ret;
		}
	};


	// Class CosmeticsFrameworkLoadouts.CosmeticLoadoutArchetype
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UCosmeticLoadoutArchetype : public UPrimaryDataAsset	
	{
	public:
		FText DisplayName; // 0x30(0x10)
		TWeakObjectPtr<UTexture2D*> Icon; // 0x40(0x20)
		FGameplayTag ArchetypeGroupTag; // 0x60(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		TArray<UCosmeticLoadoutSchema*> Schemas; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutArchetype");
			return ret;
		}
	};


	// Class CosmeticsFrameworkLoadouts.CosmeticLoadoutSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UCosmeticLoadoutSubsystem : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSubsystem");
			return ret;
		}
	};

}
