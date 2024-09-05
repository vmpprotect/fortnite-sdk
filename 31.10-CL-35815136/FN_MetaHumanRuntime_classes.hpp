#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MetaHumanRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MetaHumanRuntime.MetaHumanComponentBase
	// Inherited from UActorComponent -> UObject
	// Size: 0xF8 (0x198 - 0xA0)
	class UMetaHumanComponentBase : public UActorComponent	
	{
	public:
		USkeletalMeshComponent* Body; // 0xA0(0x8)
		FString BodyComponentName; // 0xA8(0x10)
		EMetaHumanBodyType BodyType; // 0xB8(0x1)
		bool bEnableBodyCorrectives; // 0xB9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xBA(0x6) UNKNOWN PROPERTY
		USkeletalMeshComponent* Face; // 0xC0(0x8)
		FString FaceComponentName; // 0xC8(0x10)
		int32_t RigLogicLODThreshold; // 0xD8(0x4)
		bool bEnableNeckCorrectives; // 0xDC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		int32_t NeckCorrectivesLODThreshold; // 0xE0(0x4)
		bool bEnableNeckProcControlRig; // 0xE4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xE5(0x3) UNKNOWN PROPERTY
		int32_t NeckProcControlRigLODThreshold; // 0xE8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
		FMetaHumanCustomizableBodyPart Torso; // 0xF0(0x38)
		FMetaHumanCustomizableBodyPart Legs; // 0x128(0x38)
		FMetaHumanCustomizableBodyPart Feet; // 0x160(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetaHumanRuntime.MetaHumanComponentBase");
			return ret;
		}
	};


	// Class MetaHumanRuntime.MetaHumanComponentUE
	// Inherited from UMetaHumanComponentBase -> UActorComponent -> UObject
	// Size: 0x0 (0x198 - 0x198)
	class UMetaHumanComponentUE : public UMetaHumanComponentBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetaHumanRuntime.MetaHumanComponentUE");
			return ret;
		}
	};

}
