#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WebBrowser
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct WebBrowser.WebJSCallbackBase
	// Size: 0x20 (0x20 - 0x0)
	struct FWebJSCallbackBase	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct WebBrowser.WebJSFunction
	// Inherited from FWebJSCallbackBase
	// Size: 0x0 (0x20 - 0x20)
	struct FWebJSFunction : public FWebJSCallbackBase	
	{
	public:
	};


	// Struct WebBrowser.WebJSResponse
	// Inherited from FWebJSCallbackBase
	// Size: 0x0 (0x20 - 0x20)
	struct FWebJSResponse : public FWebJSCallbackBase	
	{
	public:
	};

}
