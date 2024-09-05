#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CustomizableObjectPopulation
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CustomizableObjectPopulation.CustomizableObjectPopulation
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UCustomizableObjectPopulation : public UObject	
	{
	public:
		FString Name; // 0x28(0x10)
		TArray ClassWeights; // 0x38(0x10)
		UCustomizableObjectPopulationGenerator Generator; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObjectPopulation.CustomizableObjectPopulation");
			return ret;
		}

		bool RegeneratePopulation(int32_t Seed, TArray& OutInstances, int32_t NumInstancesToGenerate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BC0A78
		int32_t GeneratePopulation(TArray& OutInstances, int32_t NumInstancesToGenerate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BC0998
	};


	// Class CustomizableObjectPopulation.CustomizableObjectPopulationClass
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UCustomizableObjectPopulationClass : public UObject	
	{
	public:
		FString Name; // 0x28(0x10)
		UCustomizableObject CustomizableObject; // 0x38(0x8)
		TArray AllowList; // 0x40(0x10)
		TArray Blocklist; // 0x50(0x10)
		TArray Characteristics; // 0x60(0x10)
		TArray Tags; // 0x70(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x80(0x10) UNKNOWN PROPERTY

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
		TArray PopulationObjects; // 0x28(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomizableObjectPopulation.CustomizableObjectPopulationGenerator");
			return ret;
		}
	};

}
