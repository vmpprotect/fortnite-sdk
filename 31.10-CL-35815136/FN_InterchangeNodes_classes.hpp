#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InterchangeNodes
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class InterchangeNodes.InterchangeAnimationTrackSetNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x30 (0x90 - 0x60)
	class UInterchangeAnimationTrackSetNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x60(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeAnimationTrackSetNode");
			return ret;
		}

		bool SetCustomFrameRate(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752272DB4(relative to base address)
		bool RemoveCustomAnimationTrackUid(FString AnimationTrackUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522721C8(relative to base address)
		bool GetCustomFrameRate(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752271728(relative to base address)
		void GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522710F0(relative to base address)
		int32_t GetCustomAnimationTrackUidCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522710C8(relative to base address)
		void GetCustomAnimationTrackUid(int32_t Index, FString& OutAnimationTrackUid); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752270FE4(relative to base address)
		bool AddCustomAnimationTrackUid(FString AnimationTrackUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752270C1C(relative to base address)
	};


	// Class InterchangeNodes.InterchangeAnimationTrackBaseNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x10 (0x70 - 0x60)
	class UInterchangeAnimationTrackBaseNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeAnimationTrackBaseNode");
			return ret;
		}

		bool SetCustomCompletionMode(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522728D8(relative to base address)
		bool GetCustomCompletionMode(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227124C(relative to base address)
	};


	// Class InterchangeNodes.InterchangeAnimationTrackSetInstanceNode
	// Inherited from UInterchangeAnimationTrackBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x40 (0xB0 - 0x70)
	class UInterchangeAnimationTrackSetInstanceNode : public UInterchangeAnimationTrackBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x40]; // 0x70(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode");
			return ret;
		}

		bool SetCustomTrackSetDependencyUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752273340(relative to base address)
		bool SetCustomTimeScale(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522732A8(relative to base address)
		bool SetCustomStartFrame(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522731D4(relative to base address)
		bool SetCustomDuration(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522729AC(relative to base address)
		bool GetCustomTrackSetDependencyUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752271CD0(relative to base address)
		bool GetCustomTimeScale(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752271C38(relative to base address)
		bool GetCustomStartFrame(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752271B64(relative to base address)
		bool GetCustomDuration(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752271320(relative to base address)
	};


	// Class InterchangeNodes.InterchangeAnimationTrackNode
	// Inherited from UInterchangeAnimationTrackBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x60 (0xD0 - 0x70)
	class UInterchangeAnimationTrackNode : public UInterchangeAnimationTrackBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x60]; // 0x70(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeAnimationTrackNode");
			return ret;
		}

		bool SetCustomPropertyTrack(EInterchangePropertyTracks PropertyTrack); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752272F7C(relative to base address)
		bool SetCustomFrameCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752272CE0(relative to base address)
		bool SetCustomAnimationPayloadKey(FString InUniqueId, EInterchangeAnimationPayLoadType& InType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75227257C(relative to base address)
		bool SetCustomActorDependencyUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522724E0(relative to base address)
		bool GetCustomPropertyTrack(EInterchangePropertyTracks& PropertyTrack); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522718F0(relative to base address)
		bool GetCustomFrameCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752271654(relative to base address)
		bool GetCustomAnimationPayloadKey(FInterchangeAnimationPayLoadKey& AnimationPayLoadKey); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752270D68(relative to base address)
		bool GetCustomActorDependencyUid(FString& DependencyUid); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752270CBC(relative to base address)
	};


	// Class InterchangeNodes.InterchangeTransformAnimationTrackNode
	// Inherited from UInterchangeAnimationTrackNode -> UInterchangeAnimationTrackBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x10 (0xE0 - 0xD0)
	class UInterchangeTransformAnimationTrackNode : public UInterchangeAnimationTrackNode	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0xD0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeTransformAnimationTrackNode");
			return ret;
		}

		bool SetCustomUsedChannels(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522733DC(relative to base address)
		bool GetCustomUsedChannels(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752271D7C(relative to base address)
	};


	// Class InterchangeNodes.InterchangeSkeletalAnimationTrackNode
	// Inherited from UInterchangeAnimationTrackBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x220 (0x290 - 0x70)
	class UInterchangeSkeletalAnimationTrackNode : public UInterchangeAnimationTrackBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x220]; // 0x70(0x220) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode");
			return ret;
		}

		bool SetCustomSkeletonNodeUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752273138(relative to base address)
		bool SetCustomAnimationStopTime(double& StopTime); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522727A4(relative to base address)
		bool SetCustomAnimationStartTime(double& StartTime); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752272708(relative to base address)
		bool SetCustomAnimationSampleRate(double& SampleRate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75227266C(relative to base address)
		bool SetAnimationPayloadKeyForSceneNodeUid(FString SceneNodeUid, FString InUniqueId, EInterchangeAnimationPayLoadType& InType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522723A4(relative to base address)
		bool SetAnimationPayloadKeyForMorphTargetNodeUid(FString MorphTargetNodeUid, FString InUniqueId, EInterchangeAnimationPayLoadType& InType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752272268(relative to base address)
		void GetSceneNodeAnimationPayloadKeys(TMap<FString, FString>& OutSceneNodeAnimationPayloadKeyUids, TMap<FString, char>& OutSceneNodeAnimationPayloadKeyTypes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752272058(relative to base address)
		void GetMorphTargetNodeAnimationPayloadKeys(TMap<FString, FString>& OutMorphTargetNodeAnimationPayloadKeyUids, TMap<FString, char>& OutMorphTargetNodeAnimationPayloadKeyTypes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752271EE8(relative to base address)
		bool GetCustomSkeletonNodeUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752271AB8(relative to base address)
		bool GetCustomAnimationStopTime(double& StopTime); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752270F48(relative to base address)
		bool GetCustomAnimationStartTime(double& StartTime); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752270EAC(relative to base address)
		bool GetCustomAnimationSampleRate(double& SampleRate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752270E10(relative to base address)
	};


	// Class InterchangeNodes.InterchangePhysicalCameraNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x40 (0xA0 - 0x60)
	class UInterchangePhysicalCameraNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x40]; // 0x60(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangePhysicalCameraNode");
			return ret;
		}

		bool SetCustomSensorWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522730A0(relative to base address)
		bool SetCustomSensorHeight(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752273008(relative to base address)
		bool SetCustomFocalLength(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752272C48(relative to base address)
		bool SetCustomEnableDepthOfField(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752272A80(relative to base address)
		bool GetCustomSensorWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752271A20(relative to base address)
		bool GetCustomSensorHeight(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752271988(relative to base address)
		bool GetCustomFocalLength(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522715BC(relative to base address)
		bool GetCustomEnableDepthOfField(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522713F4(relative to base address)
	};


	// Class InterchangeNodes.InterchangeStandardCameraNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x60 (0xC0 - 0x60)
	class UInterchangeStandardCameraNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x60]; // 0x60(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeStandardCameraNode");
			return ret;
		}

		bool SetCustomWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522734B0(relative to base address)
		bool SetCustomProjectionMode(EInterchangeCameraProjectionType& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752272EE4(relative to base address)
		bool SetCustomNearClipPlane(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752272E4C(relative to base address)
		bool SetCustomFieldOfView(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752272BB0(relative to base address)
		bool SetCustomFarClipPlane(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752272B18(relative to base address)
		bool SetCustomAspectRatio(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752272840(relative to base address)
		bool GetCustomWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752271E50(relative to base address)
		bool GetCustomProjectionMode(EInterchangeCameraProjectionType& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752271858(relative to base address)
		bool GetCustomNearClipPlane(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522717C0(relative to base address)
		bool GetCustomFieldOfView(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752271524(relative to base address)
		bool GetCustomFarClipPlane(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227148C(relative to base address)
		bool GetCustomAspectRatio(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522711B4(relative to base address)
	};


	// Class InterchangeNodes.InterchangeShaderNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x10 (0x70 - 0x60)
	class UInterchangeShaderNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeShaderNode");
			return ret;
		}

		bool SetCustomShaderType(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752290F40(relative to base address)
		bool GetCustomShaderType(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228DA6C(relative to base address)
		bool AddStringInput(FString InputName, FString AttributeValue, bool bIsAParameter); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75228BF2C(relative to base address)
		bool AddLinearColorInput(FString InputName, FLinearColor& AttributeValue, bool bIsAParameter); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75228BAF4(relative to base address)
		bool AddFloatInput(FString InputName, float& AttributeValue, bool bIsAParameter); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75228B984(relative to base address)
	};


	// Class InterchangeNodes.InterchangeDecalMaterialNode
	// Inherited from UInterchangeShaderNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x90 - 0x70)
	class UInterchangeDecalMaterialNode : public UInterchangeShaderNode	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x70(0x20) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x30]; // 0x60(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeDecalNode");
			return ret;
		}

		bool SetCustomSortOrder(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75227B488(relative to base address)
		bool SetCustomDecalSize(FVector& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75227AB74(relative to base address)
		bool SetCustomDecalMaterialPathName(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227AAD8(relative to base address)
		bool GetCustomSortOrder(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227A368(relative to base address)
		bool GetCustomDecalSize(FVector& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227993C(relative to base address)
		bool GetCustomDecalMaterialPathName(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752279890(relative to base address)
	};


	// Class InterchangeNodes.InterchangeBaseLightNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x40 (0xA0 - 0x60)
	class UInterchangeBaseLightNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x40]; // 0x60(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeBaseLightNode");
			return ret;
		}

		bool SetCustomUseTemperature(bool AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227B8B4(relative to base address)
		bool SetCustomTemperature(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227B67C(relative to base address)
		bool SetCustomLightColor(FLinearColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75227B0E8(relative to base address)
		bool SetCustomIntensity(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227AFC0(relative to base address)
		bool GetCustomUseTemperature(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227A734(relative to base address)
		bool GetCustomTemperature(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227A56C(relative to base address)
		bool GetCustomLightColor(FLinearColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227A038(relative to base address)
		bool GetCustomIntensity(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752279F08(relative to base address)
	};


	// Class InterchangeNodes.InterchangeLightNode
	// Inherited from UInterchangeBaseLightNode -> UInterchangeBaseNode -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UInterchangeLightNode : public UInterchangeBaseLightNode	
	{
	public:
		unsigned char UnknownData00_1[0x60]; // 0xA0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeLightNode");
			return ret;
		}

		bool SetCustomUseIESBrightness(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75227B70C(relative to base address)
		bool SetCustomRotation(FRotator& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75227B2DC(relative to base address)
		bool SetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75227B050(relative to base address)
		bool SetCustomIESTexture(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227AE94(relative to base address)
		bool SetCustomIESBrightnessScale(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75227AD7C(relative to base address)
		bool SetCustomAttenuationRadius(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227A9B0(relative to base address)
		bool GetCustomUseIESBrightness(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227A604(relative to base address)
		bool GetCustomRotation(FRotator& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227A23C(relative to base address)
		bool GetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752279FA0(relative to base address)
		bool GetCustomIESTexture(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752279DC4(relative to base address)
		bool GetCustomIESBrightnessScale(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752279D2C(relative to base address)
		bool GetCustomAttenuationRadius(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752279760(relative to base address)
	};


	// Class InterchangeNodes.InterchangePointLightNode
	// Inherited from UInterchangeLightNode -> UInterchangeBaseLightNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x120 - 0x100)
	class UInterchangePointLightNode : public UInterchangeLightNode	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x100(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangePointLightNode");
			return ret;
		}

		bool SetCustomUseInverseSquaredFalloff(bool AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227B824(relative to base address)
		bool SetCustomLightFalloffExponent(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227B1BC(relative to base address)
		bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227A69C(relative to base address)
		bool GetCustomLightFalloffExponent(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227A10C(relative to base address)
	};


	// Class InterchangeNodes.InterchangeSpotLightNode
	// Inherited from UInterchangePointLightNode -> UInterchangeLightNode -> UInterchangeBaseLightNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x140 - 0x120)
	class UInterchangeSpotLightNode : public UInterchangePointLightNode	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x120(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeSpotLightNode");
			return ret;
		}

		bool SetCustomOuterConeAngle(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227B24C(relative to base address)
		bool SetCustomInnerConeAngle(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227AF30(relative to base address)
		bool GetCustomOuterConeAngle(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227A1A4(relative to base address)
		bool GetCustomInnerConeAngle(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752279E70(relative to base address)
	};


	// Class InterchangeNodes.InterchangeRectLightNode
	// Inherited from UInterchangeLightNode -> UInterchangeBaseLightNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x120 - 0x100)
	class UInterchangeRectLightNode : public UInterchangeLightNode	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x100(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeRectLightNode");
			return ret;
		}

		bool SetCustomSourceWidth(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227B5EC(relative to base address)
		bool SetCustomSourceHeight(float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227B55C(relative to base address)
		bool GetCustomSourceWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227A4D4(relative to base address)
		bool GetCustomSourceHeight(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227A43C(relative to base address)
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
		unsigned char UnknownData00_1[0x40]; // 0x60(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeTextureNode");
			return ret;
		}

		void SetPayLoadKey(FString PayloadKey); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227BA78(relative to base address)
		bool SetCustomSRGB(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75227B3F0(relative to base address)
		bool SetCustomFilter(EInterchangeTextureFilterMode& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75227ACE4(relative to base address)
		bool SetCustomColorSpace(EInterchangeTextureColorSpace& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75227AA40(relative to base address)
		bool SetCustombFlipGreenChannel(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75227B9E0(relative to base address)
		bool GetCustomSRGB(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227A2D0(relative to base address)
		bool GetCustomFilter(EInterchangeTextureFilterMode& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752279C94(relative to base address)
		bool GetCustomColorSpace(EInterchangeTextureColorSpace& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522797F8(relative to base address)
		bool GetCustombFlipGreenChannel(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227A878(relative to base address)
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
		unsigned char UnknownData00_1[0x40]; // 0x60(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeVariantSetNode");
			return ret;
		}

		bool SetCustomVariantsPayloadKey(FString PayloadKey); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227B944(relative to base address)
		bool SetCustomDisplayText(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227AC48(relative to base address)
		bool RemoveCustomDependencyUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75227A910(relative to base address)
		bool GetCustomVariantsPayloadKey(FString& PayloadKey); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75227A7CC(relative to base address)
		bool GetCustomDisplayText(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752279BE8(relative to base address)
		void GetCustomDependencyUids(TArray<FString>& OutDependencyUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752279B20(relative to base address)
		int32_t GetCustomDependencyUidCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752279AF8(relative to base address)
		void GetCustomDependencyUid(int32_t Index, FString& OutDependencyUid); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752279A10(relative to base address)
		bool AddCustomDependencyUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522796C0(relative to base address)
	};


	// Class InterchangeNodes.InterchangeSceneVariantSetsNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x80 - 0x60)
	class UInterchangeSceneVariantSetsNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x60(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeSceneVariantSetsNode");
			return ret;
		}

		bool RemoveCustomVariantSetUid(FString VariantUID); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752254054(relative to base address)
		void GetCustomVariantSetUids(TArray<FString>& OutVariantUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75225229C(relative to base address)
		int32_t GetCustomVariantSetUidCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252360(relative to base address)
		void GetCustomVariantSetUid(int32_t Index, FString& OutVariantUid); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252388(relative to base address)
		bool AddCustomVariantSetUid(FString VariantUID); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522502B0(relative to base address)
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
		unsigned char UnknownData00_1[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeMaterialInstanceNode");
			return ret;
		}

		bool SetCustomParent(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752290C34(relative to base address)
		bool GetVectorParameterValue(FString ParameterName, FLinearColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228F498(relative to base address)
		bool GetTextureParameterValue(FString ParameterName, FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228F370(relative to base address)
		bool GetStaticSwitchParameterValue(FString ParameterName, bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228F260(relative to base address)
		bool GetScalarParameterValue(FString ParameterName, float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228E788(relative to base address)
		bool GetCustomParent(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228D750(relative to base address)
		bool AddVectorParameterValue(FString ParameterName, FLinearColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75228C178(relative to base address)
		bool AddTextureParameterValue(FString ParameterName, FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75228C060(relative to base address)
		bool AddStaticSwitchParameterValue(FString ParameterName, bool AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75228BE30(relative to base address)
		bool AddScalarParameterValue(FString ParameterName, float AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75228BCAC(relative to base address)
	};


	// Class InterchangeNodes.InterchangeMeshNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x188 (0x1E8 - 0x60)
	class UInterchangeMeshNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x188]; // 0x60(0x188) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeMeshNode");
			return ret;
		}

		bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752291B9C(relative to base address)
		bool SetSkinnedMesh(bool bIsSkinnedMesh); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752291B0C(relative to base address)
		bool SetSkeletonDependencyUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752291A6C(relative to base address)
		bool SetSceneInstanceUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522919CC(relative to base address)
		void SetPayLoadKey(FString PayloadKey, EInterchangeMeshPayLoadType& PayloadType); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522918E4(relative to base address)
		bool SetMorphTargetName(FString MorphTargetName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752291848(relative to base address)
		bool SetMorphTargetDependencyUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522917A8(relative to base address)
		bool SetMorphTarget(bool bIsMorphTarget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522915A8(relative to base address)
		bool SetCustomVertexCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522913A4(relative to base address)
		bool SetCustomUVCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522912D0(relative to base address)
		bool SetCustomPolygonCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752290DD4(relative to base address)
		bool SetCustomHasVertexTangent(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75229078C(relative to base address)
		bool SetCustomHasVertexNormal(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522906F4(relative to base address)
		bool SetCustomHasVertexColor(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75229065C(relative to base address)
		bool SetCustomHasVertexBinormal(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522905C4(relative to base address)
		bool SetCustomHasSmoothGroup(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75229052C(relative to base address)
		bool SetCustomBoundingBox(FBox& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75229038C(relative to base address)
		bool RemoveSlotMaterialDependencyUid(FString SlotName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75228FE24(relative to base address)
		bool RemoveSkeletonDependencyUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75228FD84(relative to base address)
		bool RemoveSceneInstanceUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75228FCE4(relative to base address)
		bool RemoveMorphTargetDependencyUid(FString DependencyUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75228FC44(relative to base address)
		bool IsSkinnedMesh(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228F8D4(relative to base address)
		bool IsMorphTarget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228F8B0(relative to base address)
		bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228EDF0(relative to base address)
		void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228EC28(relative to base address)
		void GetSkeletonDependency(int32_t Index, FString& OutDependency); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228EB40(relative to base address)
		void GetSkeletonDependencies(TArray<FString>& OutDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228EA78(relative to base address)
		int32_t GetSkeletonDependeciesCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228EA54(relative to base address)
		int32_t GetSceneInstanceUidsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228EA28(relative to base address)
		void GetSceneInstanceUids(TArray<FString>& OutDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228E960(relative to base address)
		void GetSceneInstanceUid(int32_t Index, FString& OutDependency); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228E878(relative to base address)
		bool GetMorphTargetName(FString& OutMorphTargetName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228E6DC(relative to base address)
		void GetMorphTargetDependency(int32_t Index, FString& OutDependency); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228E5F4(relative to base address)
		void GetMorphTargetDependencies(TArray<FString>& OutDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228E52C(relative to base address)
		int32_t GetMorphTargetDependeciesCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228E508(relative to base address)
		bool GetCustomVertexCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228E084(relative to base address)
		bool GetCustomUVCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228DFB0(relative to base address)
		bool GetCustomPolygonCount(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228D900(relative to base address)
		bool GetCustomHasVertexTangent(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228D3D8(relative to base address)
		bool GetCustomHasVertexNormal(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228D340(relative to base address)
		bool GetCustomHasVertexColor(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228D2A8(relative to base address)
		bool GetCustomHasVertexBinormal(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228D210(relative to base address)
		bool GetCustomHasSmoothGroup(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228D178(relative to base address)
		bool GetCustomBoundingBox(FBox& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228CD74(relative to base address)
	};


	// Class InterchangeNodes.InterchangeSceneNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0x2D0 (0x330 - 0x60)
	class UInterchangeSceneNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x2D0]; // 0x60(0x2D0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeSceneNode");
			return ret;
		}

		bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752291C9C(relative to base address)
		bool SetMorphTargetCurveWeight(FString MorphTargetName, float& Weight); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752291638(relative to base address)
		bool SetCustomTimeZeroLocalTransform(UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF752290FDC(relative to base address)
		bool SetCustomPivotNodeTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF752290CD0(relative to base address)
		bool SetCustomLocalTransform(UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522908BC(relative to base address)
		bool SetCustomGeometricTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF752290428(relative to base address)
		bool SetCustomBindPoseLocalTransform(UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75229013C(relative to base address)
		bool SetCustomAssetInstanceUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522900A0(relative to base address)
		bool SetCustomAnimationAssetUidToPlay(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752290004(relative to base address)
		bool RemoveSpecializedType(FString SpecializedType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75228FF64(relative to base address)
		bool RemoveSlotMaterialDependencyUid(FString SlotName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75228FEC4(relative to base address)
		bool IsSpecializedTypeContains(FString SpecializedType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228F8F8(relative to base address)
		void GetSpecializedTypes(TArray<FString>& OutSpecializedTypes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228F198(relative to base address)
		int32_t GetSpecializedTypeCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228F174(relative to base address)
		void GetSpecializedType(int32_t Index, FString& OutSpecializedType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228F08C(relative to base address)
		bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228EF00(relative to base address)
		void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228ED0C(relative to base address)
		void GetMorphTargetCurveWeights(TMap<FString, float>& OutMorphTargetCurveWeights); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228E424(relative to base address)
		bool GetCustomTimeZeroLocalTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228DD7C(relative to base address)
		bool GetCustomTimeZeroGlobalTransform(UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228DB18(relative to base address)
		bool GetCustomPivotNodeTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228D7FC(relative to base address)
		bool GetCustomLocalTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228D508(relative to base address)
		bool GetCustomGlobalTransform(UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228CF14(relative to base address)
		bool GetCustomGeometricTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228CE10(relative to base address)
		bool GetCustomBindPoseLocalTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228CB9C(relative to base address)
		bool GetCustomBindPoseGlobalTransform(UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228C938(relative to base address)
		bool GetCustomAssetInstanceUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228C88C(relative to base address)
		bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228C7E0(relative to base address)
		bool AddSpecializedType(FString SpecializedType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75228BD90(relative to base address)
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

		FString MakeInputValueKey(FString InputName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75228FB98(relative to base address)
		FString MakeInputParameterKey(FString InputName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75228FAEC(relative to base address)
		FString MakeInputName(FString InputKey); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75228FA40(relative to base address)
		FString MakeInputConnectionKey(FString InputName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75228F994(relative to base address)
		bool IsAParameter(FString AttributeKey); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75228F790(relative to base address)
		bool IsAnInput(FString AttributeKey); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75228F820(relative to base address)
		bool HasParameter(UInterchangeBaseNode* InterchangeNode, FName& InInputName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75228F6C0(relative to base address)
		bool HasInput(UInterchangeBaseNode* InterchangeNode, FName& InInputName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75228F5F0(relative to base address)
		bool GetInputConnection(UInterchangeBaseNode* InterchangeNode, FString InputName, FString& OutExpressionUid, FString& OutputName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75228E288(relative to base address)
		void GatherInputs(UInterchangeBaseNode* InterchangeNode, TArray<FString>& OutInputNames); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75228C6DC(relative to base address)
		bool ConnectOuputToInputByName(UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid, FString OutputName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75228C55C(relative to base address)
		bool ConnectOuputToInputByIndex(UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid, int32_t OutputIndex); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75228C400(relative to base address)
		bool ConnectDefaultOuputToInput(UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75228C2D0(relative to base address)
	};


	// Class InterchangeNodes.InterchangeFunctionCallShaderNode
	// Inherited from UInterchangeShaderNode -> UInterchangeBaseNode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UInterchangeFunctionCallShaderNode : public UInterchangeShaderNode	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x70(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeFunctionCallShaderNode");
			return ret;
		}

		bool SetCustomMaterialFunction(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752290A80(relative to base address)
		bool GetCustomMaterialFunction(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228D60C(relative to base address)
	};


	// Class InterchangeNodes.InterchangeShaderGraphNode
	// Inherited from UInterchangeShaderNode -> UInterchangeBaseNode -> UObject
	// Size: 0x60 (0xD0 - 0x70)
	class UInterchangeShaderGraphNode : public UInterchangeShaderNode	
	{
	public:
		unsigned char UnknownData00_1[0x60]; // 0x70(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeShaderGraphNode");
			return ret;
		}

		bool SetCustomTwoSidedTransmission(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752291238(relative to base address)
		bool SetCustomTwoSided(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522911A0(relative to base address)
		bool SetCustomScreenSpaceReflections(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752290EA8(relative to base address)
		bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752290B1C(relative to base address)
		bool SetCustomIsAShaderFunction(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752290824(relative to base address)
		bool SetCustomBlendMode(int32_t AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752290300(relative to base address)
		bool GetCustomTwoSidedTransmission(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228DF18(relative to base address)
		bool GetCustomTwoSided(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228DE80(relative to base address)
		bool GetCustomScreenSpaceReflections(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228D9D4(relative to base address)
		bool GetCustomOpacityMaskClipValue(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228D6B8(relative to base address)
		bool GetCustomIsAShaderFunction(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228D470(relative to base address)
		bool GetCustomBlendMode(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228CCA0(relative to base address)
	};


	// Class InterchangeNodes.InterchangeTexture2DNode
	// Inherited from UInterchangeTextureNode -> UInterchangeBaseNode -> UObject
	// Size: 0x98 (0x138 - 0xA0)
	class UInterchangeTexture2DNode : public UInterchangeTextureNode	
	{
	public:
		unsigned char UnknownData00_1[0x98]; // 0xA0(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeNodes.InterchangeTexture2DNode");
			return ret;
		}

		bool SetCustomWrapV(EInterchangeTextureWrapMode& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752291510(relative to base address)
		bool SetCustomWrapU(EInterchangeTextureWrapMode& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752291478(relative to base address)
		TMap GetSourceBlocks(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228F010(relative to base address)
		bool GetCustomWrapV(EInterchangeTextureWrapMode& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228E1F0(relative to base address)
		bool GetCustomWrapU(EInterchangeTextureWrapMode& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228E158(relative to base address)
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
