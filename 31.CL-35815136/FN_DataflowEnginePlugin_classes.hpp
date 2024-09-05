#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DataflowEnginePlugin
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DataflowEnginePlugin.DataflowActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class ADataflowActor : public AActor	
	{
	public:
		UDataflowComponent* DataflowComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowEnginePlugin.DataflowActor");
			return ret;
		}
	};


	// Class DataflowEnginePlugin.DataflowComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x148 (0x610 - 0x4C8)
	class UDataflowComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData00_1[0x148]; // 0x4C8(0x148) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowEnginePlugin.DataflowComponent");
			return ret;
		}
	};

}
