#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FluidSimulation
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /FortWater/FluidSimulation/Blueprints/BP_FluidSimParent.BP_FluidSimParent_C
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class ABP_FluidSimParent_C : public AActor	
	{
	public:
		USceneComponent DefaultSceneRoot; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortWater/FluidSimulation/Blueprints/BP_FluidSimParent.BP_FluidSimParent_C");
			return ret;
		}

		void GetNormalRT(UTextureRenderTarget2D& RT); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66809700
	};


	// Class /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C
	// Inherited from ABP_FluidSimParent_C -> AActor -> UObject
	// Size: 0x338 (0x5D0 - 0x298)
	class ABP_FluidSim_01_C : public ABP_FluidSimParent_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x8)
		UStaticMeshComponent DebugPlane; // 0x2A0(0x8)
		UMaterialInstanceDynamic RippleSimMID; // 0x2A8(0x8)
		UMaterialInstanceDynamic RenderNormalsMID; // 0x2B0(0x8)
		UMaterialInstanceDynamic DisplayMID; // 0x2B8(0x8)
		UMaterialInstanceDynamic DisplayBottomMID; // 0x2C0(0x8)
		UMaterialInstanceDynamic CrossSectionMID; // 0x2C8(0x8)
		TArray RippleRTs; // 0x2D0(0x10)
		UMaterialInterface Display_Material; // 0x2E0(0x8)
		double Virtual_FPS; // 0x2E8(0x8)
		int32_t Passes; // 0x2F0(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x2F4(0x4) UNKNOWN PROPERTY
		double TimeAccumulator; // 0x2F8(0x8)
		double FixedStep; // 0x300(0x8)
		bool Enabled; // 0x308(0x1)
		unsigned char UnknownData12_6[0x7]; // 0x309(0x7) UNKNOWN PROPERTY
		double Fluid_Size; // 0x310(0x8)
		int32_t Resolution; // 0x318(0x4)
		TEnumAsByte Boundary_Condition; // 0x31C(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x31D(0x3) UNKNOWN PROPERTY
		double Travel_Speed; // 0x320(0x8)
		double Damping; // 0x328(0x8)
		UTextureRenderTarget2D NormalRT; // 0x330(0x8)
		FVector CutPos; // 0x338(0x18)
		FVector PrevLoc; // 0x350(0x18)
		FVector PrecLoc2; // 0x368(0x18)
		FVector PrevOffset; // 0x380(0x18)
		FVector PrevOffset2; // 0x398(0x18)
		FVector GridCenter; // 0x3B0(0x18)
		UTextureRenderTarget2D TempRT; // 0x3C8(0x8)
		UTextureRenderTarget2D ForcesRT; // 0x3D0(0x8)
		double ApplyForces; // 0x3D8(0x8)
		ALandscapeWaterInfo_C LandscapeWaterInfo; // 0x3E0(0x8)
		int32_t Renders_Per_Frame; // 0x3E8(0x4)
		bool Show_Cross_Section; // 0x3EC(0x1)
		bool Perf_Test_Mode; // 0x3ED(0x1)
		unsigned char UnknownData14_6[0x2]; // 0x3EE(0x2) UNKNOWN PROPERTY
		UTextureRenderTarget2D PerfRT; // 0x3F0(0x8)
		TArray ImpulseForces; // 0x3F8(0x10)
		TMap DynamicForces; // 0x408(0x50)
		TMap ForceParentAndMIDMap; // 0x458(0x50)
		bool Show_Simulation_Mesh; // 0x4A8(0x1)
		unsigned char UnknownData15_6[0x7]; // 0x4A9(0x7) UNKNOWN PROPERTY
		UStaticMeshComponent Fluid_Display_Mesh; // 0x4B0(0x8)
		UStaticMeshComponent Cross_Section_Mesh; // 0x4B8(0x8)
		double FluidSizeSquared; // 0x4C0(0x8)
		bool LocalPawnRef; // 0x4C8(0x1)
		bool Debug_Text; // 0x4C9(0x1)
		unsigned char UnknownData16_6[0x2]; // 0x4CA(0x2) UNKNOWN PROPERTY
		int32_t Pawn_Check_Every_N_Frames; // 0x4CC(0x4)
		TMap ProjectileForces; // 0x4D0(0x50)
		bool Follow_Player_; // 0x520(0x1)
		unsigned char UnknownData17_6[0x3]; // 0x521(0x3) UNKNOWN PROPERTY
		int32_t Frames_Since_Last_Active_Force; // 0x524(0x4)
		bool Use_Terrain_Water_System; // 0x528(0x1)
		unsigned char UnknownData18_6[0x7]; // 0x529(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic PhysicsForceMID; // 0x530(0x8)
		bool Add_Physics_Forces; // 0x538(0x1)
		unsigned char UnknownData19_6[0x7]; // 0x539(0x7) UNKNOWN PROPERTY
		UTexture WaterVelocityTexture; // 0x540(0x8)
		TWeakObjectPtr WaterZone; // 0x548(0x20)
		bool UpdateForcesInFixedTimeStep; // 0x568(0x1)
		bool UpdateSimInFixedTimeStep; // 0x569(0x1)
		bool UpdateNormalInFixedTimeStep; // 0x56A(0x1)
		bool ShowDebugWaterPlane; // 0x56B(0x1)
		unsigned char UnknownData20_6[0x4]; // 0x56C(0x4) UNKNOWN PROPERTY
		UMaterialInstanceDynamic DebugWaterPlaneMID; // 0x570(0x8)
		UTextureRenderTarget2D DebugRippleRT1; // 0x578(0x8)
		UTextureRenderTarget2D DebugRippleRT2; // 0x580(0x8)
		UTextureRenderTarget2D DebugRippleRTCurrent; // 0x588(0x8)
		int32_t WaterZoneIndex; // 0x590(0x4)
		unsigned char UnknownData21_6[0x4]; // 0x594(0x4) UNKNOWN PROPERTY
		double MaxFlowVelocity; // 0x598(0x8)
		FVector2D WaterZoneExtent; // 0x5A0(0x10)
		FVector WaterZoneLocation; // 0x5B0(0x18)
		UMaterialInterface DefaultSplashMaterial; // 0x5C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C");
			return ret;
		}

		void GetNormalRT(UTextureRenderTarget2D& RT); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6880DE00
		void SetSingleWaterBodyMIDTexture(AWaterBody WaterBody); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6880C900
		void CycleDebugRenderTargets(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6880E700
		void Get Frames Since Last Active Forces(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6880E100
		void Clear Sim from Waterbody MIDs(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6880A800
		void Remove Projectile Force(UActorComponent Component); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6880D400
		void Register Projectile Force(FFluidForceDynamic Dynamic Fluid Force, USceneComponent Tracked Component); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6880D700
		void GetPlayerPawnForces(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6880DD00
		void Validate RTs(bool& RTs All Valid); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6880FB00
		void Set Waterbody MID Params(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6880D300
		void GetLocalPawn(APawn& Pawn); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D6880DF00
		void Draw Dynamic Force(UCanvas& Canvas, FVector2D& Canvas Size, FFluidForceDynamicPerInstanceData& Dynamic Force Settings); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6880E600
		void Remove Dynamic Force(UActorComponent Component); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6880D500
		void Register Dynamic Force(FFluidForceDynamic Dynamic Fluid Force, USceneComponent Tracked Component, double WaterLevel); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6880D800
		void Update Dynamic Forces(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6880FE00
		void Draw Impulse Force(UCanvas Canvas, FVector2D Canvas Size, FFluidForceImpulsePerInstanceData Impulse Settings); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6880E500
		void Update Impulse Lifetimes(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6880FD00
		void Apply Fluid Force Impulse(FFluidForceImpulse Impulse Settings); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6880AA00
		void Get LandscapeWaterInfo(AWaterZone WaterZone); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6880E000
		void Get Force MID(UMaterialInterface& Parent, UMaterialInstanceDynamic& Mid); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6880E200
		void GridMovement(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6880DC00
		void SetupSimMIDs(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6880FF00
		void SetupDisplayMIDs(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6880C700
		void Convert Force Position(FVector Force Location, double Sine Bob, FVector& UV Location); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D6880A700
		void Cycle Render Targets(UTextureRenderTarget2D& Current Target); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6880A600
		void UserConstructionScript(); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6880FC00
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D6880DB00
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent 0x15D6880DA00
		void Clear RTs(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880A900
		void Allocate RTs(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880AB00
		void ReCheckScalability(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880D900
		void Release RTs(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880D600
		void FluidGridDebug(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880E300
		void SetShowDebugWaterPlane(bool IsVisible); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880CB00
		void SetDebugNormalRT(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880D000
		void SetDebugForcesRT(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880D100
		void SetDebugRippleRT1(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880CF00
		void SetDebugRippleRT2(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880CE00
		void SetDebugRippleRTCurrent(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880CD00
		void SetUpdateForcesInFixedTimeStep(bool bool); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880C800
		void SetNormalInFixedTimeStep(bool bool); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880CC00
		void SetSimInFixedTimeStep(bool bool); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880CA00
		void SetAllSimParamsInFixedTimeStep(bool bool); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880D200
		void WaterZoneTextureCreated(UTextureRenderTarget2DArray WaterInfoTextureArray); // Flags: BlueprintCallable|BlueprintEvent 0x15D6880FA00
		void ExecuteUbergraph_BP_FluidSim_01(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D6880E400
	};

}
