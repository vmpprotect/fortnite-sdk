#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HoldoutComposite
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class HoldoutComposite.HoldoutCompositeComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x230 - 0x220)
	class UHoldoutCompositeComponent : public USceneComponent	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x220(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HoldoutComposite.HoldoutCompositeComponent");
			return ret;
		}
	};


	// Class HoldoutComposite.HoldoutCompositeSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UHoldoutCompositeSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HoldoutComposite.HoldoutCompositeSubsystem");
			return ret;
		}

		void UnregisterPrimitive(TWeakObjectPtr<UPrimitiveComponent*> InPrimitiveComponent, bool bInHoldoutState); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523D2090(relative to base address)
		void RegisterPrimitive(TWeakObjectPtr<UPrimitiveComponent*> InPrimitiveComponent, bool bInHoldoutState); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523D1F58(relative to base address)
	};


	// Class HoldoutComposite.HoldoutCompositeSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UHoldoutCompositeSettings : public UDeveloperSettings	
	{
	public:
		bool bCompositeFollowsSceneExposure; // 0x30(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		int32_t SceneViewExtensionPriority; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HoldoutComposite.HoldoutCompositeSettings");
			return ret;
		}
	};

}
