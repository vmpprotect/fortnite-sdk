#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Effects
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct /Game/Effects/Niagara/Blueprints/Struc_NiagaraParameters.Struc_NiagaraParameters
	// Size: 0x44 (0x44 - 0x0)
	struct FStruc_NiagaraParameters	
	{
	public:
		TEnumAsByte<ENUM_NiagaraParameterSetup> ParameterSelection_14_A6D4854946F722970AD7D0AEC96E4705; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName FloatParameterName_17_6AFBA48F43B44BD1ED9841983BEFA202; // 0x4(0x4)
		float FloatParameterValue_28_AC98B6464E1CD803B50B47AEC91741EC; // 0x8(0x4)
		FName VectorParameterName_20_71917CFB490B3D5D3E0864A3EE90C666; // 0xC(0x4)
		FVector VectorParameterValue_27_248856604659F589FF5D4FA5FF52E013; // 0x10(0x18)
		FName LinearColorparameterName_22_69C61F8D45C74F98203920856CAD5ADE; // 0x28(0x4)
		FLinearColor LinearColorParameterValue_29_861B08ED408F0F612BF509A2A94F377F; // 0x2C(0x10)
		FName IntegerParameterName_24_98306BA7452D90289F6EE9954C4F2B1D; // 0x3C(0x4)
		int32_t IntegerParameterValue_25_BB84ADEA4515AABD3B9AC6A04453D826; // 0x40(0x4)
	};


	// Struct /Game/Effects/Niagara/Blueprints/FN_TimedNiagaraNotify/AnimCurveParameterPair.AnimCurveParameterPair
	// Size: 0x8 (0x8 - 0x0)
	struct FAnimCurveParameterPair	
	{
	public:
		FName UserVariableName_5_C3E793D64B2060301331AC805C0B1026; // 0x0(0x4)
		FName AnimCurveName_6_457883094DB38A3EF423919EDE4D33C1; // 0x4(0x4)
	};

}
