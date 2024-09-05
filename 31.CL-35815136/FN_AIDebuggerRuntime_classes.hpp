#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AIDebuggerRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AIDebuggerRuntime.AIDebuggerCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAIDebuggerCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIDebuggerRuntime.AIDebuggerCheatManager");
			return ret;
		}

		void StartAIDebugger(FString AIDebuggerSoftClassPath); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void NextNavMesh(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void EnableNavMeshVisualizer(bool bEnable); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74C079284(relative to base address)
	};


	// Class AIDebuggerRuntime.AIDebuggerRendererComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xA8 (0x570 - 0x4C8)
	class UAIDebuggerRendererComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData00_3[0x98]; // 0x4C8(0x98) UNKNOWN PROPERTY
		UMaterial* NavMeshMaterial; // 0x560(0x8)
		float NavLinkLineThickness; // 0x568(0x4)
		float NavLinkMaxDrawDistance; // 0x56C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIDebuggerRuntime.AIDebuggerRendererComponent");
			return ret;
		}
	};


	// Class AIDebuggerRuntime.FortControllerComponent_AIDebugger
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x110 - 0xA8)
	class UFortControllerComponent_AIDebugger : public UFortControllerComponent	
	{
	public:
		APlayerController* OwnerPC; // 0xA8(0x8)
		UClass* NavMeshRendererComponentClass; // 0xB0(0x8)
		char DefaultEnabledVisualizers; // 0xB8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		int32_t DefaultNavDataIndexToDisplay; // 0xBC(0x4)
		char EnabledVisualizers; // 0xC0(0x1)
		char NumNavMeshes; // 0xC1(0x1)
		unsigned char UnknownData01_7[0x4E]; // 0xC2(0x4E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger");
			return ret;
		}

		void VisualizeNextNavMesh(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74E4851A4(relative to base address)
		void VisualizeNavMeshID(int32_t NavMeshID); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74E653D38(relative to base address)
		void SetVisualizationEnable(EAIDebuggerVisualization VisualizationType, bool bEnable); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF750566D24(relative to base address)
		void OnRep_EnabledVisualizers(); // Flags: Final|Native|Public, Memory Exec: 0x7FF750566D10(relative to base address)
		void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn); // Flags: Final|Native|Public, Memory Exec: 0x7FF750566C54(relative to base address)
		void OnPlayerExitedIsland(FEventMessageTag Channel, FPlayerExitSpatialActorContextWithPawn& PlayerExitSpatialActorContext); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF750566AF0(relative to base address)
		bool IsVisualizationEnabled(EAIDebuggerVisualization VisualizationType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750566A60(relative to base address)
		UAIDebuggerRendererComponent GetOrCreateRenderer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750566A3C(relative to base address)
	};

}
