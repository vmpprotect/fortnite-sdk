#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: InterchangeFactoryNodes
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class InterchangeFactoryNodes.InterchangeActorFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x40 (0x180 - 0x140)
	class UInterchangeActorFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x140(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeActorFactoryNode");
			return ret;
		}

		bool SetCustomMobility(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDF1E0
		bool SetCustomLocalTransform(FTransform& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EDF100
		bool SetCustomGlobalTransform(FTransform& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EDF020
		bool SetCustomActorClassName(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EDEF40
		bool GetCustomMobility(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDEE60
		bool GetCustomLocalTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EDED80
		bool GetCustomGlobalTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EDECA0
		bool GetCustomActorClassName(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDEBC0
	};


	// Class InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode
	// Inherited from UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x40 (0x1C0 - 0x180)
	class UInterchangePhysicalCameraFactoryNode : public UInterchangeActorFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x180(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode");
			return ret;
		}

		bool SetCustomSensorWidth(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDF8E0
		bool SetCustomSensorHeight(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDF800
		bool SetCustomFocusMethod(ECameraFocusMethod& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDF720
		bool SetCustomFocalLength(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDF640
		bool GetCustomSensorWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDF560
		bool GetCustomSensorHeight(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDF480
		bool GetCustomFocusMethod(ECameraFocusMethod& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDF3A0
		bool GetCustomFocalLength(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDF2C0
	};


	// Class InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode
	// Inherited from UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x60 (0x1E0 - 0x180)
	class UInterchangeStandardCameraFactoryNode : public UInterchangeActorFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0x180(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode");
			return ret;
		}

		bool SetCustomWidth(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE0360
		bool SetCustomProjectionMode(TEnumAsByte& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE0280
		bool SetCustomNearClipPlane(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE01A0
		bool SetCustomFieldOfView(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE00C0
		bool SetCustomFarClipPlane(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDFFE0
		bool SetCustomAspectRatio(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDFF00
		bool GetCustomWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDFE20
		bool GetCustomProjectionMode(TEnumAsByte& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDFD40
		bool GetCustomNearClipPlane(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDFC60
		bool GetCustomFieldOfView(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDFB80
		bool GetCustomFarClipPlane(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDFAA0
		bool GetCustomAspectRatio(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDF9C0
	};


	// Class InterchangeFactoryNodes.InterchangeDecalActorFactoryNode
	// Inherited from UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x30 (0x1B0 - 0x180)
	class UInterchangeDecalActorFactoryNode : public UInterchangeActorFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x180(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode");
			return ret;
		}

		bool SetCustomSortOrder(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE0980
		bool SetCustomDecalSize(FVector& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EE08A0
		bool SetCustomDecalMaterialPathName(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE07C0
		UClass GetObjectClass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EE06E0
		bool GetCustomSortOrder(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE0600
		bool GetCustomDecalSize(FVector& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EE0520
		bool GetCustomDecalMaterialPathName(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE0440
	};


	// Class InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x10 (0x150 - 0x140)
	class UInterchangeBaseMaterialFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x140(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode");
			return ret;
		}

		bool SetCustomIsMaterialImportEnabled(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE0B40
		bool GetCustomIsMaterialImportEnabled(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE0A60
	};


	// Class InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode
	// Inherited from UInterchangeBaseMaterialFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x170 - 0x150)
	class UInterchangeDecalMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x150(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode");
			return ret;
		}

		bool SetCustomNormalTexturePath(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE0FA0
		bool SetCustomDiffuseTexturePath(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE0EC0
		UClass GetObjectClass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EE0DE0
		bool GetCustomNormalTexturePath(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE0D00
		bool GetCustomDiffuseTexturePath(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE0C20
	};


	// Class InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x30 (0x170 - 0x140)
	class UInterchangeLevelSequenceFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x140(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode");
			return ret;
		}

		bool SetCustomFrameRate(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE16A0
		bool RemoveCustomAnimationTrackUid(FString AnimationTrackUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE15C0
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EE14E0
		bool GetCustomFrameRate(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE1400
		void GetCustomAnimationTrackUids(TArray& OutAnimationTrackUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE1320
		int32_t GetCustomAnimationTrackUidCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EE1240
		void GetCustomAnimationTrackUid(int32_t Index, FString& OutAnimationTrackUid); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE1160
		bool AddCustomAnimationTrackUid(FString AnimationTrackUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE1080
	};


	// Class InterchangeFactoryNodes.InterchangeBaseLightFactoryNode
	// Inherited from UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x40 (0x1C0 - 0x180)
	class UInterchangeBaseLightFactoryNode : public UInterchangeActorFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x180(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode");
			return ret;
		}

		bool SetCustomUseTemperature(bool AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE1DA0
		bool SetCustomTemperature(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE1CC0
		bool SetCustomLightColor(FColor& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EE1BE0
		bool SetCustomIntensity(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE1B00
		bool GetCustomUseTemperature(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE1A20
		bool GetCustomTemperature(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE1940
		bool GetCustomLightColor(FColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EE1860
		bool GetCustomIntensity(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE1780
	};


	// Class InterchangeFactoryNodes.InterchangeDirectionalLightFactoryNode
	// Inherited from UInterchangeBaseLightFactoryNode -> UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x0 (0x1C0 - 0x1C0)
	class UInterchangeDirectionalLightFactoryNode : public UInterchangeBaseLightFactoryNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeDirectionalLightFactoryNode");
			return ret;
		}
	};


	// Class InterchangeFactoryNodes.InterchangeLightFactoryNode
	// Inherited from UInterchangeBaseLightFactoryNode -> UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x60 (0x220 - 0x1C0)
	class UInterchangeLightFactoryNode : public UInterchangeBaseLightFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0x1C0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeLightFactoryNode");
			return ret;
		}

		bool SetCustomUseIESBrightness(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE2820
		bool SetCustomRotation(FRotator& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EE2740
		bool SetCustomIntensityUnits(ELightUnits AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE2660
		bool SetCustomIESTexture(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE2580
		bool SetCustomIESBrightnessScale(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE24A0
		bool SetCustomAttenuationRadius(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE23C0
		bool GetCustomUseIESBrightness(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE22E0
		bool GetCustomRotation(FRotator& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EE2200
		bool GetCustomIntensityUnits(ELightUnits& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE2120
		bool GetCustomIESTexture(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE2040
		bool GetCustomIESBrightnessScale(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE1F60
		bool GetCustomAttenuationRadius(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE1E80
	};


	// Class InterchangeFactoryNodes.InterchangeRectLightFactoryNode
	// Inherited from UInterchangeLightFactoryNode -> UInterchangeBaseLightFactoryNode -> UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x240 - 0x220)
	class UInterchangeRectLightFactoryNode : public UInterchangeLightFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x220(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode");
			return ret;
		}

		bool SetCustomSourceWidth(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE2BA0
		bool SetCustomSourceHeight(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE2AC0
		bool GetCustomSourceWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE29E0
		bool GetCustomSourceHeight(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE2900
	};


	// Class InterchangeFactoryNodes.InterchangePointLightFactoryNode
	// Inherited from UInterchangeLightFactoryNode -> UInterchangeBaseLightFactoryNode -> UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x240 - 0x220)
	class UInterchangePointLightFactoryNode : public UInterchangeLightFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x220(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode");
			return ret;
		}

		bool SetCustomUseInverseSquaredFalloff(bool AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE2F20
		bool SetCustomLightFalloffExponent(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE2E40
		bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE2D60
		bool GetCustomLightFalloffExponent(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE2C80
	};


	// Class InterchangeFactoryNodes.InterchangeSpotLightFactoryNode
	// Inherited from UInterchangePointLightFactoryNode -> UInterchangeLightFactoryNode -> UInterchangeBaseLightFactoryNode -> UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x260 - 0x240)
	class UInterchangeSpotLightFactoryNode : public UInterchangePointLightFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x240(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode");
			return ret;
		}

		bool SetCustomOuterConeAngle(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE32A0
		bool SetCustomInnerConeAngle(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE31C0
		bool GetCustomOuterConeAngle(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE30E0
		bool GetCustomInnerConeAngle(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE3000
	};


	// Class InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x30 (0x170 - 0x140)
	class UInterchangePhysicsAssetFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x140(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode");
			return ret;
		}

		bool SetCustomSkeletalMeshUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE3620
		void InitializePhysicsAssetNode(FString UniqueID, FString DisplayLabel, FString InAssetClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE3540
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EE3460
		bool GetCustomSkeletalMeshUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE3380
	};


	// Class InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x160 - 0x140)
	class UInterchangeSceneVariantSetsFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x140(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode");
			return ret;
		}

		bool RemoveCustomVariantSetUid(FString VariantUID); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE3B60
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EE3A80
		void GetCustomVariantSetUids(TArray& OutVariantUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE39A0
		int32_t GetCustomVariantSetUidCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EE38C0
		void GetCustomVariantSetUid(int32_t Index, FString& OutVariantUid); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE37E0
		bool AddCustomVariantSetUid(FString VariantUID); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE3700
	};


	// Class InterchangeFactoryNodes.InterchangeSkeletonFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x50 (0x190 - 0x140)
	class UInterchangeSkeletonFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x140(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode");
			return ret;
		}

		bool SetCustomUseTimeZeroForBindPose(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE4260
		bool SetCustomSkeletalMeshFactoryNodeUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE4180
		bool SetCustomRootJointUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE40A0
		void InitializeSkeletonNode(FString UniqueID, FString DisplayLabel, FString InAssetClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE3FC0
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EE3EE0
		bool GetCustomUseTimeZeroForBindPose(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE3E00
		bool GetCustomSkeletalMeshFactoryNodeUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE3D20
		bool GetCustomRootJointUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE3C40
	};


	// Class InterchangeFactoryNodes.InterchangeTextureFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x2A0 (0x3E0 - 0x140)
	class UInterchangeTextureFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x2A0]; // 0x140(0x2A0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode");
			return ret;
		}

		bool SetCustomVirtualTextureStreaming(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE8860
		bool SetCustomTranslatedTextureNodeUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE8780
		bool SetCustomSRGB(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE86A0
		bool SetCustomPreferCompressedSourceData(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE85C0
		bool SetCustomPowerOfTwoMode(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE84E0
		bool SetCustomPaddingColor(FColor& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EE8400
		bool SetCustomMipLoadOptions(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE8320
		bool SetCustomMipGenSettings(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE8240
		bool SetCustomMaxTextureSize(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE8160
		bool SetCustomLossyCompressionAmount(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE8080
		bool SetCustomLODGroup(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE7FA0
		bool SetCustomLODBias(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE7EC0
		bool SetCustomFilter(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE7DE0
		bool SetCustomDownscaleOptions(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE7D00
		bool SetCustomDownscale(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE7C20
		bool SetCustomDeferCompression(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE7B40
		bool SetCustomCompressionSettings(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE7A60
		bool SetCustomCompressionQuality(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE7980
		bool SetCustomCompressionNoAlpha(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE78A0
		bool SetCustomCompositeTextureMode(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE77C0
		bool SetCustomCompositePower(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE76E0
		bool SetCustomColorSpace(ETextureColorSpace AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE7600
		bool SetCustomChromaKeyThreshold(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE7520
		bool SetCustomChromaKeyColor(FColor& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EE7440
		bool SetCustombUseLegacyGamma(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE7360
		bool SetCustombPreserveBorder(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE7280
		bool SetCustombFlipGreenChannel(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE71A0
		bool SetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE70C0
		bool SetCustombChromaKeyTexture(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE6FE0
		bool SetCustomAlphaCoverageThresholds(FVector4& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EE6F00
		bool SetCustomAllowNonPowerOfTwo(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE6E20
		bool SetCustomAdjustVibrance(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE6D40
		bool SetCustomAdjustSaturation(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE6C60
		bool SetCustomAdjustRGBCurve(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE6B80
		bool SetCustomAdjustMinAlpha(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE6AA0
		bool SetCustomAdjustMaxAlpha(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE69C0
		bool SetCustomAdjustHue(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE68E0
		bool SetCustomAdjustBrightnessCurve(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE6800
		bool SetCustomAdjustBrightness(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE6720
		void InitializeTextureNode(FString UniqueID, FString DisplayLabel, FString InAssetName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE6640
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EE6560
		bool GetCustomVirtualTextureStreaming(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE6480
		bool GetCustomTranslatedTextureNodeUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE63A0
		bool GetCustomSRGB(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE62C0
		bool GetCustomPreferCompressedSourceData(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE61E0
		bool GetCustomPowerOfTwoMode(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE6100
		bool GetCustomPaddingColor(FColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EE6020
		bool GetCustomMipLoadOptions(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE5F40
		bool GetCustomMipGenSettings(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE5E60
		bool GetCustomMaxTextureSize(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE5D80
		bool GetCustomLossyCompressionAmount(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE5CA0
		bool GetCustomLODGroup(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE5BC0
		bool GetCustomLODBias(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE5AE0
		bool GetCustomFilter(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE5A00
		bool GetCustomDownscaleOptions(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE5920
		bool GetCustomDownscale(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE5840
		bool GetCustomDeferCompression(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE5760
		bool GetCustomCompressionSettings(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE5680
		bool GetCustomCompressionQuality(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE55A0
		bool GetCustomCompressionNoAlpha(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE54C0
		bool GetCustomCompositeTextureMode(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE53E0
		bool GetCustomCompositePower(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE5300
		bool GetCustomColorSpace(ETextureColorSpace& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE5220
		bool GetCustomChromaKeyThreshold(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE5140
		bool GetCustomChromaKeyColor(FColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EE5060
		bool GetCustombUseLegacyGamma(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE4F80
		bool GetCustombPreserveBorder(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE4EA0
		bool GetCustombFlipGreenChannel(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE4DC0
		bool GetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE4CE0
		bool GetCustombChromaKeyTexture(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE4C00
		bool GetCustomAlphaCoverageThresholds(FVector4& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EE4B20
		bool GetCustomAllowNonPowerOfTwo(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE4A40
		bool GetCustomAdjustVibrance(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE4960
		bool GetCustomAdjustSaturation(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE4880
		bool GetCustomAdjustRGBCurve(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE47A0
		bool GetCustomAdjustMinAlpha(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE46C0
		bool GetCustomAdjustMaxAlpha(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE45E0
		bool GetCustomAdjustHue(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE4500
		bool GetCustomAdjustBrightnessCurve(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE4420
		bool GetCustomAdjustBrightness(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE4340
	};


	// Class InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode
	// Inherited from UInterchangeTextureFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x30 (0x410 - 0x3E0)
	class UInterchangeTexture2DArrayFactoryNode : public UInterchangeTextureFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x3E0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode");
			return ret;
		}

		bool SetCustomAddressZ(char AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE8BE0
		bool GetCustomAddressZ(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE8B00
		bool GetCustomAddressY(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE8A20
		bool GetCustomAddressX(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE8940
	};


	// Class InterchangeFactoryNodes.InterchangeTexture2DFactoryNode
	// Inherited from UInterchangeTextureFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x98 (0x478 - 0x3E0)
	class UInterchangeTexture2DFactoryNode : public UInterchangeTextureFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x98]; // 0x3E0(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode");
			return ret;
		}

		void SetSourceBlocks(TMap& InSourceBlocks); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EE94A0
		void SetSourceBlockByCoordinates(int32_t X, int32_t Y, FString InSourceFile); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE93C0
		void SetSourceBlock(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE92E0
		void SetCustomAddressY(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE9200
		bool SetCustomAddressX(TEnumAsByte AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE9120
		TMap GetSourceBlocks(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EE9040
		bool GetSourceBlockByCoordinates(int32_t X, int32_t Y, FString& OutSourceFile); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE8F60
		bool GetSourceBlock(int32_t BlockIndex, FString& OutSourceFile); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE8E80
		bool GetCustomAddressY(TEnumAsByte& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE8DA0
		bool GetCustomAddressX(TEnumAsByte& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE8CC0
	};


	// Class InterchangeFactoryNodes.InterchangeTextureCubeArrayFactoryNode
	// Inherited from UInterchangeTextureFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x0 (0x3E0 - 0x3E0)
	class UInterchangeTextureCubeArrayFactoryNode : public UInterchangeTextureFactoryNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeTextureCubeArrayFactoryNode");
			return ret;
		}
	};


	// Class InterchangeFactoryNodes.InterchangeTextureCubeFactoryNode
	// Inherited from UInterchangeTextureFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x0 (0x3E0 - 0x3E0)
	class UInterchangeTextureCubeFactoryNode : public UInterchangeTextureFactoryNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeTextureCubeFactoryNode");
			return ret;
		}
	};


	// Class InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode
	// Inherited from UInterchangeTexture2DFactoryNode -> UInterchangeTextureFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x498 - 0x478)
	class UInterchangeTextureLightProfileFactoryNode : public UInterchangeTexture2DFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x478(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode");
			return ret;
		}

		bool SetCustomTextureMultiplier(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE9820
		bool SetCustomBrightness(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EE9740
		bool GetCustomTextureMultiplier(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE9660
		bool GetCustomBrightness(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE9580
	};


	// Class InterchangeFactoryNodes.InterchangeVolumeTextureFactoryNode
	// Inherited from UInterchangeTextureFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x0 (0x3E0 - 0x3E0)
	class UInterchangeVolumeTextureFactoryNode : public UInterchangeTextureFactoryNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeVolumeTextureFactoryNode");
			return ret;
		}
	};


	// Class InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x340 (0x480 - 0x140)
	class UInterchangeAnimSequenceFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x340]; // 0x140(0x340) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode");
			return ret;
		}

		bool SetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EEC300
		bool SetCustomSkeletonFactoryNodeUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEC220
		bool SetCustomRemoveCurveRedundantKeys(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEC140
		bool SetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEC060
		bool SetCustomImportBoneTracksSampleRate(double& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEBF80
		bool SetCustomImportBoneTracksRangeStop(double& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEBEA0
		bool SetCustomImportBoneTracksRangeStart(double& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEBDC0
		bool SetCustomImportBoneTracks(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEBCE0
		bool SetCustomImportAttributeCurves(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEBC00
		bool SetCustomDoNotImportCurveWithZero(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEBB20
		bool SetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEBA40
		bool SetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEB960
		bool SetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEB880
		bool SetCustomAddCurveMetadataToSkeleton(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEB7A0
		void SetAnimationPayloadKeysForSceneNodeUids(TMap& SceneNodeAnimationPayloadKeyUids, TMap& SceneNodeAnimationPayloadKeyTypes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEB6C0
		void SetAnimationPayloadKeysForMorphTargetNodeUids(TMap& MorphTargetAnimationPayloadKeyUids, TMap& MorphTargetAnimationPayloadKeyTypes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEB5E0
		bool SetAnimatedMaterialCurveSuffixe(FString MaterialCurveSuffixe); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEB500
		bool SetAnimatedAttributeStepCurveName(FString AttributeStepCurveName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEB420
		bool SetAnimatedAttributeCurveName(FString AttributeCurveName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEB340
		bool RemoveAnimatedMaterialCurveSuffixe(FString MaterialCurveSuffixe); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEB260
		bool RemoveAnimatedAttributeStepCurveName(FString AttributeStepCurveName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEB180
		bool RemoveAnimatedAttributeCurveName(FString AttributeCurveName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEB0A0
		void InitializeAnimSequenceNode(FString UniqueID, FString DisplayLabel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEAFC0
		void GetSceneNodeAnimationPayloadKeys(TMap& OutSceneNodeAnimationPayloadKeys); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEAEE0
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EEAE00
		void GetMorphTargetNodeAnimationPayloadKeys(TMap& OutMorphTargetNodeAnimationPayloads); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEAD20
		bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EEAC40
		bool GetCustomSkeletonFactoryNodeUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEAB60
		bool GetCustomRemoveCurveRedundantKeys(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEAA80
		bool GetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEA9A0
		bool GetCustomImportBoneTracksSampleRate(double& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEA8C0
		bool GetCustomImportBoneTracksRangeStop(double& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEA7E0
		bool GetCustomImportBoneTracksRangeStart(double& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEA700
		bool GetCustomImportBoneTracks(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEA620
		bool GetCustomImportAttributeCurves(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEA540
		bool GetCustomDoNotImportCurveWithZero(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEA460
		bool GetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEA380
		bool GetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEA2A0
		bool GetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEA1C0
		bool GetCustomAddCurveMetadataToSkeleton(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEA0E0
		int32_t GetAnimatedMaterialCurveSuffixesCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EEA000
		void GetAnimatedMaterialCurveSuffixes(TArray& OutMaterialCurveSuffixes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE9F20
		void GetAnimatedMaterialCurveSuffixe(int32_t Index, FString& OutMaterialCurveSuffixe); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE9E40
		int32_t GetAnimatedAttributeStepCurveNamesCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EE9D60
		void GetAnimatedAttributeStepCurveNames(TArray& OutAttributeStepCurveNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE9C80
		void GetAnimatedAttributeStepCurveName(int32_t Index, FString& OutAttributeStepCurveName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE9BA0
		int32_t GetAnimatedAttributeCurveNamesCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EE9AC0
		void GetAnimatedAttributeCurveNames(TArray& OutAttributeCurveNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE99E0
		void GetAnimatedAttributeCurveName(int32_t Index, FString& OutAttributeCurveName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EE9900
	};


	// Class InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x30 (0x170 - 0x140)
	class UInterchangeCommonPipelineDataFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x140(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode");
			return ret;
		}

		bool SetCustomGlobalOffsetTransform(UInterchangeBaseNodeContainer NodeContainer, FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EEC840
		bool SetBakePivotMeshes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEC760
		bool SetBakeMeshes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EEC680
		bool GetCustomGlobalOffsetTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EEC5A0
		bool GetBakePivotMeshes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEC4C0
		bool GetBakeMeshes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEC3E0
	};


	// Class InterchangeFactoryNodes.InterchangeMaterialFactoryNode
	// Inherited from UInterchangeBaseMaterialFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x70 (0x1C0 - 0x150)
	class UInterchangeMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x70]; // 0x150(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode");
			return ret;
		}

		bool SetCustomTwoSided(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF09E0
		bool SetCustomTranslucencyLightingMode(TEnumAsByte& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF0900
		bool SetCustomShadingModel(TEnumAsByte& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF0820
		bool SetCustomScreenSpaceReflections(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF0740
		bool SetCustomRefractionMethod(TEnumAsByte& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF0660
		bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF0580
		bool SetCustomBlendMode(TEnumAsByte& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF04A0
		bool GetTransmissionColorConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF03C0
		bool GetTangentConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF02E0
		bool GetSurfaceCoverageConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF0200
		bool GetSubsurfaceConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF0120
		bool GetSpecularConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF0040
		bool GetRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEFF60
		bool GetRefractionConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEFE80
		bool GetOpacityConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEFDA0
		bool GetOcclusionConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEFCC0
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EEFBE0
		bool GetNormalConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEFB00
		bool GetMetallicConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEFA20
		bool GetFuzzColorConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEF940
		bool GetEmissiveColorConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEF860
		bool GetDisplacementConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEF780
		bool GetCustomTwoSided(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEF6A0
		bool GetCustomTranslucencyLightingMode(TEnumAsByte& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEF5C0
		bool GetCustomShadingModel(TEnumAsByte& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEF4E0
		bool GetCustomScreenSpaceReflections(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEF400
		bool GetCustomRefractionMethod(TEnumAsByte& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEF320
		bool GetCustomOpacityMaskClipValue(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEF240
		bool GetCustomBlendMode(TEnumAsByte& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEF160
		bool GetClothConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEF080
		bool GetClearCoatRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEEFA0
		bool GetClearCoatNormalConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEEEC0
		bool GetClearCoatConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEEDE0
		bool GetBaseColorConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEED00
		bool GetAnisotropyConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EEEC20
		bool ConnectToTransmissionColor(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEEB40
		bool ConnectToTangent(FString ExpressionNodeUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEEA60
		bool ConnectToSurfaceCoverage(FString ExpressionUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEE980
		bool ConnectToSubsurface(FString ExpressionNodeUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEE8A0
		bool ConnectToSpecular(FString ExpressionNodeUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEE7C0
		bool ConnectToRoughness(FString ExpressionNodeUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEE6E0
		bool ConnectToRefraction(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEE600
		bool ConnectToOpacity(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEE520
		bool ConnectToOcclusion(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEE440
		bool ConnectToNormal(FString ExpressionNodeUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEE360
		bool ConnectToMetallic(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEE280
		bool ConnectToFuzzColor(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEE1A0
		bool ConnectToEmissiveColor(FString ExpressionNodeUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEE0C0
		bool ConnectToDisplacement(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEDFE0
		bool ConnectToCloth(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEDF00
		bool ConnectToClearCoatRoughness(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEDE20
		bool ConnectToClearCoatNormal(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEDD40
		bool ConnectToClearCoat(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEDC60
		bool ConnectToBaseColor(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEDB80
		bool ConnectToAnisotropy(FString ExpressionNodeUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEDAA0
		bool ConnectOutputToTransmissionColor(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EED9C0
		bool ConnectOutputToTangent(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EED8E0
		bool ConnectOutputToSurfaceCoverage(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EED800
		bool ConnectOutputToSubsurface(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EED720
		bool ConnectOutputToSpecular(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EED640
		bool ConnectOutputToRoughness(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EED560
		bool ConnectOutputToRefraction(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EED480
		bool ConnectOutputToOpacity(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EED3A0
		bool ConnectOutputToOcclusion(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EED2C0
		bool ConnectOutputToNormal(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EED1E0
		bool ConnectOutputToMetallic(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EED100
		bool ConnectOutputToFuzzColor(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EED020
		bool ConnectOutputToEmissiveColor(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EECF40
		bool ConnectOutputToDisplacement(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EECE60
		bool ConnectOutputToCloth(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EECD80
		bool ConnectOutputToClearCoatRoughness(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EECCA0
		bool ConnectOutputToClearCoatNormal(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EECBC0
		bool ConnectOutputToClearCoat(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EECAE0
		bool ConnectOutputToBaseColor(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EECA00
		bool ConnectOutputToAnisotropy(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EEC920
	};


	// Class InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x10 (0x150 - 0x140)
	class UInterchangeMaterialExpressionFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x140(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode");
			return ret;
		}

		bool SetCustomExpressionClassName(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF0BA0
		bool GetCustomExpressionClassName(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF0AC0
	};


	// Class InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode
	// Inherited from UInterchangeBaseMaterialFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x170 - 0x150)
	class UInterchangeMaterialInstanceFactoryNode : public UInterchangeBaseMaterialFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x150(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode");
			return ret;
		}

		bool SetCustomParent(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF0F20
		bool SetCustomInstanceClassName(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF0E40
		bool GetCustomParent(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF0D60
		bool GetCustomInstanceClassName(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF0C80
	};


	// Class InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode
	// Inherited from UInterchangeMaterialExpressionFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x10 (0x160 - 0x150)
	class UInterchangeMaterialFunctionCallExpressionFactoryNode : public UInterchangeMaterialExpressionFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x150(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode");
			return ret;
		}

		bool SetCustomMaterialFunctionDependency(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF10E0
		bool GetCustomMaterialFunctionDependency(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF1000
	};


	// Class InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode
	// Inherited from UInterchangeBaseMaterialFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x0 (0x150 - 0x150)
	class UInterchangeMaterialFunctionFactoryNode : public UInterchangeBaseMaterialFactoryNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode");
			return ret;
		}

		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF12A0
		bool GetInputConnection(FString InputName, FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF11C0
	};


	// Class InterchangeFactoryNodes.InterchangeMeshActorFactoryNode
	// Inherited from UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x98 (0x218 - 0x180)
	class UInterchangeMeshActorFactoryNode : public UInterchangeActorFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0x98]; // 0x180(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode");
			return ret;
		}

		bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF19A0
		bool SetCustomGeometricTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EF18C0
		bool SetCustomAnimationAssetUidToPlay(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF17E0
		bool RemoveSlotMaterialDependencyUid(FString SlotName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF1700
		bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF1620
		void GetSlotMaterialDependencies(TMap& OutMaterialDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF1540
		bool GetCustomGeometricTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EF1460
		bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF1380
	};


	// Class InterchangeFactoryNodes.InterchangeMeshFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x180 (0x2C0 - 0x140)
	class UInterchangeMeshFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x180]; // 0x140(0x180) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode");
			return ret;
		}

		bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF3840
		bool SetCustomVertexColorReplace(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF3760
		bool SetCustomVertexColorOverride(FColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EF3680
		bool SetCustomVertexColorIgnore(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF35A0
		bool SetCustomUseMikkTSpace(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF34C0
		bool SetCustomUseHighPrecisionTangentBasis(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF33E0
		bool SetCustomUseFullPrecisionUVs(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF3300
		bool SetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF3220
		bool SetCustomRemoveDegenerates(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF3140
		bool SetCustomRecomputeTangents(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF3060
		bool SetCustomRecomputeNormals(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF2F80
		bool SetCustomLODGroup(FName& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF2EA0
		bool SetCustomKeepSectionsSeparate(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF2DC0
		bool SetCustomComputeWeightedNormals(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF2CE0
		bool ResetSlotMaterialDependencies(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF2C00
		bool RemoveSlotMaterialDependencyUid(FString SlotName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF2B20
		bool RemoveLodDataUniqueId(FString LodDataUniqueId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF2A40
		bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF2960
		void GetSlotMaterialDependencies(TMap& OutMaterialDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF2880
		void GetLodDataUniqueIds(TArray& OutLodDataUniqueIds); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF27A0
		int32_t GetLodDataCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF26C0
		bool GetCustomVertexColorReplace(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF25E0
		bool GetCustomVertexColorOverride(FColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EF2500
		bool GetCustomVertexColorIgnore(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF2420
		bool GetCustomUseMikkTSpace(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF2340
		bool GetCustomUseHighPrecisionTangentBasis(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF2260
		bool GetCustomUseFullPrecisionUVs(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF2180
		bool GetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF20A0
		bool GetCustomRemoveDegenerates(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF1FC0
		bool GetCustomRecomputeTangents(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF1EE0
		bool GetCustomRecomputeNormals(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF1E00
		bool GetCustomLODGroup(FName& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF1D20
		bool GetCustomKeepSectionsSeparate(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF1C40
		bool GetCustomComputeWeightedNormals(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF1B60
		bool AddLodDataUniqueId(FString LodDataUniqueId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF1A80
	};


	// Class InterchangeFactoryNodes.InterchangeSceneImportAssetFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x0 (0x140 - 0x140)
	class UInterchangeSceneImportAssetFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeSceneImportAssetFactoryNode");
			return ret;
		}
	};


	// Class InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode
	// Inherited from UInterchangeMeshFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0xE8 (0x3A8 - 0x2C0)
	class UInterchangeSkeletalMeshFactoryNode : public UInterchangeMeshFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0xE8]; // 0x2C0(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode");
			return ret;
		}

		bool SetCustomUseHighPrecisionSkinWeights(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF50C0
		bool SetCustomThresholdUV(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF4FE0
		bool SetCustomThresholdTangentNormal(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF4F00
		bool SetCustomThresholdPosition(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF4E20
		bool SetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EF4D40
		bool SetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EF4C60
		bool SetCustomMorphThresholdPosition(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF4B80
		bool SetCustomMergeMorphTargetShapeWithSameName(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF4AA0
		bool SetCustomImportVertexAttributes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF49C0
		bool SetCustomImportMorphTarget(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF48E0
		bool SetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF4800
		bool SetCustomCreatePhysicsAsset(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF4720
		bool SetCustomBoneInfluenceLimit(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF4640
		void InitializeSkeletalMeshNode(FString UniqueID, FString DisplayLabel, FString InAssetClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF4560
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF4480
		bool GetCustomUseHighPrecisionSkinWeights(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF43A0
		bool GetCustomThresholdUV(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF42C0
		bool GetCustomThresholdTangentNormal(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF41E0
		bool GetCustomThresholdPosition(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF4100
		bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EF4020
		bool GetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EF3F40
		bool GetCustomMorphThresholdPosition(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF3E60
		bool GetCustomMergeMorphTargetShapeWithSameName(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF3D80
		bool GetCustomImportVertexAttributes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF3CA0
		bool GetCustomImportMorphTarget(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF3BC0
		bool GetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF3AE0
		bool GetCustomCreatePhysicsAsset(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF3A00
		bool GetCustomBoneInfluenceLimit(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF3920
	};


	// Class InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x30 (0x170 - 0x140)
	class UInterchangeSkeletalMeshLodDataNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x140(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode");
			return ret;
		}

		bool SetCustomSkeletonUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF56E0
		bool RemoveMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF5600
		bool RemoveAllMeshes(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF5520
		int32_t GetMeshUidsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF5440
		void GetMeshUids(TArray& OutMeshNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF5360
		bool GetCustomSkeletonUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF5280
		bool AddMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF51A0
	};


	// Class InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode
	// Inherited from UInterchangeMeshFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0xE8 (0x3A8 - 0x2C0)
	class UInterchangeStaticMeshFactoryNode : public UInterchangeMeshFactoryNode	
	{
	public:
		unsigned char UnknownData01_1[0xE8]; // 0x2C0(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode");
			return ret;
		}

		bool SetCustomSupportFaceRemap(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF7200
		bool SetCustomSrcLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF7120
		bool SetCustomMinLightmapResolution(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF7040
		bool SetCustomMaxLumenMeshCards(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF6F60
		bool SetCustomGenerateLightmapUVs(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF6E80
		bool SetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF6DA0
		bool SetCustomDstLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF6CC0
		bool SetCustomDistanceFieldResolutionScale(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF6BE0
		bool SetCustomDistanceFieldReplacementMesh(FSoftObjectPath& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EF6B00
		bool SetCustomBuildScale3D(FVector& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EF6A20
		bool SetCustomBuildReversedIndexBuffer(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF6940
		bool SetCustomBuildNanite(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF6860
		bool RemoveSocketUd(FString SocketUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF6780
		void InitializeStaticMeshNode(FString UniqueID, FString DisplayLabel, FString InAssetClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF66A0
		void GetSocketUids(TArray& OutSocketUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF65C0
		int32_t GetSocketUidCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF64E0
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF6400
		bool GetCustomSupportFaceRemap(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF6320
		bool GetCustomSrcLightmapIndex(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF6240
		bool GetCustomMinLightmapResolution(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF6160
		bool GetCustomMaxLumenMeshCards(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF6080
		bool GetCustomGenerateLightmapUVs(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF5FA0
		bool GetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF5EC0
		bool GetCustomDstLightmapIndex(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF5DE0
		bool GetCustomDistanceFieldResolutionScale(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF5D00
		bool GetCustomDistanceFieldReplacementMesh(FSoftObjectPath& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EF5C20
		bool GetCustomBuildScale3D(FVector& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EF5B40
		bool GetCustomBuildReversedIndexBuffer(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF5A60
		bool GetCustomBuildNanite(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF5980
		bool AddSocketUids(TArray& InSocketUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EF58A0
		bool AddSocketUid(FString SocketUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF57C0
	};


	// Class InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0xC0 (0x200 - 0x140)
	class UInterchangeStaticMeshLodDataNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0xC0]; // 0x140(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode");
			return ret;
		}

		bool SetOneConvexHullPerUCX(bool AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF8B60
		bool SetImportCollision(bool AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF8A80
		bool RemoveSphereCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF89A0
		bool RemoveMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF88C0
		bool RemoveConvexCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF87E0
		bool RemoveCapsuleCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF8700
		bool RemoveBoxCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF8620
		bool RemoveAllSphereCollisionMeshes(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF8540
		bool RemoveAllMeshes(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF8460
		bool RemoveAllConvexCollisionMeshes(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF8380
		bool RemoveAllCapsuleCollisionMeshes(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF82A0
		bool RemoveAllBoxCollisionMeshes(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF81C0
		int32_t GetSphereCollisionMeshUidsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF80E0
		void GetSphereCollisionMeshUids(TArray& OutMeshNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF8000
		bool GetOneConvexHullPerUCX(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF7F20
		int32_t GetMeshUidsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF7E40
		void GetMeshUids(TArray& OutMeshNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF7D60
		bool GetImportCollision(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF7C80
		int32_t GetConvexCollisionMeshUidsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF7BA0
		void GetConvexCollisionMeshUids(TArray& OutMeshNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF7AC0
		int32_t GetCapsuleCollisionMeshUidsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF79E0
		void GetCapsuleCollisionMeshUids(TArray& OutMeshNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF7900
		int32_t GetBoxCollisionMeshUidsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF7820
		void GetBoxCollisionMeshUids(TArray& OutMeshNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EF7740
		bool AddSphereCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF7660
		void AddMeshUid(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF7580
		bool AddConvexCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF74A0
		bool AddCapsuleCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF73C0
		bool AddBoxCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF72E0
	};

}
