#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InterchangeFactoryNodes
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class InterchangeFactoryNodes.InterchangeActorFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x40 (0x180 - 0x140)
	class UInterchangeActorFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x40]; // 0x140(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeActorFactoryNode");
			return ret;
		}

		bool SetCustomMobility(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F9C9C(relative to base address)
		bool SetCustomLocalTransform(FTransform& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522F87D4(relative to base address)
		bool SetCustomGlobalTransform(FTransform& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522F87D4(relative to base address)
		bool SetCustomActorClassName(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F5830(relative to base address)
		bool GetCustomMobility(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F03F4(relative to base address)
		bool GetCustomLocalTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF424(relative to base address)
		bool GetCustomGlobalTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF424(relative to base address)
		bool GetCustomActorClassName(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ED484(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode
	// Inherited from UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x40 (0x1C0 - 0x180)
	class UInterchangePhysicalCameraFactoryNode : public UInterchangeActorFactoryNode	
	{
	public:
		unsigned char UnknownData00_1[0x40]; // 0x180(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode");
			return ret;
		}

		bool SetCustomSensorWidth(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522B99B4(relative to base address)
		bool SetCustomSensorHeight(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522B9894(relative to base address)
		bool SetCustomFocusMethod(ECameraFocusMethod& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522B8B98(relative to base address)
		bool SetCustomFocalLength(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522B8A78(relative to base address)
		bool GetCustomSensorWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7DF8(relative to base address)
		bool GetCustomSensorHeight(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7D60(relative to base address)
		bool GetCustomFocusMethod(ECameraFocusMethod& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B74F0(relative to base address)
		bool GetCustomFocalLength(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7458(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode
	// Inherited from UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x60 (0x1E0 - 0x180)
	class UInterchangeStandardCameraFactoryNode : public UInterchangeActorFactoryNode	
	{
	public:
		unsigned char UnknownData00_1[0x60]; // 0x180(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode");
			return ret;
		}

		bool SetCustomWidth(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522BA14C(relative to base address)
		bool SetCustomProjectionMode(TEnumAsByte<ECameraProjectionMode>& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522B9660(relative to base address)
		bool SetCustomNearClipPlane(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522B93DC(relative to base address)
		bool SetCustomFieldOfView(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522B8958(relative to base address)
		bool SetCustomFarClipPlane(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522B8838(relative to base address)
		bool SetCustomAspectRatio(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522B83B4(relative to base address)
		bool GetCustomWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B82F4(relative to base address)
		bool GetCustomProjectionMode(TEnumAsByte<ECameraProjectionMode>& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7C34(relative to base address)
		bool GetCustomNearClipPlane(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7A58(relative to base address)
		bool GetCustomFieldOfView(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B73C0(relative to base address)
		bool GetCustomFarClipPlane(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7328(relative to base address)
		bool GetCustomAspectRatio(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B6FCC(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeDecalActorFactoryNode
	// Inherited from UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x30 (0x1B0 - 0x180)
	class UInterchangeDecalActorFactoryNode : public UInterchangeActorFactoryNode	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x180(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode");
			return ret;
		}

		bool SetCustomSortOrder(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522B9AD4(relative to base address)
		bool SetCustomDecalSize(FVector& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522B8638(relative to base address)
		bool SetCustomDecalMaterialPathName(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522B859C(relative to base address)
		UClass GetObjectClass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B838C(relative to base address)
		bool GetCustomSortOrder(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7E90(relative to base address)
		bool GetCustomDecalSize(FVector& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B71A8(relative to base address)
		bool GetCustomDecalMaterialPathName(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B70FC(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x10 (0x150 - 0x140)
	class UInterchangeBaseMaterialFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x140(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode");
			return ret;
		}

		bool SetCustomIsMaterialImportEnabled(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F8EC0(relative to base address)
		bool GetCustomIsMaterialImportEnabled(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EFAA0(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode
	// Inherited from UInterchangeBaseMaterialFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x170 - 0x150)
	class UInterchangeDecalMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x150(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode");
			return ret;
		}

		bool SetCustomNormalTexturePath(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522B94FC(relative to base address)
		bool SetCustomDiffuseTexturePath(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522B879C(relative to base address)
		UClass GetObjectClass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B838C(relative to base address)
		bool GetCustomNormalTexturePath(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7AF0(relative to base address)
		bool GetCustomDiffuseTexturePath(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B727C(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x30 (0x170 - 0x140)
	class UInterchangeLevelSequenceFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x140(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode");
			return ret;
		}

		bool SetCustomFrameRate(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522B8D08(relative to base address)
		bool RemoveCustomAnimationTrackUid(FString AnimationTrackUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75228FCE4(relative to base address)
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B838C(relative to base address)
		bool GetCustomFrameRate(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7588(relative to base address)
		void GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228E960(relative to base address)
		int32_t GetCustomAnimationTrackUidCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228EA28(relative to base address)
		void GetCustomAnimationTrackUid(int32_t Index, FString& OutAnimationTrackUid); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228E878(relative to base address)
		bool AddCustomAnimationTrackUid(FString AnimationTrackUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522919CC(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeBaseLightFactoryNode
	// Inherited from UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x40 (0x1C0 - 0x180)
	class UInterchangeBaseLightFactoryNode : public UInterchangeActorFactoryNode	
	{
	public:
		unsigned char UnknownData00_1[0x40]; // 0x180(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode");
			return ret;
		}

		bool SetCustomUseTemperature(bool AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522BA074(relative to base address)
		bool SetCustomTemperature(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522B9DBC(relative to base address)
		bool SetCustomLightColor(FColor& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522B91A8(relative to base address)
		bool SetCustomIntensity(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522B901C(relative to base address)
		bool GetCustomUseTemperature(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B825C(relative to base address)
		bool GetCustomTemperature(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B8094(relative to base address)
		bool GetCustomLightColor(FColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B792C(relative to base address)
		bool GetCustomIntensity(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B77FC(relative to base address)
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
		unsigned char UnknownData00_1[0x60]; // 0x1C0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeLightFactoryNode");
			return ret;
		}

		bool SetCustomUseIESBrightness(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522B9E84(relative to base address)
		bool SetCustomRotation(FRotator& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522B9780(relative to base address)
		bool SetCustomIntensityUnits(ELightUnits AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522B90E4(relative to base address)
		bool SetCustomIESTexture(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522B8EB8(relative to base address)
		bool SetCustomIESBrightnessScale(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522B8DA0(relative to base address)
		bool SetCustomAttenuationRadius(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522B84D4(relative to base address)
		bool GetCustomUseIESBrightness(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B812C(relative to base address)
		bool GetCustomRotation(FRotator& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7CCC(relative to base address)
		bool GetCustomIntensityUnits(ELightUnits& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7894(relative to base address)
		bool GetCustomIESTexture(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B76B8(relative to base address)
		bool GetCustomIESBrightnessScale(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7620(relative to base address)
		bool GetCustomAttenuationRadius(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7064(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeRectLightFactoryNode
	// Inherited from UInterchangeLightFactoryNode -> UInterchangeBaseLightFactoryNode -> UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x240 - 0x220)
	class UInterchangeRectLightFactoryNode : public UInterchangeLightFactoryNode	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x220(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode");
			return ret;
		}

		bool SetCustomSourceWidth(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522B9CF4(relative to base address)
		bool SetCustomSourceHeight(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522B9C2C(relative to base address)
		bool GetCustomSourceWidth(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7FFC(relative to base address)
		bool GetCustomSourceHeight(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7F64(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangePointLightFactoryNode
	// Inherited from UInterchangeLightFactoryNode -> UInterchangeBaseLightFactoryNode -> UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x240 - 0x220)
	class UInterchangePointLightFactoryNode : public UInterchangeLightFactoryNode	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x220(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode");
			return ret;
		}

		bool SetCustomUseInverseSquaredFalloff(bool AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522B9F9C(relative to base address)
		bool SetCustomLightFalloffExponent(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522B9314(relative to base address)
		bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B81C4(relative to base address)
		bool GetCustomLightFalloffExponent(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B79C0(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeSpotLightFactoryNode
	// Inherited from UInterchangePointLightFactoryNode -> UInterchangeLightFactoryNode -> UInterchangeBaseLightFactoryNode -> UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x260 - 0x240)
	class UInterchangeSpotLightFactoryNode : public UInterchangePointLightFactoryNode	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x240(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode");
			return ret;
		}

		bool SetCustomOuterConeAngle(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522B9598(relative to base address)
		bool SetCustomInnerConeAngle(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522B8F54(relative to base address)
		bool GetCustomOuterConeAngle(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7B9C(relative to base address)
		bool GetCustomInnerConeAngle(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B7764(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x30 (0x170 - 0x140)
	class UInterchangePhysicsAssetFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x140(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode");
			return ret;
		}

		bool SetCustomSkeletalMeshUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522FAD80(relative to base address)
		void InitializePhysicsAssetNode(FString UniqueID, FString DisplayLabel, FString InAssetClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F433C(relative to base address)
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B838C(relative to base address)
		bool GetCustomSkeletalMeshUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0EF8(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x160 - 0x140)
	class UInterchangeSceneVariantSetsFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x140(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode");
			return ret;
		}

		bool RemoveCustomVariantSetUid(FString VariantUID); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F4E44(relative to base address)
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B838C(relative to base address)
		void GetCustomVariantSetUids(TArray<FString>& OutVariantUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1CB0(relative to base address)
		int32_t GetCustomVariantSetUidCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1C84(relative to base address)
		void GetCustomVariantSetUid(int32_t Index, FString& OutVariantUid); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1B9C(relative to base address)
		bool AddCustomVariantSetUid(FString VariantUID); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522E9D0C(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeSkeletonFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x50 (0x190 - 0x140)
	class UInterchangeSkeletonFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x140(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode");
			return ret;
		}

		bool SetCustomUseTimeZeroForBindPose(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FBFD0(relative to base address)
		bool SetCustomSkeletalMeshFactoryNodeUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522FACE4(relative to base address)
		bool SetCustomRootJointUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522FA970(relative to base address)
		void InitializeSkeletonNode(FString UniqueID, FString DisplayLabel, FString InAssetClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F45BC(relative to base address)
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B838C(relative to base address)
		bool GetCustomUseTimeZeroForBindPose(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1B04(relative to base address)
		bool GetCustomSkeletalMeshFactoryNodeUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0E4C(relative to base address)
		bool GetCustomRootJointUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0BD8(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeTextureFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x2A0 (0x3E0 - 0x140)
	class UInterchangeTextureFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x2A0]; // 0x140(0x2A0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode");
			return ret;
		}

		bool SetCustomVirtualTextureStreaming(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FC22C(relative to base address)
		bool SetCustomTranslatedTextureNodeUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522FB754(relative to base address)
		bool SetCustomSRGB(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FAA0C(relative to base address)
		bool SetCustomPreferCompressedSourceData(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FA3C0(relative to base address)
		bool SetCustomPowerOfTwoMode(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FA2A8(relative to base address)
		bool SetCustomPaddingColor(FColor& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522F9FF4(relative to base address)
		bool SetCustomMipLoadOptions(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F9B7C(relative to base address)
		bool SetCustomMipGenSettings(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F9A64(relative to base address)
		bool SetCustomMaxTextureSize(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F9724(relative to base address)
		bool SetCustomLossyCompressionAmount(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F9380(relative to base address)
		bool SetCustomLODGroup(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F9260(relative to base address)
		bool SetCustomLODBias(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F8FF0(relative to base address)
		bool SetCustomFilter(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F8240(relative to base address)
		bool SetCustomDownscaleOptions(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F7F2C(relative to base address)
		bool SetCustomDownscale(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F7E0C(relative to base address)
		bool SetCustomDeferCompression(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F77E4(relative to base address)
		bool SetCustomCompressionSettings(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F750C(relative to base address)
		bool SetCustomCompressionQuality(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F73F4(relative to base address)
		bool SetCustomCompressionNoAlpha(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F72DC(relative to base address)
		bool SetCustomCompositeTextureMode(char& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F71C4(relative to base address)
		bool SetCustomCompositePower(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F70AC(relative to base address)
		bool SetCustomColorSpace(ETextureColorSpace AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F6FF0(relative to base address)
		bool SetCustomChromaKeyThreshold(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F6ED8(relative to base address)
		bool SetCustomChromaKeyColor(FColor& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522F6D74(relative to base address)
		bool SetCustombUseLegacyGamma(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FC7AC(relative to base address)
		bool SetCustombPreserveBorder(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FC694(relative to base address)
		bool SetCustombFlipGreenChannel(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FC57C(relative to base address)
		bool SetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FC464(relative to base address)
		bool SetCustombChromaKeyTexture(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FC34C(relative to base address)
		bool SetCustomAlphaCoverageThresholds(FVector4& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522F6500(relative to base address)
		bool SetCustomAllowNonPowerOfTwo(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F6468(relative to base address)
		bool SetCustomAdjustVibrance(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F6350(relative to base address)
		bool SetCustomAdjustSaturation(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F6238(relative to base address)
		bool SetCustomAdjustRGBCurve(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F6120(relative to base address)
		bool SetCustomAdjustMinAlpha(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F6008(relative to base address)
		bool SetCustomAdjustMaxAlpha(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F5EF0(relative to base address)
		bool SetCustomAdjustHue(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F5DD8(relative to base address)
		bool SetCustomAdjustBrightnessCurve(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F5CC0(relative to base address)
		bool SetCustomAdjustBrightness(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F5BA8(relative to base address)
		void InitializeTextureNode(FString UniqueID, FString DisplayLabel, FString InAssetName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F483C(relative to base address)
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B838C(relative to base address)
		bool GetCustomVirtualTextureStreaming(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1F3C(relative to base address)
		bool GetCustomTranslatedTextureNodeUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1630(relative to base address)
		bool GetCustomSRGB(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0C84(relative to base address)
		bool GetCustomPreferCompressedSourceData(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0848(relative to base address)
		bool GetCustomPowerOfTwoMode(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F07B0(relative to base address)
		bool GetCustomPaddingColor(FColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F05BC(relative to base address)
		bool GetCustomMipLoadOptions(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F035C(relative to base address)
		bool GetCustomMipGenSettings(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F02C4(relative to base address)
		bool GetCustomMaxTextureSize(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0084(relative to base address)
		bool GetCustomLossyCompressionAmount(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EFDD4(relative to base address)
		bool GetCustomLODGroup(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EFD3C(relative to base address)
		bool GetCustomLODBias(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EFBD0(relative to base address)
		bool GetCustomFilter(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF054(relative to base address)
		bool GetCustomDownscaleOptions(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EEE3C(relative to base address)
		bool GetCustomDownscale(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EEDA4(relative to base address)
		bool GetCustomDeferCompression(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE960(relative to base address)
		bool GetCustomCompressionSettings(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE798(relative to base address)
		bool GetCustomCompressionQuality(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE700(relative to base address)
		bool GetCustomCompressionNoAlpha(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE668(relative to base address)
		bool GetCustomCompositeTextureMode(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE5D0(relative to base address)
		bool GetCustomCompositePower(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE538(relative to base address)
		bool GetCustomColorSpace(ETextureColorSpace& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE4A0(relative to base address)
		bool GetCustomChromaKeyThreshold(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE408(relative to base address)
		bool GetCustomChromaKeyColor(FColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE374(relative to base address)
		bool GetCustombUseLegacyGamma(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F2234(relative to base address)
		bool GetCustombPreserveBorder(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F219C(relative to base address)
		bool GetCustombFlipGreenChannel(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F2104(relative to base address)
		bool GetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F206C(relative to base address)
		bool GetCustombChromaKeyTexture(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1FD4(relative to base address)
		bool GetCustomAlphaCoverageThresholds(FVector4& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EDE18(relative to base address)
		bool GetCustomAllowNonPowerOfTwo(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EDD80(relative to base address)
		bool GetCustomAdjustVibrance(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EDCE8(relative to base address)
		bool GetCustomAdjustSaturation(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EDC50(relative to base address)
		bool GetCustomAdjustRGBCurve(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EDBB8(relative to base address)
		bool GetCustomAdjustMinAlpha(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EDB20(relative to base address)
		bool GetCustomAdjustMaxAlpha(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EDA88(relative to base address)
		bool GetCustomAdjustHue(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ED9F0(relative to base address)
		bool GetCustomAdjustBrightnessCurve(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ED958(relative to base address)
		bool GetCustomAdjustBrightness(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ED8C0(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode
	// Inherited from UInterchangeTextureFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x30 (0x410 - 0x3E0)
	class UInterchangeTexture2DArrayFactoryNode : public UInterchangeTextureFactoryNode	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x3E0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode");
			return ret;
		}

		bool SetCustomAddressZ(char AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F5AEC(relative to base address)
		bool GetCustomAddressZ(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ED828(relative to base address)
		bool GetCustomAddressY(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ED6F8(relative to base address)
		bool GetCustomAddressX(char& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ED5C8(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeTexture2DFactoryNode
	// Inherited from UInterchangeTextureFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x98 (0x478 - 0x3E0)
	class UInterchangeTexture2DFactoryNode : public UInterchangeTextureFactoryNode	
	{
	public:
		unsigned char UnknownData00_1[0x98]; // 0x3E0(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode");
			return ret;
		}

		void SetSourceBlocks(TMap<int32_t, FString>& InSourceBlocks); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FCDE4(relative to base address)
		void SetSourceBlockByCoordinates(int32_t X, int32_t Y, FString InSourceFile); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522FCCC4(relative to base address)
		void SetSourceBlock(int32_t BlockIndex, FString InSourceFile); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522FCBE4(relative to base address)
		bool SetCustomAddressY(TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F5A28(relative to base address)
		bool SetCustomAddressX(TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F5964(relative to base address)
		TMap GetSourceBlocks(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F3A74(relative to base address)
		bool GetSourceBlockByCoordinates(int32_t X, int32_t Y, FString& OutSourceFile); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F3948(relative to base address)
		bool GetSourceBlock(int32_t BlockIndex, FString& OutSourceFile); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F3858(relative to base address)
		bool GetCustomAddressY(TEnumAsByte<TextureAddress>& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ED790(relative to base address)
		bool GetCustomAddressX(TEnumAsByte<TextureAddress>& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ED660(relative to base address)
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
		unsigned char UnknownData00_1[0x20]; // 0x478(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode");
			return ret;
		}

		bool SetCustomTextureMultiplier(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522FB334(relative to base address)
		bool SetCustomBrightness(float AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F693C(relative to base address)
		bool GetCustomTextureMultiplier(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F13D0(relative to base address)
		bool GetCustomBrightness(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE0D8(relative to base address)
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
		unsigned char UnknownData00_1[0x340]; // 0x140(0x340) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode");
			return ret;
		}

		bool SetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522FAEB8(relative to base address)
		bool SetCustomSkeletonFactoryNodeUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522FAE1C(relative to base address)
		bool SetCustomRemoveCurveRedundantKeys(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FA7B8(relative to base address)
		bool SetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F9498(relative to base address)
		bool SetCustomImportBoneTracksSampleRate(double& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F8BC0(relative to base address)
		bool SetCustomImportBoneTracksRangeStop(double& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F8B24(relative to base address)
		bool SetCustomImportBoneTracksRangeStart(double& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F8A88(relative to base address)
		bool SetCustomImportBoneTracks(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F89F0(relative to base address)
		bool SetCustomImportAttributeCurves(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F8958(relative to base address)
		bool SetCustomDoNotImportCurveWithZero(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F7D74(relative to base address)
		bool SetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F7A2C(relative to base address)
		bool SetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F7994(relative to base address)
		bool SetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F78FC(relative to base address)
		bool SetCustomAddCurveMetadataToSkeleton(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F58CC(relative to base address)
		void SetAnimationPayloadKeysForSceneNodeUids(TMap<FString, FString>& SceneNodeAnimationPayloadKeyUids, TMap<FString, char>& SceneNodeAnimationPayloadKeyTypes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F5590(relative to base address)
		void SetAnimationPayloadKeysForMorphTargetNodeUids(TMap<FString, FString>& MorphTargetAnimationPayloadKeyUids, TMap<FString, char>& MorphTargetAnimationPayloadKeyTypes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F5420(relative to base address)
		bool SetAnimatedMaterialCurveSuffixe(FString MaterialCurveSuffixe); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F5380(relative to base address)
		bool SetAnimatedAttributeStepCurveName(FString AttributeStepCurveName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F52E0(relative to base address)
		bool SetAnimatedAttributeCurveName(FString AttributeCurveName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F5240(relative to base address)
		bool RemoveAnimatedMaterialCurveSuffixe(FString MaterialCurveSuffixe); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F4BC4(relative to base address)
		bool RemoveAnimatedAttributeStepCurveName(FString AttributeStepCurveName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F4B24(relative to base address)
		bool RemoveAnimatedAttributeCurveName(FString AttributeCurveName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F4A84(relative to base address)
		void InitializeAnimSequenceNode(FString UniqueID, FString DisplayLabel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F424C(relative to base address)
		void GetSceneNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutSceneNodeAnimationPayloadKeys); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F32AC(relative to base address)
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B838C(relative to base address)
		void GetMorphTargetNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutMorphTargetNodeAnimationPayloads); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F2ADC(relative to base address)
		bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1050(relative to base address)
		bool GetCustomSkeletonFactoryNodeUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0FA4(relative to base address)
		bool GetCustomRemoveCurveRedundantKeys(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0AA8(relative to base address)
		bool GetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EFE6C(relative to base address)
		bool GetCustomImportBoneTracksSampleRate(double& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF790(relative to base address)
		bool GetCustomImportBoneTracksRangeStop(double& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF6F4(relative to base address)
		bool GetCustomImportBoneTracksRangeStart(double& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF658(relative to base address)
		bool GetCustomImportBoneTracks(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF5C0(relative to base address)
		bool GetCustomImportAttributeCurves(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF528(relative to base address)
		bool GetCustomDoNotImportCurveWithZero(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EED0C(relative to base address)
		bool GetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EEB28(relative to base address)
		bool GetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EEA90(relative to base address)
		bool GetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE9F8(relative to base address)
		bool GetCustomAddCurveMetadataToSkeleton(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ED530(relative to base address)
		int32_t GetAnimatedMaterialCurveSuffixesCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EC89C(relative to base address)
		void GetAnimatedMaterialCurveSuffixes(TArray<FString>& OutMaterialCurveSuffixes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EC7D4(relative to base address)
		void GetAnimatedMaterialCurveSuffixe(int32_t Index, FString& OutMaterialCurveSuffixe); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EC6EC(relative to base address)
		int32_t GetAnimatedAttributeStepCurveNamesCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EC6C0(relative to base address)
		void GetAnimatedAttributeStepCurveNames(TArray<FString>& OutAttributeStepCurveNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EC5F8(relative to base address)
		void GetAnimatedAttributeStepCurveName(int32_t Index, FString& OutAttributeStepCurveName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EC510(relative to base address)
		int32_t GetAnimatedAttributeCurveNamesCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EC4E4(relative to base address)
		void GetAnimatedAttributeCurveNames(TArray<FString>& OutAttributeCurveNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EC41C(relative to base address)
		void GetAnimatedAttributeCurveName(int32_t Index, FString& OutAttributeCurveName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EC334(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x30 (0x170 - 0x140)
	class UInterchangeCommonPipelineDataFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x140(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode");
			return ret;
		}

		bool SetCustomGlobalOffsetTransform(UInterchangeBaseNodeContainer* NodeContainer, FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522F86A4(relative to base address)
		bool SetBakePivotMeshes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F5798(relative to base address)
		bool SetBakeMeshes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F5700(relative to base address)
		bool GetCustomGlobalOffsetTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF320(relative to base address)
		bool GetBakePivotMeshes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ECAA8(relative to base address)
		bool GetBakeMeshes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ECA10(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeMaterialFactoryNode
	// Inherited from UInterchangeBaseMaterialFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x70 (0x1C0 - 0x150)
	class UInterchangeMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode	
	{
	public:
		unsigned char UnknownData00_1[0x70]; // 0x150(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode");
			return ret;
		}

		bool SetCustomTwoSided(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FB910(relative to base address)
		bool SetCustomTranslucencyLightingMode(TEnumAsByte<ETranslucencyLightingMode>& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FB7F0(relative to base address)
		bool SetCustomShadingModel(TEnumAsByte<EMaterialShadingModel>& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FABC4(relative to base address)
		bool SetCustomScreenSpaceReflections(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FAB2C(relative to base address)
		bool SetCustomRefractionMethod(TEnumAsByte<ERefractionMode>& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FA698(relative to base address)
		bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F9ED4(relative to base address)
		bool SetCustomBlendMode(TEnumAsByte<EBlendMode>& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F66C4(relative to base address)
		bool GetTransmissionColorConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F4104(relative to base address)
		bool GetTangentConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F3FBC(relative to base address)
		bool GetSurfaceCoverageConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F3E74(relative to base address)
		bool GetSubsurfaceConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F3D2C(relative to base address)
		bool GetSpecularConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F3AF0(relative to base address)
		bool GetRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F3164(relative to base address)
		bool GetRefractionConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F301C(relative to base address)
		bool GetOpacityConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F2ED4(relative to base address)
		bool GetOcclusionConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F2CF4(relative to base address)
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B838C(relative to base address)
		bool GetNormalConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F2BAC(relative to base address)
		bool GetMetallicConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F2994(relative to base address)
		bool GetFuzzColorConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F255C(relative to base address)
		bool GetEmissiveColorConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F2414(relative to base address)
		bool GetDisplacementConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F22CC(relative to base address)
		bool GetCustomTwoSided(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1774(relative to base address)
		bool GetCustomTranslucencyLightingMode(TEnumAsByte<ETranslucencyLightingMode>& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F16DC(relative to base address)
		bool GetCustomShadingModel(TEnumAsByte<EMaterialShadingModel>& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0DB4(relative to base address)
		bool GetCustomScreenSpaceReflections(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0D1C(relative to base address)
		bool GetCustomRefractionMethod(TEnumAsByte<ERefractionMode>& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0A10(relative to base address)
		bool GetCustomOpacityMaskClipValue(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0524(relative to base address)
		bool GetCustomBlendMode(TEnumAsByte<EBlendMode>& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EDF6C(relative to base address)
		bool GetClothConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ED248(relative to base address)
		bool GetClearCoatRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ED100(relative to base address)
		bool GetClearCoatNormalConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ECFB8(relative to base address)
		bool GetClearCoatConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ECE70(relative to base address)
		bool GetBaseColorConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ECB40(relative to base address)
		bool GetAnisotropyConnection(FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EC8C8(relative to base address)
		bool ConnectToTransmissionColor(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EC270(relative to base address)
		bool ConnectToTangent(FString ExpressionNodeUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EC1AC(relative to base address)
		bool ConnectToSurfaceCoverage(FString ExpressionUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EC0E8(relative to base address)
		bool ConnectToSubsurface(FString ExpressionNodeUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EC024(relative to base address)
		bool ConnectToSpecular(FString ExpressionNodeUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EBF60(relative to base address)
		bool ConnectToRoughness(FString ExpressionNodeUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EBE9C(relative to base address)
		bool ConnectToRefraction(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EBE00(relative to base address)
		bool ConnectToOpacity(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EBD3C(relative to base address)
		bool ConnectToOcclusion(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EBC78(relative to base address)
		bool ConnectToNormal(FString ExpressionNodeUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EBBB4(relative to base address)
		bool ConnectToMetallic(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EBAF0(relative to base address)
		bool ConnectToFuzzColor(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EBA2C(relative to base address)
		bool ConnectToEmissiveColor(FString ExpressionNodeUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EB968(relative to base address)
		bool ConnectToDisplacement(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EB8A4(relative to base address)
		bool ConnectToCloth(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EB7E0(relative to base address)
		bool ConnectToClearCoatRoughness(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EB71C(relative to base address)
		bool ConnectToClearCoatNormal(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EB658(relative to base address)
		bool ConnectToClearCoat(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EB594(relative to base address)
		bool ConnectToBaseColor(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EB4D0(relative to base address)
		bool ConnectToAnisotropy(FString ExpressionNodeUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EB40C(relative to base address)
		bool ConnectOutputToTransmissionColor(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EB310(relative to base address)
		bool ConnectOutputToTangent(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EB214(relative to base address)
		bool ConnectOutputToSurfaceCoverage(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EB118(relative to base address)
		bool ConnectOutputToSubsurface(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EB01C(relative to base address)
		bool ConnectOutputToSpecular(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EAF20(relative to base address)
		bool ConnectOutputToRoughness(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EAE24(relative to base address)
		bool ConnectOutputToRefraction(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EAD28(relative to base address)
		bool ConnectOutputToOpacity(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EAC2C(relative to base address)
		bool ConnectOutputToOcclusion(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EAB30(relative to base address)
		bool ConnectOutputToNormal(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EAA34(relative to base address)
		bool ConnectOutputToMetallic(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EA938(relative to base address)
		bool ConnectOutputToFuzzColor(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EA83C(relative to base address)
		bool ConnectOutputToEmissiveColor(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EA740(relative to base address)
		bool ConnectOutputToDisplacement(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EA644(relative to base address)
		bool ConnectOutputToCloth(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EA548(relative to base address)
		bool ConnectOutputToClearCoatRoughness(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EA44C(relative to base address)
		bool ConnectOutputToClearCoatNormal(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EA350(relative to base address)
		bool ConnectOutputToClearCoat(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EA254(relative to base address)
		bool ConnectOutputToBaseColor(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EA158(relative to base address)
		bool ConnectOutputToAnisotropy(FString ExpressionNodeUid, FString OutputName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522EA05C(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x10 (0x150 - 0x140)
	class UInterchangeMaterialExpressionFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x140(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode");
			return ret;
		}

		bool SetCustomExpressionClassName(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F81A4(relative to base address)
		bool GetCustomExpressionClassName(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EEFA8(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode
	// Inherited from UInterchangeBaseMaterialFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x20 (0x170 - 0x150)
	class UInterchangeMaterialInstanceFactoryNode : public UInterchangeBaseMaterialFactoryNode	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x150(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode");
			return ret;
		}

		bool SetCustomParent(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522FA158(relative to base address)
		bool SetCustomInstanceClassName(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F8E24(relative to base address)
		bool GetCustomParent(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0650(relative to base address)
		bool GetCustomInstanceClassName(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF9F4(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode
	// Inherited from UInterchangeMaterialExpressionFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x10 (0x160 - 0x150)
	class UInterchangeMaterialFunctionCallExpressionFactoryNode : public UInterchangeMaterialExpressionFactoryNode	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x150(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode");
			return ret;
		}

		bool SetCustomMaterialFunctionDependency(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F9530(relative to base address)
		bool GetCustomMaterialFunctionDependency(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EFF04(relative to base address)
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

		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B838C(relative to base address)
		bool GetInputConnection(FString InputName, FString& ExpressionNodeUid, FString& OutputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F273C(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeMeshActorFactoryNode
	// Inherited from UInterchangeActorFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x98 (0x218 - 0x180)
	class UInterchangeMeshActorFactoryNode : public UInterchangeActorFactoryNode	
	{
	public:
		unsigned char UnknownData00_1[0x98]; // 0x180(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode");
			return ret;
		}

		bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522FC9E4(relative to base address)
		bool SetCustomGeometricTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522F85A0(relative to base address)
		bool SetCustomAnimationAssetUidToPlay(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F6628(relative to base address)
		bool RemoveSlotMaterialDependencyUid(FString SlotName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F4F84(relative to base address)
		bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F3544(relative to base address)
		void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F337C(relative to base address)
		bool GetCustomGeometricTransform(FTransform& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF21C(relative to base address)
		bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EDEC0(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeMeshFactoryNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x180 (0x2C0 - 0x140)
	class UInterchangeMeshFactoryNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x180]; // 0x140(0x180) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode");
			return ret;
		}

		bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522FCAE4(relative to base address)
		bool SetCustomVertexColorReplace(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FC194(relative to base address)
		bool SetCustomVertexColorOverride(FColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522FC100(relative to base address)
		bool SetCustomVertexColorIgnore(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FC068(relative to base address)
		bool SetCustomUseMikkTSpace(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FBEB0(relative to base address)
		bool SetCustomUseHighPrecisionTangentBasis(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FBD90(relative to base address)
		bool SetCustomUseFullPrecisionUVs(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FBB50(relative to base address)
		bool SetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FBA30(relative to base address)
		bool SetCustomRemoveDegenerates(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FA850(relative to base address)
		bool SetCustomRecomputeTangents(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FA578(relative to base address)
		bool SetCustomRecomputeNormals(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FA458(relative to base address)
		bool SetCustomLODGroup(FName& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F9148(relative to base address)
		bool SetCustomKeepSectionsSeparate(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F8F58(relative to base address)
		bool SetCustomComputeWeightedNormals(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F762C(relative to base address)
		bool ResetSlotMaterialDependencies(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F521C(relative to base address)
		bool RemoveSlotMaterialDependencyUid(FString SlotName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F5024(relative to base address)
		bool RemoveLodDataUniqueId(FString LodDataUniqueId); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F4EE4(relative to base address)
		bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F3654(relative to base address)
		void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F3460(relative to base address)
		void GetLodDataUniqueIds(TArray<FString>& OutLodDataUniqueIds); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F28CC(relative to base address)
		int32_t GetLodDataCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F28A8(relative to base address)
		bool GetCustomVertexColorReplace(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1EA4(relative to base address)
		bool GetCustomVertexColorOverride(FColor& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1E10(relative to base address)
		bool GetCustomVertexColorIgnore(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1D78(relative to base address)
		bool GetCustomUseMikkTSpace(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1A6C(relative to base address)
		bool GetCustomUseHighPrecisionTangentBasis(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F19D4(relative to base address)
		bool GetCustomUseFullPrecisionUVs(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F18A4(relative to base address)
		bool GetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F180C(relative to base address)
		bool GetCustomRemoveDegenerates(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0B40(relative to base address)
		bool GetCustomRecomputeTangents(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0978(relative to base address)
		bool GetCustomRecomputeNormals(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F08E0(relative to base address)
		bool GetCustomLODGroup(FName& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EFCA4(relative to base address)
		bool GetCustomKeepSectionsSeparate(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EFB38(relative to base address)
		bool GetCustomComputeWeightedNormals(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE830(relative to base address)
		bool AddLodDataUniqueId(FString LodDataUniqueId); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522E9DAC(relative to base address)
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
		unsigned char UnknownData00_1[0xE8]; // 0x2C0(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode");
			return ret;
		}

		bool SetCustomUseHighPrecisionSkinWeights(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FBC70(relative to base address)
		bool SetCustomThresholdUV(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FB634(relative to base address)
		bool SetCustomThresholdTangentNormal(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FB514(relative to base address)
		bool SetCustomThresholdPosition(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FB3F4(relative to base address)
		bool SetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522FAF6C(relative to base address)
		bool SetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522FA1F4(relative to base address)
		bool SetCustomMorphThresholdPosition(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F9DB4(relative to base address)
		bool SetCustomMergeMorphTargetShapeWithSameName(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F9874(relative to base address)
		bool SetCustomImportVertexAttributes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F8D8C(relative to base address)
		bool SetCustomImportMorphTarget(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F8CF4(relative to base address)
		bool SetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F8C5C(relative to base address)
		bool SetCustomCreatePhysicsAsset(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F774C(relative to base address)
		bool SetCustomBoneInfluenceLimit(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F67E4(relative to base address)
		void InitializeSkeletalMeshNode(FString UniqueID, FString DisplayLabel, FString InAssetClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F447C(relative to base address)
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B838C(relative to base address)
		bool GetCustomUseHighPrecisionSkinWeights(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F193C(relative to base address)
		bool GetCustomThresholdUV(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1598(relative to base address)
		bool GetCustomThresholdTangentNormal(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1500(relative to base address)
		bool GetCustomThresholdPosition(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1468(relative to base address)
		bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1104(relative to base address)
		bool GetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F06FC(relative to base address)
		bool GetCustomMorphThresholdPosition(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F048C(relative to base address)
		bool GetCustomMergeMorphTargetShapeWithSameName(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F0158(relative to base address)
		bool GetCustomImportVertexAttributes(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF95C(relative to base address)
		bool GetCustomImportMorphTarget(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF8C4(relative to base address)
		bool GetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF82C(relative to base address)
		bool GetCustomCreatePhysicsAsset(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE8C8(relative to base address)
		bool GetCustomBoneInfluenceLimit(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE004(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0x30 (0x170 - 0x140)
	class UInterchangeSkeletalMeshLodDataNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x140(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode");
			return ret;
		}

		bool SetCustomSkeletonUid(FString AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522FB020(relative to base address)
		bool RemoveMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75228FCE4(relative to base address)
		bool RemoveAllMeshes(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F4A00(relative to base address)
		int32_t GetMeshUidsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228EA28(relative to base address)
		void GetMeshUids(TArray<FString>& OutMeshNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75228E960(relative to base address)
		bool GetCustomSkeletonUid(FString& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F11B8(relative to base address)
		bool AddMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522919CC(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode
	// Inherited from UInterchangeMeshFactoryNode -> UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0xE8 (0x3A8 - 0x2C0)
	class UInterchangeStaticMeshFactoryNode : public UInterchangeMeshFactoryNode	
	{
	public:
		unsigned char UnknownData00_1[0xE8]; // 0x2C0(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode");
			return ret;
		}

		bool SetCustomSupportFaceRemap(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FB214(relative to base address)
		bool SetCustomSrcLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522FB0BC(relative to base address)
		bool SetCustomMinLightmapResolution(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F990C(relative to base address)
		bool SetCustomMaxLumenMeshCards(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F95CC(relative to base address)
		bool SetCustomGenerateLightmapUVs(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F8480(relative to base address)
		bool SetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F8360(relative to base address)
		bool SetCustomDstLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F804C(relative to base address)
		bool SetCustomDistanceFieldResolutionScale(float& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F7C54(relative to base address)
		bool SetCustomDistanceFieldReplacementMesh(FSoftObjectPath& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522F7AC4(relative to base address)
		bool SetCustomBuildScale3D(FVector& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522F6C10(relative to base address)
		bool SetCustomBuildReversedIndexBuffer(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F6AF0(relative to base address)
		bool SetCustomBuildNanite(bool& AttributeValue, bool bAddApplyDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522F69FC(relative to base address)
		bool RemoveSocketUd(FString SocketUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F50DC(relative to base address)
		void InitializeStaticMeshNode(FString UniqueID, FString DisplayLabel, FString InAssetClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F46FC(relative to base address)
		void GetSocketUids(TArray<FString>& OutSocketUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F3790(relative to base address)
		int32_t GetSocketUidCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F3764(relative to base address)
		UClass GetObjectClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B838C(relative to base address)
		bool GetCustomSupportFaceRemap(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1338(relative to base address)
		bool GetCustomSrcLightmapIndex(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1264(relative to base address)
		bool GetCustomMinLightmapResolution(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F01F0(relative to base address)
		bool GetCustomMaxLumenMeshCards(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EFFB0(relative to base address)
		bool GetCustomGenerateLightmapUVs(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF184(relative to base address)
		bool GetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EF0EC(relative to base address)
		bool GetCustomDstLightmapIndex(int32_t& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EEED4(relative to base address)
		bool GetCustomDistanceFieldResolutionScale(float& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EEC74(relative to base address)
		bool GetCustomDistanceFieldReplacementMesh(FSoftObjectPath& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EEBC0(relative to base address)
		bool GetCustomBuildScale3D(FVector& AttributeValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE2A0(relative to base address)
		bool GetCustomBuildReversedIndexBuffer(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE208(relative to base address)
		bool GetCustomBuildNanite(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522EE170(relative to base address)
		bool AddSocketUids(TArray<FString>& InSocketUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522E9EEC(relative to base address)
		bool AddSocketUid(FString SocketUid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522E9E4C(relative to base address)
	};


	// Class InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode
	// Inherited from UInterchangeFactoryBaseNode -> UInterchangeBaseNode -> UObject
	// Size: 0xC0 (0x200 - 0x140)
	class UInterchangeStaticMeshLodDataNode : public UInterchangeFactoryBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0xC0]; // 0x140(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode");
			return ret;
		}

		bool SetOneConvexHullPerUCX(bool AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522FC954(relative to base address)
		bool SetImportCollision(bool AttributeValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522FC8C4(relative to base address)
		bool RemoveSphereCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F517C(relative to base address)
		bool RemoveMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F4E44(relative to base address)
		bool RemoveConvexCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F4DA4(relative to base address)
		bool RemoveCapsuleCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F4D04(relative to base address)
		bool RemoveBoxCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F4C64(relative to base address)
		bool RemoveAllSphereCollisionMeshes(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F4A58(relative to base address)
		bool RemoveAllMeshes(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F4A2C(relative to base address)
		bool RemoveAllConvexCollisionMeshes(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F49D4(relative to base address)
		bool RemoveAllCapsuleCollisionMeshes(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F49A8(relative to base address)
		bool RemoveAllBoxCollisionMeshes(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522F497C(relative to base address)
		int32_t GetSphereCollisionMeshUidsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F3D00(relative to base address)
		void GetSphereCollisionMeshUids(TArray<FString>& OutMeshNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F3C38(relative to base address)
		bool GetOneConvexHullPerUCX(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F2E3C(relative to base address)
		int32_t GetMeshUidsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1C84(relative to base address)
		void GetMeshUids(TArray<FString>& OutMeshNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F1CB0(relative to base address)
		bool GetImportCollision(bool& AttributeValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522F26A4(relative to base address)
		int32_t GetConvexCollisionMeshUidsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ED458(relative to base address)
		void GetConvexCollisionMeshUids(TArray<FString>& OutMeshNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ED390(relative to base address)
		int32_t GetCapsuleCollisionMeshUidsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ECE44(relative to base address)
		void GetCapsuleCollisionMeshUids(TArray<FString>& OutMeshNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ECD7C(relative to base address)
		int32_t GetBoxCollisionMeshUidsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ECD50(relative to base address)
		void GetBoxCollisionMeshUids(TArray<FString>& OutMeshNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522ECC88(relative to base address)
		bool AddSphereCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522E9FBC(relative to base address)
		bool AddMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522E9D0C(relative to base address)
		bool AddConvexCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522E9C6C(relative to base address)
		bool AddCapsuleCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522E9BCC(relative to base address)
		bool AddBoxCollisionMeshUid(FString MeshName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522E9B2C(relative to base address)
	};

}
