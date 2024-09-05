#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LevelOverlays
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C
	// Inherited from AVaultWorld_C -> AFortItemPreviewWorld -> AActor -> UObject
	// Size: 0x77 (0x3C8 - 0x351)
	class APilgrimEventScreenEventVaultWorld_C : public AVaultWorld_C	
	{
	public:
		unsigned char UnknownData00_3[0x7]; // 0x351(0x7) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x8)
		UStaticMeshComponent* floor; // 0x360(0x8)
		float ItemDetails_X_Offset_68C3898D424BEACDFEB5559E091141D8; // 0x368(0x4)
		TEnumAsByte<ETimelineDirection> ItemDetails__Direction_68C3898D424BEACDFEB5559E091141D8; // 0x36C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x36D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* ItemDetails; // 0x370(0x8)
		float Floor_Visibility_FloorMask_B8DF0E7548B0B3258911ACA2E59C4ED5; // 0x378(0x4)
		TEnumAsByte<ETimelineDirection> Floor_Visibility__Direction_B8DF0E7548B0B3258911ACA2E59C4ED5; // 0x37C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x37D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Floor_Visibility; // 0x380(0x8)
		float Background_Effects_SetStreaks_B72E13E64AF840AB5A739E8485EAFB0C; // 0x388(0x4)
		TEnumAsByte<ETimelineDirection> Background_Effects__Direction_B72E13E64AF840AB5A739E8485EAFB0C; // 0x38C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x38D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Background_Effects; // 0x390(0x8)
		float TransitionForward_FX_Transition_Fade_630B799D41239619956D94A08501493D; // 0x398(0x4)
		float TransitionForward_Pre_TransitionOffset_630B799D41239619956D94A08501493D; // 0x39C(0x4)
		float TransitionForward_Forward_630B799D41239619956D94A08501493D; // 0x3A0(0x4)
		TEnumAsByte<ETimelineDirection> TransitionForward__Direction_630B799D41239619956D94A08501493D; // 0x3A4(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x3A5(0x3) UNKNOWN PROPERTY
		UTimelineComponent* TransitionForward; // 0x3A8(0x8)
		float TransitionBackward_fx_Transition_fade_0417507846315C71198827A55A7AB86E; // 0x3B0(0x4)
		float TransitionBackward_Pre_Transition_Offset_0417507846315C71198827A55A7AB86E; // 0x3B4(0x4)
		float TransitionBackward_Backward_0417507846315C71198827A55A7AB86E; // 0x3B8(0x4)
		TEnumAsByte<ETimelineDirection> TransitionBackward__Direction_0417507846315C71198827A55A7AB86E; // 0x3BC(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x3BD(0x3) UNKNOWN PROPERTY
		UTimelineComponent* TransitionBackward; // 0x3C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C");
			return ret;
		}

		void TransitionBackgroundBackward(double Backward, double PreTransitionOffset, double FXTransitionFade, UMaterialInstanceDynamic* Mid); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionBackgroundForward(double Forward, double PreTransitionOffset, double FXTransitionFade, UMaterialInstanceDynamic* Mid); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupBackgroundMaterial(UTexture2D* TextureBackground, FVaultWorldBackgroundData& BackgroundInfo, UMaterialInstanceDynamic* Mid); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionForward__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionForward__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionBackward__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionBackward__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Background-Effects__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Background-Effects__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Floor-Visibility__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Floor-Visibility__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemDetails__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemDetails__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetupBackground(UTexture2D* LoadedBackgroundTexture, FVaultWorldBackgroundData& BackgroundInfo); // Flags: HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateDisplay(bool bShowFloor, bool bShowEffects); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialBackgroundTransition(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionItemDetails(bool bShowItemDetails); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateMaterialIndex(int32_t MaterialIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_PilgrimEventScreenEventVaultWorld(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
