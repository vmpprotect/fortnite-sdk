#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: StaticMeshDescription
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32_t UVIndex); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF414492638
		void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, FName& SlotName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414492558
		FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32_t UVIndex); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414492478
		void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414492398
	};

}
