#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: UnrealEngineExperimental
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct UnrealEngineExperimental.PersistentLineBatcher
	// Size: 0x10 (0x10 - 0x0)
	struct FPersistentLineBatcher	
	{
	public:
		ULineBatchComponent* PersistentLineBatcher; // 0x0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct UnrealEngineExperimental.ScriptDiagnosticSourceLocation
	// Size: 0x20 (0x20 - 0x0)
	struct FScriptDiagnosticSourceLocation	
	{
	public:
		FString FilePath; // 0x0(0x10)
		FIntPoint RowSpan; // 0x10(0x8)
		FIntPoint ColSpan; // 0x18(0x8)
	};


	// Struct UnrealEngineExperimental.OnVerseRuntimeErrorMessage
	// Size: 0x18 (0x18 - 0x0)
	struct FOnVerseRuntimeErrorMessage	
	{
	public:
		FDateTime Timestamp; // 0x0(0x8)
		FText MessageStr; // 0x8(0x10)
	};


	// Struct UnrealEngineExperimental.OnUnrecoverableErrorMessage
	// Size: 0x28 (0x28 - 0x0)
	struct FOnUnrecoverableErrorMessage	
	{
	public:
		FDateTime Timestamp; // 0x0(0x8)
		FText TitleStr; // 0x8(0x10)
		FText MessageStr; // 0x18(0x10)
	};


	// Struct UnrealEngineExperimental.ScriptDiagnosticMessage
	// Size: 0x50 (0x50 - 0x0)
	struct FScriptDiagnosticMessage	
	{
	public:
		TEnumAsByte<EScriptDiagnosticMessageType> MessageType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FDateTime Timestamp; // 0x8(0x8)
		FString Channel; // 0x10(0x10)
		FText MessageStr; // 0x20(0x10)
		FScriptDiagnosticSourceLocation SourceLocation; // 0x30(0x20)
	};


	// Struct UnrealEngineExperimental.ScriptScreenLogMessage
	// Inherited from FScriptDiagnosticMessage
	// Size: 0x8 (0x58 - 0x50)
	struct FScriptScreenLogMessage : public FScriptDiagnosticMessage	
	{
	public:
		FColor ScreenColor; // 0x50(0x4)
		float DisplayDuration; // 0x54(0x4)
	};


	// Struct UnrealEngineExperimental.ScriptScreenLogMessageWithLocalization
	// Size: 0x50 (0x50 - 0x0)
	struct FScriptScreenLogMessageWithLocalization	
	{
	public:
		FDateTime Timestamp; // 0x0(0x8)
		FLocalizableMessage Message; // 0x8(0x30)
		FString Prefix; // 0x38(0x10)
		FColor ScreenColor; // 0x48(0x4)
		float DisplayDuration; // 0x4C(0x4)
	};

}
