#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Chooser
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/Chooser.EBoolColumnCellValue
	enum EBoolColumnCellValue
	{
		EBoolColumnCellValue__MatchFalse = 0,
		EBoolColumnCellValue__MatchTrue = 1,
		EBoolColumnCellValue__MatchAny = 2,
	};


	// Enum /Script/Chooser.EContextObjectDirection
	enum EContextObjectDirection
	{
		EContextObjectDirection__Read = 0,
		EContextObjectDirection__Write = 1,
		EContextObjectDirection__ReadWrite = 2,
	};


	// Enum /Script/Chooser.EEnumColumnCellValueComparison
	enum EEnumColumnCellValueComparison
	{
		EEnumColumnCellValueComparison__MatchEqual = 0,
		EEnumColumnCellValueComparison__MatchNotEqual = 1,
		EEnumColumnCellValueComparison__MatchAny = 2,
		EEnumColumnCellValueComparison__Modulus = 3,
	};


	// Enum /Script/Chooser.EObjectChooserResultType
	enum EObjectChooserResultType
	{
		EObjectChooserResultType__ObjectResult = 0,
		EObjectChooserResultType__ClassResult = 1,
	};


	// Enum /Script/Chooser.EObjectClassColumnCellValueComparison
	enum EObjectClassColumnCellValueComparison
	{
		EObjectClassColumnCellValueComparison__Equal = 0,
		EObjectClassColumnCellValueComparison__NotEqual = 1,
		EObjectClassColumnCellValueComparison__SubClassOf = 2,
		EObjectClassColumnCellValueComparison__NotSubClassOf = 3,
		EObjectClassColumnCellValueComparison__Any = 4,
	};


	// Enum /Script/Chooser.EObjectColumnCellValueComparison
	enum EObjectColumnCellValueComparison
	{
		EObjectColumnCellValueComparison__MatchEqual = 0,
		EObjectColumnCellValueComparison__MatchNotEqual = 1,
		EObjectColumnCellValueComparison__MatchAny = 2,
		EObjectColumnCellValueComparison__Modulus = 3,
	};


	// Enum /Script/Chooser.EChooserEvaluationFrequency
	enum EChooserEvaluationFrequency
	{
		EChooserEvaluationFrequency__OnInitialUpdate = 0,
		EChooserEvaluationFrequency__OnBecomeRelevant = 1,
		EChooserEvaluationFrequency__OnLoop = 2,
		EChooserEvaluationFrequency__OnUpdate = 3,
	};

}
