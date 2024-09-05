#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Menu
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /JunoUI/Menu/Map/BP_JunoPingIndicators.BP_JunoPingIndicators_C
	// Inherited from UJunoMapPingIndicators -> UJunoMapIndicatorType -> UObject
	// Size: 0x0 (0x140 - 0x140)
	class UBP_JunoPingIndicators_C : public UJunoMapPingIndicators	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/JunoUI/Menu/Map/BP_JunoPingIndicators.BP_JunoPingIndicators_C");
			return ret;
		}
	};


	// Class /JunoUI/Menu/Map/BP_JunoMarkerIndicators.BP_JunoMarkerIndicators_C
	// Inherited from UJunoMapMarkerIndicators -> UJunoMapIndicatorType -> UObject
	// Size: 0x0 (0x98 - 0x98)
	class UBP_JunoMarkerIndicators_C : public UJunoMapMarkerIndicators	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/JunoUI/Menu/Map/BP_JunoMarkerIndicators.BP_JunoMarkerIndicators_C");
			return ret;
		}
	};


	// Class /JunoUI/Menu/Map/BP_JunoTeamIndicators.BP_JunoTeamIndicators_C
	// Inherited from UJunoMapTeamIndicators -> UJunoMapIndicatorType -> UObject
	// Size: 0x0 (0x160 - 0x160)
	class UBP_JunoTeamIndicators_C : public UJunoMapTeamIndicators	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/JunoUI/Menu/Map/BP_JunoTeamIndicators.BP_JunoTeamIndicators_C");
			return ret;
		}
	};


	// Class /JunoBattleBusUI/Menu/Map/Indicators/BP_BattleBusRouteIndicator.BP_BattleBusRouteIndicator_C
	// Inherited from UJunoBattleBusRouteIndicator -> UJunoMapIndicatorType -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UBP_BattleBusRouteIndicator_C : public UJunoBattleBusRouteIndicator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/JunoBattleBusUI/Menu/Map/Indicators/BP_BattleBusRouteIndicator.BP_BattleBusRouteIndicator_C");
			return ret;
		}
	};

}
