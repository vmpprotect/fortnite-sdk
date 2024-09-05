#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: OnlineSubsystemUtils
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
	enum EOnlineProxyStoreOfferDiscountType
	{
		EOnlineProxyStoreOfferDiscountType__NotOnSale = 0,
		EOnlineProxyStoreOfferDiscountType__Percentage = 1,
		EOnlineProxyStoreOfferDiscountType__DiscountAmount = 2,
		EOnlineProxyStoreOfferDiscountType__PayAmount = 3,
	};


	// Enum /Script/OnlineSubsystemUtils.EInAppPurchaseStatus
	enum EInAppPurchaseStatus
	{
		EInAppPurchaseStatus__Invalid = 0,
		EInAppPurchaseStatus__Failed = 1,
		EInAppPurchaseStatus__Deferred = 2,
		EInAppPurchaseStatus__Canceled = 3,
		EInAppPurchaseStatus__Purchased = 4,
		EInAppPurchaseStatus__Restored = 5,
	};


	// Enum /Script/OnlineSubsystemUtils.EBeaconConnectionState
	enum EBeaconConnectionState
	{
		EBeaconConnectionState__Invalid = 0,
		EBeaconConnectionState__Closed = 1,
		EBeaconConnectionState__Pending = 2,
		EBeaconConnectionState__Open = 3,
	};


	// Enum /Script/OnlineSubsystemUtils.EClientRequestType
	enum EClientRequestType
	{
		EClientRequestType__NonePending = 0,
		EClientRequestType__ExistingSessionReservation = 1,
		EClientRequestType__ReservationUpdate = 2,
		EClientRequestType__EmptyServerReservation = 3,
		EClientRequestType__Reconnect = 4,
		EClientRequestType__Abandon = 5,
		EClientRequestType__ReservationRemoveMembers = 6,
		EClientRequestType__AddOrUpdateReservation = 7,
	};


	// Enum /Script/OnlineSubsystemUtils.EPartyReservationResult
	enum EPartyReservationResult
	{
		EPartyReservationResult__NoResult = 0,
		EPartyReservationResult__RequestPending = 1,
		EPartyReservationResult__GeneralError = 2,
		EPartyReservationResult__PartyLimitReached = 3,
		EPartyReservationResult__IncorrectPlayerCount = 4,
		EPartyReservationResult__RequestTimedOut = 5,
		EPartyReservationResult__ReservationDuplicate = 6,
		EPartyReservationResult__ReservationNotFound = 7,
		EPartyReservationResult__ReservationAccepted = 8,
		EPartyReservationResult__ReservationDenied = 9,
		EPartyReservationResult__ReservationDenied_CrossPlayRestriction = A,
		EPartyReservationResult__ReservationDenied_Banned = B,
		EPartyReservationResult__ReservationRequestCanceled = C,
		EPartyReservationResult__ReservationInvalid = D,
		EPartyReservationResult__BadSessionId = E,
		EPartyReservationResult__ReservationDenied_ContainsExistingPlayers = F,
	};


	// Enum /Script/OnlineSubsystemUtils.ESpectatorClientRequestType
	enum ESpectatorClientRequestType
	{
		ESpectatorClientRequestType__NonePending = 0,
		ESpectatorClientRequestType__ExistingSessionReservation = 1,
		ESpectatorClientRequestType__ReservationUpdate = 2,
		ESpectatorClientRequestType__EmptyServerReservation = 3,
		ESpectatorClientRequestType__Reconnect = 4,
		ESpectatorClientRequestType__Abandon = 5,
	};


	// Enum /Script/OnlineSubsystemUtils.ESpectatorReservationResult
	enum ESpectatorReservationResult
	{
		ESpectatorReservationResult__NoResult = 0,
		ESpectatorReservationResult__RequestPending = 1,
		ESpectatorReservationResult__GeneralError = 2,
		ESpectatorReservationResult__SpectatorLimitReached = 3,
		ESpectatorReservationResult__IncorrectPlayerCount = 4,
		ESpectatorReservationResult__RequestTimedOut = 5,
		ESpectatorReservationResult__ReservationDuplicate = 6,
		ESpectatorReservationResult__ReservationNotFound = 7,
		ESpectatorReservationResult__ReservationAccepted = 8,
		ESpectatorReservationResult__ReservationDenied = 9,
		ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction = A,
		ESpectatorReservationResult__ReservationDenied_Banned = B,
		ESpectatorReservationResult__ReservationRequestCanceled = C,
		ESpectatorReservationResult__ReservationInvalid = D,
		ESpectatorReservationResult__BadSessionId = E,
		ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers = F,
	};

}
