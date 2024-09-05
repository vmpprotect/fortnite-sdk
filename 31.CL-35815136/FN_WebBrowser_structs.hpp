#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WebBrowser
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct WebBrowser.WebJSCallbackBase
	// Size: 0x20 (0x20 - 0x0)
	struct FWebJSCallbackBase	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
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
