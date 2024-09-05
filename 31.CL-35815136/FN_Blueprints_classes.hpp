#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Blueprints
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /FortUILibrary/Blueprints/PostProcessor/BP_UI_PostProcessBlur.BP_UI_PostProcessBlur_C
	// Inherited from USlatePostBufferBlur -> USlateRHIPostBufferProcessor -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UBP_UI_PostProcessBlur_C : public USlatePostBufferBlur	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Blueprints/PostProcessor/BP_UI_PostProcessBlur.BP_UI_PostProcessBlur_C");
			return ret;
		}
	};


	// Class /FortUILibrary/Blueprints/PostProcessor/WBP_CaptureForPostBufferUpdate.WBP_CaptureForPostBufferUpdate_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2B8 - 0x2B0)
	class UWBP_CaptureForPostBufferUpdate_C : public UUserWidget	
	{
	public:
		UPostBufferUpdate* PostBufferUpdate; // 0x2B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Blueprints/PostProcessor/WBP_CaptureForPostBufferUpdate.WBP_CaptureForPostBufferUpdate_C");
			return ret;
		}
	};


	// Class /FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UUIKit_FunctionLibrary_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C");
			return ret;
		}

		void HexToColor(FString HEX, UObject* __WorldContext, FLinearColor& LinearColor); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FireEventElementInteractedByName(FString Element Name, UWidget* WidgetCallingFrom, UObject* __WorldContext, bool& Success); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InstantTransitionToSelected(UMaterialInstanceDynamic* Mid, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InstantTransitionToEnabled(UMaterialInstanceDynamic* Mid, bool IsSelected, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InstantTransitionToDisabled(UMaterialInstanceDynamic* Mid, bool IsSelected, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionToDeselectedFocused(UMaterialInstanceDynamic* Mid, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionToDeselectedIdle(UMaterialInstanceDynamic* Mid, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridSlotNudge(UWidget* Widget, FVector2D Nudge, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridSlotPadding(UWidget* Widget, FMargin Padding, UObject* __WorldContext); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridSlotLayer(UWidget* Widget, int32_t Layer, UObject* __WorldContext); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridSlotAlignment(UWidget* Widget, TEnumAsByte<EHorizontalAlignment> Horizontal, TEnumAsByte<EVerticalAlignment> Vertical, UObject* __WorldContext); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridSlotColumnAndRow(UWidget* Widget, int32_t Row, int32_t Row Span, int32_t Column, int32_t Column Span, UObject* __WorldContext); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveWidget(UWidget* Widget, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Copy MID Parameter Overrides(UMaterialInstanceDynamic* Target MID, UMaterialInstanceDynamic* Source MID, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeBase.v2_PlayerCameraModeBase_C
	// Inherited from UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv2_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeBase.v2_PlayerCameraModeBase_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Original/Sniper3PCamera.Sniper3PCamera_C
	// Inherited from UFort3PCam_Default -> UFort3PCameraMode -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class USniper3PCamera_C : public UFort3PCam_Default	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/Sniper3PCamera.Sniper3PCamera_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_MidRange.Targeting3PCamera_MidRange_C
	// Inherited from UFort3PCam_Targeting -> UFort3PCameraMode -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UTargeting3PCamera_MidRange_C : public UFort3PCam_Targeting	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/Targeting3PCamera_MidRange.Targeting3PCamera_MidRange_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_Scope.Targeting3PCamera_Scope_C
	// Inherited from UFort3PCam_Targeting -> UFort3PCameraMode -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UTargeting3PCamera_Scope_C : public UFort3PCam_Targeting	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/Targeting3PCamera_Scope.Targeting3PCamera_Scope_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeBase.Athena_PlayerCameraModeBase_C
	// Inherited from UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeBase.Athena_PlayerCameraModeBase_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeMelee.Athena_PlayerCameraModeMelee_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeMelee_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeMelee.Athena_PlayerCameraModeMelee_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRangedTargeting.Athena_PlayerCameraModeRangedTargeting_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeRangedTargeting_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRangedTargeting.Athena_PlayerCameraModeRangedTargeting_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeRangedTargeting.STW_PlayerCameraModeRangedTargeting_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class USTW_PlayerCameraModeRangedTargeting_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/StW/STW_PlayerCameraModeRangedTargeting.STW_PlayerCameraModeRangedTargeting_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraFocalPoint.Athena_PlayerCameraFocalPoint_C
	// Inherited from UFortCameraMode_FocalPoint -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x8 (0x1E40 - 0x1E38)
	class UAthena_PlayerCameraFocalPoint_C : public UFortCameraMode_FocalPoint	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x1E38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraFocalPoint.Athena_PlayerCameraFocalPoint_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeMelee.v2_PlayerCameraModeMelee_C
	// Inherited from Uv2_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv2_PlayerCameraModeMelee_C : public Uv2_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeMelee.v2_PlayerCameraModeMelee_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeRanged.v2_PlayerCameraModeRanged_C
	// Inherited from Uv2_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv2_PlayerCameraModeRanged_C : public Uv2_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeRanged.v2_PlayerCameraModeRanged_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingVeryShortRange.v2_PlayerCameraModeTargetingVeryShortRange_C
	// Inherited from Uv2_PlayerCameraModeRanged_C -> Uv2_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv2_PlayerCameraModeTargetingVeryShortRange_C : public Uv2_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingVeryShortRange.v2_PlayerCameraModeTargetingVeryShortRange_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Original/Ranged3PCamera.Ranged3PCamera_C
	// Inherited from UFort3PCam_Default -> UFort3PCameraMode -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class URanged3PCamera_C : public UFort3PCam_Default	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/Ranged3PCamera.Ranged3PCamera_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_WaterSprintBoost.Athena_PlayerCameraMode_WaterSprintBoost_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_WaterSprintBoost_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_WaterSprintBoost.Athena_PlayerCameraMode_WaterSprintBoost_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCamera_DBNO.Athena_PlayerCamera_DBNO_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCamera_DBNO_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCamera_DBNO.Athena_PlayerCamera_DBNO_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeBase.v3_PlayerCameraModeBase_C
	// Inherited from UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv3_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeBase.v3_PlayerCameraModeBase_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeRanged.v3_PlayerCameraModeRanged_C
	// Inherited from Uv3_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv3_PlayerCameraModeRanged_C : public Uv3_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeRanged.v3_PlayerCameraModeRanged_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingVeryShortRange.v3_PlayerCameraModeTargetingVeryShortRange_C
	// Inherited from Uv3_PlayerCameraModeRanged_C -> Uv3_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv3_PlayerCameraModeTargetingVeryShortRange_C : public Uv3_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingVeryShortRange.v3_PlayerCameraModeTargetingVeryShortRange_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeBase.v1_PlayerCameraModeBase_C
	// Inherited from UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv1_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeBase.v1_PlayerCameraModeBase_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeMelee.v1_PlayerCameraModeMelee_C
	// Inherited from Uv1_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv1_PlayerCameraModeMelee_C : public Uv1_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeMelee.v1_PlayerCameraModeMelee_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingVeryShortRange.v1_PlayerCameraModeTargetingVeryShortRange_C
	// Inherited from Uv1_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv1_PlayerCameraModeTargetingVeryShortRange_C : public Uv1_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingVeryShortRange.v1_PlayerCameraModeTargetingVeryShortRange_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeMelee.STW_PlayerCameraModeMelee_C
	// Inherited from UAthena_PlayerCameraModeMelee_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class USTW_PlayerCameraModeMelee_C : public UAthena_PlayerCameraModeMelee_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/StW/STW_PlayerCameraModeMelee.STW_PlayerCameraModeMelee_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeBase.STW_PlayerCameraModeBase_C
	// Inherited from USTW_PlayerCameraModeMelee_C -> UAthena_PlayerCameraModeMelee_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class USTW_PlayerCameraModeBase_C : public USTW_PlayerCameraModeMelee_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/StW/STW_PlayerCameraModeBase.STW_PlayerCameraModeBase_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_LongRange.Targeting3PCamera_LongRange_C
	// Inherited from UFort3PCam_Targeting -> UFort3PCameraMode -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UTargeting3PCamera_LongRange_C : public UFort3PCam_Targeting	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/Targeting3PCamera_LongRange.Targeting3PCamera_LongRange_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Original/HoverboardCameraMode.HoverboardCameraMode_C
	// Inherited from UFortHoverboardCameraMode -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E40 - 0x1E40)
	class UHoverboardCameraMode_C : public UFortHoverboardCameraMode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/HoverboardCameraMode.HoverboardCameraMode_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeMelee.v3_PlayerCameraModeMelee_C
	// Inherited from Uv3_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv3_PlayerCameraModeMelee_C : public Uv3_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeMelee.v3_PlayerCameraModeMelee_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_RespawnedAir.Athena_PlayerCameraMode_RespawnedAir_C
	// Inherited from UFortCameraMode_RespawnedAir -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_RespawnedAir_C : public UFortCameraMode_RespawnedAir	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_RespawnedAir.Athena_PlayerCameraMode_RespawnedAir_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingPistol.v1_PlayerCameraModeTargetingPistol_C
	// Inherited from Uv1_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv1_PlayerCameraModeTargetingPistol_C : public Uv1_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingPistol.v1_PlayerCameraModeTargetingPistol_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingScope.v1_PlayerCameraModeTargetingScope_C
	// Inherited from Uv1_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv1_PlayerCameraModeTargetingScope_C : public Uv1_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingScope.v1_PlayerCameraModeTargetingScope_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v3_MPR/PlayerCameraMode_DBNO.PlayerCameraMode_DBNO_C
	// Inherited from Uv3_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UPlayerCameraMode_DBNO_C : public Uv3_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/PlayerCameraMode_DBNO.PlayerCameraMode_DBNO_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingRifle.v1_PlayerCameraModeTargetingRifle_C
	// Inherited from Uv1_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv1_PlayerCameraModeTargetingRifle_C : public Uv1_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingRifle.v1_PlayerCameraModeTargetingRifle_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingPistol.v2_PlayerCameraModeTargetingPistol_C
	// Inherited from Uv2_PlayerCameraModeRanged_C -> Uv2_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv2_PlayerCameraModeTargetingPistol_C : public Uv2_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingPistol.v2_PlayerCameraModeTargetingPistol_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_VeryShortRange.Targeting3PCamera_VeryShortRange_C
	// Inherited from UFort3PCam_Targeting -> UFort3PCameraMode -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UTargeting3PCamera_VeryShortRange_C : public UFort3PCam_Targeting	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/Targeting3PCamera_VeryShortRange.Targeting3PCamera_VeryShortRange_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingScope.v2_PlayerCameraModeTargetingScope_C
	// Inherited from Uv2_PlayerCameraModeRanged_C -> Uv2_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv2_PlayerCameraModeTargetingScope_C : public Uv2_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingScope.v2_PlayerCameraModeTargetingScope_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Original/Targeting3PCamera.Targeting3PCamera_C
	// Inherited from UFort3PCam_Targeting -> UFort3PCameraMode -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UTargeting3PCamera_C : public UFort3PCam_Targeting	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/Targeting3PCamera.Targeting3PCamera_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Original/CinematicCamera_MatineeTransition.CinematicCamera_MatineeTransition_C
	// Inherited from UFortCinematicCamera -> UFortCameraMode -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UCinematicCamera_MatineeTransition_C : public UFortCinematicCamera	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/CinematicCamera_MatineeTransition.CinematicCamera_MatineeTransition_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Original/Default3PCamera.Default3PCamera_C
	// Inherited from UFort3PCam_Default -> UFort3PCameraMode -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UDefault3PCamera_C : public UFort3PCam_Default	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/Default3PCamera.Default3PCamera_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingScope.v3_PlayerCameraModeTargetingScope_C
	// Inherited from Uv3_PlayerCameraModeRanged_C -> Uv3_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv3_PlayerCameraModeTargetingScope_C : public Uv3_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingScope.v3_PlayerCameraModeTargetingScope_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraHoisted.Athena_PlayerCameraHoisted_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraHoisted_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraHoisted.Athena_PlayerCameraHoisted_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingRifle.v2_PlayerCameraModeTargetingRifle_C
	// Inherited from Uv2_PlayerCameraModeRanged_C -> Uv2_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv2_PlayerCameraModeTargetingRifle_C : public Uv2_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingRifle.v2_PlayerCameraModeTargetingRifle_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveDive.Athena_PlayerCameraModeSkydiveDive_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeSkydiveDive_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveDive.Athena_PlayerCameraModeSkydiveDive_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingAssault.v3_PlayerCameraModeTargetingAssault_C
	// Inherited from Uv3_PlayerCameraModeRanged_C -> Uv3_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv3_PlayerCameraModeTargetingAssault_C : public Uv3_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingAssault.v3_PlayerCameraModeTargetingAssault_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveGlide.Athena_PlayerCameraModeSkydiveGlide_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeSkydiveGlide_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveGlide.Athena_PlayerCameraModeSkydiveGlide_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingPistol.v3_PlayerCameraModeTargetingPistol_C
	// Inherited from Uv3_PlayerCameraModeRanged_C -> Uv3_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv3_PlayerCameraModeTargetingPistol_C : public Uv3_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingPistol.v3_PlayerCameraModeTargetingPistol_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingRifle.v3_PlayerCameraModeTargetingRifle_C
	// Inherited from Uv3_PlayerCameraModeRanged_C -> Uv3_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv3_PlayerCameraModeTargetingRifle_C : public Uv3_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingRifle.v3_PlayerCameraModeTargetingRifle_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeRanged.v1_PlayerCameraModeRanged_C
	// Inherited from Uv1_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class Uv1_PlayerCameraModeRanged_C : public Uv1_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeRanged.v1_PlayerCameraModeRanged_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingTethered.Athena_PlayerCameraModeTargetingTethered_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingTethered_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingTethered.Athena_PlayerCameraModeTargetingTethered_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveParachute.Athena_PlayerCameraModeSkydiveParachute_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeSkydiveParachute_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveParachute.Athena_PlayerCameraModeSkydiveParachute_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Original/MainPlayerCamera.MainPlayerCamera_C
	// Inherited from AFortPlayerCameraZone -> AFortPlayerCameraBase -> APlayerCameraManager -> AActor -> UObject
	// Size: 0x0 (0x2E90 - 0x2E90)
	class AMainPlayerCamera_C : public AFortPlayerCameraZone	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/MainPlayerCamera.MainPlayerCamera_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/FirstPerson/PlayerCameraMode1P.PlayerCameraMode1P_C
	// Inherited from UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UPlayerCameraMode1P_C : public UFortCameraMode_ThirdPerson	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/FirstPerson/PlayerCameraMode1P.PlayerCameraMode1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterfacePlayerPawn_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C");
			return ret;
		}

		void MeleeSwingLeft_End(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MeleeSwingRight_End(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Melee_Effect_Color(FVector& Melee_Color_Set); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MeleeSwingLeft(bool First Left); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MeleeSwingRight(bool First Right); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Blueprints/Camera/Original/PlayerTakeDamage_CameraShake.PlayerTakeDamage_CameraShake_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UPlayerTakeDamage_CameraShake_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/PlayerTakeDamage_CameraShake.PlayerTakeDamage_CameraShake_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRanged.Athena_PlayerCameraModeRanged_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeRanged_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRanged.Athena_PlayerCameraModeRanged_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeRanged.STW_PlayerCameraModeRanged_C
	// Inherited from UAthena_PlayerCameraModeRanged_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class USTW_PlayerCameraModeRanged_C : public UAthena_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/StW/STW_PlayerCameraModeRanged.STW_PlayerCameraModeRanged_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/FirstPerson/PlayerCameraMode1P_Targeting.PlayerCameraMode1P_Targeting_C
	// Inherited from UPlayerCameraMode1P_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UPlayerCameraMode1P_Targeting_C : public UPlayerCameraMode1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/FirstPerson/PlayerCameraMode1P_Targeting.PlayerCameraMode1P_Targeting_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_1P.Athena_PlayerCameraMode_1P_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_1P_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_1P.Athena_PlayerCameraMode_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Harveting_stock_1P.Athena_PlayerCameraMode_Harveting_stock_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_Harveting_stock_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Harveting_stock_1P.Athena_PlayerCameraMode_Harveting_stock_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_HidingProp.Athena_PlayerCameraMode_HidingProp_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_HidingProp_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_HidingProp.Athena_PlayerCameraMode_HidingProp_C");
			return ret;
		}
	};


	// Class /FortWater/Blueprints/LandscapeWaterInfo.LandscapeWaterInfo_C
	// Inherited from AActor -> UObject
	// Size: 0xA8 (0x338 - 0x290)
	class ALandscapeWaterInfo_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		USceneComponent* DefaultSceneRoot; // 0x298(0x8)
		double Flood_Water_Level; // 0x2A0(0x8)
		UTexture2D* Game_Texture__Water_Velocity_and_Height; // 0x2A8(0x8)
		FTransform LS_Transform; // 0x2B0(0x60)
		FIntPoint LS_RT_Res; // 0x310(0x8)
		FVector2D Quad_Size; // 0x318(0x10)
		bool Use_Terrain_Velocity_and_Height_Texture; // 0x328(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x329(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* External_Water_MID_To_Update; // 0x330(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortWater/Blueprints/LandscapeWaterInfo.LandscapeWaterInfo_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Flood Water Level(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_LandscapeWaterInfo(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_HidingProp_Teleport.Athena_PlayerCameraMode_HidingProp_Teleport_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_HidingProp_Teleport_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_HidingProp_Teleport.Athena_PlayerCameraMode_HidingProp_Teleport_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C
	// Inherited from APawn -> AActor -> UObject
	// Size: 0x48 (0x358 - 0x310)
	class ABP_TeleportationDrone_C : public APawn	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x8)
		USkeletalMeshComponentBudgeted* SkeletalMeshComponentBudgeted; // 0x318(0x8)
		USceneComponent* Scene; // 0x320(0x8)
		double AnimPlayRate; // 0x328(0x8)
		UMaterialInstanceDynamic* StaticMeshMID; // 0x330(0x8)
		bool TeleportIn; // 0x338(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x339(0x7) UNKNOWN PROPERTY
		UParticleSystemComponent* CharacterAttached; // 0x340(0x8)
		bool InLobby; // 0x348(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x349(0x7) UNKNOWN PROPERTY
		USkeletalMeshComponent* Mesh_for_Attachment; // 0x350(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C");
			return ret;
		}

		UAnimationAsset Get Spawn Animation(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySpawnAnim(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSpawnOutAnimEnded(UAnimMontage* Montage, bool bInterrupted); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_TeleportationDrone(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C
	// Inherited from APawn -> AActor -> UObject
	// Size: 0x70 (0x380 - 0x310)
	class ABP_VictoryDrone_C : public APawn	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x8)
		USkeletalMeshComponentBudgeted* SkeletalMeshComponentBudgeted; // 0x318(0x8)
		USceneComponent* Scene; // 0x320(0x8)
		FMulticastInlineDelegate SpawnOutAnimEndedDispatcher; // 0x328(0x10)
		double AnimPlayRate; // 0x338(0x8)
		UMaterialInstanceDynamic* StaticMeshMID; // 0x340(0x8)
		bool TeleportIn; // 0x348(0x1)
		bool IsAthena; // 0x349(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x34A(0x6) UNKNOWN PROPERTY
		AFortPawn* TargetPlayer; // 0x350(0x8)
		UParticleSystemComponent* CharacterAttached; // 0x358(0x8)
		bool InLobby; // 0x360(0x1)
		bool IsNPC; // 0x361(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x362(0x2) UNKNOWN PROPERTY
		FName AttachPoint; // 0x364(0x4)
		bool isDecoy; // 0x368(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x369(0x7) UNKNOWN PROPERTY
		USkeletalMeshComponent* Mesh_for_Attachment; // 0x370(0x8)
		USoundBase* SoundOnNPCDeath; // 0x378(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C");
			return ret;
		}

		void Added Death Audio(USoundBase* Sound to Spawn); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Decoy FX Parameters(TArray<FParticleSysParam>& Instance Parameters); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NPC FX Parameters(TArray<FParticleSysParam>& Instance Parameters); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NotifyTeleportFinishedTriggered(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySpawnAnim(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitDrone(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSpawnOutAnimEnded(UAnimMontage* Montage, bool bInterrupted); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_VictoryDrone(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnOutAnimEndedDispatcher__DelegateSignature(ABP_VictoryDrone_C* Drone); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Harveting_1blade_1P.Athena_PlayerCameraMode_Harveting_1blade_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_Harveting_1blade_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Harveting_1blade_1P.Athena_PlayerCameraMode_Harveting_1blade_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Components/GSC_MiniMapDataOverride.GSC_MiniMapDataOverride_C
	// Inherited from UFortGameStateComponent_MiniMapDataOverride -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UGSC_MiniMapDataOverride_C : public UFortGameStateComponent_MiniMapDataOverride	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Components/GSC_MiniMapDataOverride.GSC_MiniMapDataOverride_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Interfaces/BlueprintDebuggingInterface.BlueprintDebuggingInterface_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBlueprintDebuggingInterface_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Interfaces/BlueprintDebuggingInterface.BlueprintDebuggingInterface_C");
			return ret;
		}

		void GetBlueprintLogLevel(TEnumAsByte<BlueprintLogLevel>& BlueprintLogLevel); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Blueprints/MacroLibraries/BuildingFunctionLibrary.BuildingFunctionLibrary_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBuildingFunctionLibrary_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/MacroLibraries/BuildingFunctionLibrary.BuildingFunctionLibrary_C");
			return ret;
		}

		void RequestComponentResource(UCreativeIslandResourceManagerComponent* ResourceManager, FName ResourceTag, UActorComponent* Component, FVector WorldLocation, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SweepAgainstActorTypes(AActor* TestActor, FVector StartLocation, FVector EndLocation, double SweepRadius, TArray<TEnumAsByte>& SweepObjectTypes, TArray<UClass*>& ActorClassFilters, UObject* __WorldContext, bool& Overlapped); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShouldLogForInstigator(TEnumAsByte<BlueprintLogLevel> Instance Log Level, UObject* Instigator, UObject* __WorldContext, bool& Should Log?); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LogString(TEnumAsByte<BlueprintLogLevel> Instance Log Level, FString LogString, bool PrintToScreen, UObject* Instigator, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Blueprints/FunctionLibraries/PlatformHelpersLibrary.PlatformHelpersLibrary_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPlatformHelpersLibrary_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/FunctionLibraries/PlatformHelpersLibrary.PlatformHelpersLibrary_C");
			return ret;
		}

		bool isPcPerfMode(UObject* __WorldContext); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool isJanus(UObject* __WorldContext); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool isMithril(UObject* __WorldContext); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool isDamascus(UObject* __WorldContext); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeCreative.Athena_PlayerCameraModeCreative_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeCreative_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeCreative.Athena_PlayerCameraModeCreative_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_SportValetADS.Athena_PlayerCameraMode_SportValetADS_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_SportValetADS_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_SportValetADS.Athena_PlayerCameraMode_SportValetADS_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingLauncherGrenade_V2.Athena_PlayerCameraModeTargetingLauncherGrenade_V2_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingLauncherGrenade_V2_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingLauncherGrenade_V2.Athena_PlayerCameraModeTargetingLauncherGrenade_V2_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRocket.Athena_PlayerCameraModeRocket_C
	// Inherited from UAthena_PlayerCameraModeRanged_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeRocket_C : public UAthena_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRocket.Athena_PlayerCameraModeRocket_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingScopeMidRange.Athena_PlayerCameraModeTargetingScopeMidRange_C
	// Inherited from UAthena_PlayerCameraModeSniper_C -> UAthena_PlayerCameraModeRanged_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingScopeMidRange_C : public UAthena_PlayerCameraModeSniper_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingScopeMidRange.Athena_PlayerCameraModeTargetingScopeMidRange_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSniper.Athena_PlayerCameraModeSniper_C
	// Inherited from UAthena_PlayerCameraModeRanged_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeSniper_C : public UAthena_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSniper.Athena_PlayerCameraModeSniper_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingLauncherRocket.Athena_PlayerCameraModeTargetingLauncherRocket_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingLauncherRocket_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingLauncherRocket.Athena_PlayerCameraModeTargetingLauncherRocket_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_AR_Auto_1P.Athena_PlayerCameraModeTargeting_AR_Auto_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_AR_1P_C -> UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_AR_Auto_1P_C : public UAthena_PlayerCameraModeTargeting_AR_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_AR_Auto_1P.Athena_PlayerCameraModeTargeting_AR_Auto_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_AR_1P.Athena_PlayerCameraModeTargeting_AR_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_AR_1P_C : public UAthena_PlayerCameraModeTargeting_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_AR_1P.Athena_PlayerCameraModeTargeting_AR_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingAssault_Reload.Athena_PlayerCameraModeTargetingAssault_Reload_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingAssault_Reload_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingAssault_Reload.Athena_PlayerCameraModeTargetingAssault_Reload_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeTargetingAssault.STW_PlayerCameraModeTargetingAssault_C
	// Inherited from UAthena_PlayerCameraModeTargetingAssault_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class USTW_PlayerCameraModeTargetingAssault_C : public UAthena_PlayerCameraModeTargetingAssault_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/StW/STW_PlayerCameraModeTargetingAssault.STW_PlayerCameraModeTargetingAssault_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingAssault.Athena_PlayerCameraModeTargetingAssault_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingAssault_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingAssault.Athena_PlayerCameraModeTargetingAssault_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_GrenadeLauncher_1P.Athena_PlayerCameraModeTargeting_GrenadeLauncher_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_GrenadeLauncher_1P_C : public UAthena_PlayerCameraModeTargeting_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_GrenadeLauncher_1P.Athena_PlayerCameraModeTargeting_GrenadeLauncher_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_1P.Athena_PlayerCameraModeTargeting_1P_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_1P_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_1P.Athena_PlayerCameraModeTargeting_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRanged_Hipfire_V2.Athena_PlayerCameraModeRanged_Hipfire_V2_C
	// Inherited from UAthena_PlayerCameraModeRanged_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeRanged_Hipfire_V2_C : public UAthena_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRanged_Hipfire_V2.Athena_PlayerCameraModeRanged_Hipfire_V2_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingLauncherRCRocket.Athena_PlayerCameraModeTargetingLauncherRCRocket_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingLauncherRCRocket_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingLauncherRCRocket.Athena_PlayerCameraModeTargetingLauncherRCRocket_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeTargetingLauncherLarge.STW_PlayerCameraModeTargetingLauncherLarge_C
	// Inherited from UAthena_PlayerCameraModeTargetingLauncherMilitary_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class USTW_PlayerCameraModeTargetingLauncherLarge_C : public UAthena_PlayerCameraModeTargetingLauncherMilitary_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/StW/STW_PlayerCameraModeTargetingLauncherLarge.STW_PlayerCameraModeTargetingLauncherLarge_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingLauncherMilitary.Athena_PlayerCameraModeTargetingLauncherMilitary_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingLauncherMilitary_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingLauncherMilitary.Athena_PlayerCameraModeTargetingLauncherMilitary_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeLauncherLarge.STW_PlayerCameraModeLauncherLarge_C
	// Inherited from UAthena_PlayerCameraModeLauncherMilitary_C -> UAthena_PlayerCameraModeRanged_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class USTW_PlayerCameraModeLauncherLarge_C : public UAthena_PlayerCameraModeLauncherMilitary_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/StW/STW_PlayerCameraModeLauncherLarge.STW_PlayerCameraModeLauncherLarge_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeLauncherMilitary.Athena_PlayerCameraModeLauncherMilitary_C
	// Inherited from UAthena_PlayerCameraModeRanged_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeLauncherMilitary_C : public UAthena_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeLauncherMilitary.Athena_PlayerCameraModeLauncherMilitary_C");
			return ret;
		}
	};


	// Class /GrindRail/Blueprints/GE_LowGrav_GrindRail.GE_LowGrav_GrindRail_C
	// Inherited from UGE_Athena_TillLandFallDamageImmunity_Grant_Parent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_LowGrav_GrindRail_C : public UGE_Athena_TillLandFallDamageImmunity_Grant_Parent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/GE_LowGrav_GrindRail.GE_LowGrav_GrindRail_C");
			return ret;
		}
	};


	// Class /GrindRail/Blueprints/GE_DisableAirControl_GrindRail.GE_DisableAirControl_GrindRail_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_DisableAirControl_GrindRail_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/GE_DisableAirControl_GrindRail.GE_DisableAirControl_GrindRail_C");
			return ret;
		}
	};


	// Class /GrindRail/Blueprints/GE_GrindRail_DeviceDamage.GE_GrindRail_DeviceDamage_C
	// Inherited from UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_GrindRail_DeviceDamage_C : public UGet_DirectDamageParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/GE_GrindRail_DeviceDamage.GE_GrindRail_DeviceDamage_C");
			return ret;
		}
	};


	// Class /GrindRail/Blueprints/CameraModifier_Grinding.CameraModifier_Grinding_C
	// Inherited from UFortCameraModifier_Grinding -> UCameraModifier -> UObject
	// Size: 0x9 (0x9C9 - 0x9C0)
	class UCameraModifier_Grinding_C : public UFortCameraModifier_Grinding	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9C0(0x8)
		bool TurningOff; // 0x9C8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/CameraModifier_Grinding.CameraModifier_Grinding_C");
			return ret;
		}

		void TurnOff(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TurnOn(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveSelf(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_CameraModifier_Grinding(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrindRail/Blueprints/GE_GrindingIncludingInAir.GE_GrindingIncludingInAir_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_GrindingIncludingInAir_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/GE_GrindingIncludingInAir.GE_GrindingIncludingInAir_C");
			return ret;
		}
	};


	// Class /GrindRail/Blueprints/GE_GrindRail_VehicleDamage.GE_GrindRail_VehicleDamage_C
	// Inherited from UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_GrindRail_VehicleDamage_C : public UGet_DirectDamageParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/GE_GrindRail_VehicleDamage.GE_GrindRail_VehicleDamage_C");
			return ret;
		}
	};


	// Class /GrindRail/Blueprints/GA_GrindRail_KeybindDisplay.GA_GrindRail_KeybindDisplay_C
	// Inherited from UFortGameplayAbility_KeybindDisplay -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x8 (0xB68 - 0xB60)
	class UGA_GrindRail_KeybindDisplay_C : public UFortGameplayAbility_KeybindDisplay	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB60(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/GA_GrindRail_KeybindDisplay.GA_GrindRail_KeybindDisplay_C");
			return ret;
		}

		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GA_GrindRail_KeybindDisplay(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrindRail/Blueprints/GrindRail_TipComponent.GrindRail_TipComponent_C
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x590 - 0x590)
	class UGrindRail_TipComponent_C : public UStaticMeshComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/GrindRail_TipComponent.GrindRail_TipComponent_C");
			return ret;
		}
	};


	// Class /GrindRail/Blueprints/BGA_GrindRail.BGA_GrindRail_C
	// Inherited from AFortGrindRail -> ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x2E8 (0xF40 - 0xC58)
	class ABGA_GrindRail_C : public AFortGrindRail	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xC58(0x8)
		UInstancedStaticMeshComponent* booster_InstancedStaticMesh; // 0xC60(0x8)
		USplineComponent* Spline; // 0xC68(0x8)
		USceneComponent* DefaultSceneRoot; // 0xC70(0x8)
		double DistancePerBoosterArrow; // 0xC78(0x8)
		TArray<FGrindRail_Booster_Directional> Boosters; // 0xC80(0x10)
		bool Full_Circle; // 0xC90(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xC91(0x7) UNKNOWN PROPERTY
		UStaticMeshComponent* StartTip; // 0xC98(0x8)
		UStaticMeshComponent* EndTip; // 0xCA0(0x8)
		FGrindRail_TipOptions Tip_Caps; // 0xCA8(0x2)
		unsigned char UnknownData01_6[0x6]; // 0xCAA(0x6) UNKNOWN PROPERTY
		FVector4 EmissiveColor; // 0xCB0(0x20)
		FLinearColor RedColor; // 0xCD0(0x10)
		FLinearColor GreenColor; // 0xCE0(0x10)
		FLinearColor BlueColor; // 0xCF0(0x10)
		FLinearColor YellowColor; // 0xD00(0x10)
		UBP_FortPawnGrindingProvider_C* GrindingProvider; // 0xD10(0x8)
		USkeletalMeshComponent* Player_Mesh; // 0xD18(0x8)
		FLinearColor SkyBlue; // 0xD20(0x10)
		FLinearColor Purple; // 0xD30(0x10)
		float Glow_start_Radius; // 0xD40(0x4)
		float Glow_End_Radius; // 0xD44(0x4)
		float Glow_start__Intensity; // 0xD48(0x4)
		float Glow__end_Intensity; // 0xD4C(0x4)
		TArray<USplineMeshComponent*> SplineStaticMesh; // 0xD50(0x10)
		UMaterialInterface* MaterialOfEmisssive; // 0xD60(0x8)
		bool _Glow_start_and_End; // 0xD68(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD69(0x3) UNKNOWN PROPERTY
		int32_t Last_Index; // 0xD6C(0x4)
		TEnumAsByte<ColorSelect> Color_Select_Enum; // 0xD70(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xD71(0x3) UNKNOWN PROPERTY
		FLinearColor Orange; // 0xD74(0x10)
		unsigned char UnknownData04_6[0x4]; // 0xD84(0x4) UNKNOWN PROPERTY
		TArray<UStaticMeshComponent*> BoosterMeshes; // 0xD88(0x10)
		bool IgnoreEmissiveDistanceFade; // 0xD98(0x1)
		unsigned char UnknownData05_6[0x7]; // 0xD99(0x7) UNKNOWN PROPERTY
		UInstancedStaticMeshComponent* Target; // 0xDA0(0x8)
		bool Booster_Arrow_style_Select_; // 0xDA8(0x1)
		unsigned char UnknownData06_6[0x7]; // 0xDA9(0x7) UNKNOWN PROPERTY
		UInstancedStaticMeshComponent* Instance_mesh; // 0xDB0(0x8)
		int32_t Instance_Index; // 0xDB8(0x4)
		float Animation_period; // 0xDBC(0x4)
		bool SideA_Reverse_animation_direction; // 0xDC0(0x1)
		bool SideB_Reverse_animation_direction; // 0xDC1(0x1)
		unsigned char UnknownData07_6[0x6]; // 0xDC2(0x6) UNKNOWN PROPERTY
		TWeakObjectPtr<UTexture2D*> SplineMeshBillboard; // 0xDC8(0x20)
		TWeakObjectPtr<UStaticMesh*> TipMesh; // 0xDE8(0x20)
		int32_t Animation_trailing_length; // 0xE08(0x4)
		unsigned char UnknownData08_6[0x4]; // 0xE0C(0x4) UNKNOWN PROPERTY
		UHierarchicalInstancedStaticMeshComponent* instance_array; // 0xE10(0x8)
		int32_t instance_meshIndex; // 0xE18(0x4)
		unsigned char UnknownData09_6[0x4]; // 0xE1C(0x4) UNKNOWN PROPERTY
		UHierarchicalInstancedStaticMeshComponent* instance_staic_mesh; // 0xE20(0x8)
		int32_t Array_Index; // 0xE28(0x4)
		unsigned char UnknownData10_6[0x4]; // 0xE2C(0x4) UNKNOWN PROPERTY
		double ColorEmissiveScale; // 0xE30(0x8)
		UStaticMesh* Mesh_Rail_Default; // 0xE38(0x8)
		UStaticMesh* Mesh_Interaction; // 0xE40(0x8)
		double SplineMeshLength; // 0xE48(0x8)
		bool IsChronoGrindRail; // 0xE50(0x1)
		unsigned char UnknownData11_6[0x7]; // 0xE51(0x7) UNKNOWN PROPERTY
		double BoosterLocalPostionZ; // 0xE58(0x8)
		double BoosterLocalPostionX; // 0xE60(0x8)
		double BoosterLocalPostionY_Offset; // 0xE68(0x8)
		FGameplayTag GC_Sprinting; // 0xE70(0x4)
		FGameplayTag GC_SlowBoosting; // 0xE74(0x4)
		FGameplayTag GC_FastBoosting; // 0xE78(0x4)
		FGameplayTag GC_LandOnRail; // 0xE7C(0x4)
		FGameplayTag GC_ImpactPlayer; // 0xE80(0x4)
		unsigned char UnknownData12_6[0x4]; // 0xE84(0x4) UNKNOWN PROPERTY
		UClass* GE_GrindingIncludingInAir; // 0xE88(0x8)
		USoundLibrary* GrindRailSoundLibrary; // 0xE90(0x8)
		UClass* GrindRail_TipComponent_Class; // 0xE98(0x8)
		USoundMix* GrindingSoundMixMusic; // 0xEA0(0x8)
		UMaterialInterface* SplineVineMaterial; // 0xEA8(0x8)
		FVector BoosterScale; // 0xEB0(0x18)
		float ColorDesaturationAmount; // 0xEC8(0x4)
		unsigned char UnknownData13_6[0x4]; // 0xECC(0x4) UNKNOWN PROPERTY
		FRotator ManualTipRotation; // 0xED0(0x18)
		bool Allow_Manual_Tip_Rotation; // 0xEE8(0x1)
		unsigned char UnknownData14_6[0x7]; // 0xEE9(0x7) UNKNOWN PROPERTY
		double JumpingOffDirectionDetectionTolerance; // 0xEF0(0x8)
		FScalableFloat MaxAngleBetweenVelocityAndNormalForExitDetection; // 0xEF8(0x28)
		bool Allow_Manual_Tip_Location_; // 0xF20(0x1)
		unsigned char UnknownData15_6[0x7]; // 0xF21(0x7) UNKNOWN PROPERTY
		FVector ManualTipLocation; // 0xF28(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/BGA_GrindRail.BGA_GrindRail_C");
			return ret;
		}

		void SetSplineMeshMaterials(USplineMeshComponent* SplineMeshComp); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Is Player Exiting This Rail(AFortPlayerPawn* Player, bool& bStillExiting); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetRailColorAndEmissive(FLinearColor& RailColor, double& ColorEmissiveScale); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnTipComponent(UActorComponent* TipComponent); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Generate Meshes Along Spline(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Try Create End Tips(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DestroyAllTipMeshComponents(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveAllMeshComponents(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetMeshForSplineLength(double Segment Length, UStaticMesh* MeshToUse); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddInteractionRailMeshComponent(USplineMeshComponent* SplineMeshComponent); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddSolidRailMeshComponent(double SegmentLength, int32_t FirstPoint, int32_t SecondPoint, USplineMeshComponent* SplineMeshComponent); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetRotationForTip(bool bEndTip, FRotator& Rotator); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FillInBoosterInfo(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsTipCapped(bool bStartTip); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetLength(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCurvatureAtDistance(double Distance, double& Curvature); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector GetDirectionAtDistance(float Distance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSnapPosition(FVector& CurrentPosition, FVector& OutPos, float& OutDistance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool BlueprintGetInteractionTime(AFortPawn* InteractingPawn, float& OutInteractionTime, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool BlueprintOnLocalInteract(AFortPlayerPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void JumpOffMaterial(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Sprinting StateMaterial(bool Sprinting); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartedGrindingMaterial(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Unified Material and UV(int32_t FirstPoint, int32_t SecondPoint, USplineMeshComponent* Add Spline mesh); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BoosterLengthToSplineLength(FGrindRail_Booster_Directional& Booster, double Length Along Booster (cm), double& Length Along Spline (cm)); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Create Spline Mesh(int32_t FirstPoint, int32_t SecondPoint, UTexture2D* MeshEditorSprite); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddTip(bool EndTip, bool OnlyUpdateSpline, UStaticMesh* TipMesh); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddBoosterModel(FGrindRail_Booster_Directional& Booster, int32_t Array Index); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PutPlayerOnRail(APlayerPawn_Athena_C* Player); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PutPlayerOnRail_Server(APlayerPawn_Athena_C* InputPin); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PutPlayerOnRail_ClientAndServer(APlayerPawn_Athena_C* InputPin); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GenerateRailComponents(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DestroyStartTip(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DestroyEndTip(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DestroyTip(UActorComponent* Target); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Tips(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RedoSplineMesh(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void sprinting state(bool bNewIsSprinting); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult& Hit); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePlayerGrindStart(APlayerPawn_Athena_C* AttachedPlayer); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartedGrinding(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bEnteredFromInteraction, FVector PreviousPlayerLocation); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GrindRailChanged(AFortGrindRail* OldRail, AFortGrindRail* NewRail); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ForceClearBoosters(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateBoosterMeshes(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateAllBoosterMeshesInLevel(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PushGrindingSoundMix(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bEnteredFromInteraction, FVector PreviousPlayerLocation); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PopGrindingSoundMix(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GenerateMeshesAlongSpline(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BGA_GrindRail(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrindRail/Blueprints/BP_FortPawnGrindingProvider.BP_FortPawnGrindingProvider_C
	// Inherited from UFortPawnComponent_GrindingProvider -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x328 - 0x2F0)
	class UBP_FortPawnGrindingProvider_C : public UFortPawnComponent_GrindingProvider	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F0(0x8)
		FGameplayTagContainer BeginGrindBlockTags; // 0x2F8(0x20)
		FMulticastInlineDelegate JumpedOff; // 0x318(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/BP_FortPawnGrindingProvider.BP_FortPawnGrindingProvider_C");
			return ret;
		}

		bool CanApplyHolster(FName& HolsterId); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool BP_CanBeginGrinding(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnADSPressed(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnADSReleased(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFeetLanded(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnApplyDamageToDevice(ABuildingActor* BuildingActor); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDismount(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayerStartedDBNO(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleGameplayEffectsOnPlayerJumpOff(FVector PlayerPosition); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_FortPawnGrindingProvider(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void JumpedOff__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrindRail/Blueprints/GA_GrindRail_Smash.GA_GrindRail_Smash_C
	// Inherited from UFortGameplayAbility_ZiplineSmashBase -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x5C (0xBB4 - 0xB58)
	class UGA_GrindRail_Smash_C : public UFortGameplayAbility_ZiplineSmashBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB58(0x8)
		float SF_IntervalSmash; // 0xB60(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xB64(0x4) UNKNOWN PROPERTY
		FTimerHandle SurroundingCheckTimer; // 0xB68(0x8)
		AFortPlayerPawn* PlayerPawn; // 0xB70(0x8)
		FVector SmashBoxExtent; // 0xB78(0x18)
		bool bSmashNonPlayerBuilt; // 0xB90(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xB91(0x7) UNKNOWN PROPERTY
		UClass* DeviceDamageEffect; // 0xB98(0x8)
		UBP_FortPawnGrindingProvider_C* GrindingProvider; // 0xBA0(0x8)
		bool SmashUsePlayerCapsuleCheck; // 0xBA8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xBA9(0x3) UNKNOWN PROPERTY
		float SmashCapsuleHeightMultiplier; // 0xBAC(0x4)
		float SmashCapsuleRadiusMultiplier; // 0xBB0(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/GA_GrindRail_Smash.GA_GrindRail_Smash_C");
			return ret;
		}

		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SurroundingCheck(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EndAsyncBreakNearbyStructuresOverlap(TArray<AActor*>& OverlapActors); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GA_GrindRail_Smash(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrindRail/Blueprints/GE_GrindRail_IsGrinding.GE_GrindRail_IsGrinding_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_GrindRail_IsGrinding_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/GE_GrindRail_IsGrinding.GE_GrindRail_IsGrinding_C");
			return ret;
		}
	};


	// Class /GrindRail/Blueprints/GA_Action_ADS_GrindRail.GA_Action_ADS_GrindRail_C
	// Inherited from UFortGameplayAbility_Action -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x38 (0xBA8 - 0xB70)
	class UGA_Action_ADS_GrindRail_C : public UFortGameplayAbility_Action	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB70(0x8)
		APlayerPawn_Athena_C* Player; // 0xB78(0x8)
		FGameplayTagContainer BlockingTags; // 0xB80(0x20)
		UBP_FortPawnGrindingProvider_C* CachedGrindingProvider; // 0xBA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/GA_Action_ADS_GrindRail.GA_Action_ADS_GrindRail_C");
			return ret;
		}

		void OnPress_01A3E1CF477913F9711F7E90D15EAD37(float TimeWaited); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRelease_F2AFF35A4A031EDEC04ECF9706FAA922(float TimeHeld); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPress_C7DC18CB4B236FAE1117CE939CBC57AB(float TimeWaited); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRelease_E541412844A2A5A5D2D062A55EEC6C29(float TimeHeld); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GA_Action_ADS_GrindRail(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrindRail/Blueprints/GrindingExtensionLogic.GrindingExtensionLogic_C
	// Inherited from UFortMovementMode_ExtLogicGrinding -> UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x40 (0xD78 - 0xD38)
	class UGrindingExtensionLogic_C : public UFortMovementMode_ExtLogicGrinding	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xD38(0x8)
		FTimerHandle RemoveIsGrindingTimer; // 0xD40(0x8)
		FScalableFloat SF_RemoveGASmashAfterDelay; // 0xD48(0x28)
		double TemporaryMoveIgnoreDuration; // 0xD70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/GrindingExtensionLogic.GrindingExtensionLogic_C");
			return ret;
		}

		UClass GetGrindInAirGameplayEffectClass(AFortGrindRail* GrindRail); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsDamageableDevice(ABuildingActor* BuildingActor); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsThrowableItem(ABuildingActor* BuildingActor); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGrindingBegun(AFortGrindRail* GrindRail); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGrindingEnded(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameplayCuesOnSprinting(AFortGrindRail* GrindRail, bool bWantsToGrindSprint); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameplayCuesOnBoosterModeChange(AFortGrindRail* GrindRail, EGrindRailBoosterMode OldBoosterMode, EGrindRailBoosterMode NewBoosterMode); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameplayCuesOnRailJump(bool bIsAnchorJumpActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameplayCuesOnHit(AFortGrindRail* GrindRail); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AllowAnotherImpactEffect(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameplayCuesOnFeetLanding(AFortGrindRail* GrindRail); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyDamageToDevice(ABuildingActor* BuildingActor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveIsGrindingAfterDelay(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameplayEffectsOnVehicleHit(AFortAthenaVehicle* AthenaVehicle); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveGrindRailInitiatedEffects(AFortGrindRail* GrindRail); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleFallDamageImmunityOnGrindingEnd(bool bShouldApplyFallDamageImmunityOnEnd); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GrindingExtensionLogic(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Blueprints/FunctionLibraries/BP_VehicleModFuncLibrary.BP_VehicleModFuncLibrary_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBP_VehicleModFuncLibrary_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/FunctionLibraries/BP_VehicleModFuncLibrary.BP_VehicleModFuncLibrary_C");
			return ret;
		}

		void BP_UpdateGetFiringAnimationValue(AFortAthenaVehicle* InOwnerVehicle, double InLastFireTimeStamp, double InBarrelFireAnimDurationSeconds, UObject* __WorldContext, double& OutFireAnimationTimeStamp); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_UpdateSetRotationPrimIndexValues(UStaticMeshComponent* InTurretStaticMesh, int32_t InPrimitveDataIndexPitch, int32_t InPrimitveDataIndexYaw, double InPitch, double InYaw, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_UpdateGetAdjustedRotations(AFortAthenaVehicle* InOwnerVehicle, int32_t InTurretSeatIndex, FTransform BaseAtttachmentTransform, UObject* __WorldContext, double& OutAdjustedPitch, double& OutAdjustedYaw); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_UpdateVehicleModTurretPrimitiveData_Rotation_Smoothed(AFortAthenaVehicle* InOwnerVehicle, UStaticMeshComponent* InTurretStaticMeshComp, int32_t InTurretSeatIndex, int32_t InPrimitiveDataIndex_Pitch, int32_t InPrimitiveDataIndex_Yaw, double InSocketPitchOffset, double InSocketYawOffset, bool UseLerp, double RotationSpeed, double InDeltaTime, double PreviousPtich, double PreviousYaw, UObject* __WorldContext, double& NewPitch, double& NewYaw); // Flags: Exec|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_UpdateTurretStaticMesh_ActivationPercent(bool TurretActive, double TurretActivationProgressPerc, double UpdateStaticMeshFrequency, double TurretActivationAnimDurationSeconds, UObject* __WorldContext, double& NewProgressPerc); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_UpdateVehicleModTurretPrimitiveData_FireAnimation(AFortAthenaVehicle* InOwnerVehicle, UStaticMeshComponent* InTurretStaticMeshComp, double InLastFireTimeStamp, double InBarrelFireAnimDurationSeconds, int32_t PrimitiveDataIndex, UObject* __WorldContext); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_UpdateVehicleModTurretPrimitiveData_Rotation(AFortAthenaVehicle* InOwnerVehicle, UStaticMeshComponent* InTurretStaticMeshComp, int32_t InTurretSeatIndex, int32_t InPrimitiveDataIndex_Pitch, int32_t InPrimitiveDataIndex_Yaw, double InSocketPitchOffset, double InSocketYawOffset, UObject* __WorldContext); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingPistol.Athena_PlayerCameraModeTargetingPistol_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingPistol_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingPistol.Athena_PlayerCameraModeTargetingPistol_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeTargetingPistol.STW_PlayerCameraModeTargetingPistol_C
	// Inherited from UAthena_PlayerCameraModeTargetingPistol_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class USTW_PlayerCameraModeTargetingPistol_C : public UAthena_PlayerCameraModeTargetingPistol_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/StW/STW_PlayerCameraModeTargetingPistol.STW_PlayerCameraModeTargetingPistol_C");
			return ret;
		}
	};


	// Class /GrindRail/Blueprints/FFandCameraShake/CameraShake_LandOnRailBurst.CameraShake_LandOnRailBurst_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_LandOnRailBurst_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/FFandCameraShake/CameraShake_LandOnRailBurst.CameraShake_LandOnRailBurst_C");
			return ret;
		}
	};


	// Class /GrindRail/Blueprints/FFandCameraShake/CameraShake_GrindSprinting.CameraShake_GrindSprinting_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_GrindSprinting_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/FFandCameraShake/CameraShake_GrindSprinting.CameraShake_GrindSprinting_C");
			return ret;
		}
	};


	// Class /GrindRail/Blueprints/FFandCameraShake/CameraShake_GrindSprinting_InitialBurst.CameraShake_GrindSprinting_InitialBurst_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_GrindSprinting_InitialBurst_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/Blueprints/FFandCameraShake/CameraShake_GrindSprinting_InitialBurst.CameraShake_GrindSprinting_InitialBurst_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Eaten_1P.Athena_PlayerCameraMode_Eaten_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_Eaten_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Eaten_1P.Athena_PlayerCameraMode_Eaten_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_MP_Makeshift_SMG_1P.Athena_PlayerCameraMode_MP_Makeshift_SMG_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_MP_Makeshift_SMG_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_MP_Makeshift_SMG_1P.Athena_PlayerCameraMode_MP_Makeshift_SMG_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRanged_Lotus_Mustache.Athena_PlayerCameraModeRanged_Lotus_Mustache_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeRanged_Lotus_Mustache_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRanged_Lotus_Mustache.Athena_PlayerCameraModeRanged_Lotus_Mustache_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_Lotus_Mustache.Athena_PlayerCameraModeTargeting_Lotus_Mustache_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_Lotus_Mustache_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_Lotus_Mustache.Athena_PlayerCameraModeTargeting_Lotus_Mustache_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_sixshooter_pistol_1P.Athena_PlayerCameraModeTargeting_sixshooter_pistol_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_sixshooter_pistol_1P_C : public UAthena_PlayerCameraModeTargeting_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_sixshooter_pistol_1P.Athena_PlayerCameraModeTargeting_sixshooter_pistol_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Throwable_1P.Athena_PlayerCameraMode_Throwable_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_Throwable_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Throwable_1P.Athena_PlayerCameraMode_Throwable_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_tacticalassault_1P.Athena_PlayerCameraModeTargeting_tacticalassault_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_tacticalassault_1P_C : public UAthena_PlayerCameraModeTargeting_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_tacticalassault_1P.Athena_PlayerCameraModeTargeting_tacticalassault_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_tacassault_1P.Athena_PlayerCameraMode_tacassault_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_tacassault_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_tacassault_1P.Athena_PlayerCameraMode_tacassault_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_B_charge_shotgun_1P.Athena_PlayerCameraModeTargeting_B_charge_shotgun_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_AR_Auto_1P_C -> UAthena_PlayerCameraModeTargeting_AR_1P_C -> UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_B_charge_shotgun_1P_C : public UAthena_PlayerCameraModeTargeting_AR_Auto_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_B_charge_shotgun_1P.Athena_PlayerCameraModeTargeting_B_charge_shotgun_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_B_Shotgun_Base_1P.Athena_PlayerCameraMode_B_Shotgun_Base_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_B_Shotgun_Base_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_B_Shotgun_Base_1P.Athena_PlayerCameraMode_B_Shotgun_Base_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_B_drum_explosive_1P.Athena_PlayerCameraMode_B_drum_explosive_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_B_drum_explosive_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_B_drum_explosive_1P.Athena_PlayerCameraMode_B_drum_explosive_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_snow_Launcher_1P.Athena_PlayerCameraModeTargeting_snow_Launcher_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_snow_Launcher_1P_C : public UAthena_PlayerCameraModeTargeting_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_snow_Launcher_1P.Athena_PlayerCameraModeTargeting_snow_Launcher_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_MP_old_SMG_1P.Athena_PlayerCameraMode_MP_old_SMG_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_MP_old_SMG_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_MP_old_SMG_1P.Athena_PlayerCameraMode_MP_old_SMG_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_surgical_1P.Athena_PlayerCameraModeTargeting_surgical_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_surgical_1P_C : public UAthena_PlayerCameraModeTargeting_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_surgical_1P.Athena_PlayerCameraModeTargeting_surgical_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Garand3_auto_1P.Athena_PlayerCameraMode_Garand3_auto_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_Garand3_auto_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Garand3_auto_1P.Athena_PlayerCameraMode_Garand3_auto_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_garand3_1P.Athena_PlayerCameraModeTargeting_garand3_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_garand3_1P_C : public UAthena_PlayerCameraModeTargeting_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_garand3_1P.Athena_PlayerCameraModeTargeting_garand3_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_standard_sniper_1P.Athena_PlayerCameraMode_standard_sniper_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_standard_sniper_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_standard_sniper_1P.Athena_PlayerCameraMode_standard_sniper_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_standard_sniper_1P.Athena_PlayerCameraModeTargeting_standard_sniper_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_standard_sniper_1P_C : public UAthena_PlayerCameraModeTargeting_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_standard_sniper_1P.Athena_PlayerCameraModeTargeting_standard_sniper_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_LMG_1P.Athena_PlayerCameraModeTargeting_LMG_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_LMG_1P_C : public UAthena_PlayerCameraModeTargeting_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_LMG_1P.Athena_PlayerCameraModeTargeting_LMG_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_LMG_1P.Athena_PlayerCameraMode_LMG_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_LMG_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_LMG_1P.Athena_PlayerCameraMode_LMG_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_surgical_A_AR_1P.Athena_PlayerCameraMode_surgical_A_AR_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_surgical_A_AR_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_surgical_A_AR_1P.Athena_PlayerCameraMode_surgical_A_AR_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_B_Combat2_Shotgun_1P.Athena_PlayerCameraMode_B_Combat2_Shotgun_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_B_Combat2_Shotgun_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_B_Combat2_Shotgun_1P.Athena_PlayerCameraMode_B_Combat2_Shotgun_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_B_combat2_shotgun_1P.Athena_PlayerCameraModeTargeting_B_combat2_shotgun_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_AR_Auto_1P_C -> UAthena_PlayerCameraModeTargeting_AR_1P_C -> UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_B_combat2_shotgun_1P_C : public UAthena_PlayerCameraModeTargeting_AR_Auto_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_B_combat2_shotgun_1P.Athena_PlayerCameraModeTargeting_B_combat2_shotgun_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_B_Shotgun_heavy_1P.Athena_PlayerCameraMode_B_Shotgun_heavy_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_B_Shotgun_heavy_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_B_Shotgun_heavy_1P.Athena_PlayerCameraMode_B_Shotgun_heavy_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_B_heavy_shotgun_1P.Athena_PlayerCameraModeTargeting_B_heavy_shotgun_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_AR_Auto_1P_C -> UAthena_PlayerCameraModeTargeting_AR_1P_C -> UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_B_heavy_shotgun_1P_C : public UAthena_PlayerCameraModeTargeting_AR_Auto_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_B_heavy_shotgun_1P.Athena_PlayerCameraModeTargeting_B_heavy_shotgun_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_grenade2_1P.Athena_PlayerCameraMode_grenade2_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_grenade2_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_grenade2_1P.Athena_PlayerCameraMode_grenade2_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_bandage_1P.Athena_PlayerCameraMode_bandage_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_bandage_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_bandage_1P.Athena_PlayerCameraMode_bandage_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Eat_fish_1P.Athena_PlayerCameraMode_Eat_fish_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_Eat_fish_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Eat_fish_1P.Athena_PlayerCameraMode_Eat_fish_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_medkit_1P.Athena_PlayerCameraMode_medkit_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_medkit_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_medkit_1P.Athena_PlayerCameraMode_medkit_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeCoolCarpet.Athena_PlayerCameraModeCoolCarpet_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeCoolCarpet_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeCoolCarpet.Athena_PlayerCameraModeCoolCarpet_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSneakySnowman.Athena_PlayerCameraModeSneakySnowman_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeSneakySnowman_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSneakySnowman.Athena_PlayerCameraModeSneakySnowman_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeDualPistol.Athena_PlayerCameraModeDualPistol_C
	// Inherited from UAthena_PlayerCameraModeRanged_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeDualPistol_C : public UAthena_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeDualPistol.Athena_PlayerCameraModeDualPistol_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingDualPistol.Athena_PlayerCameraModeTargetingDualPistol_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingDualPistol_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingDualPistol.Athena_PlayerCameraModeTargetingDualPistol_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Interfaces/AirVentImpulseInterface.AirVentImpulseInterface_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAirVentImpulseInterface_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Interfaces/AirVentImpulseInterface.AirVentImpulseInterface_C");
			return ret;
		}

		void ExitedAirVent(double LaunchVelocity, double BaseForceScale, FVector Direction); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnteredAirVent(double LaunchVelocity, double BaseForceScale, FVector Direction); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingAssault_V2.Athena_PlayerCameraModeTargetingAssault_V2_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingAssault_V2_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingAssault_V2.Athena_PlayerCameraModeTargetingAssault_V2_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_Assaultrifleplus_1P.Athena_PlayerCameraModeTargeting_Assaultrifleplus_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_Assaultrifleplus_1P_C : public UAthena_PlayerCameraModeTargeting_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_Assaultrifleplus_1P.Athena_PlayerCameraModeTargeting_Assaultrifleplus_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_newbase_assault_1P.Athena_PlayerCameraMode_newbase_assault_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_newbase_assault_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_newbase_assault_1P.Athena_PlayerCameraMode_newbase_assault_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_burst_AR_1P.Athena_PlayerCameraMode_burst_AR_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_burst_AR_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_burst_AR_1P.Athena_PlayerCameraMode_burst_AR_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_BurstBullpup_1P.Athena_PlayerCameraModeTargeting_BurstBullpup_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_BurstBullpup_1P_C : public UAthena_PlayerCameraModeTargeting_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_BurstBullpup_1P.Athena_PlayerCameraModeTargeting_BurstBullpup_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingPistol_Reload.Athena_PlayerCameraModeTargetingPistol_Reload_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingPistol_Reload_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingPistol_Reload.Athena_PlayerCameraModeTargetingPistol_Reload_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingPistol_V2.Athena_PlayerCameraModeTargetingPistol_V2_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingPistol_V2_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingPistol_V2.Athena_PlayerCameraModeTargetingPistol_V2_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_SMG_1P.Athena_PlayerCameraModeTargeting_SMG_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_SMG_1P_C : public UAthena_PlayerCameraModeTargeting_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_SMG_1P.Athena_PlayerCameraModeTargeting_SMG_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_Makeshift_SMG_1P.Athena_PlayerCameraModeTargeting_Makeshift_SMG_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_SMG_1P_C -> UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_Makeshift_SMG_1P_C : public UAthena_PlayerCameraModeTargeting_SMG_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_Makeshift_SMG_1P.Athena_PlayerCameraModeTargeting_Makeshift_SMG_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_MP_oldSMG_1P.Athena_PlayerCameraModeTargeting_MP_oldSMG_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_SMG_1P_C -> UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_MP_oldSMG_1P_C : public UAthena_PlayerCameraModeTargeting_SMG_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_MP_oldSMG_1P.Athena_PlayerCameraModeTargeting_MP_oldSMG_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_MP5SMG_1P.Athena_PlayerCameraModeTargeting_MP5SMG_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_SMG_1P_C -> UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_MP5SMG_1P_C : public UAthena_PlayerCameraModeTargeting_SMG_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_MP5SMG_1P.Athena_PlayerCameraModeTargeting_MP5SMG_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_mp5_smg_1P.Athena_PlayerCameraMode_mp5_smg_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_mp5_smg_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_mp5_smg_1P.Athena_PlayerCameraMode_mp5_smg_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Pistol_1P.Athena_PlayerCameraMode_Pistol_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_Pistol_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Pistol_1P.Athena_PlayerCameraMode_Pistol_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_sixshooter_Pistol_1P.Athena_PlayerCameraMode_sixshooter_Pistol_1P_C
	// Inherited from UAthena_PlayerCameraMode_Pistol_1P_C -> UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_sixshooter_Pistol_1P_C : public UAthena_PlayerCameraMode_Pistol_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_sixshooter_Pistol_1P.Athena_PlayerCameraMode_sixshooter_Pistol_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_burstSMG_1P.Athena_PlayerCameraMode_burstSMG_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_burstSMG_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_burstSMG_1P.Athena_PlayerCameraMode_burstSMG_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_burstSMG_1P.Athena_PlayerCameraModeTargeting_burstSMG_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_SMG_1P_C -> UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_burstSMG_1P_C : public UAthena_PlayerCameraModeTargeting_SMG_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_burstSMG_1P.Athena_PlayerCameraModeTargeting_burstSMG_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_vigilante_Pistol_1P.Athena_PlayerCameraMode_vigilante_Pistol_1P_C
	// Inherited from UAthena_PlayerCameraMode_Pistol_1P_C -> UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_vigilante_Pistol_1P_C : public UAthena_PlayerCameraMode_Pistol_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_vigilante_Pistol_1P.Athena_PlayerCameraMode_vigilante_Pistol_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_vigilante_pistol_1P.Athena_PlayerCameraModeTargeting_vigilante_pistol_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_vigilante_pistol_1P_C : public UAthena_PlayerCameraModeTargeting_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_vigilante_pistol_1P.Athena_PlayerCameraModeTargeting_vigilante_pistol_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingShotgun_V2.Athena_PlayerCameraModeTargetingShotgun_V2_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingShotgun_V2_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingShotgun_V2.Athena_PlayerCameraModeTargetingShotgun_V2_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingShotgun.Athena_PlayerCameraModeTargetingShotgun_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingShotgun_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingShotgun.Athena_PlayerCameraModeTargetingShotgun_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeTargetingShotgun.STW_PlayerCameraModeTargetingShotgun_C
	// Inherited from UAthena_PlayerCameraModeTargetingShotgun_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class USTW_PlayerCameraModeTargetingShotgun_C : public UAthena_PlayerCameraModeTargetingShotgun_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/StW/STW_PlayerCameraModeTargetingShotgun.STW_PlayerCameraModeTargetingShotgun_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingShotgun_Reload.Athena_PlayerCameraModeTargetingShotgun_Reload_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingShotgun_Reload_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingShotgun_Reload.Athena_PlayerCameraModeTargetingShotgun_Reload_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_B_Shotgun_lever_1P.Athena_PlayerCameraMode_B_Shotgun_lever_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_B_Shotgun_lever_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_B_Shotgun_lever_1P.Athena_PlayerCameraMode_B_Shotgun_lever_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_B_lever_shotgun_1P.Athena_PlayerCameraModeTargeting_B_lever_shotgun_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_AR_Auto_1P_C -> UAthena_PlayerCameraModeTargeting_AR_1P_C -> UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_B_lever_shotgun_1P_C : public UAthena_PlayerCameraModeTargeting_AR_Auto_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_B_lever_shotgun_1P.Athena_PlayerCameraModeTargeting_B_lever_shotgun_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingScope.Athena_PlayerCameraModeTargetingScope_C
	// Inherited from UAthena_PlayerCameraModeSniper_C -> UAthena_PlayerCameraModeRanged_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingScope_C : public UAthena_PlayerCameraModeSniper_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingScope.Athena_PlayerCameraModeTargetingScope_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingIronSight.Athena_PlayerCameraModeTargetingIronSight_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingIronSight_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingIronSight.Athena_PlayerCameraModeTargetingIronSight_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeTargetingIronSight.STW_PlayerCameraModeTargetingIronSight_C
	// Inherited from UAthena_PlayerCameraModeTargetingIronSight_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class USTW_PlayerCameraModeTargetingIronSight_C : public UAthena_PlayerCameraModeTargetingIronSight_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/StW/STW_PlayerCameraModeTargetingIronSight.STW_PlayerCameraModeTargetingIronSight_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_bolt_sniper_1P.Athena_PlayerCameraModeTargeting_bolt_sniper_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_bolt_sniper_1P_C : public UAthena_PlayerCameraModeTargeting_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_bolt_sniper_1P.Athena_PlayerCameraModeTargeting_bolt_sniper_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_bolt_sniper_1P.Athena_PlayerCameraMode_bolt_sniper_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_bolt_sniper_1P_C : public UAthena_PlayerCameraMode_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_bolt_sniper_1P.Athena_PlayerCameraMode_bolt_sniper_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_shadowT_Pistol_1P.Athena_PlayerCameraMode_shadowT_Pistol_1P_C
	// Inherited from UAthena_PlayerCameraMode_Pistol_1P_C -> UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraMode_shadowT_Pistol_1P_C : public UAthena_PlayerCameraMode_Pistol_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_shadowT_Pistol_1P.Athena_PlayerCameraMode_shadowT_Pistol_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_shadowt_pistol_1P.Athena_PlayerCameraModeTargeting_shadowt_pistol_1P_C
	// Inherited from UAthena_PlayerCameraModeTargeting_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargeting_shadowt_pistol_1P_C : public UAthena_PlayerCameraModeTargeting_1P_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_shadowt_pistol_1P.Athena_PlayerCameraModeTargeting_shadowt_pistol_1P_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeHookGun.Athena_PlayerCameraModeHookGun_C
	// Inherited from UAthena_PlayerCameraModeRanged_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeHookGun_C : public UAthena_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeHookGun.Athena_PlayerCameraModeHookGun_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingHookGun.Athena_PlayerCameraModeTargetingHookGun_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class UAthena_PlayerCameraModeTargetingHookGun_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingHookGun.Athena_PlayerCameraModeTargetingHookGun_C");
			return ret;
		}
	};

}
