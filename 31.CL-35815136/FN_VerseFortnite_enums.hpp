#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseFortnite
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/VerseFortnite.ECharacterLook
	enum ECharacterLook
	{
		ECharacterLook__FortniteCharacter = 0,
		ECharacterLook__CharacterBlueprint = 1,
	};


	// Enum /Script/VerseFortnite.ENPCCharacterMovement
	enum ENPCCharacterMovement
	{
		ENPCCharacterMovement__Default = 0,
		ENPCCharacterMovement__RetargetFromFortniteCharacter = 1,
		ENPCCharacterMovement__AnimationPreset = 2,
	};


	// Enum /Script/VerseFortnite.ETeamOption
	enum ETeamOption
	{
		ETeamOption__Index = 0,
		ETeamOption__WildlifeAndCreature = 1,
		ETeamOption__Neutral = 2,
	};


	// Enum /Script/VerseFortnite.ENPCIndicatorCondition
	enum ENPCIndicatorCondition
	{
		ENPCIndicatorCondition__Never = 0,
		ENPCIndicatorCondition__Allies = 1,
		ENPCIndicatorCondition__Hostiles = 2,
		ENPCIndicatorCondition__Always = 3,
	};


	// Enum /Script/VerseFortnite.EPreferredRenderingMode
	enum EPreferredRenderingMode
	{
		EPreferredRenderingMode__MaximizeFrameRate = 0,
		EPreferredRenderingMode__MaximizeResolution = 1,
	};

}
