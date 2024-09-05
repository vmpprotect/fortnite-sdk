#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Blueprints
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UWBP_CaptureForPostBufferUpdate_C : public UUserWidget	
	{
	public:
		UPostBufferUpdate PostBufferUpdate; // 0x2B8(0x8)

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

		void HexToColor(FString HEX, UObject __WorldContext, FLinearColor& LinearColor); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D60B5D700
		void FireEventElementInteractedByName(FString Element Name, UWidget WidgetCallingFrom, UObject __WorldContext, bool& Success); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D60B5D800
		void InstantTransitionToSelected(UMaterialInstanceDynamic Mid, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D60B5D400
		void InstantTransitionToEnabled(UMaterialInstanceDynamic Mid, bool IsSelected, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D60B5D500
		void InstantTransitionToDisabled(UMaterialInstanceDynamic Mid, bool IsSelected, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D60B5D600
		void TransitionToDeselectedFocused(UMaterialInstanceDynamic Mid, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D60B5CD00
		void TransitionToDeselectedIdle(UMaterialInstanceDynamic Mid, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D60B5CC00
		void SetGridSlotNudge(UWidget Widget, FVector2D Nudge, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D60B5CF00
		void SetGridSlotPadding(UWidget Widget, FMargin Padding, UObject __WorldContext); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60B5CE00
		void SetGridSlotLayer(UWidget Widget, int32_t Layer, UObject __WorldContext); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60B5D000
		void SetGridSlotAlignment(UWidget Widget, TEnumAsByte Horizontal, TEnumAsByte Vertical, UObject __WorldContext); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60B5D200
		void SetGridSlotColumnAndRow(UWidget Widget, int32_t Row, int32_t Row Span, int32_t Column, int32_t Column Span, UObject __WorldContext); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60B5D100
		void RemoveWidget(UWidget Widget, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D60B5D300
		void Copy MID Parameter Overrides(UMaterialInstanceDynamic Target MID, UMaterialInstanceDynamic Source MID, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D60B5D900
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeBase.Athena_PlayerCameraModeBase_C
	// Inherited from UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class UAthena_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeBase.Athena_PlayerCameraModeBase_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRangedTargeting.Athena_PlayerCameraModeRangedTargeting_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class UAthena_PlayerCameraModeRangedTargeting_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRangedTargeting.Athena_PlayerCameraModeRangedTargeting_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeMelee.Athena_PlayerCameraModeMelee_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class UAthena_PlayerCameraModeMelee_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeMelee.Athena_PlayerCameraModeMelee_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeRangedTargeting.STW_PlayerCameraModeRangedTargeting_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x8 (0x1D10 - 0x1D08)
	class UAthena_PlayerCameraFocalPoint_C : public UFortCameraMode_FocalPoint	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x1D08(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraFocalPoint.Athena_PlayerCameraFocalPoint_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeBase.v2_PlayerCameraModeBase_C
	// Inherited from UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class Uv2_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeBase.v2_PlayerCameraModeBase_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeMelee.v2_PlayerCameraModeMelee_C
	// Inherited from Uv2_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
	class Uv2_PlayerCameraModeRanged_C : public Uv2_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeRanged.v2_PlayerCameraModeRanged_C");
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


	// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingVeryShortRange.v2_PlayerCameraModeTargetingVeryShortRange_C
	// Inherited from Uv2_PlayerCameraModeRanged_C -> Uv2_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class Uv2_PlayerCameraModeTargetingVeryShortRange_C : public Uv2_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingVeryShortRange.v2_PlayerCameraModeTargetingVeryShortRange_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_WaterSprintBoost.Athena_PlayerCameraMode_WaterSprintBoost_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
	class Uv3_PlayerCameraModeRanged_C : public Uv3_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeRanged.v3_PlayerCameraModeRanged_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeBase.v1_PlayerCameraModeBase_C
	// Inherited from UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class Uv1_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeBase.v1_PlayerCameraModeBase_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingVeryShortRange.v3_PlayerCameraModeTargetingVeryShortRange_C
	// Inherited from Uv3_PlayerCameraModeRanged_C -> Uv3_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class Uv3_PlayerCameraModeTargetingVeryShortRange_C : public Uv3_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingVeryShortRange.v3_PlayerCameraModeTargetingVeryShortRange_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeMelee.v1_PlayerCameraModeMelee_C
	// Inherited from Uv1_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class Uv1_PlayerCameraModeMelee_C : public Uv1_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeMelee.v1_PlayerCameraModeMelee_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeMelee.STW_PlayerCameraModeMelee_C
	// Inherited from UAthena_PlayerCameraModeMelee_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class USTW_PlayerCameraModeMelee_C : public UAthena_PlayerCameraModeMelee_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/StW/STW_PlayerCameraModeMelee.STW_PlayerCameraModeMelee_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingVeryShortRange.v1_PlayerCameraModeTargetingVeryShortRange_C
	// Inherited from Uv1_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class Uv1_PlayerCameraModeTargetingVeryShortRange_C : public Uv1_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingVeryShortRange.v1_PlayerCameraModeTargetingVeryShortRange_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeBase.STW_PlayerCameraModeBase_C
	// Inherited from USTW_PlayerCameraModeMelee_C -> UAthena_PlayerCameraModeMelee_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D10 - 0x1D10)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
	class Uv1_PlayerCameraModeTargetingScope_C : public Uv1_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingScope.v1_PlayerCameraModeTargetingScope_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingRifle.v1_PlayerCameraModeTargetingRifle_C
	// Inherited from Uv1_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class Uv1_PlayerCameraModeTargetingRifle_C : public Uv1_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingRifle.v1_PlayerCameraModeTargetingRifle_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v3_MPR/PlayerCameraMode_DBNO.PlayerCameraMode_DBNO_C
	// Inherited from Uv3_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class UPlayerCameraMode_DBNO_C : public Uv3_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v3_MPR/PlayerCameraMode_DBNO.PlayerCameraMode_DBNO_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingPistol.v2_PlayerCameraModeTargetingPistol_C
	// Inherited from Uv2_PlayerCameraModeRanged_C -> Uv2_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class Uv2_PlayerCameraModeTargetingPistol_C : public Uv2_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingPistol.v2_PlayerCameraModeTargetingPistol_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingScope.v2_PlayerCameraModeTargetingScope_C
	// Inherited from Uv2_PlayerCameraModeRanged_C -> Uv2_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class Uv2_PlayerCameraModeTargetingScope_C : public Uv2_PlayerCameraModeRanged_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingScope.v2_PlayerCameraModeTargetingScope_C");
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


	// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingScope.v3_PlayerCameraModeTargetingScope_C
	// Inherited from Uv3_PlayerCameraModeRanged_C -> Uv3_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
	class UAthena_PlayerCameraModeSkydiveDive_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveDive.Athena_PlayerCameraModeSkydiveDive_C");
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


	// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingAssault.v3_PlayerCameraModeTargetingAssault_C
	// Inherited from Uv3_PlayerCameraModeRanged_C -> Uv3_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
	class UAthena_PlayerCameraModeSkydiveGlide_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveGlide.Athena_PlayerCameraModeSkydiveGlide_C");
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


	// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingPistol.v3_PlayerCameraModeTargetingPistol_C
	// Inherited from Uv3_PlayerCameraModeRanged_C -> Uv3_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
	class Uv1_PlayerCameraModeRanged_C : public Uv1_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeRanged.v1_PlayerCameraModeRanged_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveParachute.Athena_PlayerCameraModeSkydiveParachute_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class UAthena_PlayerCameraModeSkydiveParachute_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveParachute.Athena_PlayerCameraModeSkydiveParachute_C");
			return ret;
		}
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingTethered.Athena_PlayerCameraModeTargetingTethered_C
	// Inherited from UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class UAthena_PlayerCameraModeTargetingTethered_C : public UAthena_PlayerCameraModeRangedTargeting_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingTethered.Athena_PlayerCameraModeTargetingTethered_C");
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
	// Size: 0x0 (0x1D00 - 0x1D00)
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

		void MeleeSwingLeft_End(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6B598000
		void MeleeSwingRight_End(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6B597E00
		void Melee_Effect_Color(FVector& Melee_Color_Set); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B598200
		void MeleeSwingLeft(bool First Left); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B598100
		void MeleeSwingRight(bool First Right); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B597F00
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
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
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
	// Size: 0x0 (0x1D00 - 0x1D00)
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
		USceneComponent DefaultSceneRoot; // 0x298(0x8)
		double Flood_Water_Level; // 0x2A0(0x8)
		UTexture2D Game_Texture__Water_Velocity_and_Height; // 0x2A8(0x8)
		FTransform LS_Transform; // 0x2B0(0x60)
		FIntPoint LS_RT_Res; // 0x310(0x8)
		FVector2D Quad_Size; // 0x318(0x10)
		bool Use_Terrain_Velocity_and_Height_Texture; // 0x328(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x329(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic External_Water_MID_To_Update; // 0x330(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortWater/Blueprints/LandscapeWaterInfo.LandscapeWaterInfo_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D67099600
		void Set Flood Water Level(); // Flags: BlueprintCallable|BlueprintEvent 0x15D67099500
		void ExecuteUbergraph_LandscapeWaterInfo(int32_t EntryPoint); // Flags: Final 0x15D67099700
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_HidingProp_Teleport.Athena_PlayerCameraMode_HidingProp_Teleport_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
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
		USkeletalMeshComponentBudgeted SkeletalMeshComponentBudgeted; // 0x318(0x8)
		USceneComponent Scene; // 0x320(0x8)
		double AnimPlayRate; // 0x328(0x8)
		UMaterialInstanceDynamic StaticMeshMID; // 0x330(0x8)
		bool TeleportIn; // 0x338(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x339(0x7) UNKNOWN PROPERTY
		UParticleSystemComponent CharacterAttached; // 0x340(0x8)
		bool InLobby; // 0x348(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x349(0x7) UNKNOWN PROPERTY
		USkeletalMeshComponent Mesh_for_Attachment; // 0x350(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C");
			return ret;
		}

		UAnimationAsset Get Spawn Animation(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D6B851C00
		void PlaySpawnAnim(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6B851A00
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D6B851900
		void OnSpawnOutAnimEnded(UAnimMontage Montage, bool bInterrupted); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B851B00
		void ReceiveEndPlay(TEnumAsByte EndPlayReason); // Flags: Event|Protected|BlueprintEvent 0x15D6B851800
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent 0x15D6B851700
		void ExecuteUbergraph_BP_TeleportationDrone(int32_t EntryPoint); // Flags: Final 0x15D6B851D00
	};


	// Class /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C
	// Inherited from APawn -> AActor -> UObject
	// Size: 0x70 (0x380 - 0x310)
	class ABP_VictoryDrone_C : public APawn	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x8)
		USkeletalMeshComponentBudgeted SkeletalMeshComponentBudgeted; // 0x318(0x8)
		USceneComponent Scene; // 0x320(0x8)
		FMulticastInlineDelegate SpawnOutAnimEndedDispatcher; // 0x328(0x10)
		double AnimPlayRate; // 0x338(0x8)
		UMaterialInstanceDynamic StaticMeshMID; // 0x340(0x8)
		bool TeleportIn; // 0x348(0x1)
		bool IsAthena; // 0x349(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x34A(0x6) UNKNOWN PROPERTY
		AFortPawn TargetPlayer; // 0x350(0x8)
		UParticleSystemComponent CharacterAttached; // 0x358(0x8)
		bool InLobby; // 0x360(0x1)
		bool IsNPC; // 0x361(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x362(0x2) UNKNOWN PROPERTY
		FName AttachPoint; // 0x364(0x4)
		bool isDecoy; // 0x368(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x369(0x7) UNKNOWN PROPERTY
		USkeletalMeshComponent Mesh_for_Attachment; // 0x370(0x8)
		USoundBase SoundOnNPCDeath; // 0x378(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C");
			return ret;
		}

		void Added Death Audio(USoundBase Sound to Spawn); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6B2EEF00
		void Decoy FX Parameters(TArray& Instance Parameters); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D6B2EEE00
		void NPC FX Parameters(TArray& Instance Parameters); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D6B2EEA00
		void NotifyTeleportFinishedTriggered(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6B2EEB00
		void PlaySpawnAnim(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6B2EE800
		void InitDrone(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6B2EEC00
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D6B852100
		void OnSpawnOutAnimEnded(UAnimMontage Montage, bool bInterrupted); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B2EE900
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent 0x15D6B852000
		void ExecuteUbergraph_BP_VictoryDrone(int32_t EntryPoint); // Flags: Final 0x15D6B2EED00
		void SpawnOutAnimEndedDispatcher__DelegateSignature(ABP_VictoryDrone_C Drone); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D6B851F00
	};


	// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Harveting_1blade_1P.Athena_PlayerCameraMode_Harveting_1blade_1P_C
	// Inherited from UAthena_PlayerCameraMode_1P_C -> UAthena_PlayerCameraModeRangedTargeting_C -> UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
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

		void GetBlueprintLogLevel(TEnumAsByte& BlueprintLogLevel); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D46CEE100
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

		void RequestComponentResource(UCreativeIslandResourceManagerComponent ResourceManager, FName ResourceTag, UActorComponent Component, FVector WorldLocation, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D46CEDF00
		void SweepAgainstActorTypes(AActor TestActor, FVector StartLocation, FVector EndLocation, double SweepRadius, TArray& SweepObjectTypes, TArray& ActorClassFilters, UObject __WorldContext, bool& Overlapped); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D46CEDD00
		void ShouldLogForInstigator(TEnumAsByte Instance Log Level, UObject Instigator, UObject __WorldContext, bool& Should Log?); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D46CEDE00
		void LogString(TEnumAsByte Instance Log Level, FString LogString, bool PrintToScreen, UObject Instigator, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D46CEE000
	};

}
