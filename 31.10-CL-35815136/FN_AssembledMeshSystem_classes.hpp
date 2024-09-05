#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AssembledMeshSystem
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UCustomizableObjectInstance*> CustomizableObjectInstance; // 0x38(0x20)
		TWeakObjectPtr<UCustomizableObject*> CustomizableObject; // 0x58(0x20)
		int32_t ComponentIndex; // 0x78(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<USkeletalMesh*> SkeletalMesh; // 0x80(0x20)
		TMap<FString, FString> SelectedIntParams; // 0xA0(0x50)
		TMap<FString, float> SelectedFloatParams; // 0xF0(0x50)
		FAssembledMeshAttachmentRules AttachmentRules; // 0x140(0x50)
		TWeakObjectPtr<UClass*> AnimClass; // 0x190(0x20)
		FGameplayTagContainer SoundLibraryTags; // 0x1B0(0x20)
		TArray<FInstancedStruct> AdditionalData; // 0x1D0(0x10)

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
		TArray<UObject*> LoadedAssets; // 0xA0(0x10)
		unsigned char UnknownData00_6[0x20]; // 0xB0(0x20) UNKNOWN PROPERTY
		TArray<UAssembledMeshSchema*> MeshParts; // 0xD0(0x10)
		TArray<FAssembledComponentReferences> MeshPartComponents; // 0xE0(0x10)
		bool bAssignMeshPartsOnBeginPlay : 1; // 0xF0:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AssembledMeshSystem.AssembledMeshUserComponent");
			return ret;
		}

		void SetMeshParts(TArray<UAssembledMeshSchema*> InMeshParts); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74D051A38(relative to base address)
		void SetMeshPart(UAssembledMeshSchema* InMeshPart); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74D051970(relative to base address)
		void OnRep_MeshParts(); // Flags: Native|Protected, Memory Exec: 0x7FF748178B90(relative to base address)
		UAssembledMeshSchema GetMeshPart(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C6345FC(relative to base address)
		USkeletalMeshComponent GetAttachToComponent(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74D051948(relative to base address)
		void GatherAndAssignAssembledMeshParts(); // Flags: Native|Public, Memory Exec: 0x7FF74847EE18(relative to base address)
		void CustomizationCompleted(int32_t PartIndex); // Flags: Native|Protected, Memory Exec: 0x7FF74D0518C4(relative to base address)
	};

}
