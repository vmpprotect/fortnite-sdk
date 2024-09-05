#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NiagaraShader
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/NiagaraShader.ENiagaraMipMapGenerationType
	enum ENiagaraMipMapGenerationType
	{
		ENiagaraMipMapGenerationType__Unfiltered = 0,
		ENiagaraMipMapGenerationType__Linear = 1,
		ENiagaraMipMapGenerationType__Blur1 = 2,
		ENiagaraMipMapGenerationType__Blur2 = 3,
		ENiagaraMipMapGenerationType__Blur3 = 4,
		ENiagaraMipMapGenerationType__Blur4 = 5,
	};


	// Enum /Script/NiagaraShader.ENiagaraGpuDispatchType
	enum ENiagaraGpuDispatchType
	{
		ENiagaraGpuDispatchType__OneD = 0,
		ENiagaraGpuDispatchType__TwoD = 1,
		ENiagaraGpuDispatchType__ThreeD = 2,
		ENiagaraGpuDispatchType__Custom = 3,
	};


	// Enum /Script/NiagaraShader.ENiagaraDirectDispatchElementType
	enum ENiagaraDirectDispatchElementType
	{
		ENiagaraDirectDispatchElementType__NumThreads = 0,
		ENiagaraDirectDispatchElementType__NumThreadsNoClipping = 1,
		ENiagaraDirectDispatchElementType__NumGroups = 2,
	};


	// Enum /Script/NiagaraShader.ENiagaraSimStageExecuteBehavior
	enum ENiagaraSimStageExecuteBehavior
	{
		ENiagaraSimStageExecuteBehavior__Always = 0,
		ENiagaraSimStageExecuteBehavior__OnSimulationReset = 1,
		ENiagaraSimStageExecuteBehavior__NotOnSimulationReset = 2,
	};


	// Enum /Script/NiagaraShader.FNiagaraCompileEventSeverity
	enum FNiagaraCompileEventSeverity
	{
		FNiagaraCompileEventSeverity__Log = 0,
		FNiagaraCompileEventSeverity__Display = 1,
		FNiagaraCompileEventSeverity__Warning = 2,
		FNiagaraCompileEventSeverity__Error = 3,
	};


	// Enum /Script/NiagaraShader.FNiagaraCompileEventSource
	enum FNiagaraCompileEventSource
	{
		FNiagaraCompileEventSource__Unset = 0,
		FNiagaraCompileEventSource__ScriptDependency = 1,
	};

}
