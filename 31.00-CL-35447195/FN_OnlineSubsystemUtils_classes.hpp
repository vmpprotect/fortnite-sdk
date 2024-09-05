#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: OnlineSubsystemUtils
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.AchievementBlueprintLibrary");
			return ret;
		}

		void GetCachedAchievementProgress(UObject WorldContextObject, APlayerController PlayerController, FName AchievementID, bool& bFoundID, float& Progress); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41458E478
		void GetCachedAchievementDescription(UObject WorldContextObject, APlayerController PlayerController, FName AchievementID, bool& bFoundID, FText& Title, FText& LockedDescription, FText& UnlockedDescription, bool& bHidden); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41458E398
	};


	// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
	// Inherited from UOnlineBlueprintCallProxyBase -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x50(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy");
			return ret;
		}

		UAchievementQueryCallbackProxy CacheAchievements(UObject WorldContextObject, APlayerController PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458E638
		UAchievementQueryCallbackProxy CacheAchievementDescriptions(UObject WorldContextObject, APlayerController PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458E558
	};


	// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
	// Inherited from UOnlineBlueprintCallProxyBase -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData01_7[0x30]; // 0x50(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy");
			return ret;
		}

		UAchievementWriteCallbackProxy WriteAchievementProgress(UObject WorldContextObject, APlayerController PlayerController, FName AchievementName, float Progress, int32_t UserTag); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458E718
	};


	// Class OnlineSubsystemUtils.ConnectionCallbackProxy
	// Inherited from UOnlineBlueprintCallProxyBase -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x50(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.ConnectionCallbackProxy");
			return ret;
		}

		UConnectionCallbackProxy ConnectToService(UObject WorldContextObject, APlayerController PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458E7F8
	};


	// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
	// Inherited from UOnlineBlueprintCallProxyBase -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData01_7[0x48]; // 0x50(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.CreateSessionCallbackProxy");
			return ret;
		}

		UCreateSessionCallbackProxy CreateSession(UObject WorldContextObject, APlayerController PlayerController, int32_t PublicConnections, bool bUseLAN, bool bUseLobbiesIfAvailable); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458E8D8
	};


	// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
	// Inherited from UOnlineBlueprintCallProxyBase -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x50(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.DestroySessionCallbackProxy");
			return ret;
		}

		UDestroySessionCallbackProxy DestroySession(UObject WorldContextObject, APlayerController PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458E9B8
	};


	// Class OnlineSubsystemUtils.EndMatchCallbackProxy
	// Inherited from UOnlineBlueprintCallProxyBase -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData01_7[0x30]; // 0x50(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.EndMatchCallbackProxy");
			return ret;
		}

		UEndMatchCallbackProxy EndMatch(UObject WorldContextObject, APlayerController PlayerController, TScriptInterface MatchActor, FString MatchID, TEnumAsByte LocalPlayerOutcome, TEnumAsByte OtherPlayersOutcome); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458EA98
	};


	// Class OnlineSubsystemUtils.EndTurnCallbackProxy
	// Inherited from UOnlineBlueprintCallProxyBase -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x50(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.EndTurnCallbackProxy");
			return ret;
		}

		UEndTurnCallbackProxy EndTurn(UObject WorldContextObject, APlayerController PlayerController, FString MatchID, TScriptInterface TurnBasedMatchInterface); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458EB78
	};


	// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
	// Inherited from UOnlineBlueprintCallProxyBase -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData01_7[0x40]; // 0x50(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.FindSessionsCallbackProxy");
			return ret;
		}

		FString GetServerName(FBlueprintSessionResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41458EFD8
		int32_t GetPingInMs(FBlueprintSessionResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41458EEF8
		int32_t GetMaxPlayers(FBlueprintSessionResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41458EE18
		int32_t GetCurrentPlayers(FBlueprintSessionResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41458ED38
		UFindSessionsCallbackProxy FindSessions(UObject WorldContextObject, APlayerController PlayerController, int32_t MaxResults, bool bUseLAN, bool bUseLobbies); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458EC58
	};


	// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
	// Inherited from UOnlineBlueprintCallProxyBase -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x58 (0x88 - 0x30)
	class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData01_7[0x38]; // 0x50(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");
			return ret;
		}

		UFindTurnBasedMatchCallbackProxy FindTurnBasedMatch(UObject WorldContextObject, APlayerController PlayerController, TScriptInterface MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458F0B8
	};


	// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UInAppPurchaseCallbackProxy2 : public UObject	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
		FMulticastInlineDelegate OnFailure; // 0x38(0x10)
		unsigned char UnknownData01_7[0x60]; // 0x48(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2");
			return ret;
		}

		UInAppPurchaseCallbackProxy2 CreateProxyObjectForInAppPurchaseUnprocessedPurchases(APlayerController PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458F358
		UInAppPurchaseCallbackProxy2 CreateProxyObjectForInAppPurchaseQueryOwned(APlayerController PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458F278
		UInAppPurchaseCallbackProxy2 CreateProxyObjectForInAppPurchase(APlayerController PlayerController, FInAppPurchaseProductRequest2& ProductRequest); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41458F198
	};


	// Class OnlineSubsystemUtils.InAppPurchaseCheckoutCallbackProxy
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UInAppPurchaseCheckoutCallbackProxy : public UObject	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
		FMulticastInlineDelegate OnFailure; // 0x38(0x10)
		unsigned char UnknownData01_7[0x58]; // 0x48(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.InAppPurchaseCheckoutCallbackProxy");
			return ret;
		}

		UInAppPurchaseCheckoutCallbackProxy CreateProxyObjectForInAppPurchaseCheckout(APlayerController PlayerController, FInAppPurchaseProductRequest2& ProductRequest); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41458F438
	};


	// Class OnlineSubsystemUtils.InAppPurchaseFinalizeProxy
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInAppPurchaseFinalizeProxy : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.InAppPurchaseFinalizeProxy");
			return ret;
		}

		UInAppPurchaseFinalizeProxy CreateProxyObjectForInAppPurchaseFinalize(FInAppPurchaseReceiptInfo2& InAppPurchaseReceipt, APlayerController PlayerController); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41458F518
	};


	// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UInAppPurchaseQueryCallbackProxy2 : public UObject	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
		FMulticastInlineDelegate OnFailure; // 0x38(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x48(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2");
			return ret;
		}

		UInAppPurchaseQueryCallbackProxy2 CreateProxyObjectForInAppPurchaseQuery(APlayerController PlayerController, TArray& ProductIdentifiers); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41458F5F8
	};


	// Class OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UInAppPurchaseReceiptsCallbackProxy : public UObject	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
		FMulticastInlineDelegate OnFailure; // 0x38(0x10)
		unsigned char UnknownData01_7[0x40]; // 0x48(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy");
			return ret;
		}

		UInAppPurchaseReceiptsCallbackProxy CreateProxyObjectForInAppPurchaseRestoreOwnedProducts(APlayerController PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458F898
		UInAppPurchaseReceiptsCallbackProxy CreateProxyObjectForInAppPurchaseQueryOwnedProducts(APlayerController PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458F7B8
		UInAppPurchaseReceiptsCallbackProxy CreateProxyObjectForInAppPurchaseGetKnownReceipts(APlayerController PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458F6D8
	};


	// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
	// Inherited from UObject
	// Size: 0x88 (0xB0 - 0x28)
	class UInAppPurchaseRestoreCallbackProxy2 : public UObject	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
		FMulticastInlineDelegate OnFailure; // 0x38(0x10)
		unsigned char UnknownData01_7[0x68]; // 0x48(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2");
			return ret;
		}

		UInAppPurchaseRestoreCallbackProxy2 CreateProxyObjectForInAppPurchaseRestore(TArray& ConsumableProductFlags, APlayerController PlayerController); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41458F978
	};


	// Class OnlineSubsystemUtils.IpConnection
	// Inherited from UNetConnection -> UPlayer -> UObject
	// Size: 0x90 (0x1EA0 - 0x1E10)
	class UIpConnection : public UNetConnection	
	{
	public:
		unsigned char UnknownData02_3[0x74]; // 0x1E10(0x74) UNKNOWN PROPERTY
		float SocketErrorDisconnectDelay; // 0x1E84(0x4)
		unsigned char UnknownData03_7[0x18]; // 0x1E88(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.IpConnection");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.IpNetDriver
	// Inherited from UNetDriver -> UObject
	// Size: 0xB0 (0x940 - 0x890)
	class UIpNetDriver : public UNetDriver	
	{
	public:
		bool LogPortUnreach : 1; // 0x890:0(0x1)
		bool AllowPlayerPortUnreach : 1; // 0x890:1(0x1)
		bool bExitOnBindFailure : 1; // 0x890:2(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x891(0x3) UNKNOWN PROPERTY
		uint32_t MaxPortCountToTry; // 0x894(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x898(0x4) UNKNOWN PROPERTY
		uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x89C(0x4)
		uint32_t ServerDesiredSocketSendBufferBytes; // 0x8A0(0x4)
		uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x8A4(0x4)
		uint32_t ClientDesiredSocketSendBufferBytes; // 0x8A8(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x8AC(0x4) UNKNOWN PROPERTY
		double MaxSecondsInReceive; // 0x8B0(0x8)
		int32_t NbPacketsBetweenReceiveTimeTest; // 0x8B8(0x4)
		float ResolutionConnectionTimeout; // 0x8BC(0x4)
		unsigned char UnknownData07_7[0x80]; // 0x8C0(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.IpNetDriver");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
	// Inherited from UOnlineBlueprintCallProxyBase -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x168 (0x198 - 0x30)
	class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData01_7[0x148]; // 0x50(0x148) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.JoinSessionCallbackProxy");
			return ret;
		}

		UJoinSessionCallbackProxy JoinSession(UObject WorldContextObject, APlayerController PlayerController, FBlueprintSessionResult& SearchResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41458FA58
	};


	// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
			return ret;
		}

		bool WriteLeaderboardInteger(APlayerController PlayerController, FName StatName, int32_t StatValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458FB38
	};


	// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class ULeaderboardFlushCallbackProxy : public UObject	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
		FMulticastInlineDelegate OnFailure; // 0x38(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x48(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
			return ret;
		}

		ULeaderboardFlushCallbackProxy CreateProxyObjectForFlush(APlayerController PlayerController, FName SessionName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458FC18
	};


	// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class ULeaderboardQueryCallbackProxy : public UObject	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
		FMulticastInlineDelegate OnFailure; // 0x38(0x10)
		unsigned char UnknownData01_7[0x48]; // 0x48(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
			return ret;
		}

		ULeaderboardQueryCallbackProxy CreateProxyObjectForIntQuery(APlayerController PlayerController, FName StatName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458FCF8
	};


	// Class OnlineSubsystemUtils.LogoutCallbackProxy
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class ULogoutCallbackProxy : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x50(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.LogoutCallbackProxy");
			return ret;
		}

		ULogoutCallbackProxy Logout(UObject WorldContextObject, APlayerController PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41458FDD8
	};


	// Class OnlineSubsystemUtils.OnlineBeacon
	// Inherited from AActor -> UObject
	// Size: 0x30 (0x2C0 - 0x290)
	class AOnlineBeacon : public AActor	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		float BeaconConnectionInitialTimeout; // 0x298(0x4)
		float BeaconConnectionTimeout; // 0x29C(0x4)
		UNetDriver NetDriver; // 0x2A0(0x8)
		unsigned char UnknownData03_7[0x18]; // 0x2A8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineBeacon");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.OnlineBeaconClient
	// Inherited from AOnlineBeacon -> AActor -> UObject
	// Size: 0x60 (0x320 - 0x2C0)
	class AOnlineBeaconClient : public AOnlineBeacon	
	{
	public:
		AOnlineBeaconHostObject BeaconOwner; // 0x2C0(0x8)
		UNetConnection BeaconConnection; // 0x2C8(0x8)
		EBeaconConnectionState ConnectionState; // 0x2D0(0x1)
		unsigned char UnknownData01_7[0x4F]; // 0x2D1(0x4F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineBeaconClient");
			return ret;
		}

		void ClientOnConnected(); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient 0x7FF41458FEB8
	};


	// Class OnlineSubsystemUtils.OnlineBeaconHost
	// Inherited from AOnlineBeacon -> AActor -> UObject
	// Size: 0x110 (0x3D0 - 0x2C0)
	class AOnlineBeaconHost : public AOnlineBeacon	
	{
	public:
		int32_t ListenPort; // 0x2C0(0x4)
		bool bReuseAddressAndPort; // 0x2C4(0x1)
		bool bAuthRequired; // 0x2C5(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x2C6(0x2) UNKNOWN PROPERTY
		uint32_t MaxAuthTokenSize; // 0x2C8(0x4)
		unsigned char UnknownData04_6[0x54]; // 0x2CC(0x54) UNKNOWN PROPERTY
		TArray ClientActors; // 0x320(0x10)
		unsigned char UnknownData05_7[0xA0]; // 0x330(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineBeaconHost");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.OnlineBeaconHostObject
	// Inherited from AActor -> UObject
	// Size: 0x28 (0x2B8 - 0x290)
	class AOnlineBeaconHostObject : public AActor	
	{
	public:
		FString BeaconTypeName; // 0x290(0x10)
		UClass ClientBeaconActorClass; // 0x2A0(0x8)
		TArray ClientActors; // 0x2A8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineBeaconHostObject");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
	// Inherited from UOnlineEngineInterface -> UObject
	// Size: 0x170 (0x198 - 0x28)
	class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface	
	{
	public:
		TMap MappedUniqueNetIdTypes; // 0x28(0x50)
		TArray CompatibleUniqueNetIdTypes; // 0x78(0x10)
		FName VoiceSubsystemNameOverride; // 0x88(0x4)
		unsigned char UnknownData02_6[0xFC]; // 0x8C(0xFC) UNKNOWN PROPERTY
		bool bOnlineServicesCompatibilityEnabled; // 0x188(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x189(0x7) UNKNOWN PROPERTY
		UOnlineEngineInterface OnlineServicesCompatibilityInterface; // 0x190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.OnlinePIESettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UOnlinePIESettings : public UDeveloperSettings	
	{
	public:
		bool bOnlinePIEEnabled; // 0x30(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		TArray Logins; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlinePIESettings");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
	// Inherited from UOnlineEngineInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UOnlineServicesEngineInterfaceImpl : public UOnlineEngineInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.OnlineSessionClient
	// Inherited from UOnlineSession -> UObject
	// Size: 0x1B8 (0x1E0 - 0x28)
	class UOnlineSessionClient : public UOnlineSession	
	{
	public:
		unsigned char UnknownData02_3[0x1B0]; // 0x28(0x1B0) UNKNOWN PROPERTY
		bool bIsFromInvite; // 0x1D8(0x1)
		bool bHandlingDisconnect; // 0x1D9(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x1DA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineSessionClient");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.PartyBeaconClient
	// Inherited from AOnlineBeaconClient -> AOnlineBeacon -> AActor -> UObject
	// Size: 0xC8 (0x3E8 - 0x320)
	class APartyBeaconClient : public AOnlineBeaconClient	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0x320(0x30) UNKNOWN PROPERTY
		FString DestSessionId; // 0x350(0x10)
		FPartyReservation PendingReservation; // 0x360(0x58)
		EClientRequestType RequestType; // 0x3B8(0x1)
		bool bPendingReservationSent; // 0x3B9(0x1)
		bool bCancelReservation; // 0x3BA(0x1)
		unsigned char UnknownData03_7[0x2D]; // 0x3BB(0x2D) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.PartyBeaconClient");
			return ret;
		}

		void ServerUpdateReservationRequest(FString SessionId, FPartyReservation ReservationUpdate); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414590698
		void ServerReservationRequest(FString SessionId, FPartyReservation Reservation); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF4145905B8
		void ServerRemoveMemberFromReservationRequest(FString SessionId, FPartyReservation ReservationUpdate); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF4145904D8
		void ServerCancelReservationRequest(FUniqueNetIdRepl PartyLeader); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF4145903F8
		void ServerAddOrUpdateReservationRequest(FString SessionId, FPartyReservation Reservation); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414590318
		void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414590238
		void ClientSendReservationFull(); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414590158
		void ClientReservationResponse(TEnumAsByte ReservationResponse); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414590078
		void ClientCancelReservationResponse(TEnumAsByte ReservationResponse); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF41458FF98
	};


	// Class OnlineSubsystemUtils.PartyBeaconHost
	// Inherited from AOnlineBeaconHostObject -> AActor -> UObject
	// Size: 0x78 (0x330 - 0x2B8)
	class APartyBeaconHost : public AOnlineBeaconHostObject	
	{
	public:
		UPartyBeaconState State; // 0x2B8(0x8)
		unsigned char UnknownData03_6[0x60]; // 0x2C0(0x60) UNKNOWN PROPERTY
		bool bLogoutOnSessionTimeout; // 0x320(0x1)
		bool bIsValidationStrRequired; // 0x321(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x322(0x2) UNKNOWN PROPERTY
		float SessionTimeoutSecs; // 0x324(0x4)
		float TravelSessionTimeoutSecs; // 0x328(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.PartyBeaconHost");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.PartyBeaconState
	// Inherited from UObject
	// Size: 0x70 (0x98 - 0x28)
	class UPartyBeaconState : public UObject	
	{
	public:
		FName SessionName; // 0x28(0x4)
		int32_t NumConsumedReservations; // 0x2C(0x4)
		int32_t MaxReservations; // 0x30(0x4)
		int32_t NumTeams; // 0x34(0x4)
		int32_t NumPlayersPerTeam; // 0x38(0x4)
		FName TeamAssignmentMethod; // 0x3C(0x4)
		int32_t ReservedHostTeamNum; // 0x40(0x4)
		int32_t ForceTeamNum; // 0x44(0x4)
		bool bRestrictCrossConsole; // 0x48(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		TArray PlatformCrossplayRestrictions; // 0x50(0x10)
		TArray PlatformTypeMapping; // 0x60(0x10)
		bool bEnableRemovalRequests; // 0x70(0x1)
		bool bRespectCompetitiveIntegrity; // 0x71(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x72(0x6) UNKNOWN PROPERTY
		TArray Reservations; // 0x78(0x10)
		unsigned char UnknownData05_7[0x10]; // 0x88(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.PartyBeaconState");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
	// Inherited from UOnlineBlueprintCallProxyBase -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x50(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.QuitMatchCallbackProxy");
			return ret;
		}

		UQuitMatchCallbackProxy QuitMatch(UObject WorldContextObject, APlayerController PlayerController, FString MatchID, TEnumAsByte Outcome, int32_t TurnTimeoutInSeconds); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414590778
	};


	// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x50(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy");
			return ret;
		}

		UShowLoginUICallbackProxy ShowExternalLoginUI(UObject WorldContextObject, APlayerController InPlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414590858
	};


	// Class OnlineSubsystemUtils.SpectatorBeaconClient
	// Inherited from AOnlineBeaconClient -> AOnlineBeacon -> AActor -> UObject
	// Size: 0xF8 (0x418 - 0x320)
	class ASpectatorBeaconClient : public AOnlineBeaconClient	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0x320(0x30) UNKNOWN PROPERTY
		FString DestSessionId; // 0x350(0x10)
		FSpectatorReservation PendingReservation; // 0x360(0x88)
		ESpectatorClientRequestType RequestType; // 0x3E8(0x1)
		bool bPendingReservationSent; // 0x3E9(0x1)
		bool bCancelReservation; // 0x3EA(0x1)
		unsigned char UnknownData03_7[0x2D]; // 0x3EB(0x2D) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.SpectatorBeaconClient");
			return ret;
		}

		void ServerReservationRequest(FString SessionId, FSpectatorReservation Reservation); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414590D98
		void ServerCancelReservationRequest(FUniqueNetIdRepl Spectator); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414590CB8
		void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414590BD8
		void ClientSendReservationFull(); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414590AF8
		void ClientReservationResponse(TEnumAsByte ReservationResponse); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414590A18
		void ClientCancelReservationResponse(TEnumAsByte ReservationResponse); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414590938
	};


	// Class OnlineSubsystemUtils.SpectatorBeaconHost
	// Inherited from AOnlineBeaconHostObject -> AActor -> UObject
	// Size: 0x78 (0x330 - 0x2B8)
	class ASpectatorBeaconHost : public AOnlineBeaconHostObject	
	{
	public:
		USpectatorBeaconState State; // 0x2B8(0x8)
		unsigned char UnknownData03_6[0x60]; // 0x2C0(0x60) UNKNOWN PROPERTY
		bool bLogoutOnSessionTimeout; // 0x320(0x1)
		bool bIsValidationStrRequired; // 0x321(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x322(0x2) UNKNOWN PROPERTY
		float SessionTimeoutSecs; // 0x324(0x4)
		float TravelSessionTimeoutSecs; // 0x328(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.SpectatorBeaconHost");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.SpectatorBeaconState
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class USpectatorBeaconState : public UObject	
	{
	public:
		FName SessionName; // 0x28(0x4)
		int32_t NumConsumedReservations; // 0x2C(0x4)
		int32_t MaxReservations; // 0x30(0x4)
		bool bRestrictCrossConsole; // 0x34(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		TArray Reservations; // 0x38(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.SpectatorBeaconState");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.TestBeaconClient
	// Inherited from AOnlineBeaconClient -> AOnlineBeacon -> AActor -> UObject
	// Size: 0x0 (0x320 - 0x320)
	class ATestBeaconClient : public AOnlineBeaconClient	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.TestBeaconClient");
			return ret;
		}

		void ServerPong(); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF414590F58
		void ClientPing(); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414590E78
	};


	// Class OnlineSubsystemUtils.TestBeaconHost
	// Inherited from AOnlineBeaconHostObject -> AActor -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class ATestBeaconHost : public AOnlineBeaconHostObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.TestBeaconHost");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.OnlineBeaconUnitTestClient
	// Inherited from AOnlineBeaconClient -> AOnlineBeacon -> AActor -> UObject
	// Size: 0x0 (0x320 - 0x320)
	class AOnlineBeaconUnitTestClient : public AOnlineBeaconClient	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineBeaconUnitTestClient");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.OnlineBeaconUnitTestHost
	// Inherited from AOnlineBeaconHost -> AOnlineBeacon -> AActor -> UObject
	// Size: 0x0 (0x3D0 - 0x3D0)
	class AOnlineBeaconUnitTestHost : public AOnlineBeaconHost	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineBeaconUnitTestHost");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.OnlineBeaconUnitTestHostObject
	// Inherited from AOnlineBeaconHostObject -> AActor -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class AOnlineBeaconUnitTestHostObject : public AOnlineBeaconHostObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineBeaconUnitTestHostObject");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.OnlineBeaconUnitTestNetConnection
	// Inherited from UIpConnection -> UNetConnection -> UPlayer -> UObject
	// Size: 0x0 (0x1EA0 - 0x1EA0)
	class UOnlineBeaconUnitTestNetConnection : public UIpConnection	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineBeaconUnitTestNetConnection");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.OnlineBeaconUnitTestNetDriver
	// Inherited from UIpNetDriver -> UNetDriver -> UObject
	// Size: 0x0 (0x940 - 0x940)
	class UOnlineBeaconUnitTestNetDriver : public UIpNetDriver	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineBeaconUnitTestNetDriver");
			return ret;
		}
	};


	// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary");
			return ret;
		}

		void RegisterTurnBasedMatchInterfaceObject(UObject WorldContextObject, APlayerController PlayerController, UObject Object); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145912D8
		void GetPlayerDisplayName(UObject WorldContextObject, APlayerController PlayerController, FString MatchID, int32_t PlayerIndex, FString& PlayerDisplayName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145911F8
		void GetMyPlayerIndex(UObject WorldContextObject, APlayerController PlayerController, FString MatchID, int32_t& PlayerIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414591118
		void GetIsMyTurn(UObject WorldContextObject, APlayerController PlayerController, FString MatchID, bool& bIsMyTurn); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414591038
	};


	// Class OnlineSubsystemUtils.VoipListenerSynthComponent
	// Inherited from USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x60 (0x8E0 - 0x880)
	class UVoipListenerSynthComponent : public USynthComponent	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0x880(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.VoipListenerSynthComponent");
			return ret;
		}

		bool IsIdling(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145913B8
	};

}
