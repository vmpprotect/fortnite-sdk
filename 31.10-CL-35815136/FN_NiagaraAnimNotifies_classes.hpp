#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NiagaraAnimNotifies
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState	
	{
	public:
		UNiagaraSystem* Template; // 0x30(0x8)
		FName SocketName; // 0x38(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FVector LocationOffset; // 0x40(0x18)
		FRotator RotationOffset; // 0x58(0x18)
		bool bApplyRateScaleAsTimeDilation; // 0x70(0x1)
		bool bDestroyAtEnd; // 0x71(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x72(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect");
			return ret;
		}

		UFXSystemComponent GetSpawnedEffect(UMeshComponent* MeshComp); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF748FAB274(relative to base address)
	};


	// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
	// Inherited from UAnimNotifyState_TimedNiagaraEffect -> UAnimNotifyState -> UObject
	// Size: 0x68 (0xE0 - 0x78)
	class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect	
	{
	public:
		bool bEnableNormalizedNotifyProgress; // 0x78(0x1)
		bool bApplyRateScaleToProgress; // 0x79(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x7A(0x2) UNKNOWN PROPERTY
		FName NotifyProgressUserParameter; // 0x7C(0x4)
		TArray<FCurveParameterPair> AnimCurves; // 0x80(0x10)
		unsigned char UnknownData01_7[0x50]; // 0x90(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced");
			return ret;
		}

		float GetNotifyProgress(UMeshComponent* MeshComp); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74D32C6E0(relative to base address)
	};


	// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
	// Inherited from UAnimNotify -> UObject
	// Size: 0x98 (0xD0 - 0x38)
	class UAnimNotify_PlayNiagaraEffect : public UAnimNotify	
	{
	public:
		UNiagaraSystem* Template; // 0x38(0x8)
		FVector LocationOffset; // 0x40(0x18)
		FRotator RotationOffset; // 0x58(0x18)
		FVector Scale; // 0x70(0x18)
		bool bAbsoluteScale; // 0x88(0x1)
		unsigned char UnknownData00_6[0x37]; // 0x89(0x37) UNKNOWN PROPERTY
		bool Attached : 1; // 0xC0:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		FName SocketName; // 0xC4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect");
			return ret;
		}

		UFXSystemComponent GetSpawnedEffect(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF7488CD12C(relative to base address)
	};

}
