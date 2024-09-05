#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BP_BeanCosmeticMaterialsLibrary
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /BeanstalkCosmetics/BP_BeanCosmeticMaterialsLibrary.BP_BeanCosmeticMaterialsLibrary_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBP_BeanCosmeticMaterialsLibrary_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/BeanstalkCosmetics/BP_BeanCosmeticMaterialsLibrary.BP_BeanCosmeticMaterialsLibrary_C");
			return ret;
		}

		void GetMaterialValuesFromDT(UDataTable DT_Materials, int32_t RowNameToFind, UObject __WorldContext, FBeanstalkCosmetics_MaterialTypeInfo& MaterialType); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D5ACE9900
		void GetColorFromIndex(UDataTable DT_Colors, int32_t Index, UObject __WorldContext, FLinearColor& Color, bool& ColorFoundInDT); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D5ACE3D00
		void SetMaterialUvPatternPositionFromTextureSlot(UMaterialInstanceDynamic Material, FName ParameterName, int32_t TextureSlot, UDataTable DT_PatternAtlasTextureSlots, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D5ACEB600
		void MergeMaterialPropsIntoMaterial(UMaterialInstanceDynamic Material, FName ParameterName, UDataTable DT_Materials, int32_t MaterialIndexFromDT, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D5ACEB000
		void SetColorMaterialParameterFromIndex(UMaterialInstanceDynamic Material, FName ParameterName, UDataTable DT_Colors, int32_t ColorIndexFromDT, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D5ACEB100
		void Update Character Material(UBeanCosmeticItemDefinitionBase BeanCD, UMaterialInstanceDynamic BodyMaterial, UMaterialInstanceDynamic CostumeBodyMaterial, UMaterialInstanceDynamic CostumeHeadMaterial, UDataTable DT_Colors, UDataTable DT_Materials, UDataTable DT_PatternAtlasTextureSlots, UDataTable DT_Roughness, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D5ACEB500
	};

}
