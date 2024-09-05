#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NetCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/NetCore.ENetworkFailure
	enum ENetworkFailure
	{
		ENetworkFailure__NetDriverAlreadyExists = 0,
		ENetworkFailure__NetDriverCreateFailure = 1,
		ENetworkFailure__NetDriverListenFailure = 2,
		ENetworkFailure__ConnectionLost = 3,
		ENetworkFailure__ConnectionTimeout = 4,
		ENetworkFailure__FailureReceived = 5,
		ENetworkFailure__OutdatedClient = 6,
		ENetworkFailure__OutdatedServer = 7,
		ENetworkFailure__PendingConnectionFailure = 8,
		ENetworkFailure__NetGuidMismatch = 9,
		ENetworkFailure__NetChecksumMismatch = A,
	};


	// Enum /Script/NetCore.EReplicationSystem
	enum EReplicationSystem
	{
		EReplicationSystem__Default = 0,
		EReplicationSystem__Generic = 1,
		EReplicationSystem__Iris = 2,
	};


	// Enum /Script/NetCore.ENetCloseResult
	enum ENetCloseResult
	{
		ENetCloseResult__NetDriverAlreadyExists = 0,
		ENetCloseResult__NetDriverCreateFailure = 1,
		ENetCloseResult__NetDriverListenFailure = 2,
		ENetCloseResult__ConnectionLost = 3,
		ENetCloseResult__ConnectionTimeout = 4,
		ENetCloseResult__FailureReceived = 5,
		ENetCloseResult__OutdatedClient = 6,
		ENetCloseResult__OutdatedServer = 7,
		ENetCloseResult__PendingConnectionFailure = 8,
		ENetCloseResult__NetGuidMismatch = 9,
		ENetCloseResult__NetChecksumMismatch = A,
		ENetCloseResult__SecurityMalformedPacket = B,
		ENetCloseResult__SecurityInvalidData = C,
		ENetCloseResult__SecurityClosed = D,
		ENetCloseResult__Unknown = E,
		ENetCloseResult__Success = F,
		ENetCloseResult__Extended = 10,
		ENetCloseResult__HostClosedConnection = 11,
		ENetCloseResult__Disconnect = 12,
		ENetCloseResult__Upgrade = 13,
		ENetCloseResult__PreLoginFailure = 14,
		ENetCloseResult__JoinFailure = 15,
		ENetCloseResult__JoinSplitFailure = 16,
		ENetCloseResult__AddressResolutionFailed = 17,
		ENetCloseResult__RPCDoS = 18,
		ENetCloseResult__Cleanup = 19,
		ENetCloseResult__MissingLevelPackage = 1A,
		ENetCloseResult__PacketHandlerIncomingError = 1B,
		ENetCloseResult__ZeroLastByte = 1C,
		ENetCloseResult__ZeroSize = 1D,
		ENetCloseResult__ReadHeaderFail = 1E,
		ENetCloseResult__ReadHeaderExtraFail = 1F,
		ENetCloseResult__AckSequenceMismatch = 20,
		ENetCloseResult__BunchBadChannelIndex = 21,
		ENetCloseResult__BunchChannelNameFail = 22,
		ENetCloseResult__BunchWrongChannelType = 23,
		ENetCloseResult__BunchHeaderOverflow = 24,
		ENetCloseResult__BunchDataOverflow = 25,
		ENetCloseResult__BunchServerPackageMapExports = 26,
		ENetCloseResult__BunchPrematureControlChannel = 27,
		ENetCloseResult__BunchPrematureChannel = 28,
		ENetCloseResult__BunchPrematureControlClose = 29,
		ENetCloseResult__UnknownChannelType = 2A,
		ENetCloseResult__PrematureSend = 2B,
		ENetCloseResult__CorruptData = 2C,
		ENetCloseResult__SocketSendFailure = 2D,
		ENetCloseResult__BadChildConnectionIndex = 2E,
		ENetCloseResult__LogLimitInstant = 2F,
		ENetCloseResult__LogLimitSustained = 30,
		ENetCloseResult__EncryptionFailure = 31,
		ENetCloseResult__EncryptionTokenMissing = 32,
		ENetCloseResult__ReceivedNetGUIDBunchFail = 33,
		ENetCloseResult__MaxReliableExceeded = 34,
		ENetCloseResult__ReceivedNextBunchFail = 35,
		ENetCloseResult__ReceivedNextBunchQueueFail = 36,
		ENetCloseResult__PartialInitialReliableDestroy = 37,
		ENetCloseResult__PartialMergeReliableDestroy = 38,
		ENetCloseResult__PartialInitialNonByteAligned = 39,
		ENetCloseResult__PartialNonByteAligned = 3A,
		ENetCloseResult__PartialFinalPackageMapExports = 3B,
		ENetCloseResult__PartialTooLarge = 3C,
		ENetCloseResult__AlreadyOpen = 3D,
		ENetCloseResult__ReliableBeforeOpen = 3E,
		ENetCloseResult__ReliableBufferOverflow = 3F,
		ENetCloseResult__RPCReliableBufferOverflow = 40,
		ENetCloseResult__ControlChannelClose = 41,
		ENetCloseResult__ControlChannelEndianCheck = 42,
		ENetCloseResult__ControlChannelPlayerChannelFail = 43,
		ENetCloseResult__ControlChannelMessageUnknown = 44,
		ENetCloseResult__ControlChannelMessageFail = 45,
		ENetCloseResult__ControlChannelMessagePayloadFail = 46,
		ENetCloseResult__ControlChannelBunchOverflowed = 47,
		ENetCloseResult__ControlChannelQueueBunchOverflowed = 48,
		ENetCloseResult__ClientHasMustBeMappedGUIDs = 49,
		ENetCloseResult__ClientSentDestructionInfo = 4A,
		ENetCloseResult__UnregisteredMustBeMappedGUID = 4B,
		ENetCloseResult__ObjectReplicatorReceivedBunchFail = 4C,
		ENetCloseResult__ContentBlockFail = 4D,
		ENetCloseResult__ContentBlockHeaderRepLayoutFail = 4E,
		ENetCloseResult__ContentBlockHeaderIsActorFail = 4F,
		ENetCloseResult__ContentBlockHeaderObjFail = 50,
		ENetCloseResult__ContentBlockHeaderPrematureEnd = 51,
		ENetCloseResult__ContentBlockHeaderSubObjectActor = 52,
		ENetCloseResult__ContentBlockHeaderBadParent = 53,
		ENetCloseResult__ContentBlockHeaderInvalidCreate = 54,
		ENetCloseResult__ContentBlockHeaderStablyNamedFail = 55,
		ENetCloseResult__ContentBlockHeaderNoSubObjectClass = 56,
		ENetCloseResult__ContentBlockHeaderUObjectSubObject = 57,
		ENetCloseResult__ContentBlockHeaderAActorSubObject = 58,
		ENetCloseResult__ContentBlockHeaderFail = 59,
		ENetCloseResult__ContentBlockPayloadBitsFail = 5A,
		ENetCloseResult__FieldHeaderRepIndex = 5B,
		ENetCloseResult__FieldHeaderBadRepIndex = 5C,
		ENetCloseResult__FieldHeaderPayloadBitsFail = 5D,
		ENetCloseResult__FieldPayloadFail = 5E,
		ENetCloseResult__ReplicationChannelCountMaxedOut = 5F,
		ENetCloseResult__BeaconControlFlowError = 60,
		ENetCloseResult__BeaconUnableToParsePacket = 61,
		ENetCloseResult__BeaconAuthenticationFailure = 62,
		ENetCloseResult__BeaconLoginInvalidIdError = 63,
		ENetCloseResult__BeaconLoginInvalidAuthHandlerError = 64,
		ENetCloseResult__BeaconAuthError = 65,
		ENetCloseResult__BeaconSpawnClientWorldPackageNameError = 66,
		ENetCloseResult__BeaconSpawnExistingActorError = 67,
		ENetCloseResult__BeaconSpawnFailureError = 68,
		ENetCloseResult__BeaconSpawnNetGUIDAckNoActor = 69,
		ENetCloseResult__BeaconSpawnNetGUIDAckNoHost = 6A,
		ENetCloseResult__BeaconSpawnUnexpectedError = 6B,
		ENetCloseResult__IrisProtocolMismatch = 6C,
		ENetCloseResult__IrisNetRefHandleError = 6D,
		ENetCloseResult__FaultDisconnect = 6E,
		ENetCloseResult__NotRecoverable = 6F,
	};


	// Enum /Script/NetCore.EFastArraySerializerDeltaFlags
	enum EFastArraySerializerDeltaFlags
	{
		EFastArraySerializerDeltaFlags__None = 0,
		EFastArraySerializerDeltaFlags__HasBeenSerialized = 1,
		EFastArraySerializerDeltaFlags__HasDeltaBeenRequested = 2,
		EFastArraySerializerDeltaFlags__IsUsingDeltaSerialization = 4,
	};

}
