#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: InterchangeNodes
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class InterchangeNodes.InterchangeAnimationTrackSetNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x30 (0x90 - 0x60)
	class UInterchangeAnimationTrackSetNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x60(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeAnimationTrackSetNode");
			return ret;
		}

		bool SetCustomFrameRate(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED04C0
		bool RemoveCustomAnimationTrackUid(FString AnimationTrackUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED03E0
		bool GetCustomFrameRate(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED0300
		void GetCustomAnimationTrackUids(TArray& OutAnimationTrackUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED0220
		int32_t GetCustomAnimationTrackUidCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ED0140
		void GetCustomAnimationTrackUid(int32_t Index, FString& OutAnimationTrackUid); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED0060
		bool AddCustomAnimationTrackUid(FString AnimationTrackUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ECFF80
	};


	// Class InterchangeNodes.InterchangeAnimationTrackBaseNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x10 (0x70 - 0x60)
	class UInterchangeAnimationTrackBaseNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeAnimationTrackBaseNode");
			return ret;
		}

		bool SetCustomCompletionMode(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED0680
		bool GetCustomCompletionMode(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED05A0
	};


	// Class InterchangeNodes.InterchangeAnimationTrackSetInstanceNode
	// Inherited from UInterchangeAnimationTrackBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x40 (0xB0 - 0x70)
	class UInterchangeAnimationTrackSetInstanceNode : public UInterchangeAnimationTrackBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x70(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode");
			return ret;
		}

		bool SetCustomTrackSetDependencyUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED0D80
		bool SetCustomTimeScale(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED0CA0
		bool SetCustomStartFrame(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED0BC0
		bool SetCustomDuration(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED0AE0
		bool GetCustomTrackSetDependencyUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED0A00
		bool GetCustomTimeScale(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED0920
		bool GetCustomStartFrame(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED0840
		bool GetCustomDuration(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED0760
	};


	// Class InterchangeNodes.InterchangeAnimationTrackNode
	// Inherited from UInterchangeAnimationTrackBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x60 (0xD0 - 0x70)
	class UInterchangeAnimationTrackNode : public UInterchangeAnimationTrackBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0x70(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeAnimationTrackNode");
			return ret;
		}

		bool SetCustomPropertyTrack(EInterchangePropertyTracks PropertyTrack); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED1480
		bool SetCustomFrameCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED13A0
		bool SetCustomAnimationPayloadKey(FString InUniqueId, EInterchangeAnimationPayLoadType& InType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED12C0
		bool SetCustomActorDependencyUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED11E0
		bool GetCustomPropertyTrack(EInterchangePropertyTracks& PropertyTrack); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED1100
		bool GetCustomFrameCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED1020
		bool GetCustomAnimationPayloadKey(FInterchangeAnimationPayLoadKey& AnimationPayLoadKey); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED0F40
		bool GetCustomActorDependencyUid(FString& DependencyUid); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED0E60
	};


	// Class InterchangeNodes.InterchangeTransformAnimationTrackNode
	// Inherited from UInterchangeAnimationTrackNode -> UInterchangeAnimationTrackBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x10 (0xE0 - 0xD0)
	class UInterchangeTransformAnimationTrackNode : public UInterchangeAnimationTrackNode	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0xD0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeTransformAnimationTrackNode");
			return ret;
		}

		bool SetCustomUsedChannels(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED1640
		bool GetCustomUsedChannels(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED1560
	};


	// Class InterchangeNodes.InterchangeSkeletalAnimationTrackNode
	// Inherited from UInterchangeAnimationTrackBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x220 (0x290 - 0x70)
	class UInterchangeSkeletalAnimationTrackNode : public UInterchangeAnimationTrackBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x220]; // 0x70(0x220) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode");
			return ret;
		}

		bool SetCustomSkeletonNodeUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED20C0
		bool SetCustomAnimationStopTime(double& StopTime); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED1FE0
		bool SetCustomAnimationStartTime(double& StartTime); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED1F00
		bool SetCustomAnimationSampleRate(double& SampleRate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED1E20
		bool SetAnimationPayloadKeyForSceneNodeUid(FString SceneNodeUid, FString InUniqueId, EInterchangeAnimationPayLoadType& InType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED1D40
		bool SetAnimationPayloadKeyForMorphTargetNodeUid(FString MorphTargetNodeUid, FString InUniqueId, EInterchangeAnimationPayLoadType& InType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED1C60
		void GetSceneNodeAnimationPayloadKeys(TMap& OutSceneNodeAnimationPayloadKeyUids, TMap& OutSceneNodeAnimationPayloadKeyTypes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED1B80
		void GetMorphTargetNodeAnimationPayloadKeys(TMap& OutMorphTargetNodeAnimationPayloadKeyUids, TMap& OutMorphTargetNodeAnimationPayloadKeyTypes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED1AA0
		bool GetCustomSkeletonNodeUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED19C0
		bool GetCustomAnimationStopTime(double& StopTime); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED18E0
		bool GetCustomAnimationStartTime(double& StartTime); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED1800
		bool GetCustomAnimationSampleRate(double& SampleRate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED1720
	};


	// Class InterchangeNodes.InterchangePhysicalCameraNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x40 (0xA0 - 0x60)
	class UInterchangePhysicalCameraNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x60(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangePhysicalCameraNode");
			return ret;
		}

		bool SetCustomSensorWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED27C0
		bool SetCustomSensorHeight(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED26E0
		bool SetCustomFocalLength(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED2600
		bool SetCustomEnableDepthOfField(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED2520
		bool GetCustomSensorWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED2440
		bool GetCustomSensorHeight(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED2360
		bool GetCustomFocalLength(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED2280
		bool GetCustomEnableDepthOfField(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED21A0
	};


	// Class InterchangeNodes.InterchangeStandardCameraNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x60 (0xC0 - 0x60)
	class UInterchangeStandardCameraNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0x60(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeStandardCameraNode");
			return ret;
		}

		bool SetCustomWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED3240
		bool SetCustomProjectionMode(EInterchangeCameraProjectionType& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED3160
		bool SetCustomNearClipPlane(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED3080
		bool SetCustomFieldOfView(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED2FA0
		bool SetCustomFarClipPlane(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED2EC0
		bool SetCustomAspectRatio(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED2DE0
		bool GetCustomWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED2D00
		bool GetCustomProjectionMode(EInterchangeCameraProjectionType& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED2C20
		bool GetCustomNearClipPlane(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED2B40
		bool GetCustomFieldOfView(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED2A60
		bool GetCustomFarClipPlane(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED2980
		bool GetCustomAspectRatio(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED28A0
	};


	// Class InterchangeNodes.InterchangeShaderNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x10 (0x70 - 0x60)
	class UInterchangeShaderNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeShaderNode");
			return ret;
		}

		bool SetCustomShaderType(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED36A0
		bool GetCustomShaderType(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED35C0
		bool AddStringInput(FString InputName, FString AttributeValue, bool bIsAParameter); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED34E0
		bool AddLinearColorInput(FString InputName, FLinearColor& AttributeValue, bool bIsAParameter); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414ED3400
		bool AddFloatInput(FString InputName, float& AttributeValue, bool bIsAParameter); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED3320
	};


	// Class InterchangeNodes.InterchangeDecalMaterialNode
	// Inherited from UInterchangeShaderNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x90 - 0x70)
	class UInterchangeDecalMaterialNode : public UInterchangeShaderNode	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x70(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeDecalMaterialNode");
			return ret;
		}
	};


	// Class InterchangeNodes.InterchangeDecalNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x30 (0x90 - 0x60)
	class UInterchangeDecalNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x60(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeDecalNode");
			return ret;
		}

		bool SetCustomSortOrder(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED3BE0
		bool SetCustomDecalSize(FVector& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414ED3B00
		bool SetCustomDecalMaterialPathName(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED3A20
		bool GetCustomSortOrder(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED3940
		bool GetCustomDecalSize(FVector& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414ED3860
		bool GetCustomDecalMaterialPathName(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED3780
	};


	// Class InterchangeNodes.InterchangeBaseLightNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x40 (0xA0 - 0x60)
	class UInterchangeBaseLightNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x60(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeBaseLightNode");
			return ret;
		}

		bool SetCustomUseTemperature(bool AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED42E0
		bool SetCustomTemperature(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED4200
		bool SetCustomLightColor(FLinearColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414ED4120
		bool SetCustomIntensity(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED4040
		bool GetCustomUseTemperature(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED3F60
		bool GetCustomTemperature(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED3E80
		bool GetCustomLightColor(FLinearColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414ED3DA0
		bool GetCustomIntensity(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED3CC0
	};


	// Class InterchangeNodes.InterchangeLightNode
	// Inherited from UInterchangeBaseLightNode -> UInterchangeBaseNode -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UInterchangeLightNode : public UInterchangeBaseLightNode	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0xA0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeLightNode");
			return ret;
		}

		bool SetCustomUseIESBrightness(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED4D60
		bool SetCustomRotation(FRotator& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414ED4C80
		bool SetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED4BA0
		bool SetCustomIESTexture(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED4AC0
		bool SetCustomIESBrightnessScale(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED49E0
		bool SetCustomAttenuationRadius(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED4900
		bool GetCustomUseIESBrightness(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED4820
		bool GetCustomRotation(FRotator& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414ED4740
		bool GetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED4660
		bool GetCustomIESTexture(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED4580
		bool GetCustomIESBrightnessScale(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED44A0
		bool GetCustomAttenuationRadius(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED43C0
	};


	// Class InterchangeNodes.InterchangePointLightNode
	// Inherited from UInterchangeLightNode -> UInterchangeBaseLightNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x120 - 0x100)
	class UInterchangePointLightNode : public UInterchangeLightNode	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x100(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangePointLightNode");
			return ret;
		}

		bool SetCustomUseInverseSquaredFalloff(bool AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED50E0
		bool SetCustomLightFalloffExponent(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED5000
		bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED4F20
		bool GetCustomLightFalloffExponent(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED4E40
	};


	// Class InterchangeNodes.InterchangeSpotLightNode
	// Inherited from UInterchangePointLightNode -> UInterchangeLightNode -> UInterchangeBaseLightNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x140 - 0x120)
	class UInterchangeSpotLightNode : public UInterchangePointLightNode	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x120(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeSpotLightNode");
			return ret;
		}

		bool SetCustomOuterConeAngle(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED5460
		bool SetCustomInnerConeAngle(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED5380
		bool GetCustomOuterConeAngle(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED52A0
		bool GetCustomInnerConeAngle(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED51C0
	};


	// Class InterchangeNodes.InterchangeRectLightNode
	// Inherited from UInterchangeLightNode -> UInterchangeBaseLightNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x120 - 0x100)
	class UInterchangeRectLightNode : public UInterchangeLightNode	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x100(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeRectLightNode");
			return ret;
		}

		bool SetCustomSourceWidth(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED57E0
		bool SetCustomSourceHeight(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED5700
		bool GetCustomSourceWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED5620
		bool GetCustomSourceHeight(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED5540
	};


	// Class InterchangeNodes.InterchangeDirectionalLightNode
	// Inherited from UInterchangeBaseLightNode -> UInterchangeBaseNode -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UInterchangeDirectionalLightNode : public UInterchangeBaseLightNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeDirectionalLightNode");
			return ret;
		}
	};


	// Class InterchangeNodes.InterchangeTextureNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x40 (0xA0 - 0x60)
	class UInterchangeTextureNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x60(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeTextureNode");
			return ret;
		}

		void SetPayLoadKey(FString PayloadKey); // Flags: Native|Public|BlueprintCallable 0x7FF414ED5FC0
		bool SetCustomSRGB(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED5EE0
		bool SetCustomFilter(EInterchangeTextureFilterMode& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED5E00
		bool SetCustomColorSpace(EInterchangeTextureColorSpace& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED5D20
		bool SetCustombFlipGreenChannel(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED5C40
		bool GetCustomSRGB(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED5B60
		bool GetCustomFilter(EInterchangeTextureFilterMode& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED5A80
		bool GetCustomColorSpace(EInterchangeTextureColorSpace& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED59A0
		bool GetCustombFlipGreenChannel(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED58C0
	};


	// Class InterchangeNodes.InterchangeTexture2DArrayNode
	// Inherited from UInterchangeTextureNode -> UInterchangeBaseNode -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UInterchangeTexture2DArrayNode : public UInterchangeTextureNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeTexture2DArrayNode");
			return ret;
		}
	};


	// Class InterchangeNodes.InterchangeTextureCubeArrayNode
	// Inherited from UInterchangeTextureNode -> UInterchangeBaseNode -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UInterchangeTextureCubeArrayNode : public UInterchangeTextureNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeTextureCubeArrayNode");
			return ret;
		}
	};


	// Class InterchangeNodes.InterchangeTextureCubeNode
	// Inherited from UInterchangeTextureNode -> UInterchangeBaseNode -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UInterchangeTextureCubeNode : public UInterchangeTextureNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeTextureCubeNode");
			return ret;
		}
	};


	// Class InterchangeNodes.InterchangeTextureLightProfileNode
	// Inherited from UInterchangeTextureNode -> UInterchangeBaseNode -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UInterchangeTextureLightProfileNode : public UInterchangeTextureNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeTextureLightProfileNode");
			return ret;
		}
	};


	// Class InterchangeNodes.InterchangeVariantSetNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x40 (0xA0 - 0x60)
	class UInterchangeVariantSetNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x60(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeVariantSetNode");
			return ret;
		}

		bool SetCustomVariantsPayloadKey(FString PayloadKey); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED67A0
		bool SetCustomDisplayText(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED66C0
		bool RemoveCustomDependencyUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED65E0
		bool GetCustomVariantsPayloadKey(FString& PayloadKey); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED6500
		bool GetCustomDisplayText(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED6420
		void GetCustomDependencyUids(TArray& OutDependencyUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED6340
		int32_t GetCustomDependencyUidCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ED6260
		void GetCustomDependencyUid(int32_t Index, FString& OutDependencyUid); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED6180
		bool AddCustomDependencyUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED60A0
	};


	// Class InterchangeNodes.InterchangeSceneVariantSetsNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x80 - 0x60)
	class UInterchangeSceneVariantSetsNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x60(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeSceneVariantSetsNode");
			return ret;
		}

		bool RemoveCustomVariantSetUid(FString VariantUID); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED6C00
		void GetCustomVariantSetUids(TArray& OutVariantUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED6B20
		int32_t GetCustomVariantSetUidCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ED6A40
		void GetCustomVariantSetUid(int32_t Index, FString& OutVariantUid); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED6960
		bool AddCustomVariantSetUid(FString VariantUID); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED6880
	};


	// Class InterchangeNodes.InterchangeVolumeTextureNode
	// Inherited from UInterchangeTextureNode -> UInterchangeBaseNode -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UInterchangeVolumeTextureNode : public UInterchangeTextureNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeVolumeTextureNode");
			return ret;
		}
	};


	// Class InterchangeNodes.InterchangeMaterialInstanceNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x10 (0x70 - 0x60)
	class UInterchangeMaterialInstanceNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeMaterialInstanceNode");
			return ret;
		}

		bool SetCustomParent(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ED74C0
		bool GetVectorParameterValue(FString ParameterName, FLinearColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414ED73E0
		bool GetTextureParameterValue(FString ParameterName, FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED7300
		bool GetStaticSwitchParameterValue(FString ParameterName, bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED7220
		bool GetScalarParameterValue(FString ParameterName, float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED7140
		bool GetCustomParent(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED7060
		bool AddVectorParameterValue(FString ParameterName, FLinearColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414ED6F80
		bool AddTextureParameterValue(FString ParameterName, FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED6EA0
		bool AddStaticSwitchParameterValue(FString ParameterName, bool AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED6DC0
		bool AddScalarParameterValue(FString ParameterName, float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED6CE0
	};


	// Class InterchangeNodes.InterchangeMeshNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x188 (0x1E8 - 0x60)
	class UInterchangeMeshNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x188]; // 0x60(0x188) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeMeshNode");
			return ret;
		}

		bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED9B40
		bool SetSkinnedMesh(bool bIsSkinnedMesh); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED9A60
		bool SetSkeletonDependencyUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED9980
		bool SetSceneInstanceUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED98A0
		void SetPayLoadKey(FString PayloadKey, EInterchangeMeshPayLoadType& PayloadType); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED97C0
		bool SetMorphTargetName(FString MorphTargetName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED96E0
		bool SetMorphTargetDependencyUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED9600
		bool SetMorphTarget(bool bIsMorphTarget); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED9520
		bool SetCustomVertexCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED9440
		bool SetCustomUVCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED9360
		bool SetCustomPolygonCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED9280
		bool SetCustomHasVertexTangent(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED91A0
		bool SetCustomHasVertexNormal(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED90C0
		bool SetCustomHasVertexColor(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED8FE0
		bool SetCustomHasVertexBinormal(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED8F00
		bool SetCustomHasSmoothGroup(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ED8E20
		bool SetCustomBoundingBox(FBox& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414ED8D40
		bool RemoveSlotMaterialDependencyUid(FString SlotName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED8C60
		bool RemoveSkeletonDependencyUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED8B80
		bool RemoveSceneInstanceUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED8AA0
		bool RemoveMorphTargetDependencyUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED89C0
		bool IsSkinnedMesh(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ED88E0
		bool IsMorphTarget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ED8800
		bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED8720
		void GetSlotMaterialDependencies(TMap& OutMaterialDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED8640
		void GetSkeletonDependency(int32_t Index, FString& OutDependency); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED8560
		void GetSkeletonDependencies(TArray& OutDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED8480
		int32_t GetSkeletonDependeciesCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ED83A0
		int32_t GetSceneInstanceUidsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ED82C0
		void GetSceneInstanceUids(TArray& OutDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED81E0
		void GetSceneInstanceUid(int32_t Index, FString& OutDependency); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED8100
		bool GetMorphTargetName(FString& OutMorphTargetName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED8020
		void GetMorphTargetDependency(int32_t Index, FString& OutDependency); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED7F40
		void GetMorphTargetDependencies(TArray& OutDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED7E60
		int32_t GetMorphTargetDependeciesCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ED7D80
		bool GetCustomVertexCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED7CA0
		bool GetCustomUVCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED7BC0
		bool GetCustomPolygonCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED7AE0
		bool GetCustomHasVertexTangent(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED7A00
		bool GetCustomHasVertexNormal(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED7920
		bool GetCustomHasVertexColor(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED7840
		bool GetCustomHasVertexBinormal(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED7760
		bool GetCustomHasSmoothGroup(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED7680
		bool GetCustomBoundingBox(FBox& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414ED75A0
	};


	// Class InterchangeNodes.InterchangeSceneNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x2D0 (0x330 - 0x60)
	class UInterchangeSceneNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0x2D0]; // 0x60(0x2D0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeSceneNode");
			return ret;
		}

		bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EDB4A0
		bool SetMorphTargetCurveWeight(FString MorphTargetName, float& Weight); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDB3C0
		bool SetCustomTimeZeroLocalTransform(UInterchangeBaseNodeContainer BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EDB2E0
		bool SetCustomPivotNodeTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EDB200
		bool SetCustomLocalTransform(UInterchangeBaseNodeContainer BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EDB120
		bool SetCustomGeometricTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EDB040
		bool SetCustomBindPoseLocalTransform(UInterchangeBaseNodeContainer BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EDAF60
		bool SetCustomAssetInstanceUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EDAE80
		bool SetCustomAnimationAssetUidToPlay(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EDADA0
		bool RemoveSpecializedType(FString SpecializedType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EDACC0
		bool RemoveSlotMaterialDependencyUid(FString SlotName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EDABE0
		bool IsSpecializedTypeContains(FString SpecializedType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EDAB00
		void GetSpecializedTypes(TArray& OutSpecializedTypes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDAA20
		int32_t GetSpecializedTypeCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EDA940
		void GetSpecializedType(int32_t Index, FString& OutSpecializedType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDA860
		bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDA780
		void GetSlotMaterialDependencies(TMap& OutMaterialDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDA6A0
		void GetMorphTargetCurveWeights(TMap& OutMorphTargetCurveWeights); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDA5C0
		bool GetCustomTimeZeroLocalTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EDA4E0
		bool GetCustomTimeZeroGlobalTransform(UInterchangeBaseNodeContainer BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EDA400
		bool GetCustomPivotNodeTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EDA320
		bool GetCustomLocalTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EDA240
		bool GetCustomGlobalTransform(UInterchangeBaseNodeContainer BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EDA160
		bool GetCustomGeometricTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EDA080
		bool GetCustomBindPoseLocalTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414ED9FA0
		bool GetCustomBindPoseGlobalTransform(UInterchangeBaseNodeContainer BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414ED9EC0
		bool GetCustomAssetInstanceUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED9DE0
		bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ED9D00
		bool AddSpecializedType(FString SpecializedType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ED9C20
	};


	// Class InterchangeNodes.InterchangeShaderPortsAPI
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangeShaderPortsAPI : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeShaderPortsAPI");
			return ret;
		}

		FString MakeInputValueKey(FString InputName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EDC000
		FString MakeInputParameterKey(FString InputName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EDBF20
		FString MakeInputName(FString InputKey); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EDBE40
		FString MakeInputConnectionKey(FString InputName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EDBD60
		bool IsAParameter(FString AttributeKey); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EDBC80
		bool IsAnInput(FString AttributeKey); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EDBBA0
		void HasParameter(); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EDBAC0
		bool HasInput(UInterchangeBaseNode InterchangeNode, FName& InInputName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EDB9E0
		bool GetInputConnection(UInterchangeBaseNode InterchangeNode, FString InputName, FString& OutExpressionUid, FString& OutputName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EDB900
		void GatherInputs(UInterchangeBaseNode InterchangeNode, TArray& OutInputNames); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EDB820
		bool ConnectOuputToInputByName(UInterchangeBaseNode InterchangeNode, FString InputName, FString ExpressionUid, FString OutputName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EDB740
		bool ConnectOuputToInputByIndex(UInterchangeBaseNode InterchangeNode, FString InputName, FString ExpressionUid, int32_t OutputIndex); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EDB660
		bool ConnectDefaultOuputToInput(UInterchangeBaseNode InterchangeNode, FString InputName, FString ExpressionUid); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EDB580
	};


	// Class InterchangeNodes.InterchangeFunctionCallShaderNode
	// Inherited from UInterchangeShaderNode -> UInterchangeBaseNode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UInterchangeFunctionCallShaderNode : public UInterchangeShaderNode	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x70(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeFunctionCallShaderNode");
			return ret;
		}

		bool SetCustomMaterialFunction(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EDC1C0
		bool GetCustomMaterialFunction(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDC0E0
	};


	// Class InterchangeNodes.InterchangeShaderGraphNode
	// Inherited from UInterchangeShaderNode -> UInterchangeBaseNode -> UObject
	// Size: 0x60 (0xD0 - 0x70)
	class UInterchangeShaderGraphNode : public UInterchangeShaderNode	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0x70(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeShaderGraphNode");
			return ret;
		}

		bool SetCustomTwoSidedTransmission(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDCC40
		bool SetCustomTwoSided(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDCB60
		bool SetCustomScreenSpaceReflections(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDCA80
		bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDC9A0
		bool SetCustomIsAShaderFunction(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDC8C0
		bool SetCustomBlendMode(int32_t AttributeValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EDC7E0
		bool GetCustomTwoSidedTransmission(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDC700
		bool GetCustomTwoSided(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDC620
		bool GetCustomScreenSpaceReflections(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDC540
		bool GetCustomOpacityMaskClipValue(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDC460
		bool GetCustomIsAShaderFunction(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDC380
		bool GetCustomBlendMode(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDC2A0
	};


	// Class InterchangeNodes.InterchangeTexture2DNode
	// Inherited from UInterchangeTextureNode -> UInterchangeBaseNode -> UObject
	// Size: 0x98 (0x138 - 0xA0)
	class UInterchangeTexture2DNode : public UInterchangeTextureNode	
	{
	public:
		unsigned char UnknownData01_1[0x98]; // 0xA0(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeTexture2DNode");
			return ret;
		}

		bool SetCustomWrapV(EInterchangeTextureWrapMode& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDD0A0
		bool SetCustomWrapU(EInterchangeTextureWrapMode& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDCFC0
		TMap GetSourceBlocks(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EDCEE0
		bool GetCustomWrapV(EInterchangeTextureWrapMode& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDCE00
		bool GetCustomWrapU(EInterchangeTextureWrapMode& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDCD20
	};


	// Class InterchangeNodes.InterchangeTextureBlurNode
	// Inherited from UInterchangeTexture2DNode -> UInterchangeTextureNode -> UInterchangeBaseNode -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UInterchangeTextureBlurNode : public UInterchangeTexture2DNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeTextureBlurNode");
			return ret;
		}
	};

}
