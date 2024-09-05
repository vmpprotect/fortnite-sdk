#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayDebugger
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GameplayDebugger.GameplayDebuggerCategoryReplicator
	// Inherited from AActor -> UObject
	// Size: 0xB8 (0x348 - 0x290)
	class AGameplayDebuggerCategoryReplicator : public AActor	
	{
	public:
		APlayerController* OwnerPC; // 0x290(0x8)
		bool bIsEnabled; // 0x298(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x299(0x7) UNKNOWN PROPERTY
		FGameplayDebuggerNetPack ReplicatedData; // 0x2A0(0x18)
		FGameplayDebuggerDebugActor DebugActor; // 0x2B8(0x10)
		FGameplayDebuggerVisLogSync VisLogSync; // 0x2C8(0x10)
		UGameplayDebuggerRenderingComponent* RenderingComp; // 0x2D8(0x8)
		unsigned char UnknownData01_7[0x68]; // 0x2E0(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayDebugger.GameplayDebuggerCategoryReplicator");
			return ret;
		}

		void ServerSetViewPoint(FVector InViewLocation, FVector InViewDirection); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate, Memory Exec: 0x7FF74CCED988(relative to base address)
		void ServerSetEnabled(bool bEnable); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74CCED8D8(relative to base address)
		void ServerSetDebugActor(AActor* Actor, bool bSelectInEditor); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74CCED7E0(relative to base address)
		void ServerSetCategoryEnabled(int32_t CategoryID, bool bEnable); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74CCED6E8(relative to base address)
		void ServerSendExtensionInputEvent(int32_t ExtensionId, int32_t HandlerId); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74CCED600(relative to base address)
		void ServerSendCategoryInputEvent(int32_t CategoryID, int32_t HandlerId); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74CCED518(relative to base address)
		void ServerResetViewPoint(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74CCED4CC(relative to base address)
		void OnRep_ReplicatedData(); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF74CCED498(relative to base address)
		void ClientDataPackPacket(FGameplayDebuggerDataPackRPCParams Params); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74CCED358(relative to base address)
	};


	// Class GameplayDebugger.GameplayDebuggerConfig
	// Inherited from UObject
	// Size: 0x230 (0x258 - 0x28)
	class UGameplayDebuggerConfig : public UObject	
	{
	public:
		FKey ActivationKey; // 0x28(0x18)
		FKey CategoryRowNextKey; // 0x40(0x18)
		FKey CategoryRowPrevKey; // 0x58(0x18)
		FKey CategorySlot0; // 0x70(0x18)
		FKey CategorySlot1; // 0x88(0x18)
		FKey CategorySlot2; // 0xA0(0x18)
		FKey CategorySlot3; // 0xB8(0x18)
		FKey CategorySlot4; // 0xD0(0x18)
		FKey CategorySlot5; // 0xE8(0x18)
		FKey CategorySlot6; // 0x100(0x18)
		FKey CategorySlot7; // 0x118(0x18)
		FKey CategorySlot8; // 0x130(0x18)
		FKey CategorySlot9; // 0x148(0x18)
		float DebugCanvasPaddingLeft; // 0x160(0x4)
		float DebugCanvasPaddingRight; // 0x164(0x4)
		float DebugCanvasPaddingTop; // 0x168(0x4)
		float DebugCanvasPaddingBottom; // 0x16C(0x4)
		bool bDebugCanvasEnableTextShadow; // 0x170(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x171(0x7) UNKNOWN PROPERTY
		TArray<FGameplayDebuggerCategoryConfig> Categories; // 0x178(0x10)
		TArray<FGameplayDebuggerExtensionConfig> Extensions; // 0x188(0x10)
		unsigned char UnknownData01_7[0xC0]; // 0x198(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayDebugger.GameplayDebuggerConfig");
			return ret;
		}
	};


	// Class GameplayDebugger.GameplayDebuggerUserSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UGameplayDebuggerUserSettings : public UDeveloperSettings	
	{
	public:
		bool bEnableGameplayDebuggerInEditor : 1; // 0x30:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float MaxViewDistance; // 0x34(0x4)
		float MaxViewAngle; // 0x38(0x4)
		int32_t FontSize; // 0x3C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayDebugger.GameplayDebuggerUserSettings");
			return ret;
		}
	};


	// Class GameplayDebugger.GameplayDebuggerLocalController
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UGameplayDebuggerLocalController : public UObject	
	{
	public:
		AGameplayDebuggerCategoryReplicator* CachedReplicator; // 0x28(0x8)
		AGameplayDebuggerPlayerManager* CachedPlayerManager; // 0x30(0x8)
		AActor* DebugActorCandidate; // 0x38(0x8)
		UFont* HUDFont; // 0x40(0x8)
		unsigned char UnknownData00_7[0x40]; // 0x48(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayDebugger.GameplayDebuggerLocalController");
			return ret;
		}
	};


	// Class GameplayDebugger.GameplayDebuggerPlayerManager
	// Inherited from AActor -> UObject
	// Size: 0x30 (0x2C0 - 0x290)
	class AGameplayDebuggerPlayerManager : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		TArray<FGameplayDebuggerPlayerData> PlayerData; // 0x298(0x10)
		TArray<AGameplayDebuggerCategoryReplicator*> PendingRegistrations; // 0x2A8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayDebugger.GameplayDebuggerPlayerManager");
			return ret;
		}
	};


	// Class GameplayDebugger.GameplayDebuggerRenderingComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x580 - 0x518)
	class UGameplayDebuggerRenderingComponent : public UDebugDrawComponent	
	{
	public:
		unsigned char UnknownData00_1[0x68]; // 0x518(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayDebugger.GameplayDebuggerRenderingComponent");
			return ret;
		}
	};

}
