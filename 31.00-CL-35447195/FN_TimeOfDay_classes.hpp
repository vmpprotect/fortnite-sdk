#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TimeOfDay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C
	// Inherited from AMASTER_TODM_C -> AFortTimeOfDayManager -> AInfo -> AActor -> UObject
	// Size: 0x8 (0x12E8 - 0x12E0)
	class ATODM_Disabled_C : public AMASTER_TODM_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x12E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C");
			return ret;
		}

		void SetReflectionQualityMPC(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D1B071400
		void SetGlobalIlluminationMPC(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D1B071300
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D1B071A00
		void DisableLightAndFog(bool Enable); // Flags: BlueprintCallable|BlueprintEvent 0x15D1B070E00
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D1B071200
		void Update Scalabilty Settings(); // Flags: BlueprintCallable|BlueprintEvent 0x15D1B071900
		void DebugScalabilitySettings(); // Flags: BlueprintCallable|BlueprintEvent 0x15D1B070D00
		void ExecuteUbergraph_TODM_Disabled(int32_t EntryPoint); // Flags: Final 0x15D1B071100
	};


	// Class /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C
	// Inherited from AFortTimeOfDayManager -> AInfo -> AActor -> UObject
	// Size: 0x2F0 (0x12E0 - 0xFF0)
	class AMASTER_TODM_C : public AFortTimeOfDayManager	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xFF0(0x8)
		UPostProcessComponent HeavySSAO_Postprocess; // 0xFF8(0x8)
		UPostProcessComponent EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_; // 0x1000(0x8)
		float New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF; // 0x1008(0x4)
		float New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF; // 0x100C(0x4)
		float New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF; // 0x1010(0x4)
		float New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF; // 0x1014(0x4)
		TEnumAsByte New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF; // 0x1018(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x1019(0x7) UNKNOWN PROPERTY
		UTimelineComponent New_Storm_Timeline; // 0x1020(0x8)
		float FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285; // 0x1028(0x4)
		float FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285; // 0x102C(0x4)
		float FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285; // 0x1030(0x4)
		TEnumAsByte FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285; // 0x1034(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x1035(0x3) UNKNOWN PROPERTY
		UTimelineComponent FlashLightning; // 0x1038(0x8)
		double WindSpeed; // 0x1040(0x8)
		double RandomWeatherWaitTime; // 0x1048(0x8)
		double CurrentAmountOfRandomWeatherTimeLeft; // 0x1050(0x8)
		double NewWeatherLerpAmount; // 0x1058(0x8)
		double WindStrength; // 0x1060(0x8)
		double FutureWindStrength; // 0x1068(0x8)
		double FutureWindSpeed; // 0x1070(0x8)
		bool bPickNewWindConditions; // 0x1078(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x1079(0x7) UNKNOWN PROPERTY
		double LightningStrength; // 0x1080(0x8)
		double ThreatCloudStormAmount; // 0x1088(0x8)
		bool UseRainWithStorms; // 0x1090(0x1)
		bool Play_a_Particle_Effect_Near_the_players_Feet; // 0x1091(0x1)
		bool Internal_Rain_WindEffects_Should_be_Active; // 0x1092(0x1)
		unsigned char UnknownData09_6[0x5]; // 0x1093(0x5) UNKNOWN PROPERTY
		UParticleSystemComponent Storm_Foot_Particle_Outdoor; // 0x1098(0x8)
		UParticleSystem Storm_Foot_Particle_While_on_Terrain; // 0x10A0(0x8)
		UParticleSystemComponent Storm_Foot_Particle_Indoor; // 0x10A8(0x8)
		UParticleSystem Storm_Foot_Particle_While_NOT_on_Terrain; // 0x10B0(0x8)
		double Storm_Wind_Strength; // 0x10B8(0x8)
		bool Generate_Foliage_Wind_Gusts; // 0x10C0(0x1)
		unsigned char UnknownData10_6[0x7]; // 0x10C1(0x7) UNKNOWN PROPERTY
		FTimerHandle LightningStrikeTimerHandle; // 0x10C8(0x8)
		FLinearColor PreviousDirectionalLightColor; // 0x10D0(0x10)
		FLinearColor Lightning_Flash_Color; // 0x10E0(0x10)
		double Lightning_Flash_Timeline_Min; // 0x10F0(0x8)
		double Lightning_Flash_Timeline_Max; // 0x10F8(0x8)
		FLinearColor SkyboxFogMorningColor; // 0x1100(0x10)
		FLinearColor SkyboxFogMorningLitColor; // 0x1110(0x10)
		double SkyboxFogMorningDistance; // 0x1120(0x8)
		double SkyboxFogMorningDiffuseAmount; // 0x1128(0x8)
		double SkyboxFogMorningEmissiveAmount; // 0x1130(0x8)
		double SkyboxFogMorningLitLength; // 0x1138(0x8)
		double SkyboxFogMorningLitRotation; // 0x1140(0x8)
		double SkyboxFogMorningLitOffset; // 0x1148(0x8)
		FLinearColor SkyboxFogDayColor; // 0x1150(0x10)
		FLinearColor SkyboxFogDayLitColor; // 0x1160(0x10)
		double SkyboxFogDayDistance; // 0x1170(0x8)
		double SkyboxFogDayDiffuseAmount; // 0x1178(0x8)
		double SkyboxFogDayEmissiveAmount; // 0x1180(0x8)
		double SkyboxFogDayLitLength; // 0x1188(0x8)
		double SkyboxFogDayLitRotation; // 0x1190(0x8)
		double SkyboxFogDayLitOffset; // 0x1198(0x8)
		FLinearColor SkyboxFogEveningColor; // 0x11A0(0x10)
		FLinearColor SkyboxFogEveningLitColor; // 0x11B0(0x10)
		double SkyboxFogEveningDistance; // 0x11C0(0x8)
		double SkyboxFogEveningDiffuseAmount; // 0x11C8(0x8)
		double SkyboxFogEveningEmissiveAmount; // 0x11D0(0x8)
		double SkyboxFogEveningLitLength; // 0x11D8(0x8)
		double SkyboxFogEveningLitRotation; // 0x11E0(0x8)
		double SkyboxFogEveningLitOffset; // 0x11E8(0x8)
		FLinearColor SkyboxFogNightColor; // 0x11F0(0x10)
		FLinearColor SkyboxFogNightLitColor; // 0x1200(0x10)
		double SkyboxFogNightDistance; // 0x1210(0x8)
		double SkyboxFogNightDiffuseAmount; // 0x1218(0x8)
		double SkyboxFogNightEmissiveAmount; // 0x1220(0x8)
		double SkyboxFogNightLitLength; // 0x1228(0x8)
		double SkyboxFogNightLitRotation; // 0x1230(0x8)
		double SkyboxFogNightLitOffset; // 0x1238(0x8)
		double World_Border_Cloud_Base_Color_Brightness; // 0x1240(0x8)
		FLinearColor World_Border_Cloud_Sub_Surface_Color_and_Opacity; // 0x1248(0x10)
		bool EnableCometDynamicPlacement; // 0x1258(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x1259(0x7) UNKNOWN PROPERTY
		FVector4 Night; // 0x1260(0x20)
		FVector4 Evening; // 0x1280(0x20)
		FVector4 Day; // 0x12A0(0x20)
		FVector4 Morning; // 0x12C0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C");
			return ret;
		}

		void EmptyTransform(FTransform& Transform); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D40578700
		void SetHeavySSAO(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D1B073C00
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D1B070400
		void FlashLightning__FinishedFunc(); // Flags: BlueprintEvent 0x15D40578E00
		void FlashLightning__UpdateFunc(); // Flags: BlueprintEvent 0x15D1B071F00
		void New Storm Timeline__FinishedFunc(); // Flags: BlueprintEvent 0x15D1B072100
		void New Storm Timeline__UpdateFunc(); // Flags: BlueprintEvent 0x15D1B073900
		void New Storm Timeline__FireOffRain__EventFunc(); // Flags: BlueprintEvent 0x15D1B073800
		void StartStorm(); // Flags: BlueprintCallable|BlueprintEvent 0x15D1B070200
		void OnStormStart(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D1B073600
		void OnStormEnd(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D1B073A00
		void LightningStrike(); // Flags: BlueprintCallable|BlueprintEvent 0x15D1B072000
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D1B073B00
		void DisableLightAndFog(bool Enable); // Flags: BlueprintCallable|BlueprintEvent 0x15D40578600
		void EnableHDRRendering(); // Flags: BlueprintCallable|BlueprintEvent 0x15D40578D00
		void UpdateSSAO(); // Flags: BlueprintCallable|BlueprintEvent 0x15D1B070300
		void ExecuteUbergraph_MASTER_TODM(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D40578900
	};

}
