#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MetaHumanUEFNRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MetaHumanUEFNRuntime.GameFeatureAction_MetaHuman
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0xF0 (0x118 - 0x28)
	class UGameFeatureAction_MetaHuman : public UGameFeatureAction	
	{
	public:
		TMap BodyPostAnimBPs; // 0x28(0x50)
		TWeakObjectPtr Face_AnimBP; // 0x78(0x20)
		TWeakObjectPtr Face_PostAnimBP; // 0x98(0x20)
		TWeakObjectPtr RigidBodyAnimBP; // 0xB8(0x20)
		TWeakObjectPtr ControlRigRigidBodyAnimBP; // 0xD8(0x20)
		TWeakObjectPtr ControlRigAnimBP; // 0xF8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetaHumanUEFNRuntime.GameFeatureAction_MetaHuman");
			return ret;
		}
	};


	// Class MetaHumanUEFNRuntime.MetaHumanComponent
	// Inherited from UMetaHumanComponentBase -> UActorComponent -> UObject
	// Size: 0x8 (0x1A0 - 0x198)
	class UMetaHumanComponent : public UMetaHumanComponentBase	
	{
	public:
		int32_t BodyLODThreshold; // 0x198(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetaHumanUEFNRuntime.MetaHumanComponent");
			return ret;
		}
	};

}
