#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: StaticMeshDescription
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class StaticMeshDescription.StaticMeshDescription
	// Inherited from UMeshDescriptionBase -> UObject
	// Size: 0x0 (0x2F0 - 0x2F0)
	class UStaticMeshDescription : public UMeshDescriptionBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StaticMeshDescription.StaticMeshDescription");
			return ret;
		}

		void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32_t UVIndex); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74BBE08D4(relative to base address)
		void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, FName& SlotName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BBE0780(relative to base address)
		FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32_t UVIndex); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBE0594(relative to base address)
		void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74BBE0124(relative to base address)
	};

}
