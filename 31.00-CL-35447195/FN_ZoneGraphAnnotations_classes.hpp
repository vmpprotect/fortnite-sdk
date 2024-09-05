#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ZoneGraphAnnotations
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ZoneGraphAnnotations.ZoneGraphAnnotationComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x28 (0x540 - 0x518)
	class UZoneGraphAnnotationComponent : public UDebugDrawComponent	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x518(0x18) UNKNOWN PROPERTY
		bool bEnableDebugDrawing; // 0x530(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x531(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraphAnnotations.ZoneGraphAnnotationComponent");
			return ret;
		}
	};


	// Class ZoneGraphAnnotations.ZoneGraphAnnotationSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x70 (0xB0 - 0x40)
	class UZoneGraphAnnotationSubsystem : public UTickableWorldSubsystem	
	{
	public:
		TArray RegisteredComponents; // 0x40(0x10)
		FInstancedStructContainer Events; // 0x50(0x20)
		unsigned char UnknownData02_6[0x8]; // 0x70(0x8) UNKNOWN PROPERTY
		TArray TagToAnnotationLookup; // 0x78(0x10)
		unsigned char UnknownData03_7[0x28]; // 0x88(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraphAnnotations.ZoneGraphAnnotationSubsystem");
			return ret;
		}
	};


	// Class ZoneGraphAnnotations.ZoneGraphAnnotationTest
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UZoneGraphAnnotationTest : public UObject	
	{
	public:
		UZoneGraphAnnotationTestingComponent OwnerComponent; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraphAnnotations.ZoneGraphAnnotationTest");
			return ret;
		}
	};


	// Class ZoneGraphAnnotations.ZoneGraphAnnotationTestingComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x530 - 0x518)
	class UZoneGraphAnnotationTestingComponent : public UDebugDrawComponent	
	{
	public:
		TArray Tests; // 0x518(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x528(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraphAnnotations.ZoneGraphAnnotationTestingComponent");
			return ret;
		}
	};


	// Class ZoneGraphAnnotations.ZoneGraphAnnotationTestingActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AZoneGraphAnnotationTestingActor : public AActor	
	{
	public:
		UZoneGraphAnnotationTestingComponent TestingComp; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraphAnnotations.ZoneGraphAnnotationTestingActor");
			return ret;
		}

		void Trigger(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BA6AD8
	};


	// Class ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotation
	// Inherited from UZoneGraphAnnotationComponent -> UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x5A0 - 0x538)
	class UZoneGraphDisturbanceAnnotation : public UZoneGraphAnnotationComponent	
	{
	public:
		FZoneGraphTag DangerAnnotationTag; // 0x538(0x1)
		FZoneGraphTag ObstacleAnnotationTag; // 0x539(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x53A(0x2) UNKNOWN PROPERTY
		FZoneGraphTagFilter AffectedLaneTags; // 0x53C(0xC)
		FZoneGraphTagFilter EscapeLaneTags; // 0x548(0xC)
		float IdealSpanLength; // 0x554(0x4)
		unsigned char UnknownData03_6[0x40]; // 0x558(0x40) UNKNOWN PROPERTY
		UZoneGraphSubsystem ZoneGraphSubsystem; // 0x598(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotation");
			return ret;
		}
	};


	// Class ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotationTest
	// Inherited from UZoneGraphAnnotationTest -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UZoneGraphDisturbanceAnnotationTest : public UZoneGraphAnnotationTest	
	{
	public:
		FVector Offset; // 0x30(0x18)
		float duration; // 0x48(0x4)
		float DangerRadius; // 0x4C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotationTest");
			return ret;
		}
	};


	// Class ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotationBPLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UZoneGraphDisturbanceAnnotationBPLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotationBPLibrary");
			return ret;
		}

		void TriggerDanger(UObject WorldContextObject, AActor Instigator, FVector Position, float Radius, float duration); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414BA6BB8
	};

}
