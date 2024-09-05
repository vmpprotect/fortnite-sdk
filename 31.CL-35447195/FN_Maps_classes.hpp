#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Maps
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/Maps/Frontend.Frontend_C
	// Inherited from AFortLevelScriptActor -> ALevelScriptActor -> AActor -> UObject
	// Size: 0x18 (0x2C0 - 0x2A8)
	class AFrontend_C : public AFortLevelScriptActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2A8(0x8)
		bool NewLobby; // 0x2B0(0x1)
		bool NewVar; // 0x2B1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2B2(0x6) UNKNOWN PROPERTY
		AHBOnboardingFlow_C HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Maps/Frontend.Frontend_C");
			return ret;
		}

		void PlaySpeech(FString Filename, int32_t SampleRate, USoundWave AssetFile); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F95F200
		void OnMatchStarted(); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x15D5F95F100
		void EnableTutorial(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F95E900
		void ExecuteUbergraph_Frontend(int32_t EntryPoint); // Flags: Final 0x15D5F95EA00
	};


	// Class /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C
	// Inherited from AFortLevelScriptActor -> ALevelScriptActor -> AActor -> UObject
	// Size: 0x18 (0x2C0 - 0x2A8)
	class AFrontend_BG_Main_C : public AFortLevelScriptActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2A8(0x8)
		ABP_Frontend_ShopBG_C BP_Frontend_ShopBG_9_ExecuteUbergraph_Frontend_BG_Main_RefProperty; // 0x2B0(0x8)
		AFortStaticMeshActor S_UI_FrontendInspect_HexDonut_ExecuteUbergraph_Frontend_BG_Main_RefProperty; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C");
			return ret;
		}

		void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature(); // Flags: BlueprintEvent 0x15D661A3100
		void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature(); // Flags: BlueprintEvent 0x15D661A2B00
		void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(UTexture BackgroundImage); // Flags: BlueprintEvent 0x15D661A2A00
		void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(FString PresetEnvironmentName); // Flags: BlueprintEvent 0x15D661A3000
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D661A3900
		void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_4_OnEnteredItemShop__DelegateSignature(); // Flags: BlueprintEvent 0x15D661A3200
		void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_5_OnEnteredStore__DelegateSignature(); // Flags: BlueprintEvent 0x15D661A3300
		void ExecuteUbergraph_Frontend_BG_Main(int32_t EntryPoint); // Flags: Final 0x15D661A3800
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


	// Class /Game/Maps/UI/Frontend_Lobby_Background.Frontend_Lobby_Background_C
	// Inherited from AFortLevelScriptActor -> ALevelScriptActor -> AActor -> UObject
	// Size: 0x278 (0x520 - 0x2A8)
	class AFrontend_Lobby_Background_C : public AFortLevelScriptActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2A8(0x8)
		float FadeIn_Fade_3606FDF647A6577B9DAC47B89146CD85; // 0x2B0(0x4)
		TEnumAsByte FadeIn__Direction_3606FDF647A6577B9DAC47B89146CD85; // 0x2B4(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x2B5(0x3) UNKNOWN PROPERTY
		UTimelineComponent FadeIn; // 0x2B8(0x8)
		float FadeOut_Fade_44D3B05B49031FA3891648AB32F57584; // 0x2C0(0x4)
		TEnumAsByte FadeOut__Direction_44D3B05B49031FA3891648AB32F57584; // 0x2C4(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x2C5(0x3) UNKNOWN PROPERTY
		UTimelineComponent FadeOut; // 0x2C8(0x8)
		double FadetoBlackFloor; // 0x2D0(0x8)
		double FadeGrid; // 0x2D8(0x8)
		double FadeGrid_Targetvalue; // 0x2E0(0x8)
		double FadetoBlackFloor_TargetValue; // 0x2E8(0x8)
		FString PresetEnvironment; // 0x2F0(0x10)
		UTexture Texture; // 0x300(0x8)
		UMaterialInstance Material; // 0x308(0x8)
		UMaterialInstance PreBlueMaterial; // 0x310(0x8)
		TMap Backgrounds; // 0x318(0x50)
		TArray SpawnedFX; // 0x368(0x10)
		bool FadedFromBlue; // 0x378(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x379(0x7) UNKNOWN PROPERTY
		FFrontendLobbyData Lobby_Data; // 0x380(0xA8)
		TWeakObjectPtr QueuedTexture; // 0x428(0x20)
		TWeakObjectPtr QueuedMaterial; // 0x448(0x20)
		TWeakObjectPtr QueuedPreBlurMaterial; // 0x468(0x20)
		int32_t WaitingOnAssets; // 0x488(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x48C(0x4) UNKNOWN PROPERTY
		ABP_FrontendBackPlate_C 6_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x490(0x8)
		AEmitter P_Storm_Rain_01_5_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x498(0x8)
		AEmitter P_Snow_Ambient_Lobby_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4A0(0x8)
		ANiagaraActor NS_SideWays_Volume_InFrontEnd_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4A8(0x8)
		AFortStaticMeshActor SM_Sideways_Smoke_FrontEnd_159_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4B0(0x8)
		AFortStaticMeshActor SM_Mother_Crash_BlinkingLights_01_3_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4B8(0x8)
		ANiagaraActor NiagaraActor_3_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4C0(0x8)
		AFortStaticMeshActor SM_Sideways_Smoke_FrontEnd_0_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4C8(0x8)
		ANiagaraActor NiagaraActor_1_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4D0(0x8)
		ANiagaraActor NiagaraActor_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4D8(0x8)
		ANiagaraActor NiagaraActor_4_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x4E0(0x8)
		ABP_FrontendBackPlate_C 6_Setup_Basic_Background_Data_MERGED_RefProperty; // 0x4E8(0x8)
		ABP_FrontendBackPlate_C 6_SetupGalileo_MERGED_RefProperty; // 0x4F0(0x8)
		ABP_FrontendBackPlate_C 6_SetupSpecialEventBackgroundData_MERGED_RefProperty; // 0x4F8(0x8)
		ABP_FrontendBackPlate_C 6_SetupBasicBackgroundDataWithRenderTarget_MERGED_RefProperty; // 0x500(0x8)
		ABP_FrontendBackPlate_C 6_SetupSpecialEventBackgroundDataWithRenderTarget_MERGED_RefProperty; // 0x508(0x8)
		ACMSLobbyDirector_C CMSLobbyDirector_3_UpdateLevelActorsVisibility_MERGED_RefProperty; // 0x510(0x8)
		ABP_FrontendBackPlate_C 6_UpdateLevelActorsVisibility_MERGED_RefProperty; // 0x518(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Maps/UI/Frontend_Lobby_Background.Frontend_Lobby_Background_C");
			return ret;
		}

		void UpdateLevelActorsVisibility(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D8C899900
		void Convert Legacy Frontend Background Data(FFrontendBackgroundData Legacy Frontend Background Data, FFrontendLobbyData& Frontend Lobby Data); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D8C897000
		void SetupSpecialEventBackgroundDataWithRenderTarget(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8C899F00
		void SetupBasicBackgroundDataWithRenderTarget(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8C89A200
		void SetupSpecialEventBackgroundData(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8C89A000
		void SetupGalileo(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8C89A100
		void LoadBackgroundData(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D8C896800
		void Setup Basic Background Data(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8C89A300
		void SetShowPedestalSparkles(bool Show); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D8C89A400
		void UpdateFade(double FadeValue, double FadeFloorToBlack, double InFadeGrid); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8C899A00
		void FadeOut__FinishedFunc(); // Flags: BlueprintEvent 0x15D8C896B00
		void FadeOut__UpdateFunc(); // Flags: BlueprintEvent 0x15D8C896A00
		void FadeIn__FinishedFunc(); // Flags: BlueprintEvent 0x15D8C896D00
		void FadeIn__UpdateFunc(); // Flags: BlueprintEvent 0x15D8C896C00
		void OnLoaded_7B16DAE04937EECB604410A2EC352CE3(UObject Loaded); // Flags: BlueprintCallable|BlueprintEvent 0x15D8C896600
		void OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99(UObject Loaded); // Flags: BlueprintCallable|BlueprintEvent 0x15D8C896500
		void OnLoaded_E5F1E80A4DD36718D41FF68F137C4775(UObject Loaded); // Flags: BlueprintCallable|BlueprintEvent 0x15D8C896400
		void OnLoaded_1CC0D8274FA1EFC9AE28C89FDF518A70(UObject Loaded); // Flags: BlueprintCallable|BlueprintEvent 0x15D8C896700
		void BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(FString PresetEnvironmentName); // Flags: BlueprintEvent 0x15D8C897400
		void BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(UTexture BackgroundImage); // Flags: BlueprintEvent 0x15D8C897300
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D8C89A500
		void TestDynColor(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8C899E00
		void FadeFromBlue(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8C896E00
		void LoadAssets(TWeakObjectPtr InTexture, TWeakObjectPtr InMaterial, TWeakObjectPtr InPreBlurMaterial); // Flags: BlueprintCallable|BlueprintEvent 0x15D8C896900
		void ContinueBackgroundSetup(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8C897100
		void BndEvt__Frontend_Lobby_Background_CMSLobbyDirector_3_K2Node_ActorBoundEvent_2_OnLobbyDataChanged__DelegateSignature(FFrontendLobbyData LobbyData); // Flags: BlueprintEvent 0x15D8C897200
		void TriggerMaterialLoad(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8C899C00
		void TriggerTextureLoad(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8C899B00
		void Trigger PreBlur Material Load(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8C899D00
		void ExecuteUbergraph_Frontend_Lobby_Background(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D8C896F00
	};

}
