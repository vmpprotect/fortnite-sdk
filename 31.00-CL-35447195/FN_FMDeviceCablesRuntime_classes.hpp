#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FMDeviceCablesRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FMDeviceCablesRuntime.FMDeviceCable
	// Inherited from ABuildingActor -> AActor -> UObject
	// Size: 0x1F8 (0x920 - 0x728)
	class AFMDeviceCable : public ABuildingActor	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x728(0x18) UNKNOWN PROPERTY
		USplineComponent SplineComponent; // 0x740(0x8)
		UStaticMeshComponent DeviceCableHead; // 0x748(0x8)
		UClass SplineMeshComponentClass; // 0x750(0x8)
		TWeakObjectPtr ScalarStaticMesh; // 0x758(0x20)
		TWeakObjectPtr AudioStaticMesh; // 0x778(0x20)
		TWeakObjectPtr NoteStaticMesh; // 0x798(0x20)
		TWeakObjectPtr TextureStaticMesh; // 0x7B8(0x20)
		TWeakObjectPtr MeshStaticMesh; // 0x7D8(0x20)
		FName SplineLengthParam; // 0x7F8(0x4)
		FName SplineStartParam; // 0x7FC(0x4)
		FName SplineEndParam; // 0x800(0x4)
		FName PortTypeParam; // 0x804(0x4)
		float CableStubLength; // 0x808(0x4)
		float CableDistanceFromPortB; // 0x80C(0x4)
		unsigned char UnknownData03_7[0x110]; // 0x810(0x110) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCable");
			return ret;
		}

		void UpdateVisualParameters(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7D0F8
		void UpdateDeviceCableAnimator(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7D018
		void SetFocusedVisuals(bool bIsFocused); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7CF38
		void SetDeviceCableHeadScale(FVector Scale); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414D7CE58
		void OnSplineUpdated(bool bCollisionEnabled); // Flags: Event|Protected|BlueprintEvent 0x7FF414D7CD78
		void OnScalesUpdated(FVector StartScale, FVector EndScale); // Flags: Event|Protected|HasDefaults|BlueprintEvent 0x7FF414D7CC98
		void OnRep_ServerPortB(); // Flags: Final|Native|Private 0x7FF414D7CBB8
		void OnRep_ServerPortA(); // Flags: Final|Native|Private 0x7FF414D7CAD8
		void OnRep_bPermittedToShowVisuals(); // Flags: Final|Native|Private 0x7FF414D7C9F8
		void OnCableReturned(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D7C918
		void OnCablePortsUpdated(EDeviceCablePortDataType CurrentPortDataType); // Flags: Event|Protected|BlueprintEvent 0x7FF414D7C838
		void OnCableGrabbed(bool bThroughReplication); // Flags: Event|Protected|BlueprintEvent 0x7FF414D7C758
		void OnCableDisconnected(bool bThroughReplication); // Flags: Event|Protected|BlueprintEvent 0x7FF414D7C678
		void OnCableConnected(bool bThroughReplication); // Flags: Event|Protected|BlueprintEvent 0x7FF414D7C598
		UFMDeviceCablePortComponent GetPortB(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D7C4B8
		UFMDeviceCablePortComponent GetPortA(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D7C3D8
		UStaticMeshComponent GetDeviceCableHead(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D7C2F8
		UFMDeviceCablePortComponent GetConstantPort(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D7C218
		USplineComponent GetCableSpline(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D7C138
		EDeviceCablePortDataType GetCableDataType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D7C058
		void Disconnect(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7BF78
		void ConnectPort(UFMDeviceCablePortComponent Port); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7BE98
		void ConnectConstantPort(UFMDeviceCablePortComponent Port); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7BDB8
		void BuildMeshOnSpline(bool bCollisionEnabled); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D7BCD8
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableAnimatorTickSubsystem
	// Inherited from UFortManagedTickSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x120 - 0xD0)
	class UFMDeviceCableAnimatorTickSubsystem : public UFortManagedTickSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0xD0(0x50) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x50]; // 0x28(0x50) UNKNOWN PROPERTY
		TWeakObjectPtr OwnerPort; // 0x78(0x8)
		unsigned char UnknownData03_7[0x68]; // 0x80(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase");
			return ret;
		}

		void SetOwnerPort(UFMDeviceCablePortComponent OwnerPort); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7D718
		void RemoveMaterialInstance(UMaterialInstanceDynamic InMaterialInstance); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7D638
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Protected|BlueprintEvent 0x7FF414D7D558
		void OnPortArtifactUpdated(); // Flags: Final|Native|Private 0x7FF414D7D478
		void OnConnectionStarted(UFMDeviceCableConnectionBase NewConnection); // Flags: Final|Native|Private 0x7FF414D7D398
		void OnConnectionEnded(UFMDeviceCableConnectionBase EndedConnection); // Flags: Final|Native|Private 0x7FF414D7D2B8
		void AddMaterialInstance(UMaterialInstanceDynamic InMaterialInstance); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7D1D8
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableAnimatorMidiEvent
	// Inherited from UFMDeviceCableAnimatorBase -> UObject
	// Size: 0xA8 (0x190 - 0xE8)
	class UFMDeviceCableAnimatorMidiEvent : public UFMDeviceCableAnimatorBase	
	{
	public:
		FName NoteTextureParam; // 0xE8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
		UCurveFloat NoteShapeCurve; // 0xF0(0x8)
		float NotePercentOfTexture; // 0xF8(0x4)
		float NoteTravelBeats; // 0xFC(0x4)
		float NoteStartDelayBeats; // 0x100(0x4)
		unsigned char UnknownData04_6[0x14]; // 0x104(0x14) UNKNOWN PROPERTY
		UTexture2D NoteTexture; // 0x118(0x8)
		UFabricMetaSoundPatchWrapper PatchWrapper; // 0x120(0x8)
		unsigned char UnknownData05_7[0x68]; // 0x128(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMidiEvent");
			return ret;
		}

		void OnMetaSoundOutputIntChangedBatch(FName& OutputName, TArray& Output); // Flags: Final|Native|Private|HasOutParms 0x7FF414D7D7F8
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider
	// Inherited from UFMDeviceCableAnimatorBase -> UObject
	// Size: 0x18 (0x100 - 0xE8)
	class UFMDeviceCableAnimatorFloatProvider : public UFMDeviceCableAnimatorBase	
	{
	public:
		FName CableDataParam; // 0xE8(0x4)
		FName FloatProviderTypeParam; // 0xEC(0x4)
		TArray FloatProviders; // 0xF0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider");
			return ret;
		}

		void SetFloatProviders(TArray& InFloatProviders); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D7DA98
		void SetFloatProvider(UFabricFloatProviderBase InFloatProvider); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7D9B8
		void OnFloatChanged(float CurrentFloat, UFabricFloatProviderBase FloatProvider); // Flags: Final|Native|Protected 0x7FF414D7D8D8
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableAnimatorTextureProvider
	// Inherited from UFMDeviceCableAnimatorBase -> UObject
	// Size: 0x10 (0xF8 - 0xE8)
	class UFMDeviceCableAnimatorTextureProvider : public UFMDeviceCableAnimatorBase	
	{
	public:
		FName CableDataParam; // 0xE8(0x4)
		float DecayRate; // 0xEC(0x4)
		UFabricTextureProviderBase TextureProvider; // 0xF0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTextureProvider");
			return ret;
		}

		void SetTextureProvider(UFabricTextureProviderBase InTextureProvider); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7DB78
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableAnimatorMeshProvider
	// Inherited from UFMDeviceCableAnimatorBase -> UObject
	// Size: 0x10 (0xF8 - 0xE8)
	class UFMDeviceCableAnimatorMeshProvider : public UFMDeviceCableAnimatorBase	
	{
	public:
		FName CableDataParam; // 0xE8(0x4)
		float DecayRate; // 0xEC(0x4)
		UFabricMeshProviderBase MeshProvider; // 0xF0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMeshProvider");
			return ret;
		}

		void SetMeshProvider(UFabricMeshProviderBase InMeshProvider); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7DC58
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
		UTexture2D WaveformTexture; // 0x110(0x8)
		UTexture2D AmplitudeTexture; // 0x118(0x8)
		UFabricMetaSoundPatchWrapper PatchWrapper; // 0x120(0x8)
		unsigned char UnknownData01_7[0x40]; // 0x128(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer");
			return ret;
		}

		void SetAnalyzerName(FName AnalyzerName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7DEF8
		void OnMetaSoundOutputFloatChangedBatch(FName& OutputName, TArray& Output, FFabricMetaSoundPatchWrapperPeakTamer& PeakTamer, float DeltaSeconds); // Flags: Final|Native|Private|HasOutParms 0x7FF414D7DE18
		float GetLastAnalyzerValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D7DD38
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableConnectionBase
	// Inherited from UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UFMDeviceCableConnectionBase : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x58]; // 0x28(0x58) UNKNOWN PROPERTY
		bool bConnectionActive; // 0x80(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
		TArray BuildingCompositeArtifactFromPorts; // 0x88(0x10)
		FFMDeviceCableConnectedDevicesInfo ConnectedDevicesInfo; // 0x98(0x30)
		FFMDeviceCableDefaultOutputs DefaultOutputs; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase");
			return ret;
		}

		void StartConnectionBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D7E198
		void RebuildDirtyConnectionBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D7E0B8
		void EndConnectionBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D7DFD8
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
		unsigned char UnknownData01_7[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY

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
		UClass ControllerCablePort; // 0xC0(0x8)
		UClass DeviceCableManagerClass; // 0xC8(0x8)
		TWeakObjectPtr CurrentPlayerPawn; // 0xD0(0x8)
		AFortPlayerControllerAthena PlayerController; // 0xD8(0x8)
		UFMDeviceCablePortComponent LocalControllerPort; // 0xE0(0x8)
		UFMDeviceCablePortComponent ServerControllerPort; // 0xE8(0x8)
		TWeakObjectPtr LocalControllerPortActor; // 0xF0(0x8)
		UFMDeviceCableManagerComponent LocalDeviceCableManager; // 0xF8(0x8)
		UFMDeviceCableManagerComponent ServerDeviceCableManager; // 0x100(0x8)
		bool bFitIsEquipped; // 0x108(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x109(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent");
			return ret;
		}

		void SetControllerTargetForControllerPortBP(AActor ControllerPortActor, APlayerController Controller); // Flags: Event|Protected|BlueprintEvent 0x7FF4140AAD80
		void ServerVolumeChanged(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF4140AACA0
		void ServerSelectPort(UFMDeviceCablePortComponent SelectedPort); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF4140AABC0
		void ServerPortsUpdated(TArray PortChangeInfos); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF4140AAAE0
		void ServerPortActivatedStateChanged(UFMDeviceCablePortComponent Port, EDeviceCableActivatedState ActivatedState); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 0x7FF4140AA998
		void ServerDisconnectController(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF4140AA8B8
		void SelectPort(UFMDeviceCablePortComponent SelectedPort); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140AA7D8
		void OnWeaponHolstered(); // Flags: Final|Native|Private 0x7FF4140AA6F8
		void OnWeaponEquipped(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Private 0x7FF4140AA618
		void OnRep_ServerDeviceCableManager(); // Flags: Final|Native|Private 0x7FF4140AA538
		void OnRep_ServerControllerPort(); // Flags: Final|Native|Private 0x7FF4140AA458
		void OnNoFabricInteractablesHit(); // Flags: Final|Native|Private 0x7FF4140AA378
		void OnFortPawnChanged(AFortPawn NewPawn); // Flags: Final|Native|Private 0x7FF4140AA298
		void OnEmoteStarted(UFortItemDefinition MontageItemDef, AFortPawn PawnEmoting); // Flags: Final|Native|Private 0x7FF4140AA1B8
		void OnCreativePlotLinkedVolumeChanged(AFortVolume FortVolume); // Flags: Final|Native|Private 0x7FF4140AA0D8
		void OnControllerCableDisconnected__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140A9FF8
		void OnControllerCableConnected__DelegateSignature(TArray& ConnectedPorts); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF4140A9F18
		bool IsHoldingCable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140A9E38
		bool IsCableConnectionValid(UFMDeviceCablePortComponent OtherPort); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140A9D58
		void DropCable(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140A9C78
		void ClientPortUpdatesRejected(TArray PortChangeInfos); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient 0x7FF4140A9A70
	};


	// Class FMDeviceCablesRuntime.FMDeviceCablePortComponent
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x310 (0x8A0 - 0x590)
	class UFMDeviceCablePortComponent : public UStaticMeshComponent	
	{
	public:
		unsigned char UnknownData07_3[0x38]; // 0x590(0x38) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCablePortSizeUpdated; // 0x5C8(0x10)
		FMulticastInlineDelegate OnAnimatorCreated; // 0x5D8(0x10)
		FMulticastInlineDelegate OnConnected; // 0x5E8(0x10)
		unsigned char UnknownData08_6[0x20]; // 0x5F8(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnConnectedDuringGameplay; // 0x618(0x10)
		FMulticastInlineDelegate OnDisconnected; // 0x628(0x10)
		FMulticastInlineDelegate OnConnectionStarted; // 0x638(0x10)
		FMulticastInlineDelegate OnConnectionEnded; // 0x648(0x10)
		FMulticastInlineDelegate OnPortArtifactUpdated; // 0x658(0x10)
		FMulticastInlineDelegate OnReceiveFloatProviders; // 0x668(0x10)
		FMulticastInlineDelegate OnDisconnectFloatProvider; // 0x678(0x10)
		UClass DeviceCableManagerClass; // 0x688(0x8)
		TWeakObjectPtr OutputStaticMesh; // 0x690(0x20)
		TWeakObjectPtr AudioInStaticMesh; // 0x6B0(0x20)
		TWeakObjectPtr NoteInStaticMesh; // 0x6D0(0x20)
		TWeakObjectPtr TextureInStaticMesh; // 0x6F0(0x20)
		TWeakObjectPtr MeshInStaticMesh; // 0x710(0x20)
		TWeakObjectPtr ScalarInStaticMesh; // 0x730(0x20)
		TMap CableAnimatorClasses; // 0x750(0x50)
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
		unsigned char UnknownData09_6[0x1]; // 0x7AB(0x1) UNKNOWN PROPERTY
		FName EnterVolumeTag; // 0x7AC(0x4)
		FName ExitVolumeTag; // 0x7B0(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x7B4(0x4) UNKNOWN PROPERTY
		TArray ConnectedPorts; // 0x7B8(0x10)
		TArray ServerConnectedPorts; // 0x7C8(0x10)
		TArray CurrentConnections; // 0x7D8(0x10)
		AFMDeviceCable ConstantCable; // 0x7E8(0x8)
		UFMDeviceCableManagerComponent DeviceCableManager; // 0x7F0(0x8)
		TArray OtherPortsOnActor; // 0x7F8(0x10)
		EDeviceCableActivatedState PortActivatedState; // 0x808(0x1)
		EDeviceCableActivatedState ServerPortActivatedState; // 0x809(0x1)
		EDeviceCablePortSelectableState PortSelectableState; // 0x80A(0x1)
		unsigned char UnknownData11_6[0x5]; // 0x80B(0x5) UNKNOWN PROPERTY
		UFMDeviceCableAnimatorBase DeviceCableAnimator; // 0x810(0x8)
		FGuid ConnectionGuid; // 0x818(0x10)
		TArray ConnectedGuids; // 0x828(0x10)
		FFMDeviceCableArtifact CachedArtifact; // 0x838(0x20)
		unsigned char UnknownData12_6[0x10]; // 0x858(0x10) UNKNOWN PROPERTY
		TArray PendingConnectionBroadcasts; // 0x868(0x10)
		FGuid SaveGuid; // 0x878(0x10)
		unsigned char UnknownData13_7[0x18]; // 0x888(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent");
			return ret;
		}

		void UpdateStaticMesh(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4140ADC80
		void UpdateCableHiddenStateForConnectedPort(UFMDeviceCablePortComponent OtherPort, bool bNewHidden); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140ADBA0
		void UpdateCableHiddenState(UFMDeviceCablePortComponent OtherPort); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140ADAC0
		void SetPortVisibility(bool bPortVisible); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140AD9E0
		void SetPortSelectableState(EDeviceCablePortSelectableState NewSelectableState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140AD900
		void SetPortConnectionsDirty(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140AD820
		void SetPortActivatedState(EDeviceCableActivatedState NewActivatedState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140AD740
		void SetDeviceCableAnimator(UFMDeviceCableAnimatorBase InAnimator); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140AD660
		void SetConnectedCablesHidden(bool bNewHidden); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140AD580
		void SetCachedArtifact(FFMDeviceCableArtifact& InCachedArtifact); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4140AD4A0
		void SetCablesHidden(bool bNewHidden); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140AD3C0
		EPortSelectStatus SelectWithStaticOutputInteraction(UFMDeviceCablePortComponent PlayerSelectionPort, TArray& OutPortUpdates); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140AD2E0
		EPortSelectStatus Select(UFMDeviceCablePortComponent PlayerSelectionPort, TArray& OutPortUpdates); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4140AD200
		void OnRep_ServerPortActivatedState(); // Flags: Final|Native|Private 0x7FF4140AD120
		void OnRep_ServerConnectedPorts(); // Flags: Final|Native|Private 0x7FF4140AD040
		void OnRep_DeviceCableManager(); // Flags: Final|Native|Private 0x7FF4140ACF60
		void OnRep_ConstantCable(); // Flags: Final|Native|Private 0x7FF4140ACE80
		void OnReceiveFloatProviders__DelegateSignature(TArray& FloatProviders); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF4140ACDA0
		void OnPortArtifactUpdated__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140ACCC0
		void OnPlayerControllerPortDisconnected(); // Flags: Final|Native|Private 0x7FF4140ACBE0
		void OnPlayerControllerPortConnected(TArray& ControllerPorts); // Flags: Final|Native|Private|HasOutParms 0x7FF4140ACB00
		void OnDisconnectFloatProvider__DelegateSignature(UFabricFloatProviderBase FloatProvider); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140ACA20
		void OnDisconnected__DelegateSignature(UFMDeviceCablePortComponent DisconnectedPort); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140AC940
		void OnConnectionStarted__DelegateSignature(UFMDeviceCableConnectionBase NewConnection); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140AC860
		void OnConnectionEnded__DelegateSignature(UFMDeviceCableConnectionBase EndedConnection); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140AC780
		void OnConnectedWithSourcePort__DelegateSignature(UFMDeviceCablePortComponent SourcePort, UFMDeviceCablePortComponent OtherPort); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140AC6A0
		void OnConnected__DelegateSignature(UFMDeviceCablePortComponent ConnectedPort); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140AC5C0
		void OnAnimatorCreated__DelegateSignature(UFMDeviceCableAnimatorBase Animator); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140AC4E0
		bool MatchesPortConnectionType(UFMDeviceCablePortComponent OtherPort); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140AC400
		bool IsConnectedToPort(UFMDeviceCablePortComponent Port); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140AC320
		bool IsConnected(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140AC240
		bool HasSavedConnections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140AC160
		TArray GetPreviousPortsInConnections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140AC080
		EDeviceCablePortSelectableState GetPortSelectableState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ABF38
		EDeviceCablePortFlowType GetPortFlowType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ABE58
		EDeviceCablePortDataType GetPortDataType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ABD10
		EDeviceCableActivatedState GetPortActivatedState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ABC30
		TArray GetOtherPortsOnActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ABB50
		TArray GetNextPortsInConnections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ABA70
		bool GetIsTerminalPort(EDeviceCablePortFlowType FlowType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140AB928
		bool GetIsPlayerPort(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140AB848
		bool GetIsModulationPort(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140AB768
		FGuid GetGuid(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4140AB688
		UFMDeviceCableAnimatorBase GetDeviceCableAnimator(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140AB5A8
		AFMDeviceCable GetConstantCable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4140AB4C8
		TArray GetConnections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140AB3E8
		TArray GetConnectedPorts(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140AB308
		FFMDeviceCableArtifact GetCachedArtifact(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140AB168
		EDeviceCablePortAnimationSyncType GetAnimationSyncType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140AB020
		void FabricCablePortSizeUpdated__DelegateSignature(float Size); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140AAF40
		bool ActorHasValidControllerBP(AActor Actor, AFortPlayerPawn& OutFortPlayerPawn, APlayerController& OutPlayerController); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF4140AAE60
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableModulatorPortComponent
	// Inherited from UFMDeviceCablePortComponent -> UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x8D0 - 0x8A0)
	class UFMDeviceCableModulatorPortComponent : public UFMDeviceCablePortComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8A0(0x8) UNKNOWN PROPERTY
		FString AssociatedProperty; // 0x8A8(0x10)
		TWeakObjectPtr AssociatedObject; // 0x8B8(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x8C0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableModulatorPortComponent");
			return ret;
		}

		void SetDeviceCableManager(UFMDeviceCableManagerComponent InDeviceCableManager); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D7E278
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

		FSoundSourceBusSendInfo MakeSoundSourceBusSendInfo(USoundSourceBus SoundSourceBus); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D7E438
		USoundSourceBus DeepCopySoundSourceBus(UObject Context, UObject Outer, USoundSourceBus Source); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D7E358
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x4C0 (0x560 - 0xA0)
	class UFMDeviceCableWildcardOrderingComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData09_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FFMDeviceCableOrderingMovementInfo InputsShowHideMovementInfo; // 0xA8(0x30)
		unsigned char UnknownData10_6[0xB8]; // 0xD8(0xB8) UNKNOWN PROPERTY
		FFMDeviceCableOrderingMovementInfo InOutMovementInfo; // 0x190(0x30)
		FFMDeviceCableOrderingMovementInfo TransitionMovementInfo; // 0x1C0(0x30)
		unsigned char UnknownData11_6[0xB8]; // 0x1F0(0xB8) UNKNOWN PROPERTY
		FFMDeviceCableOrderingMovementInfo CollapseExpandMovementInfo; // 0x2A8(0x30)
		unsigned char UnknownData12_6[0xB8]; // 0x2D8(0xB8) UNKNOWN PROPERTY
		FVector CollapsedOutputPosition; // 0x390(0x18)
		float VisualChangeTimeoutTime; // 0x3A8(0x4)
		unsigned char UnknownData13_6[0x4]; // 0x3AC(0x4) UNKNOWN PROPERTY
		FName ClosedMeshTag; // 0x3B0(0x4)
		FName TopMeshTag; // 0x3B4(0x4)
		FName MiddleMeshTag; // 0x3B8(0x4)
		FName BottomMeshTag; // 0x3BC(0x4)
		FName InputPortParentTag; // 0x3C0(0x4)
		unsigned char UnknownData14_6[0x4]; // 0x3C4(0x4) UNKNOWN PROPERTY
		UStaticMeshComponent ClosedMesh; // 0x3C8(0x8)
		UStaticMeshComponent TopMesh; // 0x3D0(0x8)
		TArray MiddleMeshes; // 0x3D8(0x10)
		UStaticMeshComponent BottomMesh; // 0x3E8(0x8)
		unsigned char UnknownData15_6[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		TArray InputWildcardPorts; // 0x3F8(0x10)
		USceneComponent InputWildcardPortParent; // 0x408(0x8)
		TArray OutputWildcardPorts; // 0x410(0x10)
		unsigned char UnknownData16_6[0x120]; // 0x420(0x120) UNKNOWN PROPERTY
		TArray ServerPortStates; // 0x540(0x10)
		unsigned char UnknownData17_7[0x10]; // 0x550(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent");
			return ret;
		}

		void SetOutputRoot(FVector RootLocation); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414D7EEB8
		void SetOutputPortsExpanded(bool bExpanded); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7EDD8
		void SetInputRoot(FVector RootLocation); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414D7ECF8
		void OnRep_ServerPortStates(); // Flags: Final|Native|Private 0x7FF414D7EC18
		void OnOutputPortSlotSetFromSave(UFMDeviceCableWildcardPortComponent WildcardPort, bool bHasConnections); // Flags: Final|Native|Private 0x7FF414D7EB38
		void OnOutputPortDisconnected(UFMDeviceCablePortComponent SourcePort, UFMDeviceCablePortComponent DisconnectedPort); // Flags: Final|Native|Private 0x7FF414D7EA58
		void OnOutputPortConnected(UFMDeviceCablePortComponent SourcePort, UFMDeviceCablePortComponent ConnectedPort); // Flags: Final|Native|Private 0x7FF414D7E978
		void OnInputPortDisconnected(UFMDeviceCablePortComponent DisconnectedPort); // Flags: Final|Native|Private 0x7FF414D7E898
		void OnInputPortDataTypeChanged(UFMDeviceCableWildcardPortComponent WildcardPort, EDeviceCablePortDataType DataType); // Flags: Final|Native|Private 0x7FF414D7E7B8
		void OnInputPortConnected(UFMDeviceCablePortComponent ConnectedPort); // Flags: Final|Native|Private 0x7FF414D7E6D8
		void InitializeOutputSlots(); // Flags: Final|Native|Private 0x7FF414D7E5F8
		void FinishVisualChange(); // Flags: Final|Native|Protected 0x7FF414D7E518
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
		unsigned char UnknownData01_7[0x17]; // 0x8C9(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent");
			return ret;
		}

		void OnWildcardPortSlotSetFromSave__DelegateSignature(UFMDeviceCableWildcardPortComponent WildcardPort, bool bHasConnections); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140AE290
		void OnWildcardDataTypeChanged__DelegateSignature(UFMDeviceCableWildcardPortComponent WildcardPort, EDeviceCablePortDataType DataType); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140AE1B0
		void OnRep_SavedSlotIndex(); // Flags: Final|Native|Private 0x7FF4140AE0D0
		void OnRep_SavedPortDataType(); // Flags: Final|Native|Private 0x7FF4140ADFF0
		void OnPlayerControllerPortDisconnectedWildcard(); // Flags: Final|Native|Private 0x7FF4140ADF10
		void OnPlayerControllerPortConnectedWildcard(TArray& ControllerPorts); // Flags: Final|Native|Private|HasOutParms 0x7FF4140ADE30
	};


	// Class FMDeviceCablesRuntime.FMDeviceCableManagerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x218 (0x2B8 - 0xA0)
	class UFMDeviceCableManagerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		UClass DeviceCableClass; // 0xA8(0x8)
		int32_t StartingCablePoolSize; // 0xB0(0x4)
		EDeviceCableInteractionType CableInteractionType; // 0xB4(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY
		TMap ConnectionClasses; // 0xB8(0x50)
		FGameplayEventListenerBackwardCompatibleHandle PlayerEnteredHandle; // 0x108(0x48)
		TArray FreeDeviceCables; // 0x150(0x10)
		TMap CableConnectionsByType; // 0x160(0x50)
		TMap PortsInVolume; // 0x1B0(0x50)
		TMap OriginalGuidToDuplicatedGuidThisFrame; // 0x200(0x50)
		TMap SourceObjectToDuplicatedObjectThisFrame; // 0x250(0x50)
		TArray CablesToBeNotifiedOfVisualPermissions; // 0x2A0(0x10)
		bool bVisualPermissionsAlreadyEstablished; // 0x2B0(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x2B1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMDeviceCablesRuntime.FMDeviceCableManagerComponent");
			return ret;
		}

		EDeviceCableInteractionType GetCableInteractionType(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7EF98
	};

}
