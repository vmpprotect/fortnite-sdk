#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Solaris
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
