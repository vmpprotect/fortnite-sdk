#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AssembledMeshSystem
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AssembledMeshSystem.AssembledMeshUser_AttachToComponentSpecifier
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAssembledMeshUser_AttachToComponentSpecifier : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AssembledMeshSystem.AssembledMeshUser_AttachToComponentSpecifier");
			return ret;
		}
	};


	// Class AssembledMeshSystem.AssembledMeshSchema
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x1B0 (0x1E0 - 0x30)
	class UAssembledMeshSchema : public UPrimaryDataAsset	
	{
	public:
		FGameplayTag MeshSchemaTag; // 0x30(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr CustomizableObjectInstance; // 0x38(0x20)
		TWeakObjectPtr CustomizableObject; // 0x58(0x20)
		int32_t ComponentIndex; // 0x78(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr SkeletalMesh; // 0x80(0x20)
		TMap SelectedIntParams; // 0xA0(0x50)
		TMap SelectedFloatParams; // 0xF0(0x50)
		FAssembledMeshAttachmentRules AttachmentRules; // 0x140(0x50)
		TWeakObjectPtr AnimClass; // 0x190(0x20)
		FGameplayTagContainer SoundLibraryTags; // 0x1B0(0x20)
		TArray AdditionalData; // 0x1D0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AssembledMeshSystem.AssembledMeshSchema");
			return ret;
		}
	};


	// Class AssembledMeshSystem.HeadAccDataAssetLink
	// Inherited from UDataAssetLink -> UNameSpacedUserData -> UAssetUserData -> UObject
	// Size: 0x0 (0x128 - 0x128)
	class UHeadAccDataAssetLink : public UDataAssetLink	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AssembledMeshSystem.HeadAccDataAssetLink");
			return ret;
		}
	};


	// Class AssembledMeshSystem.NeckAccDataAssetLink
	// Inherited from UDataAssetLink -> UNameSpacedUserData -> UAssetUserData -> UObject
	// Size: 0x0 (0x128 - 0x128)
	class UNeckAccDataAssetLink : public UDataAssetLink	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AssembledMeshSystem.NeckAccDataAssetLink");
			return ret;
		}
	};


	// Class AssembledMeshSystem.HipAccDataAssetLink
	// Inherited from UDataAssetLink -> UNameSpacedUserData -> UAssetUserData -> UObject
	// Size: 0x0 (0x128 - 0x128)
	class UHipAccDataAssetLink : public UDataAssetLink	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AssembledMeshSystem.HipAccDataAssetLink");
			return ret;
		}
	};


	// Class AssembledMeshSystem.AssembledMeshUserComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UAssembledMeshUserComponent : public UActorComponent	
	{
	public:
		TArray LoadedAssets; // 0xA0(0x10)
		unsigned char UnknownData02_6[0x20]; // 0xB0(0x20) UNKNOWN PROPERTY
		TArray MeshParts; // 0xD0(0x10)
		TArray MeshPartComponents; // 0xE0(0x10)
		bool bAssignMeshPartsOnBeginPlay : 1; // 0xF0:0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AssembledMeshSystem.AssembledMeshUserComponent");
			return ret;
		}

		void SetMeshParts(TArray InMeshParts); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414024538
		void SetMeshPart(UAssembledMeshSchema InMeshPart); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414024458
		void OnRep_MeshParts(); // Flags: Native|Protected 0x7FF414024378
		UAssembledMeshSchema GetMeshPart(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const 0x7FF414024298
		USkeletalMeshComponent GetAttachToComponent(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF4140241B8
		void GatherAndAssignAssembledMeshParts(); // Flags: Native|Public 0x7FF4140240D8
		void CustomizationCompleted(int32_t PartIndex); // Flags: Native|Protected 0x7FF414023FF8
	};

}
