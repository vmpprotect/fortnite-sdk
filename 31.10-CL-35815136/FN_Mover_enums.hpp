#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Mover
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/Mover.ELayeredMove_ConstantVelocitySettingsFlags
	enum ELayeredMove_ConstantVelocitySettingsFlags
	{
		ELayeredMove_ConstantVelocitySettingsFlags__NoFlags = 0,
		ELayeredMove_ConstantVelocitySettingsFlags__VelocityStartRelative = 1,
		ELayeredMove_ConstantVelocitySettingsFlags__VelocityAlwaysRelative = 2,
	};


	// Enum /Script/Mover.ELayeredMoveFinishVelocityMode
	enum ELayeredMoveFinishVelocityMode
	{
		ELayeredMoveFinishVelocityMode__MaintainLastRootMotionVelocity = 0,
		ELayeredMoveFinishVelocityMode__SetVelocity = 1,
		ELayeredMoveFinishVelocityMode__ClampVelocity = 2,
	};


	// Enum /Script/Mover.EMoveMixMode
	enum EMoveMixMode
	{
		EMoveMixMode__AdditiveVelocity = 0,
		EMoveMixMode__OverrideVelocity = 1,
		EMoveMixMode__OverrideAll = 2,
	};


	// Enum /Script/Mover.EMoveInputType
	enum EMoveInputType
	{
		EMoveInputType__Invalid = 0,
		EMoveInputType__DirectionalIntent = 1,
		EMoveInputType__Velocity = 2,
	};

}
