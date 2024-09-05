#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Maps
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/Maps/UI/Frontend_Lobby_Background.Frontend_Lobby_Background_C
	// Inherited from AFortLevelScriptActor -> ALevelScriptActor -> AActor -> UObject
	// Size: 0x278 (0x520 - 0x2A8)
	class AFrontend_Lobby_Background_C : public AFortLevelScriptActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2A8(0x8)
		float FadeIn_Fade_3606FDF647A6577B9DAC47B89146CD85; // 0x2B0(0x4)
		TEnumAsByte<ETimelineDirection> FadeIn__Direction_3606FDF647A6577B9DAC47B89146CD85; // 0x2B4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2B5(0x3) UNKNOWN PROPERTY
		UTimelineComponent* FadeIn; // 0x2B8(0x8)
		float FadeOut_Fade_44D3B05B49031FA3891648AB32F57584; // 0x2C0(0x4)
		TEnumAsByte<ETimelineDirection> FadeOut__Direction_44D3B05B49031FA3891648AB32F57584; // 0x2C4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2C5(0x3) UNKNOWN PROPERTY
		UTimelineComponent* FadeOut; // 0x2C8(0x8)
		double FadetoBlackFloor; // 0x2D0(0x8)
		double FadeGrid; // 0x2D8(0x8)
		double FadeGrid_Targetvalue; // 0x2E0(0x8)
		double FadetoBlackFloor_TargetValue; // 0x2E8(0x8)
		FString PresetEnvironment; // 0x2F0(0x10)
		UTexture* Texture; // 0x300(0x8)
		UMaterialInstance* Material; // 0x308(0x8)
		UMaterialInstance* PreBlueMaterial; // 0x310(0x8)
		TMap<FString, FFrontendBackgroundData> Backgrounds; // 0x318(0x50)
		TArray<UNiagaraComponent*> SpawnedFX; // 0x368(0x10)
		bool FadedFromBlue; // 0x378(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x379(0x7) UNKNOWN PROPERTY
		FFrontendLobbyData Lobby_Data; // 0x380(0xA8)
		TWeakObjectPtr<UTexture*> QueuedTexture; // 0x428(0x20)
		TWeakObjectPtr<UMaterialInstance*> QueuedMaterial; // 0x448(0x20)
		TWeakObjectPtr<UMaterialInstance*> QueuedPreBlurMaterial; // 0x468(0x20)
		int32_t WaitingOnAssets; // 0x488(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x48C(0x4) UNKNOWN PROPERTY
		ABP_FrontendBackPlate_C* 6_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x490(0x8)
		AEmitter* P_Storm_Rain_01_5_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x498(0x8)
		AEmitter* P_Snow_Ambient_Lobby_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4A0(0x8)
		ANiagaraActor* NS_SideWays_Volume_InFrontEnd_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4A8(0x8)
		AFortStaticMeshActor* SM_Sideways_Smoke_FrontEnd_159_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4B0(0x8)
		AFortStaticMeshActor* SM_Mother_Crash_BlinkingLights_01_3_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4B8(0x8)
		ANiagaraActor* NiagaraActor_3_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4C0(0x8)
		AFortStaticMeshActor* SM_Sideways_Smoke_FrontEnd_0_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4C8(0x8)
		ANiagaraActor* NiagaraActor_1_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4D0(0x8)
		ANiagaraActor* NiagaraActor_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4D8(0x8)
		ANiagaraActor* NiagaraActor_4_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4E0(0x8)
		ABP_FrontendBackPlate_C* 6_Setup_Basic_Background_Data_MERGED_RefProperty; // 0x4E8(0x8)
		ABP_FrontendBackPlate_C* 6_SetupGalileo_MERGED_RefProperty; // 0x4F0(0x8)
		ABP_FrontendBackPlate_C* 6_SetupSpecialEventBackgroundData_MERGED_RefProperty; // 0x4F8(0x8)
		ABP_FrontendBackPlate_C* 6_SetupBasicBackgroundDataWithRenderTarget_MERGED_RefProperty; // 0x500(0x8)
		ABP_FrontendBackPlate_C* 6_SetupSpecialEventBackgroundDataWithRenderTarget_MERGED_RefProperty; // 0x508(0x8)
		ACMSLobbyDirector_C* CMSLobbyDirector_3_UpdateLevelActorsVisibility_MERGED_RefProperty; // 0x510(0x8)
		ABP_FrontendBackPlate_C* 6_UpdateLevelActorsVisibility_MERGED_RefProperty; // 0x518(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Maps/UI/Frontend_Lobby_Background.Frontend_Lobby_Background_C");
			return ret;
		}

		void UpdateLevelActorsVisibility(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Convert Legacy Frontend Background Data(FFrontendBackgroundData Legacy Frontend Background Data, FFrontendLobbyData& Frontend Lobby Data); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupSpecialEventBackgroundDataWithRenderTarget(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupBasicBackgroundDataWithRenderTarget(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupSpecialEventBackgroundData(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupGalileo(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LoadBackgroundData(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Setup Basic Background Data(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetShowPedestalSparkles(bool Show); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateFade(double FadeValue, double FadeFloorToBlack, double InFadeGrid); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeOut__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeOut__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeIn__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeIn__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_7B16DAE04937EECB604410A2EC352CE3(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_E5F1E80A4DD36718D41FF68F137C4775(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_1CC0D8274FA1EFC9AE28C89FDF518A70(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(FString PresetEnvironmentName); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(UTexture* BackgroundImage); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TestDynColor(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeFromBlue(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LoadAssets(TWeakObjectPtr<UTexture*> InTexture, TWeakObjectPtr<UMaterialInstance*> InMaterial, TWeakObjectPtr<UMaterialInstance*> InPreBlurMaterial); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ContinueBackgroundSetup(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__Frontend_Lobby_Background_CMSLobbyDirector_3_K2Node_ActorBoundEvent_2_OnLobbyDataChanged__DelegateSignature(FFrontendLobbyData LobbyData); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerMaterialLoad(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerTextureLoad(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Trigger PreBlur Material Load(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Frontend_Lobby_Background(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Maps/Frontend.Frontend_C
	// Inherited from AFortLevelScriptActor -> ALevelScriptActor -> AActor -> UObject
	// Size: 0x18 (0x2C0 - 0x2A8)
	class AFrontend_C : public AFortLevelScriptActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2A8(0x8)
		bool NewLobby; // 0x2B0(0x1)
		bool NewVar; // 0x2B1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2B2(0x6) UNKNOWN PROPERTY
		AHBOnboardingFlow_C* HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Maps/Frontend.Frontend_C");
			return ret;
		}

		void PlaySpeech(FString Filename, int32_t SampleRate, USoundWave* AssetFile); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMatchStarted(); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnableTutorial(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Frontend(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C
	// Inherited from AFortLevelScriptActor -> ALevelScriptActor -> AActor -> UObject
	// Size: 0x18 (0x2C0 - 0x2A8)
	class AFrontend_BG_Main_C : public AFortLevelScriptActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2A8(0x8)
		ABP_Frontend_ShopBG_C* BP_Frontend_ShopBG_9_ExecuteUbergraph_Frontend_BG_Main_RefProperty; // 0x2B0(0x8)
		AFortStaticMeshActor* S_UI_FrontendInspect_HexDonut_ExecuteUbergraph_Frontend_BG_Main_RefProperty; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C");
			return ret;
		}

		void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(UTexture* BackgroundImage); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(FString PresetEnvironmentName); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_4_OnEnteredItemShop__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_5_OnEnteredStore__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Frontend_BG_Main(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Maps/WorldLightingMenu.WorldLightingMenu_C
	// Inherited from AFortLevelScriptActor -> ALevelScriptActor -> AActor -> UObject
	// Size: 0x0 (0x2A8 - 0x2A8)
	class AWorldLightingMenu_C : public AFortLevelScriptActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Maps/WorldLightingMenu.WorldLightingMenu_C");
			return ret;
		}
	};


	// Class /Game/Maps/FrontEnd/Maps/FrontEndStore.FrontEndStore_C
	// Inherited from AFortLevelScriptActor -> ALevelScriptActor -> AActor -> UObject
	// Size: 0x0 (0x2A8 - 0x2A8)
	class AFrontEndStore_C : public AFortLevelScriptActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Maps/FrontEnd/Maps/FrontEndStore.FrontEndStore_C");
			return ret;
		}
	};


	// Class /Game/Maps/UI/Frontend_BattlePass.Frontend_BattlePass_C
	// Inherited from AFortLevelScriptActor -> ALevelScriptActor -> AActor -> UObject
	// Size: 0x0 (0x2A8 - 0x2A8)
	class AFrontend_BattlePass_C : public AFortLevelScriptActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Maps/UI/Frontend_BattlePass.Frontend_BattlePass_C");
			return ret;
		}
	};


	// Class /Game/Maps/UI/Frontend_Lobby_Layout2.Frontend_Lobby_Layout2_C
	// Inherited from AFortLevelScriptActor -> ALevelScriptActor -> AActor -> UObject
	// Size: 0x0 (0x2A8 - 0x2A8)
	class AFrontend_Lobby_Layout2_C : public AFortLevelScriptActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Maps/UI/Frontend_Lobby_Layout2.Frontend_Lobby_Layout2_C");
			return ret;
		}
	};

}
