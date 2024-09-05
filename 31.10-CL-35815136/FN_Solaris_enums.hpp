#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Solaris
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/Solaris.EVerseDigestVariant
	enum EVerseDigestVariant
	{
		EVerseDigestVariant__PublicAndEpicInternal = 0,
		EVerseDigestVariant__PublicOnly = 1,
	};


	// Enum /Script/Solaris.EVerseEnumFlags
	enum EVerseEnumFlags
	{
		EVerseEnumFlags__None = 0,
		EVerseEnumFlags__NativeBound = 1,
	};


	// Enum /Script/Solaris.EVersePackageScope
	enum EVersePackageScope
	{
		EVersePackageScope__PublicAPI = 0,
		EVersePackageScope__InternalAPI = 1,
		EVersePackageScope__PublicUser = 2,
		EVersePackageScope__InternalUser = 3,
	};


	// Enum /Script/Solaris.EVersePackageType
	enum EVersePackageType
	{
		EVersePackageType__VNI = 0,
		EVersePackageType__Content = 1,
		EVersePackageType__PublishedContent = 2,
		EVersePackageType__Assets = 3,
	};

}
