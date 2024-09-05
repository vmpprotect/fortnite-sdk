#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ArtTools
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Engine/ArtTools/RenderToTexture/Macros/RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class URenderToTextureFunctionLibrary_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Engine/ArtTools/RenderToTexture/Macros/RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C");
			return ret;
		}

		void Set Canvas Material Scale and Position(FVector2D Size, FVector2D Position, double Scale, UObject* __WorldContext, FVector2D& Screen Position, FVector2D& Screen Size); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Array to HLSL Int Array(TEnumAsByte<EIntTypes> Type, FString& Variable Name, TArray<int32_t>& int, TArray<FVector2D>& int2, TArray<FVector>& int3, TArray<FLinearColor>& int4, UObject* __WorldContext, FString& String); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/ArtTools/Tech_Art/Libraries/Macros/B_TechArt_GlobalLibrary.B_TechArt_GlobalLibrary_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UB_TechArt_GlobalLibrary_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/ArtTools/Tech_Art/Libraries/Macros/B_TechArt_GlobalLibrary.B_TechArt_GlobalLibrary_C");
			return ret;
		}

		void BindScalabilitySettings(FDelegateProperty& Delegate, UObject* __WorldContext); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsLumenEnabled(UObject* __WorldContext, bool& IsEnabled); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetDynamicMaterialInstance(UMeshComponent* MeshComponent, int32_t MaterialIndex, UObject* __WorldContext, UMaterialInstanceDynamic* Material Instance Dynamic); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AreBoundsOverlapping?(FBox BoundsA, FBox BoundsB, UObject* __WorldContext, bool& BoundsOverlap?); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddActorTag(AActor* Actor, FName& Tag, UObject* __WorldContext); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HoudiniInstanceHISMBuilder(UInstancedStaticMeshComponent* InstancedStaticMeshComponent, UDataTable* InstanceDataTable, double InstancesCountToImport, bool RandomScale, double RandomScaleMin, double RandomScaleMax, bool RandomRotationZ, double RandomRotationZMin, double RandomRotationZMax, bool UseWorldSpacePositions, UObject* __WorldContext); // Flags: Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/ArtTools/Tech_Art/ArtReview_SunTool/Data/EUW_FunctionLibrary.EUW_FunctionLibrary_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEUW_FunctionLibrary_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/ArtTools/Tech_Art/ArtReview_SunTool/Data/EUW_FunctionLibrary.EUW_FunctionLibrary_C");
			return ret;
		}

		void PointVector PointVector Intersection(); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector2D Lerp Vector 2D(FVector2D A, FVector2D B, double Alpha, UObject* __WorldContext); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Create SliderLabel(FPaintContext OnPaintContext, USlider* Slider, FVector2D PositionalShift, FString Label, FLinearColor Label Color, int32_t FontSize, UObject* __WorldContext, FPaintContext& ContextOut); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
