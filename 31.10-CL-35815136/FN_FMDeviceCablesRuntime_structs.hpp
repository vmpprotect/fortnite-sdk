#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMDeviceCablesRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FMDeviceCablesRuntime.PortUpdateInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FPortUpdateInfo	
	{
	public:
		EPortSelectStatus PortSelectStatus; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UFMDeviceCablePortComponent* ConstantPort; // 0x8(0x8)
		UFMDeviceCablePortComponent* ConnectedPort; // 0x10(0x8)
		UFMDeviceCablePortComponent* DisconnectedPort; // 0x18(0x8)
	};


	// Struct FMDeviceCablesRuntime.FMDeviceCableArtifact
	// Size: 0x20 (0x20 - 0x0)
	struct FFMDeviceCableArtifact	
	{
	public:
		UFabricMeshTreeNode* MeshTreeNode; // 0x0(0x8)
		UFabricMetaSoundTreeNode* MetaSoundTreeNode; // 0x8(0x8)
		UFabricTextureTreeNode* TextureTreeNode; // 0x10(0x8)
		UFabricModulationNode* ModulationNode; // 0x18(0x8)
	};


	// Struct FMDeviceCablesRuntime.FMDeviceCableTerminalDeviceInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FFMDeviceCableTerminalDeviceInfo	
	{
	public:
		TWeakObjectPtr<UFMDeviceCablePortComponent*> TerminalPort; // 0x0(0x8)
		TWeakObjectPtr<AActor*> TerminalActor; // 0x8(0x8)
	};


	// Struct FMDeviceCablesRuntime.FMDeviceCablePassthroughDeviceInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FFMDeviceCablePassthroughDeviceInfo	
	{
	public:
		TWeakObjectPtr<UFMDeviceCablePortComponent*> InputPort; // 0x0(0x8)
		TWeakObjectPtr<UFMDeviceCablePortComponent*> OutputPort; // 0x8(0x8)
		TWeakObjectPtr<AActor*> PassthroughActor; // 0x10(0x8)
	};


	// Struct FMDeviceCablesRuntime.FMDeviceCableConnectedDevicesInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FFMDeviceCableConnectedDevicesInfo	
	{
	public:
		FFMDeviceCableTerminalDeviceInfo SourceDeviceInfo; // 0x0(0x10)
		FFMDeviceCableTerminalDeviceInfo DestinationDeviceInfo; // 0x10(0x10)
		TArray<FFMDeviceCablePassthroughDeviceInfo> PassthroughDeviceInfos; // 0x20(0x10)
	};


	// Struct FMDeviceCablesRuntime.FMDeviceCableDefaultOutputs
	// Size: 0x8 (0x8 - 0x0)
	struct FFMDeviceCableDefaultOutputs	
	{
	public:
		USoundSourceBus* SourceBus; // 0x0(0x8)
	};


	// Struct FMDeviceCablesRuntime.ModulatorPortSaveData
	// Size: 0x20 (0x20 - 0x0)
	struct FModulatorPortSaveData	
	{
	public:
		FGuid ConnectionGuid; // 0x0(0x10)
		TArray<FGuid> ConnectedGuids; // 0x10(0x10)
	};


	// Struct FMDeviceCablesRuntime.FMDeviceCableOrderingMovementInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FFMDeviceCableOrderingMovementInfo	
	{
	public:
		UCurveFloat* Curve; // 0x0(0x8)
		UCurveVector* ScaleCurve; // 0x8(0x8)
		FVector Vector; // 0x10(0x18)
		float MovementTimeSeconds; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct FMDeviceCablesRuntime.FMDeviceCableOrderingMovementState
	// Size: 0xB8 (0xB8 - 0x0)
	struct FFMDeviceCableOrderingMovementState	
	{
	public:
		unsigned char UnknownData00_2[0xB8]; // 0x0(0xB8) UNKNOWN PROPERTY
	};


	// Struct FMDeviceCablesRuntime.FMDeviceCableOrderingPortState
	// Size: 0x270 (0x270 - 0x0)
	struct FFMDeviceCableOrderingPortState	
	{
	public:
		UFMDeviceCableWildcardPortComponent* WildcardPort; // 0x0(0x8)
		USceneComponent* VerticalPositionParent; // 0x8(0x8)
		EFMDeviceCableWildcardOrderingState VisualState; // 0x10(0x4)
		EFMDeviceCableWildcardOrderingState State; // 0x14(0x4)
		int32_t Slot; // 0x18(0x4)
		unsigned char UnknownData00_6[0x244]; // 0x1C(0x244) UNKNOWN PROPERTY
		TWeakObjectPtr<UFMDeviceCableWildcardOrderingComponent*> Owner; // 0x260(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x268(0x8) UNKNOWN PROPERTY
	};

}
