#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Mods
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /ValetMods/Mods/TiresOffRoad/GE_ValetMod_Grant_Tag_Tire_OffRoad_Sedan.GE_ValetMod_Grant_Tag_Tire_OffRoad_Sedan_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_ValetMod_Grant_Tag_Tire_OffRoad_Sedan_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ValetMods/Mods/TiresOffRoad/GE_ValetMod_Grant_Tag_Tire_OffRoad_Sedan.GE_ValetMod_Grant_Tag_Tire_OffRoad_Sedan_C");
			return ret;
		}
	};


	// Class /ValetMods/Mods/TiresOffRoad/GE_ValetMod_Grant_Tag_Tire_OffRoad_Truck.GE_ValetMod_Grant_Tag_Tire_OffRoad_Truck_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_ValetMod_Grant_Tag_Tire_OffRoad_Truck_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ValetMods/Mods/TiresOffRoad/GE_ValetMod_Grant_Tag_Tire_OffRoad_Truck.GE_ValetMod_Grant_Tag_Tire_OffRoad_Truck_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/Window/ArmoredWindow/VMC_Window_Armored.VMC_Window_Armored_C
	// Inherited from UFortVehicleModComponent -> UActorComponent -> UObject
	// Size: 0x24 (0x1F4 - 0x1D0)
	class UVMC_Window_Armored_C : public UFortVehicleModComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1D0(0x8)
		AFortAthenaVehicle* OwnerVehicle; // 0x1D8(0x8)
		TArray<FName> WindowNames; // 0x1E0(0x10)
		float ArmoredWindowHealth; // 0x1F0(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/Window/ArmoredWindow/VMC_Window_Armored.VMC_Window_Armored_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnModEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnModConfigReplicated(UFortVehicleModConfig* ModConfigData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VMC_Window_Armored(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VehicleMods/Mods/Window/ArmoredWindow/VMConfig_Window_Armored.VMConfig_Window_Armored_C
	// Inherited from UFortVehicleModConfig -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UVMConfig_Window_Armored_C : public UFortVehicleModConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/Window/ArmoredWindow/VMConfig_Window_Armored.VMConfig_Window_Armored_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/BulletProofTires/VMC_BulletProofTires.VMC_BulletProofTires_C
	// Inherited from UFortVehicleModComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x1E0 - 0x1D0)
	class UVMC_BulletProofTires_C : public UFortVehicleModComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1D0(0x8)
		AFortAthenaVehicle* OwnerVehicle; // 0x1D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/BulletProofTires/VMC_BulletProofTires.VMC_BulletProofTires_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnModEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnModDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VMC_BulletProofTires(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VehicleMods/Mods/Mortar/VSWC_MortarWeaponSeatComp_Base.VSWC_MortarWeaponSeatComp_Base_C
	// Inherited from UFortVehicleAimingWeaponComp -> UFortVehicleSeatWeaponComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x3F8 - 0x3F8)
	class UVSWC_MortarWeaponSeatComp_Base_C : public UFortVehicleAimingWeaponComp	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/Mortar/VSWC_MortarWeaponSeatComp_Base.VSWC_MortarWeaponSeatComp_Base_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/MachineGunMod/VSWC_MachineGunWeaponSeatComp_Base.VSWC_MachineGunWeaponSeatComp_Base_C
	// Inherited from UFortVehicleAimingWeaponComp -> UFortVehicleSeatWeaponComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x3F8 - 0x3F8)
	class UVSWC_MachineGunWeaponSeatComp_Base_C : public UFortVehicleAimingWeaponComp	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/MachineGunMod/VSWC_MachineGunWeaponSeatComp_Base.VSWC_MachineGunWeaponSeatComp_Base_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/VMC_VertexAnimTurret_Parent.VMC_VertexAnimTurret_Parent_C
	// Inherited from UFortVehicleModComponent_VertexAnimTurret -> UFortVehicleModComponent -> UActorComponent -> UObject
	// Size: 0x190 (0x630 - 0x4A0)
	class UVMC_VertexAnimTurret_Parent_C : public UFortVehicleModComponent_VertexAnimTurret	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4A0(0x8)
		AFortAthenaVehicle* OwnerVehicle; // 0x4A8(0x8)
		UVSWC_MachineGunWeaponSeatComp_Base_C* _WeaponComp; // 0x4B0(0x8)
		UStaticMeshComponent* GunSMComponent; // 0x4B8(0x8)
		FTimerHandle UpdateSMTimerHandle; // 0x4C0(0x8)
		bool DebugVisualization; // 0x4C8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x4C9(0x7) UNKNOWN PROPERTY
		FTransform VFX_Location; // 0x4D0(0x60)
		bool VertexAnimUpdateStopping; // 0x530(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x531(0x7) UNKNOWN PROPERTY
		UNiagaraSystem* SpawnFX; // 0x538(0x8)
		float TurretSocketPitchOffset; // 0x540(0x4)
		float TurretSocketYawOffset; // 0x544(0x4)
		float MeshUpdateDeltaTime; // 0x548(0x4)
		bool FoundViewTargetRelevantForTickUpdate; // 0x54C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x54D(0x3) UNKNOWN PROPERTY
		int32_t OverHeatPrimitiveDataIndex; // 0x550(0x4)
		unsigned char UnknownData03_6[0xC]; // 0x554(0xC) UNKNOWN PROPERTY
		FTransform FrameCachedInverseXform; // 0x560(0x60)
		int32_t LastFrameCached; // 0x5C0(0x4)
		int32_t TurretMeshConfigIndex; // 0x5C4(0x4)
		bool UsesPersistentFire; // 0x5C8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x5C9(0x7) UNKNOWN PROPERTY
		AFortWeaponRangedForVehicleMod* TempCachedWeapon; // 0x5D0(0x8)
		FGameplayTag GC_ModApplied; // 0x5D8(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x5DC(0x4) UNKNOWN PROPERTY
		double PreviousPitch; // 0x5E0(0x8)
		double CurrentPitch; // 0x5E8(0x8)
		double PreviousYaw; // 0x5F0(0x8)
		double CurrentYaw; // 0x5F8(0x8)
		double PreviousActivate; // 0x600(0x8)
		double CurrentActivate; // 0x608(0x8)
		bool StaticMeshRelativeToRoot; // 0x610(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x611(0x7) UNKNOWN PROPERTY
		FVector MeshSocketRelativeLocation; // 0x618(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/VMC_VertexAnimTurret_Parent.VMC_VertexAnimTurret_Parent_C");
			return ret;
		}

		void GetValidOwnerVehicleFunc(AFortAthenaVehicle* OwnerVehicle); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsMountedTurretEquipped(int32_t Seat, bool& TurretIsEquipped); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetFrameCachedVehicleInverseTransform(FTransform& VehicleInverseTransform); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FTransform Update Overheat FX(TScriptInterface<Class>& ModWeapon); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Play Muzzle FX(FTransform New Muzzle Transform, EFortWeaponOverheatState Weapon State, bool Use Overheat, float Overheat, bool UsePersistentFire); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Play Spawn FX(USkeletalMeshComponent* Skeletal Mesh Component, FName AttachPointName); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FTransform BP_GetWeaponMuzzleSocketTransform(TScriptInterface<Class>& ModWeapon); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector BP_GetDamageStartLocation(TScriptInterface<Class>& ModWeapon); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InpActEvt_IA_VehicleWeaponSeatMod_TurretEquip_K2Node_EnhancedInputActionEvent(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, UInputAction* SourceAction); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnModEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnModConfigReplicated(UFortVehicleModConfig* ModConfigData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnModDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartTurretStaticMeshUpdateTimer(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopTurretStaticMeshUpdateTimer(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateStaticMeshTurret(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnEnteredVehicle(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnExitedVehicle(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshSeatTimer(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnEnteredSeat(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnLeftSeat(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStopWeaponFireFX(TScriptInterface<Class>& Weapon); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOverheatValueChanged(TScriptInterface<Class>& Weapon, float CurrentValue, float MaxValue, EFortWeaponOverheatState State, bool bIsInCooldown); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayWeaponFireFX(TScriptInterface<Class>& Weapon, bool bPersistentFire, bool bSecondaryFire); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnPawnEnteredSeat(FVehicleModPawnSeatEventArguments& SeatEventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnPawnExitedSeat(FVehicleModPawnSeatEventArguments& SeatEventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FinishStoppingVertexAnimUpdate(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateActivateAnim(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TryAssignStaticMeshComponent(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateOverheatPrimitiveData(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePersistentMuzzleFlash(double DeltaTimeToUse); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CacheStaticMeshData(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnVehicleCosmeticsChangeFinished(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnStaticMeshComponentsUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStaticMeshInitialized(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_VertexAnimUpdate(double DeltaTime); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VMC_VertexAnimTurret_Parent(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VehicleMods/Mods/MachineGunMod/VMC_MachineGunMod.VMC_MachineGunMod_C
	// Inherited from UVMC_VertexAnimTurret_Parent_C -> UFortVehicleModComponent_VertexAnimTurret -> UFortVehicleModComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x630 - 0x630)
	class UVMC_MachineGunMod_C : public UVMC_VertexAnimTurret_Parent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/MachineGunMod/VMC_MachineGunMod.VMC_MachineGunMod_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/Mortar/VMC_MortarMod.VMC_MortarMod_C
	// Inherited from UVMC_VertexAnimTurret_Parent_C -> UFortVehicleModComponent_VertexAnimTurret -> UFortVehicleModComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x630 - 0x630)
	class UVMC_MortarMod_C : public UVMC_VertexAnimTurret_Parent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/Mortar/VMC_MortarMod.VMC_MortarMod_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/SpikedBumper/GEs/GE_SpikedBumper_PlayerDamage.GE_SpikedBumper_PlayerDamage_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_SpikedBumper_PlayerDamage_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/SpikedBumper/GEs/GE_SpikedBumper_PlayerDamage.GE_SpikedBumper_PlayerDamage_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/SpikedBumper/GEs/GE_SpikedBumper_DoNotDamageTag.GE_SpikedBumper_DoNotDamageTag_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_SpikedBumper_DoNotDamageTag_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/SpikedBumper/GEs/GE_SpikedBumper_DoNotDamageTag.GE_SpikedBumper_DoNotDamageTag_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/OffRoadTires/VMConfig_OffRoadTires_Base.VMConfig_OffRoadTires_Base_C
	// Inherited from UFortVehicleModConfig -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UVMConfig_OffRoadTires_Base_C : public UFortVehicleModConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/OffRoadTires/VMConfig_OffRoadTires_Base.VMConfig_OffRoadTires_Base_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/BulletProofTires/VMConfig_BulletProofTires_Base.VMConfig_BulletProofTires_Base_C
	// Inherited from UFortVehicleModConfig -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UVMConfig_BulletProofTires_Base_C : public UFortVehicleModConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/BulletProofTires/VMConfig_BulletProofTires_Base.VMConfig_BulletProofTires_Base_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/SpikedBumper/GEs/GE_SpikedBumper_Damage.GE_SpikedBumper_Damage_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_SpikedBumper_Damage_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/SpikedBumper/GEs/GE_SpikedBumper_Damage.GE_SpikedBumper_Damage_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/SpikedBumper/VMC_FrontBumper_Spiked.VMC_FrontBumper_Spiked_C
	// Inherited from UFortVehicleModComponent -> UActorComponent -> UObject
	// Size: 0x2A0 (0x470 - 0x1D0)
	class UVMC_FrontBumper_Spiked_C : public UFortVehicleModComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1D0(0x8)
		AFortAthenaVehicle* OwnerVehicle; // 0x1D8(0x8)
		TArray<FName> WindowNames; // 0x1E0(0x10)
		float ArmoredWindowHealth; // 0x1F0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1F4(0x4) UNKNOWN PROPERTY
		UFortVehicleModConfig* NewVar; // 0x1F8(0x8)
		FVehicleModStaticMeshAttachmentData BumperMesh; // 0x200(0xA0)
		UClass* DamageGE; // 0x2A0(0x8)
		UClass* ImmunityGE; // 0x2A8(0x8)
		FGameplayTag DamageImmunityTag; // 0x2B0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2B4(0x4) UNKNOWN PROPERTY
		UClass* SpeedMultiDamageGE; // 0x2B8(0x8)
		double SpeedDamageMultiplierPlayer; // 0x2C0(0x8)
		FScalableFloat DamageMultiRow; // 0x2C8(0x28)
		double SpeedDamageMultiplierNonPlayer; // 0x2F0(0x8)
		FScalableFloat DamageMultiNonPlayerRow; // 0x2F8(0x28)
		bool ShouldDamageAllyVehicles; // 0x320(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x321(0x7) UNKNOWN PROPERTY
		FScalableFloat ShouldDamageAllyVehiclesRow; // 0x328(0x28)
		bool Enable_Pawn_in_Front_Check; // 0x350(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x351(0x3) UNKNOWN PROPERTY
		int32_t MeshIndexForFrontCheck; // 0x354(0x4)
		bool Debug_Front_Check; // 0x358(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x359(0x3) UNKNOWN PROPERTY
		float Pawn_FrontCheckBehindBumperDistance; // 0x35C(0x4)
		float Vehicle_FrontCheckBehindBumperDistance_Vehicle; // 0x360(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x364(0x4) UNKNOWN PROPERTY
		FVector BumperSocketLocationThisFrame; // 0x368(0x18)
		FVector BumperBackupOffsetThisFrame; // 0x380(0x18)
		FVector BumperFrontTestLocationThisFrame; // 0x398(0x18)
		float FrontTestDebugDrawTimeSeconds; // 0x3B0(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x3B4(0x4) UNKNOWN PROPERTY
		FVector VectorFromBumperToPawnThisFrame; // 0x3B8(0x18)
		double FrontBumperDotResult; // 0x3D0(0x8)
		double MaxDamageVsPlayers; // 0x3D8(0x8)
		double MaxDamageVsNonPlayer; // 0x3E0(0x8)
		FScalableFloat RowMaxDamageVsPlayers; // 0x3E8(0x28)
		FScalableFloat RowMaxDamageVsNonPlayers; // 0x410(0x28)
		double MinSpeedToApplyDamage; // 0x438(0x8)
		FScalableFloat RowMinSpeedToApplyDamage; // 0x440(0x28)
		USoundBase* BumperAppliedSound; // 0x468(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/SpikedBumper/VMC_FrontBumper_Spiked.VMC_FrontBumper_Spiked_C");
			return ret;
		}

		void DebugFrontCheck(AActor* HitActor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHotfixValues(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsObjectFriendlyVehicle(UObject* Object, bool& Result); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UAbilitySystemComponent GetDriverOrVehicleAbilityComp(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnModEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnModConfigReplicated(UFortVehicleModConfig* ModConfigData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleSkeletalMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnHitByVehicle_Event(AFortPawn* FortPawn, FVector ImpactNormal, FVector LaunchVector); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VMC_FrontBumper_Spiked(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VehicleMods/Mods/SpikedBumper/VMConfig_FrontBumper_Spiked.VMConfig_FrontBumper_Spiked_C
	// Inherited from UFortVehicleModConfig -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UVMConfig_FrontBumper_Spiked_C : public UFortVehicleModConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/SpikedBumper/VMConfig_FrontBumper_Spiked.VMConfig_FrontBumper_Spiked_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/SpikedBumper/VMConfig_FrontBumper_Spiked_WarBus.VMConfig_FrontBumper_Spiked_WarBus_C
	// Inherited from UFortVehicleModConfig -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UVMConfig_FrontBumper_Spiked_WarBus_C : public UFortVehicleModConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/SpikedBumper/VMConfig_FrontBumper_Spiked_WarBus.VMConfig_FrontBumper_Spiked_WarBus_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/Mortar/VMConfig_Mortar_Base.VMConfig_Mortar_Base_C
	// Inherited from UFortVehicleModConfig -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UVMConfig_Mortar_Base_C : public UFortVehicleModConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/Mortar/VMConfig_Mortar_Base.VMConfig_Mortar_Base_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/MachineGunMod/VMConfig_MachineGun_Base.VMConfig_MachineGun_Base_C
	// Inherited from UFortVehicleModConfig -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UVMConfig_MachineGun_Base_C : public UFortVehicleModConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/MachineGunMod/VMConfig_MachineGun_Base.VMConfig_MachineGun_Base_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/Slinky/GEs/GE_ValetMod_Slinky_GrantTag.GE_ValetMod_Slinky_GrantTag_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_ValetMod_Slinky_GrantTag_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/Slinky/GEs/GE_ValetMod_Slinky_GrantTag.GE_ValetMod_Slinky_GrantTag_C");
			return ret;
		}
	};


	// Class /VehicleMods/Mods/Slinky/VMC_Slinky.VMC_Slinky_C
	// Inherited from UFortVehicleModComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x258 - 0x1D0)
	class UVMC_Slinky_C : public UFortVehicleModComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1D0(0x8)
		AFortDagwoodVehicle* Owner_Vehicle; // 0x1D8(0x8)
		bool Hydraulics_Enabled; // 0x1E0(0x1)
		bool IsDropped; // 0x1E1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x1E2(0x6) UNKNOWN PROPERTY
		double Max_Bounce_Speed; // 0x1E8(0x8)
		bool IsOblong; // 0x1F0(0x1)
		bool PlayerInVehicle; // 0x1F1(0x1)
		bool RadioIsPlaying; // 0x1F2(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x1F3(0x5) UNKNOWN PROPERTY
		ABP_Vehicle_Radio_C* VehicleRadio; // 0x1F8(0x8)
		FMulticastInlineDelegate StopIt; // 0x200(0x10)
		FMulticastInlineDelegate DropItLeft; // 0x210(0x10)
		FTimerHandle Looping_Trigger_Timer; // 0x220(0x8)
		FVector Jump_Velocity; // 0x228(0x18)
		float Hydraulic_Audio_Delay; // 0x240(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x244(0x4) UNKNOWN PROPERTY
		double MinSteerAngleTrigger; // 0x248(0x8)
		double MaxSteerAngleTrigger; // 0x250(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/Slinky/VMC_Slinky.VMC_Slinky_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Lowrider Jump(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Hydraulic Audio 2(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Tilt Audio(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Stop Handbrake(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Start Handbrake(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Pawn Enter Vehicle(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Pawn Exit Vehicle(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VMC_Slinky(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DropItLeft__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopIt__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VehicleMods/Mods/Slinky/VehicleModConfig_Slinky.VehicleModConfig_Slinky_C
	// Inherited from UFortVehicleModConfig -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UVehicleModConfig_Slinky_C : public UFortVehicleModConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/Mods/Slinky/VehicleModConfig_Slinky.VehicleModConfig_Slinky_C");
			return ret;
		}
	};


	// Class /CowCatcherMod/Mods/CowCatcher/VMC_FrontBumper_CowCatcher.VMC_FrontBumper_CowCatcher_C
	// Inherited from UFortVehicleModComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x1D0 - 0x1D0)
	class UVMC_FrontBumper_CowCatcher_C : public UFortVehicleModComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/CowCatcherMod/Mods/CowCatcher/VMC_FrontBumper_CowCatcher.VMC_FrontBumper_CowCatcher_C");
			return ret;
		}
	};


	// Class /CowCatcherMod/Mods/CowCatcher/GE_ValetMod_CowCatcher_GrantTag.GE_ValetMod_CowCatcher_GrantTag_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_ValetMod_CowCatcher_GrantTag_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/CowCatcherMod/Mods/CowCatcher/GE_ValetMod_CowCatcher_GrantTag.GE_ValetMod_CowCatcher_GrantTag_C");
			return ret;
		}
	};


	// Class /CowCatcherMod/Mods/CowCatcher/BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x95 (0xA1D - 0x988)
	class ABGA_ValetMod_CowCatcher_C : public ABuildingGameplayActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x988(0x8)
		UStaticMeshComponent* StaticMesh; // 0x990(0x8)
		TScriptInterface<Class> AttachedVehicle; // 0x998(0x10)
		double SpinMag; // 0x9A8(0x8)
		USoundBase* CowCatcherRemovedSound; // 0x9B0(0x8)
		UFXSystemAsset* FX_CowCatcherApplied_NS; // 0x9B8(0x8)
		USoundBase* CowCatcherAppliedSound; // 0x9C0(0x8)
		double Health_ToShowDmgCrinkle; // 0x9C8(0x8)
		double MaxCrinkleSeverity; // 0x9D0(0x8)
		double HealthMaterialQuantizeSteps; // 0x9D8(0x8)
		UFXSystemAsset* FX_CowCatcherRemoved_NS; // 0x9E0(0x8)
		bool BindVehicleSkeletalHitEvents; // 0x9E8(0x1)
		bool StartTrackingVehicleSkeletalMeshHits; // 0x9E9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x9EA(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer HealingTag; // 0x9F0(0x20)
		float PreviousHealth; // 0xA10(0x4)
		float CurrentHealth; // 0xA14(0x4)
		FGameplayTag CC_ModTag; // 0xA18(0x4)
		bool RemoveModOnDestroy; // 0xA1C(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/CowCatcherMod/Mods/CowCatcher/BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C");
			return ret;
		}

		void UpdateDamageMaterials(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CalculateLaunchDirection(FVector& LaunchDirection); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CanDestroyBuilding(AActor* Actor); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector RandomizeSpinThrust(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetAttachedVehicle(TScriptInterface<Class> AttachedVehicle); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDeathServer(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HealthChanged(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupVehicleSkeletalHitNotifications(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleSkeletalMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IgnoreEarlyCollisionOver(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReapplyVFX/SFX(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BindVehicleHealthEvents(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnVehicleOwnerOutOfHealth(AFortAthenaVehicle* DeadVehicle, FGameplayTagContainer& InTags, AController* EventInstigator, AActor* DamageCauser); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOwnerVehicleExploded(AController* LastDamageInstigator, AFortAthenaVehicle* Vehicle); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CleanupOwnerVehicleHealthBindings(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreativeCleanup(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCreativeNullOwnerDestroy(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AttachVehicleHealthChange(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BGA_ValetMod_CowCatcher(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /CowCatcherMod/Mods/CowCatcher/VehicleModConfig_CowCatcherBase.VehicleModConfig_CowCatcherBase_C
	// Inherited from UFortVehicleModConfig -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UVehicleModConfig_CowCatcherBase_C : public UFortVehicleModConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/CowCatcherMod/Mods/CowCatcher/VehicleModConfig_CowCatcherBase.VehicleModConfig_CowCatcherBase_C");
			return ret;
		}
	};


	// Class /CowCatcherMod/Mods/CowCatcher/VehicleModConfig_CowCatcherSemi.VehicleModConfig_CowCatcherSemi_C
	// Inherited from UVehicleModConfig_CowCatcherBase_C -> UFortVehicleModConfig -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UVehicleModConfig_CowCatcherSemi_C : public UVehicleModConfig_CowCatcherBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/CowCatcherMod/Mods/CowCatcher/VehicleModConfig_CowCatcherSemi.VehicleModConfig_CowCatcherSemi_C");
			return ret;
		}
	};


	// Class /CowCatcherMod/Mods/CowCatcher/VehicleModConfig_CowCatcherABB.VehicleModConfig_CowCatcherABB_C
	// Inherited from UVehicleModConfig_CowCatcherBase_C -> UFortVehicleModConfig -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UVehicleModConfig_CowCatcherABB_C : public UVehicleModConfig_CowCatcherBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/CowCatcherMod/Mods/CowCatcher/VehicleModConfig_CowCatcherABB.VehicleModConfig_CowCatcherABB_C");
			return ret;
		}
	};


	// Class /CowCatcherMod/Mods/CowCatcher/VehicleModConfig_CowCatcherSmall.VehicleModConfig_CowCatcherSmall_C
	// Inherited from UVehicleModConfig_CowCatcherBase_C -> UFortVehicleModConfig -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UVehicleModConfig_CowCatcherSmall_C : public UVehicleModConfig_CowCatcherBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/CowCatcherMod/Mods/CowCatcher/VehicleModConfig_CowCatcherSmall.VehicleModConfig_CowCatcherSmall_C");
			return ret;
		}
	};

}
