#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CRDPostProcess
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CRDPostProcess.CRDPostProcessDeviceComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UCRDPostProcessDeviceComponent : public UActorComponent	
	{
	public:
		UPostProcessComponent PostProcessComponent; // 0xA0(0x8)
		APlayerController BlendInstigator; // 0xA8(0x8)
		unsigned char UnknownData01_7[0x48]; // 0xB0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDPostProcess.CRDPostProcessDeviceComponent");
			return ret;
		}

		void StartEffectTimer(APlayerController InBlendInstigator); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D8A920
		void StartBlendingFromPriority(bool bShouldHide, float duration); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D8A840
		void StartBlending(APlayerController InBlendInstigator, bool bBlendIn, float duration); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D8A760
		void SetPostProcessEnabled(bool bEnabled); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D8A680
		void SetHiddenStrength(float Value); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D8A5A0
		void SetCurrentStrength(float Value); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D8A4C0
		int32_t GetPriority(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8A3E0
		float GetCurrentStrength(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8A300
		bool GetClientEnabled(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8A220
		float GetBlendOutTime(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8A140
		float GetBlendInTime(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8A060
		bool ApplyPostProcessSettingsToDeviceComponent(UClass ActorClass, bool bInEnabled, float InMaxStrength, int32_t InPriority, float InEffectDuration, float InBlendInDuration, float InBlendOutDuration); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D89F80
	};


	// Class CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UCRDPostProcessDevicePriorityControllerComponent : public UActorComponent	
	{
	public:
		TArray CachedAppliedEffects; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent");
			return ret;
		}

		void RemovePostProcessDevice(UCRDPostProcessDeviceComponent InPostProcessDeviceComponent); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D8AD80
		UCRDPostProcessDevicePriorityControllerComponent GetPostProcessDevicePriorityControllerComponentFromPlayerController(APlayerController PC, bool bCreateIfNotFound); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D8ACA0
		int32_t GetHighestPriorityValue(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414D8ABC0
		void GetEffectsForPriority(int32_t Priority, TArray& OutEffects); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414D8AAE0
		void CachePostProcessDeviceApplication(UCRDPostProcessDeviceComponent InPostProcessDeviceComponent); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D8AA00
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
		unsigned char UnknownData02_6[0x8]; // 0x1F0(0x8) UNKNOWN PROPERTY
		TArray PostProcessDeviceMessageQueue; // 0x1F8(0x10)
		unsigned char UnknownData03_7[0x28]; // 0x208(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent");
			return ret;
		}

		void ServerBlendFinished(AFortCreativeDeviceProp PostProcessDevice, APlayerController Instigator, bool bBlendIn); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414D8B2C0
		void Reset(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8B1E0
		void OnRep_PostProcessDeviceMessageBatch(); // Flags: Final|Native|Private 0x7FF414D8B100
		UCRDPostProcessDeviceControllerComponent GetPostProcessDeviceControllerComponentFromPlayerController(APlayerController PC, bool bCreateIfNotFound); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D8B020
		void GetMinigamePlayersForPostProcessDevice(AFortMinigame FortMinigame, TArray& OutPlayers); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414D8AF40
		void AddBlendMessageToQueue(AFortCreativeDeviceProp PostProcessDevice, AFortPlayerState PlayerStateMessage, EPostProcessDeviceState EndState); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D8AE60
	};

}
