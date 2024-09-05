#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: UnrealEngineExperimental
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class UnrealEngineExperimental.ControllerComponentDebugDraw
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class UControllerComponentDebugDraw : public UControllerComponent	
	{
	public:
		TArray<FPersistentLineBatcher> PersistentLineBatchers; // 0xA0(0x10)
		unsigned char UnknownData00_7[0x58]; // 0xB0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UnrealEngineExperimental.ControllerComponentDebugDraw");
			return ret;
		}

		void SetDebugDrawEnabled(bool bEnabled, uint32_t ChannelId); // Flags: RequiredAPI|Net|NetReliableNative|Event|NetMulticast|Public, Memory Exec: 0x7FF74D122220(relative to base address)
		void Reset(uint32_t ChannelId); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetClient|Const, Memory Exec: 0x7FF74D12210C(relative to base address)
		void DrawDebugSphereInternal(FVector Center, float Radius, int32_t Segments, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient, Memory Exec: 0x7FF74D121A00(relative to base address)
		void DrawDebugPointInternal(FVector Position, float Size, FColor Color, bool bPersistentLines, float Lifetime, uint32_t ChannelId, uint32_t InstanceID); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient, Memory Exec: 0x7FF74D12147C(relative to base address)
		void DrawDebugLineInternal(FVector LineStart, FVector LineEnd, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient, Memory Exec: 0x7FF74D120E30(relative to base address)
		void DrawDebugDirectionalArrowInternal(FVector LineStart, FVector LineEnd, float ArrowSize, FColor Color, bool bPersistentLines); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient, Memory Exec: 0x7FF74D120728(relative to base address)
		void DrawDebugCylinderInternal(FVector Start, FVector End, float Radius, int32_t Segments, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient, Memory Exec: 0x7FF74D11FF68(relative to base address)
		void DrawDebugConeInternal(FVector Origin, FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient, Memory Exec: 0x7FF74D11F630(relative to base address)
		void DrawDebugCapsuleInternal(FVector Center, float HalfHeight, float Radius, FQuat Rotation, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient, Memory Exec: 0x7FF74D11EE6C(relative to base address)
		void DrawDebugBoxInternal(FVector Center, FVector Extent, FQuat Rotation, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient, Memory Exec: 0x7FF74D11E768(relative to base address)
		void ClearChannel(uint32_t ChannelId); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetClient|Const, Memory Exec: 0x7FF74D11E654(relative to base address)
		void Clear(uint32_t ChannelId, uint32_t InstanceID); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetClient|Const, Memory Exec: 0x7FF74D11E47C(relative to base address)
	};

}
