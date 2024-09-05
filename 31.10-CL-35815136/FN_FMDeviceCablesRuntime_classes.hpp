#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMDeviceCablesRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FMDeviceCablesRuntime.FMDeviceCable
	// Inherited from ABuildingActor -> AActor -> UObject
	// Size: 0x1F8 (0x920 - 0x728)
	class AFMDeviceCable : public ABuildingActor	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x728(0x18) UNKNOWN PROPERTY
		USplineComponent* SplineComponent; // 0x740(0x8)
		UStaticMeshComponent* DeviceCableHead; // 0x748(0x8)
		UClass* SplineMeshComponentClass; // 0x750(0x8)
		TWeakObjectPtr<UStaticMesh*> ScalarStaticMesh; // 0x758(0x20)
		TWeakObjectPtr<UStaticMesh*> AudioStaticMesh; // 0x778(0x20)
		TWeakObjectPtr<UStaticMesh*> NoteStaticMesh; // 0x798(0x20)
		TWeakObjectPtr<UStaticMesh*> TextureStaticMesh; // 0x7B8(0x20)
		TWeakObjectPtr<UStaticMesh*> MeshStaticMesh; // 0x7D8(0x20)
		FName SplineLengthParam; // 0x7F8(0x4)
		FName SplineStartParam; // 0x7FC(0x4)
		FName SplineEndParam; // 0x800(0x4)
		FName PortTypeParam; // 0x804(0x4)
		float CableStubLength; // 0x808(0x4)
		float CableDistanceFromPortB; // 0x80C(0x4)
		float CableMinTangent; // 0x810(0x4)
		float CableMaxTangent; // 0x814(0x4)
		float CableSectionLengthAtCableCenter; // 0x818(0x4)
		float CableSectionLengthAtCableHeads; // 0x81C(0x4)
		int32_t CableSectionCountAtCableHeads; // 0x820(0x4)
		int32_t CableCenterSectionsMaxCount; // 0x824(0x4)
		float ExtremeMinDotProduct; // 0x828(0x4)
		float MaxExtremeCableBendSize; // 0x82C(0x4)
		float ExtremeAngleTangentScale; // 0x830(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x834(0x4) UNKNOWN PROPERTY
		TArray<USplineMeshComponent*> CableSplineMeshArray; // 0x838(0x10)
		TWeakObjectPtr<UFMDeviceCableAnimatorBase*> DeviceCableAnimator; // 0x848(0x8)
		UMaterialInstanceDynamic* DeviceCableMaterial; // 0x850(0x8)
		UMaterialInstanceDynamic* DeviceCableHeadMaterial; // 0x858(0x8)
		FVector DeviceCableHeadScale; // 0x860(0x18)
		unsigned char UnknownData02_6[0x10]; // 0x878(0x10) UNKNOWN PROPERTY
		UFMDeviceCablePortComponent* ConstantPort; // 0x888(0x8)
		UFMDeviceCablePortComponent* PortA; // 0x890(0x8)
		UFMDeviceCablePortComponent* ServerPortA; // 0x898(0x8)
		UFMDeviceCablePortComponent* PortB; // 0x8A0(0x8)
		UFMDeviceCablePortComponent* ServerPortB; // 0x8A8(0x8)
		bool bPermittedToShowVisuals; // 0x8B0(0x1)
		unsigned char UnknownData03_7[0x6F]; // 0x8B1(0x6F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCable");
			return ret;
		}

		void UpdateVisualParameters(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751674CDC(relative to base address)
		void UpdateDeviceCableAnimator(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751674CC8(relative to base address)
		void SetFocusedVisuals(bool bIsFocused); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751674B3C(relative to base address)
		void SetDeviceCableHeadScale(FVector Scale); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7516748D4(relative to base address)
		void OnSplineUpdated(bool bCollisionEnabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnScalesUpdated(FVector StartScale, FVector EndScale); // Flags: Event|Protected|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_ServerPortB(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516745C4(relative to base address)
		void OnRep_ServerPortA(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516745B0(relative to base address)
		void OnRep_bPermittedToShowVisuals(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516745EC(relative to base address)
		void OnCableReturned(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCablePortsUpdated(EDeviceCablePortDataType CurrentPortDataType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCableGrabbed(bool bThroughReplication); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCableDisconnected(bool bThroughReplication); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCableConnected(bool bThroughReplication); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFMDeviceCablePortComponent GetPortB(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748DD4090(relative to base address)
		UFMDeviceCablePortComponent GetPortA(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751673E58(relative to base address)
		UStaticMeshComponent GetDeviceCableHead(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751673E40(relative to base address)
		UFMDeviceCablePortComponent GetConstantPort(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751673E28(relative to base address)
		USplineComponent GetCableSpline(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E97D960(relative to base address)
		EDeviceCablePortDataType GetCableDataType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751673E08(relative to base address)
		void Disconnect(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751673DE0(relative to base address)
		void ConnectPort(UFMDeviceCablePortComponent* Port); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751673BE0(relative to base address)
		void ConnectConstantPort(UFMDeviceCablePortComponent* Port); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751673B60(relative to base address)
		void BuildMeshOnSpline(bool bCollisionEnabled); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751673A4C(relative to base address)
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableAnimatorTickSubsystem
	// Inherited from UFortManagedTickSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x120 - 0xD0)
	class UFMDeviceCableAnimatorTickSubsystem : public UFortManagedTickSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0xD0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTickSubsystem");
			return ret;
		}
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableAnimatorBase
	// Inherited from UObject
	// Size: 0xC0 (0xE8 - 0x28)
	class UFMDeviceCableAnimatorBase : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x50]; // 0x28(0x50) UNKNOWN PROPERTY
		TWeakObjectPtr<UFMDeviceCablePortComponent*> OwnerPort; // 0x78(0x8)
		unsigned char UnknownData01_7[0x68]; // 0x80(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase");
			return ret;
		}

		void SetOwnerPort(UFMDeviceCablePortComponent* OwnerPort); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751674C48(relative to base address)
		void RemoveMaterialInstance(UMaterialInstanceDynamic* InMaterialInstance); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516746C4(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPortArtifactUpdated(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C4A1ED4(relative to base address)
		void OnConnectionStarted(UFMDeviceCableConnectionBase* NewConnection); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D04D084(relative to base address)
		void OnConnectionEnded(UFMDeviceCableConnectionBase* EndedConnection); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D04D108(relative to base address)
		void AddMaterialInstance(UMaterialInstanceDynamic* InMaterialInstance); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516739CC(relative to base address)
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableAnimatorMidiEvent
	// Inherited from UFMDeviceCableAnimatorBase -> UObject
	// Size: 0xA8 (0x190 - 0xE8)
	class UFMDeviceCableAnimatorMidiEvent : public UFMDeviceCableAnimatorBase	
	{
	public:
		FName NoteTextureParam; // 0xE8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
		UCurveFloat* NoteShapeCurve; // 0xF0(0x8)
		float NotePercentOfTexture; // 0xF8(0x4)
		float NoteTravelBeats; // 0xFC(0x4)
		float NoteStartDelayBeats; // 0x100(0x4)
		unsigned char UnknownData01_6[0x14]; // 0x104(0x14) UNKNOWN PROPERTY
		UTexture2D* NoteTexture; // 0x118(0x8)
		UFabricMetaSoundPatchWrapper* PatchWrapper; // 0x120(0x8)
		unsigned char UnknownData02_7[0x68]; // 0x128(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMidiEvent");
			return ret;
		}

		void OnMetaSoundOutputIntChangedBatch(FName& OutputName, TArray<int32_t>& Output); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75167448C(relative to base address)
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider
	// Inherited from UFMDeviceCableAnimatorBase -> UObject
	// Size: 0x18 (0x100 - 0xE8)
	class UFMDeviceCableAnimatorFloatProvider : public UFMDeviceCableAnimatorBase	
	{
	public:
		FName CableDataParam; // 0xE8(0x4)
		FName FloatProviderTypeParam; // 0xEC(0x4)
		TArray<UFabricFloatProviderBase*> FloatProviders; // 0xF0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider");
			return ret;
		}

		void SetFloatProviders(TArray<UFabricFloatProviderBase*>& InFloatProviders); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751674AA0(relative to base address)
		void SetFloatProvider(UFabricFloatProviderBase* InFloatProvider); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516749F4(relative to base address)
		void OnFloatChanged(float CurrentFloat, UFabricFloatProviderBase* FloatProvider); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751674108(relative to base address)
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableAnimatorTextureProvider
	// Inherited from UFMDeviceCableAnimatorBase -> UObject
	// Size: 0x10 (0xF8 - 0xE8)
	class UFMDeviceCableAnimatorTextureProvider : public UFMDeviceCableAnimatorBase	
	{
	public:
		FName CableDataParam; // 0xE8(0x4)
		float DecayRate; // 0xEC(0x4)
		UFabricTextureProviderBase* TextureProvider; // 0xF0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTextureProvider");
			return ret;
		}

		void SetTextureProvider(UFabricTextureProviderBase* InTextureProvider); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751674BBC(relative to base address)
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableAnimatorMeshProvider
	// Inherited from UFMDeviceCableAnimatorBase -> UObject
	// Size: 0x10 (0xF8 - 0xE8)
	class UFMDeviceCableAnimatorMeshProvider : public UFMDeviceCableAnimatorBase	
	{
	public:
		FName CableDataParam; // 0xE8(0x4)
		float DecayRate; // 0xEC(0x4)
		UFabricMeshProviderBase* MeshProvider; // 0xF0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMeshProvider");
			return ret;
		}

		void SetMeshProvider(UFabricMeshProviderBase* InMeshProvider); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751674BBC(relative to base address)
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer
	// Inherited from UFMDeviceCableAnimatorBase -> UObject
	// Size: 0x80 (0x168 - 0xE8)
	class UFMDeviceCableAnimatorAudioAnalyzer : public UFMDeviceCableAnimatorBase	
	{
	public:
		FName FftTextureParam; // 0xE8(0x4)
		FName WaveformTextureParam; // 0xEC(0x4)
		FName AmplitudeTextureParam; // 0xF0(0x4)
		FName AmplitudeDataParam; // 0xF4(0x4)
		FName CableQualityParam; // 0xF8(0x4)
		FName CableReactivityParam; // 0xFC(0x4)
		int32_t WaveformNumSamplesHeld; // 0x100(0x4)
		int32_t WaveformSmoothingDistance; // 0x104(0x4)
		float WaveformSmoothingFactor; // 0x108(0x4)
		float WaveformDecayPerSecond; // 0x10C(0x4)
		UTexture2D* WaveformTexture; // 0x110(0x8)
		UTexture2D* AmplitudeTexture; // 0x118(0x8)
		UFabricMetaSoundPatchWrapper* PatchWrapper; // 0x120(0x8)
		unsigned char UnknownData00_7[0x40]; // 0x128(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer");
			return ret;
		}

		void SetAnalyzerName(FName AnalyzerName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751674858(relative to base address)
		void OnMetaSoundOutputFloatChangedBatch(FName& OutputName, TArray<float>& Output, FFabricMetaSoundPatchWrapperPeakTamer& PeakTamer, float DeltaSeconds); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751674240(relative to base address)
		float GetLastAnalyzerValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749591924(relative to base address)
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableConnectionBase
	// Inherited from UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UFMDeviceCableConnectionBase : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x58]; // 0x28(0x58) UNKNOWN PROPERTY
		bool bConnectionActive; // 0x80(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> BuildingCompositeArtifactFromPorts; // 0x88(0x10)
		FFMDeviceCableConnectedDevicesInfo ConnectedDevicesInfo; // 0x98(0x30)
		FFMDeviceCableDefaultOutputs DefaultOutputs; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase");
			return ret;
		}

		void StartConnectionBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RebuildDirtyConnectionBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EndConnectionBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableMetaSoundConnection
	// Inherited from UFMDeviceCableConnectionBase -> UObject
	// Size: 0x0 (0xD0 - 0xD0)
	class UFMDeviceCableMetaSoundConnection : public UFMDeviceCableConnectionBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableMetaSoundConnection");
			return ret;
		}
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableNoteConnection
	// Inherited from UFMDeviceCableMetaSoundConnection -> UFMDeviceCableConnectionBase -> UObject
	// Size: 0x0 (0xD0 - 0xD0)
	class UFMDeviceCableNoteConnection : public UFMDeviceCableMetaSoundConnection	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableNoteConnection");
			return ret;
		}
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableAudioConnection
	// Inherited from UFMDeviceCableMetaSoundConnection -> UFMDeviceCableConnectionBase -> UObject
	// Size: 0x0 (0xD0 - 0xD0)
	class UFMDeviceCableAudioConnection : public UFMDeviceCableMetaSoundConnection	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableAudioConnection");
			return ret;
		}
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableFloatConnection
	// Inherited from UFMDeviceCableConnectionBase -> UObject
	// Size: 0x0 (0xD0 - 0xD0)
	class UFMDeviceCableFloatConnection : public UFMDeviceCableConnectionBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableFloatConnection");
			return ret;
		}
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableTextureConnection
	// Inherited from UFMDeviceCableConnectionBase -> UObject
	// Size: 0x0 (0xD0 - 0xD0)
	class UFMDeviceCableTextureConnection : public UFMDeviceCableConnectionBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableTextureConnection");
			return ret;
		}
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableMeshConnection
	// Inherited from UFMDeviceCableConnectionBase -> UObject
	// Size: 0x8 (0xD8 - 0xD0)
	class UFMDeviceCableMeshConnection : public UFMDeviceCableConnectionBase	
	{
	public:
		uint32_t PreviousMeshInstanceHash; // 0xD0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableMeshConnection");
			return ret;
		}
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableControllerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x70 (0x110 - 0xA0)
	class UFMDeviceCableControllerComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnControllerCableConnected; // 0xA0(0x10)
		FMulticastInlineDelegate OnControllerCableDisconnected; // 0xB0(0x10)
		UClass* ControllerCablePort; // 0xC0(0x8)
		UClass* DeviceCableManagerClass; // 0xC8(0x8)
		TWeakObjectPtr<AFortPawn*> CurrentPlayerPawn; // 0xD0(0x8)
		AFortPlayerControllerAthena* PlayerController; // 0xD8(0x8)
		UFMDeviceCablePortComponent* LocalControllerPort; // 0xE0(0x8)
		UFMDeviceCablePortComponent* ServerControllerPort; // 0xE8(0x8)
		TWeakObjectPtr<AActor*> LocalControllerPortActor; // 0xF0(0x8)
		UFMDeviceCableManagerComponent* LocalDeviceCableManager; // 0xF8(0x8)
		UFMDeviceCableManagerComponent* ServerDeviceCableManager; // 0x100(0x8)
		bool bFitIsEquipped; // 0x108(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x109(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent");
			return ret;
		}

		void SetControllerTargetForControllerPortBP(AActor* ControllerPortActor, APlayerController* Controller); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ServerVolumeChanged(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74C8DF6C0(relative to base address)
		void ServerSelectPort(UFMDeviceCablePortComponent* SelectedPort); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74F047CD4(relative to base address)
		void ServerPortsUpdated(TArray<FPortUpdateInfo> PortChangeInfos); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF7516747C4(relative to base address)
		void ServerPortActivatedStateChanged(UFMDeviceCablePortComponent* Port, EDeviceCableActivatedState ActivatedState); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74F0F9CEC(relative to base address)
		void ServerDisconnectController(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74847EE18(relative to base address)
		void SelectPort(UFMDeviceCablePortComponent* SelectedPort); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751674744(relative to base address)
		void OnWeaponHolstered(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751673DF4(relative to base address)
		void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF751674600(relative to base address)
		void OnRep_ServerDeviceCableManager(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75167459C(relative to base address)
		void OnRep_ServerControllerPort(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751674588(relative to base address)
		void OnNoFabricInteractablesHit(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751673DF4(relative to base address)
		void OnFortPawnChanged(AFortPawn* NewPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516741C0(relative to base address)
		void OnEmoteStarted(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting); // Flags: Final|Native|Private, Memory Exec: 0x7FF75167404C(relative to base address)
		void OnCreativePlotLinkedVolumeChanged(AFortVolume* FortVolume); // Flags: Final|Native|Private, Memory Exec: 0x7FF751673FCC(relative to base address)
		void OnControllerCableDisconnected__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnControllerCableConnected__DelegateSignature(TArray<UFMDeviceCablePortComponent*>& ConnectedPorts); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsHoldingCable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751673FAC(relative to base address)
		bool IsCableConnectionValid(UFMDeviceCablePortComponent* OtherPort); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751673E70(relative to base address)
		void DropCable(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751673DF4(relative to base address)
		void ClientPortUpdatesRejected(TArray<FPortUpdateInfo> PortChangeInfos); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF751673ACC(relative to base address)
	};


	// Class FMDeviceCablesRuntime.FMDeviceCablePortComponent
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x310 (0x8A0 - 0x590)
	class UFMDeviceCablePortComponent : public UStaticMeshComponent	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x590(0x38) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCablePortSizeUpdated; // 0x5C8(0x10)
		FMulticastInlineDelegate OnAnimatorCreated; // 0x5D8(0x10)
		FMulticastInlineDelegate OnConnected; // 0x5E8(0x10)
		unsigned char UnknownData01_6[0x20]; // 0x5F8(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnConnectedDuringGameplay; // 0x618(0x10)
		FMulticastInlineDelegate OnDisconnected; // 0x628(0x10)
		FMulticastInlineDelegate OnConnectionStarted; // 0x638(0x10)
		FMulticastInlineDelegate OnConnectionEnded; // 0x648(0x10)
		FMulticastInlineDelegate OnPortArtifactUpdated; // 0x658(0x10)
		FMulticastInlineDelegate OnReceiveFloatProviders; // 0x668(0x10)
		FMulticastInlineDelegate OnDisconnectFloatProvider; // 0x678(0x10)
		UClass* DeviceCableManagerClass; // 0x688(0x8)
		TWeakObjectPtr<UStaticMesh*> OutputStaticMesh; // 0x690(0x20)
		TWeakObjectPtr<UStaticMesh*> AudioInStaticMesh; // 0x6B0(0x20)
		TWeakObjectPtr<UStaticMesh*> NoteInStaticMesh; // 0x6D0(0x20)
		TWeakObjectPtr<UStaticMesh*> TextureInStaticMesh; // 0x6F0(0x20)
		TWeakObjectPtr<UStaticMesh*> MeshInStaticMesh; // 0x710(0x20)
		TWeakObjectPtr<UStaticMesh*> ScalarInStaticMesh; // 0x730(0x20)
		TMap<EDeviceCablePortDataType, UClass*> CableAnimatorClasses; // 0x750(0x50)
		EDeviceCablePortFlowType PortFlowType; // 0x7A0(0x1)
		EDeviceCablePortDataType PortDataType; // 0x7A1(0x1)
		EDeviceCableLoadableState PortLoadableState; // 0x7A2(0x1)
		EDeviceCablePortAnimationSyncType AnimationSyncType; // 0x7A3(0x1)
		bool bAllowMultipleConnections; // 0x7A4(0x1)
		bool bAllowSiblingConnections; // 0x7A5(0x1)
		EFMDeviceCablePortComponentAllowMultipleConnections OverrideAllowMultipleConnections; // 0x7A6(0x1)
		EFMDeviceCablePortComponentAllowMultipleConnections OverrideAllowSiblingConnections; // 0x7A7(0x1)
		bool bHideWhenNotRelevant; // 0x7A8(0x1)
		bool bIsPlayerPort; // 0x7A9(0x1)
		bool bIsOnPreviewBuildingActor; // 0x7AA(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x7AB(0x1) UNKNOWN PROPERTY
		FName EnterVolumeTag; // 0x7AC(0x4)
		FName ExitVolumeTag; // 0x7B0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x7B4(0x4) UNKNOWN PROPERTY
		TArray<UFMDeviceCablePortComponent*> ConnectedPorts; // 0x7B8(0x10)
		TArray<UFMDeviceCablePortComponent*> ServerConnectedPorts; // 0x7C8(0x10)
		TArray<UFMDeviceCableConnectionBase*> CurrentConnections; // 0x7D8(0x10)
		AFMDeviceCable* ConstantCable; // 0x7E8(0x8)
		UFMDeviceCableManagerComponent* DeviceCableManager; // 0x7F0(0x8)
		TArray<UFMDeviceCablePortComponent*> OtherPortsOnActor; // 0x7F8(0x10)
		EDeviceCableActivatedState PortActivatedState; // 0x808(0x1)
		EDeviceCableActivatedState ServerPortActivatedState; // 0x809(0x1)
		EDeviceCablePortSelectableState PortSelectableState; // 0x80A(0x1)
		unsigned char UnknownData04_6[0x5]; // 0x80B(0x5) UNKNOWN PROPERTY
		UFMDeviceCableAnimatorBase* DeviceCableAnimator; // 0x810(0x8)
		FGuid ConnectionGuid; // 0x818(0x10)
		TArray<FGuid> ConnectedGuids; // 0x828(0x10)
		FFMDeviceCableArtifact CachedArtifact; // 0x838(0x20)
		unsigned char UnknownData05_6[0x10]; // 0x858(0x10) UNKNOWN PROPERTY
		TArray<UFMDeviceCablePortComponent*> PendingConnectionBroadcasts; // 0x868(0x10)
		FGuid SaveGuid; // 0x878(0x10)
		unsigned char UnknownData06_7[0x18]; // 0x888(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent");
			return ret;
		}

		void UpdateStaticMesh(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75167819C(relative to base address)
		void UpdateCableHiddenStateForConnectedPort(UFMDeviceCablePortComponent* OtherPort, bool bNewHidden); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516780B8(relative to base address)
		void UpdateCableHiddenState(UFMDeviceCablePortComponent* OtherPort); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751678014(relative to base address)
		void SetPortVisibility(bool bPortVisible); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751677F94(relative to base address)
		void SetPortSelectableState(EDeviceCablePortSelectableState NewSelectableState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751677F10(relative to base address)
		void SetPortConnectionsDirty(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751677EFC(relative to base address)
		void SetPortActivatedState(EDeviceCableActivatedState NewActivatedState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751677E7C(relative to base address)
		void SetDeviceCableAnimator(UFMDeviceCableAnimatorBase* InAnimator); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void SetConnectedCablesHidden(bool bNewHidden); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751677ACC(relative to base address)
		void SetCachedArtifact(FFMDeviceCableArtifact& InCachedArtifact); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751677A34(relative to base address)
		void SetCablesHidden(bool bNewHidden); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516779B4(relative to base address)
		EPortSelectStatus SelectWithStaticOutputInteraction(UFMDeviceCablePortComponent* PlayerSelectionPort, TArray<FPortUpdateInfo>& OutPortUpdates); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7516778C0(relative to base address)
		EPortSelectStatus Select(UFMDeviceCablePortComponent* PlayerSelectionPort, TArray<FPortUpdateInfo>& OutPortUpdates); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7516777C8(relative to base address)
		void OnRep_ServerPortActivatedState(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751677784(relative to base address)
		void OnRep_ServerConnectedPorts(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751677770(relative to base address)
		void OnRep_DeviceCableManager(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751677718(relative to base address)
		void OnRep_ConstantCable(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516776C0(relative to base address)
		void OnReceiveFloatProviders__DelegateSignature(TArray<UFabricFloatProviderBase*>& FloatProviders); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPortArtifactUpdated__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerControllerPortDisconnected(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516776AC(relative to base address)
		void OnPlayerControllerPortConnected(TArray<UFMDeviceCablePortComponent*>& ControllerPorts); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751677610(relative to base address)
		void OnDisconnectFloatProvider__DelegateSignature(UFabricFloatProviderBase* FloatProvider); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDisconnected__DelegateSignature(UFMDeviceCablePortComponent* DisconnectedPort); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnConnectionStarted__DelegateSignature(UFMDeviceCableConnectionBase* NewConnection); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnConnectionEnded__DelegateSignature(UFMDeviceCableConnectionBase* EndedConnection); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnConnectedWithSourcePort__DelegateSignature(UFMDeviceCablePortComponent* SourcePort, UFMDeviceCablePortComponent* OtherPort); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnConnected__DelegateSignature(UFMDeviceCablePortComponent* ConnectedPort); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAnimatorCreated__DelegateSignature(UFMDeviceCableAnimatorBase* Animator); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool MatchesPortConnectionType(UFMDeviceCablePortComponent* OtherPort); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751676C74(relative to base address)
		bool IsConnectedToPort(UFMDeviceCablePortComponent* Port); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751676AF8(relative to base address)
		bool IsConnected(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751676ADC(relative to base address)
		bool HasSavedConnections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751676AAC(relative to base address)
		TArray GetPreviousPortsInConnections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751676A70(relative to base address)
		EDeviceCablePortSelectableState GetPortSelectableState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751676A58(relative to base address)
		EDeviceCablePortFlowType GetPortFlowType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751676A40(relative to base address)
		EDeviceCablePortDataType GetPortDataType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751676A28(relative to base address)
		EDeviceCableActivatedState GetPortActivatedState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751676A10(relative to base address)
		TArray GetOtherPortsOnActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516769F4(relative to base address)
		TArray GetNextPortsInConnections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516769B8(relative to base address)
		bool GetIsTerminalPort(EDeviceCablePortFlowType FlowType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75167692C(relative to base address)
		bool GetIsPlayerPort(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751676914(relative to base address)
		bool GetIsModulationPort(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516768EC(relative to base address)
		FGuid GetGuid(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516768BC(relative to base address)
		UFMDeviceCableAnimatorBase GetDeviceCableAnimator(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516768A4(relative to base address)
		AFMDeviceCable GetConstantCable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75167688C(relative to base address)
		TArray GetConnections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751676814(relative to base address)
		TArray GetConnectedPorts(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516767F8(relative to base address)
		FFMDeviceCableArtifact GetCachedArtifact(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516767D0(relative to base address)
		EDeviceCablePortAnimationSyncType GetAnimationSyncType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516767B8(relative to base address)
		void FabricCablePortSizeUpdated__DelegateSignature(float Size); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ActorHasValidControllerBP(AActor* Actor, AFortPlayerPawn* OutFortPlayerPawn, APlayerController* OutPlayerController); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableModulatorPortComponent
	// Inherited from UFMDeviceCablePortComponent -> UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x8D0 - 0x8A0)
	class UFMDeviceCableModulatorPortComponent : public UFMDeviceCablePortComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8A0(0x8) UNKNOWN PROPERTY
		FString AssociatedProperty; // 0x8A8(0x10)
		TWeakObjectPtr<UObject*> AssociatedObject; // 0x8B8(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x8C0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableModulatorPortComponent");
			return ret;
		}

		void SetDeviceCableManager(UFMDeviceCableManagerComponent* InDeviceCableManager); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751677B4C(relative to base address)
	};


	// Class FMDeviceCablesRuntime.FMDeviceCablesFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFMDeviceCablesFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCablesFunctionLibrary");
			return ret;
		}

		FSoundSourceBusSendInfo MakeSoundSourceBusSendInfo(USoundSourceBus* SoundSourceBus); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751676B94(relative to base address)
		USoundSourceBus DeepCopySoundSourceBus(UObject* Context, UObject* Outer, USoundSourceBus* Source); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75167624C(relative to base address)
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x4C0 (0x560 - 0xA0)
	class UFMDeviceCableWildcardOrderingComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FFMDeviceCableOrderingMovementInfo InputsShowHideMovementInfo; // 0xA8(0x30)
		unsigned char UnknownData01_6[0xB8]; // 0xD8(0xB8) UNKNOWN PROPERTY
		FFMDeviceCableOrderingMovementInfo InOutMovementInfo; // 0x190(0x30)
		FFMDeviceCableOrderingMovementInfo TransitionMovementInfo; // 0x1C0(0x30)
		unsigned char UnknownData02_6[0xB8]; // 0x1F0(0xB8) UNKNOWN PROPERTY
		FFMDeviceCableOrderingMovementInfo CollapseExpandMovementInfo; // 0x2A8(0x30)
		unsigned char UnknownData03_6[0xB8]; // 0x2D8(0xB8) UNKNOWN PROPERTY
		FVector CollapsedOutputPosition; // 0x390(0x18)
		float VisualChangeTimeoutTime; // 0x3A8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x3AC(0x4) UNKNOWN PROPERTY
		FName ClosedMeshTag; // 0x3B0(0x4)
		FName TopMeshTag; // 0x3B4(0x4)
		FName MiddleMeshTag; // 0x3B8(0x4)
		FName BottomMeshTag; // 0x3BC(0x4)
		FName InputPortParentTag; // 0x3C0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x3C4(0x4) UNKNOWN PROPERTY
		UStaticMeshComponent* ClosedMesh; // 0x3C8(0x8)
		UStaticMeshComponent* TopMesh; // 0x3D0(0x8)
		TArray<UStaticMeshComponent*> MiddleMeshes; // 0x3D8(0x10)
		UStaticMeshComponent* BottomMesh; // 0x3E8(0x8)
		unsigned char UnknownData06_6[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		TArray<UFMDeviceCableWildcardPortComponent*> InputWildcardPorts; // 0x3F8(0x10)
		USceneComponent* InputWildcardPortParent; // 0x408(0x8)
		TArray<UFMDeviceCableWildcardPortComponent*> OutputWildcardPorts; // 0x410(0x10)
		unsigned char UnknownData07_6[0x120]; // 0x420(0x120) UNKNOWN PROPERTY
		TArray<FFMDeviceCableOrderingPortState> ServerPortStates; // 0x540(0x10)
		unsigned char UnknownData08_7[0x10]; // 0x550(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent");
			return ret;
		}

		void SetOutputRoot(FVector RootLocation); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751677D64(relative to base address)
		void SetOutputPortsExpanded(bool bExpanded); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751677CE4(relative to base address)
		void SetInputRoot(FVector RootLocation); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751677BCC(relative to base address)
		void OnRep_ServerPortStates(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516777B4(relative to base address)
		void OnOutputPortSlotSetFromSave(UFMDeviceCableWildcardPortComponent* WildcardPort, bool bHasConnections); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516771C8(relative to base address)
		void OnOutputPortDisconnected(UFMDeviceCablePortComponent* SourcePort, UFMDeviceCablePortComponent* DisconnectedPort); // Flags: Final|Native|Private, Memory Exec: 0x7FF751676FC0(relative to base address)
		void OnOutputPortConnected(UFMDeviceCablePortComponent* SourcePort, UFMDeviceCablePortComponent* ConnectedPort); // Flags: Final|Native|Private, Memory Exec: 0x7FF751676EFC(relative to base address)
		void OnInputPortDisconnected(UFMDeviceCablePortComponent* DisconnectedPort); // Flags: Final|Native|Private, Memory Exec: 0x7FF751676E7C(relative to base address)
		void OnInputPortDataTypeChanged(UFMDeviceCableWildcardPortComponent* WildcardPort, EDeviceCablePortDataType DataType); // Flags: Final|Native|Private, Memory Exec: 0x7FF751676DB4(relative to base address)
		void OnInputPortConnected(UFMDeviceCablePortComponent* ConnectedPort); // Flags: Final|Native|Private, Memory Exec: 0x7FF751676D38(relative to base address)
		void InitializeOutputSlots(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751676AC8(relative to base address)
		void FinishVisualChange(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516767A0(relative to base address)
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent
	// Inherited from UFMDeviceCablePortComponent -> UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x40 (0x8E0 - 0x8A0)
	class UFMDeviceCableWildcardPortComponent : public UFMDeviceCablePortComponent	
	{
	public:
		FMulticastInlineDelegate OnWildcardDataTypeChanged; // 0x8A0(0x10)
		FMulticastInlineDelegate OnWildcardPortSlotSetFromSave; // 0x8B0(0x10)
		int32_t SlotIndex; // 0x8C0(0x4)
		int32_t SavedSlotIndex; // 0x8C4(0x4)
		EDeviceCablePortDataType SavedPortDataType; // 0x8C8(0x1)
		unsigned char UnknownData00_7[0x17]; // 0x8C9(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent");
			return ret;
		}

		void OnWildcardPortSlotSetFromSave__DelegateSignature(UFMDeviceCableWildcardPortComponent* WildcardPort, bool bHasConnections); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWildcardDataTypeChanged__DelegateSignature(UFMDeviceCableWildcardPortComponent* WildcardPort, EDeviceCablePortDataType DataType); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_SavedSlotIndex(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516969C8(relative to base address)
		void OnRep_SavedPortDataType(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751696994(relative to base address)
		void OnPlayerControllerPortDisconnectedWildcard(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751696980(relative to base address)
		void OnPlayerControllerPortConnectedWildcard(TArray<UFMDeviceCablePortComponent*>& ControllerPorts); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7516968E4(relative to base address)
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableManagerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x218 (0x2B8 - 0xA0)
	class UFMDeviceCableManagerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		UClass* DeviceCableClass; // 0xA8(0x8)
		int32_t StartingCablePoolSize; // 0xB0(0x4)
		EDeviceCableInteractionType CableInteractionType; // 0xB4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY
		TMap<EDeviceCablePortDataType, UClass*> ConnectionClasses; // 0xB8(0x50)
		FGameplayEventListenerBackwardCompatibleHandle PlayerEnteredHandle; // 0x108(0x48)
		TArray<AFMDeviceCable*> FreeDeviceCables; // 0x150(0x10)
		TMap<EDeviceCablePortDataType, UFMDeviceCableConnectionBase*> CableConnectionsByType; // 0x160(0x50)
		TMap<FGuid, TWeakObjectPtr> PortsInVolume; // 0x1B0(0x50)
		TMap<FGuid, FGuid> OriginalGuidToDuplicatedGuidThisFrame; // 0x200(0x50)
		TMap<TWeakObjectPtr, TWeakObjectPtr> SourceObjectToDuplicatedObjectThisFrame; // 0x250(0x50)
		TArray<TWeakObjectPtr> CablesToBeNotifiedOfVisualPermissions; // 0x2A0(0x10)
		bool bVisualPermissionsAlreadyEstablished; // 0x2B0(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x2B1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableManagerComponent");
			return ret;
		}

		EDeviceCableInteractionType GetCableInteractionType(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F92ED34(relative to base address)
	};

}
