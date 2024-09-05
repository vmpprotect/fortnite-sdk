#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRDPostProcess
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CRDPostProcess.CRDPostProcessDeviceComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UCRDPostProcessDeviceComponent : public UActorComponent	
	{
	public:
		UPostProcessComponent* PostProcessComponent; // 0xA0(0x8)
		APlayerController* BlendInstigator; // 0xA8(0x8)
		unsigned char UnknownData00_7[0x48]; // 0xB0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDPostProcess.CRDPostProcessDeviceComponent");
			return ret;
		}

		void StartEffectTimer(APlayerController* InBlendInstigator); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516D5F04(relative to base address)
		void StartBlendingFromPriority(bool bShouldHide, float duration); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516D5E40(relative to base address)
		void StartBlending(APlayerController* InBlendInstigator, bool bBlendIn, float duration); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516D5D34(relative to base address)
		void SetPostProcessEnabled(bool bEnabled); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516D5C98(relative to base address)
		void SetHiddenStrength(float Value); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516D5C18(relative to base address)
		void SetCurrentStrength(float Value); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516D5B98(relative to base address)
		int32_t GetPriority(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFEEC0(relative to base address)
		float GetCurrentStrength(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3976C4(relative to base address)
		bool GetClientEnabled(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF33B90(relative to base address)
		float GetBlendOutTime(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3336C0(relative to base address)
		float GetBlendInTime(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFEED8(relative to base address)
		bool ApplyPostProcessSettingsToDeviceComponent(UClass* ActorClass, bool bInEnabled, float InMaxStrength, int32_t InPriority, float InEffectDuration, float InBlendInDuration, float InBlendOutDuration); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516D5298(relative to base address)
	};


	// Class CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UCRDPostProcessDevicePriorityControllerComponent : public UActorComponent	
	{
	public:
		TArray<UCRDPostProcessDeviceComponent*> CachedAppliedEffects; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent");
			return ret;
		}

		void RemovePostProcessDevice(UCRDPostProcessDeviceComponent* InPostProcessDeviceComponent); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516D59F0(relative to base address)
		UCRDPostProcessDevicePriorityControllerComponent GetPostProcessDevicePriorityControllerComponentFromPlayerController(APlayerController* PC, bool bCreateIfNotFound); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7516D58BC(relative to base address)
		int32_t GetHighestPriorityValue(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516D5758(relative to base address)
		void GetEffectsForPriority(int32_t Priority, TArray<UCRDPostProcessDeviceComponent*>& OutEffects); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516D5674(relative to base address)
		void CachePostProcessDeviceApplication(UCRDPostProcessDeviceComponent* InPostProcessDeviceComponent); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516D55B8(relative to base address)
	};


	// Class CRDPostProcess.CRDPostProcessDeviceControllerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x190 (0x230 - 0xA0)
	class UCRDPostProcessDeviceControllerComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnPostProcessDeviceMessageRecieved; // 0xA0(0x10)
		FMulticastInlineDelegate OnPostProcessDeviceBlendFinished; // 0xB0(0x10)
		FPostProcessDeviceMessageRingBuffer PostProcessDeviceMessageBatch; // 0xC0(0x130)
		unsigned char UnknownData00_6[0x8]; // 0x1F0(0x8) UNKNOWN PROPERTY
		TArray<FPostProcessDeviceMessage> PostProcessDeviceMessageQueue; // 0x1F8(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x208(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent");
			return ret;
		}

		void ServerBlendFinished(AFortCreativeDeviceProp* PostProcessDevice, APlayerController* Instigator, bool bBlendIn); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF7516D5A98(relative to base address)
		void Reset(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516D5A84(relative to base address)
		void OnRep_PostProcessDeviceMessageBatch(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74847EE18(relative to base address)
		UCRDPostProcessDeviceControllerComponent GetPostProcessDeviceControllerComponentFromPlayerController(APlayerController* PC, bool bCreateIfNotFound); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7516D5788(relative to base address)
		void GetMinigamePlayersForPostProcessDevice(AFortMinigame* FortMinigame, TArray<APlayerState*>& OutPlayers); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74E485C24(relative to base address)
		void AddBlendMessageToQueue(AFortCreativeDeviceProp* PostProcessDevice, AFortPlayerState* PlayerStateMessage, EPostProcessDeviceState EndState); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7516D51A0(relative to base address)
	};

}
