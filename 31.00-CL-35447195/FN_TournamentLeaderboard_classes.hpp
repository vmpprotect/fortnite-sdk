#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TournamentLeaderboard
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Compete/TournamentLeaderboard/ModalMessages/WatchLive/VM_WatchLiveItemDebug.VM_WatchLiveItemDebug_C
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x30 (0x98 - 0x68)
	class UVM_WatchLiveItemDebug_C : public UMVVMViewModelBase	
	{
	public:
		FText Time; // 0x68(0x10)
		int32_t Index; // 0x78(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		TArray TeamPlayersInfo; // 0x80(0x10)
		int32_t Matches; // 0x90(0x4)
		int32_t Points; // 0x94(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Compete/TournamentLeaderboard/ModalMessages/WatchLive/VM_WatchLiveItemDebug.VM_WatchLiveItemDebug_C");
			return ret;
		}
	};


	// Class /Compete/TournamentLeaderboard/ModalMessages/WatchLive/VM_WatchLiveModalDebug.VM_WatchLiveModalDebug_C
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x88 (0xF0 - 0x68)
	class UVM_WatchLiveModalDebug_C : public UMVVMViewModelBase	
	{
	public:
		TArray LiveSlotsData; // 0x68(0x10)
		FText Title; // 0x78(0x10)
		UVM_WatchLiveItemDebug_C PlayerSlotData; // 0x88(0x8)
		FText LastUpdatedTime; // 0x90(0x10)
		FText RoundName; // 0xA0(0x10)
		FText TournamentName; // 0xB0(0x10)
		FText TournamentBattleType; // 0xC0(0x10)
		TEnumAsByte TournamentTeamType; // 0xD0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		UMaterialInstance BattleIcon; // 0xD8(0x8)
		FText RoundDateTime; // 0xE0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Compete/TournamentLeaderboard/ModalMessages/WatchLive/VM_WatchLiveModalDebug.VM_WatchLiveModalDebug_C");
			return ret;
		}

		void GetTop50Points(int32_t& Points); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D3F51B300
		void GetPlacement PTS(double& Placement PTS); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D3F519200
		void GetEliminationsPTS(double& Eliminations PTS); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D3F519000
		void GetAvgPoints(double& AvgPoints); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D3F518200
		void GetAvgPlacement(double& AvgElims); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D3F518300
		void GetAvgElims(double& AvgElims); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D3F514200
		void GetVictoryRoyales(int32_t& Victory Royales); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D41FAB700
		void GetMaxPoints(int32_t& Points); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D3F518E00
		void CreateLiveSlotsItems(TArray& LiveSlotsData); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D3F518F00
	};

}
