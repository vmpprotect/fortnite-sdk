#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: UIChart
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/UIChart.EWidgetStateComponentUnloadDefaultBehavior
	enum EWidgetStateComponentUnloadDefaultBehavior
	{
		EWidgetStateComponentUnloadDefaultBehavior__WaitForAnimations = 0,
		EWidgetStateComponentUnloadDefaultBehavior__DoNotWaitForAnimations = 1,
	};


	// Enum /Script/UIChart.EUIStateTransitionUrgency
	enum EUIStateTransitionUrgency
	{
		EUIStateTransitionUrgency__Normal = 0,
		EUIStateTransitionUrgency__High = 1,
	};


	// Enum /Script/UIChart.EUIStateAutomationType
	enum EUIStateAutomationType
	{
		EUIStateAutomationType__Initial = 0,
		EUIStateAutomationType__Continual = 1,
	};


	// Enum /Script/UIChart.EUIStateChartContextConditionType
	enum EUIStateChartContextConditionType
	{
		EUIStateChartContextConditionType__IsEmpty = 0,
		EUIStateChartContextConditionType__IsNotEmpty = 1,
		EUIStateChartContextConditionType__IsEqualTo = 2,
		EUIStateChartContextConditionType__IsNotEqualTo = 3,
		EUIStateChartContextConditionType__IsGreaterThan = 4,
		EUIStateChartContextConditionType__IsGreaterThanOrEqualTo = 5,
		EUIStateChartContextConditionType__IsLessThan = 6,
		EUIStateChartContextConditionType__IsLessThanOrEqualTo = 7,
		EUIStateChartContextConditionType__IsTrue = 8,
		EUIStateChartContextConditionType__IsNotTrue = 9,
		EUIStateChartContextConditionType__StartsWith = A,
		EUIStateChartContextConditionType__EndsWith = B,
		EUIStateChartContextConditionType__Contains = C,
	};


	// Enum /Script/UIChart.EUIChartRegionTransitionScope
	enum EUIChartRegionTransitionScope
	{
		EUIChartRegionTransitionScope__ThisRegionOnly = 0,
		EUIChartRegionTransitionScope__ThisRegionOrChildRegions = 1,
	};


	// Enum /Script/UIChart.EStateComponentStatus
	enum EStateComponentStatus
	{
		EStateComponentStatus__Inactive = 0,
		EStateComponentStatus__PreparingForLoad = 1,
		EStateComponentStatus__Loading = 2,
		EStateComponentStatus__DoneLoading = 3,
		EStateComponentStatus__Operational = 4,
		EStateComponentStatus__PreparingForUnload = 5,
		EStateComponentStatus__Unloading = 6,
		EStateComponentStatus__DoneUnloading = 7,
	};


	// Enum /Script/UIChart.EStateChartResourceScope
	enum EStateChartResourceScope
	{
		EStateChartResourceScope__StateChart = 0,
		EStateChartResourceScope__Player = 1,
		EStateChartResourceScope__Global = 2,
	};

}
