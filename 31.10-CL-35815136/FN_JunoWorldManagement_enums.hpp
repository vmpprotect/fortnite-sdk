#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoWorldManagement
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/JunoWorldManagement.EJunoWorldOccupantKind
	enum EJunoWorldOccupantKind
	{
		EJunoWorldOccupantKind__Owner = 0,
		EJunoWorldOccupantKind__Keyholder = 1,
		EJunoWorldOccupantKind__Guest = 2,
		EJunoWorldOccupantKind__Count = 3,
	};


	// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_BuildMode
	enum EJunoWorldSettingOptions_BuildMode
	{
		EJunoWorldSettingOptions_BuildMode__Survival = 0,
		EJunoWorldSettingOptions_BuildMode__Sandbox = 1,
		EJunoWorldSettingOptions_BuildMode__Hardcore = 2,
		EJunoWorldSettingOptions_BuildMode__Cozy = 3,
	};


	// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_Difficulty
	enum EJunoWorldSettingOptions_Difficulty
	{
		EJunoWorldSettingOptions_Difficulty__Normal = 0,
		EJunoWorldSettingOptions_Difficulty__Hardcore = 1,
		EJunoWorldSettingOptions_Difficulty__Easy = 2,
	};


	// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_Death
	enum EJunoWorldSettingOptions_Death
	{
		EJunoWorldSettingOptions_Death__On = 0,
		EJunoWorldSettingOptions_Death__Off = 1,
		EJunoWorldSettingOptions_Death__Permanent = 2,
	};


	// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_CreatureActivation
	enum EJunoWorldSettingOptions_CreatureActivation
	{
		EJunoWorldSettingOptions_CreatureActivation__On = 0,
		EJunoWorldSettingOptions_CreatureActivation__Off = 1,
	};


	// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_RecruitedCreaturePermaDeath
	enum EJunoWorldSettingOptions_RecruitedCreaturePermaDeath
	{
		EJunoWorldSettingOptions_RecruitedCreaturePermaDeath__On = 0,
		EJunoWorldSettingOptions_RecruitedCreaturePermaDeath__Off = 1,
	};


	// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_WorldSwitch
	enum EJunoWorldSettingOptions_WorldSwitch
	{
		EJunoWorldSettingOptions_WorldSwitch__On = 0,
		EJunoWorldSettingOptions_WorldSwitch__Off = 1,
	};


	// Enum /Script/JunoWorldManagement.EJunoWorldSettingCategory
	enum EJunoWorldSettingCategory
	{
		EJunoWorldSettingCategory__None = 0,
		EJunoWorldSettingCategory__Basic = 1,
		EJunoWorldSettingCategory__Advanced = 2,
	};

}
