#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CompeteUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct CompeteUI.FortCompeteTournamentBestResultsSummary
	// Size: 0x1C (0x1C - 0x0)
	struct FFortCompeteTournamentBestResultsSummary	
	{
	public:
		int32_t TotalScore; // 0x0(0x4)
		int32_t MatchesPlayed; // 0x4(0x4)
		int32_t NumVictoryRoyales; // 0x8(0x4)
		int32_t PlacementPoints; // 0xC(0x4)
		int32_t EliminationPoints; // 0x10(0x4)
		int32_t EntryFeePoints; // 0x14(0x4)
		bool bIsValidSummary; // 0x18(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
	};


	// Struct CompeteUI.FortCompeteTournamentDisplayInfo
	// Inherited from FTableRowBase
	// Size: 0x170 (0x178 - 0x8)
	struct FFortCompeteTournamentDisplayInfo : public FTableRowBase	
	{
	public:
		FText TitleLine1; // 0x8(0x10)
		FText TitleLine2; // 0x18(0x10)
		FText ScheduleInfo; // 0x28(0x10)
		FText FlavorDescription; // 0x38(0x10)
		FText DetailsDescription; // 0x48(0x10)
		FText ShortFormatTitle; // 0x58(0x10)
		FText LongFormatTitle; // 0x68(0x10)
		FText BackgroundTitle; // 0x78(0x10)
		int32_t PinScoreRequirement; // 0x88(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		FText PinEarnedText; // 0x90(0x10)
		FLinearColor BaseColor; // 0xA0(0x10)
		FLinearColor PrimaryColor; // 0xB0(0x10)
		FLinearColor SecondaryColor; // 0xC0(0x10)
		FLinearColor HighlightColor; // 0xD0(0x10)
		FLinearColor TitleColor; // 0xE0(0x10)
		FLinearColor ShadowColor; // 0xF0(0x10)
		FLinearColor BackgroundLeftColor; // 0x100(0x10)
		FLinearColor BackgroundRightColor; // 0x110(0x10)
		FLinearColor BackgroundTextColor; // 0x120(0x10)
		FLinearColor PosterFadeColor; // 0x130(0x10)
		FText AlertText; // 0x140(0x10)
		FText SeriesPointLeaderboardName; // 0x150(0x10)
		EFortTournamentAlertType AlertType; // 0x160(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x161(0x7) UNKNOWN PROPERTY
		TArray RoundDisplayNames; // 0x168(0x10)
	};


	// Struct CompeteUI.FortCompeteTournamentStyleInfo
	// Inherited from FTableRowBase
	// Size: 0xA0 (0xA8 - 0x8)
	struct FFortCompeteTournamentStyleInfo : public FTableRowBase	
	{
	public:
		FLinearColor BaseColor; // 0x8(0x10)
		FLinearColor PrimaryColor; // 0x18(0x10)
		FLinearColor SecondaryColor; // 0x28(0x10)
		FLinearColor HighlightColor; // 0x38(0x10)
		FLinearColor TitleColor; // 0x48(0x10)
		FLinearColor ShadowColor; // 0x58(0x10)
		FLinearColor BackgroundLeftColor; // 0x68(0x10)
		FLinearColor BackgroundRightColor; // 0x78(0x10)
		FLinearColor BackgroundTextColor; // 0x88(0x10)
		FLinearColor PosterFadeColor; // 0x98(0x10)
	};

}
