#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FluidSimulation
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /FortWater/FluidSimulation/Blueprints/BP_FluidSimParent.BP_FluidSimParent_C
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class ABP_FluidSimParent_C : public AActor	
	{
	public:
		USceneComponent* DefaultSceneRoot; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortWater/FluidSimulation/Blueprints/BP_FluidSimParent.BP_FluidSimParent_C");
			return ret;
		}

		void GetNormalRT(UTextureRenderTarget2D* RT); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C
	// Inherited from ABP_FluidSimParent_C -> AActor -> UObject
	// Size: 0x338 (0x5D0 - 0x298)
	class ABP_FluidSim_01_C : public ABP_FluidSimParent_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x8)
		UStaticMeshComponent* DebugPlane; // 0x2A0(0x8)
		UMaterialInstanceDynamic* RippleSimMID; // 0x2A8(0x8)
		UMaterialInstanceDynamic* RenderNormalsMID; // 0x2B0(0x8)
		UMaterialInstanceDynamic* DisplayMID; // 0x2B8(0x8)
		UMaterialInstanceDynamic* DisplayBottomMID; // 0x2C0(0x8)
		UMaterialInstanceDynamic* CrossSectionMID; // 0x2C8(0x8)
		TArray<UTextureRenderTarget2D*> RippleRTs; // 0x2D0(0x10)
		UMaterialInterface* Display_Material; // 0x2E0(0x8)
		double Virtual_FPS; // 0x2E8(0x8)
		int32_t Passes; // 0x2F0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2F4(0x4) UNKNOWN PROPERTY
		double TimeAccumulator; // 0x2F8(0x8)
		double FixedStep; // 0x300(0x8)
		bool Enabled; // 0x308(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x309(0x7) UNKNOWN PROPERTY
		double Fluid_Size; // 0x310(0x8)
		int32_t Resolution; // 0x318(0x4)
		TEnumAsByte<FluidBoundary> Boundary_Condition; // 0x31C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x31D(0x3) UNKNOWN PROPERTY
		double Travel_Speed; // 0x320(0x8)
		double Damping; // 0x328(0x8)
		UTextureRenderTarget2D* NormalRT; // 0x330(0x8)
		FVector CutPos; // 0x338(0x18)
		FVector PrevLoc; // 0x350(0x18)
		FVector PrecLoc2; // 0x368(0x18)
		FVector PrevOffset; // 0x380(0x18)
		FVector PrevOffset2; // 0x398(0x18)
		FVector GridCenter; // 0x3B0(0x18)
		UTextureRenderTarget2D* TempRT; // 0x3C8(0x8)
		UTextureRenderTarget2D* ForcesRT; // 0x3D0(0x8)
		double ApplyForces; // 0x3D8(0x8)
		ALandscapeWaterInfo_C* LandscapeWaterInfo; // 0x3E0(0x8)
		int32_t Renders_Per_Frame; // 0x3E8(0x4)
		bool Show_Cross_Section; // 0x3EC(0x1)
		bool Perf_Test_Mode; // 0x3ED(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x3EE(0x2) UNKNOWN PROPERTY
		UTextureRenderTarget2D* PerfRT; // 0x3F0(0x8)
		TArray<FFluidForceImpulsePerInstanceData> ImpulseForces; // 0x3F8(0x10)
		TMap<UActorComponent*, FFluidForceDynamicPerInstanceData> DynamicForces; // 0x408(0x50)
		TMap<UMaterialInterface*, UMaterialInstanceDynamic*> ForceParentAndMIDMap; // 0x458(0x50)
		bool Show_Simulation_Mesh; // 0x4A8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x4A9(0x7) UNKNOWN PROPERTY
		UStaticMeshComponent* Fluid_Display_Mesh; // 0x4B0(0x8)
		UStaticMeshComponent* Cross_Section_Mesh; // 0x4B8(0x8)
		double FluidSizeSquared; // 0x4C0(0x8)
		bool LocalPawnRef; // 0x4C8(0x1)
		bool Debug_Text; // 0x4C9(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x4CA(0x2) UNKNOWN PROPERTY
		int32_t Pawn_Check_Every_N_Frames; // 0x4CC(0x4)
		TMap<UActorComponent*, FFluidForceDynamicPerInstanceData> ProjectileForces; // 0x4D0(0x50)
		bool Follow_Player_; // 0x520(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x521(0x3) UNKNOWN PROPERTY
		int32_t Frames_Since_Last_Active_Force; // 0x524(0x4)
		bool Use_Terrain_Water_System; // 0x528(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x529(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* PhysicsForceMID; // 0x530(0x8)
		bool Add_Physics_Forces; // 0x538(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x539(0x7) UNKNOWN PROPERTY
		UTexture* WaterVelocityTexture; // 0x540(0x8)
		TWeakObjectPtr<AWaterZone*> WaterZone; // 0x548(0x20)
		bool UpdateForcesInFixedTimeStep; // 0x568(0x1)
		bool UpdateSimInFixedTimeStep; // 0x569(0x1)
		bool UpdateNormalInFixedTimeStep; // 0x56A(0x1)
		bool ShowDebugWaterPlane; // 0x56B(0x1)
		unsigned char UnknownData09_6[0x4]; // 0x56C(0x4) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* DebugWaterPlaneMID; // 0x570(0x8)
		UTextureRenderTarget2D* DebugRippleRT1; // 0x578(0x8)
		UTextureRenderTarget2D* DebugRippleRT2; // 0x580(0x8)
		UTextureRenderTarget2D* DebugRippleRTCurrent; // 0x588(0x8)
		int32_t WaterZoneIndex; // 0x590(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x594(0x4) UNKNOWN PROPERTY
		double MaxFlowVelocity; // 0x598(0x8)
		FVector2D WaterZoneExtent; // 0x5A0(0x10)
		FVector WaterZoneLocation; // 0x5B0(0x18)
		UMaterialInterface* DefaultSplashMaterial; // 0x5C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C");
			return ret;
		}

		void GetNormalRT(UTextureRenderTarget2D* RT); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSingleWaterBodyMIDTexture(AWaterBody* WaterBody); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CycleDebugRenderTargets(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Frames Since Last Active Forces(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Clear Sim from Waterbody MIDs(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Remove Projectile Force(UActorComponent* Component); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Register Projectile Force(FFluidForceDynamic Dynamic Fluid Force, USceneComponent* Tracked Component); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetPlayerPawnForces(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Validate RTs(bool& RTs All Valid); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Waterbody MID Params(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetLocalPawn(APawn* Pawn); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Draw Dynamic Force(UCanvas* Canvas, FVector2D& Canvas Size, FFluidForceDynamicPerInstanceData& Dynamic Force Settings); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Remove Dynamic Force(UActorComponent* Component); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Register Dynamic Force(FFluidForceDynamic Dynamic Fluid Force, USceneComponent* Tracked Component, double WaterLevel); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Dynamic Forces(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Draw Impulse Force(UCanvas* Canvas, FVector2D Canvas Size, FFluidForceImpulsePerInstanceData Impulse Settings); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Impulse Lifetimes(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Apply Fluid Force Impulse(FFluidForceImpulse Impulse Settings); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get LandscapeWaterInfo(AWaterZone* WaterZone); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Force MID(UMaterialInterface* Parent, UMaterialInstanceDynamic* Mid); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GridMovement(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupSimMIDs(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupDisplayMIDs(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Convert Force Position(FVector Force Location, double Sine Bob, FVector& UV Location); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Cycle Render Targets(UTextureRenderTarget2D* Current Target); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Clear RTs(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Allocate RTs(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReCheckScalability(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Release RTs(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FluidGridDebug(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetShowDebugWaterPlane(bool IsVisible); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDebugNormalRT(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDebugForcesRT(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDebugRippleRT1(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDebugRippleRT2(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDebugRippleRTCurrent(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetUpdateForcesInFixedTimeStep(bool bool); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetNormalInFixedTimeStep(bool bool); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSimInFixedTimeStep(bool bool); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetAllSimParamsInFixedTimeStep(bool bool); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void WaterZoneTextureCreated(UTextureRenderTarget2DArray* WaterInfoTextureArray); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_FluidSim_01(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
