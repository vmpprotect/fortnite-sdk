#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PictureInPictureDescriptors
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/PictureInPictureDescriptors.PictureInPictureAction
	enum PictureInPictureAction
	{
		PictureInPictureAction__NEXT = 0,
		PictureInPictureAction__PREVIOUS = 1,
		PictureInPictureAction__PLAY = 2,
		PictureInPictureAction__PAUSE = 3,
		PictureInPictureAction__PLAYPAUSE = 4,
		PictureInPictureAction__LIKE = 5,
		PictureInPictureAction__REPORT = 6,
		PictureInPictureAction__EXIT = 7,
		PictureInPictureAction__UNLIKE = 8,
		PictureInPictureAction__TOGGLELIKE = 9,
		PictureInPictureAction__TOGGLEFULLSCREEN = A,
		PictureInPictureAction__Count = B,
	};


	// Enum /Script/PictureInPictureDescriptors.PictureInPictureSourceType
	enum PictureInPictureSourceType
	{
		PictureInPictureSourceType__NONE = 0,
		PictureInPictureSourceType__URL = 1,
		PictureInPictureSourceType__BLURL = 2,
		PictureInPictureSourceType__EXTERNAL_ASSETS = 3,
	};

}
