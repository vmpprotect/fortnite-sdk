#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioShapes
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AudioShapes.AudioShapeComponent
	// Inherited from UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x98 (0x140 - 0xA8)
	class UAudioShapeComponent : public UAudioGameplayComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		float MaxDistanceOffset; // 0xB0(0x4)
		float SmoothingDistance; // 0xB4(0x4)
		float FadeInTime; // 0xB8(0x4)
		float FadeOutTime; // 0xBC(0x4)
		FMulticastInlineDelegate OnAudibleStateChanged; // 0xC0(0x10)
		TMap AudioComponents; // 0xD0(0x50)
		TArray LocalControllers; // 0x120(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x130(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioShapes.AudioShapeComponent");
			return ret;
		}

		void UpdateAudioShape(TArray& InLocalControllers); // Flags: Final|Native|Public|HasOutParms 0x7FF414651858
		void Enable(); // Flags: Native|Protected|BlueprintCallable 0x7FF414651778
		void Disable(); // Flags: Native|Protected|BlueprintCallable 0x7FF414651698
	};


	// Class AudioShapes.AudioShapePrimitiveComponent
	// Inherited from UAudioShapeComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x200 - 0x140)
	class UAudioShapePrimitiveComponent : public UAudioShapeComponent	
	{
	public:
		USoundBase SoundOnEdge; // 0x140(0x8)
		USoundBase SoundOnInside; // 0x148(0x8)
		FMulticastInlineDelegate OnInsideStateChanged; // 0x150(0x10)
		bool bUseOwningActorTransform; // 0x160(0x1)
		bool bAutoRefreshShape; // 0x161(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x162(0x6) UNKNOWN PROPERTY
		FVector ActorTransformScale; // 0x168(0x18)
		unsigned char UnknownData03_7[0x78]; // 0x180(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioShapes.AudioShapePrimitiveComponent");
			return ret;
		}

		bool GetIsPlayerInside(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414651AF8
		UAudioComponent GetInsideAudioComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414651A18
		UAudioComponent GetEdgeAudioComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414651938
	};


	// Class AudioShapes.AudioShapeBoxComponent
	// Inherited from UAudioShapePrimitiveComponent -> UAudioShapeComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x260 - 0x1F8)
	class UAudioShapeBoxComponent : public UAudioShapePrimitiveComponent	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x1F8(0x8) UNKNOWN PROPERTY
		FTransform BoxTransform; // 0x200(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioShapes.AudioShapeBoxComponent");
			return ret;
		}

		void SetBoxTransform(FTransform& InTransform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414651BD8
	};


	// Class AudioShapes.AudioShapeCylinderComponent
	// Inherited from UAudioShapePrimitiveComponent -> UAudioShapeComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x200 - 0x1F8)
	class UAudioShapeCylinderComponent : public UAudioShapePrimitiveComponent	
	{
	public:
		float HalfHeight; // 0x1F8(0x4)
		float Radius; // 0x1FC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioShapes.AudioShapeCylinderComponent");
			return ret;
		}

		void SetRadius(float InRadius); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414651D98
		void SetHalfHeight(float InHalfHeight); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414651CB8
	};


	// Class AudioShapes.AudioShapeLineComponent
	// Inherited from UAudioShapePrimitiveComponent -> UAudioShapeComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x230 - 0x1F8)
	class UAudioShapeLineComponent : public UAudioShapePrimitiveComponent	
	{
	public:
		FVector StartPoint; // 0x1F8(0x18)
		FVector Endpoint; // 0x210(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x228(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioShapes.AudioShapeLineComponent");
			return ret;
		}

		void SetStartPoint(FVector& InStartPoint); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414651F58
		void SetEndPoint(FVector& InEndPoint); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414651E78
	};


	// Class AudioShapes.AudioShapeLineListComponent
	// Inherited from UAudioShapePrimitiveComponent -> UAudioShapeComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x210 - 0x1F8)
	class UAudioShapeLineListComponent : public UAudioShapePrimitiveComponent	
	{
	public:
		TArray PointList; // 0x1F8(0x10)
		bool bClosedLoop; // 0x208(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x209(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioShapes.AudioShapeLineListComponent");
			return ret;
		}

		bool UpdatePoint(int32_t InIndex, FVector& InPoint); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4146522D8
		bool RemovePoint(int32_t InIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146521F8
		void GetPoints(TArray& OutPoints); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414652118
		int32_t AddPoint(FVector& InPoint); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414652038
	};


	// Class AudioShapes.AudioShapeSphereComponent
	// Inherited from UAudioShapePrimitiveComponent -> UAudioShapeComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x200 - 0x1F8)
	class UAudioShapeSphereComponent : public UAudioShapePrimitiveComponent	
	{
	public:
		float Radius; // 0x1F8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1FC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioShapes.AudioShapeSphereComponent");
			return ret;
		}

		void SetRadius(float InRadius); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146523B8
	};


	// Class AudioShapes.AudioShapeSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x58 (0x88 - 0x30)
	class UAudioShapeSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData02_3[0x28]; // 0x30(0x28) UNKNOWN PROPERTY
		TArray AudioShapes; // 0x58(0x10)
		TArray LocalControllers; // 0x68(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x78(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioShapes.AudioShapeSubsystem");
			return ret;
		}
	};

}
