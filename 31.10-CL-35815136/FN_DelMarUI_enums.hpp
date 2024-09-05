#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/DelMarUI.EWidgetTransitionerInitialStatus
	enum EWidgetTransitionerInitialStatus
	{
		EWidgetTransitionerInitialStatus__Hidden = 0,
		EWidgetTransitionerInitialStatus__Shown = 1,
	};


	// Enum /Script/DelMarUI.EWidgetTransitionerStatus
	enum EWidgetTransitionerStatus
	{
		EWidgetTransitionerStatus__Hidden = 0,
		EWidgetTransitionerStatus__AnimatingIn = 1,
		EWidgetTransitionerStatus__Shown = 2,
		EWidgetTransitionerStatus__AnimatingOut = 3,
	};


	// Enum /Script/DelMarUI.EDelMarRearAlertVerticalHint
	enum EDelMarRearAlertVerticalHint
	{
		EDelMarRearAlertVerticalHint__Level = 0,
		EDelMarRearAlertVerticalHint__Up = 1,
		EDelMarRearAlertVerticalHint__Down = 2,
	};


	// Enum /Script/DelMarUI.EDelMarRankedProgressError
	enum EDelMarRankedProgressError
	{
		EDelMarRankedProgressError__None = 0,
		EDelMarRankedProgressError__MissingRankedComponent = 1,
		EDelMarRankedProgressError__RankedComponentSocialUserNotBound = 2,
		EDelMarRankedProgressError__RankedComponentUnableToQueryProgress = 3,
		EDelMarRankedProgressError__EmptyRankType = 4,
		EDelMarRankedProgressError__InitialProgressMapInvalid = 5,
		EDelMarRankedProgressError__CurrentProgressMapInvalid = 6,
		EDelMarRankedProgressError__InvalidCurrentTrack = 7,
		EDelMarRankedProgressError__InitialProgressEntryNotFound = 8,
		EDelMarRankedProgressError__CurrentProgressEntryNotFound = 9,
		EDelMarRankedProgressError__GameModeNotFound = A,
		EDelMarRankedProgressError__CurrentTierLessThanZero = B,
		EDelMarRankedProgressError__NotEnoughTiersForInitialTier = C,
		EDelMarRankedProgressError__NotEnoughTiersForCurrentTier = D,
		EDelMarRankedProgressError__FailedToFindUnrankedTier = E,
		EDelMarRankedProgressError__UnknownError = F,
	};


	// Enum /Script/DelMarUI.EDelMarTouchActionButtonState
	enum EDelMarTouchActionButtonState
	{
		EDelMarTouchActionButtonState__None = 0,
		EDelMarTouchActionButtonState__FullyDisabled = 1,
		EDelMarTouchActionButtonState__Disabled = 2,
		EDelMarTouchActionButtonState__Enabled = 3,
		EDelMarTouchActionButtonState__Ready = 4,
		EDelMarTouchActionButtonState__Pressed = 5,
		EDelMarTouchActionButtonState__Supercharged = 6,
	};


	// Enum /Script/DelMarUI.EDelMarInputInjectionState
	enum EDelMarInputInjectionState
	{
		EDelMarInputInjectionState__FIRST_PRESSED = 0,
		EDelMarInputInjectionState__PRESSED = 1,
		EDelMarInputInjectionState__RELEASED = 2,
		EDelMarInputInjectionState__CANCELLED = 3,
	};


	// Enum /Script/DelMarUI.EDelMarTouchInputTrackingState
	enum EDelMarTouchInputTrackingState
	{
		EDelMarTouchInputTrackingState__NOT_TRACKING = 0,
		EDelMarTouchInputTrackingState__TRACKING_WITH_INJECTION = 1,
		EDelMarTouchInputTrackingState__TRACKING_WITHOUT_INJECTION = 2,
	};


	// Enum /Script/DelMarUI.EDelMarDriftSteerState
	enum EDelMarDriftSteerState
	{
		EDelMarDriftSteerState__None = 0,
		EDelMarDriftSteerState__Controlled = 1,
		EDelMarDriftSteerState__DriftBoost = 2,
		EDelMarDriftSteerState__Uncontrolled = 3,
	};


	// Enum /Script/DelMarUI.EDelMarSpeedometerState
	enum EDelMarSpeedometerState
	{
		EDelMarSpeedometerState__Normal = 0,
		EDelMarSpeedometerState__SlowingDown = 1,
		EDelMarSpeedometerState__BonusSpeed = 2,
	};

}
