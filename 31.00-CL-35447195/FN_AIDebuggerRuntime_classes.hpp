#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AIDebuggerRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void StartAIDebugger(FString AIDebuggerSoftClassPath); // Flags: Final|Exec|Native|Public 0x7FF414BA9A18
		void NextNavMesh(); // Flags: Final|Exec|Native|Public 0x7FF414BA9938
		void EnableNavMeshVisualizer(bool bEnable); // Flags: Final|Exec|Native|Public 0x7FF414BA9858
	};


	// Class AIDebuggerRuntime.AIDebuggerRendererComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xA8 (0x570 - 0x4C8)
	class UAIDebuggerRendererComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData01_3[0x98]; // 0x4C8(0x98) UNKNOWN PROPERTY
		UMaterial NavMeshMaterial; // 0x560(0x8)
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
		APlayerController OwnerPC; // 0xA8(0x8)
		UClass NavMeshRendererComponentClass; // 0xB0(0x8)
		char DefaultEnabledVisualizers; // 0xB8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		int32_t DefaultNavDataIndexToDisplay; // 0xBC(0x4)
		char EnabledVisualizers; // 0xC0(0x1)
		char NumNavMeshes; // 0xC1(0x1)
		unsigned char UnknownData03_7[0x4E]; // 0xC2(0x4E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger");
			return ret;
		}

		void VisualizeNextNavMesh(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 0x7FF414BAA118
		void VisualizeNavMeshID(int32_t NavMeshID); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 0x7FF414BAA038
		void SetVisualizationEnable(EAIDebuggerVisualization VisualizationType, bool bEnable); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 0x7FF414BA9F58
		void OnRep_EnabledVisualizers(); // Flags: Final|Native|Public 0x7FF414BA9E78
		void OnPossessedPawnChanged(APawn OldPawn, APawn NewPawn); // Flags: Final|Native|Public 0x7FF414BA9D98
		void OnPlayerExitedIsland(FEventMessageTag Channel, FPlayerExitSpatialActorContextWithPawn& PlayerExitSpatialActorContext); // Flags: Final|Native|Public|HasOutParms 0x7FF414BA9CB8
		bool IsVisualizationEnabled(EAIDebuggerVisualization VisualizationType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BA9BD8
		UAIDebuggerRendererComponent GetOrCreateRenderer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BA9AF8
	};

}
