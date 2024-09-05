#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MRMesh
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MRMesh.MockDataMeshTrackerComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x290 - 0x220)
	class UMockDataMeshTrackerComponent : public USceneComponent	
	{
	public:
		FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x220(0x10)
		bool ScanWorld; // 0x230(0x1)
		bool RequestNormals; // 0x231(0x1)
		bool RequestVertexConfidence; // 0x232(0x1)
		EMeshTrackerVertexColorMode VertexColorMode; // 0x233(0x1)
		unsigned char UnknownData00_6[0x4]; // 0x234(0x4) UNKNOWN PROPERTY
		TArray<FColor> BlockVertexColors; // 0x238(0x10)
		FLinearColor VertexColorFromConfidenceZero; // 0x248(0x10)
		FLinearColor VertexColorFromConfidenceOne; // 0x258(0x10)
		float UpdateInterval; // 0x268(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x26C(0x4) UNKNOWN PROPERTY
		UMRMeshComponent* MRMesh; // 0x270(0x8)
		unsigned char UnknownData02_7[0x18]; // 0x278(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MRMesh.MockDataMeshTrackerComponent");
			return ret;
		}

		void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3492B8(relative to base address)
		void ConnectMRMesh(UMRMeshComponent* InMRMeshPtr); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3491B4(relative to base address)
	};


	// Class MRMesh.MRMeshBodyHolder
	// Inherited from UObject
	// Size: 0x1E8 (0x210 - 0x28)
	class UMRMeshBodyHolder : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UBodySetup* BodySetup; // 0x30(0x8)
		FBodyInstance BodyInstance; // 0x38(0x170)
		unsigned char UnknownData01_7[0x68]; // 0x1A8(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MRMesh.MRMeshBodyHolder");
			return ret;
		}
	};


	// Class MRMesh.MRMeshComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x550 - 0x4C8)
	class UMRMeshComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY
		UMaterialInterface* Material; // 0x4D0(0x8)
		UMaterialInterface* WireframeMaterial; // 0x4D8(0x8)
		bool bCreateMeshProxySections; // 0x4E0(0x1)
		bool bUpdateNavMeshOnMeshUpdate; // 0x4E1(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x4E2(0x1) UNKNOWN PROPERTY
		bool bNeverCreateCollisionMesh; // 0x4E3(0x1)
		unsigned char UnknownData02_6[0x44]; // 0x4E4(0x44) UNKNOWN PROPERTY
		TArray<UMRMeshBodyHolder*> BodyHolders; // 0x528(0x10)
		unsigned char UnknownData03_7[0x18]; // 0x538(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MRMesh.MRMeshComponent");
			return ret;
		}

		void SetWireframeMaterial(UMaterialInterface* InMaterial); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3495DC(relative to base address)
		void SetWireframeColor(FLinearColor& InColor); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C349518(relative to base address)
		void SetUseWireframe(bool bUseWireframe); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C349490(relative to base address)
		void SetEnableMeshOcclusion(bool bEnable); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C349410(relative to base address)
		void RequestNavMeshUpdate(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3493EC(relative to base address)
		bool IsConnected(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C349398(relative to base address)
		FLinearColor GetWireframeColor(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C34937C(relative to base address)
		bool GetUseWireframe(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C349364(relative to base address)
		bool GetEnableMeshOcclusion(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C34934C(relative to base address)
		void ForceNavMeshUpdate(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C349338(relative to base address)
		void Clear(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C349114(relative to base address)
	};


	// Class MRMesh.MeshReconstructorBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMeshReconstructorBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MRMesh.MeshReconstructorBase");
			return ret;
		}

		void StopReconstruction(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C349660(relative to base address)
		void StartReconstruction(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF746F37328(relative to base address)
		void PauseReconstruction(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747B0DC80(relative to base address)
		bool IsReconstructionStarted(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7495F94FC(relative to base address)
		bool IsReconstructionPaused(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3493C4(relative to base address)
		void DisconnectMRMesh(); // Flags: RequiredAPI|Native|Public, Memory Exec: 0x7FF747E989FC(relative to base address)
		void ConnectMRMesh(UMRMeshComponent* Mesh); // Flags: RequiredAPI|Native|Public, Memory Exec: 0x7FF74C349130(relative to base address)
	};

}
