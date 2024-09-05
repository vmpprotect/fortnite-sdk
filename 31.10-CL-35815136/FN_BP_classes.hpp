#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BP
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Valet/BP/Lights/ValetLightSpawnerComponent.ValetLightSpawnerComponent_C
	// Inherited from UActorComponent -> UObject
	// Size: 0xD0 (0x170 - 0xA0)
	class UValetLightSpawnerComponent_C : public UActorComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA0(0x8)
		TArray<USpotLightComponent*> currentLightComponents; // 0xA8(0x10)
		UClass* spotLightClass; // 0xB8(0x8)
		TArray<FTransform> additionalLightTransforms; // 0xC0(0x10)
		bool ownerIsBeingDriven; // 0xD0(0x1)
		bool lightsNeedValidation; // 0xD1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xD2(0x2) UNKNOWN PROPERTY
		int32_t maxLightCount; // 0xD4(0x4)
		int32_t currentCVarValue_EnabledState; // 0xD8(0x4)
		bool areLightsOn; // 0xDC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		FTimerHandle timerHandle_validateCarLights; // 0xE0(0x8)
		double myRandomInterval; // 0xE8(0x8)
		TSet<FName> light_SocketNames; // 0xF0(0x50)
		FMulticastInlineDelegate OnNewLightsSpawned; // 0x140(0x10)
		FLinearColor overrideLightColor; // 0x150(0x10)
		FMulticastInlineDelegate OnLightEnabledChanged; // 0x160(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/BP/Lights/ValetLightSpawnerComponent.ValetLightSpawnerComponent_C");
			return ret;
		}

		void handleDisabledChanged(bool Disabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetValetLightColor(FLinearColor NewLightColor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetOwnerSkeletalMeshComp(USkeletalMeshComponentBudgeted* SkeletalMesh); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void validateNextFrame(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void validateCvar_EnablePhysicalLights(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void handleTimeOfDayChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void validateCarLights(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void handlePawnExitSeat(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Handle Pawn Enter Seat(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool shouldLightsBeOn(); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool isOwnerBeingDriven(); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void addLight(FTransform RelativeTransform, FName SocketName, UValetSpotLightComponent_C* NewLIght); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool hasAnyLights(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void handleCvarChanged(FString CVarName); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void clearLights(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void spawnLights(TArray<UValetSpotLightComponent_C*>& NewLights); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ValetLightSpawnerComponent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLightEnabledChanged__DelegateSignature(bool Enabled); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNewLightsSpawned__DelegateSignature(TArray<UValetSpotLightComponent_C*>& NewLights); // Flags: Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Valet/BP/Lights/ValetSpotLightComponent.ValetSpotLightComponent_C
	// Inherited from USpotLightComponent -> UPointLightComponent -> ULocalLightComponent -> ULightComponent -> ULightComponentBase -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x3C0 - 0x3B8)
	class UValetSpotLightComponent_C : public USpotLightComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/BP/Lights/ValetSpotLightComponent.ValetSpotLightComponent_C");
			return ret;
		}
	};


	// Class /Valet/BP/Lights/I_ValetLightSpawnerInterface.I_ValetLightSpawnerInterface_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UI_ValetLightSpawnerInterface_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/BP/Lights/I_ValetLightSpawnerInterface.I_ValetLightSpawnerInterface_C");
			return ret;
		}

		void SetEmissiveLightsEnabled(bool Enabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
