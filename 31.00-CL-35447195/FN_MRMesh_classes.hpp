#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MRMesh
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData03_6[0x4]; // 0x234(0x4) UNKNOWN PROPERTY
		TArray BlockVertexColors; // 0x238(0x10)
		FLinearColor VertexColorFromConfidenceZero; // 0x248(0x10)
		FLinearColor VertexColorFromConfidenceOne; // 0x258(0x10)
		float UpdateInterval; // 0x268(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x26C(0x4) UNKNOWN PROPERTY
		UMRMeshComponent MRMesh; // 0x270(0x8)
		unsigned char UnknownData05_7[0x18]; // 0x278(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MRMesh.MockDataMeshTrackerComponent");
			return ret;
		}

		void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray& Vertices, TArray& Triangles, TArray& Normals, TArray& Confidence); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF411068228
		void DisconnectMRMesh(UMRMeshComponent InMRMeshPtr); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411068148
		void ConnectMRMesh(UMRMeshComponent InMRMeshPtr); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411068068
	};


	// Class MRMesh.MRMeshBodyHolder
	// Inherited from UObject
	// Size: 0x1E8 (0x210 - 0x28)
	class UMRMeshBodyHolder : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UBodySetup BodySetup; // 0x30(0x8)
		FBodyInstance BodyInstance; // 0x38(0x170)
		unsigned char UnknownData03_7[0x68]; // 0x1A8(0x68) UNKNOWN PROPERTY

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
		unsigned char UnknownData04_3[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY
		UMaterialInterface Material; // 0x4D0(0x8)
		UMaterialInterface WireframeMaterial; // 0x4D8(0x8)
		bool bCreateMeshProxySections; // 0x4E0(0x1)
		bool bUpdateNavMeshOnMeshUpdate; // 0x4E1(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x4E2(0x1) UNKNOWN PROPERTY
		bool bNeverCreateCollisionMesh; // 0x4E3(0x1)
		unsigned char UnknownData06_6[0x44]; // 0x4E4(0x44) UNKNOWN PROPERTY
		TArray BodyHolders; // 0x528(0x10)
		unsigned char UnknownData07_7[0x18]; // 0x538(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MRMesh.MRMeshComponent");
			return ret;
		}

		void SetWireframeMaterial(UMaterialInterface InMaterial); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DED78
		void SetWireframeColor(FLinearColor& InColor); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4144DEC98
		void SetUseWireframe(bool bUseWireframe); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DEBB8
		void SetEnableMeshOcclusion(bool bEnable); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DEAD8
		void RequestNavMeshUpdate(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DE9F8
		bool IsConnected(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DE918
		FLinearColor GetWireframeColor(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4144DE838
		bool GetUseWireframe(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DE758
		bool GetEnableMeshOcclusion(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DE678
		void ForceNavMeshUpdate(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DE598
		void Clear(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DE4B8
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

		void StopReconstruction(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DF398
		void StartReconstruction(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DF2B8
		void PauseReconstruction(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DF1D8
		bool IsReconstructionStarted(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DF0F8
		bool IsReconstructionPaused(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DF018
		void DisconnectMRMesh(); // Flags: RequiredAPI|Native|Public 0x7FF4144DEF38
		void ConnectMRMesh(UMRMeshComponent Mesh); // Flags: RequiredAPI|Native|Public 0x7FF4144DEE58
	};

}
