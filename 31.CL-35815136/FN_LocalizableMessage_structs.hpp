#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LocalizableMessage
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct LocalizableMessage.LocalizableMessageParameterEntry
	// Size: 0x20 (0x20 - 0x0)
	struct FLocalizableMessageParameterEntry	
	{
	public:
		FString Key; // 0x0(0x10)
		FInstancedStruct Value; // 0x10(0x10)
	};


	// Struct LocalizableMessage.LocalizableMessage
	// Size: 0x30 (0x30 - 0x0)
	struct FLocalizableMessage	
	{
	public:
		FString Key; // 0x0(0x10)
		FString DefaultText; // 0x10(0x10)
		TArray<FLocalizableMessageParameterEntry> Substitutions; // 0x20(0x10)
	};


	// Struct LocalizableMessage.LocalizableMessageParameterInt
	// Size: 0x8 (0x8 - 0x0)
	struct FLocalizableMessageParameterInt	
	{
	public:
		int64_t Value; // 0x0(0x8)
	};


	// Struct LocalizableMessage.LocalizableMessageParameterFloat
	// Size: 0x8 (0x8 - 0x0)
	struct FLocalizableMessageParameterFloat	
	{
	public:
		double Value; // 0x0(0x8)
	};


	// Struct LocalizableMessage.LocalizableMessageParameterString
	// Size: 0x10 (0x10 - 0x0)
	struct FLocalizableMessageParameterString	
	{
	public:
		FString Value; // 0x0(0x10)
	};


	// Struct LocalizableMessage.LocalizableMessageParameterMessage
	// Size: 0x30 (0x30 - 0x0)
	struct FLocalizableMessageParameterMessage	
	{
	public:
		FLocalizableMessage Value; // 0x0(0x30)
	};

}
