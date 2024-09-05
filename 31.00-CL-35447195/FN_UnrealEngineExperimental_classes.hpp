#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: UnrealEngineExperimental
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class UnrealEngineExperimental.ControllerComponentDebugDraw
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class UControllerComponentDebugDraw : public UControllerComponent	
	{
	public:
		TArray PersistentLineBatchers; // 0xA0(0x10)
		unsigned char UnknownData01_7[0x58]; // 0xB0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UnrealEngineExperimental.ControllerComponentDebugDraw");
			return ret;
		}

		void SetDebugDrawEnabled(bool bEnabled, uint32_t ChannelId); // Flags: RequiredAPI|Net|NetReliableNative|Event|NetMulticast|Public 0x7FF4145C2578
		void Reset(uint32_t ChannelId); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetClient|Const 0x7FF4145C2498
		void DrawDebugSphereInternal(FVector Center, float Radius, int32_t Segments, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 0x7FF4145C23B8
		void DrawDebugPointInternal(FVector Position, float Size, FColor Color, bool bPersistentLines, float Lifetime, uint32_t ChannelId, uint32_t InstanceID); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 0x7FF4145C22D8
		void DrawDebugLineInternal(FVector LineStart, FVector LineEnd, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 0x7FF4145C21F8
		void DrawDebugDirectionalArrowInternal(FVector LineStart, FVector LineEnd, float ArrowSize, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 0x7FF4145C2118
		void DrawDebugCylinderInternal(FVector Start, FVector End, float Radius, int32_t Segments, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 0x7FF4145C2038
		void DrawDebugConeInternal(FVector Origin, FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 0x7FF4145C1F58
		void DrawDebugCapsuleInternal(FVector Center, float HalfHeight, float Radius, FQuat Rotation, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 0x7FF4145C1E78
		void DrawDebugBoxInternal(FVector Center, FVector Extent, FQuat Rotation, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 0x7FF4145C1D98
		void ClearChannel(uint32_t ChannelId); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetClient|Const 0x7FF4145C1CB8
		void Clear(uint32_t ChannelId, uint32_t InstanceID); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetClient|Const 0x7FF4145C1BD8
	};

}
