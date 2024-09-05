#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CustomizableObjectPopulation
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CustomizableObjectPopulation.CustomizableObjectPopulation
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UCustomizableObjectPopulation : public UObject	
	{
	public:
		FString Name; // 0x28(0x10)
		TArray<FClassWeightPair> ClassWeights; // 0x38(0x10)
		UCustomizableObjectPopulationGenerator* Generator; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObjectPopulation.CustomizableObjectPopulation");
			return ret;
		}

		bool RegeneratePopulation(int32_t Seed, TArray<UCustomizableObjectInstance*>& OutInstances, int32_t NumInstancesToGenerate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505E0E20(relative to base address)
		int32_t GeneratePopulation(TArray<UCustomizableObjectInstance*>& OutInstances, int32_t NumInstancesToGenerate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505E0C9C(relative to base address)
	};


	// Class CustomizableObjectPopulation.CustomizableObjectPopulationClass
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UCustomizableObjectPopulationClass : public UObject	
	{
	public:
		FString Name; // 0x28(0x10)
		UCustomizableObject* CustomizableObject; // 0x38(0x8)
		TArray<FString> AllowList; // 0x40(0x10)
		TArray<FString> Blocklist; // 0x50(0x10)
		TArray<FCustomizableObjectPopulationCharacteristic> Characteristics; // 0x60(0x10)
		TArray<FString> Tags; // 0x70(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x80(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObjectPopulation.CustomizableObjectPopulationClass");
			return ret;
		}
	};


	// Class CustomizableObjectPopulation.CustomizableObjectPopulationGenerator
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UCustomizableObjectPopulationGenerator : public UObject	
	{
	public:
		TArray<UCustomizableObject*> PopulationObjects; // 0x28(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObjectPopulation.CustomizableObjectPopulationGenerator");
			return ret;
		}
	};

}
