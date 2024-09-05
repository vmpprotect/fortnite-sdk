#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CaveRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CaveRuntime.CaveMeshNetworkBridge
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x18 (0x2A8 - 0x290)
	class ACaveMeshNetworkBridge : public AInfo	
	{
	public:
		UMeshNetworkComponent* MeshNetworkComponent; // 0x290(0x8)
		ECaveMeshNetworkPlayStatus CurrentPlayStatus; // 0x298(0x1)
		ECaveMeshNetworkLevelSequenceStatus CurrentLevelSequenceStatus; // 0x299(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x29A(0x2) UNKNOWN PROPERTY
		float DesiredTimeOfDay; // 0x29C(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x2A0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CaveRuntime.CaveMeshNetworkBridge");
			return ret;
		}

		void WaitForMeshNetwork(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515CCAD8(relative to base address)
		void SetCaveDesiredTimeOfDay(float NewTime); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF7515CCA58(relative to base address)
		void SetCaveCurrentPlayStatus(ECaveMeshNetworkPlayStatus NewStatus); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF7515CC9D8(relative to base address)
		void SetCaveCurrentLevelSequenceStatus(ECaveMeshNetworkLevelSequenceStatus NewStatus); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF7515CC958(relative to base address)
		void OnRep_DesiredTimeOfDay(float OldValue); // Flags: Final|Native|Protected|BlueprintCallable|Const, Memory Exec: 0x7FF7515CC8D8(relative to base address)
		void OnRep_CurrentPlayStatus(ECaveMeshNetworkPlayStatus OldValue); // Flags: Final|Native|Protected|BlueprintCallable|Const, Memory Exec: 0x7FF7515CC858(relative to base address)
		void OnRep_CurrentLevelSequenceStatus(ECaveMeshNetworkLevelSequenceStatus OldValue); // Flags: Final|Native|Protected|BlueprintCallable|Const, Memory Exec: 0x7FF7515CC7D8(relative to base address)
		void HandleMeshNetworkTypeSet(EMeshNetworkNodeType NodeType); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515CC758(relative to base address)
		void BroadcastEvent_PlayStatusChanged(ECaveMeshNetworkPlayStatus NewStatus); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF7515CC6D8(relative to base address)
		void BroadcastEvent_LevelSequenceStatusChanged(ECaveMeshNetworkLevelSequenceStatus NewStatus); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF7515CC658(relative to base address)
		void BroadcastEvent_ChangeTimeOfDay(float NewTime); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF7515CC5D8(relative to base address)
	};

}
